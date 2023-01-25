//
// Created by DiaLight on 25.01.2023.
//
#include <patches.h>
#include <api.h>
#include <api/patch.h>
#include <dk2_structures.h>


bool patch::fix_keyboard_state_on_alt_tab() {
  // .data:0079CF90 ?instance@MyInputManagerCb@dk2@@0U12@A
  auto *input = (dk2::MyInputManagerCb *) (dk2_base + (0x0079CF90 - dk2_virtual_base));

  api::BEFORE_WINDOW_PROC.emplace_back([input](HWND &hWnd, UINT &Msg, WPARAM &wParam, LPARAM &lParam) {
    switch(Msg) {
      case WM_ACTIVATEAPP:
        if (wParam) {  // activated
          memset(input->f70_pdxInputState->f1C_keyboardState, 0, 256);
        }
        break;
    }
    return true;
  });

  return true;
}

