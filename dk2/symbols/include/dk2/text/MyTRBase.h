// -----------------  id: vtbl_0067BA08  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TR_BASE_H  // ---------------------------------  /* auto */
#define MY_TR_BASE_H  // ---------------------------------  /* auto */
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
  struct MyTRArgs;  // -----------------------------------  /* auto */
  struct MyTRBase;  // -----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTRBase {  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BA08*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyTRBase  -------------------------------------  /* auto */
/*  0*/ virtual int32_t v_scalar_destructor(char);  // = 0062F4E0  /* auto */
/*  4*/ virtual int32_t v_linesOneTypeEx_doCalcAabb_verticalMiddle(AABB *, MyTRArgs *, AABB *);  // = 00634D60  /* auto */
/*  8*/ virtual int32_t v_linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle(AABB *, MyTRArgs *, AABB *, int32_t);  // = 00634D60  /* auto */
/*  C*/ virtual int32_t v_linesOneTypeEx_doDrawOrCalcAabb(int32_t, AABB *, MyTRArgs *, AABB *, int32_t);  // = 0062F510  /* auto */
// -------------------------------------------------------  /* auto */
/*0062F4D0*/ uint32_t *constructor();  // ----------------  /* auto */
/*0062F4E0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*0062F500*/ void destructor();  // ----------------------  /* auto */
/*0062F510*/ int32_t linesOneTypeEx_doDrawOrCalcAabb(int32_t, AABB *, MyTRArgs *, AABB *, AABB *);  /* auto */
/*0062F820*/ int32_t linesOneTypeEx_doCalcAabb_verticalMiddle(AABB *, MyTRArgs *, AABB *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTRBase) == 0x4);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TR_BASE_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
