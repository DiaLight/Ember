// ---------------  id: instance_00792D48  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef OBJ792_D48_H  // ---------------------------------  /* auto */
#define OBJ792_D48_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineSurface;  // -----------------------------  /* auto */
  struct CEngineSurfaceBase;  // -------------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
  struct Obj792D48;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct Obj792D48 {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char aBool;  // ----------------------------------  /* auto */
/*  1*/ CEngineSurface *cEngineSurf;  // -----------------  /* auto */
/*  5*/ int32_t *cEngineSurf_5;  // ----------------------  /* auto */
/*  9*/ int32_t prescaleWigth;  // -----------------------  /* auto */
/*  D*/ int32_t prescaleHeight;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005914E0*/ void convertCopyFrom(MySurface *);  // ------  /* auto */
/*00591820*/ CEngineSurfaceBase *createCEngineCompressedSurface(char, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(Obj792D48) == 0x11);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //OBJ792_D48_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
