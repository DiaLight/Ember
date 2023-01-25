//
// Created by DiaLight on 25.01.2023.
//
#include <patches.h>
#include <api.h>
#include <api/patch.h>
#include <dk2_structures.h>


bool patch::notify_another_instance_is_running() {
  // .text:005A5DDE                 mov     [ebp+var_4], 0FFFFFFFFh
  HookHandle::create(dk2_base + (0x005A5DDE - dk2_virtual_base), 7)->addHandler([](HookHandler &handle, Regs &regs, void *target) {
    printf("[ERROR]: another instance of DK2 is running");
  });
  LPD3DENUMDEVICESCALLBACK;
  return true;
}

