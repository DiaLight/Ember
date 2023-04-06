// -------------  id: constructor_00526020  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_PROFILER_H  // --------------------------------  /* auto */
#define MY_PROFILER_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/GameActionArray.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CBridge;  // ------------------------------------  /* auto */
  struct CCommunicationInterface;  // --------------------  /* auto */
  struct CDefaultPlayerInterface;  // --------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct GameAction;  // ---------------------------------  /* auto */
  struct MyProfiler;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyProfiler {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ CWorld *pWorld;  // ------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
/*  C*/ CDefaultPlayerInterface *player_i;  // -----------  /* auto */
/* 10*/ CBridge *c_bridge;  // ---------------------------  /* auto */
/* 14*/ CWorld *cworld;  // ------------------------------  /* auto */
/* 18*/ CCommunicationInterface *communication_interface;   /* auto */
/* 1C*/ GameActionArray clickList;  // -------------------  /* auto */
/*268*/ int32_t f268;  // --------------------------------  /* auto */
/*26C*/ int32_t f26C;  // --------------------------------  /* auto */
/*270*/ int32_t counter;  // -----------------------------  /* auto */
/*274*/ int32_t counter_274;  // -------------------------  /* auto */
/*278*/ int8_t gap_278[4];  // ---------------------------  /* auto */
/*27C*/ int32_t field_int_27C;  // -----------------------  /* auto */
/*280*/ int32_t f280;  // --------------------------------  /* auto */
/*284*/ int32_t f284;  // --------------------------------  /* auto */
/*288*/ int32_t f288;  // --------------------------------  /* auto */
/*28C*/ int32_t f28C;  // --------------------------------  /* auto */
/*290*/ __int16 f290;  // --------------------------------  /* auto */
/*292*/ int32_t f292;  // --------------------------------  /* auto */
/*296*/ int32_t f296;  // --------------------------------  /* auto */
/*29A*/ int32_t f29A;  // --------------------------------  /* auto */
/*29E*/ int32_t f29E;  // --------------------------------  /* auto */
/*2A2*/ int32_t f2A2;  // --------------------------------  /* auto */
/*2A6*/ int32_t f2A6;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00526020*/ MyProfiler *constructor();  // --------------  /* auto */
/*00526090*/ int32_t probably_Profiler_constructor();       /* auto */
/*00526280*/ void dumpStats();  // -----------------------  /* auto */
/*00526590*/ int32_t draw3dScene(int32_t);  // -----------  /* auto */
/*00526FF0*/ int32_t attachPlayerI(CDefaultPlayerInterface *, int32_t);  /* auto */
/*00527020*/ int32_t clear_pobj_C(int32_t);  // ----------  /* auto */
/*00527040*/ int32_t attachCBridge(CBridge *, int32_t);     /* auto */
/*00527070*/ int32_t clearCBridge(int32_t);  // ----------  /* auto */
/*00527090*/ int32_t attachCWorld(CWorld *);  // ---------  /* auto */
/*005270C0*/ int32_t clearCWorld(int32_t);  // -----------  /* auto */
/*005270E0*/ int32_t attachCommunicationInterface(CCommunicationInterface *);  /* auto */
/*00527110*/ int32_t clearCommunicationInterface(int32_t);  /* auto */
/*00527130*/ BOOL pushAction(GameAction *);  // ----------  /* auto */
/*00527150*/ int32_t sub_527150(int32_t);  // ------------  /* auto */
/*00527180*/ int32_t handleActions();  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyProfiler) == 0x2AA);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_PROFILER_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
