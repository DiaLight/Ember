// -----------------  id: vtbl_00670574  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef CPC_ENGINE_INTERFACE_H  // -----------------------  /* auto */
#define CPC_ENGINE_INTERFACE_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CEngineInterface.h>  // --------------------  /* auto */
#include <dk2/CRenderInfo.h>  // -------------------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CBridge;  // ------------------------------------  /* auto */
  struct CPCEngineInterface;  // -------------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CPCEngineInterface : CEngineInterface {  // -------  /* auto */
// -------------------------------------------------------  /* auto */
/* 72*/ int32_t bump_water;  // --------------------------  /* auto */
/* 76*/ int32_t bump_water_bump_map;  // -----------------  /* auto */
/* 7A*/ int32_t bump_water_env_map;  // ------------------  /* auto */
/* 7E*/ int32_t bump_lava;  // ---------------------------  /* auto */
/* 82*/ int32_t bump_lava_bump_map;  // ------------------  /* auto */
/* 86*/ int32_t bump_lava_env_map;  // -------------------  /* auto */
/* 8A*/ int32_t lightning;  // ---------------------------  /* auto */
/* 8E*/ int32_t cursor;  // ------------------------------  /* auto */
/* 92*/ int32_t ice_ring;  // ----------------------------  /* auto */
/* 96*/ int32_t white;  // -------------------------------  /* auto */
/* 9A*/ int32_t f9A;  // ---------------------------------  /* auto */
/* 9E*/ int32_t f9E;  // ---------------------------------  /* auto */
/* A2*/ int32_t fA2;  // ---------------------------------  /* auto */
/* A6*/ CWorldEntry world_entry1;  // --------------------  /* auto */
/* C1*/ int32_t fC1;  // ---------------------------------  /* auto */
/* C5*/ int32_t fC5;  // ---------------------------------  /* auto */
/* C9*/ int32_t updateCount;  // -------------------------  /* auto */
/* CD*/ int32_t init3dResult;  // ------------------------  /* auto */
/* D1*/ int8_t gap_D1[20];  // ---------------------------  /* auto */
/* E5*/ int8_t fE5;  // ----------------------------------  /* auto */
/* E6*/ int8_t fE6;  // ----------------------------------  /* auto */
/* E7*/ int8_t fE7;  // ----------------------------------  /* auto */
/* E8*/ int8_t fE8;  // ----------------------------------  /* auto */
/* E9*/ int8_t gap_E9[17];  // ---------------------------  /* auto */
/* FA*/ int32_t fFA;  // ---------------------------------  /* auto */
/* FE*/ int32_t fFE;  // ---------------------------------  /* auto */
/*102*/ int32_t f102;  // --------------------------------  /* auto */
/*106*/ int32_t f106;  // --------------------------------  /* auto */
/*10A*/ int32_t f10A;  // --------------------------------  /* auto */
/*10E*/ int32_t f10E;  // --------------------------------  /* auto */
/*112*/ CRenderInfo c_render_info;  // -------------------  /* auto */
/*1C2*/ CWorldEntry world_entry2;  // --------------------  /* auto */
/*1DD*/ int8_t gap_1DD[36];  // --------------------------  /* auto */
/*201*/ int32_t f201;  // --------------------------------  /* auto */
/*205*/ char str[32];  // --------------------------------  /* auto */
/*225*/ int32_t f225;  // --------------------------------  /* auto */
/*229*/ int32_t f229;  // --------------------------------  /* auto */
/*22D*/ CBridge *pCBridge;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00670574*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEngineInterface  -----------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(char);  // = 00598350  /* auto */
/*  4*/ // virtual int32_t v_f4(int32_t);  // = 005983C0    /* auto */
/*  8*/ // virtual void v_f8();  // = 00598690  ----------  /* auto */
/*  C*/ // virtual void v_fC();  // = 0040D440  ----------  /* auto */
/* 10*/ // virtual void v_f10();  // = 0040D440  ---------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00628BC0  ------  /* auto */
/* 18*/ // virtual void v_f18(int32_t);  // = 005671E0  --  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00628BC0  ------  /* auto */
/* 20*/ // virtual BOOL v_isActionHasHandler(int32_t);  // = 005986D0  /* auto */
/* 24*/ // virtual int32_t v_f24(GameAction *);  // = 005986F0  /* auto */
/* 28*/ // virtual int32_t v_f28(__int16 *);  // = 00598800  /* auto */
/* 2C*/ // virtual int32_t v_f2C(int32_t *);  // = 00598880  /* auto */
/* 30*/ // virtual void v_f30(int32_t);  // = 005671E0  --  /* auto */
/* 34*/ // virtual void v_f34(int32_t);  // = 005671E0  --  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 0059D760  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 0059D7F0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 0059D860  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 0059D890  ------  /* auto */
/* 48*/ // virtual int32_t v_f48(float, float, int32_t, int32_t);  // = 005992B0  /* auto */
/* 4C*/ // virtual int32_t v_f4C(float, float, int32_t);  // = 005998C0  /* auto */
/* 50*/ // virtual int32_t v_f50(int32_t, int32_t, int32_t);  // = 00517400  /* auto */
/* 54*/ // virtual int32_t v_f54(const char *, char, int32_t, int32_t *, int32_t, char);  // = 0059A6A0  /* auto */
/* 58*/ // virtual int32_t v_createMyScaledSurface(int32_t, int32_t, int32_t, int32_t, int32_t *);  // = 0059A650  /* auto */
/* 5C*/ // virtual void v_f5C(int32_t, int32_t, int32_t, int32_t);  // = 0059B0C0  /* auto */
/* 60*/ // virtual void v_f60(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0059C010  /* auto */
/* 64*/ // virtual void v_f64(int32_t, int32_t, int32_t, int32_t);  // = 005671D0  /* auto */
/* 68*/ // virtual int32_t v_f68(int32_t, MySurface *, int32_t);  // = 0059D580  /* auto */
/* 6C*/ // virtual int32_t v_f6C(int32_t *);  // = 0059C0D0  /* auto */
/* 70*/ // virtual int32_t v_f70(int32_t);  // = 0059C110   /* auto */
/* 74*/ // virtual int32_t v_f74();  // = 0059C120  ------  /* auto */
/* 78*/ // virtual void v_f78(int32_t);  // = 005671E0  --  /* auto */
/* 7C*/ // virtual int32_t v_f7C(int32_t);  // = 0059C130   /* auto */
/* 80*/ // virtual int32_t v_f80(int32_t *, int32_t);  // = 0059C140  /* auto */
/* 84*/ // virtual int32_t v_f84(const char *);  // = 0059D5B0  /* auto */
/* 88*/ // virtual int32_t v_f88();  // = 0059D900  ------  /* auto */
/* 8C*/ // virtual IDirectDraw4 *v_f8C();  // = 0059DAB0    /* auto */
/* 90*/ // virtual int32_t v_f90(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430D0  /* auto */
/* 94*/ // virtual int32_t v_f94(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430C0  /* auto */
/* 98*/ // virtual int32_t v_f98(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430D0  /* auto */
/* 9C*/ // virtual void v_f9C(int32_t);  // = 005671E0  --  /* auto */
/* A0*/ // virtual int32_t v_fA0(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430C0  /* auto */
/* A4*/ // virtual int32_t v_fA4(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0043A8A0  /* auto */
/* A8*/ // virtual void v_fA8(int32_t);  // = 005671E0  --  /* auto */
/* AC*/ // virtual int32_t v_fAC(int32_t);  // = 00628E30   /* auto */
/* B0*/ // virtual int32_t v_fB0();  // = 00402AD0  ------  /* auto */
/* B4*/ // virtual void v_fB4(int32_t, int32_t);  // = 00580470  /* auto */
/* B8*/ // virtual void v_fB8(int32_t, int32_t, int32_t);  // = 0060F1D0  /* auto */
/* BC*/ // virtual __int16 v_fBC();  // = 004430E0  ------  /* auto */
/* C0*/ // virtual __int16 v_fC0(__int16);  // = 004430F0   /* auto */
/* C4*/ // virtual __int16 v_fC4();  // = 00443100  ------  /* auto */
/* C8*/ // virtual __int16 v_fC8(__int16);  // = 00443110   /* auto */
/* CC*/ // virtual int32_t v_fCC();  // = 00402AD0  ------  /* auto */
/* D0*/ // virtual CCamera *v_getCamera();  // = 00443120   /* auto */
/* D4*/ // virtual int32_t v_fD4(int32_t, int32_t);  // = 00443150  /* auto */
/* D8*/ // virtual int32_t v_fD8(int32_t *, int32_t *, int32_t *);  // = 0059C1D0  /* auto */
/* DC*/ // virtual int32_t v_fDC(int32_t, int32_t);  // = 00443150  /* auto */
/* E0*/ // virtual int32_t v_fE0(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 00599960  /* auto */
/* E4*/ // virtual int32_t v_fE4(int32_t, int32_t, int32_t, int32_t);  // = 00599910  /* auto */
/* E8*/ // virtual int32_t v_fE8(int32_t, int32_t, int32_t, int32_t);  // = 00599C60  /* auto */
/* EC*/ // virtual int32_t v_fEC(int32_t, int32_t, int32_t *);  // = 00599C10  /* auto */
/* F0*/ // virtual int32_t v_fF0(int32_t, int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t, int32_t, int32_t *, char);  // = 0059A200  /* auto */
/* F4*/ // virtual int32_t v_fF4(int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t, int32_t, int32_t *, char);  // = 0059A050  /* auto */
/* F8*/ // virtual int32_t v_fF8(int32_t, int32_t, int32_t, int32_t *, int32_t, int32_t, int8_t *, int32_t);  // = 005A2570  /* auto */
/* FC*/ // virtual int32_t v_fFC(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t);  // = 005A2BE0  /* auto */
/*100*/ // virtual int32_t v_f100(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t);  // = 005A2F10  /* auto */
/*104*/ // virtual int32_t v_f104(int32_t, int32_t, int32_t, int8_t *);  // = 005A1CA0  /* auto */
/*108*/ // virtual int32_t v_f108(int32_t, int32_t, int32_t *, int32_t);  // = 0059D420  /* auto */
/*10C*/ // virtual int32_t v_f10C(int32_t, int32_t, int32_t *, int32_t);  // = 0059D380  /* auto */
/*---*/ // CPCEngineInterface  ---------------------------  /* auto */
/*110*/ virtual void v_f110(int32_t);  // = 0062A210  ----  /* auto */
/*114*/ virtual const char *v_f114();  // = 0059D5E0  ----  /* auto */
// -------------------------------------------------------  /* auto */
/*005982A0*/ CPCEngineInterface *constructor();  // ------  /* auto */
/*005983C0*/ int32_t fun_5983C0(int32_t);  // ------------  /* auto */
/*005986F0*/ int32_t fun_5986F0(int32_t *);  // ----------  /* auto */
/*00598880*/ int32_t maybe_cameraFun(int32_t *);  // -----  /* auto */
/*0059A650*/ int32_t createMyScaledSurface(int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*0059A6A0*/ int32_t fun_59A6A0(const char *, char, int32_t, int32_t *, int32_t, char);  /* auto */
/*0059AE10*/ bool sub_59AE10();  // ----------------------  /* auto */
/*0059B0C0*/ void fun_59B0C0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0059D580*/ const char *fun_59D580(int32_t, MySurface *, int32_t);  /* auto */
/*0059D5B0*/ int32_t setStr(const char *);  // -----------  /* auto */
/*0059D760*/ int32_t fun_59D760();  // -------------------  /* auto */
/*0059D7F0*/ int32_t drawScene();  // --------------------  /* auto */
/*0059D900*/ int32_t init3d();  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CPCEngineInterface) == 0x231);  // --  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //CPC_ENGINE_INTERFACE_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
