// ---------------  id: instance_0079D368  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef FPU_CONTROL_WORD_WITH_STATE_H  // ----------------  /* auto */
#define FPU_CONTROL_WORD_WITH_STATE_H  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/FPUControlWord.h>  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct FPUControlWordWithState {  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char initialized;  // ----------------------------  /* auto */
/*  1*/ uint8_t gap_1[3];  // ----------------------------  /* auto */
/*  4*/ FPUControlWord ctl;  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(FPUControlWordWithState) == 0xE);      /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //FPU_CONTROL_WORD_WITH_STATE_H  ------------------  /* auto */
// -------------------------------------------------------  /* auto */
