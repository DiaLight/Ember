// -------------------  id: vecf_xyz  --------------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef VEC3F_H  // --------------------------------------  /* auto */
#define VEC3F_H  // --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct Vec3f;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct Vec3f {  // ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ float x;  // -------------------------------------  /* auto */
/*  4*/ float y;  // -------------------------------------  /* auto */
/*  8*/ float z;  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0041C440*/ void copy(Vec3f *);  // ---------------------  /* auto */
/*0041C4C0*/ Vec3f *substractAssign(Vec3f *, Vec3f *);      /* auto */
/*0044E7B0*/ Vec3f *sumVec3f(Vec3f *, Vec3f *);  // ------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(Vec3f) == 0xC);  // -----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //VEC3F_H  ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */