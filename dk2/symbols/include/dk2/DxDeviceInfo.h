// -----------  id: call_malloc_arr_005573DB  ------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef DX_DEVICE_INFO_H  // -----------------------------  /* auto */
#define DX_DEVICE_INFO_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct DxD3dInfo;  // ----------------------------------  /* auto */
  struct DxModeInfo;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct DxDeviceInfo {  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ char name[30];  // -------------------------------  /* auto */
/* 1E*/ char desc[80];  // -------------------------------  /* auto */
/* 6E*/ GUID *pGuid;  // ---------------------------------  /* auto */
/* 72*/ GUID guid;  // -----------------------------------  /* auto */
/* 82*/ DDCAPS ddcaps;  // -------------------------------  /* auto */
/*1FE*/ int32_t modeListCount;  // -----------------------  /* auto */
/*202*/ int32_t infoListCount;  // -----------------------  /* auto */
/*206*/ DxModeInfo *modeList;  // ------------------------  /* auto */
/*20A*/ DxD3dInfo *infoList;  // -------------------------  /* auto */
/*20E*/ int32_t dwVendorId;  // --------------------------  /* auto */
/*212*/ int32_t dwDeviceId;  // --------------------------  /* auto */
/*216*/ int32_t isVendor121A;  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(DxDeviceInfo) == 0x21A);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //DX_DEVICE_INFO_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */