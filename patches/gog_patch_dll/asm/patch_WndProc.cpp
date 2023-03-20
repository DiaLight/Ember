//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_WndProc.h>
#include <gog_globals.h>
#include <gog_debug.h>
#include <hooks/window.h>


void gog::patch_WndProc() {
    hook::BEFORE_BULLFROG_WINDOW_PROC.emplace_back([](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
        switch (Msg) {
            case WM_KILLFOCUS:
                ShowWindow(gog::g_hWnd, SW_MINIMIZE);
                break;
            case WM_ACTIVATEAPP:
                if (wParam) {  // activated
                    gog::g_isRendererPaused = false;
                    gog_debug("Resumed Render");
                } else {  // deactivated
                    gog::g_isRendererPaused = true;
                    gog_debug("Paused Render");
                }
                break;
            case WM_MOUSEMOVE:
                return false;
        }

        if (gog::g_isRendererPaused && (0x100 <= Msg && Msg < 0x300)) return false;  // do not call original fun
        return true;
    });
}
