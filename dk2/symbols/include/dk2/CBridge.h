// -----------------  id: vtbl_0066CC94  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_BRIDGE_H  // -----------------------------------  /* auto */
#define C_BRIDGE_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CBridgeInterface.h>  // --------------------  /* auto */
#include <dk2/CCamera.h>  // -----------------------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
#include <dk2/FloatObjThing.h>  // -----------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CBridge;  // ------------------------------------  /* auto */
  struct CPCEngineInterface;  // -------------------------  /* auto */
  struct GameAction;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CBridge : CBridgeInterface {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 72*/ uint32_t f72;  // --------------------------------  /* auto */
/* 76*/ uint8_t gap_76[32];  // --------------------------  /* auto */
/* 96*/ uint32_t f96;  // --------------------------------  /* auto */
/* 9A*/ int32_t f9A;  // ---------------------------------  /* auto */
/* 9E*/ CPCEngineInterface *pCPCEngineInterface;  // -----  /* auto */
/* A2*/ uint32_t camHandlers[138];  // -------------------  /* auto */
/*2CA*/ uint32_t handlers1[23];  // ----------------------  /* auto */
/*326*/ uint32_t dword_arr_x4[4];  // --------------------  /* auto */
/*336*/ int32_t f336;  // --------------------------------  /* auto */
/*33A*/ int32_t f33A;  // --------------------------------  /* auto */
/*33E*/ uint16_t f33E;  // -------------------------------  /* auto */
/*340*/ CWorldEntry c_world_entry1;  // ------------------  /* auto */
/*35B*/ uint16_t f35B;  // -------------------------------  /* auto */
/*35D*/ uint16_t f35D;  // -------------------------------  /* auto */
/*35F*/ CWorldEntry c_world_entry2;  // ------------------  /* auto */
/*37A*/ uint16_t f37A;  // -------------------------------  /* auto */
/*37C*/ uint8_t gap_37C[6];  // --------------------------  /* auto */
/*382*/ CWorldEntry c_world_entry3;  // ------------------  /* auto */
/*39D*/ uint8_t gap39D[4];  // ---------------------------  /* auto */
/*3A1*/ CWorldEntry c_world_entry4;  // ------------------  /* auto */
/*3BC*/ uint16_t f3BC;  // -------------------------------  /* auto */
/*3BE*/ uint32_t f3BE;  // -------------------------------  /* auto */
/*3C2*/ uint32_t f3C2;  // -------------------------------  /* auto */
/*3C6*/ uint8_t gap_3C6[4];  // --------------------------  /* auto */
/*3CA*/ CWorldEntry c_world_entry5;  // ------------------  /* auto */
/*3E5*/ CCamera camera;  // ------------------------------  /* auto */
/*12B7*/ uint8_t f12b7_gap[4];  // -----------------------  /* auto */
/*12BB*/ MySurface surf;  // -----------------------------  /* auto */
/*12E3*/ uint32_t f12E3;  // -----------------------------  /* auto */
/*12E7*/ uint32_t obj_start;  // -------------------------  /* auto */
/*12EB*/ int32_t f12EB;  // ------------------------------  /* auto */
/*12EF*/ uint8_t f12ef_gap[8];  // -----------------------  /* auto */
/*12F7*/ int32_t f12F7;  // ------------------------------  /* auto */
/*12FB*/ int32_t f12FB;  // ------------------------------  /* auto */
/*12FF*/ uint8_t f12ff_gap[8];  // -----------------------  /* auto */
/*1307*/ int32_t f1307;  // ------------------------------  /* auto */
/*130B*/ uint8_t f130b_gap[20];  // ----------------------  /* auto */
/*131F*/ uint32_t f131F;  // -----------------------------  /* auto */
/*1323*/ uint32_t f1323;  // -----------------------------  /* auto */
/*1327*/ uint32_t f1327;  // -----------------------------  /* auto */
/*132B*/ uint32_t f132B;  // -----------------------------  /* auto */
/*132F*/ uint32_t f132F;  // -----------------------------  /* auto */
/*1333*/ uint8_t gap_1333[48];  // -----------------------  /* auto */
/*1363*/ uint32_t f1363;  // -----------------------------  /* auto */
/*1367*/ uint8_t gap_1367[48];  // -----------------------  /* auto */
/*1397*/ uint32_t f1397;  // -----------------------------  /* auto */
/*139B*/ uint32_t f139B;  // -----------------------------  /* auto */
/*139F*/ uint32_t f139F;  // -----------------------------  /* auto */
/*13A3*/ uint32_t f13A3;  // -----------------------------  /* auto */
/*13A7*/ int32_t f13A7;  // ------------------------------  /* auto */
/*13AB*/ int32_t f13AB;  // ------------------------------  /* auto */
/*13AF*/ int32_t f13AF;  // ------------------------------  /* auto */
/*13B3*/ int32_t f13B3;  // ------------------------------  /* auto */
/*13B7*/ int32_t f13B7;  // ------------------------------  /* auto */
/*13BB*/ int32_t f13BB;  // ------------------------------  /* auto */
/*13BF*/ int32_t f13BF;  // ------------------------------  /* auto */
/*13C3*/ int32_t f13C3;  // ------------------------------  /* auto */
/*13C7*/ uint32_t f13C7;  // -----------------------------  /* auto */
/*13CB*/ uint32_t f13CB;  // -----------------------------  /* auto */
/*13CF*/ uint32_t f13CF;  // -----------------------------  /* auto */
/*13D3*/ FloatObjThing float_obj_thing;  // --------------  /* auto */
/*2621*/ uint32_t f2621;  // -----------------------------  /* auto */
/*2625*/ uint32_t f2625;  // -----------------------------  /* auto */
/*2629*/ uint32_t f2629;  // -----------------------------  /* auto */
/*262D*/ uint32_t f262D;  // -----------------------------  /* auto */
/*2631*/ uint32_t timeMs;  // ----------------------------  /* auto */
/*2635*/ uint8_t str;  // --------------------------------  /* auto */
/*2636*/ uint8_t gap_2636[31];  // -----------------------  /* auto */
/*2655*/ int32_t f2655;  // ------------------------------  /* auto */
/*2659*/ uint8_t gap_2659[37];  // -----------------------  /* auto */
/*267E*/ char f267E;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066CC94*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CEngineInterface  -----------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 0043AA10  /* auto */
/*  4*/ // virtual int32_t v_f4(int32_t);  // = 0043AD70    /* auto */
/*  8*/ // virtual void v_f8();  // = 0043B0B0  ----------  /* auto */
/*  C*/ // virtual void v_fC();  // = 00441E30  ----------  /* auto */
/* 10*/ // virtual void v_f10();  // = 00441E60  ---------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00441EE0  ------  /* auto */
/* 18*/ // virtual void v_f18(int32_t);  // = 0043A990  --  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 0043A9A0  ------  /* auto */
/* 20*/ // virtual BOOL v_isActionHasHandler(int32_t);  // = 0043B150  /* auto */
/* 24*/ // virtual int32_t v_f24(GameAction *);  // = 0043B180  /* auto */
/* 28*/ // virtual int32_t v_f28(__int16 *);  // = 0043B1E0  /* auto */
/* 2C*/ // virtual int32_t v_f2C(int32_t *);  // = 0043B220  /* auto */
/* 30*/ // virtual void v_f30(int32_t);  // = 00441330  --  /* auto */
/* 34*/ // virtual void v_f34(int32_t);  // = 00441350  --  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00440FB0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 00440FC0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 00440FD0  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 00440FE0  ------  /* auto */
/* 48*/ // virtual int32_t v_f48(float, float, int32_t, int32_t);  // = 0043C2C0  /* auto */
/* 4C*/ // virtual int32_t v_f4C(float, float, int32_t);  // = 0043C2F0  /* auto */
/* 50*/ // virtual int32_t v_f50(int32_t, int32_t, int32_t);  // = 00441040  /* auto */
/* 54*/ // virtual int32_t v_f54_allocateRenderObj(const char *, char, int32_t, int32_t *, int32_t, char);  // = 0043E2F0  /* auto */
/* 58*/ // virtual int32_t v_createMyScaledSurface(int32_t, int32_t, int32_t, int32_t, int32_t *);  // = 00441300  /* auto */
/* 5C*/ // virtual void v_f5C(int32_t, int32_t, int32_t, int32_t);  // = 00440FF0  /* auto */
/* 60*/ // virtual void v_f60(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0043A8B0  /* auto */
/* 64*/ // virtual void v_f64(int32_t, int32_t, int32_t, int32_t);  // = 00441060  /* auto */
/* 68*/ // virtual int32_t v_f68(int32_t, MySurface *, int32_t);  // = 00441020  /* auto */
/* 6C*/ // virtual int32_t v_f6C_setAabb(int32_t *);  // = 00441390  /* auto */
/* 70*/ // virtual int32_t v_f70(int32_t);  // = 004413B0   /* auto */
/* 74*/ // virtual int32_t v_f74();  // = 004413D0  ------  /* auto */
/* 78*/ // virtual void v_f78(int32_t);  // = 004413E0  --  /* auto */
/* 7C*/ // virtual int32_t v_f7C(int32_t);  // = 00441400   /* auto */
/* 80*/ // virtual int32_t v_f80(int32_t *, int32_t);  // = 004412C0  /* auto */
/* 84*/ // virtual uint32_t v_f84(const char *);  // = 00441C70  /* auto */
/* 88*/ // virtual int32_t v_f88();  // = 00441E20  ------  /* auto */
/* 8C*/ // virtual IDirectDraw4 *v_f8C();  // = 0040D440    /* auto */
/* 90*/ // virtual int32_t v_f90(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 00440420  /* auto */
/* 94*/ // virtual int32_t v_f94(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0043A8E0  /* auto */
/* 98*/ // virtual int32_t v_f98(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 00440350  /* auto */
/* 9C*/ // virtual void v_f9C(int32_t);  // = 00440530  --  /* auto */
/* A0*/ // virtual int32_t v_fA0(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 00439880  /* auto */
/* A4*/ // virtual int32_t v_fA4(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004397E0  /* auto */
/* A8*/ // virtual void v_fA8(int32_t);  // = 00439A20  --  /* auto */
/* AC*/ // virtual int32_t v_fAC(int32_t);  // = 00439AA0   /* auto */
/* B0*/ // virtual int32_t v_fB0();  // = 0043A910  ------  /* auto */
/* B4*/ // virtual void v_fB4(int32_t, int32_t);  // = 00439B00  /* auto */
/* B8*/ // virtual void v_fB8(int32_t, int32_t, int32_t);  // = 00439B90  /* auto */
/* BC*/ // virtual __int16 v_fBC();  // = 00440F50  ------  /* auto */
/* C0*/ // virtual __int16 v_fC0(__int16);  // = 00440F60   /* auto */
/* C4*/ // virtual __int16 v_fC4();  // = 00440F80  ------  /* auto */
/* C8*/ // virtual __int16 v_fC8(__int16);  // = 00440F90   /* auto */
/* CC*/ // virtual int32_t v_fCC();  // = 0043A970  ------  /* auto */
/* D0*/ // virtual CCamera *v_getCamera();  // = 0043A980   /* auto */
/* D4*/ // virtual int32_t v_fD4(int32_t, int32_t);  // = 004412E0  /* auto */
/* D8*/ // virtual int32_t v_fD8(int32_t *, uint32_t *, uint32_t *);  // = 00441370  /* auto */
/* DC*/ // virtual int32_t v_fDC(int32_t, int32_t);  // = 00441B00  /* auto */
/* E0*/ // virtual int32_t v_fE0(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 004430C0  /* auto */
/* E4*/ // virtual int32_t v_fE4(int32_t, int32_t, int32_t, int32_t);  // = 00628B70  /* auto */
/* E8*/ // virtual int32_t v_fE8(int32_t, int32_t, int32_t, int32_t);  // = 00628B70  /* auto */
/* EC*/ // virtual int32_t v_fEC(int32_t, int32_t, int32_t *);  // = 00517400  /* auto */
/* F0*/ // virtual int32_t v_fF0(uint32_t, uint32_t, int32_t, int32_t, int32_t, uint8_t *, int32_t, int32_t, int32_t *, char);  // = 0043A880  /* auto */
/* F4*/ // virtual int32_t v_fF4(uint32_t, uint32_t, int32_t, int32_t, uint8_t *, int32_t, int32_t, int32_t *, char);  // = 0043A890  /* auto */
/* F8*/ // virtual int32_t v_fF8(uint32_t, uint32_t, int32_t, int32_t *, int32_t, int32_t, uint8_t *, int32_t);  // = 0043A8A0  /* auto */
/* FC*/ // virtual int32_t v_fFC(uint32_t, int32_t, int32_t, int32_t, int32_t, int32_t, uint8_t *, int32_t);  // = 0043A8A0  /* auto */
/*100*/ // virtual int32_t v_f100(uint32_t, uint32_t, int32_t, int32_t, int32_t, int32_t, uint8_t *, int32_t);  // = 0043A8A0  /* auto */
/*104*/ // virtual int32_t v_f104(int32_t, int32_t, int32_t, uint8_t *);  // = 00628B70  /* auto */
/*108*/ // virtual int32_t v_f108(int32_t, int32_t, uint32_t *, int32_t);  // = 00441AD0  /* auto */
/*10C*/ // virtual int32_t v_f10C(int32_t, int32_t, uint32_t *, int32_t);  // = 00441AA0  /* auto */
/*---*/ // super CBridgeInterface  -----------------------  /* auto */
/*110*/ // virtual int32_t v_f110(CPCEngineInterface *);  // = 0043AAD0  /* auto */
/*114*/ // virtual void v_f114();  // = 0043ACF0  --------  /* auto */
/*118*/ // virtual int32_t v_f118(const char *);  // = 0043E030  /* auto */
/*11C*/ // virtual MySurface *v_loadPng(char *);  // = 0043E0F0  /* auto */
/*120*/ // virtual int32_t v_f120(int32_t, int32_t, uint32_t *);  // = 0043D790  /* auto */
/*124*/ // virtual int32_t v_f124(int32_t, int32_t);  // = 0043D970  /* auto */
/*128*/ // virtual uint32_t v_f128(int32_t *);  // = 0043A940  /* auto */
/*12C*/ // virtual uint32_t v_f12C(uint32_t, uint32_t);  // = 0043A920  /* auto */
/*130*/ // virtual int32_t v_f130(int32_t, int32_t, int32_t, uint32_t *);  // = 0043C310  /* auto */
/*134*/ // virtual int32_t v_f134(uint32_t, uint32_t, int32_t);  // = 0043CC30  /* auto */
/*138*/ // virtual char *v_get_field_();  // = 0043A960  -  /* auto */
/*13C*/ // virtual int32_t v_f13C(int32_t, int32_t, uint32_t *);  // = 00441420  /* auto */
/*---*/ // CBridge  --------------------------------------  /* auto */
/*140*/ virtual char *v_fun_441CC0();  // = 00441CC0  ----  /* auto */
/*144*/ virtual __int16 v_fun_4408C0();  // = 004408C0  --  /* auto */
/*148*/ virtual __int16 v_fun_4408E0(__int16);  // = 004408E0  /* auto */
/*14C*/ virtual __int16 v_fun_440940(__int16);  // = 00440940  /* auto */
/*150*/ virtual __int16 v_fun_440A00(uint32_t);  // = 00440A00  /* auto */
/*154*/ virtual __int16 v_fun_440A30(int32_t);  // = 00440A30  /* auto */
/*158*/ virtual int32_t v_fun_440A70(uint16_t);  // = 00440A70  /* auto */
/*15C*/ virtual int32_t v_fun_4409A0(uint16_t);  // = 004409A0  /* auto */
/*160*/ virtual void *v_loc_43A9B0();  // = 0043A9B0  ----  /* auto */
/*164*/ virtual void *v_loc_43A9C0();  // = 0043A9C0  ----  /* auto */
/*168*/ virtual void *v_loc_43A9D0();  // = 0043A9D0  ----  /* auto */
/*16C*/ virtual __int16 v_fun_440AD0();  // = 00440AD0  --  /* auto */
/*170*/ virtual __int16 v_fun_440AF0(__int16);  // = 00440AF0  /* auto */
/*174*/ virtual __int16 v_fun_440B60(__int16);  // = 00440B60  /* auto */
/*178*/ virtual __int16 v_fun_440C20(uint32_t);  // = 00440C20  /* auto */
/*17C*/ virtual __int16 v_fun_440C50(int32_t);  // = 00440C50  /* auto */
/*180*/ virtual int32_t v_fun_440C90(uint16_t);  // = 00440C90  /* auto */
/*184*/ virtual int32_t v_fun_440BC0(uint16_t);  // = 00440BC0  /* auto */
/*188*/ virtual void *v_loc_43A9E0();  // = 0043A9E0  ----  /* auto */
/*18C*/ virtual void *v_loc_43A9F0();  // = 0043A9F0  ----  /* auto */
/*190*/ virtual void *v_loc_43AA00();  // = 0043AA00  ----  /* auto */
// -------------------------------------------------------  /* auto */
/*004397E0*/ int32_t fun_4397E0(int32_t, __int16, __int16, __int16, char, int32_t, int32_t, int32_t *);  /* auto */
/*00439880*/ int32_t fun_439880(uint32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00439A20*/ uint32_t *fun_439A20(int32_t);  // ----------  /* auto */
/*00439AA0*/ int32_t fun_439AA0(int32_t *);  // ----------  /* auto */
/*00439B00*/ uint16_t fun_439B00(int32_t, int32_t);  // --  /* auto */
/*00439B90*/ __int16 fun_439B90(char *, int32_t, int32_t);  /* auto */
/*0043A740*/ CBridge *constructor();  // -----------------  /* auto */
/*0043A960*/ char *get_field_();  // ---------------------  /* auto */
/*0043A970*/ int32_t fun_43A970();  // -------------------  /* auto */
/*0043A980*/ CCamera *getCamera();  // -------------------  /* auto */
/*0043AA30*/ void destructor();  // ----------------------  /* auto */
/*0043AAD0*/ int32_t connectEngine(CPCEngineInterface *);   /* auto */
/*0043ACF0*/ void fun_43ACF0();  // ----------------------  /* auto */
/*0043AD70*/ int32_t fun_43AD70(int32_t);  // ------------  /* auto */
/*0043B0B0*/ void fun_43B0B0();  // ----------------------  /* auto */
/*0043B150*/ BOOL isActionHasHandler(int32_t);  // -------  /* auto */
/*0043B180*/ int32_t fun_43B180(GameAction *);  // -------  /* auto */
/*0043B1E0*/ int32_t fun_43B1E0(int32_t);  // ------------  /* auto */
/*0043B220*/ int32_t fun_43B220(uint32_t *);  // ---------  /* auto */
/*0043C2C0*/ int32_t fun_43C2C0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0043C2F0*/ int32_t fun_43C2F0(int32_t, int32_t, int32_t);  /* auto */
/*0043C310*/ int32_t fun_43C310(int32_t, int32_t, int32_t, uint32_t *);  /* auto */
/*0043CC30*/ int32_t fun_43CC30(uint32_t, uint32_t, int32_t);  /* auto */
/*0043D790*/ int32_t fun_43D790(int32_t, int32_t, uint32_t *);  /* auto */
/*0043D970*/ int32_t fun_43D970(int32_t, int32_t);  // ---  /* auto */
/*0043D9B0*/ int32_t fun_43D9B0(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0043DC40*/ int32_t fun_43DC40(uint32_t, uint32_t, int32_t);  /* auto */
/*0043E030*/ int32_t fun_43E030(const char *);  // -------  /* auto */
/*0043E0F0*/ MySurface *loadPng(char *);  // -------------  /* auto */
/*0043E2F0*/ int32_t allocateRenderObj(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00440350*/ int32_t fun_440350(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*00440420*/ int32_t fun_440420(int32_t, int32_t, int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*00440530*/ uint32_t *fun_440530(int32_t);  // ----------  /* auto */
/*004408C0*/ __int16 fun_4408C0();  // -------------------  /* auto */
/*004408E0*/ __int16 fun_4408E0(__int16);  // ------------  /* auto */
/*00440940*/ __int16 fun_440940(__int16);  // ------------  /* auto */
/*004409A0*/ int32_t fun_4409A0(uint16_t);  // -----------  /* auto */
/*00440A00*/ __int16 fun_440A00(uint32_t);  // -----------  /* auto */
/*00440A30*/ __int16 fun_440A30(int32_t);  // ------------  /* auto */
/*00440A70*/ int32_t fun_440A70(uint16_t);  // -----------  /* auto */
/*00440AD0*/ __int16 fun_440AD0();  // -------------------  /* auto */
/*00440AF0*/ __int16 fun_440AF0(__int16);  // ------------  /* auto */
/*00440B60*/ __int16 fun_440B60(__int16);  // ------------  /* auto */
/*00440BC0*/ int32_t fun_440BC0(uint16_t);  // -----------  /* auto */
/*00440C20*/ __int16 fun_440C20(uint32_t);  // -----------  /* auto */
/*00440C50*/ __int16 fun_440C50(int32_t);  // ------------  /* auto */
/*00440C90*/ int32_t fun_440C90(uint16_t);  // -----------  /* auto */
/*00440F50*/ int32_t fun_440F50();  // -------------------  /* auto */
/*00440F60*/ int32_t fun_440F60(int32_t);  // ------------  /* auto */
/*00440F80*/ int32_t fun_440F80();  // -------------------  /* auto */
/*00440F90*/ int32_t fun_440F90(int32_t);  // ------------  /* auto */
/*00440FB0*/ int32_t fun_440FB0();  // -------------------  /* auto */
/*00440FC0*/ int32_t fun_440FC0();  // -------------------  /* auto */
/*00440FD0*/ int32_t fun_440FD0();  // -------------------  /* auto */
/*00440FE0*/ int32_t fun_440FE0();  // -------------------  /* auto */
/*00440FF0*/ int32_t fun_440FF0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00441020*/ int32_t fun_441020(int32_t, MySurface *, int32_t);  /* auto */
/*00441040*/ int32_t fun_441040(int32_t, int32_t, int32_t);  /* auto */
/*00441060*/ int32_t fun_441060(__int16, int32_t, int32_t, int32_t);  /* auto */
/*00441220*/ void fun_441220(int32_t, int32_t);  // ------  /* auto */
/*00441230*/ int32_t fun_441230(int32_t);  // ------------  /* auto */
/*004412C0*/ int32_t fun_4412C0(int32_t, int32_t);  // ---  /* auto */
/*004412E0*/ int32_t fun_4412E0(int32_t, int32_t);  // ---  /* auto */
/*00441300*/ int32_t createAndRegister(char *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00441330*/ int32_t fun_441330(uint32_t *);  // ---------  /* auto */
/*00441350*/ uint32_t *fun_441350(uint32_t *);  // -------  /* auto */
/*00441370*/ int32_t fun_441370(int32_t, int32_t, int32_t);  /* auto */
/*00441390*/ int32_t fun_441390(int32_t);  // ------------  /* auto */
/*004413B0*/ int32_t fun_4413B0(int32_t);  // ------------  /* auto */
/*004413D0*/ int32_t fun_4413D0();  // -------------------  /* auto */
/*004413E0*/ int32_t init_float_obj(float);  // ----------  /* auto */
/*00441400*/ int32_t fun_441400(int32_t);  // ------------  /* auto */
/*00441420*/ int32_t fun_441420(int32_t, int32_t, uint32_t *);  /* auto */
/*00441AA0*/ int32_t fun_441AA0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00441AD0*/ int32_t fun_441AD0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00441B00*/ int32_t fun_441B00(int32_t, int32_t);  // ---  /* auto */
/*00441C70*/ uint32_t setTexturesPath_441C70(const char *);  /* auto */
/*00441CC0*/ char *fun_441CC0();  // ---------------------  /* auto */
/*00441E20*/ int32_t fun_441E20();  // -------------------  /* auto */
/*00441E30*/ int32_t fun_441E30();  // -------------------  /* auto */
/*00441E60*/ void fun_441E60();  // ----------------------  /* auto */
/*00441EE0*/ int32_t fun_441EE0();  // -------------------  /* auto */
/*00441F10*/ int32_t idx_handler2_2_cam(int32_t *);  // --  /* auto */
/*00441F50*/ int32_t idx_handler2_83_cam(uint32_t *);       /* auto */
/*00441FB0*/ int32_t idx_handler2_3_moveCam(GameAction *);  /* auto */
/*004420A0*/ int32_t idx_handler2_7F_cam(int32_t *);  // -  /* auto */
/*004420F0*/ int32_t idx_handler2_80_cam(uint32_t *);       /* auto */
/*00442140*/ int32_t idx_handler2_7E_cam(uint32_t *);       /* auto */
/*00442290*/ int32_t idx_handler2_6_cam(int32_t *);  // --  /* auto */
/*004422B0*/ int32_t idx_handler2_7_zoomCam(GameAction *);  /* auto */
/*004422F0*/ int32_t idx_handler2_8_cam(uint32_t *);  // -  /* auto */
/*00442350*/ int32_t idx_handler2_85_cam(int32_t *);  // -  /* auto */
/*00442380*/ int32_t idx_handler2_9_cam(uint32_t *);  // -  /* auto */
/*004423E0*/ int32_t idx_handler2_A_cam(int32_t *);  // --  /* auto */
/*00442400*/ int32_t idx_handler2_C_cam(uint32_t *);  // -  /* auto */
/*00442450*/ int32_t idx_handler2_D_cam(uint32_t *);  // -  /* auto */
/*004424A0*/ int32_t idx_handler2_E_cam(int32_t *);  // --  /* auto */
/*00442500*/ int32_t idx_handler2_10_cam(int32_t);  // ---  /* auto */
/*00442540*/ int32_t idx_handler2_73_cam(int32_t *);  // -  /* auto */
/*00442570*/ int32_t idx_handler2_28(__int16 *);  // -----  /* auto */
/*004425C0*/ int32_t idx_handler2_29(__int16 *);  // -----  /* auto */
/*00442610*/ int32_t idx_handler2_2A(__int16 *);  // -----  /* auto */
/*00442650*/ int32_t idx_handler2_4_cam(uint32_t *);  // -  /* auto */
/*004426F0*/ int32_t idx_handler2_74_cam(int32_t *);  // -  /* auto */
/*00442730*/ int32_t idx_handler2_5_cam(uint16_t *);  // -  /* auto */
/*00442780*/ int32_t idx_handler2_F_cam(int32_t *);  // --  /* auto */
/*004427D0*/ int32_t idx_handler2_11_cam(uint16_t *);       /* auto */
/*00442820*/ int32_t idx_handler2_15_cam(int32_t);  // ---  /* auto */
/*00442870*/ int32_t idx_handler2_19_cam(int32_t);  // ---  /* auto */
/*00442920*/ int32_t idx_handler2_16_cam(__int16 *);  // -  /* auto */
/*00442960*/ int32_t idx_handler2_2F(char *);  // --------  /* auto */
/*00442D80*/ int32_t idx_handler2_6F(int32_t *);  // -----  /* auto */
/*00442DE0*/ int32_t idx_handler2_70_cam(int32_t *);  // -  /* auto */
/*00442E50*/ int32_t idx_handler2_1F_cam(int32_t);  // ---  /* auto */
/*00442EB0*/ int32_t idx_handler2_66_cam(int32_t);  // ---  /* auto */
/*00442F50*/ int32_t idx_handler2_68_cam(int32_t *);  // -  /* auto */
/*00443030*/ int32_t idx_handler2_84_cam(int32_t);  // ---  /* auto */
/*00447AC0*/ int32_t idx_handler_1(uint32_t *);  // ------  /* auto */
/*00447B20*/ int32_t idx_handler_2(int32_t);  // ---------  /* auto */
/*00447C70*/ int32_t idx_handler_3(uint32_t *);  // ------  /* auto */
/*00447CA0*/ int32_t idx_handler_4(uint32_t *);  // ------  /* auto */
/*00447CE0*/ int32_t idx_handler_6(int32_t);  // ---------  /* auto */
/*00447D50*/ int32_t idx_handler_7(int32_t);  // ---------  /* auto */
/*004482C0*/ int32_t idx_handler_8(int32_t);  // ---------  /* auto */
/*00448320*/ int32_t idx_handler_14(int32_t);  // --------  /* auto */
/*00448360*/ int32_t idx_handler_9(int32_t);  // ---------  /* auto */
/*004483A0*/ int32_t idx_handler_A(int32_t);  // ---------  /* auto */
/*004483D0*/ int32_t idx_handler_B(uint16_t *);  // ------  /* auto */
/*00448440*/ int32_t idx_handler_C(uint16_t *);  // ------  /* auto */
/*004484A0*/ int32_t fun_4484A0(uint32_t, uint32_t);  // -  /* auto */
/*00448580*/ int32_t idx_handler_D(int32_t *);  // -------  /* auto */
/*00448610*/ int32_t idx_handler_E(uint32_t *);  // ------  /* auto */
/*004486A0*/ int32_t idx_handler_F(int32_t);  // ---------  /* auto */
/*00448710*/ int32_t idx_handler_10(uint32_t *);  // -----  /* auto */
/*00448800*/ int32_t idx_handler_13(uint32_t *);  // -----  /* auto */
/*004488A0*/ int32_t idx_handler_11(int32_t);  // --------  /* auto */
/*00448A60*/ int32_t idx_handler_12(__int16 *);  // ------  /* auto */
/*00448AC0*/ int32_t idx_handler_15(__int16 *);  // ------  /* auto */
/*00448B00*/ int32_t idx_handler_16(__int16 *);  // ------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CBridge) == 0x267F);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_BRIDGE_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
