// -----------------  id: vtbl_0067BA30  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyFileStorage.h>  // -----------------------  /* auto */
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
/*0067BA30*/ void **MyFileStorage::vftable() { return dk2::MyFileStorage_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*0062FCF0*/ MyFileStorage *MyFileStorage::constructor() { relink_stub(MyFileStorage::constructor); }  /* auto */
/*0062FE40*/ ResourceIndexEntry *MyFileStorage::binarySearch_(int32_t) { relink_stub(MyFileStorage::binarySearch_); }  /* auto */
/*0062FEB0*/ int32_t *MyFileStorage::resolveResource(int32_t *, ResourceIndexEntry *, MyTextBase **) { relink_stub(MyFileStorage::resolveResource); }  /* auto */
/*0062FF50*/ int32_t *MyFileStorage::loadResource(int32_t *, ResourceIndexEntry *, MyTextBase **) { relink_stub(MyFileStorage::loadResource); }  /* auto */
/*00630050*/ int32_t *MyFileStorage::openResourceStream(int32_t *, DiscFileBase *, ResourceIndexEntry *) { relink_stub(MyFileStorage::openResourceStream); }  /* auto */
/*006300A0*/ int32_t *MyFileStorage::parseResourceIndex(int32_t *, const char *, ResourceIndexEntry *, int32_t) { relink_stub(MyFileStorage::parseResourceIndex); }  /* auto */
/*00630160*/ ResourceIndexEntry *MyFileStorage::getResourceIndex(int32_t) { relink_stub(MyFileStorage::getResourceIndex); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
