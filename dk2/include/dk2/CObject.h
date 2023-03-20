// -----------------  id: vtbl_0066D654  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_OBJECT_H  // -----------------------------------  /* auto */
#define C_OBJECT_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CMovingThing.h>  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CObject;  // ------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CObject : CMovingThing {  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*124*/ int16_t roomNodeX;  // ---------------------------  /* auto */
/*126*/ int16_t roomNodeY;  // ---------------------------  /* auto */
/*128*/ int16_t autoPlacedObjectNodeX;  // ---------------  /* auto */
/*12A*/ int16_t autoPlacedObjectNodeY;  // ---------------  /* auto */
/*12C*/ int8_t typeId;  // -------------------------------  /* auto */
/*12D*/ int8_t f12d_gap[6];  // --------------------------  /* auto */
/*133*/ int32_t autoPlaced;  // --------------------------  /* auto */
/*137*/ int8_t riggerRootRepeatCount;  // ----------------  /* auto */
/*138*/ int16_t roomId;  // ------------------------------  /* auto */
/*13A*/ int32_t stateId;  // -----------------------------  /* auto */
/*13E*/ int32_t stateAge;  // ----------------------------  /* auto */
/*142*/ int16_t whoGetsThisFromADrop;  // ----------------  /* auto */
/*144*/ __int16 triggerRoot;  // -------------------------  /* auto */
/*146*/ int32_t flags;  // -------------------------------  /* auto */
/*14A*/ char objunion[18];  // ---------------------------  /* auto */
/*15C*/ int32_t utilityNewState;  // ---------------------  /* auto */
/*160*/ int32_t endX;  // --------------------------------  /* auto */
/*164*/ int32_t endY;  // --------------------------------  /* auto */
/*168*/ int32_t dX;  // ----------------------------------  /* auto */
/*16C*/ int32_t dY;  // ----------------------------------  /* auto */
/*170*/ int16_t gameTicksToDestination;  // --------------  /* auto */
/*172*/ __int16 flags_172;  // ---------------------------  /* auto */
/*174*/ int32_t f174;  // --------------------------------  /* auto */
/*178*/ int32_t f178;  // --------------------------------  /* auto */
/*17C*/ int32_t f17C;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D654*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(char);  // = 004B7290  /* auto */
/*  4*/ // virtual BOOL v_f4(const void **);  // = 0049B9F0  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 0049BAE0    /* auto */
/*  C*/ // virtual int32_t v_fC();  // = 0049BBE0  -------  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 0049BC00  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 0049BD20  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 0049D130  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00402AD0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 0049C850  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual const char *v_f2C();  // = 004B5D40  --  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 0049BEC0  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00628BC0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 00402AD0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 00402AD0  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 0049D300  ------  /* auto */
/* 48*/ // virtual void v_f48();  // = 0049D310  ---------  /* auto */
/* 4C*/ // virtual int16_t *v_f4C(int16_t *);  // = 0049C8C0  /* auto */
/* 50*/ // virtual int16_t *v_f50(int16_t *);  // = 004B5C20  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual const char *v_f54();  // = 004B5D50  --  /* auto */
/* 58*/ // virtual int16_t *v_f58(int16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 004B34F0  ---------  /* auto */
/*---*/ // super CMovingThing  ---------------------------  /* auto */
/* 60*/ // virtual int32_t v_f60();  // = 00628BC0  ------  /* auto */
/* 64*/ // virtual int32_t v_f64();  // = 0049CD70  ------  /* auto */
/* 68*/ // virtual int32_t v_f68();  // = 00402AD0  ------  /* auto */
/* 6C*/ // virtual int32_t v_f6C();  // = 0049C250  ------  /* auto */
/* 70*/ // virtual char v_f70();  // = 004B7260  ---------  /* auto */
/* 74*/ // virtual int32_t v_f74();  // = 004B7250  ------  /* auto */
/* 78*/ // virtual int32_t v_f78();  // = 0049C290  ------  /* auto */
/* 7C*/ // virtual char v_f7C();  // = 004B7280  ---------  /* auto */
/* 80*/ // virtual int32_t v_f80();  // = 004B7270  ------  /* auto */
/* 84*/ // virtual int32_t v_f84();  // = 0049CD00  ------  /* auto */
/* 88*/ // virtual BOOL v_f88();  // = 004B7230  ---------  /* auto */
/* 8C*/ // virtual __int16 v_f8C(__int16);  // = 004B5F30   /* auto */
/* 90*/ // virtual int32_t v_f90();  // = 004B5F40  ------  /* auto */
/*---*/ // CObject  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0049C8C0*/ const wchar_t *fun_49C8C0(const wchar_t *);    /* auto */
/*0049D310*/ void fun_49D310();  // ----------------------  /* auto */
/*004B7190*/ CObject *constructor();  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CObject) == 0x180);  // -------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_OBJECT_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
