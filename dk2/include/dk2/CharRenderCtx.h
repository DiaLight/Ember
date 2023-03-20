// --------------  id: construct_00633BB2  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef CHAR_RENDER_CTX_H  // ----------------------------  /* auto */
#define CHAR_RENDER_CTX_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct FontObj;  // ------------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CharRenderCtx {  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ Pos2i *pos;  // ----------------------------------  /* auto */
/*  4*/ int32_t buf;  // ---------------------------------  /* auto */
/*  8*/ int32_t half_width;  // --------------------------  /* auto */
/*  C*/ AABB *area;  // ----------------------------------  /* auto */
/* 10*/ FontObj *fontObj;  // ----------------------------  /* auto */
/* 14*/ char width;  // ----------------------------------  /* auto */
/* 15*/ int8_t gap_15[3];  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CharRenderCtx) == 0x18);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //CHAR_RENDER_CTX_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
