//
// Created by DiaLight on 18.03.2023.
//
#include <dk2_relink.h>
#include <dk2_relink_refs.h>
#include <Windows.h>
#include <dk2_globals.h>

#define dk2_virtual_base 0x00400000


void collect_direct_xrefs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    auto *exe_base = (uint8_t *) GetModuleHandleA(NULL);
    auto *dos = (IMAGE_DOS_HEADER *) exe_base;
    auto *nt = (IMAGE_NT_HEADERS *) (exe_base + dos->e_lfanew);
    auto &relocDir = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC];
    if(relocDir.Size == 0) return;
    for(
            auto *baseReloc = (IMAGE_BASE_RELOCATION *) (exe_base + relocDir.VirtualAddress);
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
                auto *src = (uint32_t *) (exe_base + baseReloc->VirtualAddress + entry->Offset);
                if(filter_src(src)) {
                    uint32_t dst = *(uint32_t *) src;
                    auto it = xrefs_map.find(dst);
                    if(it != xrefs_map.end()) {
                        it->second->refs.push_back(ref_t(src, VA32));
                    }
                }
            }
        }
    }
}
void collect_relative_xrefs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    auto *exe_base = (uint8_t *) GetModuleHandleA(NULL);
    auto *dos = (IMAGE_DOS_HEADER *) exe_base;
    auto *nt = (IMAGE_NT_HEADERS *) (exe_base + dos->e_lfanew);
    for (
            auto *section = IMAGE_FIRST_SECTION(nt),
                    *sections_end = section + nt->FileHeader.NumberOfSections;
            section < sections_end; section++
            ) {
        if(strcmp((char *) section->Name, ".text") != 0) continue;
        for(
                uint8_t *pos = exe_base + section->VirtualAddress,
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
    auto *exe_base = (uint8_t *) GetModuleHandleA(NULL);
    auto *dos = (IMAGE_DOS_HEADER *) exe_base;
    auto *nt = (IMAGE_NT_HEADERS *) (exe_base + dos->e_lfanew);
    for (
            IMAGE_SECTION_HEADER *section = IMAGE_FIRST_SECTION(nt),
                    *sections_end = section + nt->FileHeader.NumberOfSections;
            section < sections_end; section++
            ) {
        if(strcmp((char *) section->Name, ".stub") != 0) continue;
        DWORD ignore;
        if(!VirtualProtect(
                exe_base + section->VirtualAddress, section->Misc.VirtualSize,
                PAGE_READWRITE | PAGE_GUARD, &ignore)) {
            printf("[error]: VirtualProtect failed with %08X\n", GetLastError());
        }
        break;
    }
}
void dump_xrefs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    for(auto &e : xrefs_map) {
        if(e.second->refs.size() < 3) continue;
//        uint32_t stub_rva = e.first - (uint32_t) exe_base;
        uint32_t stub_rva = 0;
        const char *skind = "";
        switch(e.second->kind) {
            case SK_Global:
                skind = "g";
                break;
            case SK_Function:
                skind = "f";
                break;
            case SK_ThisFunction:
                skind = "tf";
                break;
        }
//        auto new_dst = (uint32_t) (e.second->dk2_rva - dk2_virtual_base + dk2_base);
        auto new_dst = 0;
        printf("%s %08X -> %08X(%08X) %d %s\n", skind, stub_rva, e.second->dk2_rva, new_dst, e.second->refs.size(), e.second->name);
        for(auto &r : e.second->refs) {
            const char *rkind = "";
            switch(r.kind) {
                case VA32:
                    rkind = "a";
                    break;
                case REL32:
                    rkind = "r";
                    break;
            }
//            uint32_t src_rva = (uint32_t) r.src - (uint32_t) exe_base;
            uint32_t src_rva = 0;
            printf("  %s %08X\n", rkind, src_rva);
        }
    }
}
void do_relink(void *_dk2_base, std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    auto *dk2_base = (uint8_t *) _dk2_base;
    for(auto &e : xrefs_map) {
        auto new_dst = (uint32_t) (e.second->dk2_rva - dk2_virtual_base + dk2_base);
        for(auto &r : e.second->refs) {
            DWORD oldProtect;
            VirtualProtect(r.src, sizeof(uint32_t), PAGE_EXECUTE_READWRITE, &oldProtect);
            switch(r.kind) {
                case VA32:
                    *r.src = new_dst;
                    break;
                case REL32:
                    *r.src = new_dst - (uint32_t) (r.src + 1);
                    break;
            }
            DWORD ignore;
            VirtualProtect(r.src, sizeof(uint32_t), oldProtect, &ignore);
        }
    }
}
void ember_runtime_relink(void *dk2_base) {
    std::map<uint32_t, std::shared_ptr<xrefs_t>> xrefs_map;
    create_xrefs(xrefs_map);
    collect_direct_xrefs(xrefs_map);
    collect_relative_xrefs(xrefs_map);
//    dump_xrefs(xrefs_map);
    do_relink(dk2_base, xrefs_map);
    close_access_to_global_stubs(xrefs_map);
}
