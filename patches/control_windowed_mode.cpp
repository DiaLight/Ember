//
// Created by DiaLight on 20.08.2022.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>

namespace {
  bool isFullscreen;
}
// handling __thiscall though  __fastcall
// __thiscall: ecx, esp[0], esp[1], esp[2], ...
// __fastcall: ecx, edx, esp[0], esp[1], ...
int __fastcall proxy_prepareScreen(dk2::MyGame *this_, void *edx, int dwWidth, int dwHeight, int dwRGBBitCount, int isWindowed, int a6, int a7) {
  printf("prepareScreen %p %dx%d %d %d %d %d\n", this_, dwWidth, dwHeight, dwRGBBitCount, isWindowed, a6, a7);
  // call __thiscall
  return this_->prepareScreen(dwWidth, dwHeight, dwRGBBitCount, !isFullscreen, a6, a7);
}

bool patch::control_windowed_mode() {
  std::string arg = api::findArgValue("fullscreen");
  if(arg.empty()) return true;
  if(arg != "false" && arg != "true") return false;
  isFullscreen = arg == "true";
  printf("use fullscreen: %s\n", arg.c_str());
  if(!replaceXrefs(funptr<&dk2::MyGame::prepareScreen>(), proxy_prepareScreen)) return false;
  return true;
}

