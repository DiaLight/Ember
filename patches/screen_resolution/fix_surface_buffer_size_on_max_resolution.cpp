//
// Created by DiaLight on 25.12.2022.
//
#include <dk2_patches.h>
#include <Windows.h>
#include <dk2_info.h>

typedef BOOL (WINAPI *GetClientRect_t)(HWND hWnd, LPRECT lpRect);

BOOL WINAPI reimpl_GetClientRect(HWND hWnd, LPRECT lpRect) {
    BOOL ret = GetClientRect(hWnd, lpRect);
    int width = lpRect->right - lpRect->left;
    int height = lpRect->bottom - lpRect->top;
    if (width != api::g_width || height != api::g_height) {
        printf("FIX: GetClientRect: l=%d, t=%d, r=%d, b=%d => create surf %dx%d but game expect to work with buffers %dx%d\n",
               lpRect->left, lpRect->top, lpRect->right, lpRect->bottom,
               width, height,
               api::g_width, api::g_height
        );
        lpRect->right = lpRect->left + api::g_width;
        lpRect->bottom = lpRect->top + api::g_height;
    }
    return ret;
}

GetClientRect_t pGetClientRect = reimpl_GetClientRect;

bool patch::fix_surface_buffer_size_on_max_resolution() {
    // .text:00556077 mov     ebp, ds:GetClientRect
    GetClientRect_t **ppGetClientRect = (GetClientRect_t **) (api::dk2_base + (0x00556077 + 2 - dk2_virtual_base));
    DWORD oldProtect;
    if (!VirtualProtect(ppGetClientRect, sizeof(uint32_t), PAGE_EXECUTE_READWRITE, &oldProtect)) return false;
    *ppGetClientRect = &pGetClientRect;
    VirtualProtect(ppGetClientRect, sizeof(uint32_t), oldProtect, NULL);
    return true;
}
