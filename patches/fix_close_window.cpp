//
// Created by DiaLight on 20.08.2022.
//
#include <dk2.h>
#include <api.h>
#include <patches.h>

bool patch::fix_close_window() {
  api::BEFORE_WINDOW_PROC.emplace_back([](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
    switch(Msg) {
      case WM_CLOSE: {
        dk2::globals::setAppExitStatus(true);
        break;
      }
    }
    return true;
  });
  return true;
}
