// -----------------  id: vtbl_006728F8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MOUSE_RGB_DX_ACTION_H  // ------------------------  /* auto */
#define MOUSE_RGB_DX_ACTION_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/DxAction.h>  // ----------------------------  /* auto */
#include <dk2/Pos2i.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MouseRgbDxAction;  // ---------------------------  /* auto */
  struct MyDxInputState;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MouseRgbDxAction : DxAction {  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ int8_t gap_C[4];  // -----------------------------  /* auto */
/* 10*/ int32_t KeyCode_F0toF3;  // ----------------------  /* auto */
/* 14*/ Pos2i pos;  // -----------------------------------  /* auto */
/* 1C*/ int32_t data;  // --------------------------------  /* auto */
/* 20*/ int32_t btnPressFlags;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006728F8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super DxAction  -------------------------------  /* auto */
/*  0*/ // virtual int32_t v_applyToState(MyDxInputState *);  // = 005DD8C0  /* auto */
/*---*/ // MouseRgbDxAction  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005DD8C0*/ int32_t applyToState(MyDxInputState *);  // -  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MouseRgbDxAction) == 0x24);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MOUSE_RGB_DX_ACTION_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
