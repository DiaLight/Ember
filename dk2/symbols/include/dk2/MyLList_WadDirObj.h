// -----------------  id: vtbl_00672EE8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_L_LIST__WAD_DIR_OBJ_H  // ---------------------  /* auto */
#define MY_L_LIST__WAD_DIR_OBJ_H  // ---------------------  /* auto */
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
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyLList_WadDirObj {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyLList_WadDirObj_entry *first;  // --------------  /* auto */
/*  8*/ MyLList_WadDirObj_entry *last;  // ---------------  /* auto */
/*  C*/ int32_t count;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672EE8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyLList_WadDirObj  ----------------------------  /* auto */
/*  0*/ virtual void *v___sub_5FE3D0_scalar_destructor(char);  // = 005FE3D0  /* auto */
// -------------------------------------------------------  /* auto */
/*005FE3D0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005FE3F0*/ void destructor();  // ----------------------  /* auto */
/*005FF670*/ void *Base_scalar_destructor(char);  // -----  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyLList_WadDirObj) == 0x10);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_L_LIST__WAD_DIR_OBJ_H  -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
