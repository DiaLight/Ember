// -------------  id: constructor_0062DBD0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_LANG_OBJ_H  // --------------------------------  /* auto */
#define MY_LANG_OBJ_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/TbDiscFileStorage.h>  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyFileStorage;  // ------------------------------  /* auto */
  struct MyLangObj;  // ----------------------------------  /* auto */
  struct MyTextMBToUni;  // ------------------------------  /* auto */
  struct MyTextText;  // ---------------------------------  /* auto */
  struct MyTextUniToMB;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyLangObj {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ MyFileStorage *resourceIndex;  // ----------------  /* auto */
/*  4*/ TbDiscFileStorage diskFileStor;  // --------------  /* auto */
/*  C*/ int32_t diskStorHasContent;  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0062DBD0*/ MyLangObj *constructor();  // ---------------  /* auto */
/*0062DC50*/ int32_t createFileIteratorContentAndSet(int32_t, char *);  /* auto */
/*0062DCA0*/ int32_t *close(int32_t *);  // --------------  /* auto */
/*0062DCD0*/ int32_t *readResourceIndexFileByName(int32_t *, char *);  /* auto */
/*0062DD40*/ int32_t readResourceIndexFile(int32_t, char *);  /* auto */
/*0062DEE0*/ int32_t *resolveMBToUni(int32_t *, MyTextMBToUni **, int32_t);  /* auto */
/*0062DF30*/ int32_t *resolveUniToMB(int32_t *, MyTextUniToMB **, int32_t);  /* auto */
/*0062DF90*/ int32_t *resolveText(int32_t *, MyTextText **, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyLangObj) == 0x10);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_LANG_OBJ_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
