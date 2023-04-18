//
// Created by DiaLight on 17.04.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <utils/patch.h>
#include <reimpl.h>

namespace {


    void __cdecl reimpl_setSurfaceDD(LPDIRECTDRAW dd) {
        dk2_lpSurfaceDD = dd;
    }

    DWORD *__cdecl reimpl_MyDdSurface_createOffScreenSurface(
            DWORD *status,
            int dwWidth,
            int dwHeight,
            int dxCaps,
            dk2::MyDdSurface *surf) {
        DDSURFACEDESC surface_desc;
        // #define DDSCAPS_OFFSCREENPLAIN 0x00000040l
        surface_desc.ddsCaps.dwCaps = dxCaps | 0x40;
        surface_desc.dwSize = 108;
        // #define DDSD_CAPS 0x00000001l
        // #define DDSD_HEIGHT 0x00000002l
        // #define DDSD_WIDTH 0x00000004l
        surface_desc.dwFlags = 7;
        surface_desc.dwHeight = dwHeight;
        surface_desc.dwWidth = dwWidth;
        if (dk2_lpSurfaceDD->CreateSurface(&surface_desc, &surf->dd_surface, nullptr)) {
            *status = -1;
            return status;
        }
        memset(&surface_desc, 0, sizeof(surface_desc));
        surface_desc.dwSize = 108;
        // #define DDSD_PIXELFORMAT 0x00001000l
        // #define DDSD_PITCH 0x00000008l
        surface_desc.dwFlags = 0x1009;
        surf->dd_surface->GetSurfaceDesc(&surface_desc);
        MyDdSurface_constructor(surf, dwWidth, dwHeight, surface_desc.ddpfPixelFormat.dwRGBBitCount, 0);
        *status = 0;
        return status;
    }

}

bool reimpl_lpSurfaceDD_uses() {

    write_jump(&dk2::setSurfaceDD, reimpl_setSurfaceDD);
    write_jump(&dk2::MyDdSurface_createOffScreenSurface, reimpl_MyDdSurface_createOffScreenSurface);

    return true;
}
