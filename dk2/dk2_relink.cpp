//
// Created by DiaLight on 18.03.2023.
//
#include <dk2_relink.h>
#include <dk2_relink_refs.h>
#include <Windows.h>
#include <dk2_globals.h>
#include <utils/patch.h>
#include <dk2_info.h>

#define dk2_virtual_base 0x00400000


void collect_direct_xrefs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    auto *dos = (IMAGE_DOS_HEADER *) api::ember_base;
    auto *nt = (IMAGE_NT_HEADERS *) (api::ember_base + dos->e_lfanew);
    auto &relocDir = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC];
    if(relocDir.Size == 0) {
        printf("[error]: there is no reloc table\n");
        return;
    }
    size_t relRelocsCount = 0;
    size_t dk2RelRelocsCount = 0;
    for(
            auto *baseReloc = (IMAGE_BASE_RELOCATION *) (api::ember_base + relocDir.VirtualAddress);
            baseReloc->SizeOfBlock;
            baseReloc = (IMAGE_BASE_RELOCATION *) ((uint8_t *) baseReloc + baseReloc->SizeOfBlock)
            ) {
        DWORD count = (baseReloc->SizeOfBlock - sizeof(IMAGE_BASE_RELOCATION)) / sizeof(BASE_RELOCATION_ENTRY);
        for (
                auto *entry = (BASE_RELOCATION_ENTRY *) (baseReloc + 1),
                        *end = entry + count;
                entry < end; entry++
                ) {
            if(entry->Type == IMAGE_REL_BASED_HIGHLOW) {
                relRelocsCount++;
                auto *src = (uint32_t *) (api::ember_base + baseReloc->VirtualAddress + entry->Offset);
                if(filter_src(src)) {
                    uint32_t dst = *(uint32_t *) src;
                    auto it = xrefs_map.find(dst);
                    if(it != xrefs_map.end()) {
                        dk2RelRelocsCount++;
                        it->second->refs.push_back(ref_t(src, VA32));
                    }
                }
            }
        }
    }
    printf("dk2_relocs/all_relocs.count %d/%d\n", dk2RelRelocsCount, relRelocsCount);
}
void collect_relative_xrefs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    auto *dos = (IMAGE_DOS_HEADER *) api::ember_base;
    auto *nt = (IMAGE_NT_HEADERS *) (api::ember_base + dos->e_lfanew);
    for (
            auto *section = IMAGE_FIRST_SECTION(nt),
                    *sections_end = section + nt->FileHeader.NumberOfSections;
            section < sections_end; section++
            ) {
        if(strcmp((char *) section->Name, ".text") != 0) continue;
        for(
                uint8_t *pos = api::ember_base + section->VirtualAddress,
                        *end = pos + section->Misc.VirtualSize;
                pos < end; pos++) {
            if(*pos == 0xE8) {
                auto *src = (uint32_t *) (pos + 1);
                auto dst = (uint32_t) ((pos + 5) + *src);
                auto it = xrefs_map.find(dst);
                if(it != xrefs_map.end()) {
                    it->second->refs.push_back(ref_t(src, REL32));
                }
                pos += 4;
            }
        }
        break;
    }
}
void close_access_to_global_stubs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    auto *dos = (IMAGE_DOS_HEADER *) api::ember_base;
    auto *nt = (IMAGE_NT_HEADERS *) (api::ember_base + dos->e_lfanew);
    for (
            IMAGE_SECTION_HEADER *section = IMAGE_FIRST_SECTION(nt),
                    *sections_end = section + nt->FileHeader.NumberOfSections;
            section < sections_end; section++
            ) {
        if(strcmp((char *) section->Name, ".stub") != 0) continue;
        DWORD ignore;
        if(!VirtualProtect(
                api::ember_base + section->VirtualAddress, section->Misc.VirtualSize,
                PAGE_READWRITE | PAGE_GUARD, &ignore)) {
            printf("[error]: VirtualProtect failed with %08X\n", GetLastError());
        }
        break;
    }
}
//void dump_xrefs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
//    for(auto &e : xrefs_map) {
////        if(e.second->refs.size() < 3) continue;
////        uint32_t stub_rva = e.first - (uint32_t) exe_base;
//        uint32_t stub_rva = 0;
//        const char *skind = "";
//        switch(e.second->kind) {
//            case SK_Global:
//                skind = "g";
//                break;
//            case SK_Function:
//                skind = "f";
//                break;
//            case SK_ThisFunction:
//                skind = "tf";
//                break;
//        }
////        auto new_dst = (uint32_t) (e.second->dk2_rva - dk2_virtual_base + api::dk2_base);
//        auto new_dst = 0;
//        printf("%s %08X -> %08X(%08X) %d %s\n", skind, stub_rva, e.second->dk2_rva, new_dst, e.second->refs.size(), e.second->name);
//        for(auto &r : e.second->refs) {
//            const char *rkind = "";
//            switch(r.kind) {
//                case VA32:
//                    rkind = "a";
//                    break;
//                case REL32:
//                    rkind = "r";
//                    break;
//            }
////            uint32_t src_rva = (uint32_t) r.src - (uint32_t) exe_base;
//            uint32_t src_rva = 0;
//            printf("  %s %08X\n", rkind, src_rva);
//        }
//    }
//}

std::map<uint32_t, std::shared_ptr<xrefs_t>> ptr_xrefs_map;

void xrefs_t::setDst(uint32_t dst) {
    for(auto &r : this->refs) {
        write_protect prot(r.src, sizeof(uint32_t));
        switch(r.kind) {
            case VA32:
                *r.src = dst;
                break;
            case REL32:
                *r.src = dst - (uint32_t) (r.src + 1);
                break;
        }
    }
}

void do_relink(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    for(auto &e : xrefs_map) {
        auto new_dst = (uint32_t) (e.second->dk2_rva - dk2_virtual_base + api::dk2_base);
        ptr_xrefs_map.insert(std::make_pair(new_dst, e.second));
        e.second->setDst(new_dst);
    }
}


bool ember_runtime_relink() {
    std::map<uint32_t, std::shared_ptr<xrefs_t>> xrefs_map;
    create_xrefs(xrefs_map);
    printf("ember dk2 links collected. items.count=%d\n", xrefs_map.size());
    collect_direct_xrefs(xrefs_map);
    collect_relative_xrefs(xrefs_map);
    size_t total_xrefs = 0;
    for(auto &e : xrefs_map) {
        total_xrefs += e.second->refs.size();
    }
    printf("ember dk2 link xrefs collected. items.count=%d\n", total_xrefs);
    if(total_xrefs == 0) {
        printf("[error]: something is wrong, total_xrefs %d\n", total_xrefs);
        return false;
    }
//    dump_xrefs(xrefs_map);

    do_relink(xrefs_map);
    close_access_to_global_stubs(xrefs_map);
    return true;
}

bool api::replaceEmberXrefs(void *pfun, void *proxy) {
    auto it = ptr_xrefs_map.find((uint32_t) pfun);
    if(it == ptr_xrefs_map.end()) {
        printf("[ERROR]: xrefs to %p not found\n", pfun);
        return false;
    }
    it->second->setDst((uint32_t) proxy);
    return true;
}
