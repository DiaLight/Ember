// -----------------  id: vtbl_00673E48  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TB_AUDIO_SYSTEM_H  // -------------------------  /* auto */
#define MY_TB_AUDIO_SYSTEM_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/TbAudioSystem.h>  // -----------------------  /* auto */
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
struct MyTbAudioSystem : TbAudioSystem {  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 1C*/ const void *obj_MyUnk673EB0;  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00673E48*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super TbAudioSystem  --------------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(char);  // = 006086C0  /* auto */
/*  4*/ // virtual int32_t *v_f4(int32_t *);  // = 006086F0  /* auto */
/*  8*/ // virtual int32_t *v_f8(int32_t *, int32_t, int32_t, int32_t);  // = 00608B70  /* auto */
/*  C*/ // virtual int32_t v_fC();  // = 00608DA0  -------  /* auto */
/* 10*/ // virtual int32_t v_f10(int32_t, int32_t *);  // = 00608C20  /* auto */
/* 14*/ // virtual int32_t *v_f14(int32_t *);  // = 00608800  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00608720  ------  /* auto */
/*---*/ // MyTbAudioSystem  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00608640*/ MyTbAudioSystem *constructor();  // ---------  /* auto */
/*00608E40*/ int32_t applyAction(int32_t, TbSysCommand_SetNumberOfChannels *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTbAudioSystem) == 0x20);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TB_AUDIO_SYSTEM_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
