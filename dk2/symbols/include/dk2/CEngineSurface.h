// -----------------  id: vtbl_0067034C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_SURFACE_H  // ---------------------------  /* auto */
#define C_ENGINE_SURFACE_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngineSurfaceBase.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineSurface;  // -----------------------------  /* auto */
  struct MyCEngineSurfDesc;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineSurface : CEngineSurfaceBase {  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
/* 14*/ void *pixels;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067034C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEngineSurfaceBase  ---------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(uint32_t);  // = 00590650  /* auto */
/*  4*/ // virtual int32_t v_fill(__int16);  // = 00590520  /* auto */
/*  8*/ // virtual int32_t v_copySurf(CEngineSurfaceBase *, int32_t, int32_t);  // = 00517400  /* auto */
/*  C*/ // virtual int32_t v_paintSurf(CEngineSurfaceBase *, int32_t, int32_t);  // = 00517400  /* auto */
/* 10*/ // virtual void v_f10_unk();  // = 00402AD0  -----  /* auto */
/* 14*/ // virtual int32_t v_hasBuf();  // = 00628BC0  ---  /* auto */
/* 18*/ // virtual void *v_lockBuf();  // = 00628BB0  ----  /* auto */
/* 1C*/ // virtual int32_t v_unlockBuf(int32_t);  // = 005671E0  /* auto */
/* 20*/ // virtual void *v_getBufWithSize(uint32_t *);  // = 00590630  /* auto */
/*---*/ // CEngineSurface  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00590580*/ CEngineSurface *constructor(int32_t, int32_t, MyCEngineSurfDesc *);  /* auto */
/*00590630*/ void *getBufWithSize(uint32_t *);  // -------  /* auto */
/*00590650*/ uint32_t *scalar_destructor(char);  // ------  /* auto */
/*00590670*/ void destructor();  // ----------------------  /* auto */
/*00628BB0*/ void *getBuf();  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineSurface) == 0x18);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_SURFACE_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
