//
// Created by DiaLight on 17.12.2022.
//
#include <patches.h>
#include <api/patch.h>
#include <api.h>

typedef void *(__cdecl *mydd_alloc_buf_t)(int width, int height);

mydd_alloc_buf_t mydd_alloc_buf = nullptr;
mydd_alloc_buf_t mydd_alloc_buf2 = nullptr;

void *__cdecl reimpl_mydd_alloc_buf(int width, int height) {
  // width, height is GetClientRect sizes, but buffer should be full size
  // add extra size for window borders
  return mydd_alloc_buf(width + 16, height + 58);
}
void *__cdecl reimpl_mydd_alloc_buf2(int width, int height) {
  return mydd_alloc_buf2(width + 16, height + 58);
}

typedef BOOL (WINAPI *GetClientRect_t)(HWND hWnd, LPRECT lpRect);
BOOL WINAPI reimpl_GetClientRect(HWND hWnd, LPRECT lpRect) {
  BOOL ret = GetClientRect(hWnd, lpRect);
//  BOOL ret = GetWindowRect(hWnd, lpRect);
//  lpRect->right += 50;
//  lpRect->bottom += 50;
  return ret;
}
GetClientRect_t pGetClientRect = reimpl_GetClientRect;

bool patch::patch_draw_buffer_extra_size() {
  mydd_alloc_buf = (mydd_alloc_buf_t) (dk2_base + (0x005A7980 - dk2_virtual_base));
  mydd_alloc_buf2 = (mydd_alloc_buf_t) (dk2_base + (0x005A79C0 - dk2_virtual_base));
  if(!replaceXrefs((uint8_t *) mydd_alloc_buf, reimpl_mydd_alloc_buf)) return false;
  if(!replaceXrefs((uint8_t *) mydd_alloc_buf2, reimpl_mydd_alloc_buf2)) return false;

  // .text:00556077 mov     ebp, ds:GetClientRect
  GetClientRect_t **ppGetClientRect = (GetClientRect_t **) (dk2_base + (0x00556077 + 2 - dk2_virtual_base));
  DWORD oldProtect;
  if(!VirtualProtect(ppGetClientRect, sizeof(uint32_t), PAGE_EXECUTE_READWRITE, &oldProtect)) return false;
  *ppGetClientRect = &pGetClientRect;
  VirtualProtect(ppGetClientRect, sizeof(uint32_t), oldProtect, NULL);
  return true;
}
