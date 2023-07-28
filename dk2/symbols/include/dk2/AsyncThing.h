// -----------------  id: vtbl_006727FC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef ASYNC_THING_H  // --------------------------------  /* auto */
#define ASYNC_THING_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/PtrArrList.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AsyncThing;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct AsyncThing {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t f0_level;  // ----------------------------  /* auto */
/*  8*/ uint32_t *f4_value;  // --------------------------  /* auto */
/*  C*/ uint32_t f8_lastError;  // -----------------------  /* auto */
/* 10*/ uint32_t exit_thread_flag;  // -------------------  /* auto */
/* 14*/ void *f10_hThread;  // ---------------------------  /* auto */
/* 18*/ void *f14_hEvent1;  // ---------------------------  /* auto */
/* 1C*/ uint32_t f18_hEvent2;  // ------------------------  /* auto */
/* 20*/ uint32_t field_1C;  // ---------------------------  /* auto */
/* 24*/ PtrArrList f20_dwordList;  // --------------------  /* auto */
/* 34*/ PtrArrList f30_list2;  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006727FC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // AsyncThing  -----------------------------------  /* auto */
/*  0*/ virtual void *v_deleting_destructor(char);  // = 005DA340  /* auto */
// -------------------------------------------------------  /* auto */
/*005DA340*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005DA360*/ void destructor();  // ----------------------  /* auto */
/*005DA3F0*/ BOOL sub_5DA3F0();  // ----------------------  /* auto */
/*005DA460*/ int32_t thread_proc_entry();  // ------------  /* auto */
/*005DA580*/ int32_t startThread(int32_t);  // -----------  /* auto */
/*005DA5F0*/ uint32_t *join();  // -----------------------  /* auto */
/*005DA660*/ int32_t prepareAndStartThread(int32_t);  // -  /* auto */
/*005DA6B0*/ uint32_t *stop();  // -----------------------  /* auto */
/*005DA6D0*/ uint32_t *create_eventPair(uint32_t *);  // -  /* auto */
/*005DA760*/ uint32_t *fun_5DA760();  // -----------------  /* auto */
/*005DA7C0*/ uint32_t *signalAndWait(uint32_t *);  // ----  /* auto */
/*005DA830*/ int32_t *setObjAndSignal(int32_t *, int32_t);  /* auto */
/*005DA850*/ uint32_t *setChildAndSignal(uint32_t *, int32_t);  /* auto */
/*005DA870*/ uint32_t *sub_5DA870(uint32_t *);  // -------  /* auto */
/*005DA8E0*/ uint32_t *sub_5DA8E0(uint32_t *);  // -------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(AsyncThing) == 0x44);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //ASYNC_THING_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
