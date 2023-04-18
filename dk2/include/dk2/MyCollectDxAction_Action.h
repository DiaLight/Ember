// ----------  id: construct_005DCB39_005DCB07  ----------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_COLLECT_DX_ACTION__ACTION_H  // ---------------  /* auto */
#define MY_COLLECT_DX_ACTION__ACTION_H  // ---------------  /* auto */
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
struct MyCollectDxAction_Action {  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char type;  // -----------------------------------  /* auto */
/*  1*/ char KeyCode;  // --------------------------------  /* auto */
/*  2*/ __int16 uMsg_isPressed;  // ----------------------  /* auto */
/*  4*/ int32_t wParam_xy;  // ---------------------------  /* auto */
/*  8*/ int32_t btnPressFlags;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCollectDxAction_Action) == 0xC);     /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_COLLECT_DX_ACTION__ACTION_H  -----------------  /* auto */
// -------------------------------------------------------  /* auto */
