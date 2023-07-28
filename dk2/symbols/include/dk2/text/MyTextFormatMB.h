// -----------------  id: vtbl_0067B980  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_FORMAT_MB_H  // --------------------------  /* auto */
#define MY_TEXT_FORMAT_MB_H  // --------------------------  /* auto */
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
  struct MyTextFormatMB;  // -----------------------------  /* auto */
  struct MyUniToMbMap;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextFormatMB : MyTextFormatBase {  // -----------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ char *buf;  // -----------------------------------  /* auto */
/*  8*/ int32_t bufEnd;  // ------------------------------  /* auto */
/*  C*/ MyUniToMbMap *textBase;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B980*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyTextFormatBase  -----------------------  /* auto */
/*  0*/ // virtual uint8_t *v_destructor();  // = 006302E0  /* auto */
/*  4*/ // virtual __int16 v_printCh_map_630200_630430(__int16);  // = 00630200  /* auto */
/*  8*/ // virtual char v_sub_6301A0_630340(uint8_t *, int32_t);  // = 006301A0  /* auto */
/*  C*/ // virtual void v_printCh_6302B0_630510(int32_t);  // = 006302B0  /* auto */
/* 10*/ // virtual __int16 v_print_630230_6304A0(uint16_t *, int32_t);  // = 00630230  /* auto */
/* 14*/ // virtual void *v_scalar_destructor(char);  // = 0062DAF0  /* auto */
/*---*/ // MyTextFormatMB  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062DAF0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*00630170*/ MyTextFormatMB *constructor(int32_t, int32_t, MyUniToMbMap *);  /* auto */
/*006301A0*/ char fun_6301A0(uint8_t *, int32_t);  // ----  /* auto */
/*00630200*/ uint16_t printCh_map(__int16);  // ----------  /* auto */
/*00630230*/ __int16 print(wchar_t *, int32_t);  // ------  /* auto */
/*006302B0*/ void printCh(int32_t);  // ------------------  /* auto */
/*006302E0*/ uint8_t *destructor();  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextFormatMB) == 0x10);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_FORMAT_MB_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
