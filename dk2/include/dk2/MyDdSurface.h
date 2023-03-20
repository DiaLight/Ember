// -------------  id: constructor_005B5420  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DD_SURFACE_H  // ------------------------------  /* auto */
#define MY_DD_SURFACE_H  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDdSurface {  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ int32_t f4;  // ----------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
/*  C*/ int8_t gap_C[4];  // -----------------------------  /* auto */
/* 10*/ char _00;  // ------------------------------------  /* auto */
/* 11*/ char ff;  // -------------------------------------  /* auto */
/* 12*/ char _00_12;  // ---------------------------------  /* auto */
/* 13*/ char ff_13;  // ----------------------------------  /* auto */
/* 14*/ char _00_dwColorSpaceValue;  // ------------------  /* auto */
/* 15*/ char f15;  // ------------------------------------  /* auto */
/* 16*/ char f16;  // ------------------------------------  /* auto */
/* 17*/ char f17;  // ------------------------------------  /* auto */
/* 18*/ tagPALETTEENTRY *f18;  // ------------------------  /* auto */
/* 1C*/ int32_t flags;  // -------------------------------  /* auto */
/* 20*/ int32_t f20;  // ---------------------------------  /* auto */
/* 24*/ IDirectDrawSurface *dd_surface;  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDdSurface) == 0x28);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DD_SURFACE_H  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
