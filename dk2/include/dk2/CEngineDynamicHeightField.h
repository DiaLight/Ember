// -----------------  id: vtbl_0066FDDC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_DYNAMIC_HEIGHT_FIELD_H  // --------------  /* auto */
#define C_ENGINE_DYNAMIC_HEIGHT_FIELD_H  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngineWorldPrimitive.h>  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineDynamicHeightField;  // ------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineDynamicHeightField : CEngineWorldPrimitive {  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t field_4;  // -----------------------------  /* auto */
/*  C*/ void *field_8;  // -------------------------------  /* auto */
/* 10*/ void *field_C;  // -------------------------------  /* auto */
/* 14*/ int32_t field_10;  // ----------------------------  /* auto */
/* 18*/ int32_t field_14;  // ----------------------------  /* auto */
/* 1C*/ int32_t field_18;  // ----------------------------  /* auto */
/* 20*/ int32_t field_1C;  // ----------------------------  /* auto */
/* 24*/ int32_t field_20;  // ----------------------------  /* auto */
/* 28*/ int32_t field_24;  // ----------------------------  /* auto */
/* 2C*/ float field_28;  // ------------------------------  /* auto */
/* 30*/ double field_2C;  // -----------------------------  /* auto */
/* 38*/ float field_34;  // ------------------------------  /* auto */
/* 3C*/ int32_t field_38;  // ----------------------------  /* auto */
/* 40*/ double field_3C;  // -----------------------------  /* auto */
/* 48*/ double field_44;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FDDC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 00587550  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 005875D0  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // super CEngineWorldPrimitive  ------------------  /* auto */
/*  8*/ // virtual void v_appendToSceneObject2EList(int32_t);  // = 00587DA0  /* auto */
/*  C*/ // virtual int32_t v_fun_57F1C0(int32_t, int32_t, int32_t, int32_t *, int32_t);  // = 0057F1C0  /* auto */
/* 10*/ // virtual int32_t *v_fun_5785E0(int32_t *, int32_t);  // = 005785E0  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00402AD0  ------  /* auto */
/* 18*/ // virtual int32_t v_f18(int32_t);  // = 00628E30   /* auto */
/*---*/ // CEngineDynamicHeightField  --------------------  /* auto */
/* 1C*/ virtual void v_ret_void_1args(int32_t);  // = 005671E0  /* auto */
// -------------------------------------------------------  /* auto */
/*005873A0*/ CEngineDynamicHeightField *constructor(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, int32_t, float);  /* auto */
/*005875D0*/ int32_t *fun_5875D0(int32_t, SceneObject2E *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineDynamicHeightField) == 0x50);   /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_DYNAMIC_HEIGHT_FIELD_H  ----------------  /* auto */
// -------------------------------------------------------  /* auto */
