//
// Created by DiaLight on 29.01.2023.
//
#include <dk2_patches.h>
#include <thread>
#include <dk2/CDefaultPlayerInterface.h>

namespace patch {
    bool cheatcode_spawner();
}

namespace sup_marco_ct {
    bool spawncheat = false;

    // 0:show me the money (Get Money)
    // 1:now the rain has gone (Show the Map)
    // 2:feel the power (All Units Level 10)
    // 3:this is my church (Enable All Rooms)
    // 4:fit the best (Enable All Traps and Rooms)
    // 5:i believe its magic (Get All Spells)
    // 6:do not fear the reaper (Win Level)
    // 7:ha ha thisaway ha ha thataway (100K Mana)
    uint32_t cheatselector = 0;
}

typedef BOOL (__thiscall *CDefaultPlayerInterface_applyCheatCode_t)(dk2::CDefaultPlayerInterface *this_, BOOL a2);

CDefaultPlayerInterface_applyCheatCode_t CDefaultPlayerInterface_applyCheatCode = nullptr;
dk2::CDefaultPlayerInterface *pCDefaultPlayerInterface = nullptr;


bool patch::cheatcode_spawner() {
    // .text:0040A760 CDefaultPlayerInterface_applyCheatCode
    // .data:006CEA10 ?instance@CDefaultPlayerInterface@dk2@@0V12@A

    std::thread thr([] {
        while (true) {
            if (sup_marco_ct::spawncheat) {
                CDefaultPlayerInterface_applyCheatCode(pCDefaultPlayerInterface, sup_marco_ct::cheatselector);
            }
            SleepEx(100, FALSE);
        }
    });
    thr.detach();

    return true;
}

