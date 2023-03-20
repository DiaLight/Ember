//
// Created by DiaLight on 20.08.2022.
//
#include <dk2_patches.h>
#include <dk2_globals.h>
#include <cstdio>
#include <dk2/MyMouse.h>
#include <dk2/MouseXyzDxAction.h>
#include <string>
#include <dk2_info.h>
#include <utils/patch.h>
#include <utils/xrefs.h>

// https://docs.microsoft.com/ru-ru/windows/win32/inputdev/using-raw-input?redirectedfrom=MSDN
// https://docs.microsoft.com/ru-ru/windows/win32/dxtecharts/taking-advantage-of-high-dpi-mouse-movement

namespace dk2 {
    struct Pos2f {
        float x;
        float y;
    };
}

dk2::Pos2f lastMousePos = {0, 0};
bool lastMousePos_first = true;

void __fastcall proxy_fun3_xyzAction(dk2::MyMouse *this_, void *edx, dk2::MouseXyzDxAction &action) {
    return;  // THE actual good fix. ignore direct input
    // here i am trying to fix direct input v5
    // good fix is upgrade direct input 5 to direct input 8
    if (lastMousePos_first) {
        lastMousePos_first = false;
        lastMousePos.x = this_->f1C_flX;
        lastMousePos.y = this_->f20_flY;
    } else {
        HWND hWnd = dk2::MyGame_instance.c_window_test.hWnd;

        dk2::AABB renderRect = this_->f30_aabb;
        dk2::Pos2i renderSize = {renderRect.maxX - renderRect.minX, renderRect.maxY - renderRect.minY};

        MONITORINFO mi;
        mi.cbSize = sizeof(mi);
        ::GetMonitorInfo(::MonitorFromWindow(hWnd, MONITOR_DEFAULTTONEAREST), &mi);
        dk2::Pos2i workBox = {mi.rcWork.right - mi.rcWork.left, mi.rcWork.bottom - mi.rcWork.top};

        RECT clientRect;
        GetClientRect(hWnd, &clientRect);
        dk2::Pos2i clientSize = {clientRect.right - clientRect.left, clientRect.bottom - clientRect.top};

        RECT winToCli = {0, 0, 0, 0};
        AdjustWindowRect(&winToCli, WS_OVERLAPPED, FALSE);
        RECT windowRect;
        GetWindowRect(hWnd, &windowRect);
        dk2::Pos2i cliPos = {windowRect.left + winToCli.left, windowRect.top + winToCli.top};

        dk2::AABB clientBox = {};
        clientBox.minX = cliPos.x;
        clientBox.maxX = cliPos.x + clientSize.x;
        clientBox.minY = cliPos.y;
        clientBox.maxY = cliPos.y + clientSize.y;
        printf("clientRect: %d-%d %d-%d\n", clientBox.minX, clientBox.maxX, clientBox.minY, clientBox.maxY);

        if (action.actedAxe == DIMOFS_X) {  // x axe
            float absX = (float) action.value / (float) renderSize.x * (float) workBox.x;
            if (absX < clientBox.minX || clientBox.maxX <= absX) return;
            float dAbsX = absX - lastMousePos.x;
            printf("x: %d %.1f %.1f\n", action.value, absX, dAbsX);
            action.value = (int) dAbsX;
            lastMousePos.x = absX;
        } else if (action.actedAxe == DIMOFS_Y) {  // y axe
            float absY = (float) action.value / (float) renderSize.y * (float) workBox.y;
            if (absY < clientBox.minY || clientBox.maxY <= absY) return;
            float dAbsY = absY - lastMousePos.y;
            printf("y: %d %.1f %.1f\n", action.value, absY, dAbsY);
            action.value = (int) dAbsY;
            lastMousePos.y = absY;
        }
    }
//    printf("x:%d-%d y:%d-%d\n", this_->f30_aabb.minX, this_->f30_aabb.maxX, this_->f30_aabb.minY, this_->f30_aabb.maxY);
    this_->fun3_xyzAction(&action);
}

bool patch::fix_relative_mouse_data() {
    std::string arg = api::findArgValue("fullscreen");
    if (arg.empty()) return true;
    if (arg != "false" && arg != "true") return false;
    bool isFullscreen = arg == "true";
    if (isFullscreen) return true; // ignore patch in fullscreen

    if (!api::replaceXrefs(u8ptr<&dk2::MyMouse::fun3_xyzAction>(), proxy_fun3_xyzAction)) return false;
    return true;
}
