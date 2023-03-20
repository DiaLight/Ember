//
// Created by DiaLight on 11.09.2022.
//

#ifndef EMBER_ACTION_H
#define EMBER_ACTION_H

#include <dk2/utils.h>

namespace dk2 {

  enum GameActionKind : DWORD {
    GA_ExitToWindows = 0x7D
  };

#pragma pack(push, 1)
  struct GameAction{
    DWORD field_0;
    DWORD field_4;
    DWORD field_8;
    GameActionKind fC_actionKind;
    __int16 f10__cpyFrF8;
  };
#pragma pack(pop)
  static_assert(sizeof(GameAction) == 0x12);

#pragma pack(push, 1)
  struct GameActionHandler {
    int (__thiscall *f0_handler)(char *, GameAction *);
    int f4_objOffset;
    int field_8;
    int field_C;
  };
#pragma pack(pop)
  static_assert(sizeof(GameActionHandler) == 0x10);

#pragma pack(push, 1)
  struct GameActionArray {
    GameAction f0_arr[32];
    DWORD f240_counter;
    int f244_counter_32lim;
    int f248_idx;
  };
#pragma pack(pop)
  static_assert(sizeof(GameActionArray) == 0x24C);

}

#endif //EMBER_ACTION_H
