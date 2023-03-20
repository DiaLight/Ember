//
// Created by DiaLight on 18.03.2023.
//
#include <hooks/main.h>
#include <dk2_functions.h>
#include <dk2_info.h>
#include <dk2_hooks.h>
#include <utils/xrefs.h>
#include <utils/patch.h>

namespace hook {


    std::vector<std::function<int(int &argc, const char **&argv)>> BEFORE_MAIN;
    std::vector<std::function<void(int argc, const char *argv[], int &exitCode)>> AFTER_MAIN;

    HookHandle *allReadyToStart = nullptr;
    std::vector<std::function<void()>> ALL_READY_TO_START;

}

int __cdecl proxy_main(int argc, const char *argv[]) {
    int exitCode = -1;
    argc = api::DK2_ARGS.size();
    std::vector<const char *> args;
    args.reserve(api::DK2_ARGS.size());
    for(auto &arg : api::DK2_ARGS) args.push_back((char *) arg.c_str());
    args.push_back(NULL);
    argv = &*args.begin();

    for(auto &F : hook::BEFORE_MAIN) {
        exitCode = F(argc, argv);
        if(exitCode != 0) return exitCode;
    }
    exitCode = dk2::dk2_main(argc, argv);
    for(auto &F : hook::AFTER_MAIN) {
        F(argc, argv, exitCode);
    }
    return exitCode;
}

bool hook::main() {
    if(!api::replaceXrefs(&dk2::dk2_main, proxy_main)) return false;

    // .text:005A631C  mov esi, offset CGameComponent_instance
    allReadyToStart = HookHandle::create(api::dk2_base + (0x005A631C - dk2_virtual_base), 5);
    allReadyToStart->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        for(auto &cb : hook::ALL_READY_TO_START) {
            cb();
        }
    });
    return true;
}
