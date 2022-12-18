//
// Created by DiaLight on 15.12.2022.
//
#include <dk2.h>
#include <patches.h>
#include <stdexcept>
#include <stdex.h>

// 640x480 32
// 720x480 32
// 720x576 32
// 800x600 32
// 1024x768 32
// 1152x864 32
// 1176x664 32
// 1280x720 32
// 1280x768 32
// 1280x800 32
// 1280x960 32
// 1280x1024 32
// 1360x768 32
// 1366x768 32
// 1600x900 32
// 1600x1024 32
// 1600x1200 32
// 1680x1050 32
// 1920x1080 32
// 1920x1200 32
// 1920x1440 32
// 2048x1536 32
// 2560x1440 32
// 2560x1600 32
// 3840x2160 32
// 1440x900 32

bool patch::patch_game_resolution() {
  std::string arg = api::findArgValue("game_resolution");
  if(arg.empty()) return true;
  std::vector<std::string> spl = split(arg, 'x');
  if(spl.size() != 2) return false;
  std::string err;
  int width, height;
  if(!parse_int(spl[0], width, err)) return false;
  if(!parse_int(spl[1], height, err)) return false;

  api::ALL_READY_TO_START.emplace_back([width, height] {
    dk2::MyVideoSettings &settings = dk2::MyResources::getInstance()->f1738_video_settings;
    settings.display_width = width; settings.display_height = height;

//    settings.display_width = 1024; settings.display_height = 768;  // + def
//    settings.display_width = 1366; settings.display_height = 768;  // +
//    settings.display_width = 1280; settings.display_height = 1024;

//    settings.display_width = 1600; settings.display_height = 1200;
//    settings.display_width = 1920; settings.display_height = 1440;
//    settings.display_width = 2560; settings.display_height = 1440;
//    settings.display_width = 2560; settings.display_height = 1600;
//    settings.display_width = 3840; settings.display_height = 2160;
  });

  return true;
}
