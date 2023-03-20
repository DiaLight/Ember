// -----------------  id: vtbl_0066EE94  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_WINDOW_H  // -----------------------------------  /* auto */
#define C_WINDOW_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CGadget.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct CButton;  // ------------------------------------  /* auto */
  struct CGuiManager;  // --------------------------------  /* auto */
  struct CWindow;  // ------------------------------------  /* auto */
  struct WindowCfg;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CWindow : CGadget {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 24*/ int32_t f20_updateFun;  // -----------------------  /* auto */
/* 28*/ int32_t f24_fun;  // -----------------------------  /* auto */
/* 2C*/ int32_t field_28;  // ----------------------------  /* auto */
/* 30*/ int32_t field_2C;  // ----------------------------  /* auto */
/* 34*/ int32_t field_30;  // ----------------------------  /* auto */
/* 38*/ int32_t field_34;  // ----------------------------  /* auto */
/* 3C*/ int32_t field_38;  // ----------------------------  /* auto */
/* 40*/ int32_t field_3C;  // ----------------------------  /* auto */
/* 44*/ int32_t f40_idx;  // -----------------------------  /* auto */
/* 48*/ int32_t f44_isCurrent;  // -----------------------  /* auto */
/* 4C*/ int16_t field_48;  // ----------------------------  /* auto */
/* 4E*/ CGuiManager *f4A_c_gui_manager;  // --------------  /* auto */
/* 52*/ int32_t field_4E;  // ----------------------------  /* auto */
/* 56*/ CWindow *f52_parent;  // -------------------------  /* auto */
/* 5A*/ int32_t field_56;  // ----------------------------  /* auto */
/* 5E*/ CWindow *f5A_prev;  // ---------------------------  /* auto */
/* 62*/ CWindow *f5E_next;  // ---------------------------  /* auto */
/* 66*/ int32_t field_62_bool;  // -----------------------  /* auto */
/* 6A*/ CButton *f66_buttons;  // ------------------------  /* auto */
/* 6E*/ __int16 _end_f6A_unk;  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066EE94*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CGadget  --------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 0052CD00  /* auto */
/*---*/ // CWindow  --------------------------------------  /* auto */
/*  4*/ virtual int32_t v_update();  // = 0052CD30  ------  /* auto */
// -------------------------------------------------------  /* auto */
/*0052CCE0*/ CWindow *constructor();  // -----------------  /* auto */
/*0052CD30*/ int32_t update();  // -----------------------  /* auto */
/*0052CDC0*/ AABB *sub_52CDC0(AABB *);  // ---------------  /* auto */
/*0052CE50*/ AABB *getScreenPos(AABB *);  // -------------  /* auto */
/*0052CED0*/ __int16 configure(WindowCfg *, CGuiManager *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CWindow) == 0x70);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_WINDOW_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
