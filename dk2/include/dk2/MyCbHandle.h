// -----------------  id: vtbl_006723D8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CB_HANDLE_H  // -------------------------------  /* auto */
#define MY_CB_HANDLE_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyCallback;  // ---------------------------------  /* auto */
  struct MyCbHandle;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCbHandle {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t *callbackIdxList;  // --------------------  /* auto */
/*  8*/ void *callbackObj;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006723D8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyCbHandle  -----------------------------------  /* auto */
/*  0*/ virtual void *v_sub_5BB440(char);  // = 005BB440    /* auto */
// -------------------------------------------------------  /* auto */
/*005DBD60*/ int32_t *destructor();  // ------------------  /* auto */
/*005DBD70*/ int32_t add_MyCallback(int32_t *, MyCallback *);  /* auto */
/*005DBDC0*/ int32_t *release_MyCallback();  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCbHandle) == 0xC);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CB_HANDLE_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
