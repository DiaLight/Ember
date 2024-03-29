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
/*  1*/ uint32_t idx;  // --------------------------------  /* auto */
/*  5*/ uint8_t f5;  // ----------------------------------  /* auto */
/*  6*/ void *actionFun;  // -----------------------------  /* auto */
/*  A*/ void *fA;  // ------------------------------------  /* auto */
/*  E*/ uint32_t fE;  // ---------------------------------  /* auto */
/* 12*/ uint32_t f12;  // --------------------------------  /* auto */
/* 16*/ uint32_t f16;  // --------------------------------  /* auto */
/* 1A*/ uint32_t _actionId;  // --------------------------  /* auto */
/* 1E*/ uint16_t posFlags;  // ---------------------------  /* auto */
/* 20*/ __int16 x;  // -----------------------------------  /* auto */
/* 22*/ __int16 y;  // -----------------------------------  /* auto */
/* 24*/ uint16_t w;  // ----------------------------------  /* auto */
/* 26*/ uint16_t h;  // ----------------------------------  /* auto */
/* 28*/ uint16_t x_offs;  // -----------------------------  /* auto */
/* 2A*/ uint16_t y_offs;  // -----------------------------  /* auto */
/* 2C*/ uint16_t width;  // ------------------------------  /* auto */
/* 2E*/ uint16_t height;  // -----------------------------  /* auto */
/* 30*/ uint32_t f30;  // --------------------------------  /* auto */
/* 34*/ void *f34;  // -----------------------------------  /* auto */
/* 38*/ void *renderFun;  // -----------------------------  /* auto */
/* 3C*/ void *f3C;  // -----------------------------------  /* auto */
/* 40*/ uint32_t textId;  // -----------------------------  /* auto */
/* 44*/ uint32_t *p_idxLow;  // --------------------------  /* auto */
/* 48*/ uint32_t *idxHigh;  // ---------------------------  /* auto */
/* 4C*/ uint32_t nameIdx;  // ----------------------------  /* auto */
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
