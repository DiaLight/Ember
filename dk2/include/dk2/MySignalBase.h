// -----------------  id: vtbl_00672800  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_SIGNAL_BASE_H  // -----------------------------  /* auto */
#define MY_SIGNAL_BASE_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MySharedObj.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct ControlKeysUpdater;  // -------------------------  /* auto */
  struct MySignalBase;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MySignalBase : MySharedObj {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ void *hEvent;  // --------------------------------  /* auto */
/*  C*/ ControlKeysUpdater *f8_pcontrolkeys;  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672800*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005DAEA0  /* auto */
/*---*/ // MySignalBase  ---------------------------------  /* auto */
/*  C*/ virtual int32_t *v_processData();  // = 00634D60    /* auto */
/* 10*/ virtual int32_t *v_initDevice(int32_t *);  // = 005DAF80  /* auto */
// -------------------------------------------------------  /* auto */
/*005DAE80*/ MySignalBase *constructor();  // ------------  /* auto */
/*005DAEC0*/ void *destructor();  // ---------------------  /* auto */
/*005DAF20*/ int32_t *recreateEvent(int32_t *);  // ------  /* auto */
/*005DAF60*/ void *closeEvent();  // ---------------------  /* auto */
/*005DAF80*/ int32_t *recreateEvent_0(int32_t *);  // ----  /* auto */
/*005DAFB0*/ int32_t setControlKeysUpdater(ControlKeysUpdater *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MySignalBase) == 0x10);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_SIGNAL_BASE_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
