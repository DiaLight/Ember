//
// Created by DiaLight on 23.08.2022.
//
#include <api.h>
#include <api/window.h>
#include <dk2/window.h>

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

  bool initWindow() {
    if(!replaceXrefs(funptr<&dk2::CWindowTest::proc>(), proxy_proc)) return false;
    return true;
  }

}
