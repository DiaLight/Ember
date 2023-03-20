// --------------  id: construct_0058DE28  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_ENTRY_BUF__MY_STRING_HASH_MAP_ENTRY_H  // -----  /* auto */
#define MY_ENTRY_BUF__MY_STRING_HASH_MAP_ENTRY_H  // -----  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyEntryBuf_MyStringHashMap_entry;  // -----------  /* auto */
  struct MyStringHashMap_entry;  // ----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyEntryBuf_MyStringHashMap_entry {  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t expandCount;  // -------------------------  /* auto */
/*  4*/ int32_t maxCount;  // ----------------------------  /* auto */
/*  8*/ MyStringHashMap_entry *buf;  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0058E000*/ void resize(int32_t);  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyEntryBuf_MyStringHashMap_entry) == 0xC);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_ENTRY_BUF__MY_STRING_HASH_MAP_ENTRY_H  -------  /* auto */
// -------------------------------------------------------  /* auto */
