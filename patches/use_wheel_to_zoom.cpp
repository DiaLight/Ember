//
// Created by DiaLight on 14.01.2023.
//
#include <dk2_patches.h>
#include <cstdio>
#include <windowsx.h>
#include <dk2/CCamera.h>
#include <dk2/CBridge.h>
#include <hooks/window.h>
#include <dk2_info.h>
#include <hooks/direct_input.h>

dk2::CBridge *pCBridge_instance = nullptr;

typedef void (__fastcall *CCamera_zoomRel_449CA0_t)(dk2::CCamera *_this, void *edx, int delta);

CCamera_zoomRel_449CA0_t CCamera_zoomRel_449CA0 = nullptr;


void zoom2(int value) {
    CCamera_zoomRel_449CA0(
            &pCBridge_instance->camera, nullptr, value
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

namespace {
    DWORD g_lastTimestamp = 0;
}

bool patch::use_wheel_to_zoom() {
    if (!api::hasFlag("wheel2zoom")) return true;
    // 006D3CC8 CBridge_instance
    pCBridge_instance = (dk2::CBridge *) (api::dk2_base + (0x006D3CC8 - dk2_virtual_base));
    CCamera_zoomRel_449CA0 = (CCamera_zoomRel_449CA0_t) (api::dk2_base + (0x00449CA0 - dk2_virtual_base));

    hook::BEFORE_WINDOW_PROC.emplace_back([](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
        switch (Msg) {
            case WM_MOUSEWHEEL: {
                DWORD fwKeys = GET_KEYSTATE_WPARAM(wParam);
                DWORD zDelta = GET_WHEEL_DELTA_WPARAM(wParam);  // +-120*speed
                DWORD xPos = GET_X_LPARAM(lParam);
                DWORD yPos = GET_Y_LPARAM(lParam);
//                printf("k=%08X d=%d {%d %d}\n", fwKeys, zDelta, xPos, yPos);
                zoom2(-zDelta * 50);
                break;
            }
        }
        return true;
    });
    hook::DIRECT_INPUT_MOUSE_DATA.emplace_back([](DIDEVICEOBJECTDATA *data) {
        switch (data->dwOfs) {
            case DIMOFS_Z: {  // wheel
                int zDelta = data->dwData;  // +-150 with timestamp
                int tsDelta = data->dwTimeStamp - g_lastTimestamp;
                g_lastTimestamp = data->dwTimeStamp;
//                printf("wheel: %d, ts: %d\n", data->dwData, tsDelta);
                int mult = 80;
                if (tsDelta > 100) mult = 40;
                if (tsDelta > 500) mult = 20;
                zoom2(-zDelta * mult);
                break;
            }
        }
    });

    return true;
}
