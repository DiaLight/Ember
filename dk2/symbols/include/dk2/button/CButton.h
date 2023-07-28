// -----------------  id: vtbl_0066ECA4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_BUTTON_H  // -----------------------------------  /* auto */
#define C_BUTTON_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CGadget.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct ButtonCfg;  // ----------------------------------  /* auto */
  struct CButton;  // ------------------------------------  /* auto */
  struct CDefaultPlayerInterface;  // --------------------  /* auto */
  struct CWindow;  // ------------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CButton : CGadget {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 24*/ uint32_t field_20;  // ---------------------------  /* auto */
/* 28*/ uint32_t f24_renderFun;  // ----------------------  /* auto */
/* 2C*/ uint32_t field_28;  // ---------------------------  /* auto */
/* 30*/ uint32_t f2C_textId;  // -------------------------  /* auto */
/* 34*/ uint32_t f30_idxLow;  // -------------------------  /* auto */
/* 38*/ uint32_t *f34_idxHigh;  // -----------------------  /* auto */
/* 3C*/ uint32_t f38_unkIdx;  // -------------------------  /* auto */
/* 40*/ uint8_t field_3C;  // ----------------------------  /* auto */
/* 41*/ uint32_t f3D__isPressed;  // ---------------------  /* auto */
/* 45*/ uint32_t field_41;  // ---------------------------  /* auto */
/* 49*/ uint32_t f45_containsCursor;  // -----------------  /* auto */
/* 4D*/ void (__cdecl *f49_pressFun)(uint32_t, uint32_t, CDefaultPlayerInterface *);  /* auto */
/* 51*/ void (__cdecl *f4D_releaseFun)(uint32_t, uint32_t, CDefaultPlayerInterface *);  /* auto */
/* 55*/ CWindow *f51_pWindow;  // ------------------------  /* auto */
/* 59*/ uint32_t f55__nextWindowIdOnClick;  // -----------  /* auto */
/* 5D*/ uint32_t f59__isExitOnClick;  // -----------------  /* auto */
/* 61*/ uint32_t f5D_isVisible;  // ----------------------  /* auto */
/* 65*/ uint16_t f61_posFlags;  // -----------------------  /* auto */
/* 67*/ uint32_t field_63;  // ---------------------------  /* auto */
/* 6B*/ uint32_t f67__textId;  // ------------------------  /* auto */
/* 6F*/ uint32_t field_6B;  // ---------------------------  /* auto */
/* 73*/ uint8_t f6F_kind;  // ----------------------------  /* auto */
/* 74*/ uint32_t f70_;  // -------------------------------  /* auto */
/* 78*/ uint32_t f74_prev;  // ---------------------------  /* auto */
/* 7C*/ CButton *f78_next;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066ECA4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CGadget  --------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 005282C0  /* auto */
/*---*/ // CButton  --------------------------------------  /* auto */
/*  4*/ virtual int32_t v_render(int32_t, int32_t);  // = 005282F0  /* auto */
/*  8*/ virtual int32_t v_handleClick(CDefaultPlayerInterface *);  // = 00634D60  /* auto */
/*  C*/ virtual int32_t v_configure(int32_t);  // = 005282A0  /* auto */
// -------------------------------------------------------  /* auto */
/*00528280*/ CButton *constructor();  // -----------------  /* auto */
/*005282A0*/ void *fun_5282A0(ButtonCfg *);  // ----------  /* auto */
/*005282C0*/ void *deleting_destructor(char);  // --------  /* auto */
/*005282E0*/ void destructor();  // ----------------------  /* auto */
/*00528300*/ int32_t configure(CWindow *, ButtonCfg *, CButton *);  /* auto */
/*00528430*/ int32_t visitCursor(Pos2i *);  // -----------  /* auto */
/*005284B0*/ BOOL containsPoint(Pos2i *);  // ------------  /* auto */
/*00528520*/ int32_t *fun_528520(int32_t *);  // ---------  /* auto */
/*00528570*/ AABB *getScreenAABB(AABB *);  // ------------  /* auto */
/*0052CAC0*/ void destructor2();  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CButton) == 0x80);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_BUTTON_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
