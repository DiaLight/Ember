//
// Created by DiaLight on 09.01.2023.
//
#include <dk2_patches.h>
#include <cstdio>
#include <dk2_info.h>
#include <Windows.h>
#include <utils/patch.h>

bool patch::unlimited_zoom_hack() {
    if (!api::hasFlag("unlimited_zoom")) return true;

//  .text:00449CDC                 cmp     edi, eax
//  .text:00449CDE                 jge     short loc_449CF3
//  .text:00449CE0                 cmp     edx, esi
//  .text:00449CE2                 jle     short loc_449CF1
    uint8_t *pos = (uint8_t *) (api::dk2_base + (0x00449CDC - dk2_virtual_base));
    DWORD oldProtect;
    {
        write_protect prot(pos, 8);
        memset(pos, 0x90, 8);
    }
    return true;
}

