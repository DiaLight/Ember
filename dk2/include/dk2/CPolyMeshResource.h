// -----------------  id: vtbl_0066FBDC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_POLY_MESH_RESOURCE_H  // -----------------------  /* auto */
#define C_POLY_MESH_RESOURCE_H  // -----------------------  /* auto */
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
  struct CPolyMeshResource;  // --------------------------  /* auto */
  struct SprsMeshHeader;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CPolyMeshResource : CMeshResourceBase {  // -------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ SprsMeshHeader *ptr;  // -------------------------  /* auto */
/*  C*/ Vec3f *geom_base;  // ----------------------------  /* auto */
/* 10*/ int32_t *ctrl_uk_base;  // -----------------------  /* auto */
/* 14*/ int32_t numCTRL;  // -----------------------------  /* auto */
/* 18*/ int32_t sprsCount;  // ---------------------------  /* auto */
/* 1C*/ int32_t vertsCount;  // --------------------------  /* auto */
/* 20*/ float scale;  // ---------------------------------  /* auto */
/* 24*/ Vec3f pos;  // -----------------------------------  /* auto */
/* 30*/ int32_t lodCount;  // ----------------------------  /* auto */
/* 34*/ int32_t init_neg1;  // ---------------------------  /* auto */
/* 38*/ __int16 totalTriangleCount;  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FBDC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CMeshResourceBase  ----------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(int32_t);  // = 0057E840  /* auto */
/*  4*/ // virtual int32_t v_getType();  // = 00402AD0  --  /* auto */
/*  8*/ // virtual void v_resolve(int32_t);  // = 0057EAA0  /* auto */
/*---*/ // CPolyMeshResource  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057AFC0*/ Vec3f *getGeomBase(int32_t);  // ------------  /* auto */
/*0057AFD0*/ SprsMeshHeader *getMeshHeader(int32_t);  // -  /* auto */
/*0057E7F0*/ void destructor();  // ----------------------  /* auto */
/*0057E860*/ CPolyMeshResource *constructor(int32_t, int32_t, int32_t, int32_t *, int32_t *, int32_t *, float, float, float, float, int32_t);  /* auto */
/*0057EAA0*/ void resolveTextures(int32_t);  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CPolyMeshResource) == 0x3A);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_POLY_MESH_RESOURCE_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
