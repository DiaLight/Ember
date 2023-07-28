// -----------------  id: vtbl_00671E80  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY16_BIT_TEXTURE_H  // ---------------------------  /* auto */
#define MY16_BIT_TEXTURE_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyNBitTexture.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct My16BitTexture : MyNBitTexture {  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00671E80*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyNBitTexture  --------------------------  /* auto */
/*  0*/ // virtual char v_f0(int32_t, int32_t, int32_t, uint8_t);  // = 005CA100  /* auto */
/*  4*/ // virtual int32_t v_f4(AABB *, int32_t, char);  // = 005C4D40  /* auto */
/*  8*/ // virtual int32_t v_f8(AABB *, int32_t, char);  // = 005C08E0  /* auto */
/*  C*/ // virtual char v_fC(AABB *, uint32_t, uint8_t);  // = 005CECB0  /* auto */
/* 10*/ // virtual int32_t v_f10(int32_t, int32_t, int32_t, int32_t, char);  // = 005C1400  /* auto */
/* 14*/ // virtual uint8_t *v_f14(int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005CB3C0  /* auto */
/* 18*/ // virtual char v_f18(int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005CDF40  /* auto */
/* 1C*/ // virtual int32_t v_f1C(int32_t, int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005CA330  /* auto */
/* 20*/ // virtual __int16 v_f20(int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005CAE20  /* auto */
/* 24*/ // virtual int32_t v_f24(int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005CB0E0  /* auto */
/* 28*/ // virtual int32_t v_f28(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char);  // = 005C83F0  /* auto */
/* 2C*/ // virtual int32_t v_f2C(uint32_t, int32_t);  // = 005CEBB0  /* auto */
/* 30*/ // virtual char v_f30(int32_t, int32_t, char *, int32_t, char);  // = 005CEFB0  /* auto */
/* 34*/ // virtual uint16_t v_f34(int32_t, int32_t, uint16_t *, int32_t, char);  // = 005CF380  /* auto */
/* 38*/ // virtual void v_f38(int32_t, int32_t, uint8_t **);  // = 005CF760  /* auto */
/* 3C*/ // virtual char **v_f3C(int32_t, char **, int32_t, uint8_t);  // = 005D0470  /* auto */
/*---*/ // My16BitTexture  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005CA330*/ void fun_5CA330(int32_t, int32_t, int32_t, int32_t, uint32_t, uint8_t);  /* auto */
/*005CDF40*/ MySurface *f18_5CDF40(int32_t, int32_t, int32_t, uint32_t, uint8_t);  /* auto */
/*005CEBB0*/ int32_t f2C_5CEBB0(uint32_t, int32_t);  // --  /* auto */
/*005CECB0*/ char fun_5CECB0(AABB *, uint32_t, uint8_t);    /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(My16BitTexture) == 0x4);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY16_BIT_TEXTURE_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
