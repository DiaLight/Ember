// ------------  id: instance_00766660_entry  ------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_STRING_HASH_MAP__MY_MESH_RESOURCE_HOLDER_ENTRY_H  /* auto */
#define MY_STRING_HASH_MAP__MY_MESH_RESOURCE_HOLDER_ENTRY_H  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyMeshResourceHolder;  // -----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyStringHashMap_MyMeshResourceHolder_entry {  // --  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ const char *name;  // ----------------------------  /* auto */
/*  4*/ MyMeshResourceHolder *value;  // -----------------  /* auto */
/*  8*/ int32_t prev_idx;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyStringHashMap_MyMeshResourceHolder_entry) == 0xC);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_STRING_HASH_MAP__MY_MESH_RESOURCE_HOLDER_ENTRY_H  /* auto */
// -------------------------------------------------------  /* auto */
