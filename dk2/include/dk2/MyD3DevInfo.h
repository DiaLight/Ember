// --------------  id: construct_00558DF2  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_D3_DEV_INFO_H  // -----------------------------  /* auto */
#define MY_D3_DEV_INFO_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyD3DevInfo {  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ GUID lpGuid;  // ---------------------------------  /* auto */
/* 10*/ char *lpDeviceDescription;  // -------------------  /* auto */
/* 14*/ char *lpDeviceName;  // --------------------------  /* auto */
/* 18*/ _D3DDeviceDesc *desc1;  // -----------------------  /* auto */
/* 1C*/ _D3DDeviceDesc *desc2;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyD3DevInfo) == 0x20);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_D3_DEV_INFO_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
