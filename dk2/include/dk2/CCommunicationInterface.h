// -----------------  id: vtbl_0066EB3C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_COMMUNICATION_INTERFACE_H  // ------------------  /* auto */
#define C_COMMUNICATION_INTERFACE_H  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CCommunicationInterface;  // --------------------  /* auto */
  struct GameAction;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CCommunicationInterface {  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t field_0;  // -----------------------------  /* auto */
/*  8*/ int32_t field_4;  // -----------------------------  /* auto */
/*  C*/ int32_t f8_timeMs_to__;  // ----------------------  /* auto */
/* 10*/ int32_t field_C;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066EB3C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CCommunicationInterface  ----------------------  /* auto */
/*  0*/ virtual void *v_deleting_destructor(char);  // = 00521B50  /* auto */
/*  4*/ virtual int32_t v_f4();  // = 00634D60  ----------  /* auto */
/*  8*/ virtual void v_f8();  // = 00634D60  -------------  /* auto */
/*  C*/ virtual int32_t v_fun_443150(GameAction *, int32_t);  // = 00443150  /* auto */
/* 10*/ virtual void v_pushAction(GameAction *);  // = 00634D60  /* auto */
/* 14*/ virtual int32_t v_collectActions(void *);  // = 00634D60  /* auto */
/* 18*/ virtual int32_t v_f18();  // = 00634D60  ---------  /* auto */
/* 1C*/ virtual void v_f1C(int32_t, int32_t);  // = 00634D60  /* auto */
/* 20*/ virtual void v_f20(int32_t, int32_t);  // = 00634D60  /* auto */
/* 24*/ virtual void v_f24(int32_t, int32_t);  // = 00634D60  /* auto */
/* 28*/ virtual void v_f28(int32_t);  // = 00634D60  -----  /* auto */
/* 2C*/ virtual void *v_f2C();  // = 00634D60  -----------  /* auto */
/* 30*/ virtual int32_t v_f30();  // = 00634D60  ---------  /* auto */
/* 34*/ virtual void *v_f34();  // = 00634D60  -----------  /* auto */
/* 38*/ virtual int32_t v_f38();  // = 00634D60  ---------  /* auto */
/* 3C*/ virtual int32_t v_fun_521B40(int32_t);  // = 00521B40  /* auto */
/* 40*/ virtual void v_f40(int32_t, int32_t);  // = 00580470  /* auto */
/* 44*/ virtual int32_t v_fun_52B700(int32_t);  // = 0052B700  /* auto */
/* 48*/ virtual void v_f48(int32_t);  // = 00634D60  -----  /* auto */
// -------------------------------------------------------  /* auto */
/*00521B20*/ CCommunicationInterface *constructor();  // -  /* auto */
/*00521BA0*/ int32_t fun_521BA0();  // -------------------  /* auto */
/*00521CC0*/ int32_t updateTime_to__();  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CCommunicationInterface) == 0x14);     /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_COMMUNICATION_INTERFACE_H  --------------------  /* auto */
// -------------------------------------------------------  /* auto */
