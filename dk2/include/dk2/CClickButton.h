// -----------------  id: vtbl_0066EE7C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_CLICK_BUTTON_H  // -----------------------------  /* auto */
#define C_CLICK_BUTTON_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CButton.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CClickButton;  // -------------------------------  /* auto */
  struct CDefaultPlayerInterface;  // --------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CClickButton : CButton {  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066EE7C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CGadget  --------------------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(char);  // = 0052CAA0  /* auto */
/*---*/ // super CButton  --------------------------------  /* auto */
/*  4*/ // virtual int32_t v_render(int32_t, int32_t);  // = 005282F0  /* auto */
/*  8*/ // virtual int32_t v_handleClick(CDefaultPlayerInterface *);  // = 00528610  /* auto */
/*  C*/ // virtual int32_t v_configure(int32_t);  // = 005282A0  /* auto */
/*---*/ // CClickButton  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00528610*/ CClickButton *handleClick(CDefaultPlayerInterface *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CClickButton) == 0x80);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_CLICK_BUTTON_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
