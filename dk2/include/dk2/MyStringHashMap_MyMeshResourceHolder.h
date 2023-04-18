// ---------------  id: instance_00766660  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_STRING_HASH_MAP__MY_MESH_RESOURCE_HOLDER_H       /* auto */
#define MY_STRING_HASH_MAP__MY_MESH_RESOURCE_HOLDER_H       /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyEntryBuf_MyStringHashMap_MyMeshResourceHolder_entry.h>  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyStringHashMap_MyMeshResourceHolder {  // --------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t hashTable[256];  // ----------------------  /* auto */
/*400*/ int32_t idx;  // ---------------------------------  /* auto */
/*404*/ MyEntryBuf_MyStringHashMap_MyMeshResourceHolder_entry entries;  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyStringHashMap_MyMeshResourceHolder) == 0x410);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_STRING_HASH_MAP__MY_MESH_RESOURCE_HOLDER_H  --  /* auto */
// -------------------------------------------------------  /* auto */
