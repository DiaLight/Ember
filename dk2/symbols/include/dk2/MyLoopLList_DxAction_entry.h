// ---------------  id: call_new_005BBD8D  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_LOOP_L_LIST__DX_ACTION_ENTRY_H  // ------------  /* auto */
#define MY_LOOP_L_LIST__DX_ACTION_ENTRY_H  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct DxAction;  // -----------------------------------  /* auto */
  struct MyLoopLList_DxAction_entry;  // -----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyLoopLList_DxAction_entry {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ MyLoopLList_DxAction_entry *prev;  // ------------  /* auto */
/*  4*/ MyLoopLList_DxAction_entry *next;  // ------------  /* auto */
/*  8*/ DxAction *value;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005BBE00*/ MyLoopLList_DxAction_entry **getPrev(MyLoopLList_DxAction_entry **, int32_t);  /* auto */
/*005DB440*/ MyLoopLList_DxAction_entry **getNext(MyLoopLList_DxAction_entry **, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyLoopLList_DxAction_entry) == 0xC);   /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_LOOP_L_LIST__DX_ACTION_ENTRY_H  --------------  /* auto */
// -------------------------------------------------------  /* auto */
