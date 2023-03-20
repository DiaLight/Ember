// -----------------  id: vtbl_0066FB04  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE2_D_MESH_SURFACE_H  // -------------------  /* auto */
#define C_ENGINE2_D_MESH_SURFACE_H  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEnginePrimitiveBase.h>  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngine2DMeshSurface;  // -----------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngine2DMeshSurface : CEnginePrimitiveBase {  // -  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ void *_16xbuf;  // -------------------------------  /* auto */
/*  C*/ void *_6xbuf;  // --------------------------------  /* auto */
/* 10*/ int32_t buf16_maxCount;  // ----------------------  /* auto */
/* 14*/ int32_t buf6_maxCount;  // -----------------------  /* auto */
/* 18*/ int32_t field_14;  // ----------------------------  /* auto */
/* 1C*/ float f0;  // ------------------------------------  /* auto */
/* 20*/ float f1;  // ------------------------------------  /* auto */
/* 24*/ float f2;  // ------------------------------------  /* auto */
/* 28*/ int32_t field_24;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FB04*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEnginePrimitiveBase  -------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 00578B80  /* auto */
/*  4*/ // virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00578C00  /* auto */
/*---*/ // CEngine2DMeshSurface  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00578A80*/ CEngine2DMeshSurface *constructor(int32_t, int32_t, void *, void *, int32_t, float *, int32_t);  /* auto */
/*00578C00*/ int32_t *fun_578C00(int32_t, SceneObject2E *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngine2DMeshSurface) == 0x2C);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE2_D_MESH_SURFACE_H  ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
