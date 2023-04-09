// -------------  id: constructor_0042F480  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MAT3X3F_H  // ------------------------------------  /* auto */
#define MAT3X3F_H  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct Mat3x3f;  // ------------------------------------  /* auto */
  struct Vec3f;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct Mat3x3f {  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ float m[3][3];  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0041C580*/ int32_t sub_41C580(int32_t, float);  // -----  /* auto */
/*0042F480*/ int32_t constructor(float, float, float, float, float, float, float, float, float);  /* auto */
/*00582140*/ int32_t *copy_constructor(Mat3x3f *);  // ---  /* auto */
/*00594CB0*/ Mat3x3f *sub_594CB0(Mat3x3f *, Mat3x3f *);     /* auto */
/*00594DB0*/ Vec3f *sub_594DB0(Vec3f *, Vec3f *);  // ----  /* auto */
/*00594E10*/ Vec3f *sub_594E10(Vec3f *, Vec3f *);  // ----  /* auto */
/*00594ED0*/ Mat3x3f *multiply(Mat3x3f *, float);  // ----  /* auto */
/*00594F30*/ Mat3x3f *sub_594F30(Mat3x3f *);  // ---------  /* auto */
/*00599260*/ int32_t *sub_599260(int32_t);  // -----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(Mat3x3f) == 0x24);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MAT3X3F_H  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */