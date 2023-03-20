// -----------------  id: vtbl_006728B0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_MOUSE_H  // -----------------------------------  /* auto */
#define MY_MOUSE_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/AABB.h>  // --------------------------------  /* auto */
#include <dk2/MyComEx.h>  // -----------------------------  /* auto */
#include <dk2/Pos2i.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MouseRgbDxAction;  // ---------------------------  /* auto */
  struct MouseXyzDxAction;  // ---------------------------  /* auto */
  struct MyMouse;  // ------------------------------------  /* auto */
  struct Obj672844;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyMouse : MyComEx {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ Obj672844 *f8_pobj;  // --------------------------  /* auto */
/* 10*/ Pos2i fC_pos;  // --------------------------------  /* auto */
/* 18*/ Pos2i f14_pos2_prev;  // -------------------------  /* auto */
/* 20*/ float f1C_flX;  // -------------------------------  /* auto */
/* 24*/ float f20_flY;  // -------------------------------  /* auto */
/* 28*/ float f24_flX2;  // ------------------------------  /* auto */
/* 2C*/ float f28_flY2;  // ------------------------------  /* auto */
/* 30*/ float f2C_speed_cfg;  // -------------------------  /* auto */
/* 34*/ AABB f30_aabb;  // -------------------------------  /* auto */
/* 44*/ int32_t f40_dblClickTime;  // --------------------  /* auto */
/* 48*/ int32_t f44_dblClickKey;  // ---------------------  /* auto */
/* 4C*/ int32_t f48_dblClickThreshold;  // ---------------  /* auto */
/* 50*/ int32_t f4C_x_threshold;  // ---------------------  /* auto */
/* 54*/ int32_t f50_y_threshold;  // ---------------------  /* auto */
/* 58*/ int32_t f54_acceleration;  // --------------------  /* auto */
/* 5C*/ int32_t f58_target___;  // -----------------------  /* auto */
/* 60*/ int32_t f5C_isButtonsSwaped;  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006728B0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005DD430  /* auto */
/*---*/ // super MyComEx  --------------------------------  /* auto */
/*  C*/ // virtual void v_fun1(int32_t);  // = 005671E0  -  /* auto */
/* 10*/ // virtual int32_t v_fun2(DxAction *);  // = 005BB760  /* auto */
/* 14*/ // virtual int32_t v_fun3(DxAction *);  // = 005DD4A0  /* auto */
/* 18*/ // virtual int32_t v_fun4(DxAction *);  // = 005DD560  /* auto */
/*---*/ // MyMouse  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005DD360*/ MyMouse *constructor();  // -----------------  /* auto */
/*005DD450*/ int32_t destructor();  // -------------------  /* auto */
/*005DD4A0*/ void fun3_xyzAction(MouseXyzDxAction *);       /* auto */
/*005DD560*/ MouseRgbDxAction *fun4(MouseRgbDxAction *);    /* auto */
/*005DD630*/ void updatePos();  // -----------------------  /* auto */
/*005DD6D0*/ void setPos(Pos2i *);  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyMouse) == 0x64);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_MOUSE_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
