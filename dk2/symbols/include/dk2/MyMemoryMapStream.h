// -----------------  id: vtbl_00673018  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_MEMORY_MAP_STREAM_H  // -----------------------  /* auto */
#define MY_MEMORY_MAP_STREAM_H  // -----------------------  /* auto */
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
  struct MyMemoryMapStream;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyMemoryMapStream : MyStream {  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ HMMIO__ *hmio;  // -------------------------------  /* auto */
/* 10*/ int32_t offs;  // --------------------------------  /* auto */
/* 14*/ void *_end_f14_semaphore;  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00673018*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyStream  -------------------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(char);  // = 006001D0  /* auto */
/*  4*/ // virtual size_t v_readBytes(void *, size_t);  // = 00600300  /* auto */
/*  8*/ // virtual size_t v_writeBytes(void *, size_t);  // = 00600330  /* auto */
/*  C*/ // virtual size_t v_seek(size_t, int32_t);  // = 00600360  /* auto */
/* 10*/ // virtual size_t v_getSize();  // = 00600390  ---  /* auto */
/* 14*/ // virtual size_t v_getOffs();  // = 005FFDB0  ---  /* auto */
/* 18*/ // virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 00443150  /* auto */
/* 1C*/ // virtual int32_t v_unmapFile(int32_t);  // = 005671E0  /* auto */
/* 20*/ // virtual uint32_t *v_flush(uint32_t *);  // = 006003D0  /* auto */
/* 24*/ // virtual void v_close();  // = 006002E0  -------  /* auto */
/* 28*/ // virtual MyStream *v_wrapStream(MyStream *);  // = 005671E0  /* auto */
/* 2C*/ // virtual int32_t v_getSemaphore();  // = 006003C0  /* auto */
/*---*/ // MyMemoryMapStream  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00600180*/ MyMemoryMapStream *constructor();  // -------  /* auto */
/*006001D0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*006001F0*/ void destructor();  // ----------------------  /* auto */
/*006002E0*/ HMMIO__ *close();  // -----------------------  /* auto */
/*00600300*/ int32_t readBytes(char *, int32_t);  // -----  /* auto */
/*00600330*/ int32_t writeBytes(char *, int32_t);  // ----  /* auto */
/*00600360*/ int32_t seek(int32_t, int32_t);  // ---------  /* auto */
/*00600390*/ int32_t getSize();  // ----------------------  /* auto */
/*006003C0*/ void **getSemaphore();  // ------------------  /* auto */
/*006003D0*/ uint32_t *flush(uint32_t *);  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyMemoryMapStream) == 0x18);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_MEMORY_MAP_STREAM_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
