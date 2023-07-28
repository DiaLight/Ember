// -----------------  id: vtbl_0067BA60  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FONT_RENDERER4_H  // --------------------------  /* auto */
#define MY_FONT_RENDERER4_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/render/MyFontRendererBase.h>  // ------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyFontRenderer4;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFontRenderer4 : MyFontRendererBase {  // --------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BA60*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyFontRendererBase  ---------------------  /* auto */
/*  0*/ // virtual int32_t v_scalar_destructor(char);  // = 006309A0  /* auto */
/*  4*/ // virtual int32_t **v_renderChar(int32_t **, int32_t *, int32_t, AABB *, FontObj *);  // = 006337A0  /* auto */
/*  8*/ // virtual uint32_t *v_render_r5g5b5a1(uint32_t *, MySurface *, CharRenderCtx *);  // = 006309D0  /* auto */
/*  C*/ // virtual uint32_t *v_render_r5g6b5(uint32_t *, MySurface *, CharRenderCtx *);  // = 00630C80  /* auto */
/* 10*/ // virtual uint32_t *v_render_r4g4b4a4(uint32_t *, MySurface *, CharRenderCtx *);  // = 00630F30  /* auto */
/* 14*/ // virtual uint32_t *v_render_6319F0(uint32_t *, MySurface *, CharRenderCtx *);  // = 006319F0  /* auto */
/* 18*/ // virtual uint32_t *v_render_r8g8b8a8(uint32_t *, MySurface *, CharRenderCtx *);  // = 006311E0  /* auto */
/*---*/ // MyFontRenderer4  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006309A0*/ MyFontRenderer4 *scalar_destructor(char);      /* auto */
/*006309C0*/ void destructor();  // ----------------------  /* auto */
/*006309D0*/ uint32_t *render_r5g5b5a1(uint32_t *, int32_t, int32_t);  /* auto */
/*00630C80*/ uint32_t *render_r5g6b5(uint32_t *, int32_t, int32_t);  /* auto */
/*00630F30*/ uint32_t *render_r4g4b4a4(uint32_t *, int32_t, int32_t);  /* auto */
/*006311E0*/ uint32_t *render_r8g8b8a8(uint32_t *, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFontRenderer4) == 0x4);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FONT_RENDERER4_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
