// -----------------  id: vtbl_0067B8F8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CR3_H  // -------------------------------------  /* auto */
#define MY_CR3_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/MyCRBase.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCR3 : MyCRBase {  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B8F8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyCRBase  -------------------------------  /* auto */
/*  0*/ // virtual int32_t v_scalar_destructor(char);  // = 0062C6B0  /* auto */
/*  4*/ // virtual int32_t v_chars_doCalcAabbInMiddle(AABB *, MyMultilineRenderCtx *, AABB *);  // = 0062F3B0  /* auto */
/*  8*/ // virtual int32_t v_chars_doCalcAabbAndRenderInMiddle(AABB *, MyMultilineRenderCtx *, AABB *, AABB *);  // = 0062F430  /* auto */
/*---*/ // MyCR3  ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCR3) == 0x4);  // -----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CR3_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
