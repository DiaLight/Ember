// -----------------  id: vtbl_0067B998  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_FORMAT_W_CHAR_H  // ----------------------  /* auto */
#define MY_TEXT_FORMAT_W_CHAR_H  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/MyTextFormatBase.h>  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyMbToUniMap;  // -------------------------------  /* auto */
  struct MyTextFormatWChar;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextFormatWChar : MyTextFormatBase {  // --------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ wchar_t *buf;  // --------------------------------  /* auto */
/*  8*/ wchar_t *bufEnd;  // -----------------------------  /* auto */
/*  C*/ MyMbToUniMap *textBase;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B998*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyTextFormatBase  -----------------------  /* auto */
/*  0*/ // virtual uint8_t *v_destructor();  // = 00630530  /* auto */
/*  4*/ // virtual __int16 v_printCh_map_630200_630430(__int16);  // = 00630430  /* auto */
/*  8*/ // virtual char v_sub_6301A0_630340(uint8_t *, int32_t);  // = 00630340  /* auto */
/*  C*/ // virtual void v_printCh_6302B0_630510(int32_t);  // = 00630510  /* auto */
/* 10*/ // virtual __int16 v_print_630230_6304A0(uint16_t *, int32_t);  // = 006304A0  /* auto */
/* 14*/ // virtual void *v_scalar_destructor(char);  // = 0062DB30  /* auto */
/*---*/ // MyTextFormatWChar  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062DB30*/ void *scalar_destructor(char);  // ----------  /* auto */
/*00630310*/ MyTextFormatWChar *constructor(wchar_t *, int32_t, MyMbToUniMap *);  /* auto */
/*00630340*/ int32_t fun_630340(uint8_t *, int32_t);  // -  /* auto */
/*00630430*/ void printCh_map(__int16);  // --------------  /* auto */
/*006304A0*/ __int16 print(wchar_t *, int32_t);  // ------  /* auto */
/*00630510*/ wchar_t *printCh(__int16);  // --------------  /* auto */
/*00630530*/ wchar_t *destructor();  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextFormatWChar) == 0x10);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_FORMAT_W_CHAR_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
