// -------------  id: constructor_00590B40  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_SURFACE_WRAPPER_H  // -------------------------  /* auto */
#define MY_SURFACE_WRAPPER_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MySurfaceWrapper;  // ---------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MySurfaceWrapper {  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t flags;  // -------------------------------  /* auto */
/*  4*/ int32_t prescaleWigth;  // -----------------------  /* auto */
/*  8*/ int32_t prescaleHeight;  // ----------------------  /* auto */
/*  C*/ const char *name;  // ----------------------------  /* auto */
/* 10*/ MySurface surf;  // ------------------------------  /* auto */
/* 38*/ int32_t texFlags;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00590B40*/ MySurfaceWrapper *constructor(int32_t, const char *, int32_t);  /* auto */
/*00590B70*/ MySurfaceWrapper *sub_590B70(int32_t, int32_t, MySurface *);  /* auto */
/*00590BC0*/ MySurfaceWrapper *withData(int32_t, const char *, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MySurfaceWrapper) == 0x3C);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_SURFACE_WRAPPER_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
