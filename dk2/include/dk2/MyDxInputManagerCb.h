// -----------------  id: vtbl_00672480  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DX_INPUT_MANAGER_CB_H  // ---------------------  /* auto */
#define MY_DX_INPUT_MANAGER_CB_H  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/AsyncThing.h>  // --------------------------  /* auto */
#include <dk2/MyCbHandle.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct ControlKeysUpdater;  // -------------------------  /* auto */
  struct DxActionQueue;  // ------------------------------  /* auto */
  struct Event0_winShown7;  // ---------------------------  /* auto */
  struct MyDxInputManagerCb;  // -------------------------  /* auto */
  struct MyDxKeyboard;  // -------------------------------  /* auto */
  struct MyDxMouse;  // ----------------------------------  /* auto */
  struct MyMouseUpdater;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDxInputManagerCb {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyCbHandle f0_cbhandle;  // ----------------------  /* auto */
/* 10*/ AsyncThing fC_async;  // -------------------------  /* auto */
/* 54*/ int32_t f50_createDD_state;  // ------------------  /* auto */
/* 58*/ MyDxKeyboard *f54_pdxKeyboard;  // ---------------  /* auto */
/* 5C*/ MyDxMouse *f58_pdxmouse;  // ---------------------  /* auto */
/* 60*/ ControlKeysUpdater *f5C_controlKeys;  // ---------  /* auto */
/* 64*/ MyMouseUpdater *f60_mouse;  // -------------------  /* auto */
/* 68*/ DxActionQueue *f64_dxActionQueue;  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672480*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyDxInputManagerCb  ---------------------------  /* auto */
/*  0*/ virtual int32_t *v_f0_call(int32_t, Event0_winShown7 *);  // = 005BC280  /* auto */
/*  4*/ virtual const void *v_f4_scalar_destructor(char);  // = 005BBEA0  /* auto */
/*  8*/ virtual int32_t *v_f8_initInputs(int32_t *);  // = 005BBF90  /* auto */
/*  C*/ virtual int32_t *v_fC_initMouse(int32_t *);  // = 005BC060  /* auto */
/* 10*/ virtual int32_t *v_f10_initKeyInputs(int32_t *);  // = 005BC170  /* auto */
/* 14*/ virtual int32_t *v_f14_releaseKeyboard(int32_t *);  // = 005BC130  /* auto */
/* 18*/ virtual int32_t *v_f18_releaseMouse(int32_t *);  // = 005BC0F0  /* auto */
// -------------------------------------------------------  /* auto */
/*005BBE20*/ MyDxInputManagerCb *constructor();  // ------  /* auto */
/*005BBF90*/ int32_t *initInputs(int32_t *);  // ---------  /* auto */
/*005BC060*/ int32_t *initMouse(int32_t *);  // ----------  /* auto */
/*005BC170*/ int32_t *initKeyboard(int32_t *);  // -------  /* auto */
/*005BC210*/ int32_t onWindowActivated(int32_t, int32_t);   /* auto */
/*005BC280*/ int32_t *call(int32_t, Event0_winShown7 *);    /* auto */
/*005BC3A0*/ int32_t *updateCoopLevelAndSignal(int32_t *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDxInputManagerCb) == 0x6C);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DX_INPUT_MANAGER_CB_H  -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
