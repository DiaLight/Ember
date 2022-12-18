//
// Created by DiaLight on 18.12.2022.
//
#include <dk2.h>
#include <patches.h>
#include <stdexcept>
#include <stdex.h>
#include <ShellScalingApi.h>

bool initDPI() {
  HMODULE userDLL = LoadLibrary("User32.dll");
  if (userDLL) {
    typedef BOOL (WINAPI *SetProcessDpiAwarenessContext_fun)(DPI_AWARENESS_CONTEXT value);
    auto SetProcessDpiAwarenessContext = (SetProcessDpiAwarenessContext_fun) GetProcAddress(userDLL, "SetProcessDpiAwarenessContext");
    if(SetProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2)) return true;
  }

  HMODULE shcoreDLL = LoadLibrary("SHCORE.DLL");
  if (shcoreDLL) {
    typedef HRESULT(WINAPI *SetProcessDpiAwareness_fun)(PROCESS_DPI_AWARENESS);
    auto SetProcessDpiAwareness = (SetProcessDpiAwareness_fun) GetProcAddress(shcoreDLL, "SetProcessDpiAwareness");

    if (SetProcessDpiAwareness) {
      /* Try Windows 8.1+ version */
      if(SUCCEEDED(SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE))) return true;
    }
  }
  if (userDLL) {
    typedef BOOL(WINAPI *SetProcessDPIAware_fun)(void);
    auto SetProcessDPIAware = (SetProcessDPIAware_fun) GetProcAddress(userDLL, "SetProcessDPIAware");
    if (SetProcessDPIAware) {
      /* Try Vista - Windows 8 version.
      This has a constant scale factor for all monitors.
      */
      if(SetProcessDPIAware()) return true;
    }
  }
  return false;
}

bool patch::dpi_aware() {
  if(!api::hasFlag("dpi_aware")) return true;
  api::BEFORE_MAIN.push_back([](int &argc, char **&argv) {
    if(initDPI()) {
      printf("DPI aware initialized\n");
    } else {
      printf("[ERROR] DPI aware failed\n");
      return -1;
    }
    return 0;
  });
  return true;
}
