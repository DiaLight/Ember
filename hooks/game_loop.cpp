//
// Created by DiaLight on 01.09.2022.
//
#include <hooks/game_loop.h>
#include <utils/patch.h>
#include <dk2_info.h>

HookHandle *gameLoop_before = nullptr;
HookHandle *gameLoop_tick = nullptr;
HookHandle *gameLoop_after = nullptr;

std::vector<std::function<void()>> hook::BEFORE_GAME_LOOP;
std::vector<std::function<void()>> hook::TICK_GAME_LOOP;
std::vector<std::function<void()>> hook::AFTER_GAME_LOOP;

#define DK2_fps_limit 60
DWORD lastTime = 0;

bool hook::initGameLoop() {
    // .text:00525839  add esp, 8
    // .text:0052583C  cmp eax, ebx
    gameLoop_before = HookHandle::create(api::dk2_base + (0x00525839 - dk2_virtual_base), 5);
    gameLoop_before->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        for (auto &cb: hook::BEFORE_GAME_LOOP) {
            cb();
        }
    });
//  // .text:00525849  call MyGame_sub_559670
//  typedef int (__thiscall *MyGame_sub_559670_t)(void *_this);
//  gameLoop_tick = HookHandle::replaceCall(api::dk2_base + (0x00525849 - dk2_virtual_base));
//  gameLoop_tick->addHandler([](HookHandler &handle, Regs &regs, void *target) {
//    for(auto &cb : TICK_GAME_LOOP) {
//      cb();
//    }
//    auto *orig_call = (MyGame_sub_559670_t) target;
//    regs.eax = orig_call((void *) regs.ecx);
//  });
    // .text:00525844  mov ecx, offset ?instance@MyGame@dk2@@0V12@A ; dk2::MyGame dk2::MyGame::instance
    gameLoop_tick = HookHandle::create(api::dk2_base + (0x00525844 - dk2_virtual_base), 5);
    gameLoop_tick->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        for (auto &cb: hook::TICK_GAME_LOOP) {
            cb();
        }
        DWORD time = GetTickCount();
        int mspf = 1000 / DK2_fps_limit;
        int freeTime = mspf - (time - lastTime);
        if (freeTime > 0) {
            SleepEx(freeTime, FALSE);
        }

        lastTime = time;
    });
    // .text:00525A2D  cmp MyResources_instance.field_2B6B, ebx
    gameLoop_after = HookHandle::create(api::dk2_base + (0x00525A2D - dk2_virtual_base), 6);
    gameLoop_after->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        for (auto &cb: hook::AFTER_GAME_LOOP) {
            cb();
        }
    });
    return true;
}
