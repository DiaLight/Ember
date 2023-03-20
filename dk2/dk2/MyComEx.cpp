// -----------------  id: vtbl_00672418  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyComEx.h>  // -----------------------------  /* auto */
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
/*  C*/ void MyComEx::v_fun1(int32_t) { relink_stub(MyComEx::v_fun1); }  /* auto */
/* 10*/ int32_t MyComEx::v_fun2(DxAction *) { relink_stub(MyComEx::v_fun2); }  /* auto */
/* 14*/ int32_t MyComEx::v_fun3(DxAction *) { relink_stub(MyComEx::v_fun3); }  /* auto */
/* 18*/ int32_t MyComEx::v_fun4(DxAction *) { relink_stub(MyComEx::v_fun4); }  /* auto */
// -------------------------------------------------------  /* auto */
/*00672418*/ void **MyComEx::vftable() { return dk2::MyComEx_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005BB660*/ DxAction *MyComEx::fun3(DxAction *) { relink_stub(MyComEx::fun3); }  /* auto */
/*005BB730*/ int32_t MyComEx::fun4(int32_t) { relink_stub(MyComEx::fun4); }  /* auto */
/*005BB760*/ int32_t MyComEx::fun2(DxAction *) { relink_stub(MyComEx::fun2); }  /* auto */
/*005BB790*/ MyComEx *MyComEx::deleting_destructor(char) { relink_stub(MyComEx::deleting_destructor); }  /* auto */
/*005BB7B0*/ int32_t MyComEx::destructor() { relink_stub(MyComEx::destructor); }  /* auto */
/*005DA2D0*/ int32_t MyComEx::setChild(MyComEx *) { relink_stub(MyComEx::setChild); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
