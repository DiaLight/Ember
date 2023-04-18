// -----------------  id: ptr_0079D048  ------------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_N_BIT_TEXTURE_H  // ---------------------------  /* auto */
#define MY_N_BIT_TEXTURE_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct MyNBitTexture;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyNBitTexture {  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*---*/ // MyNBitTexture  --------------------------------  /* auto */
/*  0*/ virtual char v_f0(int32_t, int32_t, int32_t, int8_t);  /* auto */
/*  4*/ virtual int32_t v_f4(AABB *, int32_t, char);  // -  /* auto */
/*  8*/ virtual int32_t v_f8(AABB *, int32_t, char);  // -  /* auto */
/*  C*/ virtual char v_fC(AABB *, int32_t, int8_t);  // --  /* auto */
/* 10*/ virtual int32_t v_f10(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/* 14*/ virtual int8_t *v_f14(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/* 18*/ virtual char v_f18(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/* 1C*/ virtual int32_t v_f1C(int32_t, int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/* 20*/ virtual __int16 v_f20(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/* 24*/ virtual int32_t v_f24(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/* 28*/ virtual int32_t v_f28(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/* 2C*/ virtual int32_t v_f2C(int32_t, int32_t);  // -----  /* auto */
/* 30*/ virtual char v_f30(int32_t, int32_t, const char *, int32_t, char);  /* auto */
/* 34*/ virtual int16_t v_f34(int32_t, int32_t, int16_t *, int32_t, char);  /* auto */
/* 38*/ virtual void v_f38(int32_t, int32_t, int8_t **);    /* auto */
/* 3C*/ virtual const char **v_f3C(int32_t, const char **, int32_t, int8_t);  /* auto */
// -------------------------------------------------------  /* auto */
/*005C08E0*/ int32_t f8_5C08E0(AABB *, int32_t, char);      /* auto */
/*005C1400*/ int8_t f10_5C1400(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005C4D40*/ char f4_5C4D40(AABB *, int32_t, char);  // --  /* auto */
/*005C83F0*/ int32_t f28_5C83F0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyNBitTexture) == 0x4);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_N_BIT_TEXTURE_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
