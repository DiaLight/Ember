//
// Created by DiaLight on 29.01.2023.
//
#include <dk2_patches.h>
#include <dk2_info.h>
#include <utils/patch.h>

namespace patch {
    bool make_money_editable();
}

bool patch::make_money_editable() {

    // .text:004B9FA2                 jz      short loc_4B9FA7
    uint8_t *pos = (uint8_t * )(api::dk2_base + (0x004B9FA2 - dk2_virtual_base));
    {
        write_protect prot(pos, 2);
        pos[0] = 0xEB;  // jmp short loc_4B9FA7
    }
    return true;
}

