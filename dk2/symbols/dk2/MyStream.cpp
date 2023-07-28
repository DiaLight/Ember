// -----------------  id: vtbl_006725D8  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyStream.h>  // ----------------------------  /* auto */
#include <dk2_globals.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
using namespace dk2;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#define relink_stub(name) printf("[fatal]: stub "#name" call\n"); ::abort();  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#pragma optimize( "", off )  // --------------------------  /* auto */
// virtual functions  ------------------------------------  /* auto */
/*  0*/ void *MyStream::v_scalar_destructor(char) { relink_stub(MyStream::v_scalar_destructor); }  /* auto */
/*  4*/ size_t MyStream::v_readBytes(void *, size_t) { relink_stub(MyStream::v_readBytes); }  /* auto */
/*  8*/ size_t MyStream::v_writeBytes(void *, size_t) { relink_stub(MyStream::v_writeBytes); }  /* auto */
/*  C*/ size_t MyStream::v_seek(size_t, int32_t) { relink_stub(MyStream::v_seek); }  /* auto */
/* 10*/ size_t MyStream::v_getSize() { relink_stub(MyStream::v_getSize); }  /* auto */
/* 14*/ size_t MyStream::v_getOffs() { relink_stub(MyStream::v_getOffs); }  /* auto */
/* 18*/ int32_t MyStream::v_mapFileToBuf(int32_t, int32_t) { relink_stub(MyStream::v_mapFileToBuf); }  /* auto */
/* 1C*/ int32_t MyStream::v_unmapFile(int32_t) { relink_stub(MyStream::v_unmapFile); }  /* auto */
/* 20*/ uint32_t *MyStream::v_flush(uint32_t *) { relink_stub(MyStream::v_flush); }  /* auto */
/* 24*/ void MyStream::v_close() { relink_stub(MyStream::v_close); }  /* auto */
/* 28*/ MyStream *MyStream::v_wrapStream(MyStream *) { relink_stub(MyStream::v_wrapStream); }  /* auto */
/* 2C*/ int32_t MyStream::v_getSemaphore() { relink_stub(MyStream::v_getSemaphore); }  /* auto */
// -------------------------------------------------------  /* auto */
/*006725D8*/ void **MyStream::vftable() { return dk2::MyStream_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005D71E0*/ MyStream *MyStream::constructor() { relink_stub(MyStream::constructor); }  /* auto */
/*005D7200*/ void *MyStream::scalar_destructor(char) { relink_stub(MyStream::scalar_destructor); }  /* auto */
/*005D7220*/ void MyStream::destructor() { relink_stub(MyStream::destructor); }  /* auto */
/*005D7230*/ int32_t MyStream::addRef() { relink_stub(MyStream::addRef); }  /* auto */
/*005D7240*/ int32_t MyStream::release() { relink_stub(MyStream::release); }  /* auto */
/*005D7290*/ void MyStream::wrapStream(MyStream *) { relink_stub(MyStream::wrapStream); }  /* auto */
/*005D72B0*/ int32_t MyStream::mapToBuf_redirect(int32_t, int32_t) { relink_stub(MyStream::mapToBuf_redirect); }  /* auto */
/*005D72D0*/ int32_t MyStream::unmap_redirect(int32_t) { relink_stub(MyStream::unmap_redirect); }  /* auto */
/*005D72E0*/ int32_t MyStream::getSemaphore_redirect() { relink_stub(MyStream::getSemaphore_redirect); }  /* auto */
/*005D72F0*/ uint32_t *MyStream::flush_set_m1(uint32_t *) { relink_stub(MyStream::flush_set_m1); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
