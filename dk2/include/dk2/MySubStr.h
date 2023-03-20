// -----------------  id: vtbl_00672300  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_SUB_STR_H  // ---------------------------------  /* auto */
#define MY_SUB_STR_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MySubStr;  // -----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MySubStr {  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ size_t length;  // -------------------------------  /* auto */
/*  8*/ char *buf;  // -----------------------------------  /* auto */
/*  C*/ int32_t fC;  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672300*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MySubStr  -------------------------------------  /* auto */
/*  0*/ virtual void __cdecl v_ret_void_0args();  // = 0040D440  /* auto */
/*  4*/ virtual void v_ret_void_1args(int32_t);  // = 005671E0  /* auto */
// -------------------------------------------------------  /* auto */
/*005D7D90*/ bool isNotStartsFromChar(int8_t *);  // -----  /* auto */
/*005D8850*/ int32_t *MyWadDirectory_sub_5D8850(int32_t *, char *, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MySubStr) == 0x10);  // -------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_SUB_STR_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
