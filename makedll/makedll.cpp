//
// Created by DiaLight on 14.10.2021.
//
#include <Windows.h>
#include <WinUser.h>
#include <cstdint>

#define DKII_EXE "DKII.EXE"
#define DKII_DLL "dk2.dll"

#ifndef EXPORTS_MAPPING
#error "EXPORTS_MAPPING not defined"
#endif
#ifndef REFERENCES_MAPPING
#error "REFERENCES_MAPPING not defined"
#endif

#define VAL(str) #str
#define TOSTRING(str) VAL(str)

void print(const char *msg, size_t len) {
  WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), msg, len, NULL, NULL);
}
void print(const char *msg) {
  const char *p = msg;
  while(*(++p));
  size_t len = p - msg;
  print(msg, len);
}
void printf(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  char msg[1024];
  wvsprintfA(msg, fmt, args);
  print(msg);
  va_end(args);
}

#define assert(cond) ((cond) || (printf(__FILE__ ":%d assertion failed: " #cond, __LINE__), ExitProcess(-1), 0))


void *__cdecl memcpy(void *dst, void const *src, size_t size) {
  auto *s = (const uint8_t *) src;
  auto *d = (uint8_t *) dst;
  while(size--) *d++ = *s++;
  return d;
}
void *__cdecl memset(void *dst, int val, size_t size) {
  auto *d = (uint8_t *) dst;
  while(size--) *d++ = val;
  return d;
}
void *__cdecl malloc(size_t size) {
  return HeapAlloc(GetProcessHeap(), 0, size);
}
void __cdecl free(void *ptr) {
  HeapFree(GetProcessHeap(), 0, ptr);
}
void *__cdecl realloc(void *block, size_t size) {
  return HeapReAlloc(GetProcessHeap(), 0, block, size);
}
void *__cdecl operator new(unsigned int size) {
  return malloc(size);
}
void __cdecl operator delete(void *ptr) noexcept {
  free(ptr);
}
void __cdecl operator delete(void *ptr, unsigned int) noexcept {
  free(ptr);
}
size_t __cdecl strlen(char const *str) {
  char const *p = str;
  while(*p) p++;
  return p - str;
}

int strcmp(const char *s1, const char *s2) {
  while(*s1 && (*s1 == *s2)) {
    s1++; s2++;
  }
  return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}
bool streq(const char *s1, const char *s2) {
  while(*s1) if(*s1++ != *s2++) return false;
  return true;
}
bool strneq(const char *s1, const char *s2, size_t len) {
  while(len && *s1) {
    if(*s1++ != *s2++) return false;
    len--;
  }
  return true;
}
void strcopy(char *to, const char *fr) {
  for(;(*to = *fr);++to,++fr);
}
void strncopy(char *to, const char *fr, size_t len) {
  for(;len && (*to = *fr);--len,++to,++fr);
  *to = '\0';
}

DWORD align_up(DWORD val, DWORD align) {
  return (val + align - 1) & ~(align - 1);
}

struct Buf {
  uint8_t *start = nullptr;
  uint8_t *tail = nullptr;
  uint8_t *end = nullptr;

  Buf() : start((uint8_t *) malloc(256)), tail(start), end(start + 256) {}
  ~Buf() {
    free(start);
  }

  size_t size() const {
    return tail - start;
  }

  void prepare(size_t size) {
    if((end - tail) < size) {
      size_t newLimit = tail - start + size;
      auto *buf = (uint8_t *) realloc(start, newLimit + newLimit / 3);
      tail = buf + (tail - start);
      start = buf;
      end = buf + newLimit;
    }
  }
  size_t fill(int val, size_t size) {
    prepare(size);
    memset(tail, val, size);
    size_t offs = tail - start;
    tail += size;
    return offs;
  }
  size_t write(const void *ptr, size_t size) {
    prepare(size);
    memcpy(tail, ptr, size);
    size_t offs = tail - start;
    tail += size;
    return offs;
  }
  void align(size_t align) {
    fill(0, align_up(size(), align) - size());
  }

};

bool readHandle(HANDLE hFile, Buf &buf) {
  DWORD size = GetFileSize(hFile, NULL);
  buf.prepare(size);
  uint8_t *pos = buf.tail;
  uint8_t *end = pos + size;
  while(pos < end) {
    DWORD read = 0;
    if(!ReadFile(hFile, pos, end - pos, &read, NULL)) break;
    pos += read;
  }
  if(pos != end) return false;
  buf.tail += size;
  return true;
}

bool readFile(Buf &buf, const char *file) {
  printf("Read %s\n", file);
  HANDLE hFile = CreateFileA(file, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  if (hFile == INVALID_HANDLE_VALUE) {
    printf("Could not open %s\n", file);
    return false;
  }
  bool res = readHandle(hFile, buf);
  CloseHandle(hFile);
  return res;
}

bool writeDk2(Buf &buf) {
  print("Write " DKII_DLL "\n");
  HANDLE hFile = CreateFileA(DKII_DLL, GENERIC_WRITE, 0, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
  if (hFile == INVALID_HANDLE_VALUE) {
    print("Could not create " DKII_DLL "\n");
    return false;
  }
  uint8_t *pos = buf.start;
  uint8_t *end = buf.tail;
  while(pos < end) {
    DWORD written = 0;
    if(!WriteFile(hFile, pos, end - pos, &written, NULL)) break;
    pos += written;
  }
  CloseHandle(hFile);
  return pos == end;
}

DWORD rva_to_raw(IMAGE_NT_HEADERS *nt, DWORD rva) {
  auto *sec = (IMAGE_SECTION_HEADER *) ((uint8_t *) nt + sizeof(IMAGE_NT_HEADERS));
  for (int i = 0; i < nt->FileHeader.NumberOfSections; ++i,++sec) {
    if(sec->VirtualAddress <= rva && rva < (sec->VirtualAddress + sec->Misc.VirtualSize)) {
      return rva - sec->VirtualAddress + sec->PointerToRawData;
    }
  }
  return 0;
}

struct Symbol {
  DWORD offs = 0;
  DWORD rva = 0;
};

struct Ref {
  DWORD offs = 0;
  Symbol *trg = nullptr;
};

template<typename T>
class Arr : public Buf {
public:
  Arr() = default;

  void add(T val) {
    write(&val, sizeof(val));
  }

};

struct Chunk : public Buf {
  Arr<Symbol *> symbols;
  Arr<Ref *> refs;
  size_t layout_offs = 0;

  ~Chunk() {
    for(auto **it = (Symbol **) symbols.start; it < (Symbol **) symbols.tail; it++) delete *it;
    for(auto **it = (Ref **) refs.start; it < (Ref **) refs.tail; it++) delete *it;
  }

  Ref *ref(size_t offs) {
    for(auto **it = (Ref **) refs.start; it < (Ref **) refs.tail; it++) {
      if((*it)->offs == offs) return *it;
    }
    auto *ref = new Ref();
    ref->offs = offs;
    refs.add(ref);
    return ref;
  }

  Symbol *sym(size_t offs) {
    for(auto **it = (Symbol **) symbols.start; it < (Symbol **) symbols.tail; it++) {
      if((*it)->offs == offs) return *it;
    }
    auto *sym = new Symbol();
    sym->offs = offs;
    symbols.add(sym);
    return sym;
  }

  void layout(size_t offs, DWORD rva) {
    layout_offs = offs;
    for(auto **it = (Symbol **) symbols.start; it < (Symbol **) symbols.tail; it++) {
      Symbol &sym = **it;
      sym.rva = rva + sym.offs;
    }
  }

  void link(uint8_t *layout_base) {
    for(auto **it = (Ref **) refs.start; it < (Ref **) refs.tail; it++) {
      Ref &ref = **it;
      Symbol &sym = *ref.trg;
      *((DWORD *) (layout_base + layout_offs + ref.offs)) = sym.rva;
    }
  }
};

int hex2int(char ch) {
  if(ch < '0') return -1;
  if(ch <= '9') return ch - '0';
  if(ch < 'A') return -1;
  if(ch <= 'F') return ch - 'A' + 10;
  if(ch < 'a') return -1;
  if(ch <= 'f') return ch - 'a' + 10;
  return -1;
}

char *read_line(char *line, size_t &len, const char *end) {
  char *pos = line;
  while(pos < end) {
    char ch = *pos;
    if(ch == '\r' || ch == '\n') break;
    pos++;
  }
  len = pos - line;
  while(true) {
    char ch = *pos;
    if(ch != '\r' && ch != '\n') break;
    pos++;
  }
  return pos;
}
bool parse_offs_name(char *line, size_t line_len, DWORD &offs, char *&name, size_t &len) {
  if(line[0] == '#') return false;  // #...
  if(line_len < 10) return false;  // XXXXXXXX n...
  DWORD textOffs = 0;
  for (int i = 0; i < 8; ++i) {
    char ch = line[7 - i];
    int d = hex2int(ch);
    if(d == -1) return false;
    textOffs |= d << (i * 4);
  }
  offs = textOffs;
  if(line[8] != ' ') return false;
  char *name_start = line + 9;
  char *name_end = name_start;
  char *line_end = line + line_len;
  while (name_end < line_end && *name_end != ' ') name_end++;
  name = name_start;
  len = name_end - name_start;
  return true;
}
enum RelocKind {
  Invalid,
  VA32,  // IMAGE_REL_I386_DIR32 -> IMAGE_REL_BASED_HIGHLOW
  REL32  // IMAGE_REL_I386_REL32 -> ignore
};
bool parse_reloc(char *line, size_t line_len, DWORD &src, DWORD &dst, RelocKind &kind) {
  if(line[0] == '#') return false;  // #...
  if(line_len < 23) return false;  // XXXXXXXX XXXXXXXX ??? ?...
  char *line_end = line + line_len;
  DWORD rva = 0;
  for (int i = 0; i < 8; ++i) {
    char ch = line[7 - i];
    int d = hex2int(ch);
    if(d == -1) return false;
    rva |= d << (i * 4);
  }
  line += 8;
  src = rva;
  rva = 0;
  if(*line != ' ') return false;
  line++;
  for (int i = 0; i < 8; ++i) {
    char ch = line[7 - i];
    int d = hex2int(ch);
    if(d == -1) return false;
    rva |= d << (i * 4);
  }
  line += 8;
  dst = rva;

  if(*line != ' ') return false;
  line++;

  // skip flags
  while(line < line_end && *line != ' ') line++;
  if(*line != ' ') return false;
  line++;

  // skip type
  char *type = line;
  while(line < line_end && *line != ' ') line++;
  size_t type_len = line - type;
  if(*line != ' ') return false;
  line++;

  if(strneq(type, "VA32", type_len)) {
    kind = VA32;
  } else if(strneq(type, "REL32", type_len)) {
    kind = REL32;
  } else {
    return false;
  }
  return true;
}

int main() {
  Buf dk2;
  if(!readFile(dk2, DKII_EXE)) return -1;
  Buf exportsMap;
  if(!readFile(exportsMap, TOSTRING(EXPORTS_MAPPING))) return -1;
  Buf refsMap;
  if(!readFile(refsMap, TOSTRING(REFERENCES_MAPPING))) return -1;
  auto *dos = (IMAGE_DOS_HEADER *) dk2.start;
  auto *nt = (IMAGE_NT_HEADERS *) (dk2.start + dos->e_lfanew);

  nt->FileHeader.Characteristics |= IMAGE_FILE_DLL;
//  print("Imports:\n");
//  auto *imp = (IMAGE_IMPORT_DESCRIPTOR *) (dk2 + rva_to_raw(nt, nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress));
  PIMAGE_SECTION_HEADER sections_start = IMAGE_FIRST_SECTION(nt);
  PIMAGE_SECTION_HEADER sections_end = sections_start + nt->FileHeader.NumberOfSections;
  assert(((uint8_t *) (sections_end + 3) - dk2.start) <= nt->OptionalHeader.SizeOfHeaders);
  DWORD virtual_max = 0;
  DWORD raw_max = 0;
  for(PIMAGE_SECTION_HEADER section = sections_start; section < sections_end; section++) {
    DWORD virtual_end = section->VirtualAddress + section->Misc.VirtualSize;
    DWORD raw_end = section->PointerToRawData + section->SizeOfRawData;
    if(virtual_end > virtual_max) virtual_max = virtual_end;
    if(raw_end > raw_max) raw_max = raw_end;
  }

  PIMAGE_SECTION_HEADER entry_sec = sections_end++;
  memset(entry_sec, 0, sizeof(IMAGE_SECTION_HEADER));
  memcpy(entry_sec->Name, ".entry", 7);
  entry_sec->Misc.VirtualSize = 0x1000;
  entry_sec->VirtualAddress = align_up(virtual_max, nt->OptionalHeader.SectionAlignment);
  entry_sec->SizeOfRawData = 0x1000;
  entry_sec->PointerToRawData = align_up(raw_max, nt->OptionalHeader.FileAlignment);
  entry_sec->Characteristics = IMAGE_SCN_MEM_READ | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_CNT_CODE;
  nt->FileHeader.NumberOfSections += 1;

  Buf entry;
  {
    // write and layout chunks
    char entry_DllMain[] {
        "\x33\xC0"      // xor     eax, eax
        "\x40"          // inc     eax
        "\xC2\x0C\x00"  // retn    0Ch
    };
    entry.write(entry_DllMain, sizeof(entry_DllMain));
  }
  {
    // link references
  }
  entry_sec->Misc.VirtualSize = entry.size();
  entry_sec->SizeOfRawData = align_up(entry.size(), nt->OptionalHeader.FileAlignment);

  nt->OptionalHeader.AddressOfEntryPoint = entry_sec->VirtualAddress;
  virtual_max = entry_sec->VirtualAddress + entry_sec->Misc.VirtualSize;
  raw_max = entry_sec->PointerToRawData + entry_sec->SizeOfRawData;


  PIMAGE_SECTION_HEADER export_sec = sections_end++;
  memset(export_sec, 0, sizeof(IMAGE_SECTION_HEADER));
  memcpy(export_sec->Name, ".edata", 7);
  export_sec->Misc.VirtualSize = 0x1000;
  export_sec->VirtualAddress = align_up(virtual_max, nt->OptionalHeader.SectionAlignment);
  export_sec->SizeOfRawData = 0x1000;
  export_sec->PointerToRawData = align_up(raw_max, nt->OptionalHeader.FileAlignment);
  export_sec->Characteristics = IMAGE_SCN_MEM_READ | IMAGE_SCN_CNT_INITIALIZED_DATA;
  nt->FileHeader.NumberOfSections += 1;

  nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress = export_sec->VirtualAddress;
  nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].Size = 0x1000;

  Chunk header;
  Chunk strings;
  Chunk names;
  Chunk nameOrdinals;
  Chunk functions;

  {
    // build header
    auto nameSym = strings.sym(strings.write("dk2.exe", 7));
    char eos = '\0';
    strings.write(&eos, sizeof(eos));

    IMAGE_EXPORT_DIRECTORY export_dir;
    memset(&export_dir, 0, sizeof(export_dir));
    nt->FileHeader.TimeDateStamp = 0x33565C1E;
    export_dir.TimeDateStamp = 0x33565C1E;
    export_dir.Base = 1;
    export_dir.Name = 0;
    header.ref(offsetof(IMAGE_EXPORT_DIRECTORY, Name))->trg = nameSym;
    export_dir.AddressOfFunctions = 0;
    header.ref(offsetof(IMAGE_EXPORT_DIRECTORY, AddressOfFunctions))->trg = functions.sym(0);
    export_dir.AddressOfNames = 0;
    header.ref(offsetof(IMAGE_EXPORT_DIRECTORY, AddressOfNames))->trg = names.sym(0);
    export_dir.AddressOfNameOrdinals = 0;
    header.ref(offsetof(IMAGE_EXPORT_DIRECTORY, AddressOfNameOrdinals))->trg = nameOrdinals.sym(0);
    header.write(&export_dir, sizeof(export_dir));
  }

  {
    // build exports
    struct Export {
      DWORD rva;
      char *name;
    };
    Buf exports;
    char *map_end = (char *) exportsMap.tail;
    char *pos = (char *) exportsMap.start;
    while(pos < map_end) {
      char *line = pos;
      size_t line_len;
      pos = read_line(pos, line_len, map_end);

      DWORD rva;
      char *name_start;
      size_t name_len;
      if(!parse_offs_name(line, line_len, rva, name_start, name_len)) continue;

//      {
//        char *name = (char *) malloc(name_len + 1);
//        strncopy(name, name_start, name_len);
//        printf("%08X %s\n", offs, name);
//        free(name);
//      }

      for (int i = 0; i < name_len; ++i) {
        char ch = name_start[i];
        if (ch == ':' || ch == '<' || ch == '>') {
          name_start[i] = '_';
        }
      }
      exports.prepare(sizeof(Export));
      auto *exp = (Export *) exports.tail;
      exp->rva = rva;
      exp->name = (char *) malloc(name_len + 1);
      strncopy(exp->name, name_start, name_len);
      exports.tail = (uint8_t *) (exp + 1);
    }

    size_t count = exports.size() / sizeof(Export);
    for (int i = 0; i < count - 1; ++i) {
      Export &left = ((Export *) exports.start)[i];
      for (int j = i + 1; j < count; ++j) {
        Export &right = ((Export *) exports.start)[j];
        if(strcmp(left.name, right.name) > 0) {
          Export tmp = right;
          right = left;
          left = tmp;
        }
      }
    }
    for (int i = 0; i < count; ++i) {
      Export &exp = ((Export *) exports.start)[i];
      auto nameSym = strings.sym(strings.write(exp.name, strlen(exp.name) + 1));
      WORD ordinal = functions.write(&exp.rva, sizeof(DWORD)) / sizeof(DWORD);
      nameOrdinals.write(&ordinal, sizeof(ordinal));
      DWORD ptr = 0;
      names.ref(names.write(&ptr, sizeof(ptr)))->trg = nameSym;
    }

    {
      IMAGE_EXPORT_DIRECTORY &export_dir = *(IMAGE_EXPORT_DIRECTORY *) header.start;
      export_dir.NumberOfFunctions = functions.size() / sizeof(DWORD);
      export_dir.NumberOfNames = names.size() / sizeof(DWORD);
    }
  }

  Buf edata;
  {
    // write and layout chunks
    size_t offs;
    offs = edata.write(header.start, header.size());
    header.layout(offs, export_sec->VirtualAddress + offs);

    edata.align(4);
    offs = edata.write(functions.start, functions.size());
    functions.layout(offs, export_sec->VirtualAddress + offs);

    edata.align(4);
    offs = edata.write(nameOrdinals.start, nameOrdinals.size());
    nameOrdinals.layout(offs, export_sec->VirtualAddress + offs);

    edata.align(4);
    offs = edata.write(names.start, names.size());
    names.layout(offs, export_sec->VirtualAddress + offs);

    edata.align(4);
    offs = edata.write(strings.start, strings.size());
    strings.layout(offs, export_sec->VirtualAddress + offs);

  }
  {
    // link references
    header.link(edata.start);
    functions.link(edata.start);
    nameOrdinals.link(edata.start);
    names.link(edata.start);
    strings.link(edata.start);
  }

  export_sec->Misc.VirtualSize = edata.size();
  export_sec->SizeOfRawData = align_up(edata.size(), nt->OptionalHeader.FileAlignment);
  virtual_max = export_sec->VirtualAddress + export_sec->Misc.VirtualSize;
  raw_max = export_sec->PointerToRawData + export_sec->SizeOfRawData;

  nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].Size = edata.size();
  nt->OptionalHeader.SizeOfInitializedData += align_up(edata.size(), nt->OptionalHeader.SectionAlignment);


  PIMAGE_SECTION_HEADER reloc_sec = sections_end++;
  memset(reloc_sec, 0, sizeof(IMAGE_SECTION_HEADER));
  memcpy(reloc_sec->Name, ".reloc", 7);
  reloc_sec->Misc.VirtualSize = 0x1000;
  reloc_sec->VirtualAddress = align_up(virtual_max, nt->OptionalHeader.SectionAlignment);
  reloc_sec->SizeOfRawData = 0x1000;
  reloc_sec->PointerToRawData = align_up(raw_max, nt->OptionalHeader.FileAlignment);
  reloc_sec->Characteristics = IMAGE_SCN_MEM_READ | IMAGE_SCN_CNT_INITIALIZED_DATA;
  nt->FileHeader.NumberOfSections += 1;

  nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress = reloc_sec->VirtualAddress;
  nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC].Size = 0x1000;

  Chunk reloc_list;
  {
    // build relocations
#define PAGE_SIZE 0x1000
    char *map_end = (char *) refsMap.tail;
    char *pos = (char *) refsMap.start;
    DWORD page_start = 0;
    DWORD page_end = page_start + PAGE_SIZE;
    Buf pageRelocs;
    while(pos < map_end) {
      char *line = pos;
      size_t line_len;
      pos = read_line(pos, line_len, map_end);
      DWORD src, dst;
      RelocKind kind = Invalid;
      if(!parse_reloc(line, line_len, src, dst, kind)) continue;
      if(kind == Invalid) {
        print("error: ");
        print(line, line_len);
        print("\n");
        continue;
      }
      if(kind != VA32) continue;

//      printf("%08X\n", src);
      if(src >= page_end) {
        if(pageRelocs.size() > 0) {
          IMAGE_BASE_RELOCATION relocs_hdr;
          relocs_hdr.VirtualAddress = page_start;
          relocs_hdr.SizeOfBlock = align_up(pageRelocs.size() + 8, 4);
          reloc_list.write(&relocs_hdr, 8);
          reloc_list.write(pageRelocs.start, pageRelocs.size());
          reloc_list.align(4);
          pageRelocs.tail = pageRelocs.start;
        }
        page_start = src & ~(PAGE_SIZE - 1);
        page_end = page_start + PAGE_SIZE;
      }
      DWORD relKind = IMAGE_REL_BASED_HIGHLOW;
      uint16_t rel = (src - page_start) | ((int) relKind << 12);
      pageRelocs.write(&rel, sizeof(rel));
    }
    if(pageRelocs.size() > 0) {
      IMAGE_BASE_RELOCATION relocs_hdr;
      relocs_hdr.VirtualAddress = page_start;
      relocs_hdr.SizeOfBlock = align_up(pageRelocs.size() + 8, 4);
      reloc_list.write(&relocs_hdr, 8);
      reloc_list.write(pageRelocs.start, pageRelocs.size());
      reloc_list.align(4);
    }

  }

  Buf reloc;
  {
    // write and layout chunks
    size_t offs;
    offs = reloc.write(reloc_list.start, reloc_list.size());
    reloc_list.layout(offs, reloc_sec->VirtualAddress + offs);
  }
  {
    // link references
    reloc_list.link(reloc.start);
  }

  reloc_sec->Misc.VirtualSize = reloc.size();
  reloc_sec->SizeOfRawData = align_up(reloc.size(), nt->OptionalHeader.FileAlignment);
  virtual_max = reloc_sec->VirtualAddress + reloc_sec->Misc.VirtualSize;
  raw_max = reloc_sec->PointerToRawData + reloc_sec->SizeOfRawData;

  nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC].Size = reloc.size();
  nt->OptionalHeader.SizeOfInitializedData += align_up(reloc.size(), nt->OptionalHeader.SectionAlignment);
  nt->FileHeader.Characteristics &= ~IMAGE_FILE_RELOCS_STRIPPED;


  nt->OptionalHeader.SizeOfImage = align_up(
      reloc_sec->VirtualAddress + reloc_sec->Misc.VirtualSize, nt->OptionalHeader.SectionAlignment
  );

  size_t max_size = reloc_sec->PointerToRawData + reloc_sec->SizeOfRawData;
  size_t write1_offs = export_sec->PointerToRawData;
  size_t write2_offs = entry_sec->PointerToRawData;
  size_t write3_offs = reloc_sec->PointerToRawData;
  if(max_size > dk2.size()) {
    printf("realloc %d -> %d\n", dk2.size(), max_size);
    dk2.prepare(max_size - dk2.size());
    dk2.tail = dk2.start + max_size;
  }
  memcpy(dk2.start + write1_offs, edata.start, edata.size());
  memcpy(dk2.start + write2_offs, entry.start, entry.size());
  memcpy(dk2.start + write3_offs, reloc.start, reloc.size());

  bool result = writeDk2(dk2);
  return result ? 0 : -1;
}
