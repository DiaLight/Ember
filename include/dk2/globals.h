//
// Created by DiaLight on 27.12.2022.
//

#ifndef EMBER_GLOBALS_H
#define EMBER_GLOBALS_H

#include <api/imports.h>

namespace dk2 {

  __analysis_noreturn
  /*00638440*/ void __cdecl start();
  /*005A5DA0*/ int __cdecl main(int argc, char *argv[]);
  /*005B74A0*/ void __cdecl resolveDk2HomeDir();

  class globals {
    /*0079D01C*/ static HINSTANCE hInstance;
    /*0079D980*/ static char dk2HomeDir[MAX_PATH];
  public:
    /*005B2DA0*/ static void __cdecl setHInstance(HINSTANCE hInst);
    /*005B2D90*/ static HINSTANCE __cdecl getHInstance();
    // msvc is importing data as functions. So we follow import jump to get actual data address
    inline static HINSTANCE *getHInstancePtr() { return (HINSTANCE *) funptr<&hInstance>(); }

    /*005B2E50*/ static void __cdecl setAppExitStatus(bool shouldExit);
    /*005B2E40*/ static bool __cdecl isAppExitStatusSet();

    inline static char *getDk2HomeDir() { return (char *) funptr<&dk2HomeDir>(); }

  };

  using status_t = int;

  class dd {
    /*0079D020*/ static HWND hWnd;
    /*0079D3D0*/ static LPDIRECTDRAW lpDD;
    /*0079D3F0*/ static LPDIRECTDRAW lpSurfaceDD;

  public:
    /*005B2DC0*/ static void __cdecl setHWindow(HWND hWnd);
    /*005B2DB0*/ static HWND __cdecl getHWindow();
    inline static HWND *getHWindowPtr() { return (HWND *) funptr<&hWnd>(); }

    inline static LPDIRECTDRAW *getDD() { return (LPDIRECTDRAW *) funptr<&lpDD>(); }
    inline static LPDIRECTDRAW *getSurfaceDD() { return (LPDIRECTDRAW *) funptr<&lpSurfaceDD>(); }
    /*005B5410*/ static void __cdecl setSurfaceDD(LPDIRECTDRAW lpDD);

    /*005B4390*/ static status_t &__cdecl init(status_t &status, DWORD width, DWORD height, DWORD displayBitness, DWORD surfFlags, LPPALETTEENTRY palette);
    /*005B4230*/ static void __cdecl destroy();

  };

}

#endif //EMBER_GLOBALS_H
