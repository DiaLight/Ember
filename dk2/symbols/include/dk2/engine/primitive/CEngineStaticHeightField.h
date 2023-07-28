// -----------------  id: vtbl_0066FDB4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_STATIC_HEIGHT_FIELD_H  // ---------------  /* auto */
#define C_ENGINE_STATIC_HEIGHT_FIELD_H  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/engine/primitive/CEnginePrimitiveBase.h>      /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineStaticHeightField;  // -------------------  /* auto */
  struct Obj57AD20;  // ----------------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineStaticHeightField : CEnginePrimitiveBase {    /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t a8;  // ----------------------------------  /* auto */
/*  C*/ uint8_t gap_C[4];  // ----------------------------  /* auto */
/* 10*/ Obj57AD20 *buf;  // ------------------------------  /* auto */
/* 14*/ int32_t field_10;  // ----------------------------  /* auto */
/* 18*/ int32_t field_14;  // ----------------------------  /* auto */
/* 1C*/ int32_t field_18;  // ----------------------------  /* auto */
/* 20*/ int32_t field_1C;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FDB4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual uint32_t *v_deleting_destructor(char);  // = 00586F70  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00587010  /* auto */
/*---*/ // CEngineStaticHeightField  ---------------------  /* auto */
/*  8*/ virtual int32_t v_CEngineStaticHeightField_appendToSceneObject2EList(int32_t);  // = 00587060  /* auto */
/*  C*/ virtual int32_t v_fun_57F1C0(int32_t, int32_t, int32_t, uint32_t *, int32_t);  // = 0057F1C0  /* auto */
/* 10*/ virtual uint32_t *v_fun_5785E0(uint32_t *, int32_t);  // = 005785E0  /* auto */
/* 14*/ virtual int32_t v_ret_0_0args();  // = 00402AD0  -  /* auto */
/* 18*/ virtual int32_t v_ret_0_1args(int32_t);  // = 00628E30  /* auto */
/* 1C*/ virtual int32_t v_fun_586FF0(int32_t);  // = 00586FF0  /* auto */
// -------------------------------------------------------  /* auto */
/*00586BC0*/ CEngineStaticHeightField *constructor(float *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00586F70*/ void *scalar_destructor(char);  // ----------  /* auto */
/*00586F90*/ void destructor();  // ----------------------  /* auto */
/*00586FF0*/ int32_t fun_586FF0(int32_t);  // ------------  /* auto */
/*00587010*/ int32_t *fun_587010(int32_t, SceneObject2E *);  /* auto */
/*00587060*/ int32_t appendToSceneObject2EList(int32_t);    /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineStaticHeightField) == 0x24);    /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_STATIC_HEIGHT_FIELD_H  -----------------  /* auto */
// -------------------------------------------------------  /* auto */
