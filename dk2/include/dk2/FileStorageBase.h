// -----------------  id: vtbl_00672348  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef FILE_STORAGE_BASE_H  // --------------------------  /* auto */
#define FILE_STORAGE_BASE_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct FileStorageBase;  // ----------------------------  /* auto */
  struct MyDirectory;  // --------------------------------  /* auto */
  struct MyFileInfo;  // ---------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
  struct TbDiscFileStorage;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct FileStorageBase {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyDirectory *dierctory;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672348*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // FileStorageBase  ------------------------------  /* auto */
/*  0*/ virtual int32_t v_releaseContent();  // = 005B9D40  /* auto */
/*  4*/ virtual int32_t *v_firstFile(int32_t *, const char *, MyFileInfo *);  // = 005B9DD0  /* auto */
/*  8*/ virtual int32_t *v_FileStorageBase_fun_5B9E00(int32_t *, int32_t);  // = 005B9E00  /* auto */
/*  C*/ virtual int32_t *v_openInputStream(int32_t *, TbDiscFile *, const char *, int32_t, int32_t);  // = 005B9E30  /* auto */
/* 10*/ virtual int32_t *v_FileStorageBase_fun_5B9D60(int32_t *, int32_t, int32_t);  // = 005B9D60  /* auto */
/* 14*/ virtual int32_t *v_formatFilePath(int32_t *, const char *, const char *, int32_t);  // = 005B9D90  /* auto */
/* 18*/ virtual int32_t v_TbWadFileStorage__fun_5B9E70();  // = 005B9E70  /* auto */
/* 1C*/ virtual int32_t *v_FileStorageBase_fun_5B9EB0(int32_t *, int32_t, int32_t);  // = 005B9EB0  /* auto */
/* 20*/ virtual int32_t *v_FileStorageBase_fun_5B9EE0(int32_t *, int32_t);  // = 005B9EE0  /* auto */
/* 24*/ virtual int32_t *v_FileStorageBase_fun_5B9F10(int32_t *, int32_t);  // = 005B9F10  /* auto */
/* 28*/ virtual int32_t *v_FileStorageBase_fun_5B9F40(int32_t *, int32_t, int32_t);  // = 005B9F40  /* auto */
/* 2C*/ virtual const void *v_scalar_destructor(char);  // = 005B9CE0  /* auto */
// -------------------------------------------------------  /* auto */
/*005B9CD0*/ FileStorageBase *constructor();  // ---------  /* auto */
/*005B9D00*/ FileStorageBase *copy_constructor(FileStorageBase *);  /* auto */
/*005B9D30*/ int32_t destructor();  // -------------------  /* auto */
/*005B9D40*/ int32_t releaseContent();  // ---------------  /* auto */
/*005B9D90*/ int32_t *formatFilePath(int32_t *, const char *, const char *, int32_t);  /* auto */
/*005B9DD0*/ int32_t *firstFile(int32_t *, const char *, MyFileInfo *);  /* auto */
/*005B9E70*/ int32_t TbWadFileStorage_fun_5B9E70();  // --  /* auto */
/*005B9E80*/ MyDirectory *pushDirectory(MyDirectory *);     /* auto */
/*005BAAD0*/ int32_t *TbWadFileStorage_readAndParse(int32_t *, const char *, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(FileStorageBase) == 0x8);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //FILE_STORAGE_BASE_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
