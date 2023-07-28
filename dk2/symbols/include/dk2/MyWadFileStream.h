// -----------------  id: vtbl_00672FB8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_WAD_FILE_STREAM_H  // -------------------------  /* auto */
#define MY_WAD_FILE_STREAM_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyCachedStream.h>  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyWadFileStream;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyWadFileStream : MyCachedStream {  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ int32_t compressedSize;  // ----------------------  /* auto */
/* 10*/ int32_t readOffs;  // ----------------------------  /* auto */
/* 14*/ int32_t fileOffset;  // --------------------------  /* auto */
/* 18*/ void *buf;  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672FB8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyStream  -------------------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(char);  // = 005FFAF0  /* auto */
/*  4*/ // virtual size_t v_readBytes(void *, size_t);  // = 005FFCE0  /* auto */
/*  8*/ // virtual size_t v_writeBytes(void *, size_t);  // = 005FF9D0  /* auto */
/*  C*/ // virtual size_t v_seek(size_t, int32_t);  // = 005FFD30  /* auto */
/* 10*/ // virtual size_t v_getSize();  // = 0062C4C0  ---  /* auto */
/* 14*/ // virtual size_t v_getOffs();  // = 005FFDB0  ---  /* auto */
/* 18*/ // virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 005FFDC0  /* auto */
/* 1C*/ // virtual int32_t v_unmapFile(int32_t);  // = 005D72D0  /* auto */
/* 20*/ // virtual uint32_t *v_flush(uint32_t *);  // = 005D72F0  /* auto */
/* 24*/ // virtual void v_close();  // = 005FFCD0  -------  /* auto */
/* 28*/ // virtual MyStream *v_wrapStream(MyStream *);  // = 005D7290  /* auto */
/* 2C*/ // virtual int32_t v_getSemaphore();  // = 005D72E0  /* auto */
/*---*/ // super MyCachedStream  -------------------------  /* auto */
/*---*/ // MyWadFileStream  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FFC80*/ MyWadFileStream *constructor();  // ---------  /* auto */
/*005FFCB0*/ uint32_t *init(uint32_t *, int32_t, int32_t);  /* auto */
/*005FFCD0*/ int32_t closeFile();  // --------------------  /* auto */
/*005FFCE0*/ size_t readBytes(int32_t, uint32_t);  // ----  /* auto */
/*005FFD30*/ int32_t seek(int32_t, int32_t);  // ---------  /* auto */
/*005FFDC0*/ void *mapFileToBuf(int32_t, int32_t);  // ---  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyWadFileStream) == 0x1C);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_WAD_FILE_STREAM_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
