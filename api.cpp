//
// Created by DiaLight on 17.08.2022.
//
#include <api.h>
#include <dk2.h>
#include <Windows.h>
#include <api/parse.h>
#include <api/Buf.h>
#include <cstdint>
#include <map>
#include <memory>
#include <vector>
#include <algorithm>
#include <api/stacktrace.h>
#include <api/game_loop.h>
#include <api/patch.h>
#include <api/window.h>

#ifndef REFERENCES_MAPPING
#error "REFERENCES_MAPPING not defined"
#endif
#ifndef STACK_MAPPING
#error "STACK_MAPPING not defined"
#endif

#define VAL(str) #str
#define TOSTRING(str) VAL(str)

enum RelocKind {
  Invalid,
  VA32,  // IMAGE_REL_I386_DIR32 -> IMAGE_REL_BASED_HIGHLOW
  REL32  // IMAGE_REL_I386_REL32 -> ignore
};
bool parse_reloc(char *line, size_t line_len, DWORD &src, DWORD &dst, RelocKind &kind) {
  if(line[0] == '#') return false;  // #...
  if(line_len < 23) return false;  // XXXXXXXX XXXXXXXX ??? ?...
  char *line_end = line + line_len;
  uint32_t rva = 0;
  if(!parse_hex32(line, line_end, rva)) return false;
  src = rva;
  if(*line != ' ') return false;
  line++;
  rva = 0;
  if(!parse_hex32(line, line_end, rva)) return false;
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

struct ref_t {
  DWORD src;
  RelocKind kind;

  ref_t(DWORD src, RelocKind kind) : src(src), kind(kind) {}

};

uint8_t *dk2_base = nullptr;
size_t dk2_size = 0;

bool dk2_contains(uint8_t *pos) {
  return dk2_base <= pos && pos < (dk2_base + dk2_size);
}

std::map<DWORD, std::shared_ptr<std::vector<ref_t>>> xrefs;
std::map<DWORD, bool> lockedRva;

bool loadRefs() {
  Buf refsMap;
  if(!readFile(refsMap, TOSTRING(REFERENCES_MAPPING))) return false;

  char *map_end = (char *) refsMap.tail;
  char *pos = (char *) refsMap.start;
  while (pos < map_end) {
    char *line = pos;
    size_t line_len;
    pos = read_line(pos, line_len, map_end);

    DWORD src, dst;
    RelocKind kind = Invalid;
    if(!parse_reloc(line, line_len, src, dst, kind)) continue;
    if(kind == Invalid) {
      printf("error: ");
      printf(line, line_len);
      printf("\n");
      continue;
    }
    src -= dk2_virtual_base;  // va -> rva
    dst -= dk2_virtual_base;  // va -> rva

    auto it = xrefs.find(dst);
    std::shared_ptr<std::vector<ref_t>> list;
    if(it == xrefs.end()) {
      list = std::make_shared<std::vector<ref_t>>();
      xrefs.insert(std::make_pair(dst, list));
    } else {
      list = it->second;
    }
//    {
//      printf("%08X -> %08X ", src, dst);
//      switch (kind) {
//        case VA32:
//          print("VA32");
//          break;
//        case REL32:
//          print("REL32");
//          break;
//      }
//      print("\n");
//    }

    if(list) {
      list->push_back(ref_t(src, kind));
    } else {
      printf("list == null\n");
    }

  }

  return true;
}

bool replaceXrefs(uint8_t *fun, void *proxy) {
  DWORD rva = (DWORD) (fun - dk2_base);
  {
    auto it = lockedRva.find(rva);
    if(it != lockedRva.end()) {
      fprintf(stderr, "rva %08X is already locked\n", rva);
      return false;
    }
    lockedRva[rva] = true;
  }

  auto it = xrefs.find(rva);
  if(it == xrefs.end()) {
    printf("xrefs not found for %08X\n", rva);
    return false;
  }
  for(auto &ref : *it->second) {
    uint8_t *pos = dk2_base + ref.src;
    DWORD oldProtect;
    VirtualProtect(pos, sizeof(DWORD), PAGE_EXECUTE_READWRITE, &oldProtect);
    switch (ref.kind) {
      case VA32:
//        printf("- va32 %08X(%08X) -> %08X -> %08X(%08X)\n", ref.src, ref.src - (DWORD) base, (DWORD) proxy, fun, rva);
        *(DWORD *) pos = (DWORD) proxy;
        break;
      case REL32:
//        printf("- rva32 %08X(%08X) -> %08X -> %08X(%08X)\n", ref.src, ref.src - (DWORD) base, (DWORD) proxy, fun, rva);
        *(DWORD *) pos = (uint8_t *) proxy - (pos + 4);
        break;
    }
    VirtualProtect(pos, sizeof(DWORD), oldProtect, NULL);
  }

  return true;
}


namespace api {

  std::vector<std::function<int(int &argc, char **&argv)>> BEFORE_MAIN;
  std::vector<std::function<void(int argc, char *argv[], int &exitCode)>> AFTER_MAIN;

  int __cdecl proxy_main(int argc, char *argv[]) {
    int exitCode = -1;

    for(auto &F : BEFORE_MAIN) {
      exitCode = F(argc, argv);
      if(exitCode != 0) return exitCode;
    }
    exitCode = dk2::main(argc, argv);
    for(auto &F : AFTER_MAIN) {
      F(argc, argv, exitCode);
    }
    return exitCode;
  }

  bool initialize() {
    {
#ifdef REVERSE_MODE
      dk2_base = (uint8_t *) dk2_virtual_base;
#else
      dk2_base = (uint8_t *) LoadLibraryA("dk2.dll");
#endif
      auto *dos = (IMAGE_DOS_HEADER *) dk2_base;
      auto *nt = (IMAGE_NT_HEADERS *) (dk2_base + dos->e_lfanew);
      dk2_size = nt->OptionalHeader.SizeOfImage;
    }
    printf("dk2 base: %p\n", dk2_base);
    if(!loadRefs()) return false;
    if(!initPatchApi()) return false;
    if(!initStacktrace()) return false;
    if(!initWindow()) return false;
    if(!initGameLoop()) return false;
    if(!replaceXrefs(funptr<&dk2::main>(), proxy_main)) return false;
    return true;
  }

}
