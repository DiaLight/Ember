// -----------------  id: vtbl_0066D86C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_SHOT_H  // -------------------------------------  /* auto */
#define C_SHOT_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CPhysicalThing.h>  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CShot;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CShot : CPhysicalThing {  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* F6*/ int32_t fF6;  // ---------------------------------  /* auto */
/* FA*/ int32_t fFA;  // ---------------------------------  /* auto */
/* FE*/ int32_t fFE;  // ---------------------------------  /* auto */
/*102*/ int8_t gap_102[34];  // --------------------------  /* auto */
/*124*/ int8_t typeId;  // -------------------------------  /* auto */
/*125*/ int8_t gap_125[8];  // ---------------------------  /* auto */
/*12D*/ int32_t age;  // ---------------------------------  /* auto */
/*131*/ int32_t targetPositionX;  // ---------------------  /* auto */
/*135*/ int32_t targetPositionY;  // ---------------------  /* auto */
/*139*/ int32_t targetPositionZ;  // ---------------------  /* auto */
/*13D*/ int32_t data1;  // -------------------------------  /* auto */
/*141*/ int32_t data2;  // -------------------------------  /* auto */
/*145*/ int16_t castByThingId;  // -----------------------  /* auto */
/*147*/ int16_t targetThing;  // -------------------------  /* auto */
/*149*/ int32_t processedAtStart;  // --------------------  /* auto */
/*14D*/ int32_t forceCollision;  // ----------------------  /* auto */
/*151*/ int32_t castByPosessed;  // ----------------------  /* auto */
/*155*/ int32_t maxRange;  // ----------------------------  /* auto */
/*159*/ int32_t startPositionX;  // ----------------------  /* auto */
/*15D*/ int32_t startPositionY;  // ----------------------  /* auto */
/*161*/ int32_t startPositionZ;  // ----------------------  /* auto */
/*165*/ int32_t sniperMode;  // --------------------------  /* auto */
/*169*/ int32_t sightOfEvilProcessed;  // ----------------  /* auto */
/*16D*/ int16_t castBy;  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D86C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B7E60  /* auto */
/*  4*/ // virtual BOOL v_f4(void **);  // = 004AB090  ---  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 004AB120    /* auto */
/*  C*/ // virtual int32_t v_fC();  // = 0049BBE0  -------  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 004AB170  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 004AB180  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00628BC0  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00402AD0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 0062A210  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual char *v_f2C();  // = 004B5D40  --------  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 004AB7F0  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00628BC0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 004B7E10  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 004B7E10  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 004ABAE0  ------  /* auto */
/* 48*/ // virtual void v_f48();  // = 004ABAF0  ---------  /* auto */
/* 4C*/ // virtual int16_t *v_f4C(int16_t *);  // = 004B5C20  /* auto */
/* 50*/ // virtual int16_t *v_f50(int16_t *);  // = 004B5C20  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual char *v_f54();  // = 004B5D50  --------  /* auto */
/* 58*/ // virtual int16_t *v_f58(int16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 004B34F0  ---------  /* auto */
/*---*/ // CShot  ----------------------------------------  /* auto */
/* 60*/ virtual int32_t v_f60();  // = 004AB810  ---------  /* auto */
/* 64*/ virtual int32_t v_f64();  // = 00484940  ---------  /* auto */
/* 68*/ virtual int32_t v_f68();  // = 004B7E30  ---------  /* auto */
/* 6C*/ virtual void v_f6C();  // = 0040D440  ------------  /* auto */
/* 70*/ virtual void *v_duplicate_27_1();  // = 0040D440    /* auto */
/* 74*/ virtual void *v_duplicate_7_1();  // = 00402AD0  -  /* auto */
/* 78*/ virtual void *v_duplicate_27_2();  // = 0040D440    /* auto */
/* 7C*/ virtual void *v_duplicate_27_3();  // = 0040D440    /* auto */
/* 80*/ virtual void *v_duplicate_7_2();  // = 00402AD0  -  /* auto */
/* 84*/ virtual void *v_duplicate_7_3();  // = 00402AD0  -  /* auto */
/* 88*/ virtual BOOL v_f88();  // = 004B7E40  ------------  /* auto */
/* 8C*/ virtual __int16 v_f8C(__int16);  // = 004B5F30  --  /* auto */
/* 90*/ virtual int32_t v_f90();  // = 004B5F40  ---------  /* auto */
// -------------------------------------------------------  /* auto */
/*004ABAF0*/ void dump();  // ----------------------------  /* auto */
/*004B7D60*/ CShot *constructor();  // -------------------  /* auto */
/*004B7E80*/ int32_t destructor();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CShot) == 0x16F);  // ---------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_SHOT_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
