// -----------------  id: vtbl_0066F214  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_FILE_MANAGER_H  // -----------------------------  /* auto */
#define C_FILE_MANAGER_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/FileStorageBase.h>  // ---------------------  /* auto */
#include <dk2/MyFileInfo.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CFileManager;  // -------------------------------  /* auto */
  struct CFileManager_f130;  // --------------------------  /* auto */
  struct DiscFileBase;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CFileManager : FileStorageBase {  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ MyFileInfo fileInfo;  // -------------------------  /* auto */
/*130*/ CFileManager_f130 *list;  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066F214*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super FileStorageBase  ------------------------  /* auto */
/*  0*/ // virtual int32_t v_releaseContent();  // = 00556980  /* auto */
/*  4*/ // virtual int32_t *v_firstFile(int32_t *, const char *, MyFileInfo *);  // = 005B9DD0  /* auto */
/*  8*/ // virtual int32_t *v_FileStorageBase_fun_5B9E00(int32_t *, int32_t);  // = 005B9E00  /* auto */
/*  C*/ // virtual int32_t *v_openInputStream(int32_t *, TbDiscFile *, const char *, int32_t, int32_t);  // = 005B9E30  /* auto */
/* 10*/ // virtual int32_t *v_FileStorageBase_fun_5B9D60(int32_t *, int32_t, int32_t);  // = 005B9D60  /* auto */
/* 14*/ // virtual int32_t *v_formatFilePath(int32_t *, const char *, const char *, int32_t);  // = 005B9D90  /* auto */
/* 18*/ // virtual int32_t v_TbWadFileStorage__fun_5B9E70();  // = 00556B70  /* auto */
/* 1C*/ // virtual int32_t *v_FileStorageBase_fun_5B9EB0(int32_t *, int32_t, int32_t);  // = 005B9EB0  /* auto */
/* 20*/ // virtual int32_t *v_FileStorageBase_fun_5B9EE0(int32_t *, int32_t);  // = 005B9EE0  /* auto */
/* 24*/ // virtual int32_t *v_FileStorageBase_fun_5B9F10(int32_t *, int32_t);  // = 005B9F10  /* auto */
/* 28*/ // virtual int32_t *v_FileStorageBase_fun_5B9F40(int32_t *, int32_t, int32_t);  // = 005B9F40  /* auto */
/* 2C*/ // virtual const void *v_scalar_destructor(char);  // = 005568A0  /* auto */
/*---*/ // CFileManager  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00556870*/ CFileManager *constructor();  // ------------  /* auto */
/*005568C0*/ int32_t destructor();  // -------------------  /* auto */
/*00556980*/ void clearDirsList();  // -------------------  /* auto */
/*00556A20*/ const char **sub_556A20(const char **, DiscFileBase *, const char *);  /* auto */
/*00556B70*/ CFileManager_f130 *fun_556B70();  // --------  /* auto */
/*00556C90*/ int32_t *addFileDir(int32_t *, FileStorageBase *);  /* auto */
/*00556D90*/ const char *findFile(const char *);  // -----  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CFileManager) == 0x134);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_FILE_MANAGER_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
