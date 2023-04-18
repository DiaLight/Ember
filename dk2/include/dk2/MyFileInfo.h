// -------------  id: constructor_005D9470  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FILE_INFO_H  // -------------------------------  /* auto */
#define MY_FILE_INFO_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFileInfo {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t fileSizeLow;  // -------------------------  /* auto */
/*  4*/ int32_t fileAttributes;  // ----------------------  /* auto */
/*  8*/ FILETIME lastWriteTime;  // ----------------------  /* auto */
/* 10*/ FILETIME lastAccessTime;  // ---------------------  /* auto */
/* 18*/ FILETIME creationTime;  // -----------------------  /* auto */
/* 20*/ const char *pFileName;  // -----------------------  /* auto */
/* 24*/ char str[260];  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFileInfo) == 0x128);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FILE_INFO_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
