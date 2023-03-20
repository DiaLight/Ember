//
// Created by DiaLight on 20.08.2022.
//
#include <dk2_patches.h>
#include <dk2/Pos2i.h>
#include <string>
#include <dk2_info.h>
#include <dk2_globals.h>
#include <dk2/MyInputManagerCb.h>
#include <dk2/MyMouseUpdater.h>
#include <hooks/window.h>

#define GET_X_LPARAM(lp)                        ((int)(short)LOWORD(lp))
#define GET_Y_LPARAM(lp)                        ((int)(short)HIWORD(lp))

namespace {
    dk2::Pos2i clientSize;
}

bool patch::fix_mouse_pos_on_resized_window() {
    std::string arg = api::findArgValue("fullscreen");
    if (arg.empty()) return true;
    if (arg != "false" && arg != "true") return false;
    bool isFullscreen = arg == "true";
    if (isFullscreen) return true; // ignore patch in fullscreen
    hook::BEFORE_WINDOW_PROC.emplace_back([](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
        switch (Msg) {
            case WM_CREATE: {
                break;
            }
            case WM_SHOWWINDOW: {
//                RECT cliRect;
//                GetClientRect(hWnd, &cliRect);
//                clientSize = { cliRect.right - cliRect.left, cliRect.bottom - cliRect.top };
//                printf("WM_SHOWWINDOW\n");
                break;
            }
            case WM_MOUSEMOVE: {
                dk2::Pos2i pos = {GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)};
                dk2::AABB renderRect = dk2::MyInputManagerCb_instance.f60_mouse->f30_aabb;
                dk2::Pos2i renderSize = {renderRect.maxX - renderRect.minX, renderRect.maxY - renderRect.minY};
                pos.x = (int32_t) ((float) pos.x * (float) renderSize.x / (float) clientSize.x);
                pos.y = (int32_t) ((float) pos.y * (float) renderSize.y / (float) clientSize.y);
                lParam = (pos.x & 0xFFFF) | ((pos.y & 0xFFFF) << 16);
                break;
            }
            case WM_SIZE: {
                clientSize = {LOWORD(lParam), HIWORD(lParam)};
                break;
            }
        }
        return true;
    });
    return true;
}
