// -----------------  id: vtbl_0066ECBC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_VERTICAL_SLIDER_H  // --------------------------  /* auto */
#define C_VERTICAL_SLIDER_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/AABB.h>  // --------------------------------  /* auto */
#include <dk2/CButton.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CVerticalSlider;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CVerticalSlider : CButton {  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 80*/ int32_t f80;  // ---------------------------------  /* auto */
/* 84*/ int32_t f84;  // ---------------------------------  /* auto */
/* 88*/ int32_t f88;  // ---------------------------------  /* auto */
/* 8C*/ int32_t f8C;  // ---------------------------------  /* auto */
/* 90*/ AABB f90;  // ------------------------------------  /* auto */
/* A0*/ int32_t fA0;  // ---------------------------------  /* auto */
/* A4*/ int32_t fA4;  // ---------------------------------  /* auto */
/* A8*/ int32_t fA8;  // ---------------------------------  /* auto */
/* AC*/ int32_t fAC;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066ECBC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CGadget  --------------------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(char);  // = 0052A300  /* auto */
/*---*/ // super CButton  --------------------------------  /* auto */
/*  4*/ // virtual int32_t v_render(int32_t, int32_t);  // = 00528800  /* auto */
/*  8*/ // virtual int32_t v_handleClick(CDefaultPlayerInterface *);  // = 00528B20  /* auto */
/*  C*/ // virtual int32_t v_configure(int32_t);  // = 00528EF0  /* auto */
/*---*/ // CVerticalSlider  ------------------------------  /* auto */
/* 10*/ virtual int32_t v_fun_528FB0(int32_t);  // = 00528FB0  /* auto */
/* 14*/ virtual int32_t v_fun_529000(int32_t);  // = 00529000  /* auto */
/* 18*/ virtual int32_t v_fun_529050();  // = 00529050  --  /* auto */
/* 1C*/ virtual int32_t v_fun_5290F0();  // = 005290F0  --  /* auto */
/* 20*/ virtual int32_t v_fun_529160();  // = 00529160  --  /* auto */
/* 24*/ virtual int32_t v_fun_52A1F0(int32_t);  // = 0052A1F0  /* auto */
/* 28*/ virtual int32_t v_f28();  // = 0052A230  ---------  /* auto */
/* 2C*/ virtual int32_t *v_fun_52A240(int32_t *);  // = 0052A240  /* auto */
/* 30*/ virtual char v_fun_52A270(char);  // = 0052A270  -  /* auto */
/* 34*/ virtual char v_fun_52A280();  // = 0052A280  -----  /* auto */
/* 38*/ virtual char v_fun_52A290();  // = 0052A290  -----  /* auto */
/* 3C*/ virtual char v_fun_52A2A0(char);  // = 0052A2A0  -  /* auto */
/* 40*/ virtual char v_fun_52A2B0();  // = 0052A2B0  -----  /* auto */
/* 44*/ virtual int32_t v_fun_52A2C0();  // = 0052A2C0  --  /* auto */
/* 48*/ virtual int32_t v_fun_52A2D0();  // = 0052A2D0  --  /* auto */
/* 4C*/ virtual int32_t v_fun_52A2E0(int32_t);  // = 0052A2E0  /* auto */
/* 50*/ virtual int32_t v_fun_52A2F0();  // = 0052A2F0  --  /* auto */
// -------------------------------------------------------  /* auto */
/*00528EF0*/ int32_t CSlider_fun_528EF0(int32_t);  // ----  /* auto */
/*00529160*/ int32_t fun_529160();  // -------------------  /* auto */
/*0052A1F0*/ int32_t CSlider_fun_52A1F0(int32_t);  // ----  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CVerticalSlider) == 0xB0);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_VERTICAL_SLIDER_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
