// -------------  id: constructor_005BBD80  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_LOOP_L_LIST__DX_ACTION_H  // ------------------  /* auto */
#define MY_LOOP_L_LIST__DX_ACTION_H  // ------------------  /* auto */
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
  struct MyLoopLList_DxAction;  // -----------------------  /* auto */
  struct MyLoopLList_DxAction_entry;  // -----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyLoopLList_DxAction {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ MyLoopLList_DxAction_entry *root;  // ------------  /* auto */
/*  8*/ int32_t count;  // -------------------------------  /* auto */
/*  C*/ MyLoopLList_DxAction_entry *pos;  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005BBD80*/ MyLoopLList_DxAction *constructor(int8_t *);   /* auto */
/*005BBDB0*/ int32_t addFirst(DxAction **);  // ----------  /* auto */
/*005DDD80*/ MyLoopLList_DxAction_entry **insertAfter(MyLoopLList_DxAction_entry **, MyLoopLList_DxAction_entry *, DxAction **);  /* auto */
/*00611210*/ MyLoopLList_DxAction_entry **lastEntry(MyLoopLList_DxAction_entry **);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyLoopLList_DxAction) == 0x10);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_LOOP_L_LIST__DX_ACTION_H  --------------------  /* auto */
// -------------------------------------------------------  /* auto */
