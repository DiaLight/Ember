// -----------------  id: vtbl_006723A0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef OBJ6723_A0_H  // ---------------------------------  /* auto */
#define OBJ6723_A0_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct MyDdSurfaceEx;  // ------------------------------  /* auto */
  struct Obj6723A0;  // ----------------------------------  /* auto */
  struct Obj6723B8;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct Obj6723A0 {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006723A0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // Obj6723A0  ------------------------------------  /* auto */
/*  0*/ virtual void *v_scalar_destructor(char);  // = 005BAEF0  /* auto */
/*  4*/ virtual MyDdSurfaceEx *v_getPrimarySurf();  // = 005587E0  /* auto */
/*  8*/ virtual MyDdSurfaceEx *v_getCurOffScreenSurf();  // = 005D9910  /* auto */
/*  C*/ virtual AABB *v_getOffScreenAabb(AABB *);  // = 005D9920  /* auto */
/* 10*/ virtual void *v_isSurfaceFlag();  // = 005D9980  -  /* auto */
// -------------------------------------------------------  /* auto */
/*005587E0*/ MyDdSurfaceEx *getPrimarySurf();  // --------  /* auto */
/*005BAEF0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005D9910*/ MyDdSurfaceEx *getCurOffScreen();  // -------  /* auto */
/*005D9920*/ AABB *getOffScreenAabb(AABB *);  // ---------  /* auto */
/*005D9980*/ uint32_t isSurfaceFlag();  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(Obj6723A0) == 0x4);  // -------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //OBJ6723_A0_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
