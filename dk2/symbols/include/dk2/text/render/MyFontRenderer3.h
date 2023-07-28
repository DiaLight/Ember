// -----------------  id: vtbl_0067BAC0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FONT_RENDERER3_H  // --------------------------  /* auto */
#define MY_FONT_RENDERER3_H  // --------------------------  /* auto */
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
  struct MyFontRenderer3;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFontRenderer3 : MyFontRendererBase {  // --------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BAC0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyFontRendererBase  ---------------------  /* auto */
/*  0*/ // virtual int32_t v_scalar_destructor(char);  // = 006328A0  /* auto */
/*  4*/ // virtual int32_t **v_renderChar(int32_t **, int32_t *, int32_t, AABB *, FontObj *);  // = 006337A0  /* auto */
/*  8*/ // virtual uint32_t *v_render_r5g5b5a1(uint32_t *, MySurface *, CharRenderCtx *);  // = 006328D0  /* auto */
/*  C*/ // virtual uint32_t *v_render_r5g6b5(uint32_t *, MySurface *, CharRenderCtx *);  // = 00632BC0  /* auto */
/* 10*/ // virtual uint32_t *v_render_r4g4b4a4(uint32_t *, MySurface *, CharRenderCtx *);  // = 00632DC0  /* auto */
/* 14*/ // virtual uint32_t *v_render_6319F0(uint32_t *, MySurface *, CharRenderCtx *);  // = 006319F0  /* auto */
/* 18*/ // virtual uint32_t *v_render_r8g8b8a8(uint32_t *, MySurface *, CharRenderCtx *);  // = 006330B0  /* auto */
/*---*/ // MyFontRenderer3  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006328A0*/ MyFontRenderer3 *scalar_destructor(char);      /* auto */
/*006328C0*/ void destructor();  // ----------------------  /* auto */
/*006328D0*/ uint32_t *render_r5g5b5a1(uint32_t *, int32_t, int32_t);  /* auto */
/*00632BC0*/ uint32_t *render_r5g6b5(uint32_t *, int32_t, int32_t);  /* auto */
/*00632DC0*/ uint32_t *render_r4g4b4a4(uint32_t *, int32_t, int32_t);  /* auto */
/*006330B0*/ uint32_t *render_r8g8b8a8(uint32_t *, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFontRenderer3) == 0x4);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FONT_RENDERER3_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
