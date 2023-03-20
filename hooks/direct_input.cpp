//
// Created by DiaLight on 25.01.2023.
//
#include <hooks/direct_input.h>
#include <dinput.h>
#include <utils/patch.h>
#include <dk2_info.h>

#if(DIRECTINPUT_VERSION != 0x0500)
#error "DIRECTINPUT_VERSION != 0x0500"
#endif /* DIRECTINPUT_VERSION != 0x0500 */
static_assert(sizeof(DIDEVICEOBJECTDATA) == 0x10);

namespace hook {

  std::vector<std::function<void(DIDEVICEOBJECTDATA *)>> DIRECT_INPUT_MOUSE_DATA;
  std::vector<std::function<void(DIDEVICEOBJECTDATA *)>> DIRECT_INPUT_KEYBOARD_DATA;

}

bool hook::initDirectInput() {

  // .text:005DDB6B                 mov     eax, [esp+14h+count_] ; jumptable 005DDAC1 default case, cases 1-3,5-7,9-11
  // .text:005DDB6F                 add     esi, 10h
  HookHandle::create(api::dk2_base + (0x005DDB6B - dk2_virtual_base), 7)->addHandler([](HookHandler &handle, Regs &regs, void *target) {
    auto *data = (DIDEVICEOBJECTDATA *) regs.esi;
    for(auto &cb : hook::DIRECT_INPUT_MOUSE_DATA) {
      cb(data);
    }
  });

  // .text:005DE2CB                 mov     eax, [esp+18h+arg_0]
  // .text:005DE2CF                 add     esi, 10h
  HookHandle::create(api::dk2_base + (0x005DE2CB - dk2_virtual_base), 7)->addHandler([](HookHandler &handle, Regs &regs, void *target) {
    auto *data = (DIDEVICEOBJECTDATA *) regs.esi;
    for(auto &cb : hook::DIRECT_INPUT_KEYBOARD_DATA) {
      cb(data);
    }
  });

  return true;
};
