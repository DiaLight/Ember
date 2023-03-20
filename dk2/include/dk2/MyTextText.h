// -----------------  id: vtbl_0067B950  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_TEXT_H  // -------------------------------  /* auto */
#define MY_TEXT_TEXT_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyFileStorage;  // ------------------------------  /* auto */
  struct MyTextBase;  // ---------------------------------  /* auto */
  struct MyTextText;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextText {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int8_t gap_4[4];  // -----------------------------  /* auto */
/*  8*/ int32_t numOffsets;  // --------------------------  /* auto */
/*  C*/ int32_t *offsets_and_data;  // -------------------  /* auto */
/* 10*/ MyTextBase *MBToUniText_idx1;  // ----------------  /* auto */
/* 14*/ MyTextBase *UniToMBText_idx2;  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B950*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyTextText  -----------------------------------  /* auto */
/*  0*/ virtual int32_t v_j_MySharedObj_release();  // = 0062D9A0  /* auto */
/*  4*/ virtual int32_t v_j_MySharedObj_addRef();  // = 0062FC40  /* auto */
/*  8*/ virtual const void *v_MyTextText_scalar_destructor(char);  // = 0062D660  /* auto */
/*  C*/ virtual const void *v_duplicate_0_1();  // = 0062D9A0  /* auto */
/* 10*/ virtual const void *v_duplicate_1_1();  // = 0062FC40  /* auto */
// -------------------------------------------------------  /* auto */
/*0062D590*/ MyTextText *constructor(int32_t, int32_t *, MyFileStorage *);  /* auto */
/*0062D680*/ int32_t destructor();  // -------------------  /* auto */
/*0062D960*/ const char *getString(int32_t);  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextText) == 0x18);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_TEXT_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
