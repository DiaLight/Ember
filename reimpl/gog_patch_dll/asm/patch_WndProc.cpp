//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_WndProc.h>
#include <api.h>
#include <gog_globals.h>
#include <gog_debug.h>
#include <api/window.h>


WNDPROC orig_handleWinMsg = nullptr;
LRESULT __stdcall asm_handleWinMsg(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
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
      return DefWindowProcA(hWnd, WM_MOUSEMOVE, wParam, lParam);
  }

  if (gog::g_isRendererPaused && (0x100 <= Msg && Msg < 0x300)) return DefWindowProcA(hWnd, Msg, wParam, lParam);
  return orig_handleWinMsg(hWnd, Msg, wParam, lParam);
}

void gog::patch_WndProc() {
  //  VirtualProtect((LPVOID)0x5B4FF4, 4u, 0x40u, &fdwReason);
  //  MEMORY[0x5B4FF4] = Fake_handleWinMsg;
  //  VirtualProtect((LPVOID)0x5B4FF4, 4u, fdwReason, &fdwReason);

  // .text:005B4FF0    mov  [esp+2Ch+WndClass.lpfnWndProc], offset ?proc@BullfrogWindow@dk2@@YGJPAUHWND__@@IIJ@Z ; dk2::BullfrogWindow::proc(HWND__ *,uint,uint,long)
//  auto pWinProc = (void **) (dk2_base + (0x005B4FF0 + 4 - dk2_virtual_base));
//  DWORD oldProtect;
//  VirtualProtect((LPVOID) pWinProc, sizeof(void *), PAGE_EXECUTE_READWRITE, &oldProtect);
//  orig_handleWinMsg = (WNDPROC) *pWinProc;
//  *pWinProc = asm_handleWinMsg;
//  VirtualProtect((LPVOID) pWinProc, sizeof(void *), oldProtect, &oldProtect);

  api::BEFORE_BULLFROG_WINDOW_PROC.emplace_back([](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
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
