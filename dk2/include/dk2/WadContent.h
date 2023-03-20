// -------------  id: constructor_005FE280  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef WAD_CONTENT_H  // --------------------------------  /* auto */
#define WAD_CONTENT_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyALList_WadDirObj.h>  // ------------------  /* auto */
#include <dk2/MyALList_WadFileObj.h>  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyStr;  // --------------------------------------  /* auto */
  struct MyWadUnkObj;  // --------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
  struct WadContent;  // ---------------------------------  /* auto */
  struct WadDirObj;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct WadContent {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ WadDirObj *rootDir;  // --------------------------  /* auto */
/*  4*/ int32_t namesBuf;  // ----------------------------  /* auto */
/*  8*/ MyWadUnkObj *wadUnkObj;  // ----------------------  /* auto */
/*  C*/ MyALList_WadDirObj allDirs;  // ------------------  /* auto */
/* 14*/ MyALList_WadFileObj allFiles;  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FE280*/ WadContent *constructor();  // --------------  /* auto */
/*005FE570*/ void cleanup();  // -------------------------  /* auto */
/*005FE5D0*/ int32_t *parseFile(int32_t *, TbDiscFile *, bool);  /* auto */
/*005FE9B0*/ int32_t *sub_5FE9B0(int32_t *, int32_t, MyStr *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(WadContent) == 0x1C);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //WAD_CONTENT_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
