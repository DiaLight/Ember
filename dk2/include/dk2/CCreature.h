// -----------------  id: vtbl_0066D524  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_CREATURE_H  // ---------------------------------  /* auto */
#define C_CREATURE_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CMovingThing.h>  // ------------------------  /* auto */
#include <dk2/CState.h>  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CCreature;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CCreature : CMovingThing {  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*124*/ int8_t obj_124[274];  // -------------------------  /* auto */
/*236*/ int16_t roomNodeX;  // ---------------------------  /* auto */
/*238*/ int16_t roomNodeY;  // ---------------------------  /* auto */
/*23A*/ int16_t playerTorturedCreatureTypeListNodeX;  // -  /* auto */
/*23C*/ int16_t playerTorturedCreatureTypeListNodeY;  // -  /* auto */
/*23E*/ int16_t battleNodeX;  // -------------------------  /* auto */
/*240*/ int16_t battleNodeY;  // -------------------------  /* auto */
/*242*/ int8_t gap_242[4];  // ---------------------------  /* auto */
/*246*/ int32_t f246;  // --------------------------------  /* auto */
/*24A*/ int16_t freeNodeX;  // ---------------------------  /* auto */
/*24C*/ int16_t freeNodeY;  // ---------------------------  /* auto */
/*24E*/ CState cstate;  // -------------------------------  /* auto */
/*36F*/ int8_t typeId;  // -------------------------------  /* auto */
/*370*/ int8_t gap_370[29];  // --------------------------  /* auto */
/*38D*/ int32_t obj_38D;  // -----------------------------  /* auto */
/*391*/ int32_t f391;  // --------------------------------  /* auto */
/*395*/ int32_t f395;  // --------------------------------  /* auto */
/*399*/ int8_t gap_399[103];  // -------------------------  /* auto */
/*400*/ char xp;  // -------------------------------------  /* auto */
/*401*/ int8_t gap_401[2];  // ---------------------------  /* auto */
/*403*/ char level;  // ----------------------------------  /* auto */
/*404*/ int8_t gap_404[236];  // -------------------------  /* auto */
/*4F0*/ int32_t casinoBigWinGameTick;  // ----------------  /* auto */
/*4F4*/ int16_t casinoGamblingDuration;  // --------------  /* auto */
/*4F6*/ int16_t torturedDuration;  // --------------------  /* auto */
/*4F8*/ int8_t notUsed;  // ------------------------------  /* auto */
/*4F9*/ int8_t triggerRootRepeatCount;  // ---------------  /* auto */
/*4FA*/ int32_t gameTickInitialised;  // -----------------  /* auto */
/*4FE*/ char obj_4FE;  // --------------------------------  /* auto */
/*4FF*/ int8_t f4ff_gap[63];  // -------------------------  /* auto */
/*53E*/ char _end;  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D524*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B5F70  /* auto */
/*  4*/ // virtual BOOL v_f4(void **);  // = 00488520  ---  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 00488640    /* auto */
/*  C*/ // virtual int32_t v_fC();  // = 00488710  -------  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 00488750  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00488930  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00628BC0  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00628BC0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 0048D050  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual char *v_f2C();  // = 004B5D40  --------  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 0048AF80  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00628BC0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 004B5D60  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 004B5D80  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 00490230  ------  /* auto */
/* 48*/ // virtual void v_f48();  // = 00490240  ---------  /* auto */
/* 4C*/ // virtual int16_t *v_f4C(int16_t *);  // = 0048D880  /* auto */
/* 50*/ // virtual int16_t *v_f50(int16_t *);  // = 0048D340  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual char *v_f54();  // = 004B5D50  --------  /* auto */
/* 58*/ // virtual int16_t *v_f58(int16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 0048E830  ---------  /* auto */
/*---*/ // super CMovingThing  ---------------------------  /* auto */
/* 60*/ // virtual int32_t v_f60();  // = 00628BC0  ------  /* auto */
/* 64*/ // virtual int32_t v_f64();  // = 004B2740  ------  /* auto */
/* 68*/ // virtual int32_t v_f68();  // = 00402AD0  ------  /* auto */
/* 6C*/ // virtual int32_t v_f6C();  // = 004B5DF0  ------  /* auto */
/* 70*/ // virtual char v_f70();  // = 004B5E00  ---------  /* auto */
/* 74*/ // virtual int32_t v_f74();  // = 004B5DE0  ------  /* auto */
/* 78*/ // virtual int32_t v_f78();  // = 0040D440  ------  /* auto */
/* 7C*/ // virtual char v_f7C();  // = 0040D440  ---------  /* auto */
/* 80*/ // virtual int32_t v_f80();  // = 00402AD0  ------  /* auto */
/* 84*/ // virtual int32_t v_f84();  // = 00402AD0  ------  /* auto */
/* 88*/ // virtual BOOL v_f88();  // = 0048ED40  ---------  /* auto */
/* 8C*/ // virtual __int16 v_f8C(__int16);  // = 0048D010   /* auto */
/* 90*/ // virtual int32_t v_f90();  // = 0048D000  ------  /* auto */
/*---*/ // CCreature  ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0045CB00*/ int32_t fun_45CB00();  // -------------------  /* auto */
/*0045E9F0*/ BOOL fun_45E9F0();  // ----------------------  /* auto */
/*0045EDA0*/ BOOL fun_45EDA0();  // ----------------------  /* auto */
/*00488930*/ int32_t fun_488930();  // -------------------  /* auto */
/*0048F250*/ BOOL fun_48F250();  // ----------------------  /* auto */
/*00490240*/ void dump();  // ----------------------------  /* auto */
/*004B5B80*/ void destructor();  // ----------------------  /* auto */
/*004B5E10*/ void constructor();  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CCreature) == 0x53F);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_CREATURE_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
