//
// Created by DiaLight on 27.12.2022.
//
#include "dd_modes.h"
#include <Windows.h>
#include <ddraw.h>
#include <status.h>

class DDClose {
  LPDIRECTDRAW lpDD;
public:
  explicit DDClose(LPDIRECTDRAW lpDD) : lpDD(lpDD) {}
  ~DDClose() {
    lpDD->Release();
  }
};
std::vector<screen_mode> g_screenModeList;

HRESULT FAR PASCAL enumDDModesCallback(LPDDSURFACEDESC desc, LPVOID arg) {
  auto *list = (std::vector<screen_mode> *) arg;
  if(desc->ddpfPixelFormat.dwRGBBitCount == 32) {
    list->emplace_back(desc->dwWidth, desc->dwHeight);
  }
  return DDENUMRET_OK;
}

bool collectModes(HWND hWnd) {
  LPDIRECTDRAW lpDD;
  if(DirectDrawCreate(NULL, &lpDD, NULL) != DD_OK) {
    printStatus("failed to create dd");
    return false;
  }
  DDClose ddc(lpDD);
  if (lpDD->SetCooperativeLevel(hWnd, DDSCL_ALLOWMODEX | DDSCL_EXCLUSIVE | DDSCL_NOWINDOWCHANGES | DDSCL_FULLSCREEN) != DD_OK) {
    printStatus("failed to set coop level");
    return false;
  }
  if (lpDD->EnumDisplayModes(0, NULL, &g_screenModeList, (LPDDENUMMODESCALLBACK) enumDDModesCallback) != DD_OK) {
    printStatus("failed to enum modes");
    return false;
  }
  lpDD->SetCooperativeLevel(hWnd, DDSCL_NORMAL);
  return true;
}
