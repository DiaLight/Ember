// -----------------  id: vtbl_00672340  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_L_LIST__WIN_EVENT_CB_H  // --------------------  /* auto */
#define MY_L_LIST__WIN_EVENT_CB_H  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyLList_WinEventCb;  // -------------------------  /* auto */
  struct MyLList_WinEventCb_entry;  // -------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyLList_WinEventCb {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyLList_WinEventCb_entry *first;  // -------------  /* auto */
/*  8*/ MyLList_WinEventCb_entry *last;  // --------------  /* auto */
/*  C*/ int32_t count;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672340*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyLList_WinEventCb  ---------------------------  /* auto */
/*  0*/ virtual const void *v_scalar_destructor(char);  // = 005B98A0  /* auto */
// -------------------------------------------------------  /* auto */
/*005B9840*/ void constructor();  // ---------------------  /* auto */
/*005B9860*/ void destructor();  // ----------------------  /* auto */
/*005B98A0*/ const void *scalar_destructor(char);  // ----  /* auto */
/*005B9C80*/ MyLList_WinEventCb *MyLList_scalar_destructor(char);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyLList_WinEventCb) == 0x10);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_L_LIST__WIN_EVENT_CB_H  ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
