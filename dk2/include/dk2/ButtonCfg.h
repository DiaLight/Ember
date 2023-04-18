// -----------------  id: use_00528300  ------------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef BUTTON_CFG_H  // ---------------------------------  /* auto */
#define BUTTON_CFG_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct ButtonCfg {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char kind;  // -----------------------------------  /* auto */
/*  1*/ int32_t idx;  // ---------------------------------  /* auto */
/*  5*/ int8_t f5;  // -----------------------------------  /* auto */
/*  6*/ const void *actionFun;  // -----------------------  /* auto */
/*  A*/ const void *fA;  // ------------------------------  /* auto */
/*  E*/ int32_t fE;  // ----------------------------------  /* auto */
/* 12*/ int32_t f12;  // ---------------------------------  /* auto */
/* 16*/ int32_t f16;  // ---------------------------------  /* auto */
/* 1A*/ int32_t _actionId;  // ---------------------------  /* auto */
/* 1E*/ int16_t posFlags;  // ----------------------------  /* auto */
/* 20*/ __int16 x;  // -----------------------------------  /* auto */
/* 22*/ __int16 y;  // -----------------------------------  /* auto */
/* 24*/ int16_t w;  // -----------------------------------  /* auto */
/* 26*/ int16_t h;  // -----------------------------------  /* auto */
/* 28*/ int16_t x_offs;  // ------------------------------  /* auto */
/* 2A*/ int16_t y_offs;  // ------------------------------  /* auto */
/* 2C*/ int16_t width;  // -------------------------------  /* auto */
/* 2E*/ int16_t height;  // ------------------------------  /* auto */
/* 30*/ int32_t f30;  // ---------------------------------  /* auto */
/* 34*/ const void *f34;  // -----------------------------  /* auto */
/* 38*/ const void *renderFun;  // -----------------------  /* auto */
/* 3C*/ const void *f3C;  // -----------------------------  /* auto */
/* 40*/ int32_t textId;  // ------------------------------  /* auto */
/* 44*/ int32_t *p_idxLow;  // ---------------------------  /* auto */
/* 48*/ int32_t *idxHigh;  // ----------------------------  /* auto */
/* 4C*/ int32_t nameIdx;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(ButtonCfg) == 0x50);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //BUTTON_CFG_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
