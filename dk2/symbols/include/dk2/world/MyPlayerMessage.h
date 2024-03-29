// -------------  id: call_new_arr_004C40B6  -------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_PLAYER_MESSAGE_H  // --------------------------  /* auto */
#define MY_PLAYER_MESSAGE_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyPlayerMessage;  // ----------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyPlayerMessage {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint8_t id;  // ----------------------------------  /* auto */
/*  1*/ uint16_t playerId;  // ---------------------------  /* auto */
/*  3*/ int32_t messageId;  // ---------------------------  /* auto */
/*  7*/ int32_t f7;  // ----------------------------------  /* auto */
/*  B*/ int32_t uniqueId;  // ----------------------------  /* auto */
/*  F*/ int32_t stringId;  // ----------------------------  /* auto */
/* 13*/ int32_t messageGuiGraphicId;  // -----------------  /* auto */
/* 17*/ int32_t age;  // ---------------------------------  /* auto */
/* 1B*/ int32_t timeout;  // -----------------------------  /* auto */
/* 1F*/ int32_t data1;  // -------------------------------  /* auto */
/* 23*/ int32_t data2;  // -------------------------------  /* auto */
/* 27*/ uint8_t needsTab;  // ----------------------------  /* auto */
/* 28*/ uint16_t computerPlayerFlags;  // ----------------  /* auto */
/* 2A*/ uint8_t f2a_gap[6];  // --------------------------  /* auto */
/* 30*/ MyPlayerMessage *next;  // -----------------------  /* auto */
/* 34*/ MyPlayerMessage *prev;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004C3F20*/ void dump();  // ----------------------------  /* auto */
/*004C42E0*/ BOOL saveToTbDiscFile(TbDiscFile **);  // ---  /* auto */
/*004C51D0*/ char *fun_4C51D0();  // ---------------------  /* auto */
/*00521D00*/ uint32_t fun_521D00();  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyPlayerMessage) == 0x38);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_PLAYER_MESSAGE_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
