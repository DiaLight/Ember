// -----------------  id: vtbl_0067BB28  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FONT_RENDERER_BASE_H  // ----------------------  /* auto */
#define MY_FONT_RENDERER_BASE_H  // ----------------------  /* auto */
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
  struct CharRenderCtx;  // ------------------------------  /* auto */
  struct FontObj;  // ------------------------------------  /* auto */
  struct MyFontRendererBase;  // -------------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFontRendererBase {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BB28*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyFontRendererBase  ---------------------------  /* auto */
/*  0*/ virtual int32_t v_scalar_destructor(char);  // = 00633770  /* auto */
/*  4*/ virtual int32_t **v_renderChar(int32_t **, int32_t *, int32_t, AABB *, FontObj *);  // = 006337A0  /* auto */
/*  8*/ virtual int32_t *v_render_r5g5b5a1(int32_t *, MySurface *, CharRenderCtx *);  // = 00634D60  /* auto */
/*  C*/ virtual int32_t *v_render_r5g6b5(int32_t *, MySurface *, CharRenderCtx *);  // = 00634D60  /* auto */
/* 10*/ virtual int32_t *v_render_r4g4b4a4(int32_t *, MySurface *, CharRenderCtx *);  // = 00634D60  /* auto */
/* 14*/ virtual int32_t *v_render_6319F0(int32_t *, MySurface *, CharRenderCtx *);  // = 00634D60  /* auto */
/* 18*/ virtual int32_t *v_render_r8g8b8a8(int32_t *, MySurface *, CharRenderCtx *);  // = 00634D60  /* auto */
// -------------------------------------------------------  /* auto */
/*00631480*/ int32_t *MyFontRenderer_render_r5g5b5a1(int32_t *, MySurface *, CharRenderCtx *);  /* auto */
/*00631600*/ int32_t *MyFontRenderer_render_r5g6b5(int32_t *, MySurface *, CharRenderCtx *);  /* auto */
/*006316F0*/ int32_t *MyFontRenderer_render_r4g4b4a4(int32_t *, MySurface *, CharRenderCtx *);  /* auto */
/*00631860*/ int32_t *MyFontRenderer_render_r8g8b8a8(int32_t *, MySurface *, CharRenderCtx *);  /* auto */
/*006319F0*/ int32_t *MyFontAnyRenderer_sub_6319F0(int32_t *, MySurface *, CharRenderCtx *);  /* auto */
/*006337A0*/ int32_t **renderChar(int32_t **, Pos2i *, int32_t, AABB *, FontObj *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFontRendererBase) == 0x4);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FONT_RENDERER_BASE_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
