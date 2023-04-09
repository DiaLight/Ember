// --------------  id: construct_0057E44D  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef SPRS_ANIM_HEADER_H  // ---------------------------  /* auto */
#define SPRS_ANIM_HEADER_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AnimVertEx;  // ---------------------------------  /* auto */
  struct Triangle;  // -----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct SprsAnimHeader {  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t mmFactor;  // ----------------------------  /* auto */
/*  4*/ char lod_list[16];  // ---------------------------  /* auto */
/* 14*/ Triangle *plod_list[12];  // ---------------------  /* auto */
/* 44*/ char triangleCount_list[16];  // -----------------  /* auto */
/* 54*/ AnimVertEx *AnimVertEx_base;  // -----------------  /* auto */
/* 58*/ __int16 MyScaledSurface_idx;  // -----------------  /* auto */
/* 5A*/ __int16 numVertsEx;  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(SprsAnimHeader) == 0x5C);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //SPRS_ANIM_HEADER_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */