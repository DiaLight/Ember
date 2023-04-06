// -----------------  id: vtbl_00671E40  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY8_BIT_TEXTURE_H  // ----------------------------  /* auto */
#define MY8_BIT_TEXTURE_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyNBitTexture.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct My8BitTexture;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct My8BitTexture : MyNBitTexture {  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00671E40*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyNBitTexture  --------------------------  /* auto */
/*  0*/ // virtual char v_f0(int32_t, int32_t, int32_t, int8_t);  // = 005BD260  /* auto */
/*  4*/ // virtual int32_t v_f4(AABB *, int32_t, char);  // = 005C4D40  /* auto */
/*  8*/ // virtual int32_t v_f8(AABB *, int32_t, char);  // = 005C08E0  /* auto */
/*  C*/ // virtual char v_fC(AABB *, int32_t, int8_t);  // = 005C0270  /* auto */
/* 10*/ // virtual int32_t v_f10(int32_t, int32_t, int32_t, int32_t, char);  // = 005C1400  /* auto */
/* 14*/ // virtual int8_t *v_f14(int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005BDD50  /* auto */
/* 18*/ // virtual char v_f18(int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005BF820  /* auto */
/* 1C*/ // virtual int32_t v_f1C(int32_t, int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005BD400  /* auto */
/* 20*/ // virtual __int16 v_f20(int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005BDA00  /* auto */
/* 24*/ // virtual int32_t v_f24(int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005BDBB0  /* auto */
/* 28*/ // virtual int32_t v_f28(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char);  // = 005C83F0  /* auto */
/* 2C*/ // virtual int32_t v_f2C(int32_t, int32_t);  // = 005C01D0  /* auto */
/* 30*/ // virtual char v_f30(int32_t, int32_t, const char *, int32_t, char);  // = 005C0440  /* auto */
/* 34*/ // virtual int16_t v_f34(int32_t, int32_t, int16_t *, int32_t, char);  // = 005C05C0  /* auto */
/* 38*/ // virtual void v_f38(int32_t, int32_t, int8_t **);  // = 005BC950  /* auto */
/* 3C*/ // virtual const char **v_f3C(int32_t, const char **, int32_t, int8_t);  // = 005BC9E0  /* auto */
/*---*/ // My8BitTexture  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005BC950*/ void f38_5BC950(int32_t, int32_t, int8_t **);  /* auto */
/*005BC9E0*/ const char **fun_5BC9E0(int32_t, const char **, int32_t, int8_t);  /* auto */
/*005BD260*/ char fun_5BD260(int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005BD400*/ void fun_5BD400(int32_t, int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005BDA00*/ __int16 fun_5BDA00(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005BDBB0*/ int32_t fun_5BDBB0(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005BDD50*/ int8_t *f14_5BDD50(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005BF820*/ char f18_5BF820(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005C01D0*/ int32_t f2C_5C01D0(int32_t, char);  // ------  /* auto */
/*005C0270*/ char fun_5C0270(AABB *, int32_t, int8_t);      /* auto */
/*005C0440*/ char fun_5C0440(int32_t, int32_t, const char *, int32_t, char);  /* auto */
/*005C05C0*/ int16_t fun_5C05C0(int32_t, int32_t, int16_t *, int32_t, char);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(My8BitTexture) == 0x4);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY8_BIT_TEXTURE_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
