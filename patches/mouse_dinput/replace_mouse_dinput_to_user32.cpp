//
// Created by DiaLight on 01.09.2022.
//
#include <dk2_patches.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <cstdio>
#include <dk2/MyDxMouse.h>
#include <dk2/MouseRgbDxAction.h>
#include <dk2/ControlKeysUpdater.h>
#include <dk2/Pos2i.h>
#include <utils/patch.h>
#include <dk2_info.h>
#include <utils/xrefs.h>
#include <hooks/window.h>
#include <hooks/game_loop.h>

#define GET_X_LPARAM(lp)                        ((int)(short)LOWORD(lp))
#define GET_Y_LPARAM(lp)                        ((int)(short)HIWORD(lp))

dk2::status_t &__cdecl proxy_MyDxMouse_create(dk2::status_t &status, dk2::MyDxMouse *&instance) {
    instance = nullptr;
    status = 0;
    return status;
}

bool remove_mouse_dinput() {
    if (!api::replaceXrefs(u8ptr<&dk2::MyDxMouse_create>(), proxy_MyDxMouse_create)) return false;
    // don't attach dinput mouse to ControlKeysUpdater
    uint8_t *pos = api::dk2_base + (0x005BC091 - dk2_virtual_base);  // .text:005BC091    jge     short loc_5BC0A1
    {
        write_protect prot(pos, sizeof(DWORD));
        for (int i = 0; i < 2; ++i) {
            pos[i] = 0x90;
        }
    }
    return true;
}

namespace {
    dk2::Pos2i clientSize;
}

// dk2 extends dinput scancodes for keyboard to add mouse keys in keyboard state array
#define DIK_DK2_LEFTMOUSE 0xF0
#define DIK_DK2_RIGHTMOUSE 0xF1
#define DIK_DK2_MIDDLEMOUSE 0xF2
#define DIK_DK2_UNKMOUSE 0xF3

int click_dinput_to_dk2(int value) {
    switch (value) {
        case DIMOFS_BUTTON0:  // left mouse
            return DIK_DK2_LEFTMOUSE;
        case DIMOFS_BUTTON1:  // right mouse
            return DIK_DK2_RIGHTMOUSE;
        case DIMOFS_BUTTON2:  // middle mouse
            return DIK_DK2_MIDDLEMOUSE;
        case DIMOFS_BUTTON3:  // unk mouse
            return DIK_DK2_UNKMOUSE;
    }
    return 0;
}

// click flags
#define DK2_Shift 0x01
#define DK2_Ctrl 0x02
#define DK2_Alt 0x04
#define DK2_IsPressed 0x08
#define DK2_IsDblClick 0x10

namespace {
    std::vector<dk2::MouseRgbDxAction *> actionsInProgress;
}

void click_mouse(DWORD dik_scancode, DWORD flags) {
    auto *updater = dk2::MyInputManagerCb_instance.f5C_controlKeys;
    // do not try to call constructor/destructor
    auto *action = (dk2::MouseRgbDxAction *) new char[sizeof(dk2::MouseRgbDxAction)];
    *(void **) action = dk2::MouseRgbDxAction::vftable();
//  action.f10_KeyCode_F0toF3 = click_dinput_to_dk2(dinput_dwOffs);
    action->KeyCode_F0toF3 = dik_scancode;
    action->btnPressFlags = flags;
    action->pos.x = 0;
    action->pos.y = 0;
    // action->f1C_data = LOBYTE(DIDEVICEOBJECTDATA.dwData)
    action->data = flags & DK2_IsPressed ? 0x80 : 0x00;
    action->timestamp = GetTickCount();
    action->isNotHandled = 1;
    actionsInProgress.push_back(action);
    updater->v_fun4(action);
}

namespace {
    DWORD controlFlags = 0;
}

bool emulate_dinput_from_user32() {
    // generate dinput action from user32 gui messages
    hook::BEFORE_WINDOW_PROC.emplace_back([](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
        switch (Msg) {
            case WM_LBUTTONDOWN:
                click_mouse(DIK_DK2_LEFTMOUSE, DK2_IsPressed | controlFlags);
                break;
            case WM_LBUTTONUP:
                click_mouse(DIK_DK2_LEFTMOUSE, 0 | controlFlags);
                break;
            case WM_LBUTTONDBLCLK:
                click_mouse(DIK_DK2_LEFTMOUSE, DK2_IsDblClick | controlFlags);
                break;
            case WM_RBUTTONDOWN:
                click_mouse(DIK_DK2_RIGHTMOUSE, DK2_IsPressed | controlFlags);
                break;
            case WM_RBUTTONUP:
                click_mouse(DIK_DK2_RIGHTMOUSE, 0 | controlFlags);
                break;
            case WM_RBUTTONDBLCLK:
                click_mouse(DIK_DK2_RIGHTMOUSE, DK2_IsDblClick | controlFlags);
                break;
            case WM_MBUTTONDOWN:
                click_mouse(DIK_DK2_MIDDLEMOUSE, DK2_IsPressed | controlFlags);
                break;
            case WM_MBUTTONUP:
                click_mouse(DIK_DK2_MIDDLEMOUSE, 0 | controlFlags);
                break;
            case WM_MBUTTONDBLCLK:
                click_mouse(DIK_DK2_MIDDLEMOUSE, DK2_IsDblClick | controlFlags);
                break;
            case WM_XBUTTONDOWN:
                click_mouse(DIK_DK2_UNKMOUSE, DK2_IsPressed | controlFlags);
                break;
            case WM_XBUTTONUP:
                click_mouse(DIK_DK2_UNKMOUSE, 0 | controlFlags);
                break;
            case WM_XBUTTONDBLCLK:
                click_mouse(DIK_DK2_UNKMOUSE, DK2_IsDblClick | controlFlags);
                break;
            case WM_KEYDOWN: {
                switch (wParam) {
                    case VK_SHIFT:
                        controlFlags |= DK2_Shift;
                    case VK_CONTROL:
                        controlFlags |= DK2_Ctrl;
                    case VK_MENU:
                        controlFlags |= DK2_Alt;
                }
                break;
            }
            case WM_KEYUP: {
                switch (wParam) {
                    case VK_SHIFT:
                        controlFlags &= ~DK2_Shift;
                    case VK_CONTROL:
                        controlFlags &= ~DK2_Ctrl;
                    case VK_MENU:
                        controlFlags &= ~DK2_Alt;
                }
                break;
            }
            case WM_SIZE: {
                clientSize = {LOWORD(lParam), HIWORD(lParam)};
                break;
            }
        }
        return true;
    });
    // release handled dinput actions
    hook::TICK_GAME_LOOP.emplace_back([] {
        auto it = std::remove_if(actionsInProgress.begin(), actionsInProgress.end(), [](dk2::MouseRgbDxAction *action) {
            if (action->isNotHandled) return false;
            delete[] (char *) action;
            return true;
        });
        actionsInProgress.erase(it, actionsInProgress.end());
    });
    return true;
}

bool patch::replace_mouse_dinput_to_user32() {
    std::string arg = api::findArgValue("fullscreen");
    if (arg.empty()) return true;
    if (arg != "false" && arg != "true") return false;
    bool isFullscreen = arg == "true";
    if (isFullscreen) return true; // ignore patch in fullscreen

    if (!remove_mouse_dinput()) return false;
    if (!emulate_dinput_from_user32()) return false;

//  // .text:005DA028  mov eax, [esi+1Ch]
//  // .text:005DA02B  mov ebx, [esi+3Ch]
//  HookHandle::create(dk2_base + (0x005DA028 - dk2_virtual_base), 6)->addHandler([](HookHandler &handle, Regs &regs, void *target) {
//    printf("set handled %p\n", regs.edi);
//  });
    return true;
}

