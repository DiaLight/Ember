// ---------------  id: call_new_005B4F72  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef DD_MODE_LIST_ITEM_H  // --------------------------  /* auto */
#define DD_MODE_LIST_ITEM_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct DdModeListItem;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct DdModeListItem {  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ DdModeListItem *next;  // ------------------------  /* auto */
/*  4*/ DdModeListItem *last;  // ------------------------  /* auto */
/*  8*/ int32_t dwWidth;  // -----------------------------  /* auto */
/*  C*/ int32_t dwHeight;  // ----------------------------  /* auto */
/* 10*/ int32_t dwRGBBitCount;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(DdModeListItem) == 0x14);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //DD_MODE_LIST_ITEM_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
