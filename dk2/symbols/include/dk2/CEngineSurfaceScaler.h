// ---------------  id: instance_00792D48  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_SURFACE_SCALER_H  // --------------------  /* auto */
#define C_ENGINE_SURFACE_SCALER_H  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineSurface;  // -----------------------------  /* auto */
  struct CEngineSurfaceBase;  // -------------------------  /* auto */
  struct CEngineSurfaceScaler;  // -----------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineSurfaceScaler {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char isScaled;  // -------------------------------  /* auto */
/*  1*/ CEngineSurface *orig_128x128_8a8r8g8b;  // -------  /* auto */
/*  5*/ CEngineSurface *scaled_128x128_8a8r8g8b;  // -----  /* auto */
/*  9*/ int32_t prescaleWigth;  // -----------------------  /* auto */
/*  D*/ int32_t prescaleHeight;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005914E0*/ void convertCopyFrom(MySurface *);  // ------  /* auto */
/*00591820*/ CEngineSurfaceBase *copyScaledWithType(char, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineSurfaceScaler) == 0x11);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_SURFACE_SCALER_H  ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
