// -----------------  id: vtbl_0067B8C0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef FONT_OBJ_H  // -----------------------------------  /* auto */
#define FONT_OBJ_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
#include <dk2/PixelMask.h>  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct FontObj;  // ------------------------------------  /* auto */
  struct MyTextFont;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct FontObj {  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyTextFont *font;  // ----------------------------  /* auto */
/*  8*/ int32_t fontFlags;  // ---------------------------  /* auto */
/*  C*/ int32_t hasFlag2;  // ----------------------------  /* auto */
/* 10*/ int32_t hasFlag8;  // ----------------------------  /* auto */
/* 14*/ MySurface surf;  // ------------------------------  /* auto */
/* 3C*/ int32_t f3C;  // ---------------------------------  /* auto */
/* 40*/ int32_t f40;  // ---------------------------------  /* auto */
/* 44*/ PixelMask fontMask;  // --------------------------  /* auto */
/* 49*/ int8_t gap_49[3];  // ----------------------------  /* auto */
/* 4C*/ int32_t obj_4C;  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B8C0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // FontObj  --------------------------------------  /* auto */
/*  0*/ virtual const void *v_scalar_destructor(char);  // = 0062C290  /* auto */
// -------------------------------------------------------  /* auto */
/*0062C240*/ FontObj *constructor();  // -----------------  /* auto */
/*0062C2B0*/ int32_t destructor();  // -------------------  /* auto */
/*0062C2D0*/ FontObj *copy_constructor(FontObj *);  // ---  /* auto */
/*0062C340*/ FontObj *assign_constructor(FontObj *);  // -  /* auto */
/*0062C3C0*/ int32_t *setFontMask(int32_t *, PixelMask *);  /* auto */
/*0062C410*/ int32_t *checkFlag8(int32_t *);  // ---------  /* auto */
/*0062C440*/ int32_t *reset_f10(int32_t *);  // ----------  /* auto */
/*0062C470*/ int32_t *setFont(int32_t *, MyTextFont *);     /* auto */
/*0062C4D0*/ MyTextFont *getFont_addRef();  // -----------  /* auto */
/*0062C4F0*/ int32_t probably_getFontType();  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(FontObj) == 0x50);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //FONT_OBJ_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
