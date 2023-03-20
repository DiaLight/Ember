// -----------------  id: vtbl_00672380  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_INPUT_MANAGER_CB_H  // ------------------------  /* auto */
#define MY_INPUT_MANAGER_CB_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyDxInputManagerCb.h>  // ------------------  /* auto */
#include <dk2/Obj6723B8.h>  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct CComponent;  // ---------------------------------  /* auto */
  struct MyCb6723D0;  // ---------------------------------  /* auto */
  struct MyCollectDxAction;  // --------------------------  /* auto */
  struct MyCollectDxAction_Action;  // -------------------  /* auto */
  struct MyDxInputState;  // -----------------------------  /* auto */
  struct MyInputListenersHolder;  // ---------------------  /* auto */
  struct MyInputManagerCb;  // ---------------------------  /* auto */
  struct MyWindowMsgs;  // -------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
  struct StaticListeners;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyInputManagerCb : MyDxInputManagerCb {  // -------  /* auto */
// -------------------------------------------------------  /* auto */
/* 6C*/ MyInputListenersHolder *pInputListenersHolder;      /* auto */
/* 70*/ MyDxInputState *pdxInputState;  // ---------------  /* auto */
/* 74*/ MyWindowMsgs *pMyWindowMsgs;  // -----------------  /* auto */
/* 78*/ MyCollectDxAction *pDxActionCollector;  // -------  /* auto */
/* 7C*/ int32_t f7C;  // ---------------------------------  /* auto */
/* 80*/ MyCb6723D0 *pchildcb;  // ------------------------  /* auto */
/* 84*/ Obj6723B8 obj_84;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672380*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyDxInputManagerCb  ---------------------  /* auto */
/*  0*/ // virtual int32_t *v_f0_call(int32_t, Event0_winShown7 *);  // = 005BC280  /* auto */
/*  4*/ // virtual const void *v_f4_scalar_destructor(char);  // = 005BAF40  /* auto */
/*  8*/ // virtual int32_t *v_f8_initInputs(int32_t *);  // = 005BB0A0  /* auto */
/*  C*/ // virtual int32_t *v_fC_initMouse(int32_t *);  // = 005BB1C0  /* auto */
/* 10*/ // virtual int32_t *v_f10_initKeyInputs(int32_t *);  // = 005BB220  /* auto */
/* 14*/ // virtual int32_t *v_f14_releaseKeyboard(int32_t *);  // = 005BC130  /* auto */
/* 18*/ // virtual int32_t *v_f18_releaseMouse(int32_t *);  // = 005BC0F0  /* auto */
/*---*/ // MyInputManagerCb  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005BAF60*/ int32_t *destructor();  // ------------------  /* auto */
/*005BB020*/ int32_t setStaticListenersAndHandleDxActions(StaticListeners *, int32_t, CComponent *);  /* auto */
/*005BB0A0*/ int32_t *initInputs(int32_t *);  // ---------  /* auto */
/*005BB1A0*/ void windowMsgW(__int16, int32_t);  // ------  /* auto */
/*005BB1C0*/ int32_t *initMouse(int32_t *);  // ----------  /* auto */
/*005BB220*/ int32_t *initKeyInputs(int32_t *);  // ------  /* auto */
/*005BB280*/ int32_t MyInputManager_getKeyState(int32_t);   /* auto */
/*005BB2A0*/ int32_t *sub_5BB2A0(int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*005BB2F0*/ int32_t *resolveChildCb(int32_t *);  // -----  /* auto */
/*005BB480*/ int32_t popDxAction(MyCollectDxAction_Action *);  /* auto */
/*005BB500*/ int32_t *sub_5BB500(int32_t);  // -----------  /* auto */
/*005BB540*/ char sub_5BB540(int32_t);  // ---------------  /* auto */
/*005BB570*/ int32_t *setEnabled(int32_t);  // -----------  /* auto */
/*005BBEC0*/ int32_t *MyDxInputManagerCb_destructor();      /* auto */
/*005BC0F0*/ int32_t *MyDxInputManagerCb_releaseMouse(int32_t *);  /* auto */
/*005BC130*/ int32_t *MyDxInputManagerCb_releaseKeyboard(int32_t *);  /* auto */
/*005BC270*/ int32_t *updateMouse(AABB *);  // -----------  /* auto */
/*005BC460*/ void setMousePos(Pos2i *);  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyInputManagerCb) == 0x88);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_INPUT_MANAGER_CB_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
