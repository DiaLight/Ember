// -----------------  id: vtbl_00672450  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef WND_MSG_DX_ACTION_LIST_H  // ---------------------  /* auto */
#define WND_MSG_DX_ACTION_LIST_H  // ---------------------  /* auto */
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
  struct WndMsgDxActionList;  // -------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct WndMsgDxActionList {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyLoopLList_DxAction list;  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672450*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // WndMsgDxActionList  ---------------------------  /* auto */
/*  0*/ virtual void *v_Obj672450_scalar_destructor(char);  // = 005BBD60  /* auto */
// -------------------------------------------------------  /* auto */
/*005BBB70*/ int32_t destructor();  // -------------------  /* auto */
/*005BBD60*/ void *scalar_destructor(char);  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(WndMsgDxActionList) == 0x14);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //WND_MSG_DX_ACTION_LIST_H  -----------------------  /* auto */
// -------------------------------------------------------  /* auto */