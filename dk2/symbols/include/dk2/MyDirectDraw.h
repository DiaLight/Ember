// ---------------  id: instance_00764B90  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DIRECT_DRAW_H  // -----------------------------  /* auto */
#define MY_DIRECT_DRAW_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDirectDraw {  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ IDirectDraw4 *dd4;  // ---------------------------  /* auto */
/*  4*/ IDirectDrawSurface4 *ddsurf4_offScreen;  // ------  /* auto */
/*  8*/ IDirectDrawSurface4 *ddsurf4_primarySurf;  // ----  /* auto */
/*  C*/ IDirect3DDevice3 *d3d3_halDevice;  // ------------  /* auto */
/* 10*/ IDirect3D3 *d3d3;  // ----------------------------  /* auto */
/* 14*/ IDirect3DViewport3 *d3d3_viewport;  // -----------  /* auto */
/* 18*/ uint32_t *buf;  // -------------------------------  /* auto */
/* 1C*/ uint16_t *buf2;  // ------------------------------  /* auto */
/* 20*/ int32_t texturesCount;  // -----------------------  /* auto */
/* 24*/ int32_t reductionLevel;  // ----------------------  /* auto */
/* 28*/ __int16 flags;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDirectDraw) == 0x2A);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DIRECT_DRAW_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
