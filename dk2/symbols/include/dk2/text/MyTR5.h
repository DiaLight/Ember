// -----------------  id: vtbl_0067B918  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TR5_H  // -------------------------------------  /* auto */
#define MY_TR5_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/MyTRBase.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyTR5;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTR5 : MyTRBase {  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B918*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyTRBase  -------------------------------  /* auto */
/*  0*/ // virtual int32_t v_scalar_destructor(char);  // = 0062C860  /* auto */
/*  4*/ // virtual int32_t v_linesOneTypeEx_doCalcAabb_verticalMiddle(AABB *, MyTRArgs *, AABB *);  // = 0062F720  /* auto */
/*  8*/ // virtual int32_t v_linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle(AABB *, MyTRArgs *, AABB *, int32_t);  // = 0062F790  /* auto */
/*  C*/ // virtual int32_t v_linesOneTypeEx_doDrawOrCalcAabb(int32_t, AABB *, MyTRArgs *, AABB *, int32_t);  // = 0062F510  /* auto */
/*---*/ // MyTR5  ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062F720*/ int32_t linesOneTypeEx_doCalcAabb_verticalMiddle(int32_t, int32_t, uint32_t *);  /* auto */
/*0062F790*/ int32_t linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle(int32_t *, int32_t, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTR5) == 0x4);  // -----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TR5_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
