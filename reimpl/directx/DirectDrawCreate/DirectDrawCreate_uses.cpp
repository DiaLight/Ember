//
// Created by DiaLight on 17.04.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <utils/patch.h>


namespace {

    dk2::status_t &__cdecl reimpl_createDirectDrawObject(dk2::status_t &status, GUID *lpGUID, LPDIRECTDRAW *lplpDD) {
        if (DirectDrawCreate(lpGUID, lplpDD, NULL) != DD_OK) {
            status = -1;
            return status;
        }
        if (dk2::hBullfrogWindow != NULL) dk2::setHWindow(dk2::hBullfrogWindow);
        status = DD_OK;
        return status;
    }

    int __stdcall reimpl_enumDDModesCallback(LPDDSURFACEDESC surfDesc, dk2::DdModeList *a2) {
        dk2::DdModeListItem *result = (dk2::DdModeListItem *) dk2::__nh_malloc(0x14u, 1);
        if ( !result ) return FALSE;
        result->dwWidth = surfDesc->dwWidth;
        result->dwHeight = surfDesc->dwHeight;
        result->dwRGBBitCount = surfDesc->ddpfPixelFormat.dwRGBBitCount;
        llist_insert(a2, a2->head.last, result);
        return TRUE;
    }

    int reimpl_DdModeList_collect_impl(int aBool, HWND hWnd, GUID *lpGUID) {
        LPDIRECTDRAW lpDD = NULL;
        if ( *dk2::createDirectDrawObject((int *)&lpGUID, lpGUID, &lpDD) < 0 ) {
            return -1;
        }

        DdModeList_constructor(&dk2::DdModeList_instance);
        if (aBool) {
            HWND Window = hWnd;
            if ( !hWnd ) {
                dk2::BullfrogWindow_registerClass();
                HINSTANCE HInstance = dk2::getHInstance();
                Window = CreateWindowExA(
                        0, dk2::bullfrogClassName, "ModeList",
                        0x80000000, 0, 0, 1280, 1024,
                        NULL, NULL, HInstance, NULL
                );
                if (!Window) {
                    return -1;
                }
            }
            if (lpDD->SetCooperativeLevel(Window, DDSCL_ALLOWMODEX | DDSCL_EXCLUSIVE | DDSCL_NOWINDOWCHANGES | DDSCL_FULLSCREEN)) {
                static_assert((DDSCL_ALLOWMODEX | DDSCL_EXCLUSIVE | DDSCL_NOWINDOWCHANGES | DDSCL_FULLSCREEN) == 0x55);
                lpDD->Release();
                return -1;
            }
            lpDD->EnumDisplayModes(0, NULL, &dk2::DdModeList_instance, (LPDDENUMMODESCALLBACK) dk2::enumDDModesCallback);
            lpDD->SetCooperativeLevel(Window, 8);
            if ( !hWnd )
                DestroyWindow(Window);
        } else {
            lpDD->EnumDisplayModes(0, NULL, &dk2::DdModeList_instance, (LPDDENUMMODESCALLBACK) dk2::enumDDModesCallback);
        }
        lpDD->Release();
        return 0;
    }
    int *__cdecl reimpl_DdModeList_collect(int *status, int aBool, HWND hWnd, GUID *lpGUID) {
        *status = reimpl_DdModeList_collect_impl(aBool, hWnd, lpGUID);
        return status;
    }
}

bool reimpl_dk2dd_init();
bool reimpl_dk2dd_uses();

bool reimpl_DirectDrawCreate_uses() {

    write_jump(&dk2::createDirectDrawObject, reimpl_createDirectDrawObject);

    write_jump(&dk2::enumDDModesCallback, reimpl_enumDDModesCallback);
    write_jump(&dk2::DdModeList_collect, reimpl_DdModeList_collect);

    if(!reimpl_dk2dd_init()) return false;
    if(!reimpl_dk2dd_uses()) return false;

    return true;
}

