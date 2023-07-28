//
// Created by DiaLight on 27.01.2023.
//
#include <dk2_patches.h>
#include <dk2/entities/CPlayer.h>
#include <dk2/entities/CObject.h>
#include <utils/patch.h>
#include <dk2_info.h>

namespace patch {
    bool edit_player();
}

namespace playerBase {
    dk2::CPlayer *pl1 = nullptr;
    dk2::CPlayer *pl2 = nullptr;
}
namespace squareMoneyAddr {
    dk2::CObject *obj = nullptr;
}

namespace {

    void setPlayerName(wchar_t *name) {
        wcsncpy(playerBase::pl1->playerName, name, 0x20);
    }

    void setMoney(uint32_t money) {
        playerBase::pl1->money = money;
    }

    void setMoneyInSelectedSquare(uint32_t value) {
        squareMoneyAddr::obj->unionData.l40_gold.goldHeld = value;
    }

    void setDungeonHeartHealth(uint32_t value) {
        playerBase::pl2->ownedArea2_dungeonHeartHealth = value;
    }

    void setMana(uint32_t value) {
        playerBase::pl1->mana = value;
    }

    void setMaxMana(uint32_t value) {
        playerBase::pl1->maxMana = value;
    }

    void setManaPerSecond(uint32_t value) {
        playerBase::pl1->basicManaPerSecond = value;
    }

    void setManaPerSecondExtra(uint32_t value) {
        playerBase::pl1->manaPerSecondExtra = value;
    }

    void setManaPerSecondMultiplier(uint32_t value) {
        playerBase::pl1->manaPerSecondMultiplier = value;
    }

}

bool patch::edit_player() {

    // .text:00422E4D                 mov     eax, [ebp+82h]
    HookHandle::create(api::dk2_base + (0x00422E4D - dk2_virtual_base), 6)->addHandler(
            [](HookHandler &handle, Regs &regs, void *target) {
                auto *player = (dk2::CPlayer *) regs.ebp;
                playerBase::pl1 = player;
            });

    // .text:00423058                 mov     eax, [edx+40h]
    // .text:0042305B                 mov     [esp+104h+var_E4], eax
    HookHandle::create(api::dk2_base + (0x00423058 - dk2_virtual_base), 7)->addHandler(
            [](HookHandler &handle, Regs &regs, void *target) {
                auto *player = (dk2::CPlayer *) regs.edx;
                playerBase::pl2 = player;
            });

    // .text:0049C964                 mov     eax, [esi+14Ah]
    HookHandle::create(api::dk2_base + (0x00423058 - dk2_virtual_base), 7)->addHandler(
            [](HookHandler &handle, Regs &regs, void *target) {
                auto *obj = (dk2::CObject *) regs.esi;
                squareMoneyAddr::obj = obj;
            });

    return true;
}

