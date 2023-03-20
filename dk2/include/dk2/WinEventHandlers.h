// -------------  id: constructor_005B97B0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef WIN_EVENT_HANDLERS_H  // -------------------------  /* auto */
#define WIN_EVENT_HANDLERS_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyLList_WinEventCb.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct WinEventHandlers;  // ---------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct WinEventHandlers {  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ MyLList_WinEventCb arr[6];  // -------------------  /* auto */
/* 60*/ _RTL_CRITICAL_SECTION *crit_section;  // ---------  /* auto */
/* 64*/ int32_t f64;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005B9930*/ void callList(int32_t, int32_t);  // --------  /* auto */
/*005B99E0*/ void addHandler(int32_t, void (__stdcall *)(int32_t, int32_t, const void *), const void *);  /* auto */
/*005B9AB0*/ void removeHandler(int32_t, void (__stdcall *)(int32_t, int32_t, const void *), const void *);  /* auto */
/*005B9BD0*/ void clear();  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(WinEventHandlers) == 0x68);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //WIN_EVENT_HANDLERS_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
