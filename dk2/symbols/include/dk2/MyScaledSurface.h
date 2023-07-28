// -------------  id: constructor_0057C420  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_SCALED_SURFACE_H  // --------------------------  /* auto */
#define MY_SCALED_SURFACE_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/utils/Vec3f.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyCESurfHandle;  // -----------------------------  /* auto */
  struct MyCESurfScale;  // ------------------------------  /* auto */
  struct MyDblNamedSurface;  // --------------------------  /* auto */
  struct MyScaledSurface;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyScaledSurface {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint32_t idx;  // --------------------------------  /* auto */
/*  4*/ MyCESurfScale *scaledSurfArr;  // ----------------  /* auto */
/*  8*/ MyCESurfHandle *surfh;  // -----------------------  /* auto */
/*  C*/ uint32_t flags;  // ------------------------------  /* auto */
/* 10*/ uint32_t flags_10;  // ---------------------------  /* auto */
/* 14*/ uint8_t gap_14;  // ------------------------------  /* auto */
/* 15*/ uint32_t prob_height;  // ------------------------  /* auto */
/* 19*/ uint32_t prob_width;  // -------------------------  /* auto */
/* 1D*/ int32_t f1D;  // ---------------------------------  /* auto */
/* 21*/ Vec3f vec;  // -----------------------------------  /* auto */
/* 2D*/ MyScaledSurface *nextPrescaledItem;  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057C420*/ void constructor(MyDblNamedSurface *, int32_t);  /* auto */
/*0057C700*/ void resolve();  // -------------------------  /* auto */
/*00581B80*/ MyCESurfHandle *sub_581B80(int32_t, float, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyScaledSurface) == 0x31);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_SCALED_SURFACE_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
