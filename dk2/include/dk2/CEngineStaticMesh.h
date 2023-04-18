// -----------------  id: vtbl_0066FD8C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_STATIC_MESH_H  // -----------------------  /* auto */
#define C_ENGINE_STATIC_MESH_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEnginePrimitiveBase.h>  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineStaticMesh;  // --------------------------  /* auto */
  struct Mat3x3f;  // ------------------------------------  /* auto */
  struct Obj57AD20;  // ----------------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
  struct Vec3f;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineStaticMesh : CEnginePrimitiveBase {  // ----  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ Obj57AD20 *v14;  // ------------------------------  /* auto */
/*  C*/ int8_t gap_C[4];  // -----------------------------  /* auto */
/* 10*/ int32_t a5;  // ----------------------------------  /* auto */
/* 14*/ int8_t gap_14[8];  // ----------------------------  /* auto */
/* 1C*/ int32_t field_18;  // ----------------------------  /* auto */
/* 20*/ int32_t field_1C;  // ----------------------------  /* auto */
/* 24*/ int32_t field_20;  // ----------------------------  /* auto */
/* 28*/ int32_t field_24;  // ----------------------------  /* auto */
/* 2C*/ float f2C;  // -----------------------------------  /* auto */
/* 30*/ int8_t f30;  // ----------------------------------  /* auto */
/* 31*/ char field_2D;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FD8C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005860B0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00586150  /* auto */
/*---*/ // CEngineStaticMesh  ----------------------------  /* auto */
/*  8*/ virtual int32_t v_CEngineStaticMesh_appendToSceneObject2EList(int32_t);  // = 00586190  /* auto */
/*  C*/ virtual int32_t v_fun_57F1C0(int32_t, int32_t, int32_t, int32_t *, int32_t);  // = 0057F1C0  /* auto */
/* 10*/ virtual int32_t *v_fun_5785E0(int32_t *, int32_t);  // = 005785E0  /* auto */
/* 14*/ virtual int32_t v_ret_0_0args();  // = 00402AD0  -  /* auto */
/* 18*/ virtual int32_t v_ret_0_1args(int32_t);  // = 00628E30  /* auto */
/* 1C*/ virtual int32_t v_fun_586130(int32_t);  // = 00586130  /* auto */
// -------------------------------------------------------  /* auto */
/*00585F90*/ CEngineStaticMesh *constructor(Vec3f *, Mat3x3f *, int32_t, int32_t, Vec3f *, int32_t, char, int32_t *);  /* auto */
/*00586130*/ int32_t fun_586130(int32_t);  // ------------  /* auto */
/*00586150*/ int32_t *fun_586150(int32_t, SceneObject2E *);  /* auto */
/*00586190*/ int32_t appendToSceneObject2EList(int32_t);    /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineStaticMesh) == 0x32);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_STATIC_MESH_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
