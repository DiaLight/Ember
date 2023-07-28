// ------------  id: instance_00792938_entry  ------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_STRING_HASH_MAP__MY_CE_SURF_HANDLE_ENTRY_H       /* auto */
#define MY_STRING_HASH_MAP__MY_CE_SURF_HANDLE_ENTRY_H       /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyCESurfHandle;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyStringHashMap_MyCESurfHandle_entry {  // --------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char *name;  // ----------------------------------  /* auto */
/*  4*/ MyCESurfHandle *value;  // -----------------------  /* auto */
/*  8*/ int32_t prev_idx_for_same_hash;  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyStringHashMap_MyCESurfHandle_entry) == 0xC);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_STRING_HASH_MAP__MY_CE_SURF_HANDLE_ENTRY_H  --  /* auto */
// -------------------------------------------------------  /* auto */
