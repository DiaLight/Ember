// -----------------  id: vtbl_0066D5BC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_MOVING_THING_H  // -----------------------------  /* auto */
#define C_MOVING_THING_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/entities/CPhysicalThing.h>  // -------------  /* auto */
#include <dk2/utils/Vec3i.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CMovingThing;  // -------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CMovingThing : CPhysicalThing {  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
/* F6*/ Vec3i lastPosition;  // --------------------------  /* auto */
/*102*/ uint16_t lastAngle;  // --------------------------  /* auto */
/*104*/ Vec3i forceVelocity;  // -------------------------  /* auto */
/*110*/ Vec3i transitiveVelocity;  // --------------------  /* auto */
/*11C*/ uint16_t speed;  // ------------------------------  /* auto */
/*11E*/ uint16_t airFriction;  // ------------------------  /* auto */
/*120*/ char *moving;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D5BC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B5F50  /* auto */
/*  4*/ // virtual BOOL v_f4_saveToTbDiscFile(TbDiscFile **);  // = 004B1E70  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 004B1EC0    /* auto */
/*  C*/ // virtual int32_t v_fC_clear();  // = 004B1F10  -  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 004B1F10  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00634D60  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00628BC0  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00402AD0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 00634D60  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual char *v_f2C();  // = 004B5D40  --------  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 00634D60  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00628BC0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 00402AD0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 00402AD0  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 004B2760  ------  /* auto */
/* 48*/ // virtual void v_f48_dump();  // = 004B27E0  ----  /* auto */
/* 4C*/ // virtual uint16_t *v_f4C(uint16_t *);  // = 004B5C20  /* auto */
/* 50*/ // virtual uint16_t *v_f50(uint16_t *);  // = 004B5C20  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual char *v_f54();  // = 004B5D50  --------  /* auto */
/* 58*/ // virtual uint16_t *v_f58(uint16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 004B34F0  ---------  /* auto */
/*---*/ // CMovingThing  ---------------------------------  /* auto */
/* 60*/ virtual int32_t v_f60();  // = 00628BC0  ---------  /* auto */
/* 64*/ virtual int32_t v_f64();  // = 004B2740  ---------  /* auto */
/* 68*/ virtual int32_t v_f68();  // = 00402AD0  ---------  /* auto */
/* 6C*/ virtual int32_t v_f6C();  // = 0040D440  ---------  /* auto */
/* 70*/ virtual char v_f70();  // = 0040D440  ------------  /* auto */
/* 74*/ virtual int32_t v_f74();  // = 00402AD0  ---------  /* auto */
/* 78*/ virtual int32_t v_f78();  // = 0040D440  ---------  /* auto */
/* 7C*/ virtual char v_f7C();  // = 0040D440  ------------  /* auto */
/* 80*/ virtual int32_t v_f80();  // = 00402AD0  ---------  /* auto */
/* 84*/ virtual int32_t v_f84();  // = 00402AD0  ---------  /* auto */
/* 88*/ virtual BOOL v_f88();  // = 00628BC0  ------------  /* auto */
/* 8C*/ virtual int32_t v_f8C(__int16);  // = 004B5F30  --  /* auto */
/* 90*/ virtual int32_t v_f90();  // = 004B5F40  ---------  /* auto */
// -------------------------------------------------------  /* auto */
/*004B1DF0*/ int32_t initWithType(int32_t);  // ----------  /* auto */
/*004B1E60*/ uint16_t fun_4B4AB0();  // ------------------  /* auto */
/*004B1E70*/ BOOL saveToTbDiscFile(TbDiscFile **);  // ---  /* auto */
/*004B1EC0*/ int32_t fun_4B1EC0(int32_t);  // ------------  /* auto */
/*004B1F60*/ int32_t fun_4B1F60(uint32_t *);  // ---------  /* auto */
/*004B2030*/ int32_t fun_4B2030();  // -------------------  /* auto */
/*004B2740*/ int32_t fun_4B2740();  // -------------------  /* auto */
/*004B2760*/ int32_t fun_4B2760();  // -------------------  /* auto */
/*004B27E0*/ void dump();  // ----------------------------  /* auto */
/*004B5CE0*/ int32_t destructor();  // -------------------  /* auto */
/*004B5D40*/ Vec3i *fun_4B5D40();  // --------------------  /* auto */
/*004B5D50*/ char *fun_4B5D50();  // ---------------------  /* auto */
/*004B5F30*/ __int16 fun_4B5F30(__int16);  // ------------  /* auto */
/*004B5F40*/ int32_t fun_4B5F40();  // -------------------  /* auto */
/*004B5F50*/ void *deleting_destructor(char);  // --------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CMovingThing) == 0x124);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_MOVING_THING_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
