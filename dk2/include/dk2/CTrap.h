// -----------------  id: vtbl_0066D754  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_TRAP_H  // -------------------------------------  /* auto */
#define C_TRAP_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CPhysicalThing.h>  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CTrap;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CTrap : CPhysicalThing {  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* F6*/ int8_t typeId;  // -------------------------------  /* auto */
/* F7*/ int8_t ff7_gap[8];  // ---------------------------  /* auto */
/* FF*/ int32_t rechargeAtTime;  // ----------------------  /* auto */
/*103*/ int32_t lastIdleTime;  // ------------------------  /* auto */
/*107*/ int32_t nextHealthGainTick;  // ------------------  /* auto */
/*10B*/ int8_t chargeTimeBeforeShot;  // -----------------  /* auto */
/*10C*/ char triggerTrapsInRange_flags;  // --------------  /* auto */
/*10D*/ int8_t triggeringTime;  // -----------------------  /* auto */
/*10E*/ int8_t threatDuration;  // -----------------------  /* auto */
/*10F*/ int32_t threat;  // ------------------------------  /* auto */
/*113*/ int16_t nearestRoom;  // -------------------------  /* auto */
/*115*/ int16_t beingDisarmed;  // -----------------------  /* auto */
/*117*/ int16_t triggeringCreature;  // ------------------  /* auto */
/*119*/ int32_t tickLastCalledFindLineOfSightTarget;  // -  /* auto */
/*11D*/ int16_t tagIdOfLastCallToFindLineOfSightTarget;     /* auto */
// -------------------------------------------------------  /* auto */
/*0066D754*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(char);  // = 004B7470  /* auto */
/*  4*/ // virtual BOOL v_f4(const void **);  // = 004A7BD0  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 004A7C60    /* auto */
/*  C*/ // virtual int32_t v_fC();  // = 004A7CC0  -------  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 004A7CE0  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 004A84E0  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00628BC0  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00402AD0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 004A96A0  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual const char *v_f2C();  // = 004B5C10  --  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 004A93E0  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00402AD0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 00402AD0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 00402AD0  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 004AA120  ------  /* auto */
/* 48*/ // virtual void v_f48();  // = 004AA130  ---------  /* auto */
/* 4C*/ // virtual int16_t *v_f4C(int16_t *);  // = 004A9B70  /* auto */
/* 50*/ // virtual int16_t *v_f50(int16_t *);  // = 004A68A0  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual const char *v_f54();  // = 004B5C40  --  /* auto */
/* 58*/ // virtual int16_t *v_f58(int16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 004AA050  ---------  /* auto */
/*---*/ // CTrap  ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004AA130*/ void dump();  // ----------------------------  /* auto */
/*004B7400*/ CTrap *constructor();  // -------------------  /* auto */
/*004B7490*/ int32_t destructor();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CTrap) == 0x11F);  // ---------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_TRAP_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
