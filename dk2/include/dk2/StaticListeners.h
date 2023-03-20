// --------------  id: construct_0052F04A  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef STATIC_LISTENERS_H  // ---------------------------  /* auto */
#define STATIC_LISTENERS_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CComponent;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct StaticListeners {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t (__cdecl *onKeyboardAction)(int32_t, int32_t, CComponent *);  /* auto */
/*  4*/ int32_t (__cdecl *onMouseAction)(int32_t, int32_t, int32_t, int32_t, CComponent *);  /* auto */
/*  8*/ int32_t (__cdecl *onWindowMsg)(__int16, WPARAM, LPARAM, CComponent *);  /* auto */
/*  C*/ int32_t (__cdecl *onKeyboardActionWithCtrl)(int32_t, int32_t, int32_t, CComponent *);  /* auto */
/* 10*/ void (__cdecl *onMouseActionWithCtrl)(int32_t, int32_t, int32_t, int32_t, int32_t, CComponent *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(StaticListeners) == 0x14);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //STATIC_LISTENERS_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
