// -----------------  id: vtbl_0066EB8C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_LOCAL_COMMUNICATION_H  // ----------------------  /* auto */
#define C_LOCAL_COMMUNICATION_H  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CCommunicationInterface.h>  // -------------  /* auto */
#include <dk2/GameActionArray.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CLocalCommunication;  // ------------------------  /* auto */
  struct GameAction;  // ---------------------------------  /* auto */
  struct GameActionCtx;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CLocalCommunication : CCommunicationInterface {      /* auto */
// -------------------------------------------------------  /* auto */
/* 14*/ GameActionArray clickList;  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066EB8C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CCommunicationInterface  ----------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 005226D0  /* auto */
/*  4*/ // virtual int32_t v_f4();  // = 00522740  -------  /* auto */
/*  8*/ // virtual void v_f8();  // = 00401200  ----------  /* auto */
/*  C*/ // virtual int32_t v_fun_443150(GameAction *, int32_t);  // = 00443150  /* auto */
/* 10*/ // virtual void v_pushAction(GameAction *);  // = 00522750  /* auto */
/* 14*/ // virtual int32_t v_collectActions(void *);  // = 00522760  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 004B4C20  ------  /* auto */
/* 1C*/ // virtual void v_f1C(int32_t, int32_t);  // = 00580470  /* auto */
/* 20*/ // virtual void v_f20(int32_t, int32_t);  // = 00580470  /* auto */
/* 24*/ // virtual void v_f24(int32_t, int32_t);  // = 00580470  /* auto */
/* 28*/ // virtual void v_f28(int32_t);  // = 005671E0  --  /* auto */
/* 2C*/ // virtual void *v_f2C();  // = 0040D440  --------  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 00628BC0  ------  /* auto */
/* 34*/ // virtual void *v_f34();  // = 00628BC0  --------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00484940  ------  /* auto */
/* 3C*/ // virtual int32_t v_fun_521B40(int32_t);  // = 00521B40  /* auto */
/* 40*/ // virtual void v_f40(int32_t, int32_t);  // = 00580470  /* auto */
/* 44*/ // virtual int32_t v_fun_52B700(int32_t);  // = 0052B700  /* auto */
/* 48*/ // virtual void v_f48(int32_t);  // = 0062A210  --  /* auto */
/*---*/ // CLocalCommunication  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00522680*/ CLocalCommunication *constructor();  // -----  /* auto */
/*005226D0*/ void *deleting_destructor(char);  // --------  /* auto */
/*005226F0*/ void destructor();  // ----------------------  /* auto */
/*00522740*/ int32_t fun_522740();  // -------------------  /* auto */
/*00522750*/ int32_t pushAction(GameAction *);  // -------  /* auto */
/*00522760*/ int32_t fun_522760(GameActionCtx *);  // ----  /* auto */
/*00522790*/ char collectGameActions(GameActionCtx *);      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CLocalCommunication) == 0x260);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_LOCAL_COMMUNICATION_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
