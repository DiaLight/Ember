// -----------------  id: vtbl_0067B9B0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_UNI_TO_MB_H  // --------------------------  /* auto */
#define MY_TEXT_UNI_TO_MB_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyTextBase.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyTextUniToMB;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextUniToMB : MyTextBase {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B9B0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyTextBase  -----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual const void *v_scalar_destructor(char);  // = 0062E090  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // MyTextUniToMB  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062E050*/ MyTextUniToMB *constructor(int32_t);  // ----  /* auto */
/*0062E0E0*/ int16_t convertChar(int32_t);  // -----------  /* auto */
/*0062E0F0*/ int16_t sub_62E0F0(int16_t);  // ------------  /* auto */
/*0062E1F0*/ int32_t *convert(int32_t *, int8_t *, const wchar_t *, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextUniToMB) == 0xC);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_UNI_TO_MB_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
