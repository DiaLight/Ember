// -----------------  id: vtbl_0066D1D4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ENGINE_INTERFACE_H  // -------------------------  /* auto */
#define C_ENGINE_INTERFACE_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CBridge;  // ------------------------------------  /* auto */
  struct CCamera;  // ------------------------------------  /* auto */
  struct CEngineInterface;  // ---------------------------  /* auto */
  struct CGameComponent;  // -----------------------------  /* auto */
  struct CPCEngineInterface;  // -------------------------  /* auto */
  struct GameAction;  // ---------------------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CEngineInterface {  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ CGameComponent *f0_pGameCom;  // -----------------  /* auto */
/*  8*/ CBridge *f4_pCBridge;  // ------------------------  /* auto */
/*  C*/ int16_t field_8;  // -----------------------------  /* auto */
/*  E*/ int16_t field_A;  // -----------------------------  /* auto */
/* 10*/ int32_t field_C;  // -----------------------------  /* auto */
/* 14*/ int32_t field_10;  // ----------------------------  /* auto */
/* 18*/ int32_t field_14;  // ----------------------------  /* auto */
/* 1C*/ int32_t field_18;  // ----------------------------  /* auto */
/* 20*/ int32_t field_1C;  // ----------------------------  /* auto */
/* 24*/ int32_t field_20;  // ----------------------------  /* auto */
/* 28*/ int32_t field_24;  // ----------------------------  /* auto */
/* 2C*/ int32_t field_28;  // ----------------------------  /* auto */
/* 30*/ int32_t field_2C;  // ----------------------------  /* auto */
/* 34*/ __int16 field_30;  // ----------------------------  /* auto */
/* 36*/ int32_t field_32;  // ----------------------------  /* auto */
/* 3A*/ int32_t field_36;  // ----------------------------  /* auto */
/* 3E*/ int32_t field_3A;  // ----------------------------  /* auto */
/* 42*/ int32_t field_3E;  // ----------------------------  /* auto */
/* 46*/ int32_t field_42;  // ----------------------------  /* auto */
/* 4A*/ int32_t field_46;  // ----------------------------  /* auto */
/* 4E*/ int32_t field_4A;  // ----------------------------  /* auto */
/* 52*/ int32_t field_4E;  // ----------------------------  /* auto */
/* 56*/ int32_t field_52;  // ----------------------------  /* auto */
/* 5A*/ int32_t field_56;  // ----------------------------  /* auto */
/* 5E*/ int32_t field_5A;  // ----------------------------  /* auto */
/* 62*/ int32_t field_5E;  // ----------------------------  /* auto */
/* 66*/ int32_t field_62;  // ----------------------------  /* auto */
/* 6A*/ int32_t field_66;  // ----------------------------  /* auto */
/* 6E*/ int32_t field_6A;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D1D4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CEngineInterface  -----------------------------  /* auto */
/*  0*/ virtual const void *v_deleting_destructor(char);  // = 0044DEA0  /* auto */
/*  4*/ virtual int32_t v_f4(int32_t);  // = 00634D60  ---  /* auto */
/*  8*/ virtual void v_f8();  // = 00634D60  -------------  /* auto */
/*  C*/ virtual void v_fC();  // = 0040D440  -------------  /* auto */
/* 10*/ virtual void v_f10();  // = 0040D440  ------------  /* auto */
/* 14*/ virtual int32_t v_f14();  // = 00628BC0  ---------  /* auto */
/* 18*/ virtual void v_f18(int32_t);  // = 005671E0  -----  /* auto */
/* 1C*/ virtual int32_t v_f1C();  // = 00628BC0  ---------  /* auto */
/* 20*/ virtual BOOL v_isActionHasHandler(int32_t);  // = 00634D60  /* auto */
/* 24*/ virtual int32_t v_f24(GameAction *);  // = 00634D60  /* auto */
/* 28*/ virtual int32_t v_f28(__int16 *);  // = 00634D60    /* auto */
/* 2C*/ virtual int32_t v_f2C(int32_t *);  // = 00634D60    /* auto */
/* 30*/ virtual void v_f30(int32_t);  // = 005671E0  -----  /* auto */
/* 34*/ virtual void v_f34(int32_t);  // = 005671E0  -----  /* auto */
/* 38*/ virtual int32_t v_f38();  // = 00628BC0  ---------  /* auto */
/* 3C*/ virtual int32_t v_f3C();  // = 00628BC0  ---------  /* auto */
/* 40*/ virtual int32_t v_f40();  // = 00628BC0  ---------  /* auto */
/* 44*/ virtual int32_t v_f44();  // = 00628BC0  ---------  /* auto */
/* 48*/ virtual int32_t v_f48(float, float, int32_t, int32_t);  // = 00634D60  /* auto */
/* 4C*/ virtual int32_t v_f4C(float, float, int32_t);  // = 00634D60  /* auto */
/* 50*/ virtual int32_t v_f50(int32_t, int32_t, int32_t);  // = 00517400  /* auto */
/* 54*/ virtual int32_t v_f54(const char *, char, int32_t, int32_t *, int32_t, char);  // = 00443070  /* auto */
/* 58*/ virtual int32_t v_createMyScaledSurface(int32_t, int32_t, int32_t, int32_t, int32_t *);  // = 00443090  /* auto */
/* 5C*/ virtual void v_f5C(int32_t, int32_t, int32_t, int32_t);  // = 005671D0  /* auto */
/* 60*/ virtual void v_f60(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430B0  /* auto */
/* 64*/ virtual void v_f64(int32_t, int32_t, int32_t, int32_t);  // = 005671D0  /* auto */
/* 68*/ virtual int32_t v_f68(int32_t, MySurface *, int32_t);  // = 0060F1D0  /* auto */
/* 6C*/ virtual int32_t v_f6C(int32_t *);  // = 005671E0    /* auto */
/* 70*/ virtual int32_t v_f70(int32_t);  // = 005671E0  --  /* auto */
/* 74*/ virtual int32_t v_f74();  // = 00402AD0  ---------  /* auto */
/* 78*/ virtual void v_f78(int32_t);  // = 005671E0  -----  /* auto */
/* 7C*/ virtual int32_t v_f7C(int32_t);  // = 005671E0  --  /* auto */
/* 80*/ virtual int32_t v_f80(int32_t *, int32_t);  // = 005173B0  /* auto */
/* 84*/ virtual int32_t v_f84(const char *);  // = 005671E0  /* auto */
/* 88*/ virtual int32_t v_f88();  // = 00402AD0  ---------  /* auto */
/* 8C*/ virtual IDirectDraw4 *v_f8C();  // = 0040D440  ---  /* auto */
/* 90*/ virtual int32_t v_f90(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430D0  /* auto */
/* 94*/ virtual int32_t v_f94(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430C0  /* auto */
/* 98*/ virtual int32_t v_f98(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430D0  /* auto */
/* 9C*/ virtual void v_f9C(int32_t);  // = 005671E0  -----  /* auto */
/* A0*/ virtual int32_t v_fA0(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430C0  /* auto */
/* A4*/ virtual int32_t v_fA4(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0043A8A0  /* auto */
/* A8*/ virtual void v_fA8(int32_t);  // = 005671E0  -----  /* auto */
/* AC*/ virtual int32_t v_fAC(int32_t);  // = 00628E30  --  /* auto */
/* B0*/ virtual int32_t v_fB0();  // = 00402AD0  ---------  /* auto */
/* B4*/ virtual void v_fB4(int32_t, int32_t);  // = 00580470  /* auto */
/* B8*/ virtual void v_fB8(int32_t, int32_t, int32_t);  // = 0060F1D0  /* auto */
/* BC*/ virtual __int16 v_fBC();  // = 004430E0  ---------  /* auto */
/* C0*/ virtual __int16 v_fC0(__int16);  // = 004430F0  --  /* auto */
/* C4*/ virtual __int16 v_fC4();  // = 00443100  ---------  /* auto */
/* C8*/ virtual __int16 v_fC8(__int16);  // = 00443110  --  /* auto */
/* CC*/ virtual int32_t v_fCC();  // = 00402AD0  ---------  /* auto */
/* D0*/ virtual CCamera *v_getCamera();  // = 00443120  --  /* auto */
/* D4*/ virtual int32_t v_fD4(int32_t, int32_t);  // = 00443150  /* auto */
/* D8*/ virtual int32_t v_fD8(int32_t *, int32_t *, int32_t *);  // = 00517400  /* auto */
/* DC*/ virtual int32_t v_fDC(int32_t, int32_t);  // = 00443150  /* auto */
/* E0*/ virtual int32_t v_fE0(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430C0  /* auto */
/* E4*/ virtual int32_t v_fE4(int32_t, int32_t, int32_t, int32_t);  // = 00628B70  /* auto */
/* E8*/ virtual int32_t v_fE8(int32_t, int32_t, int32_t, int32_t);  // = 00628B70  /* auto */
/* EC*/ virtual int32_t v_fEC(int32_t, int32_t, int32_t *);  // = 00517400  /* auto */
/* F0*/ virtual int32_t v_fF0(int32_t, int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t, int32_t, int32_t *, char);  // = 0043A880  /* auto */
/* F4*/ virtual int32_t v_fF4(int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t, int32_t, int32_t *, char);  // = 0043A890  /* auto */
/* F8*/ virtual int32_t v_fF8(int32_t, int32_t, int32_t, int32_t *, int32_t, int32_t, int8_t *, int32_t);  // = 0043A8A0  /* auto */
/* FC*/ virtual int32_t v_fFC(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t);  // = 0043A8A0  /* auto */
/*100*/ virtual int32_t v_f100(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t);  // = 0043A8A0  /* auto */
/*104*/ virtual int32_t v_f104(int32_t, int32_t, int32_t, int8_t *);  // = 00628B70  /* auto */
/*108*/ virtual int32_t v_f108(int32_t, int32_t, int32_t *, int32_t);  // = 00628B70  /* auto */
/*10C*/ virtual int32_t v_f10C(int32_t, int32_t, int32_t *, int32_t);  // = 00628B70  /* auto */
// -------------------------------------------------------  /* auto */
/*0044DE30*/ CEngineInterface *constructor();  // --------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CEngineInterface) == 0x72);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ENGINE_INTERFACE_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
