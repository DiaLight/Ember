// -----------------  id: vtbl_0066FA8C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE2_D_SPRITE_H  // -------------------------  /* auto */
#define C_ENGINE2_D_SPRITE_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngine2DSprite;  // ----------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
  struct Triangle34;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngine2DSprite : CEngine2DPrimitive {  // --------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ __int16 f4_posX;  // -----------------------------  /* auto */
/*  A*/ __int16 f6_posY;  // -----------------------------  /* auto */
/*  C*/ __int16 field_8;  // -----------------------------  /* auto */
/*  E*/ __int16 field_A;  // -----------------------------  /* auto */
/* 10*/ float field_C;  // -------------------------------  /* auto */
/* 14*/ int32_t field_10;  // ----------------------------  /* auto */
/* 18*/ int32_t field_14;  // ----------------------------  /* auto */
/* 1C*/ int32_t field_18;  // ----------------------------  /* auto */
/* 20*/ int32_t field_1C;  // ----------------------------  /* auto */
/* 24*/ int32_t field_20;  // ----------------------------  /* auto */
/* 28*/ __int16 field_24;  // ----------------------------  /* auto */
/* 2A*/ __int16 field_26;  // ----------------------------  /* auto */
/* 2C*/ __int16 field_28;  // ----------------------------  /* auto */
/* 2E*/ __int16 field_2A;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FA8C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00577640  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngine2DSprite  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00576940*/ CEngine2DSprite *constructor(__int16, __int16, __int16, __int16, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, __int16, __int16, __int16, __int16);  /* auto */
/*00576A10*/ int32_t addVert1CTriangle(int32_t, SceneObject2E *);  /* auto */
/*00576E50*/ int32_t addVert18Triangle(int32_t, SceneObject2E *);  /* auto */
/*00577400*/ Triangle34 *createTriangle34(int32_t, SceneObject2E *);  /* auto */
/*00577640*/ Triangle34 *fun_577640(int32_t, SceneObject2E *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngine2DSprite) == 0x30);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE2_D_SPRITE_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
