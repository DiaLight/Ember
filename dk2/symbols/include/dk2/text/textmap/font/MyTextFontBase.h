// -----------------  id: vtbl_0067BB50  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_FONT_BASE_H  // --------------------------  /* auto */
#define MY_TEXT_FONT_BASE_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/textmap/MySharedText.h>  // -----------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyTextFont;  // ---------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextFontBase : MySharedText {  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BB50*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedText  ---------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual void *v_scalar_destructor(char);  // = 00634180  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // MyTextFontBase  -------------------------------  /* auto */
/* 14*/ virtual int32_t v_readMBCharToFontIdx(char **);  // = 00634D60  /* auto */
/* 18*/ virtual __int16 v_sub_6335B0();  // = 00634D60  --  /* auto */
/* 1C*/ virtual Pos2i *v_getCharSize(Pos2i *, uint16_t);  // = 00634D60  /* auto */
/* 20*/ virtual __int16 v_getMaxHeight();  // = 00634D60    /* auto */
/* 24*/ virtual int32_t v_getFlags();  // = 00634D60  ----  /* auto */
/* 28*/ virtual int32_t v_probably_getFontType();  // = 00634D60  /* auto */
// -------------------------------------------------------  /* auto */
/*00634160*/ uint32_t *constructor();  // ----------------  /* auto */
/*00634180*/ void *scalar_destructor(char);  // ----------  /* auto */
/*006341A0*/ void destructor();  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextFontBase) == 0x8);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_FONT_BASE_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
