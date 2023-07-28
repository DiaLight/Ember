// -------------  id: constructor_00590BF0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CE_SURF_HANDLE_H  // --------------------------  /* auto */
#define MY_CE_SURF_HANDLE_H  // --------------------------  /* auto */
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
  struct MyCESurfHandle;  // -----------------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
  struct SurfaceHolder;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCESurfHandle {  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ CEngineSurface *cesurf;  // ----------------------  /* auto */
/*  4*/ SurfaceHolder *holder_parent;  // ----------------  /* auto */
/*  8*/ MyCESurfHandle *gnext;  // -----------------------  /* auto */
/*  C*/ MyCESurfHandle *gprev;  // -----------------------  /* auto */
/* 10*/ MyCESurfHandle *nextByHashList;  // --------------  /* auto */
/* 14*/ MyCESurfHandle *nextByHolder;  // ----------------  /* auto */
/* 18*/ MyCESurfHandle *nextByReduction;  // -------------  /* auto */
/* 1C*/ MyCESurfHandle *curReduction;  // ----------------  /* auto */
/* 20*/ int32_t f20;  // ---------------------------------  /* auto */
/* 24*/ uint32_t mapIdx;  // -----------------------------  /* auto */
/* 28*/ float padNorm_width;  // -------------------------  /* auto */
/* 2C*/ float padNorm_height;  // ------------------------  /* auto */
/* 30*/ float padNorm_x8;  // ----------------------------  /* auto */
/* 34*/ float padNorm_y8;  // ----------------------------  /* auto */
/* 38*/ int32_t flags;  // -------------------------------  /* auto */
/* 3C*/ uint32_t reductionLevel_andFlags;  // ------------  /* auto */
/* 40*/ uint8_t surfWidth8;  // --------------------------  /* auto */
/* 41*/ uint8_t surfHeight8;  // -------------------------  /* auto */
/* 42*/ char x8;  // -------------------------------------  /* auto */
/* 43*/ char y8;  // -------------------------------------  /* auto */
/* 44*/ int32_t f44;  // ---------------------------------  /* auto */
/* 48*/ int32_t sortTick;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00590BF0*/ MyCESurfHandle *constructor();  // ----------  /* auto */
/*00590C30*/ MyCESurfHandle *fun_590C30(MySurface *, char);  /* auto */
/*00590DA0*/ void createReduction();  // -----------------  /* auto */
/*00590EC0*/ void resolveSurface();  // ------------------  /* auto */
/*005911E0*/ MyCESurfHandle *loadPrescaled();  // --------  /* auto */
/*00591CF0*/ char setSurfaceHolder(SurfaceHolder *, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCESurfHandle) == 0x4C);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CE_SURF_HANDLE_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
