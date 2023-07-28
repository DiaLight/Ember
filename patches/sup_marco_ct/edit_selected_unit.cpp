//
// Created by DiaLight on 29.01.2023.
//
#include <dk2_patches.h>
#include <dk2/entities/CCreature.h>
#include <dk2_info.h>
#include <utils/patch.h>

namespace patch {
    bool edit_selected_unit();
}

namespace unitBase {
    dk2::CCreature *selCreature = nullptr;
}

namespace {

    void setHealth(uint32_t value) {
        unitBase::selCreature->f3C_health = value;
    }

}

bool patch::edit_selected_unit() {
    // .text:0048F25E                 mov     esi, [ecx+40h]
    // .text:0048F261                 cmp     dl, 1

    HookHandle::create(api::dk2_base + (0x0048F25E - dk2_virtual_base), 6)->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        auto *creature = (dk2::CCreature *) regs.ecx;
        unitBase::selCreature = creature;
    });

    return true;
}
