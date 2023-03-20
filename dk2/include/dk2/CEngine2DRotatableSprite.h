// -----------------  id: vtbl_0066FAAC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE2_D_ROTATABLE_SPRITE_H  // ---------------  /* auto */
#define C_ENGINE2_D_ROTATABLE_SPRITE_H  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngine2DRotatableSprite;  // -------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngine2DRotatableSprite : CEngine2DPrimitive {      /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ __int16 field_4;  // -----------------------------  /* auto */
/*  A*/ __int16 field_6;  // -----------------------------  /* auto */
/*  C*/ __int16 field_8;  // -----------------------------  /* auto */
/*  E*/ __int16 field_A;  // -----------------------------  /* auto */
/* 10*/ int32_t field_C;  // -----------------------------  /* auto */
/* 14*/ int32_t field_10;  // ----------------------------  /* auto */
/* 18*/ float field_14;  // ------------------------------  /* auto */
/* 1C*/ float field_18;  // ------------------------------  /* auto */
/* 20*/ float field_1C;  // ------------------------------  /* auto */
/* 24*/ int32_t field_20;  // ----------------------------  /* auto */
/* 28*/ int32_t field_24;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FAAC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 005776C0  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngine2DRotatableSprite  ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005776C0*/ int32_t *fun_5776C0(int32_t, SceneObject2E *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngine2DRotatableSprite) == 0x2C);    /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE2_D_ROTATABLE_SPRITE_H  -----------------  /* auto */
// -------------------------------------------------------  /* auto */
