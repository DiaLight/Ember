// -----------------  id: vtbl_0067B9B0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_UNI_TO_MB_MAP_H  // ---------------------------  /* auto */
#define MY_UNI_TO_MB_MAP_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/textmap/MySharedText.h>  // -----------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyUniToMbMap;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyUniToMbMap : MySharedText {  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B9B0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedText  ---------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual void *v_scalar_destructor(char);  // = 0062E090  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // MyUniToMbMap  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062E050*/ MyUniToMbMap *constructor(int32_t);  // -----  /* auto */
/*0062E090*/ void *scalar_destructor(char);  // ----------  /* auto */
/*0062E0B0*/ void destructor();  // ----------------------  /* auto */
/*0062E0E0*/ uint16_t convertChar(int32_t);  // ----------  /* auto */
/*0062E0F0*/ uint16_t convertChar2(uint16_t);  // --------  /* auto */
/*0062E1F0*/ uint32_t *convert(uint32_t *, uint8_t *, wchar_t *, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyUniToMbMap) == 0xC);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_UNI_TO_MB_MAP_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
