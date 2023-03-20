// -----------------  id: vtbl_00672EC0  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyLocalStr.h>  // --------------------------  /* auto */
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
/*  0*/ int32_t __cdecl MyLocalStr::v_format(int32_t, const char *, ...) { relink_stub(MyLocalStr::v_format); }  /* auto */
/*  4*/ int32_t MyLocalStr::v_resize(int32_t) { relink_stub(MyLocalStr::v_resize); }  /* auto */
/*  8*/ const void *MyLocalStr::v_scalar_destructor(char) { relink_stub(MyLocalStr::v_scalar_destructor); }  /* auto */
/*  C*/ int8_t **MyLocalStr::v_assignChar(int8_t *) { relink_stub(MyLocalStr::v_assignChar); }  /* auto */
/* 10*/ const void *MyLocalStr::v_assign(const char *) { relink_stub(MyLocalStr::v_assign); }  /* auto */
/* 14*/ const char **MyLocalStr::v_assignMyStr(MyStr *) { relink_stub(MyLocalStr::v_assignMyStr); }  /* auto */
/* 18*/ int32_t MyLocalStr::v_append(const char *) { relink_stub(MyLocalStr::v_append); }  /* auto */
/* 1C*/ int32_t *MyLocalStr::v_appendChar(int8_t *) { relink_stub(MyLocalStr::v_appendChar); }  /* auto */
/* 20*/ const void *MyLocalStr::v_appendMyLocalStr(int32_t) { relink_stub(MyLocalStr::v_appendMyLocalStr); }  /* auto */
// -------------------------------------------------------  /* auto */
/*00672EC0*/ void **MyLocalStr::vftable() { return dk2::MyLocalStr_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005D7D30*/ bool MyLocalStr::equalTo(const char *) { relink_stub(MyLocalStr::equalTo); }  /* auto */
/*005D7F60*/ int32_t MyLocalStr::charPos(int8_t *, int32_t) { relink_stub(MyLocalStr::charPos); }  /* auto */
/*005FE000*/ MyLocalStr *MyLocalStr::constructor(const char *, int32_t, int32_t) { relink_stub(MyLocalStr::constructor); }  /* auto */
/*005FE0C0*/ MyLocalStr *MyLocalStr::assignChar(int8_t *) { relink_stub(MyLocalStr::assignChar); }  /* auto */
/*005FE100*/ MyLocalStr *MyLocalStr::assign(const char *) { relink_stub(MyLocalStr::assign); }  /* auto */
/*005FE150*/ MyLocalStr *MyLocalStr::assignMyStr(MyStr *) { relink_stub(MyLocalStr::assignMyStr); }  /* auto */
/*005FE180*/ int32_t MyLocalStr::append(const char *) { relink_stub(MyLocalStr::append); }  /* auto */
/*005FE1C0*/ MyLocalStr *MyLocalStr::appendChar(int8_t *) { relink_stub(MyLocalStr::appendChar); }  /* auto */
/*005FE200*/ MyLocalStr *MyLocalStr::appendLocalStr(MyLocalStr *) { relink_stub(MyLocalStr::appendLocalStr); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
