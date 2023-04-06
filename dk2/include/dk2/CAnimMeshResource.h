// -----------------  id: vtbl_0066FBBC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ANIM_MESH_RESOURCE_H  // -----------------------  /* auto */
#define C_ANIM_MESH_RESOURCE_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CMeshResourceBase.h>  // -------------------  /* auto */
#include <dk2/Vec3f.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CAnimMeshResource;  // --------------------------  /* auto */
  struct SprsAnimHeader;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CAnimMeshResource : CMeshResourceBase {  // -------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t frameCount;  // --------------------------  /* auto */
/*  C*/ float cubeScale;  // -----------------------------  /* auto */
/* 10*/ Vec3f pos;  // -----------------------------------  /* auto */
/* 1C*/ int32_t frameFactorFunction;  // -----------------  /* auto */
/* 20*/ SprsAnimHeader *buf;  // -------------------------  /* auto */
/* 24*/ int32_t sprsCount;  // ---------------------------  /* auto */
/* 28*/ int32_t indexCount;  // --------------------------  /* auto */
/* 2C*/ const char *triangles_base;  // ------------------  /* auto */
/* 30*/ int32_t *geomCoordinates_base;  // ---------------  /* auto */
/* 34*/ const char *geomFrame_base;  // ------------------  /* auto */
/* 38*/ const char *itab_base;  // -----------------------  /* auto */
/* 3C*/ const char *unk_base;  // ------------------------  /* auto */
/* 40*/ int32_t numCTRL;  // -----------------------------  /* auto */
/* 44*/ int32_t lodCount;  // ----------------------------  /* auto */
/* 48*/ int32_t init_neg1;  // ---------------------------  /* auto */
/* 4C*/ float scale_nano;  // ----------------------------  /* auto */
/* 50*/ float scale_micro;  // ---------------------------  /* auto */
/* 54*/ float scale_mini;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FBBC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CMeshResourceBase  ----------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(int32_t);  // = 0057E590  /* auto */
/*  4*/ // virtual int32_t v_getType();  // = 00628BC0  --  /* auto */
/*  8*/ // virtual void v_resolve(int32_t);  // = 0057E7B0  /* auto */
/*---*/ // CAnimMeshResource  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057E2A0*/ CAnimMeshResource *constructor(int32_t, int32_t, int32_t, int32_t *, int32_t *, int32_t, int32_t, int32_t *, float, float, float, float, float, int32_t, int32_t);  /* auto */
/*0057E7B0*/ int32_t resolveTextures(int32_t);  // -------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CAnimMeshResource) == 0x58);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ANIM_MESH_RESOURCE_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
