// -----------------  id: vtbl_00672868  -----------------  /* auto */
// ---  warning: file is managed by gen_struct_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2/MyDxDevice.h>  // --------------------------  /* auto */
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
/*  0*/ void *MyDxDevice::v_scalar_destructor(char) { relink_stub(MyDxDevice::v_scalar_destructor); }  /* auto */
/*  4*/ GUID *MyDxDevice::v_getGuid() { relink_stub(MyDxDevice::v_getGuid); }  /* auto */
/*  8*/ DIDATAFORMAT *MyDxDevice::v_getDataFormat() { relink_stub(MyDxDevice::v_getDataFormat); }  /* auto */
// -------------------------------------------------------  /* auto */
/*00672868*/ void **MyDxDevice::vftable() { return dk2::MyDxDevice_vftable; }  /* auto */
// member functions  -------------------------------------  /* auto */
/*005DCB40*/ MyDxDevice *MyDxDevice::constructor() { relink_stub(MyDxDevice::constructor); }  /* auto */
/*005DCBB0*/ int32_t *MyDxDevice::queryDevice(int32_t *, IDirectInputDeviceA **) { relink_stub(MyDxDevice::queryDevice); }  /* auto */
/*005DCBE0*/ int32_t *MyDxDevice::updateCoopLevel(int32_t *) { relink_stub(MyDxDevice::updateCoopLevel); }  /* auto */
/*005DCCA0*/ int32_t MyDxDevice::updateWindowActive(int32_t) { relink_stub(MyDxDevice::updateWindowActive); }  /* auto */
/*005DCCB0*/ HINSTANCE__ *MyDxDevice::getHInstance() { relink_stub(MyDxDevice::getHInstance); }  /* auto */
/*005DCCC0*/ HWND__ *MyDxDevice::getNextHWindow() { relink_stub(MyDxDevice::getNextHWindow); }  /* auto */
/*005DCCD0*/ int32_t *MyDxDevice::updateCoopLevel_acquire(int32_t *) { relink_stub(MyDxDevice::updateCoopLevel_acquire); }  /* auto */
/*005DCD30*/ HRESULT *MyDxDevice::init(HRESULT *) { relink_stub(MyDxDevice::init); }  /* auto */
/*005DCE50*/ int32_t *MyDxDevice::setCoopLevel(int32_t *, char) { relink_stub(MyDxDevice::setCoopLevel); }  /* auto */
// -------------------------------------------------------  /* auto */
#pragma optimize( "", on )  // ---------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */
// ---------------  end_of_block  ------------------------  /* auto */
