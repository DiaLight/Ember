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
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
#include <dk2/Mat3x3f.h>  // -----------------------------  /* auto */
#include <dk2/Vec3f.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngine2DStaticMesh;  // ------------------------  /* auto */
  struct MyMeshResourceHolder;  // -----------------------  /* auto */
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
/*  8*/ Vec3f f4_vec;  // --------------------------------  /* auto */
/* 14*/ Mat3x3f f10_mat;  // -----------------------------  /* auto */
/* 38*/ float f34_scale;  // -----------------------------  /* auto */
/* 3C*/ float f38_scaleZ;  // ----------------------------  /* auto */
/* 40*/ float field_3C;  // ------------------------------  /* auto */
/* 44*/ Vec3f f40_vec;  // -------------------------------  /* auto */
/* 50*/ MyMeshResourceHolder *f4C_resHolder;  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FABC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00577A00  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngine2DStaticMesh  --------------------------  /* auto */
/*  8*/ virtual const float *v_fun_577DC0(const float *, int32_t);  // = 00577DC0  /* auto */
/*  C*/ virtual int32_t v_fun_577D70();  // = 00577D70  --  /* auto */
/* 10*/ virtual int32_t v_fun_577D90(int32_t);  // = 00577D90  /* auto */
// -------------------------------------------------------  /* auto */
/*00577960*/ CEngine2DStaticMesh *constructor(int32_t, int32_t, int32_t, const void *, int32_t, int32_t, int32_t, MyMeshResourceHolder *, Vec3f *);  /* auto */
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
