//
// Created by DiaLight on 18.03.2023.
//
#include <utils/xrefs.h>
#include <map>
#include <memory>
#include <vector>
#include <dk2_info.h>
#include <utils/parse.h>
#include <Windows.h>
#include <utils/patch.h>

using namespace api;

enum RelocKind {
    Invalid,
    VA32,  // IMAGE_REL_I386_DIR32 -> IMAGE_REL_BASED_HIGHLOW
    REL32  // IMAGE_REL_I386_REL32 -> ignore
};
bool parse_reloc(char *line, size_t line_len, DWORD &src, DWORD &dst, RelocKind &kind) {
    if(line[0] == '#') return true;  // #...
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
    if(*line != ' ' && *line != '\r' && *line != '\n') return false;
    line++;

    if(strneq(type, "!VA32", type_len)) {
        return true;
    } else if(strneq(type, "VA32", type_len)) {
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

std::map<DWORD, std::shared_ptr<std::vector<ref_t>>> xrefs;
std::map<DWORD, bool> lockedRva;

#if EMBED_MAPPINGS
bool getReferences(std::string &out);
#else
bool getReferences(std::string &out) {
    std::wstring refsPath = g_curExeDir + L"/references.map";
    if(!readFile(out, refsPath.c_str())) return false;
    return true;
}
#endif

bool api::initXrefsApi() {
    std::string refsMap;
    if(!getReferences(refsMap)) return false;
    if(refsMap.empty()) {
        printf("[error]: buf is empty\n");
        return false;
    }

    char *map_end = (char *) &refsMap[refsMap.size()];
    char *pos = (char *) &refsMap[0];
    while (pos < map_end) {
        char *line = pos;
        size_t line_len;
        pos = read_line(pos, line_len, map_end);

        DWORD src, dst;
        RelocKind kind = Invalid;
        if(!parse_reloc(line, line_len, src, dst, kind)) {
            char *str = (char *) malloc(line_len + 1);
            memcpy(str, line, line_len * sizeof(char));
            str[line_len] = '\0';
            printf("[error]: %s\n", str);
            free(str);
            return false;
        }
        if(kind == Invalid) continue;

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
//        {
//            printf("%08X -> %08X ", src, dst);
//            switch (kind) {
//                case VA32:
//                    print("VA32");
//                    break;
//                case REL32:
//                    print("REL32");
//                    break;
//            }
//            print("\n");
//        }

        if(list) {
            list->push_back(ref_t(src, kind));
        } else {
            printf("list == null\n");
        }

    }
    printf("xrefs loaded. items.count=%d\n", xrefs.size());
    return true;
}

bool api::replaceXrefs(void *pfun, void *proxy) {
    auto *fun = (uint8_t *) pfun;
    if(!dk2_contains(fun)) {
        fprintf(stderr, "[ERROR] ptr %08X is not in dk2[%08X-%08X]\n", fun, dk2_base, dk2_base + dk2_size);
        return false;
    }
    DWORD rva = (DWORD) (fun - dk2_base);
    {
        auto it = lockedRva.find(rva);
        if(it != lockedRva.end()) {
            fprintf(stderr, "[ERROR] rva %08X is already locked\n", rva + dk2_virtual_base);
            return false;
        }
        lockedRva[rva] = true;
    }

    auto it = xrefs.find(rva);
    if(it == xrefs.end()) {
        printf("[ERROR] xrefs not found for %08X\n", rva + dk2_virtual_base);
        return false;
    }
    for(auto &ref : *it->second) {
        uint8_t *pos = dk2_base + ref.src;
        write_protect prot(pos, sizeof(DWORD));
        switch (ref.kind) {
            case VA32:
//                printf("- va32 %08X(%08X) -> %08X -> %08X(%08X)\n", ref.src, ref.src - (DWORD) base, (DWORD) proxy, fun, rva);
                *(DWORD *) pos = (DWORD) proxy;
                break;
            case REL32:
//                printf("- rva32 %08X(%08X) -> %08X -> %08X(%08X)\n", ref.src, ref.src - (DWORD) base, (DWORD) proxy, fun, rva);
                *(DWORD *) pos = (uint8_t *) proxy - (pos + 4);
                break;
        }
    }

    return true;
}
