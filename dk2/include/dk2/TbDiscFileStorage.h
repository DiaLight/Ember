// -----------------  id: vtbl_0066F3AC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef TB_DISC_FILE_STORAGE_H  // -----------------------  /* auto */
#define TB_DISC_FILE_STORAGE_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/FileStorageBase.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
  struct TbDiscFileStorage;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct TbDiscFileStorage : FileStorageBase {  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066F3AC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super FileStorageBase  ------------------------  /* auto */
/*  0*/ // virtual int32_t v_releaseContent();  // = 005B9D40  /* auto */
/*  4*/ // virtual int32_t *v_firstFile(int32_t *, char *, MyFileInfo *);  // = 005B9DD0  /* auto */
/*  8*/ // virtual int32_t *v_FileStorageBase_fun_5B9E00(int32_t *, int32_t);  // = 005B9E00  /* auto */
/*  C*/ // virtual int32_t *v_openInputStream(int32_t *, TbDiscFile *, char *, int32_t, int32_t);  // = 005B9E30  /* auto */
/* 10*/ // virtual int32_t *v_FileStorageBase_fun_5B9D60(int32_t *, int32_t, int32_t);  // = 005B9D60  /* auto */
/* 14*/ // virtual int32_t *v_formatFilePath(int32_t *, char *, char *, int32_t);  // = 005B9D90  /* auto */
/* 18*/ // virtual int32_t v_TbWadFileStorage__fun_5B9E70();  // = 005B9E70  /* auto */
/* 1C*/ // virtual int32_t *v_FileStorageBase_fun_5B9EB0(int32_t *, int32_t, int32_t);  // = 005B9EB0  /* auto */
/* 20*/ // virtual int32_t *v_FileStorageBase_fun_5B9EE0(int32_t *, int32_t);  // = 005B9EE0  /* auto */
/* 24*/ // virtual int32_t *v_FileStorageBase_fun_5B9F10(int32_t *, int32_t);  // = 005B9F10  /* auto */
/* 28*/ // virtual int32_t *v_FileStorageBase_fun_5B9F40(int32_t *, int32_t, int32_t);  // = 005B9F40  /* auto */
/* 2C*/ // virtual void *v_scalar_destructor(char);  // = 0055C000  /* auto */
/*---*/ // TbDiscFileStorage  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005B9E30*/ int32_t *openInputStream(int32_t *, TbDiscFile *, char *, int32_t, int32_t);  /* auto */
/*005BABA0*/ int32_t *openDirectory(int32_t *, char *);     /* auto */
/*0060F7B0*/ int32_t sub_60F7B0(int32_t, char *);  // ----  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(TbDiscFileStorage) == 0x8);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //TB_DISC_FILE_STORAGE_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
