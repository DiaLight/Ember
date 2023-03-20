//
// Created by DiaLight on 11.01.2023.
//
#include <dk2_patches.h>
#include <utils/patch.h>
#include <dk2_info.h>
#include <dk2/MySurfaceWrapper.h>


bool patch::fix_usage_uninitialized_structure() {
    // .text:0057C47E                 mov     dword ptr [esi+0Ch], 1C0h
    HookHandle::create(api::dk2_base + (0x0057C47E - dk2_virtual_base), 7)->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        auto *struc = (dk2::MySurfaceWrapper *) (regs.esp + 0x10);
        // texture load bug happens when (this->f10_flags & 0xF00) == 0x800
        // and (struc->f0_flags & 1) != 0 && (struc->f38_texFlags & 1) != 0
        // with default software render engine
        ZeroMemory(struc, sizeof(*struc));
    });
    return true;
}
