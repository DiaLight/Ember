//
// Created by DiaLight on 20.08.2022.
//
#include <dk2_patches.h>
#include <cstdio>
#include <dk2_info.h>
#include <dk2/MyGame.h>
#include <hooks/window.h>

bool patch::control_windowed_mode() {
    std::string arg = api::findArgValue("fullscreen");
    if (arg.empty()) return true;
    if (arg != "false" && arg != "true") return false;
    bool isFullscreen = arg == "true";
    printf("use fullscreen: %s\n", arg.c_str());
    hook::BEFORE_PREPARE_SCREEN.push_back([isFullscreen](dk2::MyGame *game, int &dwWidth, int &dwHeight, int &dwRGBBitCount, int &isWindowed, int &a6, int &a7) {
        isWindowed = !isFullscreen;
        return TRUE;
    });
    return true;
}

