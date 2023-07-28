// -----------------  id: vtbl_0066FBCC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_MESH_RESOURCE_BASE_H  // -----------------------  /* auto */
#define C_MESH_RESOURCE_BASE_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CMeshResourceBase {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t f0_unk_base;  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FBCC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CMeshResourceBase  ----------------------------  /* auto */
/*  0*/ virtual void *v_deleting_destructor(uint32_t);  // = 0057E570  /* auto */
/*  4*/ virtual int32_t v_getType();  // = 00634D60  -----  /* auto */
/*  8*/ virtual void v_resolve(int32_t);  // = 00634D60  -  /* auto */
// -------------------------------------------------------  /* auto */
/*0057E570*/ void *deleting_destructor(uint32_t);  // ----  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CMeshResourceBase) == 0x8);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_MESH_RESOURCE_BASE_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
