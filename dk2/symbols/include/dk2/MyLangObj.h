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
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/TbDiscFileStorage.h>  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyFileStorage;  // ------------------------------  /* auto */
  struct MyLangObj;  // ----------------------------------  /* auto */
  struct MyMbStringList;  // -----------------------------  /* auto */
  struct MyMbToUniMap;  // -------------------------------  /* auto */
  struct MyTextFont;  // ---------------------------------  /* auto */
  struct MyUniToMbMap;  // -------------------------------  /* auto */
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
/*0062DC50*/ int32_t createFileIteratorContentAndSet(int32_t, const char *);  /* auto */
/*0062DCA0*/ uint32_t *close(uint32_t *);  // ------------  /* auto */
/*0062DCD0*/ uint32_t *readResourceIndexFileByName(uint32_t *, char *);  /* auto */
/*0062DD40*/ int32_t readResourceIndexFile(int32_t, const char *);  /* auto */
/*0062DEE0*/ uint32_t *resolveMBToUni(uint32_t *, MyMbToUniMap **, int32_t);  /* auto */
/*0062DF30*/ uint32_t *resolveUniToMB(uint32_t *, MyUniToMbMap **, int32_t);  /* auto */
/*0062DF90*/ uint32_t *resolveText(uint32_t *, MyMbStringList **, int32_t);  /* auto */
/*0062DFF0*/ uint32_t *resolveFont(uint32_t *, MyTextFont **, int32_t);  /* auto */
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
