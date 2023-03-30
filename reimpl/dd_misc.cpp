//
// Created by DiaLight on 24.03.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <utils/patch.h>
#include <dk2/Event0_unk6.h>
#include <reimpl.h>
#include <dk2/Event0_winShown7.h>


namespace {
    LPDIRECTDRAW __cdecl reimpl_dk2dd_get(bool addRef) {
        if (addRef && dk2::dk2dd) dk2::dk2dd->AddRef();
        return dk2::dk2dd;
    }

    int __cdecl reimpl_showMessageBox(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType) {
        int v4; // edi

        if (dk2::dk2dd)
            dk2::dk2dd->FlipToGDISurface();
        if (dk2::hWnd)
            SetWindowPos(dk2::hWnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        v4 = MessageBoxA(hWnd, lpText, lpCaption, uType);
        if (dk2::hWnd)
            SetWindowPos(dk2::hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        return v4;
    }

    bool attachToRoot(dk2::MyGame *game) {
        HRESULT hr;
        dk2::MyDdSurfaceEx *rootSurfEx;
        if (game->isFullscreen) {
            rootSurfEx = game->c_window_test.getSurface();
        } else {
            rootSurfEx = dk2::g_pDdSurface_windowed;
        }
        if (!rootSurfEx) return false;
        LPDIRECTDRAWSURFACE rootDdSurf = dk2::MyDdSurface_addRef(&rootSurfEx->dd_surf, 0);
        if (!rootDdSurf) return false;
        hr = rootDdSurf->AddAttachedSurface(game->ddsurf);
        if (FAILED(hr)) return false;
        return true;
    }
    int __fastcall reimpl_MyGame_createSurface(dk2::MyGame *_this, void *edx, int mipMapCount) {
        HRESULT hr;
        DDSURFACEDESC desc;
        memset(&desc, 0, sizeof(desc));
        desc.dwSize = sizeof(DDSURFACEDESC);
        static_assert(sizeof(DDSURFACEDESC) == 108);
        desc.dwFlags = DDSD_CAPS | DDSD_WIDTH | DDSD_HEIGHT | DDSD_ZBUFFERBITDEPTH;
        static_assert((DDSD_CAPS | DDSD_WIDTH | DDSD_HEIGHT | DDSD_ZBUFFERBITDEPTH) == 71);
        desc.ddsCaps.dwCaps = DDSCAPS_ZBUFFER | DDSCAPS_VIDEOMEMORY;
        static_assert((DDSCAPS_ZBUFFER | DDSCAPS_VIDEOMEMORY) == 0x24000);
        desc.dwWidth = _this->dwWidth;
        desc.dwHeight = _this->dwHeight;
        desc.dwMipMapCount = mipMapCount;
        hr = dk2::dk2dd_get(0)->CreateSurface(&desc, &_this->ddsurf, NULL);
        if (FAILED(hr)) {
            _this->ddsurf = nullptr;
            return false;
        }
        if(!attachToRoot(_this)) {
            _this->ddsurf->Release();
            _this->ddsurf = nullptr;
            return false;
        }
        return true;
    }
}


bool reimpl::dk2dd_misc() {

//    if (!api::replaceXrefs(&dk2::dk2dd_init, reimpl_fun)) return false;
    write_jump(&dk2::showMessageBox, reimpl_showMessageBox);
    write_jump(&dk2::dk2dd_get, reimpl_dk2dd_get);
    write_jump(u8ptr<&dk2::MyGame::createSurface>(), reimpl_MyGame_createSurface);

    return true;
}
