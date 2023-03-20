// -----------------  id: vtbl_006725D8  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyInputStream.h>  // -----------------------  /* auto */
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
/*  0*/ const void *MyInputStream::v_scalar_destructor(char) { relink_stub(MyInputStream::v_scalar_destructor); }  /* auto */
/*  4*/ size_t MyInputStream::v_readBytes(const void *, size_t) { relink_stub(MyInputStream::v_readBytes); }  /* auto */
/*  8*/ size_t MyInputStream::v_writeBytes(const void *, size_t) { relink_stub(MyInputStream::v_writeBytes); }  /* auto */
/*  C*/ size_t MyInputStream::v_seek(size_t, int32_t) { relink_stub(MyInputStream::v_seek); }  /* auto */
/* 10*/ size_t MyInputStream::v_getSize() { relink_stub(MyInputStream::v_getSize); }  /* auto */
/* 14*/ size_t MyInputStream::v_getOffs() { relink_stub(MyInputStream::v_getOffs); }  /* auto */
/* 18*/ int32_t MyInputStream::v_mapFileToBuf(int32_t, int32_t) { relink_stub(MyInputStream::v_mapFileToBuf); }  /* auto */
/* 1C*/ int32_t MyInputStream::v_unmapFile(int32_t) { relink_stub(MyInputStream::v_unmapFile); }  /* auto */
/* 20*/ int32_t *MyInputStream::v_flush(int32_t *) { relink_stub(MyInputStream::v_flush); }  /* auto */
/* 24*/ void MyInputStream::v_close() { relink_stub(MyInputStream::v_close); }  /* auto */
/* 28*/ MyInputStream *MyInputStream::v_wrapStream(MyInputStream *) { relink_stub(MyInputStream::v_wrapStream); }  /* auto */
/* 2C*/ int32_t MyInputStream::v_getSemaphore() { relink_stub(MyInputStream::v_getSemaphore); }  /* auto */
// -------------------------------------------------------  /* auto */
/*006725D8*/ void **MyInputStream::vftable() { return dk2::MyInputStream_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005D71E0*/ MyInputStream *MyInputStream::constructor() { relink_stub(MyInputStream::constructor); }  /* auto */
/*005D7220*/ void MyInputStream::destructor() { relink_stub(MyInputStream::destructor); }  /* auto */
/*005D7230*/ int32_t MyInputStream::InputStream_addRef() { relink_stub(MyInputStream::InputStream_addRef); }  /* auto */
/*005D7240*/ int32_t MyInputStream::release() { relink_stub(MyInputStream::release); }  /* auto */
/*005D7290*/ void MyInputStream::wrapStream(MyInputStream *) { relink_stub(MyInputStream::wrapStream); }  /* auto */
/*005D72B0*/ int32_t MyInputStream::mapToBuf_redirect(int32_t, int32_t) { relink_stub(MyInputStream::mapToBuf_redirect); }  /* auto */
/*005D72D0*/ int32_t MyInputStream::unmap_redirect(int32_t) { relink_stub(MyInputStream::unmap_redirect); }  /* auto */
/*005D72E0*/ int32_t MyInputStream::getSemaphore_redirect() { relink_stub(MyInputStream::getSemaphore_redirect); }  /* auto */
/*005D72F0*/ int32_t *MyInputStream::flush_stub(int32_t *) { relink_stub(MyInputStream::flush_stub); }  /* auto */
/*005FDE80*/ int32_t MyInputStream::sub_5FDE80(MyInputStream *) { relink_stub(MyInputStream::sub_5FDE80); }  /* auto */
/*005FF9B0*/ MyInputStream *MyInputStream::sub_5FF9B0() { relink_stub(MyInputStream::sub_5FF9B0); }  /* auto */
/*005FFAD0*/ MyInputStream *MyInputStream::sub_5FFAD0() { relink_stub(MyInputStream::sub_5FFAD0); }  /* auto */
/*005FFC80*/ MyInputStream *MyInputStream::sub_5FFC80() { relink_stub(MyInputStream::sub_5FFC80); }  /* auto */
/*006031A0*/ size_t MyInputStream::MyCachedOffsStream_getSize_redirect() { relink_stub(MyInputStream::MyCachedOffsStream_getSize_redirect); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
