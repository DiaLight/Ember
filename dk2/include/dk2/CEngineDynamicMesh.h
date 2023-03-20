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
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngineWorldPrimitive.h>  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineDynamicMesh;  // -------------------------  /* auto */
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
/*  8*/ int32_t field_4;  // -----------------------------  /* auto */
/*  C*/ int32_t field_8;  // -----------------------------  /* auto */
/* 10*/ int32_t field_C;  // -----------------------------  /* auto */
/* 14*/ int8_t field_10[36];  // -------------------------  /* auto */
/* 38*/ int32_t field_34;  // ----------------------------  /* auto */
/* 3C*/ double field_38;  // -----------------------------  /* auto */
/* 44*/ double field_40;  // -----------------------------  /* auto */
/* 4C*/ int32_t field_48;  // ----------------------------  /* auto */
/* 50*/ int32_t field_4C;  // ----------------------------  /* auto */
/* 54*/ int32_t field_50;  // ----------------------------  /* auto */
/* 58*/ float field_54;  // ------------------------------  /* auto */
/* 5C*/ int8_t gap_5C[8];  // ----------------------------  /* auto */
/* 64*/ int32_t field_60;  // ----------------------------  /* auto */
/* 68*/ int32_t field_64;  // ----------------------------  /* auto */
/* 6C*/ int32_t field_68;  // ----------------------------  /* auto */
/* 70*/ int8_t gap_70[4];  // ----------------------------  /* auto */
/* 74*/ int32_t field_70;  // ----------------------------  /* auto */
/* 78*/ int8_t gap_78[4];  // ----------------------------  /* auto */
/* 7C*/ char field_78;  // -------------------------------  /* auto */
/* 7D*/ char field_79;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FD1C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00582CE0  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // super CEngineWorldPrimitive  ------------------  /* auto */
/*  8*/ // virtual void v_appendToSceneObject2EList(int32_t);  // = 00580EC0  /* auto */
/*  C*/ // virtual int32_t v_fun_57F1C0(int32_t, int32_t, int32_t, int32_t *, int32_t);  // = 00582D30  /* auto */
/* 10*/ // virtual int32_t *v_fun_5785E0(int32_t *, int32_t);  // = 00580E40  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00580DF0  ------  /* auto */
/* 18*/ // virtual int32_t v_f18(int32_t);  // = 00580E10   /* auto */
/*---*/ // CEngineDynamicMesh  ---------------------------  /* auto */
/* 1C*/ virtual void v_ret_void_1args(int32_t);  // = 005671E0  /* auto */
// -------------------------------------------------------  /* auto */
/*005801E0*/ CEngineDynamicMesh *constructor2(int32_t, int32_t, float, float, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00580480*/ CEngineDynamicMesh *constructor(int32_t, int32_t, float, float, float, float, float, float, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char, int32_t, int32_t);  /* auto */
/*00581BE0*/ void sub_581BE0(int32_t, SceneObject2E *);     /* auto */
/*00582180*/ void fun_582180(float, SceneObject2E *);       /* auto */
/*00582290*/ void fun_582290(int32_t, SceneObject2E *);     /* auto */
/*00582CE0*/ void fun_582CE0(int32_t, SceneObject2E *);     /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineDynamicMesh) == 0x7E);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_DYNAMIC_MESH_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
