// -------------  id: constructor_0058FAA0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXTURES_H  // --------------------------------  /* auto */
#define MY_TEXTURES_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CDirectIFFFile.h>  // ----------------------  /* auto */
#include <dk2/MyStringHashMap.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineCompressedSurface;  // -------------------  /* auto */
  struct MyTextures;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextures {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char *textureCacheFile_dir;  // ------------------  /* auto */
/*  4*/ char *textureCacheFile_dat;  // ------------------  /* auto */
/*  8*/ FILE *fileHandle;  // ----------------------------  /* auto */
/*  C*/ CDirectIFFFile rwfile;  // -----------------------  /* auto */
/*430*/ int32_t f430;  // --------------------------------  /* auto */
/*434*/ MyStringHashMap texNameToFileOffsetMap;  // ------  /* auto */
// -------------------------------------------------------  /* auto */
/*0058FAA0*/ MyTextures *constructor();  // --------------  /* auto */
/*00591070*/ CEngineCompressedSurface *loadCompressed(char *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextures) == 0x844);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXTURES_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
