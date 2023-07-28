// ---------  id: deleting_destructor_005FFAF0  ----------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CACHED_STREAM_H  // ---------------------------  /* auto */
#define MY_CACHED_STREAM_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyStream.h>  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyCachedStream;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCachedStream : MyStream {  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*---*/ // super MyStream  -------------------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(char);  -----  /* auto */
/*  4*/ // virtual size_t v_readBytes(void *, size_t);  --  /* auto */
/*  8*/ // virtual size_t v_writeBytes(void *, size_t);  -  /* auto */
/*  C*/ // virtual size_t v_seek(size_t, int32_t);  ------  /* auto */
/* 10*/ // virtual size_t v_getSize();  ------------------  /* auto */
/* 14*/ // virtual size_t v_getOffs();  ------------------  /* auto */
/* 18*/ // virtual int32_t v_mapFileToBuf(int32_t, int32_t);  /* auto */
/* 1C*/ // virtual int32_t v_unmapFile(int32_t);  --------  /* auto */
/* 20*/ // virtual uint32_t *v_flush(uint32_t *);  -------  /* auto */
/* 24*/ // virtual void v_close();  ----------------------  /* auto */
/* 28*/ // virtual MyStream *v_wrapStream(MyStream *);  --  /* auto */
/* 2C*/ // virtual int32_t v_getSemaphore();  ------------  /* auto */
/*---*/ // MyCachedStream  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FFAF0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005FFCA0*/ void destructor();  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCachedStream) == 0xC);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CACHED_STREAM_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
