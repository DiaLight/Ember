// -----------------  id: vtbl_006723E8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_INPUT_LISTENERS_HOLDER_H  // ------------------  /* auto */
#define MY_INPUT_LISTENERS_HOLDER_H  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyComEx.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CComponent;  // ---------------------------------  /* auto */
  struct MouseRgbDxAction;  // ---------------------------  /* auto */
  struct MyInputListenersHolder;  // ---------------------  /* auto */
  struct StaticListeners;  // ----------------------------  /* auto */
  struct WndMsgDxAction;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyInputListenersHolder : MyComEx {  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ StaticListeners *static_listeners;  // -----------  /* auto */
/* 10*/ CComponent *ccomponent;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006723E8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005BB690  /* auto */
/*---*/ // super MyComEx  --------------------------------  /* auto */
/*  C*/ // virtual void v_fun1(int32_t);  // = 005671E0  -  /* auto */
/* 10*/ // virtual int32_t v_fun2(DxAction *);  // = 005DC9E0  /* auto */
/* 14*/ // virtual int32_t v_fun3(DxAction *);  // = 005BB660  /* auto */
/* 18*/ // virtual int32_t v_fun4(DxAction *);  // = 005DC920  /* auto */
/*---*/ // MyInputListenersHolder  -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005BB690*/ void *deleting_destructor(char);  // --------  /* auto */
/*005BB6B0*/ int32_t destructor();  // -------------------  /* auto */
/*005DC920*/ void fun4(MouseRgbDxAction *);  // ----------  /* auto */
/*005DC9E0*/ int32_t *fun2(WndMsgDxAction *);  // --------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyInputListenersHolder) == 0x14);      /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_INPUT_LISTENERS_HOLDER_H  --------------------  /* auto */
// -------------------------------------------------------  /* auto */
