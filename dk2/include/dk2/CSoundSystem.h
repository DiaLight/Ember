// -----------------  id: vtbl_0066F7FC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_SOUND_SYSTEM_H  // -----------------------------  /* auto */
#define C_SOUND_SYSTEM_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyTbAudioSystem.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CSoundSystem;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CSoundSystem {  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t f4;  // ----------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
/*  C*/ MyTbAudioSystem audio;  // -----------------------  /* auto */
/* 2C*/ int32_t f2C;  // ---------------------------------  /* auto */
/* 30*/ int32_t f30;  // ---------------------------------  /* auto */
/* 34*/ int32_t f34;  // ---------------------------------  /* auto */
/* 38*/ int32_t f38;  // ---------------------------------  /* auto */
/* 3C*/ int32_t f3C;  // ---------------------------------  /* auto */
/* 40*/ int32_t f40;  // ---------------------------------  /* auto */
/* 44*/ int8_t gap_44[4];  // ----------------------------  /* auto */
/* 48*/ int32_t f48;  // ---------------------------------  /* auto */
/* 4C*/ int32_t f4C;  // ---------------------------------  /* auto */
/* 50*/ int32_t f50;  // ---------------------------------  /* auto */
/* 54*/ int32_t f54;  // ---------------------------------  /* auto */
/* 58*/ int32_t f58;  // ---------------------------------  /* auto */
/* 5C*/ int32_t f5C;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066F7FC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CSoundSystem  ---------------------------------  /* auto */
/*  0*/ virtual int32_t *v__scalar_deleting_destructor_uint(char);  // = 005672B0  /* auto */
/*  4*/ virtual int32_t v_sub_567210();  // = 00567210  --  /* auto */
/*  8*/ virtual int32_t v_set_number_of_channels(int32_t);  // = 00567300  /* auto */
/*  C*/ virtual BOOL v_fun_5677E0();  // = 005677E0  -----  /* auto */
/* 10*/ virtual int32_t v_fun_567410();  // = 00567410  --  /* auto */
/* 14*/ virtual int32_t v_fun_5677D0();  // = 005677D0  --  /* auto */
/* 18*/ virtual int32_t v_fun_5674F0();  // = 005674F0  --  /* auto */
/* 1C*/ virtual int32_t v_fun_567790(int32_t, char *);  // = 00567790  /* auto */
/* 20*/ virtual int32_t v_fun_5678F0(int32_t, int32_t, int32_t, int32_t *);  // = 005678F0  /* auto */
/* 24*/ virtual int32_t v_fun_567810(int32_t, int32_t, int32_t);  // = 00567810  /* auto */
/* 28*/ virtual int32_t v_fun_567730(int32_t, int32_t);  // = 00567730  /* auto */
/* 2C*/ virtual int32_t v_fun_567AF0(int32_t);  // = 00567AF0  /* auto */
/* 30*/ virtual int32_t v_fun_567A70(int32_t, int32_t *);  // = 00567A70  /* auto */
/* 34*/ virtual int32_t v_fun_567A10(int32_t, int32_t, int32_t);  // = 00567A10  /* auto */
/* 38*/ virtual int32_t *v_fun_567A40(int32_t *, void (__thiscall ***)(int32_t, int32_t, void *));  // = 00567A40  /* auto */
/* 3C*/ virtual int32_t v_update_room_ambience(void (__thiscall **)(int32_t, int32_t, void *), void (__thiscall **)(int32_t, int32_t, void *), void (__thiscall **)(int32_t, int32_t, void *), int32_t);  // = 00567B30  /* auto */
/* 40*/ virtual int32_t v_sub_567220(int32_t);  // = 00567220  /* auto */
/* 44*/ virtual void v_sub_567230();  // = 00567230  -----  /* auto */
/* 48*/ virtual int32_t v_set_listener_direction(int16_t *);  // = 00567B80  /* auto */
/* 4C*/ virtual int32_t v_fun_567BC0(int32_t);  // = 00567BC0  /* auto */
/* 50*/ virtual int32_t v_fun_567BE0(int32_t);  // = 00567BE0  /* auto */
/* 54*/ virtual int32_t v_setProperty(int32_t, void (__thiscall **)(int32_t, int32_t, void *));  // = 00567BF0  /* auto */
/* 58*/ virtual int32_t v_sub_567240();  // = 00567240  --  /* auto */
/* 5C*/ virtual int32_t v_set_view(void (__thiscall **)(int32_t, int32_t, void *));  // = 00567DA0  /* auto */
/* 60*/ virtual int32_t v_fun_567440();  // = 00567440  --  /* auto */
/* 64*/ virtual int32_t v_destroy_sound();  // = 00567E70   /* auto */
/* 68*/ virtual int32_t v_sub_567250();  // = 00567250  --  /* auto */
/* 6C*/ virtual int32_t v_sub_567260();  // = 00567260  --  /* auto */
/* 70*/ virtual int32_t v_sub_567270(int32_t);  // = 00567270  /* auto */
/* 74*/ virtual int32_t v_sub_567280();  // = 00567280  --  /* auto */
/* 78*/ virtual void **v_init_sound(void **);  // = 00567DE0  /* auto */
/* 7C*/ virtual int32_t v_sub_567290(int32_t *);  // = 00567290  /* auto */
// -------------------------------------------------------  /* auto */
/*00567140*/ CSoundSystem *constructor();  // ------------  /* auto */
/*00567300*/ int32_t set_number_of_channels(int32_t);       /* auto */
/*005677D0*/ int32_t *fun_5677D0();  // ------------------  /* auto */
/*00567810*/ int32_t fun_567810(int32_t, int32_t, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CSoundSystem) == 0x60);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_SOUND_SYSTEM_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
