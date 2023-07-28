// -----------------  id: vtbl_00672F28  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY10_FB_FILE_STREAM_H  // ------------------------  /* auto */
#define MY10_FB_FILE_STREAM_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyArchiveFileStream.h>  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct My10FBFileStream;  // ---------------------------  /* auto */
  struct MyStream;  // -----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct My10FBFileStream : MyArchiveFileStream {  // ------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672F28*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyStream  -------------------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(char);  // = 005FFAF0  /* auto */
/*  4*/ // virtual size_t v_readBytes(void *, size_t);  // = 005FFB40  /* auto */
/*  8*/ // virtual size_t v_writeBytes(void *, size_t);  // = 005FF9D0  /* auto */
/*  C*/ // virtual size_t v_seek(size_t, int32_t);  // = 005FFB90  /* auto */
/* 10*/ // virtual size_t v_getSize();  // = 0062C4C0  ---  /* auto */
/* 14*/ // virtual size_t v_getOffs();  // = 005FF9E0  ---  /* auto */
/* 18*/ // virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 005D72B0  /* auto */
/* 1C*/ // virtual int32_t v_unmapFile(int32_t);  // = 005D72D0  /* auto */
/* 20*/ // virtual uint32_t *v_flush(uint32_t *);  // = 005D72F0  /* auto */
/* 24*/ // virtual void v_close();  // = 005FF9F0  -------  /* auto */
/* 28*/ // virtual MyStream *v_wrapStream(MyStream *);  // = 005FFA10  /* auto */
/* 2C*/ // virtual int32_t v_getSemaphore();  // = 005D72E0  /* auto */
/*---*/ // super MyCachedStream  -------------------------  /* auto */
/*---*/ // super MyArchiveFileStream  --------------------  /* auto */
/*---*/ // My10FBFileStream  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FF9B0*/ My10FBFileStream *constructor();  // --------  /* auto */
/*005FFA10*/ void openFile(MyStream *);  // --------------  /* auto */
/*005FFB10*/ int32_t init(int32_t, size_t);  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(My10FBFileStream) == 0x18);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY10_FB_FILE_STREAM_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
