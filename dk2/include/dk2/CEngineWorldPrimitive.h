// -----------------  id: vtbl_0066FD44  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_WORLD_PRIMITIVE_H  // -------------------  /* auto */
#define C_ENGINE_WORLD_PRIMITIVE_H  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineWorldPrimitive;  // ----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineWorldPrimitive : CEngine2DPrimitive {  // --  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FD44*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005769D0  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00580470  /* auto */
/*---*/ // super CEngine2DPrimitive  ---------------------  /* auto */
/*---*/ // CEngineWorldPrimitive  ------------------------  /* auto */
/*  8*/ virtual void v_appendToSceneObject2EList(int32_t);  // = 005671E0  /* auto */
/*  C*/ virtual int32_t v_fun_57F1C0(float, float, int32_t, int32_t *, int32_t);  // = 0057F1C0  /* auto */
/* 10*/ virtual int32_t *v_fun_5785E0(int32_t *, int32_t);  // = 005785E0  /* auto */
/* 14*/ virtual int32_t v_f14();  // = 00402AD0  ---------  /* auto */
/* 18*/ virtual int32_t v_f18(int32_t);  // = 00628E30  --  /* auto */
// -------------------------------------------------------  /* auto */
/*00580460*/ CEngineWorldPrimitive *constructor();  // ---  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineWorldPrimitive) == 0x8);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_WORLD_PRIMITIVE_H  ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
