// -----------------  id: vtbl_006728E0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DX_MOUSE_H  // --------------------------------  /* auto */
#define MY_DX_MOUSE_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MouseRgbDxActionList.h>  // ----------------  /* auto */
#include <dk2/MouseXyzDxActionList.h>  // ----------------  /* auto */
#include <dk2/MyDirectInput.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyDxMouse;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDxMouse : MyDirectInput {  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 34*/ MouseXyzDxActionList listXYZ;  // ----------------  /* auto */
/* 48*/ MouseRgbDxActionList listRGB;  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006728E0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005DD8D0  /* auto */
/*---*/ // super MySignalBase  ---------------------------  /* auto */
/*  C*/ // virtual int32_t *v_processData();  // = 006005B0  /* auto */
/* 10*/ // virtual int32_t *v_initDevice(int32_t *);  // = 00600500  /* auto */
/*---*/ // super MyDirectInput  --------------------------  /* auto */
/* 14*/ // virtual int32_t v_handleData(int32_t);  // = 005DDA90  /* auto */
/*---*/ // MyDxMouse  ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005DD760*/ MyDxMouse *constructor();  // ---------------  /* auto */
/*005DD8D0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005DD8F0*/ void *destructor();  // ---------------------  /* auto */
/*005DDA90*/ void handleData(int32_t);  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDxMouse) == 0x5C);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DX_MOUSE_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
