// -------------  id: constructor_0055E5A0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_RESOURCES_F2_E38_OBJ_H  // --------------------  /* auto */
#define MY_RESOURCES_F2_E38_OBJ_H  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct GameActionCtx;  // ------------------------------  /* auto */
  struct MyResources_f2E38Obj;  // -----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyResources_f2E38Obj {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ char f4;  // -------------------------------------  /* auto */
/*  5*/ int8_t gap_5[259];  // ---------------------------  /* auto */
/*108*/ int32_t f108;  // --------------------------------  /* auto */
/*10C*/ int32_t f10C;  // --------------------------------  /* auto */
/*110*/ int32_t f110;  // --------------------------------  /* auto */
/*114*/ int32_t pQuitValue;  // --------------------------  /* auto */
/*118*/ int32_t pUseCamera;  // --------------------------  /* auto */
/*11C*/ int32_t pUsePnumber;  // -------------------------  /* auto */
/*120*/ int32_t pNumberValue;  // ------------------------  /* auto */
/*124*/ int32_t f124;  // --------------------------------  /* auto */
/*128*/ int32_t f128;  // --------------------------------  /* auto */
/*12C*/ int32_t f12C;  // --------------------------------  /* auto */
/*130*/ int32_t f130;  // --------------------------------  /* auto */
/*134*/ int32_t pLoadDemoKey;  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0055E5A0*/ MyResources_f2E38Obj *constructor();  // ----  /* auto */
/*0055E7D0*/ int32_t load_sav_file(const char *, int32_t, int32_t);  /* auto */
/*0055EA10*/ int32_t *sub_55EA10(int32_t);  // -----------  /* auto */
/*0055EAB0*/ int32_t *sub_55EAB0(GameActionCtx *, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyResources_f2E38Obj) == 0x138);       /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_RESOURCES_F2_E38_OBJ_H  ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
