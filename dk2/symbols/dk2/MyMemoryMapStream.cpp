// -----------------  id: vtbl_00673018  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyMemoryMapStream.h>  // -------------------  /* auto */
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
/*00673018*/ void **MyMemoryMapStream::vftable() { return dk2::MyMemoryMapStream_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*00600180*/ MyMemoryMapStream *MyMemoryMapStream::constructor() { relink_stub(MyMemoryMapStream::constructor); }  /* auto */
/*006001D0*/ void *MyMemoryMapStream::scalar_destructor(char) { relink_stub(MyMemoryMapStream::scalar_destructor); }  /* auto */
/*006001F0*/ void MyMemoryMapStream::destructor() { relink_stub(MyMemoryMapStream::destructor); }  /* auto */
/*006002E0*/ HMMIO__ *MyMemoryMapStream::close() { relink_stub(MyMemoryMapStream::close); }  /* auto */
/*00600300*/ int32_t MyMemoryMapStream::readBytes(char *, int32_t) { relink_stub(MyMemoryMapStream::readBytes); }  /* auto */
/*00600330*/ int32_t MyMemoryMapStream::writeBytes(char *, int32_t) { relink_stub(MyMemoryMapStream::writeBytes); }  /* auto */
/*00600360*/ int32_t MyMemoryMapStream::seek(int32_t, int32_t) { relink_stub(MyMemoryMapStream::seek); }  /* auto */
/*00600390*/ int32_t MyMemoryMapStream::getSize() { relink_stub(MyMemoryMapStream::getSize); }  /* auto */
/*006003C0*/ void **MyMemoryMapStream::getSemaphore() { relink_stub(MyMemoryMapStream::getSemaphore); }  /* auto */
/*006003D0*/ uint32_t *MyMemoryMapStream::flush(uint32_t *) { relink_stub(MyMemoryMapStream::flush); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
