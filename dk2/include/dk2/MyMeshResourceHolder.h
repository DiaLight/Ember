// ---------------  id: call_new_0057EF64  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_MESH_RESOURCE_HOLDER_H  // --------------------  /* auto */
#define MY_MESH_RESOURCE_HOLDER_H  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CMeshResourceBase;  // --------------------------  /* auto */
  struct MyMeshResourceHolder;  // -----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyMeshResourceHolder {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ CMeshResourceBase *res;  // ----------------------  /* auto */
/*  4*/ MyMeshResourceHolder *next;  // ------------------  /* auto */
/*  8*/ MyMeshResourceHolder *prev;  // ------------------  /* auto */
/*  C*/ int32_t mapIdx;  // ------------------------------  /* auto */
/* 10*/ int32_t isResLoaded;  // -------------------------  /* auto */
/* 14*/ int32_t _initWidth;  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057ECE0*/ void markUsed();  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyMeshResourceHolder) == 0x18);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_MESH_RESOURCE_HOLDER_H  ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
