// --------------  id: construct_0057D91E  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MESH_VERT_EX_H  // -------------------------------  /* auto */
#define MESH_VERT_EX_H  // -------------------------------  /* auto */
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
struct MeshVertEx {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t index;  // -------------------------------  /* auto */
/*  4*/ float x;  // -------------------------------------  /* auto */
/*  8*/ float y;  // -------------------------------------  /* auto */
/*  C*/ float z;  // -------------------------------------  /* auto */
/* 10*/ int32_t uv;  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MeshVertEx) == 0x14);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MESH_VERT_EX_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
