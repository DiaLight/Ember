//
// Created by DiaLight on 14.01.2023.
//
#include <patches.h>
#include <cstdio>
#include <api/patch.h>
#include <windowsx.h>
#include <dk2_structures.h>
#include <api.h>

dk2::CBridge *pCBridge_instance = nullptr;

typedef void (__fastcall *ProbablyGlobalRenderObj_zoomRel_449CA0_t)(dk2::ProbablyGlobalRenderObj *_this, void *edx, int delta);
ProbablyGlobalRenderObj_zoomRel_449CA0_t ProbablyGlobalRenderObj_zoomRel_449CA0 = nullptr;


void zoom2(int value) {
  ProbablyGlobalRenderObj_zoomRel_449CA0(
      &pCBridge_instance->f3E5_probablyGlobalRenderObj, nullptr, value
  );
}
void zoom(int direction) {
//  alignas(dk2::GameAction) uint8_t action_buf[sizeof(dk2::GameAction)];
//  dk2::GameAction &action = *(dk2::GameAction *) action_buf;
//  action.field_0 = -direction * 1024;
//  action.field_4 = 0;
//  action.field_8 = 0;
//  action.fC_actionKind = 7;
//  auto *dpif = dk2::CDefaultPlayerInterface::getInstance();
//  action.f10__cpyFrF8 = dpif->f8__cpyToF10;
//  dpif->pushAction(action);
}

bool patch::use_wheel_to_zoom() {
  if(!api::hasFlag("wheel2zoom")) return true;
  // 006D3CC8 CBridge_instance
  pCBridge_instance = (dk2::CBridge *) (dk2_base + (0x006D3CC8 - dk2_virtual_base));
  ProbablyGlobalRenderObj_zoomRel_449CA0 = (ProbablyGlobalRenderObj_zoomRel_449CA0_t) (dk2_base + (0x00449CA0 - dk2_virtual_base));

  api::BEFORE_WINDOW_PROC.emplace_back([](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
    switch(Msg) {
      case WM_MOUSEWHEEL: {
        DWORD fwKeys = GET_KEYSTATE_WPARAM(wParam);
        DWORD zDelta = GET_WHEEL_DELTA_WPARAM(wParam);
        DWORD xPos = GET_X_LPARAM(lParam);
        DWORD yPos = GET_Y_LPARAM(lParam);
//        printf("k=%08X d=%d {%d %d}\n", fwKeys, zDelta, xPos, yPos);
        zoom2(-zDelta * 50);
        break;
      }
    }
    return true;
  });

  return true;
}
