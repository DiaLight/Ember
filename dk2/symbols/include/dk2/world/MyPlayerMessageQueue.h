// --------------  id: construct_00508AAC  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_PLAYER_MESSAGE_QUEUE_H  // --------------------  /* auto */
#define MY_PLAYER_MESSAGE_QUEUE_H  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CCamera;  // ------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct MyPlayerMessage;  // ----------------------------  /* auto */
  struct MyPlayerMessageQueue;  // -----------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyPlayerMessageQueue {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t opened;  // ------------------------------  /* auto */
/*  4*/ CWorld *world;  // -------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
/*  C*/ MyPlayerMessage *messagesPos;  // ----------------  /* auto */
/* 10*/ int32_t f10;  // ---------------------------------  /* auto */
/* 14*/ MyPlayerMessage *messages;  // -------------------  /* auto */
/* 18*/ int32_t uniqueIdCounter;  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004C4090*/ int32_t createQueue(CWorld *);  // ----------  /* auto */
/*004C41A0*/ void clear();  // ---------------------------  /* auto */
/*004C43B0*/ int32_t saveToTbDiscFile(TbDiscFile **);       /* auto */
/*004C4470*/ int32_t fun_4C4470(CCamera *);  // ----------  /* auto */
/*004C4600*/ MyPlayerMessage *fun_4C4600(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004C4B10*/ void dump();  // ----------------------------  /* auto */
/*004C53F0*/ void fun_4C53F0(__int16, int32_t, int32_t);    /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyPlayerMessageQueue) == 0x1C);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_PLAYER_MESSAGE_QUEUE_H  ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
