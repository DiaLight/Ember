// -----------------  id: vtbl_0066FCCC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_SPRITE_H  // ----------------------------  /* auto */
#define C_ENGINE_SPRITE_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineSprite;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineSprite : CEngine2DPrimitive {  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t field_4;  // -----------------------------  /* auto */
/*  C*/ int32_t field_8;  // -----------------------------  /* auto */
/* 10*/ int32_t field_C;  // -----------------------------  /* auto */
/* 14*/ int32_t field_10;  // ----------------------------  /* auto */
/* 18*/ int32_t field_14;  // ----------------------------  /* auto */
/* 1C*/ float fl;  // ------------------------------------  /* auto */
/* 20*/ float fl_20;  // ---------------------------------  /* auto */
/* 24*/ float fl_24;  // ---------------------------------  /* auto */
/* 28*/ int8_t gap_28[12];  // ---------------------------  /* auto */
/* 34*/ float fl_34;  // ---------------------------------  /* auto */
/* 38*/ float fl_38;  // ---------------------------------  /* auto */
/* 3C*/ float fl_3C;  // ---------------------------------  /* auto */
/* 40*/ int32_t field_3C;  // ----------------------------  /* auto */
/* 44*/ int32_t field_40;  // ----------------------------  /* auto */
/* 48*/ int32_t field_44;  // ----------------------------  /* auto */
/* 4C*/ int32_t field_48;  // ----------------------------  /* auto */
/* 50*/ int32_t field_4C;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FCCC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 0057F3D0  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngineSprite  --------------------------------  /* auto */
/*  8*/ virtual void v_fun_57F7E0(int32_t);  // = 0057F7E0  /* auto */
/*  C*/ virtual int32_t v_fun_57F1C0(int32_t, int32_t, int32_t, int32_t *, int32_t);  // = 0057F1C0  /* auto */
/* 10*/ virtual int32_t *v_fun_5785E0(int32_t *, int32_t);  // = 005785E0  /* auto */
/* 14*/ virtual int32_t v_ret_0_0args();  // = 00402AD0  -  /* auto */
/* 18*/ virtual int32_t v_ret_0_1args(int32_t);  // = 00628E30  /* auto */
/* 1C*/ virtual void v_ret_void_1args(int32_t);  // = 005671E0  /* auto */
// -------------------------------------------------------  /* auto */
/*0057F110*/ CEngineSprite *constructor2(const float *, int32_t, int32_t, int32_t, const float *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0057F1E0*/ CEngineSprite *constructor(int32_t, int32_t, float, float, int32_t, int32_t, int32_t, int32_t, float, float, float, int32_t, int32_t);  /* auto */
/*0057F7E0*/ void appendToSceneObject2EList(int32_t);       /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineSprite) == 0x54);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_SPRITE_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
