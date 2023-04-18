// -----------------  id: vtbl_00672778  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DISK_DIRECTORY_H  // --------------------------  /* auto */
#define MY_DISK_DIRECTORY_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyDirectory.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyDiskDirectory;  // ----------------------------  /* auto */
  struct MyFileInfo;  // ---------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDiskDirectory : MyDirectory {  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 24*/ int32_t _end_f24_hFind;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672778*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyDirectory  ----------------------------  /* auto */
/*  0*/ // virtual const void *v_scalar_destructor(char);  // = 005D9220  /* auto */
/*  4*/ // virtual void v_createStream(int32_t *, TbDiscFile *, const char *, int32_t, int32_t);  // = 005D94D0  /* auto */
/*  8*/ // virtual int32_t *v_firstFile(int32_t *, const char *, MyFileInfo *);  // = 005D9290  /* auto */
/*  C*/ // virtual const void *v_duplicate_1_2();  // = 005D93E0  /* auto */
/* 10*/ // virtual int32_t *v_sub_5D82A0(int32_t *, int32_t, int32_t);  // = 005D82A0  /* auto */
/* 14*/ // virtual int32_t *v_formatFilePath(int32_t *, const char *, const char *, int32_t);  // = 005D82D0  /* auto */
/* 18*/ // virtual int32_t v_sub_5D8360();  // = 005D8360   /* auto */
/* 1C*/ // virtual int32_t v_f1C(int32_t, int32_t, int32_t);  // = 005D96C0  /* auto */
/* 20*/ // virtual int32_t v_f20(int32_t, const char *);  // = 005D9740  /* auto */
/* 24*/ // virtual int32_t v_f24(int32_t, const char *);  // = 005D97C0  /* auto */
/* 28*/ // virtual int32_t v_f28(int32_t, const char *, const char *);  // = 005D9860  /* auto */
/* 2C*/ // virtual int32_t v_wrapObj(int32_t);  // = 005D8280  /* auto */
/* 30*/ // virtual const void *v_clearData();  // = 00401200  /* auto */
/*---*/ // MyDiskDirectory  ------------------------------  /* auto */
/* 34*/ virtual const void *v_close();  // = 005D9450  ---  /* auto */
// -------------------------------------------------------  /* auto */
/*005D9200*/ MyDiskDirectory *constructor();  // ---------  /* auto */
/*005D9220*/ MyDiskDirectory *deleting_destructor(char);    /* auto */
/*005D9240*/ void destructor();  // ----------------------  /* auto */
/*005D9290*/ int32_t *sub_5D9290(int32_t *, const char *, MyFileInfo *);  /* auto */
/*005D93E0*/ int32_t *sub_5D93E0(int32_t *, int32_t);       /* auto */
/*005D9450*/ const void *close();  // --------------------  /* auto */
/*005D94D0*/ int32_t *createFileStream(int32_t *, TbDiscFile *, const char *, int32_t, int32_t);  /* auto */
/*005D9620*/ int32_t *setPath(int32_t *, const char *);     /* auto */
/*005D96C0*/ int32_t sub_5D96C0(int32_t, int32_t, int32_t);  /* auto */
/*005D9740*/ int32_t sub_5D9740(int32_t, const char *);     /* auto */
/*005D97C0*/ int32_t sub_5D97C0(int32_t, const char *);     /* auto */
/*005D9860*/ int32_t sub_5D9860(int32_t, const char *, const char *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDiskDirectory) == 0x28);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DISK_DIRECTORY_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
