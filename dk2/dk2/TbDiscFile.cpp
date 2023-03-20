// -----------------  id: vtbl_0066F24C  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/TbDiscFile.h>  // --------------------------  /* auto */
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
/* 24*/ int32_t *TbDiscFile::v_openStream(int32_t *, char *, int32_t) { relink_stub(TbDiscFile::v_openStream); }  /* auto */
// -------------------------------------------------------  /* auto */
/*0066F24C*/ void **TbDiscFile::vftable() { return dk2::TbDiscFile_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005B6F20*/ MyInputStream *TbDiscFile::DiskFileBase_pushStream(MyInputStream *) { relink_stub(TbDiscFile::DiskFileBase_pushStream); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
