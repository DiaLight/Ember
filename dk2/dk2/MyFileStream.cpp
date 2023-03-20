// -----------------  id: vtbl_00672FE8  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyFileStream.h>  // ------------------------  /* auto */
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
/*00672FE8*/ void **MyFileStream::vftable() { return dk2::MyFileStream_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005FFDB0*/ MyInputStream *MyFileStream::MyAnyStream_getOffs() { relink_stub(MyFileStream::MyAnyStream_getOffs); }  /* auto */
/*005FFDF0*/ MyFileStream *MyFileStream::constructor() { relink_stub(MyFileStream::constructor); }  /* auto */
/*005FFE70*/ void MyFileStream::destructor() { relink_stub(MyFileStream::destructor); }  /* auto */
/*005FFEC0*/ int32_t MyFileStream::open(int32_t, const char *, int32_t) { relink_stub(MyFileStream::open); }  /* auto */
/*005FFF60*/ const void *MyFileStream::closeMapping() { relink_stub(MyFileStream::closeMapping); }  /* auto */
/*005FFF90*/ const void *MyFileStream::close() { relink_stub(MyFileStream::close); }  /* auto */
/*005FFFB0*/ int32_t MyFileStream::readBytes(const void *, int32_t) { relink_stub(MyFileStream::readBytes); }  /* auto */
/*005FFFF0*/ int32_t MyFileStream::writeBytes(const void *, int32_t) { relink_stub(MyFileStream::writeBytes); }  /* auto */
/*00600030*/ int32_t MyFileStream::seek(int32_t, int32_t) { relink_stub(MyFileStream::seek); }  /* auto */
/*00600060*/ const char *MyFileStream::mapFileToBuf(int32_t, int32_t) { relink_stub(MyFileStream::mapFileToBuf); }  /* auto */
/*00600120*/ const void *MyFileStream::unmapFile(const void *) { relink_stub(MyFileStream::unmapFile); }  /* auto */
/*00600140*/ const void **MyFileStream::getSemaphore() { relink_stub(MyFileStream::getSemaphore); }  /* auto */
/*00600150*/ int32_t *MyFileStream::flush(int32_t *) { relink_stub(MyFileStream::flush); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
