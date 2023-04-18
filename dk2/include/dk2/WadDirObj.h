// -------------  id: constructor_005FE3A0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef WAD_DIR_OBJ_H  // --------------------------------  /* auto */
#define WAD_DIR_OBJ_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyLList_WadDirObj.h>  // -------------------  /* auto */
#include <dk2/MyLList_WadFileObj.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyALList_WadDirObj;  // -------------------------  /* auto */
  struct MyALList_WadFileObj;  // ------------------------  /* auto */
  struct MyLList_WadFileObj_entry;  // -------------------  /* auto */
  struct MyStr;  // --------------------------------------  /* auto */
  struct WadDirObj;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct WadDirObj {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ const char *name;  // ----------------------------  /* auto */
/*  4*/ int32_t isPackedWadFile;  // ---------------------  /* auto */
/*  8*/ MyLList_WadDirObj subdirs;  // -------------------  /* auto */
/* 18*/ MyLList_WadFileObj files;  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FE3A0*/ void constructor();  // ---------------------  /* auto */
/*005FEAA0*/ void destructor();  // ----------------------  /* auto */
/*005FEB10*/ MyLList_WadFileObj_entry *putFile(const char *, int32_t, int32_t, int32_t, MyALList_WadFileObj *, char);  /* auto */
/*005FEBA0*/ WadDirObj *putDirRecursive(const char *, MyALList_WadDirObj *, int32_t);  /* auto */
/*005FEDD0*/ WadDirObj *sub_5FEDD0(MyStr *, MyStr *);       /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(WadDirObj) == 0x28);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //WAD_DIR_OBJ_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
