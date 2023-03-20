// -----------------  id: vtbl_00672904  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MOUSE_XYZ_DX_ACTION_LIST_H  // -------------------  /* auto */
#define MOUSE_XYZ_DX_ACTION_LIST_H  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyLoopLList_DxAction.h>  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MouseXyzDxAction;  // ---------------------------  /* auto */
  struct MouseXyzDxActionList;  // -----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MouseXyzDxActionList {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyLoopLList_DxAction list;  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672904*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MouseXyzDxActionList  -------------------------  /* auto */
/*  0*/ virtual void *v_scalar_destructor(char);  // = 005DDC90  /* auto */
// -------------------------------------------------------  /* auto */
/*005DDBE0*/ int32_t destructor();  // -------------------  /* auto */
/*005DDE50*/ MouseXyzDxAction *getOrCreateUnhandled();      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MouseXyzDxActionList) == 0x14);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MOUSE_XYZ_DX_ACTION_LIST_H  ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
