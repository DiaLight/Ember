// -------------  id: constructor_0058DD60  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_STRING_HASH_MAP_H  // -------------------------  /* auto */
#define MY_STRING_HASH_MAP_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyEntryBuf_MyStringHashMap_entry.h>  // ----  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyStringHashMap;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyStringHashMap {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t hashTable[256];  // ----------------------  /* auto */
/*400*/ int32_t idx;  // ---------------------------------  /* auto */
/*404*/ MyEntryBuf_MyStringHashMap_entry entries;  // ----  /* auto */
// -------------------------------------------------------  /* auto */
/*0058DD60*/ MyStringHashMap *constructor();  // ---------  /* auto */
/*0058DD90*/ int32_t cleanup();  // ----------------------  /* auto */
/*0058DE00*/ int32_t put(const char *, const void *);       /* auto */
/*0058DF40*/ int32_t getEntryIdx(const char *);  // ------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyStringHashMap) == 0x410);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_STRING_HASH_MAP_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
