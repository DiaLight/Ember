//
// Created by DiaLight on 20.08.2022.
//

#ifndef DKII_WINDOW_H
#define DKII_WINDOW_H

#include <dk2/utils.h>
#include <dk2/dd.h>

namespace dk2 {

  class window {

  public:

    /*00558C70*/ static LRESULT __stdcall myCustomDefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

  };

  namespace BullfrogWindow {

    /*005B4FC0*/ void registerClass();
    /*005B4260*/ status_t &__cdecl create(status_t &status, GUID *lpGUID, bool tryAgain, HWND hWndParent, DWORD dwExStyle);
    /*005B4E20*/ status_t &__cdecl create2(status_t &status, bool tryAgain, DWORD dwExStyle, GUID *lpGUID);
    /*005B5070*/ LRESULT __stdcall proc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
    /*005B40E0*/ void __cdecl destroy();

  }

  struct CWindowTest {  // vft=0066F20C
//    CWindowTest_vtbl *__vftable /*VFT*/;
    HWND f4_hWnd;
    MyDdSurfaceEx f8_surface;
    MyDdSurfaceEx *f58_pSurface;
    int f5C;
    virtual ~CWindowTest();

    /*00555CC0*/ status_t &create(status_t &status, AABB *rect);
    /*00555F30*/ status_t &recreateBullfrog(status_t &status);
    /*00556650*/ static LRESULT __stdcall proc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

  };
  static_assert(sizeof(CWindowTest) == 0x60);

}

#endif //DKII_WINDOW_H
