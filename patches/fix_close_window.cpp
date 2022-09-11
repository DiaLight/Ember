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
        dk2::CDefaultPlayerInterface *playetIf = dk2::CDefaultPlayerInterface::getInstance();
        if(playetIf->f4_profiler != nullptr) {  // game is running
          dk2::GameAction action;
          ZeroMemory(&action, sizeof(action));
          action.fC_actionKind = dk2::GA_ExitToWindows;
          action.f10__cpyFrF8 = playetIf->f8__cpyToF10;
          playetIf->pushAction(action);
        } else {
          dk2::globals::setAppExitStatus(true);
        }
        break;
      }
    }
    return true;
  });
  return true;
}
