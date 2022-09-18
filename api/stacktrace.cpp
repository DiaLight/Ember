//
// Created by DiaLight on 01.09.2022.
//
#include <api/stacktrace.h>
#include <api/parse.h>
#include <vector>
#include <Windows.h>
#include <memory>
#include <string>
#include <DbgHelp.h>
#include <api.h>
#include <dk2.h>

enum SpOpKind {
  SP_Invalid,
  SP,
  RET,
  JMP
};

enum SideEffectKind {
  SE_Invalid,
  SE_POP_BP,
  SE_MOV_SP_BP,
};

bool parse_fun_chunk(char *line, size_t line_len, uint32_t &out_va, char *&name, size_t &name_len) {
  if(line[0] == '#') return false;  // #...
  char *line_end = line + line_len;
  uint32_t va = 0;
  if(!parse_hex32(line, line_end, va)) return false;
  out_va = va;
  if(*line != ' ') return false;
  line++;
  name = line;
  name_len = line_end - name;
  return true;
}
bool parse_stack_op(char *line, size_t line_len, uint32_t &out_va, SpOpKind &kind, int32_t &out_stack_offs, int32_t &out_value, SideEffectKind &se_kind, int32_t &out_se_value) {
  if(line[0] == '#') return false;  // #...
  char *line_end = line + line_len;
  uint32_t va = 0;
  if(!parse_hex32(line, line_end, va)) return false;
  out_va = va;
  if(*line != ' ') return false;
  line++;

  int32_t stack_offs = 0;
  if(!parse_int32(line, line_end, stack_offs)) return false;
  out_stack_offs = -stack_offs;  // stack grows down
  if(*line != ' ') return false;
  line++;

  // skip kind
  char *type = line;
  while(line < line_end && *line != ' ') line++;
  size_t type_len = line - type;
  if(*line != ' ') return false;
  line++;

  kind = SP_Invalid;
  if(strneq(type, "sp", type_len)) {
    kind = SP;
  } else if(strneq(type, "ret", type_len)) {
    kind = RET;
  } else if(strneq(type, "jmp", type_len)) {
    kind = JMP;
  } else {
    return false;
  }

  if(kind == JMP) {
    va = 0;
    if(!parse_hex32(line, line_end, va)) return false;
    out_value = va;
  } else {
    int32_t stack_change = 0;
    if(!parse_int32(line, line_end, stack_change)) return false;
    out_value = -stack_change;  // stack grows down
  }
  if(kind == SP && line < line_end) {
    if(*line != ' ') return false;
    line++;
    if(*line == '#') return true;

    // skip side effect kind
    char *type = line;
    while(line < line_end && *line != ' ') line++;
    size_t type_len = line - type;
    if(*line != ' ') return false;
    line++;

    se_kind = SE_Invalid;
    if(strneq(type, "pop_bp", type_len)) {
      se_kind = SE_POP_BP;
    } else if(strneq(type, "mov_sp_bp", type_len)) {
      se_kind = SE_MOV_SP_BP;
    } else {
      return false;
    }

    if(!parse_int32(line, line_end, out_se_value)) return false;
  }
  return true;
}
namespace stacktrace {
  struct Op {
    uint32_t rva;
    SpOpKind kind;
    int32_t stack_offs;
    int32_t value;
    SideEffectKind se_kind;
    int32_t se_value;
    Op(uint32_t rva, SpOpKind kind, int32_t stack_offs, int32_t value, SideEffectKind se_kind, int32_t se_value) : rva(rva), kind(kind), stack_offs(stack_offs), value(value), se_kind(se_kind), se_value(se_value) {}

  };
  struct Area {
    uint32_t rva;
    std::string name;
    std::vector<std::shared_ptr<Op>> ops;
    Area(uint32_t rva, const std::string &name) : rva(rva), name(name) {}

    std::vector<std::shared_ptr<Op>>::iterator find_gt(uint32_t rva) {
      return std::upper_bound(ops.begin(), ops.end(), rva, [](uint32_t rva, std::shared_ptr<Op> &bl) {  // <
        return rva < bl->rva;
      });
    }
    std::vector<std::shared_ptr<Op>>::iterator find_ge(uint32_t rva) {
      return std::lower_bound(ops.begin(), ops.end(), rva, [](std::shared_ptr<Op> &bl, uint32_t rva) {  // <=
        return bl->rva < rva;
      });
    }

    std::vector<std::shared_ptr<Op>>::iterator find_lt(uint32_t rva) {
      auto it = find_ge(rva);
      if(it == ops.begin()) return ops.end();
      return it - 1;
    }
    std::vector<std::shared_ptr<Op>>::iterator find_le(uint32_t rva) {
      auto it = find_gt(rva);
      if(it == ops.begin()) return ops.end();
      return it - 1;
    }

    bool visitOp(std::shared_ptr<Op> &value) {
      auto it = find_gt(value->rva);
      if(it != ops.begin() && (*(it - 1))->rva == value->rva) {
        *(it - 1) = value;
        return false;
      }
      if(it == ops.end()) {
        ops.push_back(value);
        return true;
      }
      ops.insert(it, value);
      return true;
    }
    void visitOp(uint32_t rva, SpOpKind kind, int32_t stack_offs, int32_t value, SideEffectKind se_kind, int32_t se_value) {
      auto op = std::make_shared<Op>(rva, kind, stack_offs, value, se_kind, se_value);
      visitOp(op);
    }
  };
  std::vector<std::shared_ptr<Area>> stack;

  std::vector<std::shared_ptr<Area>>::iterator find_gt(uint32_t rva) {
    return std::upper_bound(stack.begin(), stack.end(), rva, [](uint32_t rva, std::shared_ptr<Area> &bl) {  // <
      return rva < bl->rva;
    });
  }
  std::vector<std::shared_ptr<Area>>::iterator find_le(uint32_t rva) {
    auto it = find_gt(rva);
    if(it == stack.begin()) return stack.end();
    return it - 1;
  }
  bool visit(std::shared_ptr<Area> &value) {
    auto it = find_gt(value->rva);
    if(it != stack.begin() && (*(it - 1))->rva == value->rva) {
      *(it - 1) = value;
      return false;
    }
    if(it == stack.end()) {
      stack.push_back(value);
      return true;
    }
    stack.insert(it, value);
    return true;
  }
}
bool loadStack() {
  std::wstring stackPath = g_curExeDir + L"/stack.map";
  Buf stackMap;
  if(!readFile(stackMap, stackPath.c_str())) return false;

  std::shared_ptr<stacktrace::Area> curArea;
//  bool trg = false;
  char *map_end = (char *) stackMap.tail;
  char *pos = (char *) stackMap.start;
  while (pos < map_end) {
    char *line = pos;
    size_t line_len;
    pos = read_line(pos, line_len, map_end);
    if(line_len == 0) continue;
    if(line[0] != ' ') {
      uint32_t va;
      char *name;
      size_t name_len;
      if(!parse_fun_chunk(line, line_len, va, name, name_len)) continue;
      std::string nameStr;
      nameStr.append(name, name_len);
//      trg = nameStr == "CGameComponent_mainGuiLoop";
//      if(trg) printf("%08X %s\n", va, nameStr.c_str());
      curArea = std::make_shared<stacktrace::Area>(va - dk2_virtual_base, nameStr);
      stacktrace::visit(curArea);
    } else {
      uint32_t va;
      SpOpKind kind;
      int32_t stack_offs;
      int32_t value;
      SideEffectKind se_kind = SE_Invalid;
      int32_t se_value = 0;
      if(!parse_stack_op(line + 1, line_len - 1, va, kind, stack_offs, value, se_kind, se_value)) {
        char tmp[MAX_PATH];
        strncpy(tmp, line, line_len);
        tmp[line_len] = '\0';
        printf("ignore %s\n", tmp);
        continue;
      }
      curArea->visitOp(va - dk2_virtual_base, kind, stack_offs, value, se_kind, se_value);
//      if(trg) printf("  %08X %d %d\n", rva, kind, value);
    }
  }
  return true;
}


struct StackLimits {
  ULONG_PTR low;
  ULONG_PTR high;
  StackLimits() {
    GetCurrentThreadStackLimits(&low, &high);
  }
  bool contains(ULONG_PTR addr) {
    return low <= addr && addr < high;
  }
};

struct ModuleExport {
  ULONG_PTR addr;
  std::string name;
  ModuleExport(ULONG_PTR addr, const char *name) {
    this->addr = addr;
    this->name.append(name);
  }
};
struct LoadedModule {
  std::string name;
  ULONG_PTR base;
  ULONG_PTR size;
  std::vector<std::shared_ptr<ModuleExport>> exports;
  LoadedModule(PCSTR ModuleName, ULONG ModuleBase, ULONG ModuleSize) {
    const char *name = strrchr(ModuleName, '/');
    if(name == nullptr) name = strrchr(ModuleName, '\\');
    if(name == nullptr) name = ModuleName;
    else name = name + 1;
    this->name.append(name);
    this->base = ModuleBase;
    this->size = ModuleSize;
  }
  bool contains(ULONG_PTR addr) {
    return base <= addr && addr < (base + size);
  }
  std::vector<std::shared_ptr<ModuleExport>>::iterator _find_gt(ULONG_PTR addr) {
    return std::upper_bound(exports.begin(), exports.end(), addr, [](ULONG_PTR addr, std::shared_ptr<ModuleExport> &bl) {  // <
      return addr < bl->addr;
    });
  }
  std::vector<std::shared_ptr<ModuleExport>>::iterator _find_le(ULONG_PTR addr) {
    auto it = _find_gt(addr);
    if(it == exports.begin()) return exports.end();
    return it - 1;
  }
  ModuleExport *find_export_le(ULONG_PTR addr) {
    if(!_findExports()) return nullptr;
    auto it = _find_le(addr);
    if(it == exports.end()) return nullptr;
    return &**it;
  }
  bool _visitExport(ULONG_PTR funAddr, const char *name) {
    auto value = std::make_shared<ModuleExport>(funAddr, name);
    auto it = _find_gt(funAddr);
    if(it != this->exports.begin() && (*(it - 1))->addr == funAddr) {
      *(it - 1) = value;
      return false;
    }
    if(it == this->exports.end()) {
      this->exports.push_back(value);
      return true;
    }
    this->exports.insert(it, value);
    return true;
  }
  bool _findExports() {
    if(!exports.empty()) return true;
    auto *pHeader = (PIMAGE_DOS_HEADER) base;
    if(pHeader->e_magic != IMAGE_DOS_SIGNATURE) return false;
    auto *header = (PIMAGE_NT_HEADERS)((BYTE *)base + ((PIMAGE_DOS_HEADER)base)->e_lfanew);
    if(header->Signature != IMAGE_NT_SIGNATURE) return false;
    if(header->OptionalHeader.NumberOfRvaAndSizes == 0) return false;
    PIMAGE_EXPORT_DIRECTORY exports = (PIMAGE_EXPORT_DIRECTORY)((BYTE *)base + header->
        OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
    if(exports->AddressOfNames == 0) return false;
    DWORD* names = (DWORD*)((int)base + exports->AddressOfNames);
    SHORT* nameOrdinals = (SHORT*)((BYTE *) base + exports->AddressOfNameOrdinals);
    DWORD* functions = (DWORD*)((BYTE *) base + exports->AddressOfFunctions);
    for (int i = 0; i < exports->NumberOfNames; i++) {
      const char *name = (const char *) ((BYTE *) base + names[i]);
      ULONG_PTR funAddr = (ULONG_PTR) ((BYTE *) base + functions[nameOrdinals[i]]);
      _visitExport(funAddr, name);
    }
//    std::sort(this->exports.begin(), this->exports.end(), [](ModuleExport &lhs, ModuleExport &rhs) {
//      return lhs.addr < rhs.addr;
//    });
    return true;
  }
};
class LoadedModules {
  std::vector<std::shared_ptr<LoadedModule>> modules;
public:
  LoadedModules() {
    collect();
  }
  bool _visitModule(std::shared_ptr<LoadedModule> &value) {
    auto it = _find_gt(value->base);
    if(it != this->modules.begin() && (*(it - 1))->base == value->base) {
      *(it - 1) = value;
      return false;
    }
    if(it == this->modules.end()) {
      this->modules.push_back(value);
      return true;
    }
    this->modules.insert(it, value);
    return true;
  }
  bool collect() {
    modules.clear();
    return EnumerateLoadedModules(GetCurrentProcess(), enumerateModulesCallback, this);
  }
  std::vector<std::shared_ptr<LoadedModule>>::iterator _find_gt(ULONG_PTR addr) {
    return std::upper_bound(modules.begin(), modules.end(), addr, [](ULONG_PTR addr, std::shared_ptr<LoadedModule> &bl) {  // <
      return addr < bl->base;
    });
  }
  std::vector<std::shared_ptr<LoadedModule>>::iterator _find_ge(ULONG_PTR addr) {
    return std::lower_bound(modules.begin(), modules.end(), addr, [](std::shared_ptr<LoadedModule> &bl, ULONG_PTR addr) {  // <=
      return bl->base < addr;
    });
  }
  LoadedModule *find(ULONG_PTR addr) {
    auto it = _find_ge(addr);
    if(it != modules.end()) {
      if((*it)->contains(addr)) return &**it;
    }
    for(auto &mod : modules) {
      if(mod->contains(addr)) return &*mod;
    }
    return nullptr;
  }

private:
  static BOOL CALLBACK enumerateModulesCallback(
      _In_ PCSTR ModuleName,
  _In_ ULONG ModuleBase,
  _In_ ULONG ModuleSize,
  _In_opt_ PVOID UserContext
  ) {
    LoadedModules *_this = (LoadedModules *) UserContext;
    auto value = std::make_shared<LoadedModule>(ModuleName, ModuleBase, ModuleSize);
    _this->_visitModule(value);
    return TRUE;
  }
};

bool visit_dk2_frame(CONTEXT *ctx, StackLimits &limits) {
  uint32_t rva = (uint8_t *) ctx->Eip - dk2_base;
  auto it = stacktrace::find_le(rva);
  if(it == stacktrace::stack.end()) {
    printf("  area not found %08X\n", rva);
    return false;
  }
  auto &area = **it;
  printf("  - dk2 sp=%08X va=%08X %s\n", ctx->Esp, rva + dk2_virtual_base, area.name.c_str());
  auto opit = area.find_ge(rva);
  if(opit == area.ops.end()) {
    printf("  va=%08X op not found\n", rva + dk2_virtual_base);
    return false;
  }
  uint32_t esp_start = ctx->Esp;
  auto &op = **opit;
  int32_t check_offs = op.stack_offs;
  uint32_t sp_base = esp_start - check_offs;
  while(true) {
    switch(op.kind) {
      case SP: {
        if((ctx->Esp - op.stack_offs) != sp_base) {
          printf("    sp=%08X spd=%04X va=%08X sp_base change %08X %08X\n",
                 ctx->Esp, -op.stack_offs, op.rva + dk2_virtual_base, ctx->Esp - op.stack_offs, sp_base
          );
        }
        if(op.se_kind == SE_POP_BP) {
          uint32_t value = *(uint32_t *) (ctx->Esp + op.se_value);
//            printf("    sp=%08X spd=%04X va=%08X bp = [sp + %d]  value=%08X->%08X\n", ctx->Esp, -op.stack_offs, op.rva + dk2_virtual_base, op.se_value, ctx->Ebp, value);
          ctx->Ebp = value;
//            printf("    sp=%08X spd=%04X va=%08X sp += %d\n", ctx->Esp, -op.stack_offs, op.rva + dk2_virtual_base, op.value);
          ctx->Esp += op.value;
        } else if(op.se_kind == SE_MOV_SP_BP) {
//            printf("    sp=%08X spd=%04X va=%08X sp = bp  bp=%08X calc=%08X\n", ctx->Esp, -op.stack_offs, op.rva + dk2_virtual_base, ctx->Ebp, ctx->Esp + op.value);
          ctx->Esp = ctx->Ebp;
        } else {
//            printf("    sp=%08X spd=%04X va=%08X sp += %d\n", ctx->Esp, -op.stack_offs, op.rva + dk2_virtual_base, op.value);
          ctx->Esp += op.value;
        }
        break;
      }
      case RET: {
        auto *sp = (uint32_t *) ctx->Esp;
        ctx->Eip = sp[0];
//          printf("    sp=%08X spd=%04X va=%08X ret %d\n", ctx->Esp, -op.stack_offs, op.rva + dk2_virtual_base, op.value);
        if((ctx->Esp - esp_start) != -check_offs) {
          printf("sp change %04X(%d) %04X(%d)\n", ctx->Esp - esp_start, ctx->Esp - esp_start, -check_offs, -check_offs);
        }
        if(ctx->Esp != sp_base) {
          printf("sp_base change %08X %08X\n", ctx->Esp, sp_base);
        }
        if(ctx->Eip < 0x10000 || ctx->Eip == 0xFFFFFFFF || !limits.contains(ctx->Esp)) {
          printf("sp[-4] %08X\n", sp[-4]);
          printf("sp[-3] %08X\n", sp[-3]);
          printf("sp[-2] %08X\n", sp[-2]);
          printf("sp[-1] %08X\n", sp[-1]);
          printf("sp[0] %08X\n", sp[0]);
          printf("sp[1] %08X\n", sp[1]);
          printf("sp[2] %08X\n", sp[2]);
          printf("sp[3] %08X\n", sp[3]);
          printf("sp[4] %08X\n", sp[4]);
          return false;
        }
        ctx->Esp += op.value + 4;
        return true;
      }
      case JMP: {
        printf("    va=%08X jmp %08X\n", op.rva + dk2_virtual_base, (uint32_t) op.value);
        if(op.value == 0) {
          // force exit such frame
          ctx->Esp -= op.stack_offs;
          auto *sp = (uint32_t *) ctx->Esp;
          ctx->Eip = sp[0];
          ctx->Esp += op.value + 4;
          return true;
        }
        uint32_t jmp_rva = (uint32_t) op.value - dk2_virtual_base;
        ctx->Eip = (uint32_t) (dk2_base + jmp_rva);
        return visit_dk2_frame(ctx, limits);
      }
      case SP_Invalid:
      default:
        printf("    va=%08X invalid op\n", op.rva + dk2_virtual_base);
        return false;
    }
    opit++;
    if(opit == area.ops.end()) {
      printf("    va=%08X ret not found\n", op.rva + dk2_virtual_base);
      for(auto &op : area.ops) {
        switch (op->kind) {
          case SP: printf("- %08X sp %d\n", op->rva, op->value); break;
          case RET: printf("- %08X ret %d\n", op->rva, op->value); break;
          case JMP: printf("- %08X jmp %d\n", op->rva, op->value); break;
        }
      }
      return false;
    }
    op = **opit;
  }
}
bool trace_the_stack(CONTEXT *ctx) {
  StackLimits limits;
  LoadedModules modules;
  printf("stack limits: %08X-%08X\n", limits.low, limits.high);
  while(true) {
    if(dk2_contains((uint8_t *) ctx->Eip)) {
      if(!visit_dk2_frame(ctx, limits)) return false;
      continue;
    }

    {
      if(auto *mod = modules.find(ctx->Eip)) {
        if(auto *exp = mod->find_export_le(ctx->Eip)) {
          printf("  - lib sp=%08X bp=%08X ip=%08X %s:%s+%04X\n", ctx->Esp, ctx->Ebp, ctx->Eip, mod->name.c_str(), exp->name.c_str(), ctx->Eip - exp->addr);
        } else {
          printf("  - lib sp=%08X bp=%08X ip=%08X %s+%04X\n", ctx->Esp, ctx->Ebp, ctx->Eip, mod->name.c_str(), ctx->Eip - mod->base);
        }
      } else {
        printf("  - lib sp=%08X bp=%08X ip=%08X\n", ctx->Esp, ctx->Ebp, ctx->Eip);
      }
    }
    if(!limits.contains(ctx->Esp)) {
      printf("bad esp=%08X\n", ctx->Esp);
      return false;
    }
    if(!limits.contains(ctx->Ebp)) {
      printf("bad ebp=%08X\n", ctx->Ebp);
      return false;
    }
    auto *bp = (uint32_t *) ctx->Ebp;
    ctx->Ebp = *bp++;
    ctx->Eip = *bp++;
    ctx->Esp = (uint32_t) bp;
    if(ctx->Ebp == 0) break;
  }
  return true;
}

LONG ExceptionFilter(PEXCEPTION_POINTERS pep) {
  printf("caught exception %08X at %08X in thread %d", pep->ExceptionRecord->ExceptionCode, pep->ExceptionRecord->ExceptionAddress, GetCurrentThreadId());
  PWSTR threadDesc = nullptr;
  if(SUCCEEDED(GetThreadDescription(GetCurrentThread(), &threadDesc)) && (*threadDesc != L'\0')) {
    wprintf(L"(%ls)", threadDesc);
    LocalFree(threadDesc);
  }
  printf("\n");
  printf("  eax=%08X ebx=%08X ecx=%08X edx=%08X\n",
         pep->ContextRecord->Eax,
         pep->ContextRecord->Ebx,
         pep->ContextRecord->Ecx,
         pep->ContextRecord->Edx
  );
  printf("  esi=%08X edi=%08X\n", pep->ContextRecord->Esi, pep->ContextRecord->Edi);
  printf("  esp=%08X ebp=%08X\n", pep->ContextRecord->Esp, pep->ContextRecord->Ebp);
  printf("  eip=%08X\n", pep->ContextRecord->Eip);
  CONTEXT ctx = *pep->ContextRecord;  // make ctx copy
  if(!trace_the_stack(&ctx)) {
    printf("  trace stack failed\n");
  }
#ifndef NDEBUG
  if(MessageBoxA(NULL, "Debug?", "Debug", MB_OKCANCEL) == IDOK) {
    return EXCEPTION_CONTINUE_EXECUTION;
  }
#endif
  return EXCEPTION_CONTINUE_SEARCH;
}
LONG WINAPI TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo) {
  return ExceptionFilter(ExceptionInfo);
}
namespace {
//  int __cdecl proxy_main(int argc, char *argv[]) {
//    int exitCode = -1;
//    __try {
//        exitCode = dk2::main(argc, argv);
//    } __except(ExceptionFilter(GetExceptionInformation())) {
//      exitCode = -1;
//    }
//    return exitCode;
//  }
}


bool initStacktrace() {
  if(!loadStack()) return false;
//  if(!replaceXrefs(funptr<&dk2::main>(), proxy_main)) return false;
  // better. catches all threads
  SetUnhandledExceptionFilter(TopLevelExceptionFilter);
  return true;
}