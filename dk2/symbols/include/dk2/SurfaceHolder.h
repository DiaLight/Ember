// ---------------  id: call_new_00591E8D  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef SURFACE_HOLDER_H  // -----------------------------  /* auto */
#define SURFACE_HOLDER_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineDDSurface;  // ---------------------------  /* auto */
  struct MyCESurfHandle;  // -----------------------------  /* auto */
  struct SceneObject30;  // ------------------------------  /* auto */
  struct SurfHashListItem;  // ---------------------------  /* auto */
  struct SurfaceHolder;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct SurfaceHolder {  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ SceneObject30 *SceneObject30;  // ----------------  /* auto */
/*  4*/ MyCESurfHandle *surfh_first;  // -----------------  /* auto */
/*  8*/ int32_t a3;  // ----------------------------------  /* auto */
/*  C*/ CEngineDDSurface *ddsurf;  // --------------------  /* auto */
/* 10*/ SurfaceHolder *prev;  // -------------------------  /* auto */
/* 14*/ SurfaceHolder *next;  // -------------------------  /* auto */
/* 18*/ SurfHashListItem *hashItem_link;  // -------------  /* auto */
/* 1C*/ float _1divSize;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00591ED0*/ int32_t calcWeight();  // -------------------  /* auto */
/*00591F30*/ void fun_591F30();  // ----------------------  /* auto */
/*00591FF0*/ void drawSpecial_128x128(float, float);  // -  /* auto */
/*00592380*/ int32_t drawSpecial_128x128_mgsr(float, float);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(SurfaceHolder) == 0x20);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //SURFACE_HOLDER_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
