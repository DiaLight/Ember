// -----------------  id: vtbl_0067BA80  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FONT_RENDERER0_H  // --------------------------  /* auto */
#define MY_FONT_RENDERER0_H  // --------------------------  /* auto */
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
  struct CharRenderCtx;  // ------------------------------  /* auto */
  struct MyFontRenderer0;  // ----------------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFontRenderer0 : MyFontRendererBase {  // --------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BA80*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyFontRendererBase  ---------------------  /* auto */
/*  0*/ // virtual int32_t v_scalar_destructor(char);  // = 00631450  /* auto */
/*  4*/ // virtual int32_t **v_renderChar(int32_t **, int32_t *, int32_t, AABB *, FontObj *);  // = 006337A0  /* auto */
/*  8*/ // virtual uint32_t *v_render_r5g5b5a1(uint32_t *, MySurface *, CharRenderCtx *);  // = 00631480  /* auto */
/*  C*/ // virtual uint32_t *v_render_r5g6b5(uint32_t *, MySurface *, CharRenderCtx *);  // = 00631600  /* auto */
/* 10*/ // virtual uint32_t *v_render_r4g4b4a4(uint32_t *, MySurface *, CharRenderCtx *);  // = 006316F0  /* auto */
/* 14*/ // virtual uint32_t *v_render_6319F0(uint32_t *, MySurface *, CharRenderCtx *);  // = 006319F0  /* auto */
/* 18*/ // virtual uint32_t *v_render_r8g8b8a8(uint32_t *, MySurface *, CharRenderCtx *);  // = 00631860  /* auto */
/*---*/ // MyFontRenderer0  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00631450*/ MyFontRenderer0 *scalar_destructor(char);      /* auto */
/*00631470*/ void destructor();  // ----------------------  /* auto */
/*00631480*/ uint32_t *render_r5g5b5a1(uint32_t *, MySurface *, CharRenderCtx *);  /* auto */
/*00631600*/ uint32_t *render_r5g6b5(uint32_t *, MySurface *, CharRenderCtx *);  /* auto */
/*006316F0*/ uint32_t *render_r4g4b4a4(uint32_t *, MySurface *, CharRenderCtx *);  /* auto */
/*00631860*/ uint32_t *render_r8g8b8a8(uint32_t *, MySurface *, CharRenderCtx *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFontRenderer0) == 0x4);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FONT_RENDERER0_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
