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

enum Dk2KeyModifier {
  Mod_Shift = 1,
  Mod_Ctrl = 2,
  Mod_Alt = 4,
};

std::map<int, DxKeyEntry> defaultKeyTable = {
    {1, {DIK_INSERT, 0}},  // 1: 0xD2
    {2, {0x52, 0}},  // 2: 0x52
    {3, {0x39, 0}},  // 3: 0x39
    {4, {0x9D, 0}},  // 4: 0x9D
    {5, {0x36, 0}},  // 5: 0x36
    {6, {2, 0}},  // 6: 2
    {7, {3, 0}},  // 7: 3
    {8, {4, 0}},  // 8: 4
    {9, {5, 0}},  // 9: 5
    {10, {6, 0}},  // 10: 6
    {11, {7, 0}},  // 11: 7
    {12, {8, 0}},  // 12: 8
    {13, {DIK_G, Mod_Ctrl}},  // 13: 0x22 + 2
    {Key_ZoomIn, {DIK_HOME, 0}},  // 14: 0xC7
    {Key_ZoomOut, {DIK_END, 0}},  // 15: 0xCF
    {Key_MoveUp, {DIK_UP, 0}},  // 16: 0xC8
    {Key_MoveDown, {DIK_DOWN, 0}},  // 17: 0xD0
    {Key_MoveLeft, {DIK_LEFT, 0}},  // 18: 0xCB
    {Key_MoveRight, {DIK_RIGHT, 0}},  // 19: 0xCD
    {20, {DIK_LCONTROL, 0}},  // 20: 0x1D
    {21, {DIK_LSHIFT, 0}},  // 21: 0x2A
    {Key_RotateLeft, {DIK_DELETE, 0}},  // 22: 0xD3
    {Key_RotateRight, {DIK_PGDN, 0}},  // 23: 0xD1
    {24, {DIK_ESCAPE, 0}},  // 24: 1
    {25, {DIK_SYSRQ, 0}},  // 25: 0xB7
    {26, {DIK_PGUP, 0}},  // 26: 0xC9
    {27, {DIK_TAB, 0}},  // 27: 0xF
    {28, {0xD, 0}}, // 28: 0xD  Japanese Keyboard case f0_dxKey=0x90
    {29, {0xC, 0}},  // 29: 0xC
    {30, {DIK_F1, 0}},  // 30: 0x3B
    {31, {0x3C, 0}},  // 31: 0x3C
    {32, {0x3D, 0}},  // 32: 0x3D
    {33, {0x3E, 0}},  // 33: 0x3E
    {34, {0x3F, 0}},  // 34: 0x3F
    {35, {0x40, 0}},  // 35: 0x40
    {36, {DIK_A, 0}},  // 36: 0x1E
    {37, {DIK_F, 0}},  // 37: 0x21
    {38, {0x22, 0}},  // 38: 0x22
    {39, {0x23, 0}},  // 39: 0x23
    {40, {DIK_I, 0}},  // 40: 0x17
    {41, {DIK_M, 0}},  // 41: 0x32
    {42, {DIK_P, 0}},  // 42: 0x19
    {43, {0x2D, 0}},  // 43: 0x2D
    {44, {0x2C, 0}},  // 44: 0x2C
    {45, {0x34, Mod_Shift}},  // 45: 0x34 + 1
    {46, {0x33, Mod_Shift}},  // 46: 0x33 + 1
    {Key_PitchUp, {DIK_HOME, Mod_Ctrl}},  // 47: 0xC7 + 2
    {Key_PitchDown, {DIK_END, Mod_Ctrl}},  // 48: 0xCF + 2
    {Key_RollLeft, {DIK_INSERT, Mod_Ctrl}},  // 49: 0xD2 + 2
    {Key_RollRight, {DIK_DELETE, Mod_Ctrl}},  // 50: 0xD3 + 2
    {Key_YawLeft, {DIK_PGUP, Mod_Ctrl}},  // 51: 0xC9 + 2
    {Key_YawRight, {DIK_PGDN, Mod_Ctrl}},  // 52: 0xD1 + 2
    {53, {0x34, Mod_Ctrl}},  // 53: 0x34 + 2
    {54, {0x33, Mod_Ctrl}},  // 54: 0x33 + 2
    {55, {DIK_L, Mod_Ctrl}},  // 55: 0x26 + 2
    {56, {DIK_S, Mod_Ctrl}},  // 56: 0x1F + 2
    {57, {DIK_R, Mod_Ctrl}},  // 57: 0x13 + 2
    {58, {DIK_A, Mod_Alt}},  // 58: 0x1E + 4
    {59, {DIK_1, Mod_Alt}},  // 59: 2 + 4
    {60, {DIK_2, Mod_Alt}},  // 60: 3 + 4
    {61, {DIK_3, Mod_Alt}},  // 61: 4 + 4
    {62, {DIK_4, Mod_Alt}},  // 62: 5 + 4
    {63, {DIK_P, Mod_Ctrl}},  // 63: 0x19 + 2
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
  printStatus("WASD - movement, QE - rotation");
  return true;
}
