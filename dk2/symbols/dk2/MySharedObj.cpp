// -----------------  id: vtbl_00672408  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MySharedObj.h>  // -------------------------  /* auto */
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
/*  0*/ int32_t MySharedObj::v_release() { relink_stub(MySharedObj::v_release); }  /* auto */
/*  4*/ int32_t MySharedObj::v_addRef() { relink_stub(MySharedObj::v_addRef); }  /* auto */
/*  8*/ MySharedObj *MySharedObj::v_scalar_destructor(char) { relink_stub(MySharedObj::v_scalar_destructor); }  /* auto */
// -------------------------------------------------------  /* auto */
/*00672408*/ void **MySharedObj::vftable() { return dk2::MySharedObj_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005BB710*/ MySharedObj *MySharedObj::deleting_destructor(char) { relink_stub(MySharedObj::deleting_destructor); }  /* auto */
/*005DCA30*/ MySharedObj *MySharedObj::constructor() { relink_stub(MySharedObj::constructor); }  /* auto */
/*0062FC00*/ int32_t MySharedObj::addRef() { relink_stub(MySharedObj::addRef); }  /* auto */
/*0062FC10*/ int32_t MySharedObj::release() { relink_stub(MySharedObj::release); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
