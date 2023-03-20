// -----------------  id: vtbl_006725D8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_INPUT_STREAM_H  // ----------------------------  /* auto */
#define MY_INPUT_STREAM_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyInputStream;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyInputStream {  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyInputStream *f0_wrappedStream;  // -------------  /* auto */
/*  8*/ int32_t f4_refs;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006725D8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyInputStream  --------------------------------  /* auto */
/*  0*/ virtual const void *v_scalar_destructor(char);  // = 005D7200  /* auto */
/*  4*/ virtual size_t v_readBytes(const void *, size_t);  // = 00634D60  /* auto */
/*  8*/ virtual size_t v_writeBytes(const void *, size_t);  // = 00634D60  /* auto */
/*  C*/ virtual size_t v_seek(size_t, int32_t);  // = 00634D60  /* auto */
/* 10*/ virtual size_t v_getSize();  // = 00634D60  ------  /* auto */
/* 14*/ virtual size_t v_getOffs();  // = 00634D60  ------  /* auto */
/* 18*/ virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 005D72B0  /* auto */
/* 1C*/ virtual int32_t v_unmapFile(int32_t);  // = 005D72D0  /* auto */
/* 20*/ virtual int32_t *v_flush(int32_t *);  // = 005D72F0  /* auto */
/* 24*/ virtual void v_close();  // = 00401200  ----------  /* auto */
/* 28*/ virtual MyInputStream *v_wrapStream(MyInputStream *);  // = 005D7290  /* auto */
/* 2C*/ virtual int32_t v_getSemaphore();  // = 005D72E0    /* auto */
// -------------------------------------------------------  /* auto */
/*005D71E0*/ MyInputStream *constructor();  // -----------  /* auto */
/*005D7220*/ void destructor();  // ----------------------  /* auto */
/*005D7230*/ int32_t InputStream_addRef();  // -----------  /* auto */
/*005D7240*/ int32_t release();  // ----------------------  /* auto */
/*005D7290*/ void wrapStream(MyInputStream *);  // -------  /* auto */
/*005D72B0*/ int32_t mapToBuf_redirect(int32_t, int32_t);   /* auto */
/*005D72D0*/ int32_t unmap_redirect(int32_t);  // --------  /* auto */
/*005D72E0*/ int32_t getSemaphore_redirect();  // --------  /* auto */
/*005D72F0*/ int32_t *flush_stub(int32_t *);  // ---------  /* auto */
/*005FDE80*/ int32_t sub_5FDE80(MyInputStream *);  // ----  /* auto */
/*005FF9B0*/ MyInputStream *sub_5FF9B0();  // ------------  /* auto */
/*005FFAD0*/ MyInputStream *sub_5FFAD0();  // ------------  /* auto */
/*005FFC80*/ MyInputStream *sub_5FFC80();  // ------------  /* auto */
/*006031A0*/ size_t MyCachedOffsStream_getSize_redirect();  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyInputStream) == 0xC);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_INPUT_STREAM_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
