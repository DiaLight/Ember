// ----------------  id: Creature_Fight  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FIGHT_H  // -----------------------------------  /* auto */
#define MY_FIGHT_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyFight;  // ------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFight {  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t attackRangeSquared;  // ------------------  /* auto */
/*  4*/ uint16_t attacking;  // --------------------------  /* auto */
/*  6*/ uint16_t rangeAttackers[8];  // ------------------  /* auto */
/* 16*/ uint16_t meleeAttackers[8];  // ------------------  /* auto */
/* 26*/ uint16_t tempFear;  // ---------------------------  /* auto */
/* 28*/ uint16_t currentFear;  // ------------------------  /* auto */
/* 2A*/ uint8_t overThreatCounter;  // -------------------  /* auto */
/* 2B*/ uint8_t attackType_n_spellNo;  // ----------------  /* auto */
/* 2C*/ uint16_t oldFightPosX;  // -----------------------  /* auto */
/* 2E*/ uint16_t oldFightPosY;  // -----------------------  /* auto */
/* 30*/ int32_t oldFightTick;  // ------------------------  /* auto */
/* 34*/ uint8_t backOffTimer;  // ------------------------  /* auto */
/* 35*/ uint16_t threatThing;  // ------------------------  /* auto */
/* 37*/ uint16_t threatThingThreshold;  // ---------------  /* auto */
/* 39*/ uint16_t avoidCreature;  // ----------------------  /* auto */
/* 3B*/ uint16_t avoidCreature_3B;  // -------------------  /* auto */
/* 3D*/ uint16_t retreatingCreature;  // -----------------  /* auto */
/* 3F*/ uint8_t creatureRetreatingCounter;  // -----------  /* auto */
/* 40*/ uint8_t avoidRetreatersCounter;  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004915D0*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFight) == 0x41);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FIGHT_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
