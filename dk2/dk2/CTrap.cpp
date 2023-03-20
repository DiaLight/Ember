// -----------------  id: vtbl_0066D754  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/CTrap.h>  // -------------------------------  /* auto */
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
/*0066D754*/ void **CTrap::vftable() { return dk2::CTrap_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*004AA130*/ void CTrap::dump() { relink_stub(CTrap::dump); }  /* auto */
/*004B7400*/ CTrap *CTrap::constructor() { relink_stub(CTrap::constructor); }  /* auto */
/*004B7490*/ int32_t CTrap::destructor() { relink_stub(CTrap::destructor); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
