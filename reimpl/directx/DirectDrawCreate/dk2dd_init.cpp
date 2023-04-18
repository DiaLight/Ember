//
// Created by DiaLight on 21.03.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <utils/patch.h>
#include <utils/stacktrace.h>
#include <dk2/Event0_unk6.h>
#include <reimpl.h>
#include <dk2/Event0_winShown7.h>
#include <sstream>

IDirectDraw *reimpl::dk2dd = nullptr;
IDirectDraw *reimpl::lpSurfaceDD = nullptr;

namespace {

#define DK2IF_SCREEN_SWAP       0x01
#define DK2IF_USE_BACKBUFFER    0x02
#define DK2IF_UNK4              0x04
#define DK2IF_3DSURF            0x08
#define DK2IF_WINDOWED          0x10
#define DK2IF_USE_VIDEOMEM      0x20
#define DK2IF_SETUP_FPU         0x40
#define DK2IF_DOUBLE_BACKBUF    0x80

    dk2::status_t initDirectDraw(DWORD displayBitness, int initFlags) {
        HRESULT hr;
        if (!dk2_dk2dd) {
            int tmp;
            hr = *dk2::createDirectDrawObject(&tmp, dk2::selectedDDGuid, &dk2_dk2dd);
            if (FAILED(hr)) {
                dk2::dk2dd_destroy();
                dk2::showTodoMessageBox("Failed to create Direct Draw object");
                return hr;
            }
        }
        if ( (initFlags & DK2IF_WINDOWED) != 0 ) {
            DDSURFACEDESC dispMode;
            memset(&dispMode, 0, sizeof(dispMode));
            dispMode.dwSize = sizeof(DDSURFACEDESC);
            static_assert(sizeof(DDSURFACEDESC) == 108);
            hr = dk2_dk2dd->GetDisplayMode(&dispMode);
            if (FAILED(hr)) return hr;
            if ( dispMode.ddpfPixelFormat.dwRGBBitCount != displayBitness ) {
                return -1;
            }
        }
        dk2::setSurfaceDD(dk2_dk2dd);
        return S_OK;
    }
    dk2::status_t dd_proc(
            int width,
            DWORD height, DWORD displayBitness, int initFlags, tagPALETTEENTRY *palleteEntries) {
        HRESULT hr;
        DWORD coopLvl;
        if ( (initFlags & DK2IF_WINDOWED) != 0 ) {
            coopLvl = DDSCL_NORMAL;
        } else {
            coopLvl = DDSCL_FULLSCREEN | DDSCL_EXCLUSIVE | DDSCL_ALLOWMODEX;
        }
        if ( (initFlags & DK2IF_SETUP_FPU) != 0 ) {
            coopLvl |= DDSCL_FPUSETUP;
        }
        hr = dk2_dk2dd->SetCooperativeLevel(dk2::hWnd, coopLvl);
        if (FAILED(hr)) return hr;
        if ( (initFlags & DK2IF_WINDOWED) != 0 ) {
            hr = dk2_dk2dd->CreateClipper(0, &dk2::lpDDClipper, nullptr);
            if (FAILED(hr)) return hr;
            hr = dk2::lpDDClipper->SetHWnd(0, dk2::hWnd);
            if (FAILED(hr)) return hr;
        } else {
            hr = dk2_dk2dd->SetDisplayMode(width, height, displayBitness);
            if (FAILED(hr)) return hr;
        }
        tagPALETTEENTRY *entries = palleteEntries;
        if ( palleteEntries ) {
            static_assert(sizeof(PALETTEENTRY) == 0x4);
            memcpy(&dk2::palleteEntries, palleteEntries, 256 * sizeof(PALETTEENTRY));
        } else {
            PALETTEENTRY *p_peGreen = dk2::palleteEntries;
            for (int i = 0; i < 256; ++i) {
                p_peGreen->peRed = i;
                p_peGreen->peGreen = 0;
                p_peGreen->peBlue = i;
                p_peGreen++;
            }
        }
        if ( displayBitness == 8 ) {
            if ( !palleteEntries )
                entries = dk2::palleteEntries;
            hr = dk2_dk2dd->CreatePalette(DDPCAPS_ALLOW256 | DDPCAPS_8BIT, entries, &dk2::lpDDPalette, nullptr);
            static_assert((DDPCAPS_ALLOW256 | DDPCAPS_8BIT) == 68);
            if (FAILED(hr)) return hr;
        } else {
            if ( dk2::lpDDPalette )
                dk2::lpDDPalette->Release();
            dk2::lpDDPalette = nullptr;
        }
        return S_OK;
    }

    dk2::status_t createPrimarySurf(int initFlags) {
        HRESULT hr;
        DDSURFACEDESC surfaceDesc;
        memset(&surfaceDesc, 0, sizeof(surfaceDesc));
        surfaceDesc.dwSize = sizeof(DDSURFACEDESC);
        surfaceDesc.dwFlags = DDSD_CAPS;
        surfaceDesc.ddsCaps.dwCaps = DDSCAPS_PRIMARYSURFACE;
        if ( (initFlags & DK2IF_USE_BACKBUFFER) != 0 ) {
            surfaceDesc.dwFlags = DDSD_BACKBUFFERCOUNT | DDSD_CAPS;
            surfaceDesc.ddsCaps.dwCaps = DDSCAPS_PRIMARYSURFACE | DDSCAPS_FLIP | DDSCAPS_COMPLEX;
            surfaceDesc.dwBackBufferCount = 1;
            if((initFlags & DK2IF_DOUBLE_BACKBUF) != 0) {
                surfaceDesc.dwBackBufferCount = 2;
            }
        }
        if ( (initFlags & DK2IF_3DSURF) != 0 ) {
            surfaceDesc.ddsCaps.dwCaps |= DDSCAPS_3DDEVICE;  // can query d3device from surface
        }
        hr = dk2_dk2dd->CreateSurface(&surfaceDesc, &dk2::g_primarySurf.dd_surf.dd_surface, nullptr);
        if (FAILED(hr)) {
            dk2_dk2dd->SetCooperativeLevel(dk2::hWnd, DDSCL_NORMAL);
            if (hr == DDERR_PRIMARYSURFACEALREADYEXISTS) {
                printf("[error]: PRIMARYSURFACEALREADYEXISTS\n");  // additional line
            }
            return hr;
        }
        hr = dk2::g_primarySurf.dd_surf.dd_surface->GetSurfaceDesc(&surfaceDesc);
        if (FAILED(hr)) {
            dk2::g_primarySurf.dd_surf.dd_surface->Release();
            return hr;
        }
        dk2::isSurfModeX = (surfaceDesc.ddsCaps.dwCaps & DDSCAPS_MODEX) != 0;
        return S_OK;
    }
    dk2::status_t createPrimarySurf2() {
        HRESULT hr;
        DDSURFACEDESC surfaceDesc;
        memset(&surfaceDesc, 0, sizeof(surfaceDesc));
        surfaceDesc.dwSize = sizeof(DDSURFACEDESC);
        surfaceDesc.dwFlags = DDSD_BACKBUFFERCOUNT | DDSD_CAPS;
        surfaceDesc.ddsCaps.dwCaps = DDSCAPS_PRIMARYSURFACE | DDSCAPS_FLIP | DDSCAPS_COMPLEX;
        surfaceDesc.dwBackBufferCount = 1;
        hr = dk2_dk2dd->CreateSurface(&surfaceDesc, &dk2::g_primarySurf.dd_surf.dd_surface, nullptr);
        if (FAILED(hr)) {

            return hr;
        }
        return S_OK;
    }

    dk2::status_t reimpl_subfun(
            int width,
            DWORD height,
            DWORD displayBitness,
            int initFlags,
            tagPALETTEENTRY *palleteEntries) {
        HRESULT hr;
        if (dk2::FPUControlWordWithState_instance.initialized) {
            dk2::FPUControlWordWithState_instance.ctl.apply();
        }
        if ( (initFlags & DK2IF_UNK4) != 0 ) {
            initFlags |= DK2IF_USE_BACKBUFFER;
        }
        if ( (initFlags & DK2IF_WINDOWED) != 0 ) {
            if ( (initFlags & DK2IF_USE_BACKBUFFER) != 0 ) {
                return -1;
            }
            initFlags |= DK2IF_SCREEN_SWAP;
        }
        {
            dk2::Event0_unk6 ev06;
            ev06.eventType = 6;
            ev06.f4 = 0;
            dk2::WinEventHandlers_instance.callList(0, (int)&ev06);
        }
        dk2::dk2wndCleanup_sendEv0_5();
        hr = initDirectDraw(displayBitness, initFlags);
        if(FAILED(hr)) return hr;
        HWND HWindow = dk2::hBullfrogWindow;
        if ( !dk2::hBullfrogWindow ) {
            HWindow = dk2::getHWindow();
        }
        dk2::hWnd = HWindow;
        ShowWindow(HWindow, 5);
        MSG msg;
        if ( dk2::hWnd && PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE) ) {
            do {
                DefWindowProcA(msg.hwnd, msg.message, msg.wParam, msg.lParam);
            } while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE) );
        }
        Sleep(0);
        dk2::g_isNeedBlt = 1;
        dk2::g_ignore_79D3E0 = 1;

        if ( (initFlags & DK2IF_SETUP_FPU) != 0 ) {
            dk2::FPUControlWordWithState_instance.initialized = 1;
            dk2::FPUControlWordWithState_instance.ctl.change(0x3F, 1);  // extended precision and all mask
        }

        hr = dd_proc(width, height, displayBitness, initFlags, palleteEntries);
        if (FAILED(hr)) {
            dk2::dk2dd_destroy();
            return hr;
        }

        hr = createPrimarySurf(initFlags);
        if (FAILED(hr)) {
            dk2::g_primarySurf.dd_surf.dd_surface = nullptr;
            dk2::dk2dd_destroy();
            return hr;
        }
        if ( dk2::isSurfModeX && (initFlags & DK2IF_SCREEN_SWAP) != 0 ) {
            dk2::g_primarySurf.dd_surf.dd_surface->Release();
            dk2::g_primarySurf.dd_surf.dd_surface = nullptr;
            hr = createPrimarySurf2();
            if (FAILED(hr)) {
                dk2::g_primarySurf.dd_surf.dd_surface = nullptr;
                dk2::dk2dd_destroy();
                return hr;
            }
            DDSCAPS caps;
            caps.dwCaps = DDSCAPS_BACKBUFFER;
            hr = dk2::g_primarySurf.dd_surf.dd_surface->GetAttachedSurface(
                    &caps, &dk2::g_dd_primaryAttachedSurf);
            if (FAILED(hr)) {
                // why no destroy? devs failure?
                return hr;
            }
        }
        // create secondary buf
        if ( (initFlags & DK2IF_USE_BACKBUFFER) != 0 ) {
            DDSCAPS caps;
            caps.dwCaps = DDSCAPS_BACKBUFFER;
            hr = dk2::g_primarySurf.dd_surf.dd_surface->GetAttachedSurface(
                    &caps, &dk2::g_offScreen.dd_surf.dd_surface);
            if (FAILED(hr)) {
                // why no destroy? devs failure?
                return hr;
            }
        } else {
            DDSURFACEDESC surfaceDesc;
            memset(&surfaceDesc, 0, sizeof(surfaceDesc));
            surfaceDesc.dwSize = sizeof(DDSURFACEDESC);
            surfaceDesc.dwFlags = DDSD_CAPS | DDSD_HEIGHT | DDSD_WIDTH;
            surfaceDesc.dwHeight = height;
            surfaceDesc.dwWidth = width;
            if((initFlags & DK2IF_USE_VIDEOMEM) != 0) {
                surfaceDesc.ddsCaps.dwCaps = DDSCAPS_VIDEOMEMORY | DDSCAPS_OFFSCREENPLAIN;
            } else {
                surfaceDesc.ddsCaps.dwCaps = DDSCAPS_SYSTEMMEMORY | DDSCAPS_OFFSCREENPLAIN;
            }
            if ((initFlags & DK2IF_3DSURF) != 0) {
                surfaceDesc.ddsCaps.dwCaps |= DDSCAPS_3DDEVICE;
            }
            hr = dk2_dk2dd->CreateSurface(&surfaceDesc, &dk2::g_offScreen.dd_surf.dd_surface, nullptr);
        }
        if ( !dk2::g_offScreen.dd_surf.dd_surface ) {
            dk2::g_primarySurf.dd_surf.dd_surface->Release();
            dk2::g_primarySurf.dd_surf.dd_surface = nullptr;
            if ( displayBitness == 8 ) {
                dk2::lpDDPalette->Release();
                dk2::lpDDPalette = nullptr;
            }
            dk2::dk2dd_destroy();
            return hr;
        }
        if ((initFlags & DK2IF_WINDOWED) != 0) {
            dk2::g_primarySurf.dd_surf.dd_surface->SetClipper(dk2::lpDDClipper);
            if ( displayBitness == 8 ) {
                HDC hdc2;
                if ( dk2::g_primarySurf.dd_surf.dd_surface->GetDC(&hdc2) >= 0 ) {
                    GetSystemPaletteEntries(hdc2, 0, 256, dk2::palleteEntries);
                    dk2::g_primarySurf.dd_surf.dd_surface->ReleaseDC(hdc2);
                }
            }
        }
        if (displayBitness == 8) {
            dk2::g_primarySurf.dd_surf.dd_surface->SetPalette(dk2::lpDDPalette);
        }
        MyDdSurface_constructor(&dk2::g_primarySurf.dd_surf, width, height, displayBitness, initFlags);
        MyDdSurface_constructor(&dk2::g_offScreen.dd_surf, width, height, displayBitness, initFlags);
        dk2::g_pCurOffScreen = &dk2::g_offScreen;
        // send window shown event
        dk2::Event0_winShown7 ev;
        ev.eventType = 7;
        ev.width = width;
        ev.height = height;
        ev.display_bitnes = displayBitness;
        ev.isdevAcquireAnyTime = 0;
        dk2::WinEventHandlers_instance.callList(0, (int) &ev);
        return S_OK;
    }

    dk2::status_t &__cdecl reimpl_fun(
            dk2::status_t &status,
            int width,
            DWORD height,
            DWORD displayBitness,
            int initFlags,
            tagPALETTEENTRY *palleteEntries) {
        status = reimpl_subfun(width, height, displayBitness, initFlags, palleteEntries);
//        std::wstringstream wss;
//        if(api::traceCurrentStack(wss)) {
//            printf("%S\n", wss.str().c_str());
//        }
        return status;
    }
}

bool reimpl_dk2dd_init() {

    write_jump(&dk2::dk2dd_init, reimpl_fun);

    // produces objects:
    // dk2dd - ok
    // lpSurfaceDD - ok
    // lpDDClipper
    // palleteEntries - ?
    // lpDDPalette
    // g_primarySurf
    // g_dd_primaryAttachedSurf
    // g_offScreen

    return true;
}
