// -------------  id: constructor_004D55B0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_PILOT_NAVIGATION_H  // ------------------------  /* auto */
#define MY_PILOT_NAVIGATION_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/utils/Pos2i.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CCreature;  // ----------------------------------  /* auto */
  struct MyPilotNavigation;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyPilotNavigation {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint8_t gap_0[132];  // --------------------------  /* auto */
/* 84*/ Pos2i pos;  // -----------------------------------  /* auto */
/* 8C*/ Pos2i vel;  // -----------------------------------  /* auto */
/* 94*/ Pos2i localXAxis;  // ----------------------------  /* auto */
/* 9C*/ Pos2i localYAxis;  // ----------------------------  /* auto */
/* A4*/ Pos2i pathTargetPos;  // -------------------------  /* auto */
/* AC*/ Pos2i projectionVector;  // ----------------------  /* auto */
/* B4*/ Pos2i subpath_buffer[5];  // ---------------------  /* auto */
/* DC*/ __int16 radius;  // ------------------------------  /* auto */
/* DE*/ int32_t maxForce;  // ----------------------------  /* auto */
/* E2*/ int32_t maxSpeed;  // ----------------------------  /* auto */
/* E6*/ int32_t subpathDist[5];  // ----------------------  /* auto */
/* FA*/ int32_t pathtotalDist;  // -----------------------  /* auto */
/* FE*/ int32_t pathSubpathDist;  // ---------------------  /* auto */
/*102*/ int32_t pathTailDist;  // ------------------------  /* auto */
/*106*/ int32_t pathLastProgress;  // --------------------  /* auto */
/*10A*/ uint16_t pathStuckBuffer;  // --------------------  /* auto */
/*10C*/ uint8_t pathTotalCount;  // ----------------------  /* auto */
/*10D*/ uint8_t pathFlags;  // ---------------------------  /* auto */
/*10E*/ uint8_t pathBufferCount_n_pathCount_n_pathFinished_n_isBlocker;  /* auto */
/*10F*/ char ignoreBlocker_n_escapeStuckMode;  // --------  /* auto */
/*110*/ uint16_t tagId;  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004D0F60*/ BOOL fun_4D0F60(CCreature *, uint32_t *, char);  /* auto */
/*004D1070*/ int32_t fun_4D1070(CCreature *);  // --------  /* auto */
/*004D4760*/ char fun_4D4760(CCreature *);  // -----------  /* auto */
/*004D5100*/ BOOL fun_4D5100(Pos2i *, char);  // ---------  /* auto */
/*004D54F0*/ int32_t fun_4D54F0();  // -------------------  /* auto */
/*004D55B0*/ MyPilotNavigation *constructor();  // -------  /* auto */
/*004D59A0*/ int32_t fun_4D59A0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004D59E0*/ BOOL fun_4D59E0(int32_t, int32_t, char);       /* auto */
/*004D5A40*/ char fun_4D5A40(CCreature *);  // -----------  /* auto */
/*004D5AC0*/ int32_t fun_4D5AC0(int32_t *, int32_t *);      /* auto */
/*004D5AF0*/ int32_t fun_4D5AF0(int32_t *, int32_t *);      /* auto */
/*004D5B20*/ int32_t fun_4D5B20();  // -------------------  /* auto */
/*004D5C00*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyPilotNavigation) == 0x112);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_PILOT_NAVIGATION_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
