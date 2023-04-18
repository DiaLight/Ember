// -----------------  id: vtbl_00672868  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DX_DEVICE_H  // -------------------------------  /* auto */
#define MY_DX_DEVICE_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyDxDevice;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDxDevice {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t nextCoopLevel;  // -----------------------  /* auto */
/*  8*/ int32_t curCoopLevel;  // ------------------------  /* auto */
/*  C*/ IDirectInputDeviceA *device;  // -----------------  /* auto */
/* 10*/ int32_t isWindowActive;  // ----------------------  /* auto */
/* 14*/ int32_t hInstance;  // ---------------------------  /* auto */
/* 18*/ HWND__ *curHWnd;  // -----------------------------  /* auto */
/* 1C*/ HWND__ *nextHWnd;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672868*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyDxDevice  -----------------------------------  /* auto */
/*  0*/ virtual const void *v_scalar_destructor(char);  // = 005DCB70  /* auto */
/*  4*/ virtual GUID *v_getGuid();  // = 00634D60  -------  /* auto */
/*  8*/ virtual DIDATAFORMAT *v_getDataFormat();  // = 00634D60  /* auto */
// -------------------------------------------------------  /* auto */
/*005DCB40*/ MyDxDevice *constructor();  // --------------  /* auto */
/*005DCBB0*/ int32_t *queryDevice(int32_t *, IDirectInputDeviceA **);  /* auto */
/*005DCBE0*/ int32_t *updateCoopLevel(int32_t *);  // ----  /* auto */
/*005DCCA0*/ int32_t updateWindowActive(int32_t);  // ----  /* auto */
/*005DCCB0*/ HINSTANCE__ *getHInstance();  // ------------  /* auto */
/*005DCCC0*/ HWND__ *getNextHWindow();  // ---------------  /* auto */
/*005DCCD0*/ int32_t *updateCoopLevel_acquire(int32_t *);   /* auto */
/*005DCD30*/ HRESULT *init(HRESULT *);  // ---------------  /* auto */
/*005DCE50*/ int32_t *setCoopLevel(int32_t *, char);  // -  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDxDevice) == 0x20);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DX_DEVICE_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
