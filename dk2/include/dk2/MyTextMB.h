// -----------------  id: vtbl_0067BAE0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_MB_H  // ---------------------------------  /* auto */
#define MY_TEXT_MB_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyTextBase.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextMB : MyTextBase {  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ char f8;  // -------------------------------------  /* auto */
/*  9*/ int8_t gap_9;  // --------------------------------  /* auto */
/*  A*/ __int16 fA;  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BAE0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyTextBase  -----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual void *v_scalar_destructor(char);  // = 00633480  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // MyTextMB  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextMB) == 0xC);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_MB_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
