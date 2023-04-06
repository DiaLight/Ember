// -----------------  id: vtbl_0066FCF4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_QUAD_PLANE_H  // ------------------------  /* auto */
#define C_ENGINE_QUAD_PLANE_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
#include <dk2/Vec3f.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineQuadPlane;  // ---------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineQuadPlane : CEngine2DPrimitive {  // -------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ float field_4;  // -------------------------------  /* auto */
/*  C*/ float field_8;  // -------------------------------  /* auto */
/* 10*/ Vec3f field_C;  // -------------------------------  /* auto */
/* 1C*/ Vec3f field_18;  // ------------------------------  /* auto */
/* 28*/ int32_t field_24;  // ----------------------------  /* auto */
/* 2C*/ int32_t field_28;  // ----------------------------  /* auto */
/* 30*/ float field_2C;  // ------------------------------  /* auto */
/* 34*/ int32_t field_30;  // ----------------------------  /* auto */
/* 38*/ int32_t f34_pTrgObj;  // -------------------------  /* auto */
/* 3C*/ int32_t field_38;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FCF4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 0057FB80  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngineQuadPlane  -----------------------------  /* auto */
/*  8*/ virtual int32_t v_CEngineQuadPlane_appendToSceneObject2EList(int32_t);  // = 0057FF30  /* auto */
/*  C*/ virtual int32_t v_fun_57F1C0(int32_t, int32_t, int32_t, int32_t *, int32_t);  // = 0057F1C0  /* auto */
/* 10*/ virtual int32_t *v_fun_5785E0(int32_t *, int32_t);  // = 005785E0  /* auto */
/* 14*/ virtual int32_t v_ret_0_0args();  // = 00402AD0  -  /* auto */
/* 18*/ virtual int32_t v_ret_0_1args(int32_t);  // = 00628E30  /* auto */
/* 1C*/ virtual void v_ret_void_1args(int32_t);  // = 005671E0  /* auto */
// -------------------------------------------------------  /* auto */
/*0057FAF0*/ CEngineQuadPlane *constructor(const float *, int32_t, int32_t, const float *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0057FB80*/ int32_t *fun_57FB80(int32_t, SceneObject2E *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineQuadPlane) == 0x40);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_QUAD_PLANE_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
