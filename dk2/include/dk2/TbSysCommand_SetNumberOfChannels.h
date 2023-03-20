// -----------------  id: vtbl_0066F92C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef TB_SYS_COMMAND__SET_NUMBER_OF_CHANNELS_H  // -----  /* auto */
#define TB_SYS_COMMAND__SET_NUMBER_OF_CHANNELS_H  // -----  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyTbAudioSystem;  // ----------------------------  /* auto */
  struct TbSysCommand_SetNumberOfChannels;  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct TbSysCommand_SetNumberOfChannels {  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t value;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066F92C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // TbSysCommand_SetNumberOfChannels  -------------  /* auto */
/*  0*/ virtual void v_TbSysCommand__SetNumberOfChannels__fun_608360(int32_t, MyTbAudioSystem *);  // = 00608360  /* auto */
// -------------------------------------------------------  /* auto */
/*00608360*/ int32_t *fun_608360(int32_t *, MyTbAudioSystem *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(TbSysCommand_SetNumberOfChannels) == 0x8);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //TB_SYS_COMMAND__SET_NUMBER_OF_CHANNELS_H  -------  /* auto */
// -------------------------------------------------------  /* auto */
