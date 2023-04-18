// -----------------  id: vtbl_0066F20C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_WINDOW_TEST_H  // ------------------------------  /* auto */
#define C_WINDOW_TEST_H  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyDdSurfaceEx.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct CWindowTest;  // --------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CWindowTest {  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ HWND__ *hWnd;  // --------------------------------  /* auto */
/*  8*/ MyDdSurfaceEx offScreenSurf;  // -----------------  /* auto */
/* 58*/ MyDdSurfaceEx *pCurOffScreenSurf;  // ------------  /* auto */
/* 5C*/ int32_t f5C;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066F20C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CWindowTest  ----------------------------------  /* auto */
/*  0*/ virtual const void *v_DESTRUCTOR_CWindowTest_void(char);  // = 00555BD0  /* auto */
// -------------------------------------------------------  /* auto */
/*00555B90*/ CWindowTest *constructor();  // -------------  /* auto */
/*00555CC0*/ int32_t *create(int32_t *, AABB *);  // -----  /* auto */
/*00555F30*/ int32_t *recreateBullfrog(int32_t *);  // ---  /* auto */
/*00555FF0*/ AABB *getClientRect(AABB *);  // ------------  /* auto */
/*00556030*/ int32_t *createBackSurface();  // -----------  /* auto */
/*00556180*/ int32_t *sub_556180(int32_t *, int32_t *, int32_t);  /* auto */
/*00556260*/ void sub_556260_ev1();  // ------------------  /* auto */
/*005565E0*/ MyDdSurfaceEx *getCurOffScreenSurf();  // ---  /* auto */
/*005565F0*/ int32_t recreate();  // ---------------------  /* auto */
/*005567F0*/ int32_t isNeedBlt();  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CWindowTest) == 0x60);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_WINDOW_TEST_H  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
