// -----------------  id: vtbl_00672500  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef OBJ672500_H  // ----------------------------------  /* auto */
#define OBJ672500_H  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MySurfDesc;  // ---------------------------------  /* auto */
  struct Obj672500;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct Obj672500 {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t _rMask;  // ------------------------------  /* auto */
/*  8*/ int32_t _gMask;  // ------------------------------  /* auto */
/*  C*/ int32_t _bMask;  // ------------------------------  /* auto */
/* 10*/ int32_t f10;  // ---------------------------------  /* auto */
/* 14*/ int32_t f14;  // ---------------------------------  /* auto */
/* 18*/ int32_t f18;  // ---------------------------------  /* auto */
/* 1C*/ int32_t f1C;  // ---------------------------------  /* auto */
/* 20*/ int32_t f20;  // ---------------------------------  /* auto */
/* 24*/ int32_t f24;  // ---------------------------------  /* auto */
/* 28*/ int32_t f28;  // ---------------------------------  /* auto */
/* 2C*/ int32_t f2C;  // ---------------------------------  /* auto */
/* 30*/ int32_t f30[256];  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672500*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // Obj672500  ------------------------------------  /* auto */
/*  0*/ virtual void *v_Obj672520Interface_scalar_destructor(char);  // = 005D2840  /* auto */
/*  4*/ virtual int8_t *v_Obj672500_convertPixel(int8_t *, int8_t *, int8_t *);  // = 005FCD60  /* auto */
/*  8*/ virtual int32_t v_Obj672500_selfConvertPixel(int32_t, int32_t, int32_t);  // = 005FCF70  /* auto */
// -------------------------------------------------------  /* auto */
/*005FCCD0*/ int32_t init(void *, MySurfDesc *);  // -----  /* auto */
/*005FCD60*/ int8_t *convertPixel(int8_t *, int8_t *, int8_t *);  /* auto */
/*005FCF70*/ int32_t selfConvertPixel(int32_t, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(Obj672500) == 0x430);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //OBJ672500_H  ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
