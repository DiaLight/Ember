// -----------------  id: vtbl_00671EC0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY24_BIT_TEXTURE_H  // ---------------------------  /* auto */
#define MY24_BIT_TEXTURE_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyNBitTexture.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct My24BitTexture;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct My24BitTexture : MyNBitTexture {  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00671EC0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyNBitTexture  --------------------------  /* auto */
/*  0*/ // virtual char v_f0(int32_t, int32_t, int32_t, int8_t);  // = 005C0740  /* auto */
/*  4*/ // virtual int32_t v_f4(AABB *, int32_t, char);  // = 005C4D40  /* auto */
/*  8*/ // virtual int32_t v_f8(AABB *, int32_t, char);  // = 005C08E0  /* auto */
/*  C*/ // virtual char v_fC(AABB *, int32_t, int8_t);  // = 005C3650  /* auto */
/* 10*/ // virtual int32_t v_f10(int32_t, int32_t, int32_t, int32_t, char);  // = 005C1400  /* auto */
/* 14*/ // virtual int8_t *v_f14(int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005C1460  /* auto */
/* 18*/ // virtual char v_f18(int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005C2FA0  /* auto */
/* 1C*/ // virtual int32_t v_f1C(int32_t, int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005C09A0  /* auto */
/* 20*/ // virtual __int16 v_f20(int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005C1080  /* auto */
/* 24*/ // virtual int32_t v_f24(int32_t, int32_t, int32_t, int32_t, int8_t);  // = 005C1230  /* auto */
/* 28*/ // virtual int32_t v_f28(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char);  // = 005C83F0  /* auto */
/* 2C*/ // virtual int32_t v_f2C(int32_t, int32_t);  // = 005C35D0  /* auto */
/* 30*/ // virtual char v_f30(int32_t, int32_t, const char *, int32_t, char);  // = 005C3800  /* auto */
/* 34*/ // virtual int16_t v_f34(int32_t, int32_t, int16_t *, int32_t, char);  // = 005C3A00  /* auto */
/* 38*/ // virtual void v_f38(int32_t, int32_t, int8_t **);  // = 005C3C00  /* auto */
/* 3C*/ // virtual const char **v_f3C(int32_t, const char **, int32_t, int8_t);  // = 005C4490  /* auto */
/*---*/ // My24BitTexture  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005C1460*/ int8_t *f14_5C1460(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(My24BitTexture) == 0x4);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY24_BIT_TEXTURE_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
