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
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/entities/CMovingThing.h>  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CObject;  // ------------------------------------  /* auto */
  struct CShot;  // --------------------------------------  /* auto */
  struct CShotFun1;  // ----------------------------------  /* auto */
  struct CTag;  // ---------------------------------------  /* auto */
  struct CThing;  // -------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CShot : CMovingThing {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*124*/ uint8_t typeId;  // ------------------------------  /* auto */
/*125*/ int32_t f125;  // --------------------------------  /* auto */
/*129*/ __int16 f129;  // --------------------------------  /* auto */
/*12B*/ __int16 f12B;  // --------------------------------  /* auto */
/*12D*/ uint32_t age;  // --------------------------------  /* auto */
/*131*/ int32_t targetPositionX;  // ---------------------  /* auto */
/*135*/ int32_t targetPositionY;  // ---------------------  /* auto */
/*139*/ int32_t targetPositionZ;  // ---------------------  /* auto */
/*13D*/ uint32_t data1;  // ------------------------------  /* auto */
/*141*/ uint32_t data2;  // ------------------------------  /* auto */
/*145*/ uint16_t castByThingId;  // ----------------------  /* auto */
/*147*/ uint16_t targetThing;  // ------------------------  /* auto */
/*149*/ int32_t processedAtStart;  // --------------------  /* auto */
/*14D*/ int32_t forceCollision;  // ----------------------  /* auto */
/*151*/ int32_t castByPosessed;  // ----------------------  /* auto */
/*155*/ int32_t maxRange;  // ----------------------------  /* auto */
/*159*/ int32_t startPositionX;  // ----------------------  /* auto */
/*15D*/ int32_t startPositionY;  // ----------------------  /* auto */
/*161*/ int32_t startPositionZ;  // ----------------------  /* auto */
/*165*/ int32_t sniperMode;  // --------------------------  /* auto */
/*169*/ int32_t sightOfEvilProcessed;  // ----------------  /* auto */
/*16D*/ uint16_t castBy;  // -----------------------------  /* auto */
/*16F*/ int32_t end;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D86C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B7E60  /* auto */
/*  4*/ // virtual BOOL v_f4_saveToTbDiscFile(TbDiscFile **);  // = 004AB090  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 004AB120    /* auto */
/*  C*/ // virtual int32_t v_fC_clear();  // = 0049BBE0  -  /* auto */
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
/* 48*/ // virtual void v_f48_dump();  // = 004ABAF0  ----  /* auto */
/* 4C*/ // virtual uint16_t *v_f4C(uint16_t *);  // = 004B5C20  /* auto */
/* 50*/ // virtual uint16_t *v_f50(uint16_t *);  // = 004B5C20  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual char *v_f54();  // = 004B5D50  --------  /* auto */
/* 58*/ // virtual uint16_t *v_f58(uint16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 004B34F0  ---------  /* auto */
/*---*/ // super CMovingThing  ---------------------------  /* auto */
/* 60*/ // virtual int32_t v_f60();  // = 004AB810  ------  /* auto */
/* 64*/ // virtual int32_t v_f64();  // = 00484940  ------  /* auto */
/* 68*/ // virtual int32_t v_f68();  // = 004B7E30  ------  /* auto */
/* 6C*/ // virtual int32_t v_f6C();  // = 0040D440  ------  /* auto */
/* 70*/ // virtual char v_f70();  // = 0040D440  ---------  /* auto */
/* 74*/ // virtual int32_t v_f74();  // = 00402AD0  ------  /* auto */
/* 78*/ // virtual int32_t v_f78();  // = 0040D440  ------  /* auto */
/* 7C*/ // virtual char v_f7C();  // = 0040D440  ---------  /* auto */
/* 80*/ // virtual int32_t v_f80();  // = 00402AD0  ------  /* auto */
/* 84*/ // virtual int32_t v_f84();  // = 00402AD0  ------  /* auto */
/* 88*/ // virtual BOOL v_f88();  // = 004B7E40  ---------  /* auto */
/* 8C*/ // virtual int32_t v_f8C(__int16);  // = 004B5F30   /* auto */
/* 90*/ // virtual int32_t v_f90();  // = 004B5F40  ------  /* auto */
/*---*/ // CShot  ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004AAC90*/ void *fun_4AAC90(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004AAF60*/ int32_t fun_4AAF60();  // -------------------  /* auto */
/*004AB090*/ BOOL fun_4AB090(void **);  // ---------------  /* auto */
/*004AB120*/ int32_t fun_4AB120(int32_t *);  // ----------  /* auto */
/*004AB180*/ int32_t fun_4AB180();  // -------------------  /* auto */
/*004AB7F0*/ uint16_t fun_4AB7F0();  // ------------------  /* auto */
/*004AB810*/ int32_t fun_4AB810();  // -------------------  /* auto */
/*004AB830*/ __int16 fun_4AB830(uint32_t *);  // ---------  /* auto */
/*004ABAE0*/ int32_t fun_4ABAE0();  // -------------------  /* auto */
/*004ABAF0*/ void dump();  // ----------------------------  /* auto */
/*004ABD60*/ CShotFun1 *fun_4ABD60();  // ----------------  /* auto */
/*004AC2D0*/ int32_t fun_4AC2D0(CTag **);  // ------------  /* auto */
/*004AC300*/ int32_t fun_4AC300(CTag **);  // ------------  /* auto */
/*004AC330*/ int32_t fun_4AC330(CTag **);  // ------------  /* auto */
/*004AC390*/ int32_t fun_4AC390(CTag **);  // ------------  /* auto */
/*004AC3C0*/ uint16_t *fun_4AC3C0();  // -----------------  /* auto */
/*004AC420*/ __int16 handleHit(CThing *, int32_t);  // ---  /* auto */
/*004AC5A0*/ int32_t fun_4AC5A0();  // -------------------  /* auto */
/*004AC6D0*/ uint16_t *fun_4AC6D0();  // -----------------  /* auto */
/*004AC940*/ int32_t process_creature_damage();  // ------  /* auto */
/*004ACAF0*/ int32_t process_creature_damage_2();  // ----  /* auto */
/*004ACCA0*/ int32_t fun_4ACCA0();  // -------------------  /* auto */
/*004AD730*/ int32_t fun_4AD730(int32_t);  // ------------  /* auto */
/*004B32A0*/ __int16 fun_4B32A0(uint16_t, int32_t, int32_t);  /* auto */
/*004B58E0*/ int32_t fun_4B58E0(CObject *, int32_t);  // -  /* auto */
/*004B7D60*/ CShot *constructor();  // -------------------  /* auto */
/*004B7E10*/ int32_t fun_4B7E10();  // -------------------  /* auto */
/*004B7E30*/ int32_t fun_4B7E30();  // -------------------  /* auto */
/*004B7E40*/ BOOL fun_4B7E40();  // ----------------------  /* auto */
/*004B7E60*/ void *deleting_destructor(char);  // --------  /* auto */
/*004B7E80*/ int32_t destructor();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CShot) == 0x173);  // ---------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_SHOT_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
