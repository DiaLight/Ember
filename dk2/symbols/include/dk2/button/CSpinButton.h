// -----------------  id: vtbl_0066ED6C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_SPIN_BUTTON_H  // ------------------------------  /* auto */
#define C_SPIN_BUTTON_H  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/button/CTextInput.h>  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CSpinButton;  // --------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CSpinButton : CTextInput {  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*290*/ int32_t f290;  // --------------------------------  /* auto */
/*294*/ int32_t f294;  // --------------------------------  /* auto */
/*298*/ int32_t f298;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066ED6C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CGadget  --------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 0052CAA0  /* auto */
/*---*/ // super CButton  --------------------------------  /* auto */
/*  4*/ // virtual int32_t v_render(int32_t, int32_t);  // = 0052AAE0  /* auto */
/*  8*/ // virtual int32_t v_handleClick(CDefaultPlayerInterface *);  // = 0052ADA0  /* auto */
/*  C*/ // virtual int32_t v_configure(int32_t);  // = 0052AF60  /* auto */
/*---*/ // super CTextInput  -----------------------------  /* auto */
/* 10*/ // virtual void *v_fun_52CA70();  // = 0052AF00  -  /* auto */
/* 14*/ // virtual char *v_fun_52CA90();  // = 0052CA90  -  /* auto */
/*---*/ // CSpinButton  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0052AAE0*/ int32_t fun_52AAE0(int32_t, int32_t);  // ---  /* auto */
/*0052ADA0*/ CSpinButton *fun_52ADA0(int32_t);  // -------  /* auto */
/*0052AF00*/ int32_t fun_52AF00(wchar_t *);  // ----------  /* auto */
/*0052AF60*/ int32_t fun_52AF60(int32_t);  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CSpinButton) == 0x29C);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_SPIN_BUTTON_H  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
