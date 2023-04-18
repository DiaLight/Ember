//
// Created by DiaLight on 23.08.2022.
//
#include <hooks/window.h>
#include <dk2/CWindowTest.h>
#include <dk2/MyGame.h>
#include <dk2_functions.h>
#include <utils/patch.h>
#include <utils/xrefs.h>
#include <dk2_info.h>

namespace hook {

    std::vector<std::function<bool(HWND &, UINT &, WPARAM &, LPARAM &)>> BEFORE_WINDOW_PROC;
    std::vector<std::function<void(HWND, UINT, WPARAM, LPARAM, LRESULT &)>> AFTER_WINDOW_PROC;

    std::vector<std::function<bool(HWND &, UINT &, WPARAM &, LPARAM &)>> BEFORE_BULLFROG_WINDOW_PROC;
    std::vector<std::function<void(HWND, UINT, WPARAM, LPARAM, LRESULT &)>> AFTER_BULLFROG_WINDOW_PROC;


    // windowed mode  class_name="LibWindow"
    LRESULT __stdcall proxy_CWindow_proc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
//    printf("CWIndow: %08X\n", Msg);
        bool execute = true;
        for (auto &F: BEFORE_WINDOW_PROC) execute &= F(hWnd, Msg, wParam, lParam);
        switch (Msg) {
            case WM_CREATE: {
                SetForegroundWindow(hWnd);
                break;
            }
        }
        LRESULT lResult = execute ? dk2::CWindowTest_proc(hWnd, Msg, wParam, lParam) : DefWindowProcA(hWnd, Msg, wParam,
                                                                                                      lParam);
        for (auto &F: AFTER_WINDOW_PROC) F(hWnd, Msg, wParam, lParam, lResult);
        return lResult;
    }

    // unknown use  class_name="_BullfrogLibScreen"
    LRESULT __stdcall proxy_Bullfrog_proc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
//    printf("Bullfrog: %08X\n", Msg);
        bool execute = true;
        for (auto &F: BEFORE_BULLFROG_WINDOW_PROC) execute &= F(hWnd, Msg, wParam, lParam);
        LRESULT lResult = execute ? dk2::BullfrogWindow_proc(hWnd, Msg, wParam, lParam) : DefWindowProcA(hWnd, Msg,
                                                                                                         wParam,
                                                                                                         lParam);
        for (auto &F: AFTER_BULLFROG_WINDOW_PROC) F(hWnd, Msg, wParam, lParam, lResult);
        return lResult;
    }

    std::vector<std::function<BOOL(dk2::MyGame *game, int &dwWidth, int &dwHeight, int &dwRGBBitCount, int &isWindowed, int &a6, int &a7)>> BEFORE_PREPARE_SCREEN;

// handling __thiscall though  __fastcall
// __thiscall: ecx, esp[0], esp[1], esp[2], ...
// __fastcall: ecx, edx, esp[0], esp[1], ...
    decltype(&dk2::MyGame::prepareScreenEx) orig_MyGame_prepareScreenEx = nullptr;
    int __fastcall proxy_prepareScreen(dk2::MyGame *this_, void *edx, int dwWidth, int dwHeight, int dwRGBBitCount,
                                       int isWindowed, int a6, int a7) {
        api::g_width = dwWidth;
        api::g_height = dwHeight;
        printf("prepareScreen %p %dx%d %d %d %d %d\n", this_, dwWidth, dwHeight, dwRGBBitCount, isWindowed, a6, a7);
        for (auto &F: BEFORE_PREPARE_SCREEN)
            if (!F(this_, dwWidth, dwHeight, dwRGBBitCount, isWindowed, a6, a7))
                return FALSE;
        return (this_->*orig_MyGame_prepareScreenEx)(dwWidth, dwHeight, dwRGBBitCount, isWindowed, a6, a7);
    }


    bool initWindow() {
        if (!api::replaceXrefs(u8ptr<&dk2::BullfrogWindow_proc>(), proxy_Bullfrog_proc)) return false;
        if (!api::replaceXrefs(u8ptr<&dk2::CWindowTest_proc>(), proxy_CWindow_proc)) return false;
        orig_MyGame_prepareScreenEx = api::replaceAllXrefs<&dk2::MyGame::prepareScreenEx>(proxy_prepareScreen);
        return true;
    }

}
