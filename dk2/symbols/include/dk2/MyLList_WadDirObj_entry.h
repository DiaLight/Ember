// ---------------  id: call_new_005FED19  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_L_LIST__WAD_DIR_OBJ_ENTRY_H  // ---------------  /* auto */
#define MY_L_LIST__WAD_DIR_OBJ_ENTRY_H  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyLList_WadDirObj_entry;  // --------------------  /* auto */
  struct WadDirObj;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyLList_WadDirObj_entry {  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ WadDirObj *value;  // ----------------------------  /* auto */
/*  4*/ MyLList_WadDirObj_entry *next;  // ---------------  /* auto */
/*  8*/ MyLList_WadDirObj_entry *prev;  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyLList_WadDirObj_entry) == 0xC);      /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_L_LIST__WAD_DIR_OBJ_ENTRY_H  -----------------  /* auto */
// -------------------------------------------------------  /* auto */
