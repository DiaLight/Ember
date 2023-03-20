// -----------------  id: vtbl_0066FABC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE2_D_STATIC_MESH_H  // --------------------  /* auto */
#define C_ENGINE2_D_STATIC_MESH_H  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngine2DStaticMesh;  // ------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngine2DStaticMesh : CEngine2DPrimitive {  // ----  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t field_4;  // -----------------------------  /* auto */
/*  C*/ int32_t field_8;  // -----------------------------  /* auto */
/* 10*/ int32_t field_C;  // -----------------------------  /* auto */
/* 14*/ int8_t field_10[36];  // -------------------------  /* auto */
/* 38*/ int32_t field_34;  // ----------------------------  /* auto */
/* 3C*/ int32_t field_38;  // ----------------------------  /* auto */
/* 40*/ float field_3C;  // ------------------------------  /* auto */
/* 44*/ float field_40;  // ------------------------------  /* auto */
/* 48*/ float field_44;  // ------------------------------  /* auto */
/* 4C*/ float field_48;  // ------------------------------  /* auto */
/* 50*/ int32_t field_4C;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FABC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00577A00  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngine2DStaticMesh  --------------------------  /* auto */
/*  8*/ virtual float *v_fun_577DC0(float *, int32_t);  // = 00577DC0  /* auto */
/*  C*/ virtual int32_t v_fun_577D70();  // = 00577D70  --  /* auto */
/* 10*/ virtual int32_t v_fun_577D90(int32_t);  // = 00577D90  /* auto */
// -------------------------------------------------------  /* auto */
/*00577960*/ CEngine2DStaticMesh *constructor(int32_t, int32_t, int32_t, void *, int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*00577A00*/ void fun_577A00(int32_t, SceneObject2E *);     /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngine2DStaticMesh) == 0x54);  // --  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE2_D_STATIC_MESH_H  ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
