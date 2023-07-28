// -----------------  id: vtbl_0066C424  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENTRY_COMPONENT_H  // --------------------------  /* auto */
#define C_ENTRY_COMPONENT_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CComponent.h>  // --------------------------  /* auto */
#include <dk2/MyCommands.h>  // --------------------------  /* auto */
#include <dk2/StaticListeners.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEntryComponent;  // ----------------------------  /* auto */
  struct TbWType_t_TbPalette_t__vtbl;  // ----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEntryComponent : CComponent {  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ StaticListeners static_listeners;  // ------------  /* auto */
/* 20*/ TbWType_t_TbPalette_t__vtbl *_vftable;  // -------  /* auto */
/* 24*/ int32_t f24;  // ---------------------------------  /* auto */
/* 28*/ int32_t f28;  // ---------------------------------  /* auto */
/* 2C*/ MyCommands commands;  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066C424*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CComponent  -----------------------------  /* auto */
/*  0*/ // virtual uint32_t *v_deleting_destructor(char);  // = 004010F0  /* auto */
/*  4*/ // virtual int32_t v_f4_();  // = 004011D0  ------  /* auto */
/*  8*/ // virtual void *v_f8_();  // = 00401200  --------  /* auto */
/*  C*/ // virtual int32_t v_handle();  // = 00401210  ---  /* auto */
/* 10*/ // virtual uint32_t *v_f10_();  // = 004013E0  ---  /* auto */
/* 14*/ // virtual void ***v_mainGuiLoop();  // = 00401410  /* auto */
/*---*/ // CEntryComponent  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00401060*/ CEntryComponent *constructor();  // ---------  /* auto */
/*004010F0*/ void *deleting_destructor(char);  // --------  /* auto */
/*00401170*/ void destructor();  // ----------------------  /* auto */
/*004011D0*/ int32_t fillStaticListeners();  // ----------  /* auto */
/*00401210*/ int32_t init_console_commands();  // --------  /* auto */
/*004013E0*/ MyCommands *fun_4013E0();  // ---------------  /* auto */
/*00401410*/ int32_t runUntilDestroy();  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEntryComponent) == 0x40);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENTRY_COMPONENT_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
