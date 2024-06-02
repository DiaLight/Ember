// -----------------  id: vtbl_00672740  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_WAD_DIRECTORY_H  // ---------------------------  /* auto */
#define MY_WAD_DIRECTORY_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyDirectory.h>  // -------------------------  /* auto */
#include <dk2/MyStr.h>  // -------------------------------  /* auto */
#include <dk2/TbDiscFile.h>  // --------------------------  /* auto */
#include <dk2/WadContent.h>  // --------------------------  /* auto */
#include <dk2/WadHeader.h>  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct DiscFileBase;  // -------------------------------  /* auto */
  struct MyStream;  // -----------------------------------  /* auto */
  struct MyWadDirectory;  // -----------------------------  /* auto */
  struct TbCharStringList_vtbl;  // ----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyWadDirectory : MyDirectory {  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 24*/ MyStr str1;  // ----------------------------------  /* auto */
/* 38*/ uint32_t f38;  // --------------------------------  /* auto */
/* 3C*/ TbCharStringList_vtbl *TbCharStringList_instance;   /* auto */
/* 40*/ int32_t f40;  // ---------------------------------  /* auto */
/* 44*/ int32_t f44;  // ---------------------------------  /* auto */
/* 48*/ int32_t f48;  // ---------------------------------  /* auto */
/* 4C*/ MyStr str2;  // ----------------------------------  /* auto */
/* 60*/ WadHeader header;  // ----------------------------  /* auto */
/* B8*/ TbDiscFile diskFile;  // -------------------------  /* auto */
/* C0*/ MyStream *stream;  // ----------------------------  /* auto */
/* C4*/ WadContent wadContent;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672740*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyDirectory  ----------------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(char);  // = 005D8420  /* auto */
/*  4*/ // virtual void v_createStream(uint32_t *, TbDiscFile *, char *, int32_t, int32_t);  // = 005D8A60  /* auto */
/*  8*/ // virtual uint32_t *v_firstFile(uint32_t *, char *, MyFileInfo *);  // = 005D8850  /* auto */
/*  C*/ // virtual void *v_duplicate_1_2();  // = 005D8A00  /* auto */
/* 10*/ // virtual uint32_t *v_sub_5D82A0(uint32_t *, int32_t, int32_t);  // = 005D82A0  /* auto */
/* 14*/ // virtual uint32_t *v_formatFilePath(uint32_t *, char *, char *, int32_t);  // = 005D82D0  /* auto */
/* 18*/ // virtual int32_t v_sub_5D8360();  // = 005D8360   /* auto */
/* 1C*/ // virtual int32_t v_f1C(int32_t, int32_t, uint32_t);  // = 0061B080  /* auto */
/* 20*/ // virtual int32_t v_f20(int32_t, char *);  // = 005D8B00  /* auto */
/* 24*/ // virtual int32_t v_f24(int32_t, char *);  // = 00628BA0  /* auto */
/* 28*/ // virtual int32_t v_f28(int32_t, char *, char *);  // = 0061B080  /* auto */
/* 2C*/ // virtual int32_t v_wrapObj(int32_t);  // = 005D8280  /* auto */
/* 30*/ // virtual void *v_clearData();  // = 005D8510  --  /* auto */
/*---*/ // MyWadDirectory  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005D8370*/ MyWadDirectory *constructor();  // ----------  /* auto */
/*005D8420*/ void *deleting_destructor(char);  // --------  /* auto */
/*005D8440*/ BOOL destructor();  // ----------------------  /* auto */
/*005D8510*/ char **clearData();  // ---------------------  /* auto */
/*005D8560*/ uint32_t *readAndParse(uint32_t *, char *, __int16);  /* auto */
/*005D8850*/ uint32_t *sub_5D8850(uint32_t *, const char *, uint32_t);  /* auto */
/*005D8A00*/ uint32_t *sub_5D8A00(uint32_t *, int32_t);     /* auto */
/*005D8A60*/ uint32_t *sub_5D8A60(uint32_t *, DiscFileBase *, char *, int32_t, int32_t);  /* auto */
/*005D8B10*/ uint32_t *openFile(uint32_t *, DiscFileBase *, char *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyWadDirectory) == 0xE0);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_WAD_DIRECTORY_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */