// -----------------  id: vtbl_006730C0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CACHED_OFFS_STREAM_H  // ----------------------  /* auto */
#define MY_CACHED_OFFS_STREAM_H  // ----------------------  /* auto */
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
  struct MyCachedOffsStream;  // -------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCachedOffsStream : MyCachedStream {  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ int32_t cachedOffs;  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006730C0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyStream  -------------------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(char);  // = 005FFAF0  /* auto */
/*  4*/ // virtual size_t v_readBytes(void *, size_t);  // = 00603120  /* auto */
/*  8*/ // virtual size_t v_writeBytes(void *, size_t);  // = 00603150  /* auto */
/*  C*/ // virtual size_t v_seek(size_t, int32_t);  // = 00603180  /* auto */
/* 10*/ // virtual size_t v_getSize();  // = 006031A0  ---  /* auto */
/* 14*/ // virtual size_t v_getOffs();  // = 0062C4C0  ---  /* auto */
/* 18*/ // virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 005D72B0  /* auto */
/* 1C*/ // virtual int32_t v_unmapFile(int32_t);  // = 005D72D0  /* auto */
/* 20*/ // virtual uint32_t *v_flush(uint32_t *);  // = 005D72F0  /* auto */
/* 24*/ // virtual void v_close();  // = 00603110  -------  /* auto */
/* 28*/ // virtual MyStream *v_wrapStream(MyStream *);  // = 005D7290  /* auto */
/* 2C*/ // virtual int32_t v_getSemaphore();  // = 005D72E0  /* auto */
/*---*/ // super MyCachedStream  -------------------------  /* auto */
/*---*/ // MyCachedOffsStream  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FF960*/ size_t seekCachedOffs();  // ----------------  /* auto */
/*006030F0*/ int32_t constructor();  // ------------------  /* auto */
/*00603120*/ size_t readBytes_redirect(void *, int32_t);    /* auto */
/*00603150*/ size_t writeBytes_redirect(void *, int32_t);   /* auto */
/*00603180*/ int32_t seek_redirect(int32_t, int32_t);       /* auto */
/*006031A0*/ size_t getSize_redirect();  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCachedOffsStream) == 0x10);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CACHED_OFFS_STREAM_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
