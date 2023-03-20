// -----------------  id: vtbl_0066D6EC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_DOOR_H  // -------------------------------------  /* auto */
#define C_DOOR_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CPhysicalThing.h>  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CDoor;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CDoor : CPhysicalThing {  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* F6*/ int8_t typeId;  // -------------------------------  /* auto */
/* F7*/ int8_t ff7_gap[4];  // ---------------------------  /* auto */
/* FB*/ int32_t doorPosition;  // ------------------------  /* auto */
/* FF*/ int8_t fff_gap[2];  // ---------------------------  /* auto */
/*101*/ int16_t keyLockedObjectTag;  // ------------------  /* auto */
/*103*/ int16_t frameObjectTag;  // ----------------------  /* auto */
/*105*/ int32_t timeSinceLastShot;  // -------------------  /* auto */
/*109*/ int32_t blueprint;  // ---------------------------  /* auto */
/*10D*/ int32_t doorOpen;  // ----------------------------  /* auto */
/*111*/ int32_t doorLock;  // ----------------------------  /* auto */
/*115*/ int32_t lockPickedTimer;  // ---------------------  /* auto */
/*119*/ int8_t doorDirection;  // ------------------------  /* auto */
/*11A*/ int32_t nextHealthGainTick;  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D6EC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B7380  /* auto */
/*  4*/ // virtual BOOL v_f4(void **);  // = 004A54D0  ---  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 004A5560    /* auto */
/*  C*/ // virtual int32_t v_fC();  // = 004A7CC0  -------  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 004A55B0  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 004A55F0  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00628BC0  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00402AD0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 004A67C0  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual char *v_f2C();  // = 004B5C10  --------  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 004A66A0  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00402AD0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 00402AD0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 00402AD0  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 00490230  ------  /* auto */
/* 48*/ // virtual void v_f48();  // = 004A6F10  ---------  /* auto */
/* 4C*/ // virtual int16_t *v_f4C(int16_t *);  // = 004A68C0  /* auto */
/* 50*/ // virtual int16_t *v_f50(int16_t *);  // = 004A68A0  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual char *v_f54();  // = 004B5C40  --------  /* auto */
/* 58*/ // virtual int16_t *v_f58(int16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 004A6E10  ---------  /* auto */
/*---*/ // CDoor  ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004A6F10*/ void dump();  // ----------------------------  /* auto */
/*004B7310*/ CDoor *constructor();  // -------------------  /* auto */
/*004B73A0*/ int32_t destructor();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CDoor) == 0x11E);  // ---------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_DOOR_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
