//
// Created by DiaLight on 01.09.2022.
//
#include <utils/stacktrace.h>
#include <utils/parse.h>
#include <Windows.h>
#include <string>
#include <DbgHelp.h>
#include <utils/stacktrace_window.h>
#include <sstream>
#include <iomanip>
#include <dk2_info.h>
#include "stdex.h"

#define hex32_(val, fill) std::hex << std::uppercase << std::setfill(fill) << std::setw(8) << ((uint32_t) (val)) << std::dec
#define hex16_(val, fill) std::hex << std::uppercase << std::setfill(fill) << std::setw(4) << ((uint16_t) (val)) << std::dec
#define hex8_(val, fill) std::hex << std::uppercase << std::setfill(fill) << std::setw(2) << ((uint8_t) (val)) << std::dec

#define hex32(val) hex32_(val, L'0')
#define hex16(val) hex16_(val, L'0')
#define hex8(val) hex8_(val, L'0')

#define hex32a(val) hex32_(val, '0')
#define hex16a(val) hex16_(val, '0')
#define hex8a(val) hex8_(val, '0')


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
    if (line[0] == '#') return false;  // #...
    char *line_end = line + line_len;
    uint32_t va = 0;
    if (!parse_hex32(line, line_end, va)) return false;
    out_va = va;
    if (*line != ' ') return false;
    line++;
    name = line;
    name_len = line_end - name;
    return true;
}

bool parse_stack_op(char *line, size_t line_len, uint32_t &out_va, SpOpKind &kind, int32_t &out_stack_offs,
                    int32_t &out_value, SideEffectKind &se_kind, int32_t &out_se_value) {
    if (line[0] == '#') return false;  // #...
    char *line_end = line + line_len;
    uint32_t va = 0;
    if (!parse_hex32(line, line_end, va)) return false;
    out_va = va;
    if (*line != ' ') return false;
    line++;

    int32_t stack_offs = 0;
    if (!parse_int32(line, line_end, stack_offs)) return false;
    out_stack_offs = -stack_offs;  // stack grows down
    if (*line != ' ') return false;
    line++;

    // skip kind
    char *type = line;
    while (line < line_end && *line != ' ') line++;
    size_t type_len = line - type;
    if (*line != ' ') return false;
    line++;

    kind = SP_Invalid;
    if (strneq(type, "sp", type_len)) {
        kind = SP;
    } else if (strneq(type, "ret", type_len)) {
        kind = RET;
    } else if (strneq(type, "jmp", type_len)) {
        kind = JMP;
    } else {
        return false;
    }

    if (kind == JMP) {
        va = 0;
        if (!parse_hex32(line, line_end, va)) return false;
        out_value = va;
    } else {
        int32_t stack_change = 0;
        if (!parse_int32(line, line_end, stack_change)) return false;
        out_value = -stack_change;  // stack grows down
    }
    if (kind == SP && line < line_end) {
        if (*line != ' ') return false;
        line++;
        if (*line == '#') return true;

        // skip side effect kind
        char *type = line;
        while (line < line_end && *line != ' ') line++;
        size_t type_len = line - type;
        if (*line != ' ') return false;
        line++;

        se_kind = SE_Invalid;
        if (strneq(type, "pop_bp", type_len)) {
            se_kind = SE_POP_BP;
        } else if (strneq(type, "mov_sp_bp", type_len)) {
            se_kind = SE_MOV_SP_BP;
        } else {
            return false;
        }

        if (!parse_int32(line, line_end, out_se_value)) return false;
    }
    return true;
}

struct stacktrace_t {
    struct Op {
        uint32_t rva;
        SpOpKind kind;
        int32_t stack_offs;
        int32_t value;
        SideEffectKind se_kind;
        int32_t se_value;

        Op(uint32_t rva, SpOpKind kind, int32_t stack_offs, int32_t value, SideEffectKind se_kind, int32_t se_value)
                : rva(rva), kind(kind), stack_offs(stack_offs), value(value), se_kind(se_kind), se_value(se_value) {}

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
            if (it == ops.begin()) return ops.end();
            return it - 1;
        }

        std::vector<std::shared_ptr<Op>>::iterator find_le(uint32_t rva) {
            auto it = find_gt(rva);
            if (it == ops.begin()) return ops.end();
            return it - 1;
        }

        bool visitOp(std::shared_ptr<Op> &value) {
            auto it = find_gt(value->rva);
            if (it != ops.begin() && (*(it - 1))->rva == value->rva) {
                *(it - 1) = value;
                return false;
            }
            if (it == ops.end()) {
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
        if (it == stack.begin()) return stack.end();
        return it - 1;
    }

    bool visit(std::shared_ptr<Area> &value) {
        auto it = find_gt(value->rva);
        if (it != stack.begin() && (*(it - 1))->rva == value->rva) {
            *(it - 1) = value;
            return false;
        }
        if (it == stack.end()) {
            stack.push_back(value);
            return true;
        }
        stack.insert(it, value);
        return true;
    }
};

#if EMBED_MAPPINGS
bool getDk2Stack(std::string &out);
#else
bool getDk2Stack(std::string &out) {
    std::wstring stackPath = api::g_curExeDir + L"/dk2_stack.map";
    if (!readFile(out, stackPath.c_str())) return false;
    return true;
}
#endif

#if EMBED_MAPPINGS
bool getWeanetrStack(std::string &out);
#else
bool getWeanetrStack(std::string &out) {
    std::wstring stackPath = api::g_curExeDir + L"/weanetr_stack.map";
    if (!readFile(out, stackPath.c_str())) return false;
    return true;
}
#endif

bool loadStack(std::string &stackMap, stacktrace_t &stacktrace) {
    std::shared_ptr<stacktrace_t::Area> curArea;
//  bool trg = false;
    char *map_end = (char *) &stackMap[stackMap.size()];
    char *pos = (char *) &stackMap[0];
    while (pos < map_end) {
        char *line = pos;
        size_t line_len;
        pos = read_line(pos, line_len, map_end);
        if (line_len == 0) continue;
        if (line[0] != ' ') {
            uint32_t va;
            char *name;
            size_t name_len;
            if (!parse_fun_chunk(line, line_len, va, name, name_len)) continue;
            std::string nameStr;
            nameStr.append(name, name_len);
//      trg = nameStr == "CGameComponent_mainGuiLoop";
//      if(trg) printf("%08X %s\n", va, nameStr.c_str());
            curArea = std::make_shared<stacktrace_t::Area>(va - dk2_virtual_base, nameStr);
            stacktrace.visit(curArea);
        } else {
            uint32_t va;
            SpOpKind kind;
            int32_t stack_offs;
            int32_t value;
            SideEffectKind se_kind = SE_Invalid;
            int32_t se_value = 0;
            if (!parse_stack_op(line + 1, line_len - 1, va, kind, stack_offs, value, se_kind, se_value)) {
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
    printf("stack loaded. items.count=%d\n", stacktrace.stack.size());
    return true;
}

stacktrace_t dk2_stacktrace;
stacktrace_t weanetr_stacktrace;

bool loadStack() {
    std::string dk2_stackMap;
    if (!getDk2Stack(dk2_stackMap)) return false;
    if(!loadStack(dk2_stackMap, dk2_stacktrace)) return false;

    std::string weanetr_stackMap;
    if (!getWeanetrStack(weanetr_stackMap)) return false;
    if(!loadStack(weanetr_stackMap, weanetr_stacktrace)) return false;

    return true;
}


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
        if (name == nullptr) name = strrchr(ModuleName, '\\');
        if (name == nullptr) name = ModuleName;
        else name = name + 1;
        this->name.append(name);
        this->base = ModuleBase;
        this->size = ModuleSize;
    }

    bool contains(ULONG_PTR addr) {
        return base <= addr && addr < (base + size);
    }

    std::vector<std::shared_ptr<ModuleExport>>::iterator _find_gt(ULONG_PTR addr) {
        return std::upper_bound(exports.begin(), exports.end(), addr,[](ULONG_PTR addr, std::shared_ptr<ModuleExport> &bl) {  // <
            return addr < bl->addr;
        });
    }

    std::vector<std::shared_ptr<ModuleExport>>::iterator _find_le(ULONG_PTR addr) {
        auto it = _find_gt(addr);
        if (it == exports.begin()) return exports.end();
        return it - 1;
    }

    ModuleExport *find_export_le(ULONG_PTR addr) {
        if (!_findExports()) return nullptr;
        auto it = _find_le(addr);
        if (it == exports.end()) return nullptr;
        return &**it;
    }

    bool _visitExport(ULONG_PTR funAddr, const char *name) {
        auto value = std::make_shared<ModuleExport>(funAddr, name);
        auto it = _find_gt(funAddr);
        if (it != this->exports.begin() && (*(it - 1))->addr == funAddr) {
            *(it - 1) = value;
            return false;
        }
        if (it == this->exports.end()) {
            this->exports.push_back(value);
            return true;
        }
        this->exports.insert(it, value);
        return true;
    }

    bool _findExports() {
        if (!exports.empty()) return true;
        auto *pHeader = (PIMAGE_DOS_HEADER) base;
        if (pHeader->e_magic != IMAGE_DOS_SIGNATURE) return false;
        auto *header = (PIMAGE_NT_HEADERS) ((BYTE *) base + ((PIMAGE_DOS_HEADER) base)->e_lfanew);
        if (header->Signature != IMAGE_NT_SIGNATURE) return false;
        if (header->OptionalHeader.NumberOfRvaAndSizes == 0) return false;
        PIMAGE_EXPORT_DIRECTORY exports = (PIMAGE_EXPORT_DIRECTORY) ((BYTE *) base + header->
                OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
        if (exports->AddressOfNames == 0) return false;
        DWORD *names = (DWORD *) ((int) base + exports->AddressOfNames);
        SHORT *nameOrdinals = (SHORT *) ((BYTE *) base + exports->AddressOfNameOrdinals);
        DWORD *functions = (DWORD *) ((BYTE *) base + exports->AddressOfFunctions);
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

    bool _visitModule(std::shared_ptr<LoadedModule> &value) {
        auto it = _find_gt(value->base);
        if (it != this->modules.begin() && (*(it - 1))->base == value->base) {
            *(it - 1) = value;
            return false;
        }
        if (it == this->modules.end()) {
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
        return std::upper_bound(modules.begin(), modules.end(), addr,
                                [](ULONG_PTR addr, std::shared_ptr<LoadedModule> &bl) {  // <
                                    return addr < bl->base;
                                });
    }

    std::vector<std::shared_ptr<LoadedModule>>::iterator _find_ge(ULONG_PTR addr) {
        return std::lower_bound(modules.begin(), modules.end(), addr,
                                [](std::shared_ptr<LoadedModule> &bl, ULONG_PTR addr) {  // <=
                                    return bl->base < addr;
                                });
    }

    LoadedModule *find(ULONG_PTR addr) {
        auto it = _find_ge(addr);
        if (it != modules.end()) {
            if ((*it)->contains(addr)) return &**it;
        }
        for (auto &mod: modules) {
            if (mod->contains(addr)) return &*mod;
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

void StackFrame::formatOneLine(std::wstringstream &ss) {
    if(isOld) {
        uint32_t va = (uint8_t *) eip - api::dk2_base + dk2_virtual_base;
        ss << "- old sp=" << hex32(esp) << " va=" << hex32(va) << " " << dk2Name.c_str();
    } else {
        ss << "- lib sp=" << hex32(esp) << " bp=" << hex32(ebp) << " ip=" << hex32(eip);
        if (symAddr != 0) {
            ss << " " << libName.c_str() << ":" << symName.c_str() << "+" << hex16(eip - symAddr);
        } else {
            ss << " " << libName.c_str() << "+" << hex16(eip - libBase);
        }
    }
    if(error) ss << " (error)";
}

void StackFrame::format(std::wstringstream &ss) {
    formatOneLine(ss);
    ss << "\n";
    if(error) {
        ss << spinfo;
    }
}

void formatError(std::wstringstream &iss, CONTEXT *ctx, StackLimits &limits) {
    iss << "  dk2: [" << hex32(api::dk2_base) << "-" << hex32(api::dk2_base + api::dk2_size) << "]\n";
    auto fmtAddr = [&limits](DWORD addr) -> std::wstring {
        std::wstringstream fss;
        fss << hex32(addr);
        if((DWORD) api::dk2_base <= addr && addr < ((DWORD) api::dk2_base + api::dk2_size)) {
            fss << " dk2 va=" << hex32(addr - (DWORD) api::dk2_base + dk2_virtual_base);
        }
        if(limits.contains(addr)) {
            fss << " stack";
        }
        return fss.str();
    };
    iss << "  ip " << fmtAddr(ctx->Eip) << "\n";
    auto *sp = (uint32_t *) ctx->Esp;
    iss << "  sp " << hex32(sp) << "\n";
    iss << "  sp[-6] " << fmtAddr(sp[-6]) << "\n";
    iss << "  sp[-5] " << fmtAddr(sp[-5]) << "\n";
    iss << "  sp[-4] " << fmtAddr(sp[-4]) << "\n";
    iss << "  sp[-3] " << fmtAddr(sp[-3]) << "\n";
    iss << "  sp[-2] " << fmtAddr(sp[-2]) << "\n";
    iss << "  sp[-1] " << fmtAddr(sp[-1]) << "\n";
    iss << "  sp[ 0] " << fmtAddr(sp[0]) << "\n";
    iss << "  sp[ 1] " << fmtAddr(sp[1]) << "\n";
    iss << "  sp[ 2] " << fmtAddr(sp[2]) << "\n";
    iss << "  sp[ 3] " << fmtAddr(sp[3]) << "\n";
    iss << "  sp[ 4] " << fmtAddr(sp[4]) << "\n";
}

bool visit_old_frame(stacktrace_t &stacktrace, CONTEXT *ctx, StackLimits &limits, std::vector<std::shared_ptr<StackFrame>> &frames) {
    auto &frame = frames.emplace_back(new StackFrame());
    frame->isOld = true;
    frame->esp = ctx->Esp;
    frame->eip = ctx->Eip;
    std::wstringstream iss;

    uint32_t rva = (uint8_t *) ctx->Eip - api::dk2_base;
    auto it = stacktrace.find_le(rva);
    if (it == stacktrace.stack.end()) {
        std::stringstream ess;
        iss << "  area not found " << hex32(rva) << "\n";
        frame->onError(iss.str());
        return false;
    }
    auto &area = **it;
    frame->dk2Name = area.name;
    auto opit = area.find_ge(rva);
    if (opit == area.ops.end()) {
        iss << "  va=" << hex32(rva + dk2_virtual_base) << " op not found" << "\n";
        frame->onError(iss.str());
        return false;
    }
    uint32_t esp_start = ctx->Esp;
    auto &op = **opit;
    int32_t check_offs = op.stack_offs;
    uint32_t sp_base = esp_start - check_offs;
    while (true) {
        switch (op.kind) {
            case SP: {
                if ((ctx->Esp - op.stack_offs) != sp_base) {
                    iss << "    sp=" << hex32(ctx->Esp) << " spd=" << hex16(-op.stack_offs) << " va="
                       << hex32(op.rva + dk2_virtual_base);
                    iss << " sp_base change " << hex32(ctx->Esp - op.stack_offs) << " " << hex32(sp_base) << "\n";
                }
                if (op.se_kind == SE_POP_BP) {
                    uint32_t value = *(uint32_t *) (ctx->Esp + op.se_value);
//            printf("    sp=%08X spd=%04X va=%08X bp = [sp + %d]  value=%08X->%08X\n", ctx->Esp, -op.stack_offs, op.rva + dk2_virtual_base, op.se_value, ctx->Ebp, value);
                    ctx->Ebp = value;
//            printf("    sp=%08X spd=%04X va=%08X sp += %d\n", ctx->Esp, -op.stack_offs, op.rva + dk2_virtual_base, op.value);
                    ctx->Esp += op.value;
                } else if (op.se_kind == SE_MOV_SP_BP) {
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
                if ((ctx->Esp - esp_start) != -check_offs) {
                    iss << "sp change " << hex16(ctx->Esp - esp_start) << "(" << (ctx->Esp - esp_start) << ") ";
                    iss << hex16(-check_offs) << "(" << (-check_offs) << ")" << "\n";
                }
                if (ctx->Esp != sp_base) {
                    iss << "sp_base change " << hex32(ctx->Esp) << " " << hex32(sp_base) << "\n";
                }
                if (ctx->Eip < 0x10000 || ctx->Eip == 0xFFFFFFFF || !limits.contains(ctx->Esp)) {
                    formatError(iss, ctx, limits);
                    frame->onError(iss.str());
                    return false;
                }
                ctx->Esp += op.value + 4;
                frame->onSuccess(iss.str());
                frame->ebp = ctx->Ebp;
                return true;
            }
            case JMP: {
                iss << "    va=" << hex32(op.rva + dk2_virtual_base) << " jmp " << hex32((uint32_t) op.value) << "\n";
                if (op.value == 0) {
                    // force exit such frame
                    ctx->Esp -= op.stack_offs;
                    auto *sp = (uint32_t *) ctx->Esp;
                    ctx->Eip = sp[0];
                    ctx->Esp += op.value + 4;
                    frame->onSuccess(iss.str());
                    frame->ebp = ctx->Ebp;
                    return true;
                }
                uint32_t jmp_rva = (uint32_t) op.value - dk2_virtual_base;
                ctx->Eip = (uint32_t) (api::dk2_base + jmp_rva);
                frame->onSuccess(iss.str());
                return visit_old_frame(stacktrace, ctx, limits, frames);
            }
            case SP_Invalid:
            default:
                iss << "    va=" << hex32(op.rva + dk2_virtual_base) << " invalid op" << "\n";
                frame->onError(iss.str());
                return false;
        }
        opit++;
        if (opit == area.ops.end()) {
            iss << "    va=" << hex32(op.rva + dk2_virtual_base) << " ret not found" << "\n";
            for (auto &op: area.ops) {
                switch (op->kind) {
                    case SP:
                        iss << "- " << hex32(op->rva) << " sp " << op->value << "\n";
                        break;
                    case RET:
                        iss << "- " << hex32(op->rva) << " ret " << op->value << "\n";
                        break;
                    case JMP:
                        iss << "- " << hex32(op->rva) << " jmp " << op->value << "\n";
                        break;
                }
            }
            frame->onError(iss.str());
            return false;
        }
        op = **opit;
    }
}

bool visit_ebp_frame(
        CONTEXT *ctx, StackLimits &limits,
        std::vector<std::shared_ptr<StackFrame>> &frames,
        LoadedModules &modules) {

    auto &frame = frames.emplace_back(new StackFrame());
    frame->isOld = false;
    frame->esp = ctx->Esp;
    frame->ebp = ctx->Ebp;
    frame->eip = ctx->Eip;
    if (auto *mod = modules.find(ctx->Eip)) {
        frame->libName = mod->name;
        frame->libBase = mod->base;
        if (auto *exp = mod->find_export_le(ctx->Eip)) {
            frame->symName = exp->name;
            frame->symAddr = exp->addr;
        }
        if(mod->name == "bootstrap_patcher.exe") {
        }
    }
    if (!limits.contains(ctx->Esp)) {
        std::wstringstream iss;
        iss << "bad esp=" << hex32(ctx->Esp) << "\n";
        formatError(iss, ctx, limits);
        frame->onError(iss.str());
        return false;
    }
    if (!limits.contains(ctx->Ebp)) {
        std::wstringstream iss;
        iss << "bad ebp=" << hex32(ctx->Ebp) << "\n";
        formatError(iss, ctx, limits);
        frame->onError(iss.str());
        return false;
    }
    auto *bp = (uint32_t *) ctx->Ebp;
    ctx->Ebp = *bp++;
    if (ctx->Ebp != 0 && !limits.contains(ctx->Ebp)) {
        std::wstringstream iss;
        iss << "bad ebp=" << hex32(ctx->Ebp) << "\n";
        formatError(iss, ctx, limits);
        frame->onError(iss.str());
        return false;
    }
    ctx->Eip = *bp++;
    ctx->Esp = (uint32_t) bp;
    return true;
}

bool api::traceTheStack(CONTEXT *ctx, StackLimits &limits, std::vector<std::shared_ptr<StackFrame>> &frames) {
    LoadedModules modules;
    if(!modules.collect()) return false;
    while (true) {
        if (api::dk2_contains((uint8_t *) ctx->Eip)) {
            if (!visit_old_frame(dk2_stacktrace, ctx, limits, frames)) return false;
        } else if (api::weanetr_contains((uint8_t *) ctx->Eip)) {
            if (!visit_old_frame(weanetr_stacktrace, ctx, limits, frames)) return false;
        } else {
            if(!visit_ebp_frame(ctx, limits, frames, modules)) return false;
        }
        if (ctx->Ebp == 0) break;
    }
//    RtlUnwind()
//    RtlLookupFunctionEntry()
//    StackWalk()
//    StackWalk64()
//    StackWalkEx()
// https://github.com/DavidKinder/Windows-Inform7/blob/master/Inform7/StackTrace.cpp#L18
    return true;
}

LONG ExceptionFilter(PEXCEPTION_POINTERS pep) {
    std::wstringstream ss;
    ss << "caught exception " << hex32(pep->ExceptionRecord->ExceptionCode) << " at "
       << hex32(pep->ExceptionRecord->ExceptionAddress) << " in thread " << GetCurrentThreadId();
    PWSTR threadDesc = nullptr;
    if (SUCCEEDED(GetThreadDescription(GetCurrentThread(), &threadDesc)) && (*threadDesc != L'\0')) {
        ss << threadDesc;
        LocalFree(threadDesc);
    }
    ss << "\n";

    ss << "  process id: " << GetCurrentProcessId() << "\n";
    ss << "  bootstrap patcher base: " << hex32(api::ember_base) << "\n";
    ss << "  dk2 base: " << hex32(api::dk2_base) << "\n";
    ss << "  eax=" << hex32(pep->ContextRecord->Eax);
    ss << " ebx=" << hex32(pep->ContextRecord->Ebx);
    ss << " ecx=" << hex32(pep->ContextRecord->Ecx);
    ss << " edx=" << hex32(pep->ContextRecord->Edx);
    ss << "\n";
    ss << "  esi=" << hex32(pep->ContextRecord->Esi);
    ss << " edi=" << hex32(pep->ContextRecord->Edi);
    ss << "\n";
    ss << "  esp=" << hex32(pep->ContextRecord->Esp);
    ss << " ebp=" << hex32(pep->ContextRecord->Ebp);
    ss << "\n";
    ss << "  eip=" << hex32(pep->ContextRecord->Eip);
    ss << "\n";
    CONTEXT ctx = *pep->ContextRecord;  // make ctx copy
    StackLimits limits;
    limits.resolve();
    ss << "stack limits: " << hex32(limits.low) << "-" << hex32(limits.high) << "\n";

    std::vector<std::shared_ptr<StackFrame>> frames;
    bool result = api::traceTheStack(&ctx, limits, frames);
    for(auto &fr : frames) {
        fr->format(ss);
    }
    if (!result) {
        ss << "  trace stack failed" << "\n";
    }

    std::wstring trace = ss.str();
    wprintf(L"%ls", trace.c_str());

    bool throwAgain = false;
    if (stacktrace::show((HINSTANCE) api::ember_base, throwAgain, trace.c_str())) {
        if (throwAgain) {
            return EXCEPTION_CONTINUE_EXECUTION;
        }
    }
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

bool api::traceCurrentStack(std::wstringstream &ss) {
    CONTEXT ctx;
    ZeroMemory(&ctx, sizeof(ctx));
    ctx.ContextFlags = CONTEXT_FULL;
    RtlCaptureContext(&ctx);
    StackLimits limits;
    limits.resolve();
    ss << "stack limits: " << hex32(limits.low) << "-" << hex32(limits.high) << "\n";
    std::vector<std::shared_ptr<StackFrame>> frames;
    bool result = traceTheStack(&ctx, limits, frames);
    for(auto &fr : frames) {
        fr->format(ss);
    }
    if (!result) {
        ss << "  trace stack failed" << "\n";
    }
    return result;
}

bool api::initStacktrace() {
    if (!loadStack()) return false;
//  if(!replaceXrefs(funptr<&dk2::main>(), proxy_main)) return false;
    // better. catches all threads
    SetUnhandledExceptionFilter(TopLevelExceptionFilter);
    return true;
}