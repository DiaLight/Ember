// -----------------  id: vtbl_006724A8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_MOUSE_UPDATER_H  // ---------------------------  /* auto */
#define MY_MOUSE_UPDATER_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyCbHandle.h>  // --------------------------  /* auto */
#include <dk2/MyMouse.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct MyMouseCb_vtbl;  // -----------------------------  /* auto */
  struct MyMouseUpdater;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyMouseUpdater : MyMouse {  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 64*/ MyMouseCb_vtbl *cb;  // --------------------------  /* auto */
/* 68*/ MyCbHandle cbhandle;  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006724A8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005BC630  /* auto */
/*---*/ // super MyComEx  --------------------------------  /* auto */
/*  C*/ // virtual void v_fun1(int32_t);  // = 005671E0  -  /* auto */
/* 10*/ // virtual int32_t v_fun2(DxAction *);  // = 005BB760  /* auto */
/* 14*/ // virtual int32_t v_fun3(DxAction *);  // = 005DD4A0  /* auto */
/* 18*/ // virtual int32_t v_fun4(DxAction *);  // = 005DD560  /* auto */
/*---*/ // super MyMouse  --------------------------------  /* auto */
/*---*/ // MyMouseUpdater  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005DD600*/ int32_t call(AABB *);  // -------------------  /* auto */
/*005DD730*/ int32_t *registerCallback(int32_t *);  // ---  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyMouseUpdater) == 0x74);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_MOUSE_UPDATER_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
