// -----------------  id: vtbl_0066D904  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_DEAD_BODY_H  // --------------------------------  /* auto */
#define C_DEAD_BODY_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/entities/CPhysicalThing.h>  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CDeadBody;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CDeadBody : CPhysicalThing {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* F6*/ int32_t fF6;  // ---------------------------------  /* auto */
/* FA*/ int32_t fFA;  // ---------------------------------  /* auto */
/* FE*/ int32_t fFE;  // ---------------------------------  /* auto */
/*102*/ __int16 f102;  // --------------------------------  /* auto */
/*104*/ uint8_t gap_104[32];  // -------------------------  /* auto */
/*124*/ uint16_t roomNodeX;  // --------------------------  /* auto */
/*126*/ uint16_t roomNodeY;  // --------------------------  /* auto */
/*128*/ uint8_t typeId;  // ------------------------------  /* auto */
/*129*/ int32_t f129;  // --------------------------------  /* auto */
/*12D*/ uint8_t level;  // -------------------------------  /* auto */
/*12E*/ int32_t f12E;  // --------------------------------  /* auto */
/*132*/ uint16_t roomId;  // -----------------------------  /* auto */
/*134*/ int32_t relocatingMode;  // ----------------------  /* auto */
/*138*/ int32_t beingDragged;  // ------------------------  /* auto */
/*13C*/ int32_t infernoEffects;  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D904*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B8120  /* auto */
/*  4*/ // virtual BOOL v_f4_saveToTbDiscFile(TbDiscFile **);  // = 004B1180  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 004B1240    /* auto */
/*  C*/ // virtual int32_t v_fC_clear();  // = 004A7CC0  -  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 004B1290  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 004B12D0  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00628BC0  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00402AD0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 004B1700  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual char *v_f2C();  // = 004B5D40  --------  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 004B16E0  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00628BC0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 00402AD0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 00402AD0  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 0049D300  ------  /* auto */
/* 48*/ // virtual void v_f48_dump();  // = 004B18B0  ----  /* auto */
/* 4C*/ // virtual uint16_t *v_f4C(uint16_t *);  // = 004B1740  /* auto */
/* 50*/ // virtual uint16_t *v_f50(uint16_t *);  // = 004B5C20  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual char *v_f54();  // = 004B5D50  --------  /* auto */
/* 58*/ // virtual uint16_t *v_f58(uint16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 004B34F0  ---------  /* auto */
/*---*/ // CDeadBody  ------------------------------------  /* auto */
/* 60*/ virtual void *v_duplicate_6_3();  // = 00628BC0  -  /* auto */
/* 64*/ virtual int32_t v_f64();  // = 004B2740  ---------  /* auto */
/* 68*/ virtual void *v_duplicate_7_3();  // = 00402AD0  -  /* auto */
/* 6C*/ virtual void v_f6C();  // = 004B80F0  ------------  /* auto */
/* 70*/ virtual void v_f70();  // = 004B8100  ------------  /* auto */
/* 74*/ virtual int32_t v_f74();  // = 004B8110  ---------  /* auto */
/* 78*/ virtual void __cdecl v_ret_void_0args();  // = 0040D440  /* auto */
/* 7C*/ virtual void *v_duplicate_30_1();  // = 0040D440    /* auto */
/* 80*/ virtual void *v_duplicate_7_4();  // = 00402AD0  -  /* auto */
/* 84*/ virtual void *v_duplicate_7_5();  // = 00402AD0  -  /* auto */
/* 88*/ virtual void *v_duplicate_6_4();  // = 00628BC0  -  /* auto */
/* 8C*/ virtual __int16 v_f8C(__int16);  // = 004B5F30  --  /* auto */
/* 90*/ virtual int32_t v_f90();  // = 004B5F40  ---------  /* auto */
// -------------------------------------------------------  /* auto */
/*004B0F20*/ char init(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004B1180*/ BOOL fun_4B1180(void **);  // ---------------  /* auto */
/*004B1240*/ int32_t fun_4B1240(int32_t *);  // ----------  /* auto */
/*004B1290*/ int32_t fun_4B1290();  // -------------------  /* auto */
/*004B12D0*/ int32_t fun_4B12D0();  // -------------------  /* auto */
/*004B16E0*/ uint16_t fun_4B16E0();  // ------------------  /* auto */
/*004B1700*/ char fun_4B1700(int32_t);  // ---------------  /* auto */
/*004B1740*/ uint16_t *fun_4B1740(uint16_t *);  // -------  /* auto */
/*004B18B0*/ void dump();  // ----------------------------  /* auto */
/*004B8050*/ CDeadBody *constructor();  // ---------------  /* auto */
/*004B80F0*/ void fun_4B80F0();  // ----------------------  /* auto */
/*004B8100*/ void fun_4B8100();  // ----------------------  /* auto */
/*004B8110*/ int32_t fun_4B8110();  // -------------------  /* auto */
/*004B8120*/ void *deleting_destructor(char);  // --------  /* auto */
/*004B8140*/ int32_t destructor();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CDeadBody) == 0x140);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_DEAD_BODY_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
