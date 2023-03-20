// -------------  id: constructor_005BAE70  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_MUTEX_H  // -----------------------------------  /* auto */
#define MY_MUTEX_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyMutex;  // ------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyMutex {  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char alredyExists;  // ---------------------------  /* auto */
/*  1*/ int8_t gap_1[3];  // -----------------------------  /* auto */
/*  4*/ void *handle;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005BAE70*/ MyMutex *constructor(char *);  // -----------  /* auto */
/*005BAEB0*/ void *destroy();  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyMutex) == 0x8);  // ---------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_MUTEX_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
