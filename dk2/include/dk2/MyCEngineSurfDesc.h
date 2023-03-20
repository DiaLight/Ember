// -------------  id: constructor_00590360  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_C_ENGINE_SURF_DESC_H  // ----------------------  /* auto */
#define MY_C_ENGINE_SURF_DESC_H  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MySurfDesc.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyCEngineSurfDesc;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCEngineSurfDesc {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ int32_t _bitsiz;  // -----------------------------  /* auto */
/*  8*/ int32_t bytesize;  // ----------------------------  /* auto */
/*  C*/ int32_t rbitcount;  // ---------------------------  /* auto */
/* 10*/ int32_t gbitcount;  // ---------------------------  /* auto */
/* 14*/ int32_t bbitcount;  // ---------------------------  /* auto */
/* 18*/ int32_t abitcount;  // ---------------------------  /* auto */
/* 1C*/ int32_t _rmask;  // ------------------------------  /* auto */
/* 20*/ int32_t _gmask;  // ------------------------------  /* auto */
/* 24*/ int32_t _bmask;  // ------------------------------  /* auto */
/* 28*/ int32_t _amask;  // ------------------------------  /* auto */
/* 2C*/ char f2C;  // ------------------------------------  /* auto */
/* 2D*/ MySurfDesc desc;  // -----------------------------  /* auto */
/* 45*/ DDPIXELFORMAT ddPixFmt;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00590260*/ int32_t fun_590260(DDPIXELFORMAT *);  // ----  /* auto */
/*00590360*/ int32_t constructor(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCEngineSurfDesc) == 0x65);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_C_ENGINE_SURF_DESC_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
