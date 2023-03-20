// -----------------  id: vtbl_00672828  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DX_INPUT_STATE_H  // --------------------------  /* auto */
#define MY_DX_INPUT_STATE_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyCbHandle.h>  // --------------------------  /* auto */
#include <dk2/MyComEx.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MouseRgbDxAction;  // ---------------------------  /* auto */
  struct MyDxDevice;  // ---------------------------------  /* auto */
  struct MyDxInputState;  // -----------------------------  /* auto */
  struct MyDxInputStateCb_vtbl;  // ----------------------  /* auto */
  struct MyDxKeyboard;  // -------------------------------  /* auto */
  struct MyDxMouse;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDxInputState : MyComEx {  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ MyDxInputStateCb_vtbl *cb;  // -------------------  /* auto */
/* 10*/ MyCbHandle cbhandle;  // -------------------------  /* auto */
/* 1C*/ int8_t keyboardState[240];  // -------------------  /* auto */
/*10C*/ int32_t rgbButtons;  // --------------------------  /* auto */
/*110*/ char f110[12];  // -------------------------------  /* auto */
/*11C*/ MyDxKeyboard *dxkeyboard;  // --------------------  /* auto */
/*120*/ MyDxMouse *dxmouse;  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672828*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005DB4F0  /* auto */
/*---*/ // super MyComEx  --------------------------------  /* auto */
/*  C*/ // virtual void v_fun1(int32_t);  // = 005671E0  -  /* auto */
/* 10*/ // virtual int32_t v_fun2(DxAction *);  // = 005BB760  /* auto */
/* 14*/ // virtual int32_t v_fun3(DxAction *);  // = 005BB660  /* auto */
/* 18*/ // virtual int32_t v_fun4(DxAction *);  // = 005DB600  /* auto */
/*---*/ // MyDxInputState  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005DB450*/ MyDxInputState *constructor();  // ----------  /* auto */
/*005DB510*/ int32_t exception_destructor();  // ---------  /* auto */
/*005DB560*/ MyDxInputStateCb_vtbl **destructor();  // ---  /* auto */
/*005DB600*/ MouseRgbDxAction *fun4_updateRgbMouse(MouseRgbDxAction *);  /* auto */
/*005DB650*/ int32_t *setDxKeyboard(int32_t *, MyDxKeyboard *);  /* auto */
/*005DB6A0*/ int32_t *setDxMouse(int32_t *, MyDxMouse *);   /* auto */
/*005DB6F0*/ IDirectInputDeviceA *updateKeysState(MyDxDevice *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDxInputState) == 0x124);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DX_INPUT_STATE_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
