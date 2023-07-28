// -----------------  id: vtbl_0067B9E0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DR0_H  // -------------------------------------  /* auto */
#define MY_DR0_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/MyDRBase.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct AABBc;  // --------------------------------------  /* auto */
  struct MyCharRenderCtx;  // ----------------------------  /* auto */
  struct MyDR0;  // --------------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDR0 : MyDRBase {  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B9E0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyDRBase  -------------------------------  /* auto */
/*  0*/ // virtual int32_t v_scalar_destructor(char);  // = 0062E520  /* auto */
/*  4*/ // virtual int32_t v_doCalcAabbOrRender_0(Pos2i *, MyCharRenderCtx *, AABB *);  // = 0062E5B0  /* auto */
/*  8*/ // virtual void v_doRender(AABB *, MyCharRenderCtx *, AABB *, AABBc *);  // = 0062E5F0  /* auto */
/*  C*/ // virtual int32_t v_doCalcAabbOrRender(int32_t, Pos2i *, MyCharRenderCtx *, AABB *, AABBc *);  // = 0062E610  /* auto */
/* 10*/ // virtual int32_t v_MyDR67B9E0_sub_62E8C0(int32_t, int32_t *, int32_t, int32_t *, int32_t);  // = 0062E8C0  /* auto */
/*---*/ // MyDR0  ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062E520*/ void *scalar_destructor(char);  // ----------  /* auto */
/*0062E540*/ void destructor();  // ----------------------  /* auto */
/*0062E5B0*/ int32_t getNextMBCharAabbAndType_0(Pos2i *, MyCharRenderCtx *, AABB *);  /* auto */
/*0062E5F0*/ int32_t doRender(Pos2i *, MyCharRenderCtx *, AABB *, AABBc *);  /* auto */
/*0062E610*/ int32_t doCalcAabbOrRender(int32_t, Pos2i *, MyCharRenderCtx *, AABB *, AABBc *);  /* auto */
/*0062E8C0*/ int32_t sub_62E8C0(int32_t, int32_t *, int32_t, AABB *, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDR0) == 0x4);  // -----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DR0_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
