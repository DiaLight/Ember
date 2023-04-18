// -----------------  id: vtbl_0066FA9C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_PRIMITIVE_BASE_H  // --------------------  /* auto */
#define C_ENGINE_PRIMITIVE_BASE_H  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEnginePrimitiveBase;  // -----------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEnginePrimitiveBase {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ CEnginePrimitiveBase *f0_parent;  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FA9C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CEnginePrimitiveBase  -------------------------  /* auto */
/*  0*/ virtual int32_t *v_deleting_destructor(char);  // = 005769F0  /* auto */
/*  4*/ virtual int32_t v___addRenderObj(int32_t, SceneObject2E *);  // = 00580470  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEnginePrimitiveBase) == 0x8);  // --  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_PRIMITIVE_BASE_H  ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
