// -----------------  id: vtbl_00672EF8  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyConcurrentStream.h>  // ------------------  /* auto */
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
/*00672EF8*/ void **MyConcurrentStream::vftable() { return dk2::MyConcurrentStream_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005FF710*/ MyConcurrentStream *MyConcurrentStream::constructor() { relink_stub(MyConcurrentStream::constructor); }  /* auto */
/*005FF730*/ size_t MyConcurrentStream::readBytes(int32_t, int32_t) { relink_stub(MyConcurrentStream::readBytes); }  /* auto */
/*005FF7C0*/ size_t MyConcurrentStream::writeBytes(const void *, int32_t) { relink_stub(MyConcurrentStream::writeBytes); }  /* auto */
/*005FF850*/ int32_t MyConcurrentStream::seek(int32_t, int32_t) { relink_stub(MyConcurrentStream::seek); }  /* auto */
/*005FF8E0*/ size_t MyConcurrentStream::getSize() { relink_stub(MyConcurrentStream::getSize); }  /* auto */
/*005FF990*/ void MyConcurrentStream::wrapStream(MyInputStream *) { relink_stub(MyConcurrentStream::wrapStream); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
