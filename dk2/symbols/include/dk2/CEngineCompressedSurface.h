// -----------------  id: vtbl_0067039C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_COMPRESSED_SURFACE_H  // ----------------  /* auto */
#define C_ENGINE_COMPRESSED_SURFACE_H  // ----------------  /* auto */
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
  struct CEngineCompressedSurface;  // -------------------  /* auto */
  struct CEngineSurface;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineCompressedSurface : CEngineSurfaceBase {      /* auto */
// -------------------------------------------------------  /* auto */
/* 14*/ int32_t pixelBuf;  // ----------------------------  /* auto */
/* 18*/ int32_t bufSize;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067039C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEngineSurfaceBase  ---------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(uint32_t);  // = 005906D0  /* auto */
/*  4*/ // virtual int32_t v_fill(__int16);  // = 00590520  /* auto */
/*  8*/ // virtual int32_t v_copySurf(CEngineSurfaceBase *, int32_t, int32_t);  // = 00590740  /* auto */
/*  C*/ // virtual int32_t v_paintSurf(CEngineSurfaceBase *, int32_t, int32_t);  // = 005907D0  /* auto */
/* 10*/ // virtual void v_f10_unk();  // = 0057EB60  -----  /* auto */
/* 14*/ // virtual int32_t v_hasBuf();  // = 00402AD0  ---  /* auto */
/* 18*/ // virtual void *v_lockBuf();  // = 00402AD0  ----  /* auto */
/* 1C*/ // virtual int32_t v_unlockBuf(int32_t);  // = 005671E0  /* auto */
/* 20*/ // virtual void *v_getBufWithSize(uint32_t *);  // = 005906C0  /* auto */
/*---*/ // CEngineCompressedSurface  ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005906C0*/ int32_t getBufWithSize(uint32_t *);  // -----  /* auto */
/*005906D0*/ CEngineCompressedSurface *scalar_destructor(char);  /* auto */
/*005906F0*/ void destructor();  // ----------------------  /* auto */
/*00590740*/ int32_t copySurf(CEngineSurfaceBase *, int32_t, int32_t);  /* auto */
/*005907D0*/ int32_t paintSurf(CEngineSurface *, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineCompressedSurface) == 0x1C);    /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_COMPRESSED_SURFACE_H  ------------------  /* auto */
// -------------------------------------------------------  /* auto */
