// -----------------  id: vtbl_006728FC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MOUSE_RGB_DX_ACTION_LIST_H  // -------------------  /* auto */
#define MOUSE_RGB_DX_ACTION_LIST_H  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyLoopLList_DxAction.h>  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MouseRgbDxAction;  // ---------------------------  /* auto */
  struct MouseRgbDxActionList;  // -----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MouseRgbDxActionList {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyLoopLList_DxAction list;  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006728FC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MouseRgbDxActionList  -------------------------  /* auto */
/*  0*/ virtual void *v_Obj6728FC_scalar_destructor(char);  // = 005DDCB0  /* auto */
// -------------------------------------------------------  /* auto */
/*005DDCB0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005DDCD0*/ int32_t destructor();  // -------------------  /* auto */
/*005DDF30*/ MouseRgbDxAction *getOrCreateUnhandled();      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MouseRgbDxActionList) == 0x14);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MOUSE_RGB_DX_ACTION_LIST_H  ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
