// -----------------  id: vtbl_006703C4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_DD_SURFACE_H  // ------------------------  /* auto */
#define C_ENGINE_DD_SURFACE_H  // ------------------------  /* auto */
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
  struct CEngineDDSurface;  // ---------------------------  /* auto */
  struct MyCEngineSurfDesc;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineDDSurface : CEngineSurfaceBase {  // -------  /* auto */
// -------------------------------------------------------  /* auto */
/* 14*/ uint32_t f14;  // --------------------------------  /* auto */
/* 18*/ IDirectDrawSurface4 *ddSurf;  // -----------------  /* auto */
/* 1C*/ IDirect3DTexture2 *devTex;  // -------------------  /* auto */
/* 20*/ int32_t surfCreated;  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006703C4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEngineSurfaceBase  ---------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(uint32_t);  // = 005909C0  /* auto */
/*  4*/ // virtual int32_t v_fill(__int16);  // = 0062A210  /* auto */
/*  8*/ // virtual int32_t v_copySurf(CEngineSurfaceBase *, int32_t, int32_t);  // = 00517400  /* auto */
/*  C*/ // virtual int32_t v_paintSurf(CEngineSurfaceBase *, int32_t, int32_t);  // = 00590A40  /* auto */
/* 10*/ // virtual void v_f10_unk();  // = 00628BC0  -----  /* auto */
/* 14*/ // virtual int32_t v_hasBuf();  // = 00628BC0  ---  /* auto */
/* 18*/ // virtual void *v_lockBuf();  // = 00590AC0  ----  /* auto */
/* 1C*/ // virtual int32_t v_unlockBuf(int32_t);  // = 00590B20  /* auto */
/* 20*/ // virtual void *v_getBufWithSize(uint32_t *);  // = 00628E30  /* auto */
/*---*/ // CEngineDDSurface  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00590880*/ CEngineDDSurface *constructor(int32_t, int32_t, MyCEngineSurfDesc *, int32_t);  /* auto */
/*005909C0*/ uint32_t *fun_5909C0(char);  // -------------  /* auto */
/*005909E0*/ int32_t destructor();  // -------------------  /* auto */
/*00590A40*/ int32_t paintSurf(uint32_t *, int32_t, int32_t);  /* auto */
/*00590AC0*/ void *lockBuf();  // ------------------------  /* auto */
/*00590B20*/ HRESULT unlockBuf(int32_t);  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineDDSurface) == 0x24);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_DD_SURFACE_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
