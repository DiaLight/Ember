// -----------------  id: vtbl_0067BA48  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DR_BASE_H  // ---------------------------------  /* auto */
#define MY_DR_BASE_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct MyCharRenderCtx;  // ----------------------------  /* auto */
  struct MyDRBase;  // -----------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDRBase {  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BA48*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyDRBase  -------------------------------------  /* auto */
/*  0*/ virtual int32_t v_scalar_destructor(char);  // = 00630570  /* auto */
/*  4*/ virtual int32_t v_doCalcAabbOrRender_0(Pos2i *, MyCharRenderCtx *, AABB *);  // = 00634D60  /* auto */
/*  8*/ virtual void v_doRender(AABB *, MyCharRenderCtx *, AABB *, AABB *);  // = 00634D60  /* auto */
/*  C*/ virtual int32_t v_doCalcAabbOrRender(int32_t, Pos2i *, MyCharRenderCtx *, AABB *, AABB *);  // = 00634D60  /* auto */
/* 10*/ virtual int32_t v_MyDR67B9E0_sub_62E8C0(int32_t, int32_t *, int32_t, int32_t *, int32_t);  // = 00634D60  /* auto */
// -------------------------------------------------------  /* auto */
/*0062E5B0*/ int32_t MyDR67B9E0_getNextMBCharAabbAndType_0(Pos2i *, MyCharRenderCtx *, AABB *);  /* auto */
/*0062E5F0*/ int32_t MyDR67B9E0_doRender(Pos2i *, MyCharRenderCtx *, AABB *, AABB *);  /* auto */
/*0062E610*/ int32_t MyDR67B9E0_doCalcAabbOrRender(int32_t, Pos2i *, MyCharRenderCtx *, AABB *, AABB *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDRBase) == 0x4);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DR_BASE_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
