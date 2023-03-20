// -----------------  id: vtbl_006730C0  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyCachedOffsStream.h>  // ------------------  /* auto */
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
// -------------------------------------------------------  /* auto */
/*006730C0*/ void **MyCachedOffsStream::vftable() { return dk2::MyCachedOffsStream_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005FF960*/ size_t MyCachedOffsStream::seekCachedOffs() { relink_stub(MyCachedOffsStream::seekCachedOffs); }  /* auto */
/*006030F0*/ int32_t MyCachedOffsStream::constructor() { relink_stub(MyCachedOffsStream::constructor); }  /* auto */
/*00603110*/ void MyCachedOffsStream::close() { relink_stub(MyCachedOffsStream::close); }  /* auto */
/*00603120*/ size_t MyCachedOffsStream::readBytes_redirect(const void *, int32_t) { relink_stub(MyCachedOffsStream::readBytes_redirect); }  /* auto */
/*00603150*/ size_t MyCachedOffsStream::writeBytes_redirect(const void *, int32_t) { relink_stub(MyCachedOffsStream::writeBytes_redirect); }  /* auto */
/*00603180*/ int32_t MyCachedOffsStream::seek_redirect(int32_t, int32_t) { relink_stub(MyCachedOffsStream::seek_redirect); }  /* auto */
/*0062C4C0*/ int32_t MyCachedOffsStream::getOffs() { relink_stub(MyCachedOffsStream::getOffs); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
