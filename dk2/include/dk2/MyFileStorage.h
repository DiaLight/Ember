// -----------------  id: vtbl_0067BA30  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FILE_STORAGE_H  // ----------------------------  /* auto */
#define MY_FILE_STORAGE_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyTextBase.h>  // --------------------------  /* auto */
#include <dk2/TbDiscFileStorage.h>  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct DiscFileBase;  // -------------------------------  /* auto */
  struct MyFileStorage;  // ------------------------------  /* auto */
  struct ResourceIndexEntry;  // -------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFileStorage : MyTextBase {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ ResourceIndexEntry *resourceIndex_start;  // -----  /* auto */
/*  C*/ ResourceIndexEntry *resourceIndex_end;  // -------  /* auto */
/* 10*/ TbDiscFileStorage diskFileStor;  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BA30*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyTextBase  -----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual const void *v_scalar_destructor(char);  // = 0062FD60  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // MyFileStorage  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062FCF0*/ MyFileStorage *constructor();  // -----------  /* auto */
/*0062FE40*/ ResourceIndexEntry *binarySearch_(int32_t);    /* auto */
/*0062FEB0*/ int32_t *resolveResource(int32_t *, ResourceIndexEntry *, MyTextBase **);  /* auto */
/*0062FF50*/ int32_t *loadResource(int32_t *, ResourceIndexEntry *, MyTextBase **);  /* auto */
/*00630050*/ int32_t *openResourceStream(int32_t *, DiscFileBase *, ResourceIndexEntry *);  /* auto */
/*006300A0*/ int32_t *parseResourceIndex(int32_t *, const char *, ResourceIndexEntry *, int32_t);  /* auto */
/*00630160*/ ResourceIndexEntry *getResourceIndex(int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFileStorage) == 0x18);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FILE_STORAGE_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
