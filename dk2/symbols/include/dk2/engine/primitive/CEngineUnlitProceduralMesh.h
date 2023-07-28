// -----------------  id: vtbl_0066FE04  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_UNLIT_PROCEDURAL_MESH_H  // -------------  /* auto */
#define C_ENGINE_UNLIT_PROCEDURAL_MESH_H  // -------------  /* auto */
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
  struct CEngineUnlitProceduralMesh;  // -----------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineUnlitProceduralMesh : CEnginePrimitiveBase {  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t a2;  // ----------------------------------  /* auto */
/*  C*/ uint32_t field_8;  // ----------------------------  /* auto */
/* 10*/ char *field_C;  // -------------------------------  /* auto */
/* 14*/ char *compBuf;  // -------------------------------  /* auto */
/* 18*/ char *field_14;  // ------------------------------  /* auto */
/* 1C*/ char *field_18;  // ------------------------------  /* auto */
/* 20*/ uint32_t field_1C;  // ---------------------------  /* auto */
/* 24*/ char *bufPos;  // --------------------------------  /* auto */
/* 28*/ char *field_24;  // ------------------------------  /* auto */
/* 2C*/ uint8_t gap_2C[36];  // --------------------------  /* auto */
/* 50*/ int32_t field_4C;  // ----------------------------  /* auto */
/* 54*/ uint16_t field_50;  // ---------------------------  /* auto */
/* 56*/ uint8_t gap_56[2];  // ---------------------------  /* auto */
/* 58*/ int32_t field_54;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FE04*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual uint32_t *v_deleting_destructor(char);  // = 00588480  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 005884F0  /* auto */
/*---*/ // CEngineUnlitProceduralMesh  -------------------  /* auto */
/*  8*/ virtual uint32_t v_CEngineUnlitProceduralMesh_appendToSceneObject2EList(int32_t);  // = 005888A0  /* auto */
/*  C*/ virtual int32_t v_fun_57F1C0(int32_t, int32_t, int32_t, uint32_t *, int32_t);  // = 0057F1C0  /* auto */
/* 10*/ virtual uint32_t *v_fun_5785E0(uint32_t *, int32_t);  // = 005785E0  /* auto */
/* 14*/ virtual int32_t v_ret_0_0args();  // = 00402AD0  -  /* auto */
/* 18*/ virtual int32_t v_ret_0_1args(int32_t);  // = 00628E30  /* auto */
/* 1C*/ virtual void v_ret_void_1args(int32_t);  // = 005671E0  /* auto */
// -------------------------------------------------------  /* auto */
/*00588190*/ CEngineUnlitProceduralMesh *constructor(int32_t, int32_t, int32_t, const void *, const void *, uint16_t *, int32_t, int32_t);  /* auto */
/*00588480*/ uint32_t *scalar_destructor(char);  // ------  /* auto */
/*005884A0*/ void destructor();  // ----------------------  /* auto */
/*005884F0*/ int32_t *fun_5884F0(int32_t, SceneObject2E *);  /* auto */
/*005888A0*/ uint32_t appendToSceneObject2EList(int32_t);   /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineUnlitProceduralMesh) == 0x5C);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_UNLIT_PROCEDURAL_MESH_H  ---------------  /* auto */
// -------------------------------------------------------  /* auto */
