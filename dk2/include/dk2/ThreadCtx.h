// ---------------  id: call_new_006367F8  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef THREAD_CTX_H  // ---------------------------------  /* auto */
#define THREAD_CTX_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct ThreadCtx {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t tid;  // ---------------------------------  /* auto */
/*  4*/ int32_t f4;  // ----------------------------------  /* auto */
/*  8*/ int8_t gap_8[64];  // ----------------------------  /* auto */
/* 48*/ int32_t proc;  // --------------------------------  /* auto */
/* 4C*/ void *arg;  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(ThreadCtx) == 0x50);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //THREAD_CTX_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
