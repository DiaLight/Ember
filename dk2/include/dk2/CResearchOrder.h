// -----------------  id: vtbl_0066E3C4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_RESEARCH_ORDER_H  // ---------------------------  /* auto */
#define C_RESEARCH_ORDER_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CResearchOrder;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CResearchOrder {  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t f4;  // ----------------------------------  /* auto */
/*  8*/ int8_t gap_8[4];  // -----------------------------  /* auto */
/*  C*/ int32_t fC;  // ----------------------------------  /* auto */
/* 10*/ int32_t f10;  // ---------------------------------  /* auto */
/* 14*/ int32_t f14;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066E3C4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CResearchOrder  -------------------------------  /* auto */
/*  0*/ virtual int32_t v_fun_506EC0(int32_t *);  // = 00506EC0  /* auto */
/*  4*/ virtual int32_t v_fun_506E10(int32_t *);  // = 00506E10  /* auto */
/*  8*/ virtual int32_t v_fun_506FC0();  // = 00506FC0  --  /* auto */
/*  C*/ virtual int32_t v_fun_4B4C20();  // = 004B4C20  --  /* auto */
// -------------------------------------------------------  /* auto */
/*00506D30*/ CResearchOrder *constructor();  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CResearchOrder) == 0x18);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_RESEARCH_ORDER_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */