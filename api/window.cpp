//
// Created by DiaLight on 23.08.2022.
//
#include <api.h>
#include <api/window.h>
#include <dk2/window.h>
#include <dk2.h>

namespace api {

  std::vector<std::function<bool(HWND &, UINT &, WPARAM &, LPARAM &)>> BEFORE_WINDOW_PROC;
  std::vector<std::function<void(HWND, UINT, WPARAM, LPARAM, LRESULT &)>> AFTER_WINDOW_PROC;


  LRESULT __stdcall proxy_proc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    bool execute = true;
    for(auto &F : BEFORE_WINDOW_PROC) execute &= F(hWnd, Msg, wParam, lParam);
    switch(Msg) {
      case WM_CREATE: {
        SetForegroundWindow(hWnd);
        break;
      }
    }
    LRESULT lResult = execute ? dk2::CWindowTest::proc(hWnd, Msg, wParam, lParam) : DefWindowProcA(hWnd, Msg, wParam, lParam);
    for(auto &F : AFTER_WINDOW_PROC) F(hWnd, Msg, wParam, lParam, lResult);
    return lResult;
  }

  std::vector <std::function<BOOL(dk2::MyGame *game, int &dwWidth, int &dwHeight, int &dwRGBBitCount, int &isWindowed, int &a6, int &a7)>> BEFORE_PREPARE_SCREEN;
  int g_width = 0;
  int g_height = 0;

// handling __thiscall though  __fastcall
// __thiscall: ecx, esp[0], esp[1], esp[2], ...
// __fastcall: ecx, edx, esp[0], esp[1], ...
  int __fastcall proxy_prepareScreen(dk2::MyGame *this_, void *edx, int dwWidth, int dwHeight, int dwRGBBitCount, int isWindowed, int a6, int a7) {
    g_width = dwWidth;
    g_height = dwHeight;
    printf("prepareScreen %p %dx%d %d %d %d %d\n", this_, dwWidth, dwHeight, dwRGBBitCount, isWindowed, a6, a7);
    for(auto &F : BEFORE_PREPARE_SCREEN) if(!F(this_, dwWidth, dwHeight, dwRGBBitCount, isWindowed, a6, a7)) return FALSE;
    return this_->prepareScreen(dwWidth, dwHeight, dwRGBBitCount, isWindowed, a6, a7);
  }

  bool initWindow() {
    if(!replaceXrefs(funptr<&dk2::CWindowTest::proc>(), proxy_proc)) return false;
    if(!replaceXrefs(funptr<&dk2::MyGame::prepareScreen>(), proxy_prepareScreen)) return false;
    return true;
  }

}
