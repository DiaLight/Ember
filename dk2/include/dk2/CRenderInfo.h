// -----------------  id: vtbl_0066D454  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_RENDER_INFO_H  // ------------------------------  /* auto */
#define C_RENDER_INFO_H  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CRenderInfo;  // --------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CRenderInfo {  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t f4;  // ----------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
/*  C*/ int32_t fC;  // ----------------------------------  /* auto */
/* 10*/ int32_t f10;  // ---------------------------------  /* auto */
/* 14*/ int32_t f14;  // ---------------------------------  /* auto */
/* 18*/ int32_t f18;  // ---------------------------------  /* auto */
/* 1C*/ __int16 f1C;  // ---------------------------------  /* auto */
/* 1E*/ __int16 f1E;  // ---------------------------------  /* auto */
/* 20*/ __int16 f20;  // ---------------------------------  /* auto */
/* 22*/ int16_t f22;  // ---------------------------------  /* auto */
/* 24*/ int16_t f24;  // ---------------------------------  /* auto */
/* 26*/ __int16 f26;  // ---------------------------------  /* auto */
/* 28*/ int32_t f28;  // ---------------------------------  /* auto */
/* 2C*/ int32_t f2C;  // ---------------------------------  /* auto */
/* 30*/ int32_t f30;  // ---------------------------------  /* auto */
/* 34*/ int32_t f34;  // ---------------------------------  /* auto */
/* 38*/ int8_t gap_38[4];  // ----------------------------  /* auto */
/* 3C*/ int32_t f3C;  // ---------------------------------  /* auto */
/* 40*/ int32_t f40;  // ---------------------------------  /* auto */
/* 44*/ int8_t gap_44[4];  // ----------------------------  /* auto */
/* 48*/ char f48;  // ------------------------------------  /* auto */
/* 49*/ char f49;  // ------------------------------------  /* auto */
/* 4A*/ char f4A;  // ------------------------------------  /* auto */
/* 4B*/ char f4B;  // ------------------------------------  /* auto */
/* 4C*/ char f4C;  // ------------------------------------  /* auto */
/* 4D*/ char f4D;  // ------------------------------------  /* auto */
/* 4E*/ char f4E;  // ------------------------------------  /* auto */
/* 4F*/ __int16 f4F;  // ---------------------------------  /* auto */
/* 51*/ __int16 f51;  // ---------------------------------  /* auto */
/* 53*/ __int16 f53;  // ---------------------------------  /* auto */
/* 55*/ __int16 f55;  // ---------------------------------  /* auto */
/* 57*/ __int16 f57;  // ---------------------------------  /* auto */
/* 59*/ __int16 f59;  // ---------------------------------  /* auto */
/* 5B*/ int32_t f5B;  // ---------------------------------  /* auto */
/* 5F*/ int8_t gap_5F[20];  // ---------------------------  /* auto */
/* 73*/ int32_t f73;  // ---------------------------------  /* auto */
/* 77*/ int32_t f77;  // ---------------------------------  /* auto */
/* 7B*/ int32_t f7B;  // ---------------------------------  /* auto */
/* 7F*/ int32_t f7F;  // ---------------------------------  /* auto */
/* 83*/ int32_t f83;  // ---------------------------------  /* auto */
/* 87*/ int32_t f87;  // ---------------------------------  /* auto */
/* 8B*/ int32_t nextSpeed;  // ---------------------------  /* auto */
/* 8F*/ int8_t nextAnimationId;  // ----------------------  /* auto */
/* 90*/ int32_t lastFrame;  // ---------------------------  /* auto */
/* 94*/ int32_t currentFrame;  // ------------------------  /* auto */
/* 98*/ int32_t frameChange;  // -------------------------  /* auto */
/* 9C*/ int32_t speed;  // -------------------------------  /* auto */
/* A0*/ int32_t lastSpeed;  // ---------------------------  /* auto */
/* A4*/ int32_t animateUntilEndFrameChange;  // ----------  /* auto */
/* A8*/ int32_t stradlingAnims;  // ----------------------  /* auto */
/* AC*/ int8_t textureBank;  // --------------------------  /* auto */
/* AD*/ char flags;  // ----------------------------------  /* auto */
/* AE*/ int8_t animationId;  // --------------------------  /* auto */
/* AF*/ char fAF;  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D454*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CRenderInfo  ----------------------------------  /* auto */
/*  0*/ virtual int32_t v_fun_4B4710();  // = 004B4710  --  /* auto */
/*  4*/ virtual int32_t v_fun_4B47C0();  // = 004B47C0  --  /* auto */
// -------------------------------------------------------  /* auto */
/*004B3610*/ CRenderInfo *constructor();  // -------------  /* auto */
/*004B3740*/ void destructor();  // ----------------------  /* auto */
/*004B47C0*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CRenderInfo) == 0xB0);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_RENDER_INFO_H  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
