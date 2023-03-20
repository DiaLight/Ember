//
// Created by DiaLight on 15.12.2022.
//
#include <dk2_patches.h>
#include <dk2_globals.h>
#include <stdexcept>
#include <stdex.h>
#include <dk2_info.h>
#include <hooks/main.h>
#include <dk2/MyVideoSettings.h>


bool patch::patch_game_resolution() {
    std::string arg = api::findArgValue("game_resolution");
    if (arg.empty()) return true;
    std::vector<std::string> spl = split(arg, 'x');
    if (spl.size() != 2) return false;
    std::string err;
    int width, height;
    if (!parse_int(spl[0], width, err)) return false;
    if (!parse_int(spl[1], height, err)) return false;

    hook::ALL_READY_TO_START.emplace_back([width, height] {
        dk2::MyVideoSettings &settings = dk2::MyResources_instance.video_settings;
        settings.display_width = width;
        settings.display_height = height;

//        settings.display_width = 1024; settings.display_height = 768;  // + def
//        settings.display_width = 1366; settings.display_height = 768;  // +
//        settings.display_width = 1280; settings.display_height = 1024;
//
//        settings.display_width = 1600; settings.display_height = 1200;
//        settings.display_width = 1920; settings.display_height = 1440;
//        settings.display_width = 2560; settings.display_height = 1440;
//        settings.display_width = 2560; settings.display_height = 1600;
//        settings.display_width = 3840; settings.display_height = 2160;
    });

    return true;
}
