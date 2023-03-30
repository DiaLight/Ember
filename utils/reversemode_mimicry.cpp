//
// Created by DiaLight on 30.03.2023.
//
#include <reversemode_mimicry.h>

#ifdef REVERSE_MODE

#include <Windows.h>
#include <dinput.h>
#include <ddraw.h>

#define MIMICRY_DINPUT 0
#define MIMICRY_OLE32 0
#define MIMICRY_DDRAW 1  // aka PATCH.dll

#if MIMICRY_DINPUT
typedef HRESULT (WINAPI *DirectInputCreateAProc)(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA *ppDI, LPUNKNOWN punkOuter);
DirectInputCreateAProc DirectInputCreateAOrig = nullptr;
#pragma comment(linker, "/EXPORT:DirectInputCreateA@16=DirectInputCreateA")
[[maybe_unused]] HRESULT WINAPI DirectInputCreateA(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA *ppDI, LPUNKNOWN punkOuter) {
    return DirectInputCreateAOrig(hinst, dwVersion, ppDI, punkOuter);
}
#endif

#if MIMICRY_OLE32
typedef HRESULT (WINAPI *CoInitializeProc)(_In_opt_ LPVOID pvReserved);
CoInitializeProc CoInitializeOrig = nullptr;
#pragma comment(linker, "/EXPORT:CoInitialize@4=CoInitialize")
[[maybe_unused]] HRESULT WINAPI CoInitialize(_In_opt_ LPVOID pvReserved) {
    return CoInitializeOrig(pvReserved);
}

typedef HRESULT (WINAPI *CoUninitializeProc)();
CoUninitializeProc CoUninitializeOrig = nullptr;
#pragma comment(linker, "/EXPORT:CoUninitialize@0=CoUninitialize")
[[maybe_unused]] void WINAPI CoUninitialize() {
    CoUninitializeOrig();
}

typedef HRESULT (WINAPI *CoCreateInstanceProc)(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID *ppv);
CoCreateInstanceProc CoCreateInstanceOrig = nullptr;
#pragma comment(linker, "/EXPORT:CoCreateInstance@20=CoCreateInstance")
[[maybe_unused]] HRESULT WINAPI CoCreateInstance(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID *ppv) {
    return CoCreateInstanceOrig(rclsid, pUnkOuter, dwClsContext, riid, ppv);
}
#endif

#if MIMICRY_DDRAW
typedef HRESULT (WINAPI *DirectDrawCreateProc)(GUID FAR *lpGUID, LPDIRECTDRAW FAR *lplpDD, IUnknown FAR *pUnkOuter);
DirectDrawCreateProc DirectDrawCreateOrig = nullptr;
#pragma comment(linker, "/EXPORT:DirectDrawCreate@12=DirectDrawCreate")
[[maybe_unused]] HRESULT WINAPI DirectDrawCreate(GUID FAR *lpGUID, LPDIRECTDRAW FAR *lplpDD, IUnknown FAR *pUnkOuter) {
    return DirectDrawCreateOrig(lpGUID, lplpDD, pUnkOuter);
}

typedef HRESULT (WINAPI *DirectDrawEnumerateAProc)(LPDDENUMCALLBACKA lpCallback, LPVOID lpContext);
DirectDrawEnumerateAProc DirectDrawEnumerateAOrig = nullptr;
#pragma comment(linker, "/EXPORT:DirectDrawEnumerateA@8=DirectDrawEnumerateA")
[[maybe_unused]] HRESULT WINAPI DirectDrawEnumerateA(LPDDENUMCALLBACKA lpCallback, LPVOID lpContext) {
    return DirectDrawEnumerateAOrig(lpCallback, lpContext);
}
#endif

#endif  // REVERSE_MODE

bool api::initMimicry() {
#ifdef REVERSE_MODE

#if MIMICRY_DINPUT
    HMODULE dinput = LoadLibraryA("dinput.dll");
    DirectInputCreateAOrig = (DirectInputCreateAProc) GetProcAddress(dinput, "DirectInputCreateA");
    if(!dinput || !DirectInputCreateAOrig) return false;
#endif

#if MIMICRY_OLE32
    HMODULE ole32 = LoadLibraryA("ole32.dll");
    CoInitializeOrig = (CoInitializeProc) GetProcAddress(ole32, "CoInitialize");
    CoUninitializeOrig = (CoUninitializeProc) GetProcAddress(ole32, "CoUninitialize");
    CoCreateInstanceOrig = (CoCreateInstanceProc) GetProcAddress(ole32, "CoCreateInstance");
    if(!ole32 || !CoInitializeOrig || !CoUninitializeOrig || !CoCreateInstanceOrig) return false;
#endif

#if MIMICRY_DDRAW
    HMODULE ddraw = LoadLibraryA("DDRAW.dll");
    DirectDrawCreateOrig = (DirectDrawCreateProc) GetProcAddress(ddraw, "DirectDrawCreate");
    DirectDrawEnumerateAOrig = (DirectDrawEnumerateAProc) GetProcAddress(ddraw, "DirectDrawEnumerateA");
    if(!ddraw || !DirectDrawCreateOrig || !DirectDrawEnumerateAOrig) return false;
#endif

#endif  // REVERSE_MODE

    return true;
}
