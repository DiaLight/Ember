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
/* 24*/ int32_t field_20;  // ----------------------------  /* auto */
/* 28*/ int32_t f24_renderFun;  // -----------------------  /* auto */
/* 2C*/ int32_t field_28;  // ----------------------------  /* auto */
/* 30*/ int32_t f2C_textId;  // --------------------------  /* auto */
/* 34*/ int32_t f30_idxLow;  // --------------------------  /* auto */
/* 38*/ int32_t *f34_idxHigh;  // ------------------------  /* auto */
/* 3C*/ int32_t f38_unkIdx;  // --------------------------  /* auto */
/* 40*/ int8_t field_3C;  // -----------------------------  /* auto */
/* 41*/ int32_t f3D__isPressed;  // ----------------------  /* auto */
/* 45*/ int32_t field_41;  // ----------------------------  /* auto */
/* 49*/ int32_t f45_containsCursor;  // ------------------  /* auto */
/* 4D*/ void (__cdecl *f49_pressFun)(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/* 51*/ void (__cdecl *f4D_releaseFun)(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/* 55*/ CWindow *f51_pWindow;  // ------------------------  /* auto */
/* 59*/ int32_t f55__nextWindowIdOnClick;  // ------------  /* auto */
/* 5D*/ int32_t f59__isExitOnClick;  // ------------------  /* auto */
/* 61*/ int32_t f5D_isVisible;  // -----------------------  /* auto */
/* 65*/ int16_t f61_posFlags;  // ------------------------  /* auto */
/* 67*/ int32_t field_63;  // ----------------------------  /* auto */
/* 6B*/ int32_t f67__textId;  // -------------------------  /* auto */
/* 6F*/ int32_t field_6B;  // ----------------------------  /* auto */
/* 73*/ int8_t f6F_kind;  // -----------------------------  /* auto */
/* 74*/ int32_t f70_;  // --------------------------------  /* auto */
/* 78*/ int32_t f74_prev;  // ----------------------------  /* auto */
/* 7C*/ CButton *f78_next;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066ECA4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CGadget  --------------------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(char);  // = 005282C0  /* auto */
/*---*/ // CButton  --------------------------------------  /* auto */
/*  4*/ virtual int32_t v_render(int32_t, int32_t);  // = 005282F0  /* auto */
/*  8*/ virtual int32_t v_handleClick(CDefaultPlayerInterface *);  // = 00634D60  /* auto */
/*  C*/ virtual int32_t v_configure(int32_t);  // = 005282A0  /* auto */
// -------------------------------------------------------  /* auto */
/*00528280*/ CButton *constructor();  // -----------------  /* auto */
/*005282A0*/ const void *fun_5282A0(ButtonCfg *);  // ----  /* auto */
/*00528300*/ int32_t configure(CWindow *, ButtonCfg *, CButton *);  /* auto */
/*00528430*/ int32_t visitCursor(Pos2i *);  // -----------  /* auto */
/*005284B0*/ BOOL containsPoint(Pos2i *);  // ------------  /* auto */
/*00528520*/ int32_t *sub_528520(int32_t *);  // ---------  /* auto */
/*00528570*/ AABB *getScreenAABB(AABB *);  // ------------  /* auto */
/*00528800*/ int32_t CVerticalSlider_fun_528800(int32_t, int32_t);  /* auto */
/*00529050*/ int32_t CVerticalSlider_fun_529050();  // ---  /* auto */
/*005290F0*/ int32_t CVerticalSlider_fun_5290F0();  // ---  /* auto */
/*005298E0*/ int32_t CHorizontalSlider_fun_5298E0();  // -  /* auto */
/*00529970*/ int32_t CHorizontalSlider_fun_529970();  // -  /* auto */
/*005299E0*/ int32_t CHorizontalSlider_fun_5299E0();  // -  /* auto */
/*00529A80*/ CButton *CDragButton_fun_529A80(int32_t);      /* auto */
/*00529C60*/ int32_t CCheckBoxButton_fun_529C60(int32_t, int32_t);  /* auto */
/*00529DC0*/ CButton *CCheckBoxButton_fun_529DC0(CDefaultPlayerInterface *);  /* auto */
/*00529EB0*/ int32_t CTextBox_fun_529EB0(int32_t, int32_t);  /* auto */
/*0052A010*/ CButton *CTextBox_fun_52A010(CDefaultPlayerInterface *);  /* auto */
/*0052B6A0*/ int32_t CProgressBar_fun_52B6A0(int32_t, int32_t);  /* auto */
/*0052B710*/ int32_t CClickTextButton_fun_52B710(int32_t, int32_t);  /* auto */
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
