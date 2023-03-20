// ---------------  id: call_new_005FF5F3  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_AL_LIST__WAD_FILE_OBJ_ENTRY_H  // -------------  /* auto */
#define MY_AL_LIST__WAD_FILE_OBJ_ENTRY_H  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyALList_WadFileObj_entry;  // ------------------  /* auto */
  struct WadFileObj;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyALList_WadFileObj_entry {  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ MyALList_WadFileObj_entry *next;  // -------------  /* auto */
/*  4*/ WadFileObj *value;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyALList_WadFileObj_entry) == 0x8);    /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_AL_LIST__WAD_FILE_OBJ_ENTRY_H  ---------------  /* auto */
// -------------------------------------------------------  /* auto */
