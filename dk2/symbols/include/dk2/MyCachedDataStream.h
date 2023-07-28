// -----------------  id: vtbl_00672E90  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CACHED_DATA_STREAM_H  // ----------------------  /* auto */
#define MY_CACHED_DATA_STREAM_H  // ----------------------  /* auto */
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
  struct MyCachedDataStream;  // -------------------------  /* auto */
  struct MyStream;  // -----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCachedDataStream : MyCachedStream {  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ char *buf;  // -----------------------------------  /* auto */
/* 10*/ char *savedBuf;  // ------------------------------  /* auto */
/* 14*/ int32_t requiredOffs;  // ------------------------  /* auto */
/* 18*/ int32_t lastOuterOffs;  // -----------------------  /* auto */
/* 1C*/ int32_t savedOuterOffs;  // ----------------------  /* auto */
/* 20*/ int32_t curOuterOffs;  // ------------------------  /* auto */
/* 24*/ int32_t readSize;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672E90*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MyStream  -------------------------------  /* auto */
/*  0*/ // virtual void *v_scalar_destructor(char);  // = 005FFAF0  /* auto */
/*  4*/ // virtual size_t v_readBytes(void *, size_t);  // = 005FDCF0  /* auto */
/*  8*/ // virtual size_t v_writeBytes(void *, size_t);  // = 005FDDC0  /* auto */
/*  C*/ // virtual size_t v_seek(size_t, int32_t);  // = 005FDD70  /* auto */
/* 10*/ // virtual size_t v_getSize();  // = 005FDE70  ---  /* auto */
/* 14*/ // virtual size_t v_getOffs();  // = 005FDE60  ---  /* auto */
/* 18*/ // virtual int32_t v_mapFileToBuf(int32_t, int32_t);  // = 005D72B0  /* auto */
/* 1C*/ // virtual int32_t v_unmapFile(int32_t);  // = 005D72D0  /* auto */
/* 20*/ // virtual uint32_t *v_flush(uint32_t *);  // = 005D72F0  /* auto */
/* 24*/ // virtual void v_close();  // = 005FDCE0  -------  /* auto */
/* 28*/ // virtual MyStream *v_wrapStream(MyStream *);  // = 005FDE80  /* auto */
/* 2C*/ // virtual int32_t v_getSemaphore();  // = 005D72E0  /* auto */
/*---*/ // super MyCachedStream  -------------------------  /* auto */
/*---*/ // MyCachedDataStream  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005FDC60*/ void *constructor();  // --------------------  /* auto */
/*005FDC90*/ int32_t *init(int32_t, size_t);  // ---------  /* auto */
/*005FDCE0*/ void delBuf();  // --------------------------  /* auto */
/*005FDCF0*/ uint32_t readBytes(int32_t, uint32_t);  // --  /* auto */
/*005FDD70*/ int32_t seek(int32_t, int32_t);  // ---------  /* auto */
/*005FDDC0*/ size_t writeBytes(int32_t, int32_t);  // ----  /* auto */
/*005FDE60*/ int32_t getOffs();  // ----------------------  /* auto */
/*005FDE80*/ int32_t wrapStream(MyStream *);  // ---------  /* auto */
/*005FDEA0*/ size_t readWrapped(int32_t, int32_t);  // ---  /* auto */
/*005FDEC0*/ uint32_t readCache(void *, uint32_t);  // ---  /* auto */
/*005FDF20*/ size_t seekAndReadBytes_rememberLast();  // -  /* auto */
/*005FDF50*/ size_t seekAndReadBytes(char *, int32_t);      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCachedDataStream) == 0x28);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CACHED_DATA_STREAM_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
