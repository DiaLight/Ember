// -----------------  id: vtbl_0066EC4C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_GAME_COMPONENT_H  // ---------------------------  /* auto */
#define C_GAME_COMPONENT_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CComponent.h>  // --------------------------  /* auto */
#include <dk2/MyProfiler.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CGameComponent;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CGameComponent : CComponent {  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ uint32_t exit_flag;  // --------------------------  /* auto */
/* 10*/ MyProfiler mt_profiler;  // ----------------------  /* auto */
/*2BA*/ uint32_t drawCount;  // --------------------------  /* auto */
/*2BE*/ int32_t f2BE;  // --------------------------------  /* auto */
/*2C2*/ uint32_t lastTimeMs;  // -------------------------  /* auto */
/*2C6*/ int32_t _vftable;  // ----------------------------  /* auto */
/*2CA*/ int32_t f2CA;  // --------------------------------  /* auto */
/*2CE*/ int32_t f2CE;  // --------------------------------  /* auto */
/*2D2*/ int32_t f2D2;  // --------------------------------  /* auto */
/*2D6*/ int32_t f2D6;  // --------------------------------  /* auto */
/*2DA*/ int32_t f2DA;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066EC4C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CComponent  -----------------------------  /* auto */
/*  0*/ // virtual uint32_t *v_deleting_destructor(char);  // = 005252B0  /* auto */
/*  4*/ // virtual int32_t v_f4_();  // = 004B4C20  ------  /* auto */
/*  8*/ // virtual void *v_f8_();  // = 00401200  --------  /* auto */
/*  C*/ // virtual int32_t v_handle();  // = 00525350  ---  /* auto */
/* 10*/ // virtual uint32_t *v_f10_();  // = 00525360  ---  /* auto */
/* 14*/ // virtual void ***v_mainGuiLoop();  // = 00525370  /* auto */
/*---*/ // CGameComponent  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005251A0*/ CGameComponent *constructor();  // ----------  /* auto */
/*005252B0*/ uint32_t *deleting_destructor(char);  // ----  /* auto */
/*005252D0*/ void destructor();  // ----------------------  /* auto */
/*00525350*/ int32_t setExit0();  // ---------------------  /* auto */
/*00525370*/ void ***mainGuiLoop();  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CGameComponent) == 0x2DE);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_GAME_COMPONENT_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
