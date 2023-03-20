//
// Created by DiaLight on 25.01.2023.
//
#include <dk2_patches.h>
#include <utils/patch.h>
#include <dk2_info.h>


bool patch::notify_another_instance_is_running() {
    // .text:005A5DDE                 mov     [ebp+var_4], 0FFFFFFFFh
    HookHandle::create(api::dk2_base + (0x005A5DDE - dk2_virtual_base), 7)->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        printf("[ERROR]: another instance of DK2 is running");
    });
    return true;
}

