//
// Created by DiaLight on 16.01.2023.
//
#include <Windows.h>
#include <registry.h>
#include <status.h>
#include "dinput.h"
#include <vector>
#include <map>

enum Dk2Key {
  Key_ZoomIn = 14,  // home
  Key_ZoomOut = 15,  // end
  Key_MoveUp = 16,  // up
  Key_MoveDown = 17,  // down
  Key_MoveLeft = 18,  // left
  Key_MoveRight = 19,  // right

  Key_RotateLeft = 22,  // del
  Key_RotateRight = 23,  // pgdn

  Key_PitchUp = 47,  // ctrl + home
  Key_PitchDown = 48,  // ctrl + end

  Key_RollLeft = 49,  // ctrl + Insert
  Key_RollRight = 50,  // ctrl + delete

  Key_YawLeft = 51,  // ctrl + pgup
  Key_YawRight = 52,  // ctrl + pgdn
};

struct DxKeyEntry {
  uint32_t dxKey;
  uint32_t modifierFlags;
};

std::map<int, DxKeyEntry> defaultKeyTable = {
    {1, {0xD2, 0}},
    {2, {0x52, 0}},
    {3, {0x39, 0}},
    {4, {0x9D, 0}},
    {5, {0x36, 0}},
    {6, {2, 0}},
    {7, {3, 0}},
    {8, {4, 0}},
    {9, {5, 0}},
    {10, {6, 0}},
    {11, {7, 0}},
    {12, {8, 0}},
    {13, {0x22, 2}},
    {Key_ZoomIn, {DIK_HOME, 0}},
    {Key_ZoomOut, {DIK_END, 0}},
    {Key_MoveUp, {DIK_UP, 0}},
    {Key_MoveDown, {DIK_DOWN, 0}},
    {Key_MoveLeft, {DIK_LEFT, 0}},
    {Key_MoveRight, {DIK_RIGHT, 0}},
    {20, {0x1D, 0}},
    {21, {0x2A, 0}},
    {Key_RotateLeft, {DIK_DELETE, 0}},
    {Key_RotateRight, {DIK_PGDN, 0}},
    {24, {1, 0}},
    {25, {0xB7, 0}},
    {26, {0xC9, 0}},
    {27, {0xF, 0}},
    {28, {0xD, 0}}, // Japanese Keyboard case f0_dxKey=0x90
    {29, {0xC, 0}},
    {30, {0x3B, 0}},
    {31, {0x3C, 0}},
    {32, {0x3D, 0}},
    {33, {0x3E, 0}},
    {34, {0x3F, 0}},
    {35, {0x40, 0}},
    {36, {0x1E, 0}},
    {37, {0x21, 0}},
    {38, {0x22, 0}},
    {39, {0x23, 0}},
    {40, {0x17, 0}},
    {41, {0x32, 0}},
    {42, {0x19, 0}},
    {43, {0x2D, 0}},
    {44, {0x2C, 0}},
    {45, {0x34, 1}},
    {46, {0x33, 1}},
    {Key_PitchUp, {DIK_HOME, 2}},
    {Key_PitchDown, {DIK_END, 2}},
    {Key_RollLeft, {DIK_INSERT, 2}},
    {Key_RollRight, {DIK_DELETE, 2}},
    {Key_YawLeft, {DIK_PGUP, 2}},
    {Key_YawRight, {DIK_PGDN, 2}},
    {53, {0x34, 2}},
    {54, {0x33, 2}},
    {56, {0x1F, 2}},
    {55, {0x26, 2}},
    {57, {0x13, 2}},
    {58, {0x1E, 4}},
    {59, {2, 4}},
    {60, {3, 4}},
    {61, {4, 4}},
    {62, {5, 4}},
    {63, {0x19, 2}},
};

bool bindWasd() {
  std::vector<char> buf;
  if(!dk2Cfg_getBytes(L"Player", L"Key Table", buf)) {
    printStatus("[ERROR]: failed to load keymap");
    return false;
  }
  size_t count = buf.size() / sizeof(DxKeyEntry);
  auto *items = (DxKeyEntry *) buf.data();
//  for (int j = 0; j < count; ++j) {
//    auto &it = items[j];
//    printStatus("%d: %X -> %X", j, it.modifierFlags, it.dxKey);
//  }
  items[Key_MoveUp].dxKey = DIK_W;
  items[Key_MoveLeft].dxKey = DIK_A;
  items[Key_MoveDown].dxKey = DIK_S;
  items[Key_MoveRight].dxKey = DIK_D;
  items[Key_RotateLeft].dxKey = DIK_E;
  items[Key_RotateRight].dxKey = DIK_Q;

  if(!dk2Cfg_setBytes(L"Player", L"Key Table", buf)) {
    printStatus("[ERROR]: failed to save keymap");
    return false;
  }
  printStatus("keymap updated successfully");
  return true;
}
