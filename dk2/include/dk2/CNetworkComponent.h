// -----------------  id: vtbl_0066EC84  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_NETWORK_COMPONENT_H  // ------------------------  /* auto */
#define C_NETWORK_COMPONENT_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CComponent.h>  // --------------------------  /* auto */
#include <dk2/MyStaticStruct.h>  // ----------------------  /* auto */
#include <dk2/StaticListeners.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CNetworkComponent;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CNetworkComponent : CComponent {  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ StaticListeners static_listeners;  // ------------  /* auto */
/* 20*/ MyStaticStruct obj_20;  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066EC84*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CComponent  -----------------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 005274C0  /* auto */
/*  4*/ // virtual int32_t v_f4_();  // = 00527530  ------  /* auto */
/*  8*/ // virtual const void *v_f8_();  // = 00401200  --  /* auto */
/*  C*/ // virtual int32_t v_handle();  // = 00527560  ---  /* auto */
/* 10*/ // virtual int32_t *v_f10_();  // = 00527750  ----  /* auto */
/* 14*/ // virtual const void ***v_mainGuiLoop();  // = 00527790  /* auto */
/*---*/ // CNetworkComponent  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00527470*/ CNetworkComponent *constructor();  // -------  /* auto */
/*00527790*/ int32_t fun_527790();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CNetworkComponent) == 0x2C);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_NETWORK_COMPONENT_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
