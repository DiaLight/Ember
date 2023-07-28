// ------------  id: PlayerRoomPlacmentInfo  -------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_PLAYER_ROOM_PLACMENT_INFO_H  // ---------------  /* auto */
#define MY_PLAYER_ROOM_PLACMENT_INFO_H  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyPlayerRoomPlacmentInfo;  // -------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyPlayerRoomPlacmentInfo {  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint8_t roomTypeId;  // --------------------------  /* auto */
/*  1*/ int32_t startX;  // ------------------------------  /* auto */
/*  5*/ int32_t startY;  // ------------------------------  /* auto */
/*  9*/ int32_t endX;  // --------------------------------  /* auto */
/*  D*/ int32_t endY;  // --------------------------------  /* auto */
/* 11*/ uint16_t displayedCost;  // ----------------------  /* auto */
/* 13*/ __int16 currentMoveCount;  // --------------------  /* auto */
/* 15*/ int32_t gameTickInitiated;  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004C7890*/ int32_t calcChecksum();  // -----------------  /* auto */
/*004C78C0*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyPlayerRoomPlacmentInfo) == 0x19);    /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_PLAYER_ROOM_PLACMENT_INFO_H  -----------------  /* auto */
// -------------------------------------------------------  /* auto */
