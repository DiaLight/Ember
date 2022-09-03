//
// Created by DiaLight on 20.08.2022.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>

// handling __thiscall though  __fastcall
// __thiscall: ecx, esp[0], esp[1], esp[2], ...
// __fastcall: ecx, edx, esp[0], esp[1], ...
void __fastcall proxy_prepareScreen(dk2::MyGame *this_, void *edx, int dwWidth, int dwHeight, int dwRGBBitCount, int isWindowed, int a6, int a7) {
  printf("prepareScreen %p %dx%d %d %d %d %d\n", this_, dwWidth, dwHeight, dwRGBBitCount, isWindowed, a6, a7);
  // call __thiscall
  this_->prepareScreen(dwWidth, dwHeight, dwRGBBitCount, true, a6, a7);
}

bool patch::force_windowed_mode() {
  if(!replaceXrefs(funptr<&dk2::MyGame::prepareScreen>(), proxy_prepareScreen)) return false;
  return true;
}

