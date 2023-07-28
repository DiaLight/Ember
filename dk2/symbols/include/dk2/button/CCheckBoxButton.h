// -----------------  id: vtbl_0066EDC4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_CHECK_BOX_BUTTON_H  // -------------------------  /* auto */
#define C_CHECK_BOX_BUTTON_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/button/CButton.h>  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CCheckBoxButton : CButton {  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 80*/ int32_t f80;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066EDC4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CGadget  --------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 0052CAA0  /* auto */
/*---*/ // super CButton  --------------------------------  /* auto */
/*  4*/ // virtual int32_t v_render(int32_t, int32_t);  // = 00529C60  /* auto */
/*  8*/ // virtual int32_t v_handleClick(CDefaultPlayerInterface *);  // = 00529DC0  /* auto */
/*  C*/ // virtual int32_t v_configure(int32_t);  // = 00529E90  /* auto */
/*---*/ // CCheckBoxButton  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00529E90*/ int32_t fun_529E90(int32_t);  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CCheckBoxButton) == 0x84);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_CHECK_BOX_BUTTON_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
