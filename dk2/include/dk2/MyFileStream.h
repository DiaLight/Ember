// -----------------  id: vtbl_00672FE8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FILE_STREAM_H  // -----------------------------  /* auto */
#define MY_FILE_STREAM_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyInputStream.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyFileStream;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFileStream : MyInputStream {  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ const void *hFile;  // ---------------------------  /* auto */
/* 10*/ int32_t offs;  // --------------------------------  /* auto */
/* 14*/ int32_t hFileMapping;  // ------------------------  /* auto */
/* 18*/ int32_t fileMapBuf;  // --------------------------  /* auto */
/* 1C*/ const void *semaphore;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672FE8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyInputStream  --------------------------  /* auto */
/*  0*/ // virtual const void *v_scalar_destructor(char);  // = 005FFE50  /* auto */
/*  4*/ // virtual size_t v_readBytes(const void *, size_t);  // = 005FFFB0  /* auto */
/*  8*/ // virtual size_t v_writeBytes(const void *, size_t);  // = 005FFFF0  /* auto */
/*  C*/ // virtual size_t v_seek(size_t, int32_t);  // = 00600030  /* auto */
/* 10*/ // virtual size_t v_getSize();  // = 00600050  ---  /* auto */
/* 14*/ // virtual size_t v_getOffs();  // = 005FFDB0  ---  /* auto */
/* 18*/ // virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 00600060  /* auto */
/* 1C*/ // virtual int32_t v_unmapFile(int32_t);  // = 00600120  /* auto */
/* 20*/ // virtual int32_t *v_flush(int32_t *);  // = 00600150  /* auto */
/* 24*/ // virtual void v_close();  // = 005FFF90  -------  /* auto */
/* 28*/ // virtual MyInputStream *v_wrapStream(MyInputStream *);  // = 005671E0  /* auto */
/* 2C*/ // virtual int32_t v_getSemaphore();  // = 00600140  /* auto */
/*---*/ // MyFileStream  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FFDB0*/ MyInputStream *MyAnyStream_getOffs();  // ---  /* auto */
/*005FFDF0*/ MyFileStream *constructor();  // ------------  /* auto */
/*005FFE70*/ void destructor();  // ----------------------  /* auto */
/*005FFEC0*/ int32_t open(int32_t, const char *, int32_t);  /* auto */
/*005FFF60*/ const void *closeMapping();  // -------------  /* auto */
/*005FFF90*/ const void *close();  // --------------------  /* auto */
/*005FFFB0*/ int32_t readBytes(const void *, int32_t);      /* auto */
/*005FFFF0*/ int32_t writeBytes(const void *, int32_t);     /* auto */
/*00600030*/ int32_t seek(int32_t, int32_t);  // ---------  /* auto */
/*00600060*/ const char *mapFileToBuf(int32_t, int32_t);    /* auto */
/*00600120*/ const void *unmapFile(const void *);  // ----  /* auto */
/*00600140*/ const void **getSemaphore();  // ------------  /* auto */
/*00600150*/ int32_t *flush(int32_t *);  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFileStream) == 0x20);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FILE_STREAM_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
