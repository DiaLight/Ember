// -----------------  id: vtbl_0067B950  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_MB_STRING_LIST_H  // --------------------------  /* auto */
#define MY_MB_STRING_LIST_H  // --------------------------  /* auto */
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
  struct MyFileStorage;  // ------------------------------  /* auto */
  struct MyMbStringList;  // -----------------------------  /* auto */
  struct MyMbToUniMap;  // -------------------------------  /* auto */
  struct MyTextFormatBase;  // ---------------------------  /* auto */
  struct MyUniToMbMap;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyMbStringList : MySharedText {  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ int32_t strings_count;  // -----------------------  /* auto */
/*  C*/ uint32_t *strings;  // ---------------------------  /* auto */
/* 10*/ MyMbToUniMap *MBToUniText_idx1;  // --------------  /* auto */
/* 14*/ MyUniToMbMap *UniToMBText_idx2;  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B950*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedText  ---------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062D9A0  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC40  ---  /* auto */
/*  8*/ // virtual void *v_scalar_destructor(char);  // = 0062D660  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // MyMbStringList  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062D590*/ MyMbStringList *constructor(int32_t, uint32_t *, MyFileStorage *);  /* auto */
/*0062D660*/ void *scalar_destructor(char);  // ----------  /* auto */
/*0062D680*/ int32_t destructor();  // -------------------  /* auto */
/*0062D6F0*/ int32_t doFormat(MyTextFormatBase *, int32_t, int32_t);  /* auto */
/*0062D960*/ const char *getString(uint32_t);  // --------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyMbStringList) == 0x18);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_MB_STRING_LIST_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
