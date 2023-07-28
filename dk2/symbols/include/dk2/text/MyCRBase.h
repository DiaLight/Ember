// -----------------  id: vtbl_0067B9F8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CR_BASE_H  // ---------------------------------  /* auto */
#define MY_CR_BASE_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct MyCRBase;  // -----------------------------------  /* auto */
  struct MyMultilineRenderCtx;  // -----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCRBase {  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B9F8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyCRBase  -------------------------------------  /* auto */
/*  0*/ virtual int32_t v_scalar_destructor(char);  // = 0062EF00  /* auto */
/*  4*/ virtual int32_t v_chars_doCalcAabbInMiddle(AABB *, MyMultilineRenderCtx *, AABB *);  // = 00634D60  /* auto */
/*  8*/ virtual int32_t v_chars_doCalcAabbAndRenderInMiddle(AABB *, MyMultilineRenderCtx *, AABB *, AABB *);  // = 00634D60  /* auto */
// -------------------------------------------------------  /* auto */
/*0062EEF0*/ uint32_t *constructor();  // ----------------  /* auto */
/*0062EF00*/ void *scalar_destructor(char);  // ----------  /* auto */
/*0062EF20*/ void destructor();  // ----------------------  /* auto */
/*0062F3B0*/ int32_t chars_doCalcAabbInMiddle(AABB *, MyMultilineRenderCtx *, AABB *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCRBase) == 0x4);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CR_BASE_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
