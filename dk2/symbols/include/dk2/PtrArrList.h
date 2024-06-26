// -------------  id: constructor_005BBC20  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef PTR_ARR_LIST_H  // -------------------------------  /* auto */
#define PTR_ARR_LIST_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct PtrArrList;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct PtrArrList {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ uint32_t *base;  // ------------------------------  /* auto */
/*  8*/ uint32_t *wpos;  // ------------------------------  /* auto */
/*  C*/ uint32_t *end;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005BBC20*/ PtrArrList *constructor(uint8_t *);  // -----  /* auto */
/*005DB210*/ uint32_t *insertArray(uint32_t *, uint32_t, uint32_t **);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(PtrArrList) == 0x10);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //PTR_ARR_LIST_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
