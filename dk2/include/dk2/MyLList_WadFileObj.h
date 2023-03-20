// -----------------  id: vtbl_00672EE4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_L_LIST__WAD_FILE_OBJ_H  // --------------------  /* auto */
#define MY_L_LIST__WAD_FILE_OBJ_H  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyLList_WadFileObj;  // -------------------------  /* auto */
  struct MyLList_WadFileObj_entry;  // -------------------  /* auto */
  struct WadFileObj;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyLList_WadFileObj {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyLList_WadFileObj_entry *first;  // -------------  /* auto */
/*  8*/ MyLList_WadFileObj_entry *last;  // --------------  /* auto */
/*  C*/ int32_t count;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672EE4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyLList_WadFileObj  ---------------------------  /* auto */
/*  0*/ virtual const void *v___sub_5FE430_scalar_destructor(char);  // = 005FE430  /* auto */
// -------------------------------------------------------  /* auto */
/*005FE430*/ const void *scalar_destructor(char);  // ----  /* auto */
/*005FE450*/ void destructor();  // ----------------------  /* auto */
/*005FF4E0*/ MyLList_WadFileObj_entry *add(WadFileObj *);   /* auto */
/*005FF6C0*/ const void *Base_scalar_destructor(char);      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyLList_WadFileObj) == 0x10);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_L_LIST__WAD_FILE_OBJ_H  ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
