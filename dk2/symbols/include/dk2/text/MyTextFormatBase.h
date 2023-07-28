// --------------  id: call_meth_0062D749  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_FORMAT_BASE_H  // ------------------------  /* auto */
#define MY_TEXT_FORMAT_BASE_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextFormatBase {  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*---*/ // MyTextFormatBase  -----------------------------  /* auto */
/*  0*/ virtual uint8_t *v_destructor();  // -------------  /* auto */
/*  4*/ virtual __int16 v_printCh_map_630200_630430(__int16);  /* auto */
/*  8*/ virtual char v_sub_6301A0_630340(uint8_t *, int32_t);  /* auto */
/*  C*/ virtual void v_printCh_6302B0_630510(int32_t);      /* auto */
/* 10*/ virtual __int16 v_print_630230_6304A0(uint16_t *, int32_t);  /* auto */
/* 14*/ virtual void *v_scalar_destructor(char);  // -----  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextFormatBase) == 0x4);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_FORMAT_BASE_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
