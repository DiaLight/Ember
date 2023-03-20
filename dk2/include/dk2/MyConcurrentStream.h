// -----------------  id: vtbl_00672EF8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CONCURRENT_STREAM_H  // -----------------------  /* auto */
#define MY_CONCURRENT_STREAM_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyCachedOffsStream.h>  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyConcurrentStream;  // -------------------------  /* auto */
  struct MyInputStream;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyConcurrentStream : MyCachedOffsStream {  // -----  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672EF8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyInputStream  --------------------------  /* auto */
/*  0*/ // virtual const void *v_scalar_destructor(char);  // = 005FFAF0  /* auto */
/*  4*/ // virtual size_t v_readBytes(const void *, size_t);  // = 005FF730  /* auto */
/*  8*/ // virtual size_t v_writeBytes(const void *, size_t);  // = 005FF7C0  /* auto */
/*  C*/ // virtual size_t v_seek(size_t, int32_t);  // = 005FF850  /* auto */
/* 10*/ // virtual size_t v_getSize();  // = 005FF8E0  ---  /* auto */
/* 14*/ // virtual size_t v_getOffs();  // = 0062C4C0  ---  /* auto */
/* 18*/ // virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 005D72B0  /* auto */
/* 1C*/ // virtual int32_t v_unmapFile(int32_t);  // = 005D72D0  /* auto */
/* 20*/ // virtual int32_t *v_flush(int32_t *);  // = 005D72F0  /* auto */
/* 24*/ // virtual void v_close();  // = 00603110  -------  /* auto */
/* 28*/ // virtual MyInputStream *v_wrapStream(MyInputStream *);  // = 005FF990  /* auto */
/* 2C*/ // virtual int32_t v_getSemaphore();  // = 005D72E0  /* auto */
/*---*/ // super MyCachedOffsStream  ---------------------  /* auto */
/*---*/ // MyConcurrentStream  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FF710*/ MyConcurrentStream *constructor();  // ------  /* auto */
/*005FF730*/ size_t readBytes(int32_t, int32_t);  // -----  /* auto */
/*005FF7C0*/ size_t writeBytes(const void *, int32_t);      /* auto */
/*005FF850*/ int32_t seek(int32_t, int32_t);  // ---------  /* auto */
/*005FF8E0*/ size_t getSize();  // -----------------------  /* auto */
/*005FF990*/ void wrapStream(MyInputStream *);  // -------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyConcurrentStream) == 0x10);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CONCURRENT_STREAM_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
