// -------------  id: constructor_0057BCB0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef OBJ57_BCB0_H  // ---------------------------------  /* auto */
#define OBJ57_BCB0_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/Obj57BCB0_item.h>  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct Obj57BCB0;  // ----------------------------------  /* auto */
  struct Vec3f;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct Obj57BCB0 {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint32_t count;  // ------------------------------  /* auto */
/*  4*/ Obj57BCB0_item items[24];  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057BCB0*/ Obj57BCB0 *constructor(uint32_t *, int32_t);   /* auto */
/*0057BF00*/ float *sub_57BF00(float *, float *, float *);  /* auto */
/*0057C080*/ void sub_57C080(Vec3f *, Vec3f *);  // ------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(Obj57BCB0) == 0x3C4);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //OBJ57_BCB0_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
