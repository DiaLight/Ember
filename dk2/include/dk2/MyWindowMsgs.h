// -----------------  id: vtbl_00672438  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_WINDOW_MSGS_H  // -----------------------------  /* auto */
#define MY_WINDOW_MSGS_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MySignalBase.h>  // ------------------------  /* auto */
#include <dk2/PtrArrList.h>  // --------------------------  /* auto */
#include <dk2/WndMsgDxActionList.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyWindowMsgs;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyWindowMsgs : MySignalBase {  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 10*/ WndMsgDxActionList listWm;  // -------------------  /* auto */
/* 24*/ PtrArrList handleArr;  // ------------------------  /* auto */
/* 34*/ _RTL_CRITICAL_SECTION *pCritSection;  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672438*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005BBA10  /* auto */
/*---*/ // super MySignalBase  ---------------------------  /* auto */
/*  C*/ // virtual int32_t *v_processData();  // = 005DB130  /* auto */
/* 10*/ // virtual int32_t *v_initDevice(int32_t *);  // = 005DAF80  /* auto */
/*---*/ // MyWindowMsgs  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005DAFE0*/ void windowMsgWEx(int32_t, __int16, int32_t);  /* auto */
/*005DB110*/ void windowMsgW(__int16, int32_t);  // ------  /* auto */
/*005DB130*/ void sub_5DB130();  // ----------------------  /* auto */
/*005DB1F0*/ int32_t *recreateEvent(int32_t *);  // ------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyWindowMsgs) == 0x38);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_WINDOW_MSGS_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
