//
// Created by DiaLight on 17.04.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <utils/patch.h>
#include <dk2/Event0_unk6.h>
#include <reimpl.h>
#include <dk2/Event0_winShown7.h>
#include <dk2/Obj6723B8.h>

namespace {

    LPDIRECTDRAW __cdecl reimpl_dk2dd_get(bool addRef) {
        if (addRef && dk2_dk2dd) dk2_dk2dd->AddRef();
        return dk2_dk2dd;
    }

    int __cdecl reimpl_showMessageBox(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType) {
        int v4; // edi

        if (dk2_dk2dd)
            dk2_dk2dd->FlipToGDISurface();
        if (dk2::hWnd)
            SetWindowPos(dk2::hWnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        v4 = MessageBoxA(hWnd, lpText, lpCaption, uType);
        if (dk2::hWnd)
            SetWindowPos(dk2::hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        return v4;
    }

    void __stdcall reimpl_dk2dd_destroy() {
        if (dk2_dk2dd) {
            dk2_dk2dd->RestoreDisplayMode();
            dk2_dk2dd->Release();
            dk2_dk2dd = nullptr;
            dk2::setSurfaceDD(nullptr);
        }
    }

    void *__stdcall reimpl_dk2wndCleanup_sendEv0_5() {
        dk2::FPUControlWordWithState_instance.initialized = 0;
        dk2::FPUControlWordWithState_instance.ctl.reset();
        void *result = dk2::g_primarySurf.dd_surf.dd_surface;
        dk2::g_isNeedBlt = 0;
        dk2::g_ignore_79D3E0 = 0;
        if ( !dk2::g_primarySurf.dd_surf.dd_surface )
            return result;
        {
            dk2::Event0_winShown7 v1;
            v1.eventType = 5;
            v1.width = 0;
            dk2::WinEventHandlers_instance.callList(0, (int)&v1);
        }
        if ( dk2_dk2dd )
            dk2_dk2dd->SetCooperativeLevel(dk2::hWnd, 8);// DDSCL_NORMAL
        if (dk2::g_offScreen.dd_surf.dd_surface) {
            dk2::g_offScreen.dd_surf.dd_surface->Release();
            dk2::g_offScreen.dd_surf.dd_surface = nullptr;
        }
        if (dk2::g_dd_primaryAttachedSurf) {
            dk2::g_dd_primaryAttachedSurf->Release();
            dk2::g_dd_primaryAttachedSurf = nullptr;
        }
        if (dk2::g_primarySurf.dd_surf.dd_surface) {
            dk2::g_primarySurf.dd_surf.dd_surface->Release();
            dk2::g_primarySurf.dd_surf.dd_surface = nullptr;
        }
        result = dk2::lpDDClipper;
        dk2::lpDDPalette = nullptr;
        if ( !dk2::lpDDClipper )
            return result;
        result = (void *)dk2::lpDDClipper->Release();
        dk2::lpDDClipper = nullptr;
        return result;
    }

}

bool reimpl_lpSurfaceDD_uses();
bool reimpl_dk2dd_get_uses();

bool reimpl_dk2dd_uses() {

    write_jump(&dk2::showMessageBox, reimpl_showMessageBox);
    write_jump(&dk2::dk2dd_get, reimpl_dk2dd_get);
    write_jump(&dk2::dk2dd_destroy, reimpl_dk2dd_destroy);
    write_jump(&dk2::dk2wndCleanup_sendEv0_5, reimpl_dk2wndCleanup_sendEv0_5);

    if(!reimpl_lpSurfaceDD_uses()) return false;
    if(!reimpl_dk2dd_get_uses()) return false;

    return true;
}