// -----------------  id: vtbl_006727D8  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/LockBase.h>  // ----------------------------  /* auto */
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
/* 1C*/ int32_t LockBase::v_getItemsCount() { relink_stub(LockBase::v_getItemsCount); }  /* auto */
/* 20*/ void LockBase::v_handleItem(int32_t *, MyDxInputState *) { relink_stub(LockBase::v_handleItem); }  /* auto */
// -------------------------------------------------------  /* auto */
/*006727D8*/ void **LockBase::vftable() { return dk2::LockBase_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005D9A20*/ int32_t LockBase::destructor() { relink_stub(LockBase::destructor); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
