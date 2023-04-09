// -------------  id: instance_arr_0076F358  -------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef RENDER_DATA_H  // --------------------------------  /* auto */
#define RENDER_DATA_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/Vec3f.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct RenderData {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ Vec3f vec;  // -----------------------------------  /* auto */
/*  C*/ float fC;  // ------------------------------------  /* auto */
/* 10*/ float f10;  // -----------------------------------  /* auto */
/* 14*/ float f14;  // -----------------------------------  /* auto */
/* 18*/ float f18;  // -----------------------------------  /* auto */
/* 1C*/ int32_t flags;  // -------------------------------  /* auto */
/* 20*/ int32_t vtxIdx;  // ------------------------------  /* auto */
/* 24*/ int32_t f24;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(RenderData) == 0x28);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //RENDER_DATA_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */