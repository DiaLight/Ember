// -----------------  id: vtbl_00672520  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef OBJ672520_INTERFACE_H  // ------------------------  /* auto */
#define OBJ672520_INTERFACE_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct Obj672520Interface {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672520*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // Obj672520Interface  ---------------------------  /* auto */
/*  0*/ virtual const void *v_scalar_destructor(char);  // = 005D2820  /* auto */
/*  4*/ virtual int32_t v_convertPixel(int8_t *, int32_t *, int32_t);  // = 00634D60  /* auto */
/*  8*/ virtual int32_t v_selfConvertPixel(int32_t, int32_t, int32_t);  // = 00634D60  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(Obj672520Interface) == 0x4);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //OBJ672520_INTERFACE_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
