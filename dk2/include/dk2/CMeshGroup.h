// -----------------  id: vtbl_0066FBEC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_MESH_GROUP_H  // -------------------------------  /* auto */
#define C_MESH_GROUP_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CMeshResourceBase.h>  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CMeshGroup;  // ---------------------------------  /* auto */
  struct MyGroupElem;  // --------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CMeshGroup : CMeshResourceBase {  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t elemCount;  // ---------------------------  /* auto */
/*  C*/ MyGroupElem *elemArr;  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FBEC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CMeshResourceBase  ----------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(int32_t);  // = 0057EB70  /* auto */
/*  4*/ // virtual int32_t v_getType();  // = 0057EB60  --  /* auto */
/*  8*/ // virtual void v_resolve(int32_t);  // = 0057EB90  /* auto */
/*---*/ // CMeshGroup  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057EAF0*/ CMeshGroup *constructor(int32_t);  // -------  /* auto */
/*0057EB90*/ void resolveChildren(int32_t);  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CMeshGroup) == 0x10);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_MESH_GROUP_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
