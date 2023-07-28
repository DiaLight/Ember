// -----------------  id: vtbl_006728B0  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyMouse.h>  // -----------------------------  /* auto */
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
/*006728B0*/ void **MyMouse::vftable() { return dk2::MyMouse_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005DD360*/ MyMouse *MyMouse::constructor() { relink_stub(MyMouse::constructor); }  /* auto */
/*005DD430*/ void *MyMouse::deleting_destructor(char) { relink_stub(MyMouse::deleting_destructor); }  /* auto */
/*005DD450*/ int32_t MyMouse::destructor() { relink_stub(MyMouse::destructor); }  /* auto */
/*005DD4A0*/ void MyMouse::fun3_xyzAction(MouseXyzDxAction *) { relink_stub(MyMouse::fun3_xyzAction); }  /* auto */
/*005DD560*/ MouseRgbDxAction *MyMouse::fun4(MouseRgbDxAction *) { relink_stub(MyMouse::fun4); }  /* auto */
/*005DD630*/ void MyMouse::updatePos() { relink_stub(MyMouse::updatePos); }  /* auto */
/*005DD6D0*/ void MyMouse::setPos(Pos2i *) { relink_stub(MyMouse::setPos); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
