// -----------------  id: vtbl_0067B9C8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_MB_TO_UNI_MAP_H  // ---------------------------  /* auto */
#define MY_MB_TO_UNI_MAP_H  // ---------------------------  /* auto */
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
  struct MyMbToUniMap;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyMbToUniMap : MySharedText {  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ uint8_t speciaStart;  // -------------------------  /* auto */
/*  9*/ uint8_t gap_9[1];  // ----------------------------  /* auto */
/*  A*/ __int16 maxMbChar;  // ---------------------------  /* auto */
/*  C*/ wchar_t *mb2wcharMap;  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B9C8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedText  ---------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual void *v_scalar_destructor(char);  // = 0062E3F0  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // MyMbToUniMap  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062E3A0*/ MyMbToUniMap *constructor(char, __int16, wchar_t *);  /* auto */
/*0062E3F0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*0062E410*/ void destructor();  // ----------------------  /* auto */
/*0062E440*/ uint32_t *convert(uint32_t *, wchar_t *, uint8_t *, __int16);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyMbToUniMap) == 0x10);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_MB_TO_UNI_MAP_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
