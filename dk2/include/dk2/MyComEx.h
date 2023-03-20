// -----------------  id: vtbl_00672418  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_COM_EX_H  // ----------------------------------  /* auto */
#define MY_COM_EX_H  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MySharedObj.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct DxAction;  // -----------------------------------  /* auto */
  struct MyComEx;  // ------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyComEx : MySharedObj {  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ MyComEx *f4_child;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672418*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005BB790  /* auto */
/*---*/ // MyComEx  --------------------------------------  /* auto */
/*  C*/ virtual void v_fun1(int32_t);  // = 005671E0  ----  /* auto */
/* 10*/ virtual int32_t v_fun2(DxAction *);  // = 005BB760  /* auto */
/* 14*/ virtual int32_t v_fun3(DxAction *);  // = 005BB660  /* auto */
/* 18*/ virtual int32_t v_fun4(DxAction *);  // = 005BB730  /* auto */
// -------------------------------------------------------  /* auto */
/*005BB660*/ DxAction *fun3(DxAction *);  // -------------  /* auto */
/*005BB730*/ int32_t fun4(int32_t);  // ------------------  /* auto */
/*005BB760*/ int32_t fun2(DxAction *);  // ---------------  /* auto */
/*005BB790*/ MyComEx *deleting_destructor(char);  // -----  /* auto */
/*005BB7B0*/ int32_t destructor();  // -------------------  /* auto */
/*005DA2D0*/ int32_t setChild(MyComEx *);  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyComEx) == 0xC);  // ---------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_COM_EX_H  ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
