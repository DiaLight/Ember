// -----------------  id: vtbl_0066FAD4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE2_D_ANIM_MESH_H  // ----------------------  /* auto */
#define C_ENGINE2_D_ANIM_MESH_H  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngine2DAnimMesh;  // --------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngine2DAnimMesh : CEngine2DPrimitive {  // ------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t field_4;  // -----------------------------  /* auto */
/*  C*/ int32_t field_8;  // -----------------------------  /* auto */
/* 10*/ int32_t field_C;  // -----------------------------  /* auto */
/* 14*/ int8_t field_10[36];  // -------------------------  /* auto */
/* 38*/ int32_t field_34;  // ----------------------------  /* auto */
/* 3C*/ int32_t field_38;  // ----------------------------  /* auto */
/* 40*/ float field_3C;  // ------------------------------  /* auto */
/* 44*/ int32_t field_40;  // ----------------------------  /* auto */
/* 48*/ float field_44;  // ------------------------------  /* auto */
/* 4C*/ float field_48;  // ------------------------------  /* auto */
/* 50*/ float field_4C;  // ------------------------------  /* auto */
/* 54*/ int32_t field_50;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FAD4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00577F10  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngine2DAnimMesh  ----------------------------  /* auto */
/*  8*/ virtual int32_t v_fun_5783D0(int32_t, float);  // = 005783D0  /* auto */
/*  C*/ virtual int32_t v_fun_583680();  // = 00583680  --  /* auto */
/* 10*/ virtual int32_t v_fun_5783A0(int32_t);  // = 005783A0  /* auto */
// -------------------------------------------------------  /* auto */
/*00577E60*/ CEngine2DAnimMesh *constructor(int32_t, int32_t, int32_t, const void *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*00577F10*/ void fun_577F10(int32_t, SceneObject2E *);     /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngine2DAnimMesh) == 0x58);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE2_D_ANIM_MESH_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
