// -------------  id: constructor_0057C2D0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DBL_NAMED_SURFACE_H  // -----------------------  /* auto */
#define MY_DBL_NAMED_SURFACE_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyDblNamedSurface;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDblNamedSurface {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t blWidth;  // -----------------------------  /* auto */
/*  4*/ int32_t blHeight;  // ----------------------------  /* auto */
/*  8*/ const char *curName;  // -------------------------  /* auto */
/*  C*/ int32_t prevName;  // ----------------------------  /* auto */
/* 10*/ const char *name;  // ----------------------------  /* auto */
/* 14*/ const char **pNames;  // -------------------------  /* auto */
/* 18*/ int32_t init1__height;  // -----------------------  /* auto */
/* 1C*/ MySurface surf;  // ------------------------------  /* auto */
/* 44*/ int32_t flags;  // -------------------------------  /* auto */
/* 48*/ int32_t init1__width;  // ------------------------  /* auto */
/* 4C*/ int32_t init0;  // -------------------------------  /* auto */
/* 50*/ int32_t initx;  // -------------------------------  /* auto */
/* 54*/ int32_t inity;  // -------------------------------  /* auto */
/* 58*/ int32_t initz;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057C2D0*/ MyDblNamedSurface *constructor(const char *, const char *, int32_t, int32_t, int32_t);  /* auto */
/*0057C340*/ MyDblNamedSurface *constructor_0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0057C3B0*/ MyDblNamedSurface *fun_57C3B0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDblNamedSurface) == 0x5C);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DBL_NAMED_SURFACE_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
