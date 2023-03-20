// -----------------  id: vtbl_0066E3EC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_WORLD_H  // ------------------------------------  /* auto */
#define C_WORLD_H  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/AABB.h>  // --------------------------------  /* auto */
#include <dk2/CMap.h>  // --------------------------------  /* auto */
#include <dk2/CResearchOrder.h>  // ----------------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
#include <dk2/CWorldShortEntry2.h>  // -------------------  /* auto */
#include <dk2/CWorldShortEntry3.h>  // -------------------  /* auto */
#include <dk2/GameActionHandler.h>  // -------------------  /* auto */
#include <dk2/MyCreatureCollection.h>  // ----------------  /* auto */
#include <dk2/MyDdSurface.h>  // -------------------------  /* auto */
#include <dk2/PlayerList.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct GameAction;  // ---------------------------------  /* auto */
  struct GameActionCtx;  // ------------------------------  /* auto */
  struct MyProfiler;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CWorld {  // --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyProfiler *profiler;  // ------------------------  /* auto */
/*  8*/ MyCreatureCollection creatures;  // --------------  /* auto */
/* 4A*/ int8_t gap4A[48];  // ----------------------------  /* auto */
/* 7A*/ PlayerList playerList;  // -----------------------  /* auto */
/*9BE*/ int16_t rooms;  // -------------------------------  /* auto */
/*9C0*/ int8_t gap_9C0[26];  // --------------------------  /* auto */
/*9DA*/ CMap cmap;  // -----------------------------------  /* auto */
/*14A9*/ int8_t gap14A9[247];  // ------------------------  /* auto */
/*15A0*/ int32_t f15A0;  // ------------------------------  /* auto */
/*15A4*/ int8_t gap_15A4[144];  // -----------------------  /* auto */
/*1634*/ MyDdSurface surface;  // ------------------------  /* auto */
/*165C*/ int8_t gap165C[40];  // -------------------------  /* auto */
/*1684*/ GameActionHandler actionHandlers[138];  // ------  /* auto */
/*1F24*/ int32_t f1F24;  // ------------------------------  /* auto */
/*1F28*/ int8_t gap_1F28[3884];  // ----------------------  /* auto */
/*2E54*/ int32_t unknowns;  // ---------------------------  /* auto */
/*2E58*/ int8_t gap_2E58[17329];  // ---------------------  /* auto */
/*7209*/ int32_t f7209;  // ------------------------------  /* auto */
/*720D*/ int8_t gap_720D[44];  // ------------------------  /* auto */
/*7239*/ char f7239;  // ---------------------------------  /* auto */
/*723A*/ int8_t gap_723A;  // ----------------------------  /* auto */
/*723B*/ int32_t f723B;  // ------------------------------  /* auto */
/*723F*/ int32_t f723F;  // ------------------------------  /* auto */
/*7243*/ __int16 f7243;  // ------------------------------  /* auto */
/*7245*/ AABB aabb_4[4];  // -----------------------------  /* auto */
/*7285*/ int8_t gap7285[12];  // -------------------------  /* auto */
/*7291*/ char f7291;  // ---------------------------------  /* auto */
/*7292*/ char f7292;  // ---------------------------------  /* auto */
/*7293*/ int32_t f7293;  // ------------------------------  /* auto */
/*7297*/ int32_t f7297;  // ------------------------------  /* auto */
/*729B*/ int8_t gap_729B[34];  // ------------------------  /* auto */
/*72BD*/ CWorldShortEntry3 short3_entries_6[6];  // ------  /* auto */
/*72E7*/ int8_t gap72E7[5];  // --------------------------  /* auto */
/*72EC*/ CResearchOrder c_recearch_order;  // ------------  /* auto */
/*7304*/ int8_t gap_7304[4];  // -------------------------  /* auto */
/*7308*/ int32_t f7308;  // ------------------------------  /* auto */
/*730C*/ int32_t f730C;  // ------------------------------  /* auto */
/*7310*/ int8_t gap_7310[10560];  // ---------------------  /* auto */
/*9C50*/ CWorldShortEntry2 short2_entries_8[8];  // ------  /* auto */
/*9D80*/ int8_t gap9D80[68];  // -------------------------  /* auto */
/*9DC4*/ CWorldEntry entries_6[6];  // -------------------  /* auto */
/*9E66*/ int8_t gap9E66[16];  // -------------------------  /* auto */
/*9E76*/ CWorldEntry entries_2[2];  // -------------------  /* auto */
/*9EAC*/ int8_t gap9EAC[120];  // ------------------------  /* auto */
/*9F24*/ CWorldEntry entries_30[30];  // -----------------  /* auto */
/*A24E*/ int8_t gapA24E[28];  // -------------------------  /* auto */
/*A26A*/ CWorldEntry entries_7[7];  // -------------------  /* auto */
/*A327*/ int8_t gapA327[116];  // ------------------------  /* auto */
/*A39B*/ int32_t fA39B;  // ------------------------------  /* auto */
/*A39F*/ int32_t fA39F;  // ------------------------------  /* auto */
/*A3A3*/ int32_t buf_field_A3A3;  // ---------------------  /* auto */
/*A3A7*/ int32_t buf_field_A3A7;  // ---------------------  /* auto */
/*A3AB*/ int32_t fA3AB;  // ------------------------------  /* auto */
/*A3AF*/ int32_t fA3AF;  // ------------------------------  /* auto */
/*A3B3*/ int32_t fA3B3;  // ------------------------------  /* auto */
/*A3B7*/ int32_t fA3B7;  // ------------------------------  /* auto */
/*A3BB*/ int32_t fA3BB;  // ------------------------------  /* auto */
/*A3BF*/ int32_t is_surface_filled;  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066E3EC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CWorld  ---------------------------------------  /* auto */
/*  0*/ virtual const void *v_sub_5098E0(char);  // = 005098E0  /* auto */
/*  4*/ virtual int32_t v_create_objects();  // = 005099A0  /* auto */
/*  8*/ virtual char v_fun_50A2F0();  // = 0050A2F0  -----  /* auto */
/*  C*/ virtual int16_t v_fun_510E90(GameAction *, int32_t);  // = 00510E90  /* auto */
/* 10*/ virtual const void *v_loc_508C00();  // = 00508C00  /* auto */
/* 14*/ virtual BOOL v_loc_508C10(int32_t);  // = 00508C10  /* auto */
/* 18*/ virtual int32_t v_tick(GameActionCtx *);  // = 0050A450  /* auto */
/* 1C*/ virtual int32_t v_loadLevel(const char *);  // = 0050E620  /* auto */
/* 20*/ virtual int32_t v_fun_50FBA0();  // = 0050FBA0  --  /* auto */
/* 24*/ virtual int32_t v_fun_50FC60();  // = 0050FC60  --  /* auto */
/* 28*/ virtual int32_t v_fun_50FD10(int32_t);  // = 0050FD10  /* auto */
/* 2C*/ virtual int32_t v_fun_50FD70(const char *);  // = 0050FD70  /* auto */
/* 30*/ virtual int32_t v_sub_509520();  // = 00509520  --  /* auto */
/* 34*/ virtual int32_t v_fun_50F3D0();  // = 0050F3D0  --  /* auto */
/* 38*/ virtual void v_fun_50EA70();  // = 0050EA70  -----  /* auto */
/* 3C*/ virtual int32_t v_sub_509630();  // = 00509630  --  /* auto */
/* 40*/ virtual int32_t v_sub_509640();  // = 00509640  --  /* auto */
/* 44*/ virtual int32_t v_fun_510730(int32_t, int32_t);  // = 00510730  /* auto */
/* 48*/ virtual int32_t v_sub_509820();  // = 00509820  --  /* auto */
/* 4C*/ virtual int32_t v_sub_509850();  // = 00509850  --  /* auto */
/* 50*/ virtual int32_t v_sub_509860(int32_t);  // = 00509860  /* auto */
/* 54*/ virtual char v_fun_50CD10();  // = 0050CD10  -----  /* auto */
/* 58*/ virtual char v_fun_50CD60(int8_t);  // = 0050CD60   /* auto */
/* 5C*/ virtual char v_fun_50CE00(int8_t);  // = 0050CE00   /* auto */
/* 60*/ virtual char v_fun_50CEB0(int32_t);  // = 0050CEB0  /* auto */
/* 64*/ virtual BOOL v_fun_50CF80(int8_t);  // = 0050CF80   /* auto */
/* 68*/ virtual int32_t v_sub_509480(int32_t);  // = 00509480  /* auto */
/* 6C*/ virtual int32_t v_sub_509450(int32_t, int32_t);  // = 00509450  /* auto */
/* 70*/ virtual const void *v_loc_508DD0();  // = 00508DD0  /* auto */
/* 74*/ virtual const void *v_loc_508DF0();  // = 00508DF0  /* auto */
/* 78*/ virtual const void *v_loc_508E00();  // = 00508E00  /* auto */
/* 7C*/ virtual const void *v_loc_508E10();  // = 00508E10  /* auto */
/* 80*/ virtual char v_fun_50CF20(int32_t);  // = 0050CF20  /* auto */
/* 84*/ virtual char v_fun_50CFB0();  // = 0050CFB0  -----  /* auto */
/* 88*/ virtual char v_fun_50CFD0(char);  // = 0050CFD0  -  /* auto */
/* 8C*/ virtual char v_fun_50D040(char);  // = 0050D040  -  /* auto */
/* 90*/ virtual char v_fun_50D120(int32_t);  // = 0050D120  /* auto */
/* 94*/ virtual int32_t v_fun_50D1B0(int8_t);  // = 0050D1B0  /* auto */
/* 98*/ virtual int32_t v_fun_50D0B0(int8_t);  // = 0050D0B0  /* auto */
/* 9C*/ virtual const void *v_loc_508E20();  // = 00508E20  /* auto */
/* A0*/ virtual const void *v_loc_508E30();  // = 00508E30  /* auto */
/* A4*/ virtual const void *v_loc_508E40();  // = 00508E40  /* auto */
/* A8*/ virtual char v_fun_50D150(int32_t);  // = 0050D150  /* auto */
/* AC*/ virtual char v_fun_50D220();  // = 0050D220  -----  /* auto */
/* B0*/ virtual char v_fun_50D240(char);  // = 0050D240  -  /* auto */
/* B4*/ virtual char v_fun_50D2E0(char);  // = 0050D2E0  -  /* auto */
/* B8*/ virtual char v_fun_50D420(int32_t);  // = 0050D420  /* auto */
/* BC*/ virtual int32_t v_fun_50D4D0(int8_t);  // = 0050D4D0  /* auto */
/* C0*/ virtual int32_t v_fun_50D390(int8_t);  // = 0050D390  /* auto */
/* C4*/ virtual int32_t v_loc_508E50();  // = 00508E50  --  /* auto */
/* C8*/ virtual const void *v_loc_508E60();  // = 00508E60  /* auto */
/* CC*/ virtual const void *v_loc_508E70();  // = 00508E70  /* auto */
/* D0*/ virtual char v_fun_50D460(int32_t);  // = 0050D460  /* auto */
/* D4*/ virtual char v_fun_50DEB0();  // = 0050DEB0  -----  /* auto */
/* D8*/ virtual char v_fun_50DED0(char);  // = 0050DED0  -  /* auto */
/* DC*/ virtual char v_fun_50DF30(char);  // = 0050DF30  -  /* auto */
/* E0*/ virtual char v_fun_50E010(int32_t);  // = 0050E010  /* auto */
/* E4*/ virtual int32_t v_fun_50E080(int8_t);  // = 0050E080  /* auto */
/* E8*/ virtual int32_t v_fun_50DFA0(int8_t);  // = 0050DFA0  /* auto */
/* EC*/ virtual const void *v_loc_508F40();  // = 00508F40  /* auto */
/* F0*/ virtual const void *v_loc_508F50();  // = 00508F50  /* auto */
/* F4*/ virtual const void *v_loc_508F60();  // = 00508F60  /* auto */
/* F8*/ virtual char v_fun_50E040(int32_t);  // = 0050E040  /* auto */
/* FC*/ virtual char v_fun_50DC80();  // = 0050DC80  -----  /* auto */
/*100*/ virtual char v_fun_50DCA0(char);  // = 0050DCA0  -  /* auto */
/*104*/ virtual char v_fun_50DD00(char);  // = 0050DD00  -  /* auto */
/*108*/ virtual char v_fun_50DDD0(int32_t);  // = 0050DDD0  /* auto */
/*10C*/ virtual int32_t v_fun_50DE50(int8_t);  // = 0050DE50  /* auto */
/*110*/ virtual int32_t v_fun_50DD60(int8_t);  // = 0050DD60  /* auto */
/*114*/ virtual const void *v_loc_508F10();  // = 00508F10  /* auto */
/*118*/ virtual const void *v_loc_508F20();  // = 00508F20  /* auto */
/*11C*/ virtual const void *v_loc_508F30();  // = 00508F30  /* auto */
/*120*/ virtual char v_fun_50DE00(int32_t);  // = 0050DE00  /* auto */
/*124*/ virtual char v_fun_50D550();  // = 0050D550  -----  /* auto */
/*128*/ virtual char v_fun_50D570(char);  // = 0050D570  -  /* auto */
/*12C*/ virtual char v_fun_50D5E0(char);  // = 0050D5E0  -  /* auto */
/*130*/ virtual char v_fun_50D6C0(int32_t);  // = 0050D6C0  /* auto */
/*134*/ virtual int32_t v_fun_50D750(int8_t);  // = 0050D750  /* auto */
/*138*/ virtual int32_t v_fun_50D650(int8_t);  // = 0050D650  /* auto */
/*13C*/ virtual const void *v_loc_508E80();  // = 00508E80  /* auto */
/*140*/ virtual const void *v_loc_508E90();  // = 00508E90  /* auto */
/*144*/ virtual const void *v_loc_508EA0();  // = 00508EA0  /* auto */
/*148*/ virtual char v_fun_50D6F0(int32_t);  // = 0050D6F0  /* auto */
/*14C*/ virtual char v_fun_50D7C0();  // = 0050D7C0  -----  /* auto */
/*150*/ virtual char v_fun_50D7E0(char);  // = 0050D7E0  -  /* auto */
/*154*/ virtual char v_fun_50D850(char);  // = 0050D850  -  /* auto */
/*158*/ virtual char v_fun_50D930(int32_t);  // = 0050D930  /* auto */
/*15C*/ virtual int32_t v_fun_50D9C0(int8_t);  // = 0050D9C0  /* auto */
/*160*/ virtual int32_t v_fun_50D8C0(int8_t);  // = 0050D8C0  /* auto */
/*164*/ virtual const void *v_loc_508EB0();  // = 00508EB0  /* auto */
/*168*/ virtual const void *v_loc_508EC0();  // = 00508EC0  /* auto */
/*16C*/ virtual const void *v_loc_508ED0();  // = 00508ED0  /* auto */
/*170*/ virtual char v_fun_50D960(int32_t);  // = 0050D960  /* auto */
/*174*/ virtual char v_fun_50DA20();  // = 0050DA20  -----  /* auto */
/*178*/ virtual char v_fun_50DA40(char);  // = 0050DA40  -  /* auto */
/*17C*/ virtual char v_fun_50DAB0(char);  // = 0050DAB0  -  /* auto */
/*180*/ virtual char v_fun_50DB90(int32_t);  // = 0050DB90  /* auto */
/*184*/ virtual int32_t v_fun_50DC10(int8_t);  // = 0050DC10  /* auto */
/*188*/ virtual int32_t v_fun_50DB20(int8_t);  // = 0050DB20  /* auto */
/*18C*/ virtual const void *v_loc_508EE0();  // = 00508EE0  /* auto */
/*190*/ virtual const void *v_loc_508EF0();  // = 00508EF0  /* auto */
/*194*/ virtual const void *v_loc_508F00();  // = 00508F00  /* auto */
/*198*/ virtual char v_fun_50DBC0(int32_t);  // = 0050DBC0  /* auto */
/*19C*/ virtual char v_fun_50E0E0();  // = 0050E0E0  -----  /* auto */
/*1A0*/ virtual char v_fun_50E100(char);  // = 0050E100  -  /* auto */
/*1A4*/ virtual char v_fun_50E170(char);  // = 0050E170  -  /* auto */
/*1A8*/ virtual char v_fun_50E250(int32_t);  // = 0050E250  /* auto */
/*1AC*/ virtual int32_t v_fun_50E2D0(int8_t);  // = 0050E2D0  /* auto */
/*1B0*/ virtual int32_t v_fun_50E1E0(int8_t);  // = 0050E1E0  /* auto */
/*1B4*/ virtual const void *v_loc_508F70();  // = 00508F70  /* auto */
/*1B8*/ virtual const void *v_loc_508F80();  // = 00508F80  /* auto */
/*1BC*/ virtual const void *v_loc_508F90();  // = 00508F90  /* auto */
/*1C0*/ virtual char v_fun_50E280(int32_t);  // = 0050E280  /* auto */
/*1C4*/ virtual char v_fun_50E330(int32_t);  // = 0050E330  /* auto */
/*1C8*/ virtual int32_t v_fun_50E3A0(int8_t);  // = 0050E3A0  /* auto */
/*1CC*/ virtual int32_t v_loc_508FA0(int32_t);  // = 00508FA0  /* auto */
/*1D0*/ virtual int32_t v_loc_508FB0();  // = 00508FB0  --  /* auto */
/*1D4*/ virtual const void *v_loc_508FE0();  // = 00508FE0  /* auto */
/*1D8*/ virtual const void *v_loc_508FC0();  // = 00508FC0  /* auto */
/*1DC*/ virtual const void *v_loc_508C70();  // = 00508C70  /* auto */
/*1E0*/ virtual const void *v_loc_508C80();  // = 00508C80  /* auto */
/*1E4*/ virtual const void *v_loc_508CA0();  // = 00508CA0  /* auto */
/*1E8*/ virtual void v_loc_508CC0(int32_t, int32_t, int32_t);  // = 00508CC0  /* auto */
/*1EC*/ virtual void v_loc_508CF0(int32_t);  // = 00508CF0  /* auto */
/*1F0*/ virtual void v_loc_508D00(int32_t);  // = 00508D00  /* auto */
/*1F4*/ virtual const void *v_loc_508D10();  // = 00508D10  /* auto */
/*1F8*/ virtual const void *v_loc_508D40();  // = 00508D40  /* auto */
/*1FC*/ virtual const void *v_loc_509090();  // = 00509090  /* auto */
/*200*/ virtual const void *v_loc_509050();  // = 00509050  /* auto */
/*204*/ virtual const void *v_loc_509010();  // = 00509010  /* auto */
/*208*/ virtual int32_t v_sub_509200(int32_t, int32_t);  // = 00509200  /* auto */
/*20C*/ virtual const void *v_loc_5090C0();  // = 005090C0  /* auto */
/*210*/ virtual BOOL v_sub_5091C0(int32_t);  // = 005091C0  /* auto */
/*214*/ virtual int32_t v_fun_443150(int32_t, int32_t);  // = 00443150  /* auto */
/*218*/ virtual const void *v_loc_509100();  // = 00509100  /* auto */
/*21C*/ virtual const void **v_sub_5092F0(int32_t, int32_t, int32_t *);  // = 005092F0  /* auto */
/*220*/ virtual int32_t v_sub_5092D0(int32_t, int32_t);  // = 005092D0  /* auto */
/*224*/ virtual BOOL v_sub_509230(int32_t, int32_t);  // = 00509230  /* auto */
/*228*/ virtual int32_t v_sub_509260(int32_t, int32_t, __int16);  // = 00509260  /* auto */
/*22C*/ virtual int32_t v_sub_509280(int32_t, int32_t, int32_t, int32_t);  // = 00509280  /* auto */
/*230*/ virtual int32_t v_sub_509310(int32_t, int32_t, int32_t, int32_t);  // = 00509310  /* auto */
/*234*/ virtual int32_t v_sub_509340(int32_t, int32_t, int32_t, int32_t);  // = 00509340  /* auto */
/*238*/ virtual int32_t v_sub_509370(int32_t, int32_t, __int16, int32_t);  // = 00509370  /* auto */
/*23C*/ virtual int32_t v_sub_5093A0(int32_t, int32_t, int32_t);  // = 005093A0  /* auto */
/*240*/ virtual int32_t v_sub_5093C0(int32_t, int32_t);  // = 005093C0  /* auto */
/*244*/ virtual int32_t v_sub_5093E0(int32_t, int32_t, __int16, int32_t);  // = 005093E0  /* auto */
/*248*/ virtual int32_t v_sub_509410(int32_t, int32_t, int32_t);  // = 00509410  /* auto */
/*24C*/ virtual int32_t v_sub_509430(int32_t, int32_t, __int16);  // = 00509430  /* auto */
/*250*/ virtual int32_t v_fun_5177B0(int32_t);  // = 005177B0  /* auto */
/*254*/ virtual int32_t v_fun_50E530(int32_t, int32_t, int32_t, int32_t);  // = 0050E530  /* auto */
/*258*/ virtual int32_t v_fun_50E560(int32_t, int32_t, int32_t, int32_t);  // = 0050E560  /* auto */
/*25C*/ virtual int32_t v_fun_50E590(int32_t, int32_t, int32_t, int32_t);  // = 0050E590  /* auto */
/*260*/ virtual int32_t v_getCTag_508C40(MyProfiler *);  // = 00508C40  /* auto */
/*264*/ virtual int16_t v_loc_508C60();  // = 00508C60  --  /* auto */
/*268*/ virtual void v_nullsub_10(int32_t, int32_t);  // = 00580470  /* auto */
/*26C*/ virtual BOOL v_sub_5094B0(int32_t);  // = 005094B0  /* auto */
/*270*/ virtual int32_t v_sub_5094D0(int32_t);  // = 005094D0  /* auto */
/*274*/ virtual int32_t v_sub_5094F0(int32_t, int32_t, int32_t);  // = 005094F0  /* auto */
/*278*/ virtual int32_t v_fun_50E420(int32_t, __int16);  // = 0050E420  /* auto */
/*27C*/ virtual BOOL v_fun_510700(int32_t);  // = 00510700  /* auto */
/*280*/ virtual int32_t v_sub_5095B0(__int16);  // = 005095B0  /* auto */
/*284*/ virtual int32_t v_sub_5095D0(int32_t);  // = 005095D0  /* auto */
/*288*/ virtual int32_t v_sub_5095F0(int8_t);  // = 005095F0  /* auto */
/*28C*/ virtual int32_t v_sub_509610(int32_t);  // = 00509610  /* auto */
/*290*/ virtual const char *v_fun_50F830(int16_t, int32_t);  // = 0050F830  /* auto */
/*294*/ virtual void v_nullsub_23(int32_t, int32_t, int32_t);  // = 00510E60  /* auto */
/*298*/ virtual int32_t v_fun_50F880(int32_t);  // = 0050F880  /* auto */
/*29C*/ virtual const char *v_sub_509530();  // = 00509530  /* auto */
/*2A0*/ virtual int32_t v_sub_5097A0(int32_t);  // = 005097A0  /* auto */
/*2A4*/ virtual int32_t v_sub_5097B0(int32_t, int32_t);  // = 005097B0  /* auto */
/*2A8*/ virtual int32_t *v_sub_5097D0(int32_t *);  // = 005097D0  /* auto */
/*2AC*/ virtual int32_t v_sub_5097F0(int32_t);  // = 005097F0  /* auto */
/*2B0*/ virtual int32_t v_sub_509800(int32_t, int32_t);  // = 00509800  /* auto */
/*2B4*/ virtual int32_t v_sub_509540(int32_t);  // = 00509540  /* auto */
/*2B8*/ virtual int32_t v_fun_505250(int32_t);  // = 00505250  /* auto */
/*2BC*/ virtual char v_sub_509560();  // = 00509560  -----  /* auto */
/*2C0*/ virtual char v_sub_509570();  // = 00509570  -----  /* auto */
/*2C4*/ virtual int32_t v_fun_510000(int32_t, int32_t);  // = 00510000  /* auto */
/*2C8*/ virtual const void **v_fun_50FAE0(char);  // = 0050FAE0  /* auto */
/*2CC*/ virtual const void **v_fun_50FB10(char);  // = 0050FB10  /* auto */
/*2D0*/ virtual int32_t v_fun_628E30(int32_t);  // = 00628E30  /* auto */
/*2D4*/ virtual int32_t v_sub_509690(int32_t);  // = 00509690  /* auto */
/*2D8*/ virtual int32_t v_fun_5101C0(int32_t, int32_t);  // = 005101C0  /* auto */
/*2DC*/ virtual BOOL v_fun_510210(int32_t);  // = 00510210  /* auto */
/*2E0*/ virtual int32_t *v_fun_510230(int32_t *, int32_t);  // = 00510230  /* auto */
/*2E4*/ virtual int32_t v_sub_5098D0();  // = 005098D0  --  /* auto */
/*2E8*/ virtual char v_sub_509680();  // = 00509680  -----  /* auto */
/*2EC*/ virtual int32_t v_sub_5096A0(int32_t);  // = 005096A0  /* auto */
/*2F0*/ virtual const void *v_duplicate_187_1();  // = 005096A0  /* auto */
/*2F4*/ virtual const char *v_sub_5096C0(int32_t, __int16, char);  // = 005096C0  /* auto */
/*2F8*/ virtual BOOL v_sub_5096F0();  // = 005096F0  -----  /* auto */
/*2FC*/ virtual const char *v_sub_509700();  // = 00509700  /* auto */
/*300*/ virtual int32_t v_sub_509710();  // = 00509710  --  /* auto */
/*304*/ virtual const char *v_sub_509730();  // = 00509730  /* auto */
/*308*/ virtual int32_t v_sub_509750(int32_t, int32_t, int32_t);  // = 00509750  /* auto */
/*30C*/ virtual int32_t v_sub_509780(int32_t *, int32_t *, int32_t);  // = 00509780  /* auto */
/*310*/ virtual const void *v_loc_508D60();  // = 00508D60  /* auto */
/*314*/ virtual const void *v_loc_508D70();  // = 00508D70  /* auto */
/*318*/ virtual const void *v_loc_508D80();  // = 00508D80  /* auto */
/*31C*/ virtual const void *v_loc_508D90();  // = 00508D90  /* auto */
/*320*/ virtual const void *v_duplicate_154_1();  // = 00580470  /* auto */
/*324*/ virtual const char *v_sub_509830();  // = 00509830  /* auto */
/*328*/ virtual const void *v_loc_508DA0();  // = 00508DA0  /* auto */
/*32C*/ virtual const void *v_loc_508DB0();  // = 00508DB0  /* auto */
/*330*/ virtual int32_t v_sub_509740();  // = 00509740  --  /* auto */
/*334*/ virtual __int16 v_fun_515420(int32_t, int32_t *, int32_t);  // = 00515420  /* auto */
/*338*/ virtual __int16 v_fun_515520(int32_t, int32_t *, int16_t *, int32_t);  // = 00515520  /* auto */
/*33C*/ virtual __int16 v_fun_515D50(int32_t, int32_t *, int16_t *);  // = 00515D50  /* auto */
/*340*/ virtual int32_t v_sub_509650();  // = 00509650  --  /* auto */
/*344*/ virtual int32_t v_fun_511650(int32_t);  // = 00511650  /* auto */
/*348*/ virtual int32_t v_sub_509670();  // = 00509670  --  /* auto */
/*34C*/ virtual int32_t v_sub_509660();  // = 00509660  --  /* auto */
/*350*/ virtual char v_fun_510E20();  // = 00510E20  -----  /* auto */
/*354*/ virtual int32_t v_sub_509840();  // = 00509840  --  /* auto */
/*358*/ virtual BOOL v_fun_511610();  // = 00511610  -----  /* auto */
/*35C*/ virtual int32_t v_fun_511630(int32_t);  // = 00511630  /* auto */
/*360*/ virtual int32_t v_fun_511640();  // = 00511640  --  /* auto */
/*364*/ virtual __int16 v_sub_509870();  // = 00509870  --  /* auto */
/*368*/ virtual __int16 v_sub_509880(__int16);  // = 00509880  /* auto */
/*36C*/ virtual int32_t v_sub_509890();  // = 00509890  --  /* auto */
/*370*/ virtual int32_t v_sub_5098A0(int32_t);  // = 005098A0  /* auto */
/*374*/ virtual char v_sub_5098B0();  // = 005098B0  -----  /* auto */
/*378*/ virtual char v_sub_5098C0(char);  // = 005098C0  -  /* auto */
/*37C*/ virtual int32_t v_fun_50E920(int32_t);  // = 0050E920  /* auto */
/*380*/ virtual BOOL v_sub_509160(int32_t, int32_t);  // = 00509160  /* auto */
/*384*/ virtual int32_t v_sub_5092B0(int32_t, int32_t, __int16);  // = 005092B0  /* auto */
/*388*/ virtual int32_t v_fun_50E490(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0050E490  /* auto */
/*38C*/ virtual int32_t v_sub_509580(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 00509580  /* auto */
/*390*/ virtual int32_t v_fun_50E4D0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0050E4D0  /* auto */
/*394*/ virtual int32_t v_fun_50E510(int32_t);  // = 0050E510  /* auto */
// -------------------------------------------------------  /* auto */
/*00504F00*/ __int16 sub_504F00();  // -------------------  /* auto */
/*00504FB0*/ __int16 sub_504FB0(int32_t);  // ------------  /* auto */
/*00508A10*/ CWorld *constructor();  // ------------------  /* auto */
/*00508C10*/ BOOL fun_508C10(int32_t);  // ---------------  /* auto */
/*00508C60*/ __int16 fun_508C60();  // -------------------  /* auto */
/*00509740*/ int32_t fun_509740();  // -------------------  /* auto */
/*005099A0*/ int32_t create_objects();  // ---------------  /* auto */
/*0050A2F0*/ char remove_objects();  // ------------------  /* auto */
/*0050A450*/ int32_t tick(GameActionCtx *);  // ----------  /* auto */
/*0050AA60*/ int32_t sub_50AA60(int32_t *);  // ----------  /* auto */
/*0050ADE0*/ int32_t probably_start_editor(int32_t *);      /* auto */
/*0050E920*/ int32_t fun_50E920(int32_t);  // ------------  /* auto */
/*0050FD10*/ int32_t fun_50FD10(int32_t);  // ------------  /* auto */
/*0050FD70*/ int32_t fun_50FD70(const char *);  // -------  /* auto */
/*00510E90*/ int16_t fun_510E90(GameAction *, int32_t);     /* auto */
/*00510F90*/ int32_t handleAction(GameAction *);  // -----  /* auto */
/*00511280*/ int32_t sub_511280();  // -------------------  /* auto */
/*00512940*/ int32_t GameActionHandler_N7D(GameAction *);   /* auto */
/*005129A0*/ int32_t GameActionHandler_N28(__int16 *);      /* auto */
/*005129E0*/ int32_t GameActionHandler_N29(__int16 *);      /* auto */
/*00512A20*/ int32_t sub_512A20(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00512D20*/ int32_t sub_512D20(int32_t, int32_t, int32_t);  /* auto */
/*00513870*/ int32_t GameActionHandler_N66__editor_load_level(int32_t);  /* auto */
/*00516EC0*/ int32_t GameActionHandler_N1C(int32_t);  // -  /* auto */
/*00517480*/ int32_t sub_517480(int32_t);  // ------------  /* auto */
/*00517490*/ int32_t getWorldFrameIdx();  // -------------  /* auto */
/*0051A890*/ BOOL sub_51A890(int32_t *);  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CWorld) == 0xA3C3);  // -------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_WORLD_H  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
