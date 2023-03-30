// --------------  id: construct_00586B96  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef SCENE_OBJECT2_E_H  // ----------------------------  /* auto */
#define SCENE_OBJECT2_E_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEnginePrimitiveBase;  // -----------------------  /* auto */
  struct MyCESurfHandle;  // -----------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct SceneObject2E {  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ MyCESurfHandle *surfh[4];  // --------------------  /* auto */
/* 10*/ int32_t props_flags;  // -------------------------  /* auto */
/* 14*/ int32_t props_reductionLevel_andFlags;  // -------  /* auto */
/* 18*/ int16_t props_surfWidth8;  // --------------------  /* auto */
/* 1A*/ int16_t props_surfHeight8;  // -------------------  /* auto */
/* 1C*/ int8_t f1C;  // ----------------------------------  /* auto */
/* 1D*/ int8_t surfhCount;  // ---------------------------  /* auto */
/* 1E*/ char propsCount;  // -----------------------------  /* auto */
/* 1F*/ char trgObj;  // ---------------------------------  /* auto */
/* 20*/ char f20;  // ------------------------------------  /* auto */
/* 21*/ char f21;  // ------------------------------------  /* auto */
/* 22*/ int8_t gap_22[2];  // ----------------------------  /* auto */
/* 24*/ CEnginePrimitiveBase *onj__meshSprite;  // -------  /* auto */
/* 28*/ SceneObject2E *next;  // -------------------------  /* auto */
/* 2C*/ __int16 f2C_;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(SceneObject2E) == 0x2E);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //SCENE_OBJECT2_E_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
