// -----------------  id: vtbl_00672708  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DIRECTORY_H  // -------------------------------  /* auto */
#define MY_DIRECTORY_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyStr.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyDirectory;  // --------------------------------  /* auto */
  struct MyFileInfo;  // ---------------------------------  /* auto */
  struct MySubStr;  // -----------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDirectory {  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyDirectory *f0_subStream;  // -------------------  /* auto */
/*  8*/ int32_t hSemaphore;  // --------------------------  /* auto */
/*  C*/ int32_t f8_refs;  // -----------------------------  /* auto */
/* 10*/ MyStr name;  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672708*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyDirectory  ----------------------------------  /* auto */
/*  0*/ virtual void *v_scalar_destructor(char);  // = 005D81B0  /* auto */
/*  4*/ virtual void v_createStream(uint32_t *, TbDiscFile *, char *, int32_t, int32_t);  // = 00634D60  /* auto */
/*  8*/ virtual uint32_t *v_firstFile(uint32_t *, char *, MyFileInfo *);  // = 00634D60  /* auto */
/*  C*/ virtual void *v_duplicate_1_2();  // = 00634D60  -  /* auto */
/* 10*/ virtual uint32_t *v_sub_5D82A0(uint32_t *, int32_t, int32_t);  // = 005D82A0  /* auto */
/* 14*/ virtual uint32_t *v_formatFilePath(uint32_t *, char *, char *, int32_t);  // = 005D82D0  /* auto */
/* 18*/ virtual int32_t v_sub_5D8360();  // = 005D8360  --  /* auto */
/* 1C*/ virtual int32_t v_f1C(int32_t, int32_t, uint32_t);  // = 00634D60  /* auto */
/* 20*/ virtual int32_t v_f20(int32_t, char *);  // = 00634D60  /* auto */
/* 24*/ virtual int32_t v_f24(int32_t, char *);  // = 00634D60  /* auto */
/* 28*/ virtual int32_t v_f28(int32_t, char *, char *);  // = 00634D60  /* auto */
/* 2C*/ virtual int32_t v_wrapObj(int32_t);  // = 005D8280  /* auto */
/* 30*/ virtual void *v_clearData();  // = 00634D60  -----  /* auto */
// -------------------------------------------------------  /* auto */
/*005D8150*/ MyDirectory *constructor();  // -------------  /* auto */
/*005D81B0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005D81D0*/ BOOL destructor();  // ----------------------  /* auto */
/*005D8220*/ int32_t addRef();  // -----------------------  /* auto */
/*005D8230*/ int32_t release();  // ----------------------  /* auto */
/*005D8280*/ MyDirectory *wrapDirectory(MyDirectory *);     /* auto */
/*005D82A0*/ uint32_t *sub_5D82A0(uint32_t *, int32_t, int32_t);  /* auto */
/*005D82D0*/ uint32_t *formatFilePath(uint32_t *, const char *, int32_t, int32_t);  /* auto */
/*005D8360*/ int32_t sub_5D8360();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDirectory) == 0x24);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DIRECTORY_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
