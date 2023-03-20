// -----------------  id: vtbl_0066FD64  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_ANIM_MESH_H  // -------------------------  /* auto */
#define C_ENGINE_ANIM_MESH_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngineWorldPrimitive.h>  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineAnimMesh;  // ----------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineAnimMesh : CEngineWorldPrimitive {  // -----  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ float field_4;  // -------------------------------  /* auto */
/*  C*/ float field_8;  // -------------------------------  /* auto */
/* 10*/ float field_C;  // -------------------------------  /* auto */
/* 14*/ int8_t field_10[36];  // -------------------------  /* auto */
/* 38*/ double field_34;  // -----------------------------  /* auto */
/* 40*/ double field_3C;  // -----------------------------  /* auto */
/* 48*/ double field_44;  // -----------------------------  /* auto */
/* 50*/ int32_t field_4C;  // ----------------------------  /* auto */
/* 54*/ int32_t field_50;  // ----------------------------  /* auto */
/* 58*/ int32_t field_54;  // ----------------------------  /* auto */
/* 5C*/ int8_t gap_5C[4];  // ----------------------------  /* auto */
/* 60*/ float field_5C;  // ------------------------------  /* auto */
/* 64*/ double field_60;  // -----------------------------  /* auto */
/* 6C*/ int8_t gap_6C[4];  // ----------------------------  /* auto */
/* 70*/ int32_t field_6C;  // ----------------------------  /* auto */
/* 74*/ int32_t field_70;  // ----------------------------  /* auto */
/* 78*/ int32_t field_74;  // ----------------------------  /* auto */
/* 7C*/ int8_t gap_7C[4];  // ----------------------------  /* auto */
/* 80*/ int32_t field_7C;  // ----------------------------  /* auto */
/* 84*/ int8_t gap_84[4];  // ----------------------------  /* auto */
/* 88*/ char field_84;  // -------------------------------  /* auto */
/* 89*/ char field_85;  // -------------------------------  /* auto */
/* 8A*/ int8_t gap_8A[14];  // ---------------------------  /* auto */
/* 98*/ char field_94;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FD64*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 005848B0  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // super CEngineWorldPrimitive  ------------------  /* auto */
/*  8*/ // virtual void v_appendToSceneObject2EList(int32_t);  // = 00584900  /* auto */
/*  C*/ // virtual int32_t v_fun_57F1C0(int32_t, int32_t, int32_t, int32_t *, int32_t);  // = 00585AD0  /* auto */
/* 10*/ // virtual int32_t *v_fun_5785E0(int32_t *, int32_t);  // = 005835E0  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00583680  ------  /* auto */
/* 18*/ // virtual int32_t v_f18(int32_t);  // = 005783A0   /* auto */
/*---*/ // CEngineAnimMesh  ------------------------------  /* auto */
/* 1C*/ virtual void v_ret_void_1args(int32_t);  // = 005671E0  /* auto */
// -------------------------------------------------------  /* auto */
/*00583120*/ CEngineAnimMesh *constructor(int32_t, int32_t, float, float, float, float, float, float, int32_t, int32_t, int32_t, float, float, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char, int32_t, int32_t);  /* auto */
/*005836A0*/ void sub_5836A0(int32_t, SceneObject2E *);     /* auto */
/*00583CA0*/ void sub_583CA0(float, SceneObject2E *);       /* auto */
/*00583DC0*/ void sub_583DC0(int32_t, SceneObject2E *);     /* auto */
/*005848B0*/ void fun_5848B0(int32_t, SceneObject2E *);     /* auto */
/*00585ED0*/ void sub_585ED0();  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineAnimMesh) == 0x99);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_ANIM_MESH_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
