// -----------------  id: vtbl_00671F00  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY32_BIT_TEXTURE_H  // ---------------------------  /* auto */
#define MY32_BIT_TEXTURE_H  // ---------------------------  /* auto */
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
  struct My32BitTexture;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct My32BitTexture : MyNBitTexture {  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00671F00*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyNBitTexture  --------------------------  /* auto */
/*  0*/ // virtual char v_f0(int32_t, int32_t, int32_t, uint8_t);  // = 005C4B50  /* auto */
/*  4*/ // virtual int32_t v_f4(AABB *, int32_t, char);  // = 005C4D40  /* auto */
/*  8*/ // virtual int32_t v_f8(AABB *, int32_t, char);  // = 005C08E0  /* auto */
/*  C*/ // virtual char v_fC(AABB *, uint32_t, uint8_t);  // = 005C8810  /* auto */
/* 10*/ // virtual int32_t v_f10(int32_t, int32_t, int32_t, int32_t, char);  // = 005C1400  /* auto */
/* 14*/ // virtual uint8_t *v_f14(int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005C57F0  /* auto */
/* 18*/ // virtual char v_f18(int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005C7AB0  /* auto */
/* 1C*/ // virtual int32_t v_f1C(int32_t, int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005C4D90  /* auto */
/* 20*/ // virtual __int16 v_f20(int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005C53E0  /* auto */
/* 24*/ // virtual int32_t v_f24(int32_t, int32_t, int32_t, int32_t, uint8_t);  // = 005C55E0  /* auto */
/* 28*/ // virtual int32_t v_f28(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char);  // = 005C83F0  /* auto */
/* 2C*/ // virtual int32_t v_f2C(uint32_t, int32_t);  // = 005C8770  /* auto */
/* 30*/ // virtual char v_f30(int32_t, int32_t, char *, int32_t, char);  // = 005C8A40  /* auto */
/* 34*/ // virtual uint16_t v_f34(int32_t, int32_t, uint16_t *, int32_t, char);  // = 005C8D10  /* auto */
/* 38*/ // virtual void v_f38(int32_t, int32_t, uint8_t **);  // = 005C8FC0  /* auto */
/* 3C*/ // virtual char **v_f3C(int32_t, char **, int32_t, uint8_t);  // = 005C9930  /* auto */
/*---*/ // My32BitTexture  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005C4D90*/ void fun_5C4D90(int32_t, int32_t, int32_t, int32_t, int32_t, uint8_t);  /* auto */
/*005C57F0*/ uint8_t *f14_5C57F0(int32_t, int32_t, int32_t, int32_t, uint8_t);  /* auto */
/*005C7AB0*/ int32_t f18_5C7AB0(int32_t, int32_t, int32_t, __int64);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(My32BitTexture) == 0x4);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY32_BIT_TEXTURE_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
