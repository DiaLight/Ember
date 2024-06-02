// -----------------  id: use_0052CED0  ------------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef WINDOW_CFG_H  // ---------------------------------  /* auto */
#define WINDOW_CFG_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct ButtonCfg;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct WindowCfg {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t idx;  // ---------------------------------  /* auto */
/*  4*/ uint32_t isCurrent;  // --------------------------  /* auto */
/*  8*/ uint16_t f8;  // ---------------------------------  /* auto */
/*  A*/ uint16_t x;  // ----------------------------------  /* auto */
/*  C*/ uint16_t y;  // ----------------------------------  /* auto */
/*  E*/ uint16_t w;  // ----------------------------------  /* auto */
/* 10*/ uint16_t h;  // ----------------------------------  /* auto */
/* 12*/ uint16_t x_offs;  // -----------------------------  /* auto */
/* 14*/ uint16_t y_offs;  // -----------------------------  /* auto */
/* 16*/ uint16_t width;  // ------------------------------  /* auto */
/* 18*/ uint16_t height;  // -----------------------------  /* auto */
/* 1A*/ uint32_t f1A;  // --------------------------------  /* auto */
/* 1E*/ void *f1E;  // -----------------------------------  /* auto */
/* 22*/ void *fun;  // -----------------------------------  /* auto */
/* 26*/ uint32_t f26;  // --------------------------------  /* auto */
/* 2A*/ uint32_t f2A;  // --------------------------------  /* auto */
/* 2E*/ uint32_t f2E;  // --------------------------------  /* auto */
/* 32*/ uint32_t f32;  // --------------------------------  /* auto */
/* 36*/ uint32_t f36;  // --------------------------------  /* auto */
/* 3A*/ uint32_t f3A;  // --------------------------------  /* auto */
/* 3E*/ ButtonCfg *pButtonCfg_list;  // ------------------  /* auto */
/* 42*/ __int16 f42;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(WindowCfg) == 0x44);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //WINDOW_CFG_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */