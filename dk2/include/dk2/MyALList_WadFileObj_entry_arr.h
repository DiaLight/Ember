// ---------------  id: call_new_005FF606  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_AL_LIST__WAD_FILE_OBJ_ENTRY_ARR_H  // ---------  /* auto */
#define MY_AL_LIST__WAD_FILE_OBJ_ENTRY_ARR_H  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/WadFileObj.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyALList_WadFileObj_entry_arr {  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t count;  // -------------------------------  /* auto */
/*  4*/ WadFileObj arr[100];  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyALList_WadFileObj_entry_arr) == 0x7D4);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_AL_LIST__WAD_FILE_OBJ_ENTRY_ARR_H  -----------  /* auto */
// -------------------------------------------------------  /* auto */
