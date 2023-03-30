// -----------------  id: vtbl_0066FB24  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/CIFFFile.h>  // ----------------------------  /* auto */
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
/*  0*/ FILE *CIFFFile::v_read(const void *, size_t) { relink_stub(CIFFFile::v_read); }  /* auto */
/*  4*/ FILE *CIFFFile::v_write(const void *, size_t) { relink_stub(CIFFFile::v_write); }  /* auto */
/*  8*/ int32_t CIFFFile::v_seek(int32_t) { relink_stub(CIFFFile::v_seek); }  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FB24*/ void **CIFFFile::vftable() { return dk2::CIFFFile_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*0057A080*/ CIFFFile *CIFFFile::constructor() { relink_stub(CIFFFile::constructor); }  /* auto */
/*0057A1E0*/ int32_t CIFFFile::push_locateMagic(int32_t *) { relink_stub(CIFFFile::push_locateMagic); }  /* auto */
/*0057A310*/ int32_t CIFFFile::pop() { relink_stub(CIFFFile::pop); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
