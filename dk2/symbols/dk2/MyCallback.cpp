// -----------------  id: vtbl_006723E0  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyCallback.h>  // --------------------------  /* auto */
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
/*  0*/ int32_t MyCallback::v_call(int32_t, void *) { relink_stub(MyCallback::v_call); }  /* auto */
/*  4*/ void *MyCallback::v_Obj6723E0_scalar_destructor(char) { relink_stub(MyCallback::v_Obj6723E0_scalar_destructor); }  /* auto */
// -------------------------------------------------------  /* auto */
/*006723E0*/ void **MyCallback::vftable() { return dk2::MyCallback_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005BB420*/ MyCallback *MyCallback::scalar_destructor(char) { relink_stub(MyCallback::scalar_destructor); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
