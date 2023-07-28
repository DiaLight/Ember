// ---------------  id: instance_007656E8  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_STRING_HASH_MAP__MY_SCALED_SURFACE_H  // ------  /* auto */
#define MY_STRING_HASH_MAP__MY_SCALED_SURFACE_H  // ------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyEntryBuf_MyStringHashMap_MyScaledSurface_entry.h>  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyStringHashMap_MyScaledSurface {  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint32_t hashTable[256];  // ---------------------  /* auto */
/*400*/ uint32_t idx;  // --------------------------------  /* auto */
/*404*/ MyEntryBuf_MyStringHashMap_MyScaledSurface_entry entries;  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyStringHashMap_MyScaledSurface) == 0x410);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_STRING_HASH_MAP__MY_SCALED_SURFACE_H  --------  /* auto */
// -------------------------------------------------------  /* auto */
