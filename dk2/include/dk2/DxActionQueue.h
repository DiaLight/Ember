// -----------------  id: vtbl_006727B0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef DX_ACTION_QUEUE_H  // ----------------------------  /* auto */
#define DX_ACTION_QUEUE_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/Buf1000.h>  // -----------------------------  /* auto */
#include <dk2/LockBase.h>  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct DxAction;  // -----------------------------------  /* auto */
  struct DxActionQueue;  // ------------------------------  /* auto */
  struct MyDxInputState;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct DxActionQueue : LockBase {  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ int32_t fC;  // ----------------------------------  /* auto */
/* 10*/ char f10;  // ------------------------------------  /* auto */
/* 11*/ int8_t gap_11[3];  // ----------------------------  /* auto */
/* 14*/ Buf1000 read;  // --------------------------------  /* auto */
/* 24*/ Buf1000 write;  // -------------------------------  /* auto */
/* 34*/ int32_t *dwarr_base;  // -------------------------  /* auto */
/* 38*/ int32_t dwcount;  // -----------------------------  /* auto */
/* 3C*/ int32_t itemsCount;  // --------------------------  /* auto */
/* 40*/ _RTL_CRITICAL_SECTION *pCriticalSection;  // -----  /* auto */
// -------------------------------------------------------  /* auto */
/*006727B0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 005D9AA0  /* auto */
/*---*/ // super MyComEx  --------------------------------  /* auto */
/*  C*/ // virtual void v_fun1(int32_t);  // = 005671E0  -  /* auto */
/* 10*/ // virtual int32_t v_fun2(DxAction *);  // = 005D9E20  /* auto */
/* 14*/ // virtual int32_t v_fun3(DxAction *);  // = 005BB660  /* auto */
/* 18*/ // virtual int32_t v_fun4(DxAction *);  // = 005D9E20  /* auto */
/*---*/ // super LockBase  -------------------------------  /* auto */
/* 1C*/ // virtual int32_t v_getItemsCount();  // = 005D9A90  /* auto */
/* 20*/ // virtual void v_handleItem(int32_t *, MyDxInputState *);  // = 005D9FE0  /* auto */
/*---*/ // DxActionQueue  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005D9990*/ DxActionQueue *constructor();  // -----------  /* auto */
/*005D9A90*/ int32_t getItemsCount();  // ----------------  /* auto */
/*005D9AA0*/ DxActionQueue *deleting_destructor(char);      /* auto */
/*005D9AC0*/ int32_t destructor();  // -------------------  /* auto */
/*005D9E20*/ void fun24(DxAction *);  // -----------------  /* auto */
/*005D9E30*/ void addItem(DxAction *);  // ---------------  /* auto */
/*005D9FE0*/ int32_t *handleItem(int32_t *, MyDxInputState *);  /* auto */
/*005DA0E0*/ void lock();  // ----------------------------  /* auto */
/*005DA140*/ void unlock();  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(DxActionQueue) == 0x44);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //DX_ACTION_QUEUE_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
