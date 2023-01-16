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
#include <ios>
#include <io.h>
#include <fcntl.h>
#include <stdex.h>

std::wstring g_curExeDir;

void RedirectStandardIo() {
  /* This clever code have been found at:
  Adding Console I/O to a Win32 GUI App
  Windows Developer Journal, December 1997
  http://dslweb.nwnexus.com/~ast/dload/guicon.htm
  Andrew Tucker's Home Page */

  // redirect unbuffered STDOUT to the console
  long lStdHandle = (long)GetStdHandle(STD_OUTPUT_HANDLE);
  int hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
  if(hConHandle > 0) {
    FILE *fp = _fdopen(hConHandle, "w");
    *stdout = *fp;
    setvbuf(stdout, NULL, _IONBF, 0);
  }

  // redirect unbuffered STDIN to the console
  lStdHandle = (long)GetStdHandle(STD_INPUT_HANDLE);
  hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
  if(hConHandle > 0) {
    FILE *fp = _fdopen( hConHandle, "r" );
    *stdin = *fp;
    setvbuf(stdin, NULL, _IONBF, 0);
  }

  // redirect unbuffered STDERR to the console
  lStdHandle = (long)GetStdHandle(STD_ERROR_HANDLE);
  hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
  if(hConHandle > 0) {
    FILE *fp = _fdopen(hConHandle, "w");
    *stderr = *fp;
    setvbuf(stderr, NULL, _IONBF, 0 );
  }

  // make cout, wcout, cin, wcin, wcerr, cerr, wclog and clog point to console as well
  std::ios::sync_with_stdio();
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

HINSTANCE g_bootstrap_patcher = NULL;

uint8_t *dk2_base = nullptr;
size_t dk2_size = 0;

bool dk2_contains(uint8_t *pos) {
  return dk2_base <= pos && pos < (dk2_base + dk2_size);
}

std::map<DWORD, std::shared_ptr<std::vector<ref_t>>> xrefs;
std::map<DWORD, bool> lockedRva;

bool loadRefs() {
  std::wstring refsPath = g_curExeDir + L"/references.map";
  Buf refsMap;
  if(!readFile(refsMap, refsPath.c_str())) return false;

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
      fprintf(stderr, "[ERROR] rva %08X is already locked\n", rva);
      return false;
    }
    lockedRva[rva] = true;
  }

  auto it = xrefs.find(rva);
  if(it == xrefs.end()) {
    printf("[ERROR] xrefs not found for %08X\n", rva);
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

  HookHandle *allReadyToStart = nullptr;
  std::vector<std::function<void()>> ALL_READY_TO_START;

  std::vector<std::string> EMBER_ARGS;
  std::vector<std::string> DK2_ARGS;

  int __cdecl proxy_main(int argc, char *argv[]) {
    int exitCode = -1;
    argc = DK2_ARGS.size();
    std::vector<char *> args;
    args.reserve(DK2_ARGS.size());
    for(auto &arg : DK2_ARGS) args.push_back((char *) arg.c_str());
    args.push_back(NULL);
    argv = &*args.begin();

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

  std::string findArgValue(const std::string &name) {
    for(auto &arg : EMBER_ARGS) {
      if(arg.starts_with(name + "=")) {
        return arg.substr(name.length() + 1);
      }
    }
    return std::string();
  }

  bool hasFlag(const std::string &name) {
    for(auto &arg : EMBER_ARGS) {
      if(arg == name) {
        return true;
      }
    }
    return false;
  }

  bool initialize() {

    int nArgs;
    LPWSTR *szArglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
    if(szArglist == NULL) {
      printf("CommandLineToArgvW failed\n");
      return false;
    }
    for(int i = 0; i < nArgs; i++) {
      std::wstring warg(szArglist[i]);
      std::string arg = utf8_encode(warg);
      if(i != 0 && arg.starts_with("-ember:")) {
        arg = arg.substr(7);
        EMBER_ARGS.push_back(arg);
      } else DK2_ARGS.push_back(arg);
    }
#ifdef REVERSE_MODE
    AllocConsole();
#else
    if(api::hasFlag("console")) {
      AllocConsole();
      freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
      freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);
    }
#endif
    RedirectStandardIo();
    g_bootstrap_patcher = GetModuleHandleW(L"bootstrap_patcher.dll");
    if(!g_bootstrap_patcher) g_bootstrap_patcher = GetModuleHandleW(NULL);
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
    printf("bootstrap patcher base: %p\n", g_bootstrap_patcher);
    printf("dk2 base: %p\n", dk2_base);

    printf("dk2 args:\n");
    for(auto &arg : DK2_ARGS) {
      printf("  %s\n", arg.c_str());
    }
    printf("ember args:\n");
    for(auto &arg : EMBER_ARGS) {
      printf("  -ember:%s\n", arg.c_str());
    }

    LocalFree(szArglist);

    g_curExeDir.resize(MAX_PATH, L'\0');
    if(GetModuleFileNameW(g_bootstrap_patcher, &*g_curExeDir.begin(), MAX_PATH) == 0) return false;
    wchar_t *p1 = wcsrchr(&*g_curExeDir.begin(), '/');
    wchar_t *p2 = wcsrchr(&*g_curExeDir.begin(), '\\');
    wchar_t *sep = p1 > p2 ? p1 : p2;
    if(sep) *sep = L'\0';
    g_curExeDir.resize(wcslen(&*g_curExeDir.begin()));

    if(!loadRefs()) return false;
    if(!initPatchApi()) return false;
    if(!initStacktrace()) return false;
    if(!initWindow()) return false;
    if(!initGameLoop()) return false;
    if(!replaceXrefs(funptr<&dk2::main>(), proxy_main)) return false;

    // .text:005A631C  mov esi, offset CGameComponent_instance
    allReadyToStart = HookHandle::create(dk2_base + (0x005A631C - dk2_virtual_base), 5);
    allReadyToStart->addHandler([](HookHandler &handle, Regs &regs, void *target) {
      for(auto &cb : api::ALL_READY_TO_START) {
        cb();
      }
    });
    return true;
  }

}
