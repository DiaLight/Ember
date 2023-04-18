// ---------------  id: instance_00765AF8  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_ENTRY_BUF__MY_SCALED_SURFACE_H  // ------------  /* auto */
#define MY_ENTRY_BUF__MY_SCALED_SURFACE_H  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyEntryBuf_MyScaledSurface;  // -----------------  /* auto */
  struct MyScaledSurface;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyEntryBuf_MyScaledSurface {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t expandCount;  // -------------------------  /* auto */
/*  4*/ int32_t maxCount;  // ----------------------------  /* auto */
/*  8*/ MyScaledSurface **buf;  // -----------------------  /* auto */
/*  C*/ int32_t count;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057CB70*/ const void *resize(int32_t);  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyEntryBuf_MyScaledSurface) == 0x10);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_ENTRY_BUF__MY_SCALED_SURFACE_H  --------------  /* auto */
// -------------------------------------------------------  /* auto */
