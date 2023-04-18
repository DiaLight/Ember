// -----------------  id: vtbl_00672888  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef CONTROL_KEYS_UPDATER_H  // -----------------------  /* auto */
#define CONTROL_KEYS_UPDATER_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyCallback.h>  // --------------------------  /* auto */
#include <dk2/MyCbHandle.h>  // --------------------------  /* auto */
#include <dk2/MyComEx.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct ControlKeysUpdater;  // -------------------------  /* auto */
  struct MouseRgbDxAction;  // ---------------------------  /* auto */
  struct MyCallback_vtbl;  // ----------------------------  /* auto */
  struct MyDirectInput;  // ------------------------------  /* auto */
  struct MyDxDevice;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct ControlKeysUpdater : MyComEx {  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ MyCallback mycb;  // -----------------------------  /* auto */
/* 10*/ MyCbHandle cbhandle;  // -------------------------  /* auto */
/* 1C*/ MyDirectInput *dinput;  // -----------------------  /* auto */
/* 20*/ int32_t controlKey_flags;  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672888*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005DCF40  /* auto */
/*---*/ // super MyComEx  --------------------------------  /* auto */
/*  C*/ // virtual void v_fun1(int32_t);  // = 005671E0  -  /* auto */
/* 10*/ // virtual int32_t v_fun2(DxAction *);  // = 005BB760  /* auto */
/* 14*/ // virtual int32_t v_fun3(DxAction *);  // = 005BB660  /* auto */
/* 18*/ // virtual int32_t v_fun4(DxAction *);  // = 005DD010  /* auto */
/*---*/ // ControlKeysUpdater  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005DCF00*/ ControlKeysUpdater *constructor();  // ------  /* auto */
/*005DCF60*/ MyCallback_vtbl **destructor();  // ---------  /* auto */
/*005DCFE0*/ int32_t *registerCallback(int32_t *);  // ---  /* auto */
/*005DD010*/ MouseRgbDxAction *fun4(MouseRgbDxAction *);    /* auto */
/*005DD270*/ char call(MyDxDevice *);  // ----------------  /* auto */
/*005DD310*/ int32_t *setDinputAndCall(int32_t *, MyDirectInput *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(ControlKeysUpdater) == 0x24);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //CONTROL_KEYS_UPDATER_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
