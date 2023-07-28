// -------------  id: constructor_004D10A0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_NAVIGATION_SYSTEM_H  // -----------------------  /* auto */
#define MY_NAVIGATION_SYSTEM_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/world/nav/MyNavigationSystemMap.h>  // -----  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct MyNavigationSystem;  // -------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyNavigationSystem {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t opened;  // ------------------------------  /* auto */
/*  4*/ MyNavigationSystemMap map;  // -------------------  /* auto */
/* 18*/ CWorld *world;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004D10A0*/ MyNavigationSystem *constructor();  // ------  /* auto */
/*004D10C0*/ void fun_4D10C0();  // ----------------------  /* auto */
/*004D10D0*/ int32_t open(int32_t, int32_t, CWorld *);      /* auto */
/*004D1150*/ void fun_4D1150();  // ----------------------  /* auto */
/*004D17D0*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyNavigationSystem) == 0x1C);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_NAVIGATION_SYSTEM_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
