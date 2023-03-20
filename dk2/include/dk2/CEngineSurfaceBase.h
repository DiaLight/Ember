// -----------------  id: vtbl_00670374  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_SURFACE_BASE_H  // ----------------------  /* auto */
#define C_ENGINE_SURFACE_BASE_H  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineSurface;  // -----------------------------  /* auto */
  struct CEngineSurfaceBase;  // -------------------------  /* auto */
  struct MyCEngineSurfDesc;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineSurfaceBase {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t width;  // -------------------------------  /* auto */
/*  8*/ int32_t height;  // ------------------------------  /* auto */
/*  C*/ int32_t lineWidth;  // ---------------------------  /* auto */
/* 10*/ MyCEngineSurfDesc *fC_desc;  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00670374*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CEngineSurfaceBase  ---------------------------  /* auto */
/*  0*/ virtual const void *v_scalar_destructor(int32_t);  // = 00590610  /* auto */
/*  4*/ virtual int32_t v_fill(__int16);  // = 00590520  -  /* auto */
/*  8*/ virtual int32_t v_copySurf(CEngineSurfaceBase *, int32_t, int32_t);  // = 00517400  /* auto */
/*  C*/ virtual int32_t v_paintSurf(CEngineSurfaceBase *, int32_t, int32_t);  // = 00517400  /* auto */
/* 10*/ virtual void v_f10_unk();  // = 00634D60  --------  /* auto */
/* 14*/ virtual int32_t v_hasBuf();  // = 00634D60  ------  /* auto */
/* 18*/ virtual const void *v_lockBuf();  // = 00402AD0  -  /* auto */
/* 1C*/ virtual int32_t v_unlockBuf(int32_t);  // = 005671E0  /* auto */
/* 20*/ virtual const void *v_getBufWithSize(int32_t *);  // = 00628E30  /* auto */
// -------------------------------------------------------  /* auto */
/*00590450*/ int32_t paintSurf(CEngineSurface *, int32_t, int32_t);  /* auto */
/*00590520*/ int32_t fill(__int16);  // ------------------  /* auto */
/*00590610*/ CEngineSurfaceBase *scalar_destructor(int32_t);  /* auto */
/*00591BF0*/ CEngineSurfaceBase *constructor(int32_t, int32_t, MyCEngineSurfDesc *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineSurfaceBase) == 0x14);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_SURFACE_BASE_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
