// -----------------  id: vtbl_0067B9C8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_MB_TO_UNI_H  // --------------------------  /* auto */
#define MY_TEXT_MB_TO_UNI_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyTextBase.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyTextMBToUni;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextMBToUni : MyTextBase {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ char maxChr;  // ---------------------------------  /* auto */
/*  9*/ int8_t gap_9[1];  // -----------------------------  /* auto */
/*  A*/ __int16 fA;  // ----------------------------------  /* auto */
/*  C*/ int32_t fC;  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B9C8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyTextBase  -----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual void *v_scalar_destructor(char);  // = 0062E3F0  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // MyTextMBToUni  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062E3A0*/ MyTextMBToUni *constructor(char, __int16, int32_t);  /* auto */
/*0062E440*/ int32_t *convert(int32_t *, wchar_t *, int8_t *, __int16);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextMBToUni) == 0x10);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_MB_TO_UNI_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
