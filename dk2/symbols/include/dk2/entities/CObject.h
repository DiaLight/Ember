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
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/entities/CMovingThing.h>  // ---------------  /* auto */
#include <dk2/entities/objects/CObjectUnionData.h>  // ---  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CObject;  // ------------------------------------  /* auto */
  struct MyObjectDataObj;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CObject : CMovingThing {  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*124*/ uint16_t roomNodeX;  // --------------------------  /* auto */
/*126*/ uint16_t roomNodeY;  // --------------------------  /* auto */
/*128*/ uint16_t autoPlacedObjectNodeX;  // --------------  /* auto */
/*12A*/ uint16_t autoPlacedObjectNodeY;  // --------------  /* auto */
/*12C*/ uint8_t typeId;  // ------------------------------  /* auto */
/*12D*/ MyObjectDataObj *typeObj;  // --------------------  /* auto */
/*131*/ __int16 f131;  // --------------------------------  /* auto */
/*133*/ uint32_t autoPlaced;  // -------------------------  /* auto */
/*137*/ uint8_t riggerRootRepeatCount;  // ---------------  /* auto */
/*138*/ uint16_t roomId;  // -----------------------------  /* auto */
/*13A*/ uint32_t stateId;  // ----------------------------  /* auto */
/*13E*/ uint32_t stateAge;  // ---------------------------  /* auto */
/*142*/ uint16_t whoGetsThisFromADrop;  // ---------------  /* auto */
/*144*/ __int16 triggerRoot;  // -------------------------  /* auto */
/*146*/ uint32_t flags;  // ------------------------------  /* auto */
/*14A*/ CObjectUnionData unionData;  // ------------------  /* auto */
/*15C*/ uint32_t utilityNewState;  // --------------------  /* auto */
/*160*/ uint32_t endX;  // -------------------------------  /* auto */
/*164*/ uint32_t endY;  // -------------------------------  /* auto */
/*168*/ uint32_t dX;  // ---------------------------------  /* auto */
/*16C*/ uint32_t dY;  // ---------------------------------  /* auto */
/*170*/ uint16_t gameTicksToDestination;  // -------------  /* auto */
/*172*/ __int16 flags_172;  // ---------------------------  /* auto */
/*174*/ int32_t f174;  // --------------------------------  /* auto */
/*178*/ int32_t f178;  // --------------------------------  /* auto */
/*17C*/ int32_t f17C;  // --------------------------------  /* auto */
/*180*/ int32_t f180;  // --------------------------------  /* auto */
/*184*/ int32_t f184;  // --------------------------------  /* auto */
/*188*/ char f188;  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D654*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B7290  /* auto */
/*  4*/ // virtual BOOL v_f4_saveToTbDiscFile(TbDiscFile **);  // = 0049B9F0  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 0049BAE0    /* auto */
/*  C*/ // virtual int32_t v_fC_clear();  // = 0049BBE0  -  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 0049BC00  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 0049BD20  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 0049D130  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00402AD0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 0049C850  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual char *v_f2C();  // = 004B5D40  --------  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 0049BEC0  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00628BC0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 00402AD0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 00402AD0  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 0049D300  ------  /* auto */
/* 48*/ // virtual void v_f48_dump();  // = 0049D310  ----  /* auto */
/* 4C*/ // virtual uint16_t *v_f4C(uint16_t *);  // = 0049C8C0  /* auto */
/* 50*/ // virtual uint16_t *v_f50(uint16_t *);  // = 004B5C20  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual char *v_f54();  // = 004B5D50  --------  /* auto */
/* 58*/ // virtual uint16_t *v_f58(uint16_t *);  // = 004B5C50  /* auto */
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
/* 8C*/ // virtual int32_t v_f8C(__int16);  // = 004B5F30   /* auto */
/* 90*/ // virtual int32_t v_f90();  // = 004B5F40  ------  /* auto */
/*---*/ // CObject  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0049B1C0*/ CObjectUnionData *init(int32_t, int32_t);      /* auto */
/*0049B5E0*/ uint16_t fun_49B5E0();  // ------------------  /* auto */
/*0049B9F0*/ BOOL fun_49B9F0(void **);  // ---------------  /* auto */
/*0049BAE0*/ int32_t fun_49BAE0(int32_t *);  // ----------  /* auto */
/*0049BBE0*/ int32_t fun_49BBE0();  // -------------------  /* auto */
/*0049BC00*/ int32_t fun_49BC00();  // -------------------  /* auto */
/*0049BD20*/ int32_t fun_49BD20();  // -------------------  /* auto */
/*0049BEC0*/ uint16_t fun_49BEC0();  // ------------------  /* auto */
/*0049C250*/ int32_t fun_49C250();  // -------------------  /* auto */
/*0049C290*/ int32_t fun_49C290();  // -------------------  /* auto */
/*0049C760*/ int32_t fun_49C760(int32_t);  // ------------  /* auto */
/*0049C800*/ char *fun_49C800(char);  // -----------------  /* auto */
/*0049C850*/ void fun_49C850(int32_t);  // ---------------  /* auto */
/*0049C8C0*/ wchar_t *fun_49C8C0(wchar_t *);  // ---------  /* auto */
/*0049CC20*/ __int16 fun_49CC20();  // -------------------  /* auto */
/*0049CD00*/ int32_t fun_49CD00();  // -------------------  /* auto */
/*0049CD70*/ int32_t fun_49CD70();  // -------------------  /* auto */
/*0049CE30*/ int32_t fun_49CE30(int32_t);  // ------------  /* auto */
/*0049CE50*/ int32_t fun_49CE50();  // -------------------  /* auto */
/*0049D130*/ uint32_t fun_49D130();  // ------------------  /* auto */
/*0049D300*/ int32_t fun_49D300();  // -------------------  /* auto */
/*0049D310*/ void dump();  // ----------------------------  /* auto */
/*0049EF60*/ int32_t fun_49EF60(int32_t);  // ------------  /* auto */
/*0049EF80*/ int32_t getStateId();  // -------------------  /* auto */
/*004B7190*/ CObject *constructor();  // -----------------  /* auto */
/*004B7230*/ BOOL fun_4B7230();  // ----------------------  /* auto */
/*004B7250*/ int32_t fun_4B7250();  // -------------------  /* auto */
/*004B7260*/ char fun_4B7260();  // ----------------------  /* auto */
/*004B7270*/ int32_t fun_4B7270();  // -------------------  /* auto */
/*004B7280*/ char fun_4B7280();  // ----------------------  /* auto */
/*004B7290*/ void *deleting_destructor(char);  // --------  /* auto */
/*004B72B0*/ int32_t destructor();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CObject) == 0x189);  // -------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_OBJECT_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
