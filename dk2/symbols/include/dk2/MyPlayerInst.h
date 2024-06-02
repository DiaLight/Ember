// ----------------  id: Player_Instance  ----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_PLAYER_INST_H  // -----------------------------  /* auto */
#define MY_PLAYER_INST_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyPlayerInst;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyPlayerInst {  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t type;  // --------------------------------  /* auto */
/*  4*/ int32_t startTime;  // ---------------------------  /* auto */
/*  8*/ int32_t data1;  // -------------------------------  /* auto */
/*  C*/ int32_t data2;  // -------------------------------  /* auto */
/* 10*/ int32_t data3;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004C1030*/ int32_t calcChecksum();  // -----------------  /* auto */
/*004C1050*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyPlayerInst) == 0x14);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_PLAYER_INST_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */