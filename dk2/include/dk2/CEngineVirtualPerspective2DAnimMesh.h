// -----------------  id: vtbl_0066FAEC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_VIRTUAL_PERSPECTIVE2_D_ANIM_MESH_H  // --  /* auto */
#define C_ENGINE_VIRTUAL_PERSPECTIVE2_D_ANIM_MESH_H  // --  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineVirtualPerspective2DAnimMesh;  // --------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineVirtualPerspective2DAnimMesh : CEngine2DPrimitive {  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t field_4;  // -----------------------------  /* auto */
/*  C*/ int32_t field_8;  // -----------------------------  /* auto */
/* 10*/ int32_t field_C;  // -----------------------------  /* auto */
/* 14*/ int32_t field_10;  // ----------------------------  /* auto */
/* 18*/ int8_t field_14[36];  // -------------------------  /* auto */
/* 3C*/ int32_t field_38;  // ----------------------------  /* auto */
/* 40*/ int32_t field_3C;  // ----------------------------  /* auto */
/* 44*/ float field_40;  // ------------------------------  /* auto */
/* 48*/ int32_t field_44;  // ----------------------------  /* auto */
/* 4C*/ float field_48;  // ------------------------------  /* auto */
/* 50*/ float field_4C;  // ------------------------------  /* auto */
/* 54*/ float field_50;  // ------------------------------  /* auto */
/* 58*/ int32_t field_54;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FAEC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00578600  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngineVirtualPerspective2DAnimMesh  ----------  /* auto */
/*  8*/ virtual int32_t *v_fun_5785E0(int32_t *, int32_t);  // = 005785E0  /* auto */
/*  C*/ virtual int32_t v_ret_0_0args();  // = 00402AD0  -  /* auto */
/* 10*/ virtual int32_t v_ret_0_1args(int32_t);  // = 00628E30  /* auto */
// -------------------------------------------------------  /* auto */
/*00578530*/ CEngineVirtualPerspective2DAnimMesh *constructor(int32_t, int32_t, int32_t, int32_t, const void *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*00578600*/ void fun_578600(int32_t, SceneObject2E *);     /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineVirtualPerspective2DAnimMesh) == 0x5C);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_VIRTUAL_PERSPECTIVE2_D_ANIM_MESH_H  ----  /* auto */
// -------------------------------------------------------  /* auto */
