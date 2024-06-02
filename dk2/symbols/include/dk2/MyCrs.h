// -----------------  id: init_00554A90  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CRS_H  // -------------------------------------  /* auto */
#define MY_CRS_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyCrs;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCrs {  // ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t allocated;  // ---------------------------  /* auto */
/*  4*/ uint32_t *buf;  // -------------------------------  /* auto */
/*  8*/ uint32_t bufSize;  // ----------------------------  /* auto */
/*  C*/ uint32_t fC;  // ---------------------------------  /* auto */
/* 10*/ uint32_t *f10;  // -------------------------------  /* auto */
/* 14*/ int32_t f14;  // ---------------------------------  /* auto */
/* 18*/ uint32_t f18;  // --------------------------------  /* auto */
/* 1C*/ int32_t f1C;  // ---------------------------------  /* auto */
/* 20*/ uint32_t *f20;  // -------------------------------  /* auto */
/* 24*/ uint32_t *bufPos;  // ----------------------------  /* auto */
/* 28*/ uint32_t *psmth;  // -----------------------------  /* auto */
/* 2C*/ uint32_t *bufEnd;  // ----------------------------  /* auto */
/* 30*/ int32_t allocatedSzie;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00554A70*/ void destructor();  // ----------------------  /* auto */
/*00554A90*/ int32_t init(size_t);  // -------------------  /* auto */
/*00554AD0*/ uint32_t *fun_554AD0();  // -----------------  /* auto */
/*00554B30*/ uint32_t *myalloc(int32_t);  // -------------  /* auto */
/*00554BD0*/ uint32_t *fun_554BD0(int32_t);  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCrs) == 0x34);  // ----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CRS_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */