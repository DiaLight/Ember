//
// Created by DiaLight on 25.01.2023.
//
#include <api/patch.h>
#include <api.h>
#include <api/direct_input.h>
#include <dinput.h>

#if(DIRECTINPUT_VERSION != 0x0500)
#error "DIRECTINPUT_VERSION != 0x0500"
#endif /* DIRECTINPUT_VERSION != 0x0500 */
static_assert(sizeof(DIDEVICEOBJECTDATA) == 0x10);

namespace api {

  std::vector<std::function<void(DIDEVICEOBJECTDATA *)>> DIRECT_INPUT_DATA;

}

bool initDirectInput() {

  // .text:005DDB6B                 mov     eax, [esp+14h+count_] ; jumptable 005DDAC1 default case, cases 1-3,5-7,9-11
  // .text:005DDB6F                 add     esi, 10h

  HookHandle::create(dk2_base + (0x005DDB6B - dk2_virtual_base), 7)->addHandler([](HookHandler &handle, Regs &regs, void *target) {
    auto *data = (DIDEVICEOBJECTDATA *) regs.esi;
    for(auto &cb : api::DIRECT_INPUT_DATA) {
      cb(data);
    }
  });

  return true;
};
