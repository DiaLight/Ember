//
// Created by DiaLight on 20.08.2022.
//
#include <dk2_patches.h>
#include <dk2_globals.h>
#include <dk2_functions.h>
#include <Windows.h>
#include <dk2/CDefaultPlayerInterface.h>
#include <hooks/window.h>

bool patch::fix_close_window() {
    hook::BEFORE_WINDOW_PROC.emplace_back([](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
        switch (Msg) {
            case WM_CLOSE: {
                dk2::CDefaultPlayerInterface *playetIf = &dk2::CDefaultPlayerInterface_instance;
                if (playetIf->profiler != nullptr) {  // game is running
                    dk2::GameAction action;
                    ZeroMemory(&action, sizeof(action));
                    action.actionKind = dk2::GA_ExitToWindows;
                    action._cpyFrF8 = playetIf->_cpyToF10;
                    playetIf->pushAction(&action);
                } else {
                    dk2::setAppExitStatus(true);
                }
                break;
            }
        }
        return true;
    });
    return true;
}
