// -----------------  id: vtbl_006725D8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_STREAM_H  // ----------------------------------  /* auto */
#define MY_STREAM_H  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyStream;  // -----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyStream {  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyStream *f0_wrappedStream;  // ------------------  /* auto */
/*  8*/ int32_t f4_refs;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006725D8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyStream  -------------------------------------  /* auto */
/*  0*/ virtual void *v_scalar_destructor(char);  // = 005D7200  /* auto */
/*  4*/ virtual size_t v_readBytes(void *, size_t);  // = 00634D60  /* auto */
/*  8*/ virtual size_t v_writeBytes(void *, size_t);  // = 00634D60  /* auto */
/*  C*/ virtual size_t v_seek(size_t, int32_t);  // = 00634D60  /* auto */
/* 10*/ virtual size_t v_getSize();  // = 00634D60  ------  /* auto */
/* 14*/ virtual size_t v_getOffs();  // = 00634D60  ------  /* auto */
/* 18*/ virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 005D72B0  /* auto */
/* 1C*/ virtual int32_t v_unmapFile(int32_t);  // = 005D72D0  /* auto */
/* 20*/ virtual uint32_t *v_flush(uint32_t *);  // = 005D72F0  /* auto */
/* 24*/ virtual void v_close();  // = 00401200  ----------  /* auto */
/* 28*/ virtual MyStream *v_wrapStream(MyStream *);  // = 005D7290  /* auto */
/* 2C*/ virtual int32_t v_getSemaphore();  // = 005D72E0    /* auto */
// -------------------------------------------------------  /* auto */
/*005D71E0*/ MyStream *constructor();  // ----------------  /* auto */
/*005D7200*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005D7220*/ void destructor();  // ----------------------  /* auto */
/*005D7230*/ int32_t addRef();  // -----------------------  /* auto */
/*005D7240*/ int32_t release();  // ----------------------  /* auto */
/*005D7290*/ void wrapStream(MyStream *);  // ------------  /* auto */
/*005D72B0*/ int32_t mapToBuf_redirect(int32_t, int32_t);   /* auto */
/*005D72D0*/ int32_t unmap_redirect(int32_t);  // --------  /* auto */
/*005D72E0*/ int32_t getSemaphore_redirect();  // --------  /* auto */
/*005D72F0*/ uint32_t *flush_set_m1(uint32_t *);  // -----  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyStream) == 0xC);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_STREAM_H  ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
