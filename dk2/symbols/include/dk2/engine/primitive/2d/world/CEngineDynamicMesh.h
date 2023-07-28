// -----------------  id: vtbl_0066FD1C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_DYNAMIC_MESH_H  // ----------------------  /* auto */
#define C_ENGINE_DYNAMIC_MESH_H  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/engine/primitive/2d/world/CEngineWorldPrimitive.h>  /* auto */
#include <dk2/utils/Mat3x3f.h>  // -----------------------  /* auto */
#include <dk2/utils/Vec3f.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineDynamicMesh;  // -------------------------  /* auto */
  struct CMeshResourceBase_vtbl;  // ---------------------  /* auto */
  struct CPolyMeshResource;  // --------------------------  /* auto */
  struct MyMeshResourceHolder;  // -----------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineDynamicMesh : CEngineWorldPrimitive {  // --  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ Vec3f field_4;  // -------------------------------  /* auto */
/* 14*/ Mat3x3f f10_mat;  // -----------------------------  /* auto */
/* 38*/ MyMeshResourceHolder *f34_pobj;  // --------------  /* auto */
/* 3C*/ Vec3f f38_vec;  // -------------------------------  /* auto */
/* 48*/ int32_t field_44;  // ----------------------------  /* auto */
/* 4C*/ int32_t field_48;  // ----------------------------  /* auto */
/* 50*/ int32_t field_4C;  // ----------------------------  /* auto */
/* 54*/ int32_t field_50;  // ----------------------------  /* auto */
/* 58*/ float field_54;  // ------------------------------  /* auto */
/* 5C*/ int32_t f58_pTrgObj;  // -------------------------  /* auto */
/* 60*/ int32_t field_5C;  // ----------------------------  /* auto */
/* 64*/ uint32_t field_60;  // ---------------------------  /* auto */
/* 68*/ uint32_t field_64;  // ---------------------------  /* auto */
/* 6C*/ uint32_t field_68;  // ---------------------------  /* auto */
/* 70*/ int32_t field_6C;  // ----------------------------  /* auto */
/* 74*/ int32_t field_70;  // ----------------------------  /* auto */
/* 78*/ int32_t field_74;  // ----------------------------  /* auto */
/* 7C*/ int32_t field_78;  // ----------------------------  /* auto */
/* 80*/ uint8_t f7c_gap[12];  // -------------------------  /* auto */
/* 8C*/ char field_88;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FD1C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual uint32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00582CE0  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // super CEngineWorldPrimitive  ------------------  /* auto */
/*  8*/ // virtual void v_appendToSceneObject2EList(int32_t);  // = 00580EC0  /* auto */
/*  C*/ // virtual int32_t v_fun_57F1C0(float, float, int32_t, uint32_t *, int32_t);  // = 00582D30  /* auto */
/* 10*/ // virtual uint32_t *v_fun_5785E0(uint32_t *, int32_t);  // = 00580E40  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00580DF0  ------  /* auto */
/* 18*/ // virtual int32_t v_f18(int32_t);  // = 00580E10   /* auto */
/*---*/ // CEngineDynamicMesh  ---------------------------  /* auto */
/* 1C*/ virtual void v_ret_void_1args(int32_t);  // = 005671E0  /* auto */
// -------------------------------------------------------  /* auto */
/*005801E0*/ CEngineDynamicMesh *constructor2(int32_t, int32_t, float, float, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, Vec3f *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00580480*/ CEngineDynamicMesh *constructor(int32_t, int32_t, float, float, float, float, float, float, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char, int32_t, int32_t);  /* auto */
/*005808E0*/ int32_t shadow_sub_5808E0(CPolyMeshResource *, int32_t);  /* auto */
/*00580DF0*/ CMeshResourceBase_vtbl *fun_580DF0();  // ---  /* auto */
/*00580E10*/ int32_t fun_580E10(int32_t);  // ------------  /* auto */
/*00580E40*/ float *fun_580E40(float *, int32_t);  // ----  /* auto */
/*00580EC0*/ void appendToSceneObject2EList(int32_t);       /* auto */
/*00581BE0*/ void sub_581BE0(int32_t, SceneObject2E *);     /* auto */
/*00582180*/ void fun_582180(float, SceneObject2E *);       /* auto */
/*00582290*/ void fun_582290(int32_t, SceneObject2E *);     /* auto */
/*00582CE0*/ void fun_582CE0(int32_t, SceneObject2E *);     /* auto */
/*00582D30*/ int32_t fun_582D30(float, float, int32_t, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineDynamicMesh) == 0x8D);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_DYNAMIC_MESH_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
