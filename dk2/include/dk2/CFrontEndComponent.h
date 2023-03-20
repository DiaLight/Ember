// -----------------  id: vtbl_0066EF3C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_FRONT_END_COMPONENT_H  // ----------------------  /* auto */
#define C_FRONT_END_COMPONENT_H  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/AABB.h>  // --------------------------------  /* auto */
#include <dk2/CComponent.h>  // --------------------------  /* auto */
#include <dk2/CGuiManager.h>  // -------------------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
#include <dk2/MyDdSurfaceEx.h>  // -----------------------  /* auto */
#include <dk2/MyStaticStruct.h>  // ----------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
#include <dk2/StaticListeners.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CBridge;  // ------------------------------------  /* auto */
  struct CButton;  // ------------------------------------  /* auto */
  struct CFrontEndComponent;  // -------------------------  /* auto */
  struct CWindow;  // ------------------------------------  /* auto */
  struct MyStringTexture;  // ----------------------------  /* auto */
  struct NameCfg;  // ------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CFrontEndComponent : CComponent {  // -------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  C*/ int32_t fC;  // ----------------------------------  /* auto */
/* 10*/ int32_t f10;  // ---------------------------------  /* auto */
/* 14*/ int8_t gap_14[942];  // --------------------------  /* auto */
/*3C2*/ int16_t f3C2;  // --------------------------------  /* auto */
/*3C4*/ int8_t gap_3C4[14];  // --------------------------  /* auto */
/*3D2*/ int32_t f3D2;  // --------------------------------  /* auto */
/*3D6*/ int32_t f3D6;  // --------------------------------  /* auto */
/*3DA*/ MySurface f3DA;  // ------------------------------  /* auto */
/*402*/ int8_t gap_402[101];  // -------------------------  /* auto */
/*467*/ int32_t timestampMs;  // -------------------------  /* auto */
/*46B*/ int32_t f46B;  // --------------------------------  /* auto */
/*46F*/ int32_t f46F;  // --------------------------------  /* auto */
/*473*/ int32_t f473;  // --------------------------------  /* auto */
/*477*/ int8_t gap_477[8];  // ---------------------------  /* auto */
/*47F*/ int32_t f47F;  // --------------------------------  /* auto */
/*483*/ int8_t gap_483[9276];  // ------------------------  /* auto */
/*28BF*/ MySurface field_28BF_x36[36];  // ---------------  /* auto */
/*2E5F*/ int8_t gap2E5F[260];  // ------------------------  /* auto */
/*2F63*/ MySurface field_2F63_x9[9];  // -----------------  /* auto */
/*30CB*/ MySurface f30CB;  // ----------------------------  /* auto */
/*30F3*/ MySurface f30F3;  // ----------------------------  /* auto */
/*311B*/ int8_t gap_311B[145];  // -----------------------  /* auto */
/*31AC*/ MySurface f31AC[20];  // ------------------------  /* auto */
/*34CC*/ MySurface f34CC[4];  // -------------------------  /* auto */
/*356C*/ MySurface f356C[4];  // -------------------------  /* auto */
/*360C*/ MySurface surf[23];  // -------------------------  /* auto */
/*39A4*/ MySurface surf_39A4[23];  // --------------------  /* auto */
/*3D3C*/ AABB aabb0_x23[23];  // -------------------------  /* auto */
/*3EAC*/ MySurface surf1;  // ----------------------------  /* auto */
/*3ED4*/ MySurface surf2;  // ----------------------------  /* auto */
/*3EFC*/ int32_t f3EFC;  // ------------------------------  /* auto */
/*3F00*/ int32_t f3F00;  // ------------------------------  /* auto */
/*3F04*/ int32_t f3F04;  // ------------------------------  /* auto */
/*3F08*/ int32_t f3F08;  // ------------------------------  /* auto */
/*3F0C*/ MySurface surf3;  // ----------------------------  /* auto */
/*3F34*/ MySurface surf4;  // ----------------------------  /* auto */
/*3F5C*/ int32_t f3F5C;  // ------------------------------  /* auto */
/*3F60*/ int32_t f3F60;  // ------------------------------  /* auto */
/*3F64*/ int32_t f3F64;  // ------------------------------  /* auto */
/*3F68*/ int32_t f3F68;  // ------------------------------  /* auto */
/*3F6C*/ int8_t gap_3F6C[64];  // ------------------------  /* auto */
/*3FAC*/ MySurface surf5;  // ----------------------------  /* auto */
/*3FD4*/ MySurface surf6;  // ----------------------------  /* auto */
/*3FFC*/ int8_t gap_3FFC[384];  // -----------------------  /* auto */
/*417C*/ MySurface surf7_x3[3];  // ----------------------  /* auto */
/*41F4*/ MySurface surf8_x3[3];  // ----------------------  /* auto */
/*426C*/ MySurface surf9_x3[3];  // ----------------------  /* auto */
/*42E4*/ MySurface surf10_x3[3];  // ---------------------  /* auto */
/*435C*/ MySurface surf11;  // ---------------------------  /* auto */
/*4384*/ MySurface surf12;  // ---------------------------  /* auto */
/*43AC*/ MySurface surf13;  // ---------------------------  /* auto */
/*43D4*/ int8_t gap_43D4[16];  // ------------------------  /* auto */
/*43E4*/ char f43E4;  // ---------------------------------  /* auto */
/*43E5*/ int8_t gap_43E5[15];  // ------------------------  /* auto */
/*43F4*/ int32_t f43F4;  // ------------------------------  /* auto */
/*43F8*/ int32_t f43F8;  // ------------------------------  /* auto */
/*43FC*/ MySurface surf14;  // ---------------------------  /* auto */
/*4424*/ MySurface surf15;  // ---------------------------  /* auto */
/*444C*/ MySurface surf16;  // ---------------------------  /* auto */
/*4474*/ MySurface surf17;  // ---------------------------  /* auto */
/*449C*/ MySurface surf18_x5[5];  // ---------------------  /* auto */
/*4564*/ MySurface surf19_x5[5];  // ---------------------  /* auto */
/*462C*/ MySurface surf20_x5[5];  // ---------------------  /* auto */
/*46F4*/ AABB aabb1_x5[5];  // ---------------------------  /* auto */
/*4744*/ AABB aabb2_x5[5];  // ---------------------------  /* auto */
/*4794*/ AABB aabb3_x5[5];  // ---------------------------  /* auto */
/*47E4*/ MySurface surf21;  // ---------------------------  /* auto */
/*480C*/ MySurface surf22;  // ---------------------------  /* auto */
/*4834*/ MySurface surf23;  // ---------------------------  /* auto */
/*485C*/ int8_t gap_485C[16];  // ------------------------  /* auto */
/*486C*/ char f486C;  // ---------------------------------  /* auto */
/*486D*/ int8_t gap_486D[15];  // ------------------------  /* auto */
/*487C*/ int32_t f487C;  // ------------------------------  /* auto */
/*4880*/ int32_t f4880;  // ------------------------------  /* auto */
/*4884*/ MySurface surf24;  // ---------------------------  /* auto */
/*48AC*/ MySurface surf25;  // ---------------------------  /* auto */
/*48D4*/ MySurface surf26;  // ---------------------------  /* auto */
/*48FC*/ MySurface surf27;  // ---------------------------  /* auto */
/*4924*/ MySurface surf28_x5[5];  // ---------------------  /* auto */
/*49EC*/ MySurface surf29_x5[5];  // ---------------------  /* auto */
/*4AB4*/ MySurface surf30_x5[5];  // ---------------------  /* auto */
/*4B7C*/ AABB aabb4_x5[5];  // ---------------------------  /* auto */
/*4BCC*/ AABB aabb5_x5[5];  // ---------------------------  /* auto */
/*4C1C*/ AABB aabb6_x5[5];  // ---------------------------  /* auto */
/*4C6C*/ MySurface surf31;  // ---------------------------  /* auto */
/*4C94*/ int8_t gap_4C94[16];  // ------------------------  /* auto */
/*4CA4*/ char f4CA4;  // ---------------------------------  /* auto */
/*4CA5*/ int8_t gap_4CA5[15];  // ------------------------  /* auto */
/*4CB4*/ int32_t f4CB4;  // ------------------------------  /* auto */
/*4CB8*/ int32_t f4CB8;  // ------------------------------  /* auto */
/*4CBC*/ MySurface surf32;  // ---------------------------  /* auto */
/*4CE4*/ MySurface surf33;  // ---------------------------  /* auto */
/*4D0C*/ MySurface surf34_x5[5];  // ---------------------  /* auto */
/*4DD4*/ AABB aabb7_x5[5];  // ---------------------------  /* auto */
/*4E24*/ MySurface surf35;  // ---------------------------  /* auto */
/*4E4C*/ MySurface surf36;  // ---------------------------  /* auto */
/*4E74*/ MySurface surf37;  // ---------------------------  /* auto */
/*4E9C*/ int8_t gap_4E9C[16];  // ------------------------  /* auto */
/*4EAC*/ char f4EAC;  // ---------------------------------  /* auto */
/*4EAD*/ int8_t gap_4EAD[15];  // ------------------------  /* auto */
/*4EBC*/ int32_t f4EBC;  // ------------------------------  /* auto */
/*4EC0*/ int32_t f4EC0;  // ------------------------------  /* auto */
/*4EC4*/ MySurface surf38;  // ---------------------------  /* auto */
/*4EEC*/ MySurface surf39;  // ---------------------------  /* auto */
/*4F14*/ MySurface surf40;  // ---------------------------  /* auto */
/*4F3C*/ MySurface surf41;  // ---------------------------  /* auto */
/*4F64*/ MySurface surf42_x5[5];  // ---------------------  /* auto */
/*502C*/ MySurface surf43_x5[5];  // ---------------------  /* auto */
/*50F4*/ MySurface surf44_x5[5];  // ---------------------  /* auto */
/*51BC*/ AABB aabb8_x5[5];  // ---------------------------  /* auto */
/*520C*/ AABB aabb9_x5[5];  // ---------------------------  /* auto */
/*525C*/ AABB aabb10_x5[5];  // --------------------------  /* auto */
/*52AC*/ MySurface surf45;  // ---------------------------  /* auto */
/*52D4*/ int8_t gap_52D4[16];  // ------------------------  /* auto */
/*52E4*/ char f52E4;  // ---------------------------------  /* auto */
/*52E5*/ int8_t gap_52E5[15];  // ------------------------  /* auto */
/*52F4*/ int32_t f52F4;  // ------------------------------  /* auto */
/*52F8*/ int32_t f52F8;  // ------------------------------  /* auto */
/*52FC*/ MySurface surf46;  // ---------------------------  /* auto */
/*5324*/ MySurface surf47;  // ---------------------------  /* auto */
/*534C*/ MySurface surf48_x5[5];  // ---------------------  /* auto */
/*5414*/ AABB aabb11_x5[5];  // --------------------------  /* auto */
/*5464*/ MySurface surf49;  // ---------------------------  /* auto */
/*548C*/ MySurface surf50;  // ---------------------------  /* auto */
/*54B4*/ MySurface surf51_x5[5];  // ---------------------  /* auto */
/*557C*/ AABB aabb12_x5[5];  // --------------------------  /* auto */
/*55CC*/ MySurface surf52;  // ---------------------------  /* auto */
/*55F4*/ MySurface surf53;  // ---------------------------  /* auto */
/*561C*/ MySurface surf54_x5[5];  // ---------------------  /* auto */
/*56E4*/ AABB aabb13_x5[5];  // --------------------------  /* auto */
/*5734*/ MySurface surf55;  // ---------------------------  /* auto */
/*575C*/ MySurface surf56;  // ---------------------------  /* auto */
/*5784*/ MySurface surf57_x5[5];  // ---------------------  /* auto */
/*584C*/ AABB aabb14_x5[5];  // --------------------------  /* auto */
/*589C*/ MyDdSurfaceEx surf_2;  // -----------------------  /* auto */
/*58EC*/ int32_t f58EC;  // ------------------------------  /* auto */
/*58F0*/ MyDdSurfaceEx surf_1;  // -----------------------  /* auto */
/*5940*/ int32_t f5940;  // ------------------------------  /* auto */
/*5944*/ int32_t f5944;  // ------------------------------  /* auto */
/*5948*/ int8_t gap_5948[369];  // -----------------------  /* auto */
/*5AB9*/ int32_t f5AB9;  // ------------------------------  /* auto */
/*5ABD*/ int8_t gap5ABD[75];  // -------------------------  /* auto */
/*5B08*/ char f5B08;  // ---------------------------------  /* auto */
/*5B09*/ int8_t arr_x16x30[16][30];  // ------------------  /* auto */
/*5CE9*/ int8_t f5CE9;  // -------------------------------  /* auto */
/*5CEA*/ int8_t gap_5CEA[8];  // -------------------------  /* auto */
/*5CF2*/ CWorldEntry cwolrd_entry_x24[24];  // -----------  /* auto */
/*5F7A*/ int8_t gap5F7A[122];  // ------------------------  /* auto */
/*5FF4*/ char f5FF4;  // ---------------------------------  /* auto */
/*5FF5*/ char f5FF5;  // ---------------------------------  /* auto */
/*5FF6*/ char f5FF6;  // ---------------------------------  /* auto */
/*5FF7*/ char f5FF7;  // ---------------------------------  /* auto */
/*5FF8*/ char f5FF8;  // ---------------------------------  /* auto */
/*5FF9*/ int32_t f5FF9;  // ------------------------------  /* auto */
/*5FFD*/ int32_t f5FFD;  // ------------------------------  /* auto */
/*6001*/ int32_t f6001;  // ------------------------------  /* auto */
/*6005*/ int32_t f6005;  // ------------------------------  /* auto */
/*6009*/ int32_t f6009;  // ------------------------------  /* auto */
/*600D*/ int32_t f600D;  // ------------------------------  /* auto */
/*6011*/ int32_t f6011;  // ------------------------------  /* auto */
/*6015*/ int8_t gap_6015[13];  // ------------------------  /* auto */
/*6022*/ int32_t key_DIK_SYSRQ;  // ----------------------  /* auto */
/*6026*/ int8_t gap_6026[22];  // ------------------------  /* auto */
/*603C*/ MySurface surf60_x8[8];  // ---------------------  /* auto */
/*617C*/ MySurface f617C;  // ----------------------------  /* auto */
/*61A4*/ int8_t gap_61A4[336];  // -----------------------  /* auto */
/*62F4*/ AABB aabb15_x8[8];  // --------------------------  /* auto */
/*6374*/ int8_t gap_6374[668];  // -----------------------  /* auto */
/*6610*/ int8_t f6610;  // -------------------------------  /* auto */
/*6611*/ MySurface surf61_x3_applyBtn[3];  // ------------  /* auto */
/*6689*/ MySurface surf62_x3_exitBtn[3];  // -------------  /* auto */
/*6701*/ int8_t gap_6701[4];  // -------------------------  /* auto */
/*6705*/ int8_t f6705;  // -------------------------------  /* auto */
/*6706*/ int8_t f6706;  // -------------------------------  /* auto */
/*6707*/ int8_t f6707;  // -------------------------------  /* auto */
/*6708*/ int8_t f6708;  // -------------------------------  /* auto */
/*6709*/ int8_t gap_6709[2];  // -------------------------  /* auto */
/*670B*/ int8_t f670B;  // -------------------------------  /* auto */
/*670C*/ int8_t f670C;  // -------------------------------  /* auto */
/*670D*/ int8_t f670D;  // -------------------------------  /* auto */
/*670E*/ int8_t gap_670E[19];  // ------------------------  /* auto */
/*6721*/ char f6721;  // ---------------------------------  /* auto */
/*6722*/ int8_t gap_6722[15];  // ------------------------  /* auto */
/*6731*/ int32_t f6731;  // ------------------------------  /* auto */
/*6735*/ int32_t f6735;  // ------------------------------  /* auto */
/*6739*/ MySurface surf63;  // ---------------------------  /* auto */
/*6761*/ AABB aabb16_x16x30x6[16][30][6];  // ------------  /* auto */
/*11B61*/ MySurface surf64_x16x30x6[16][30][6];  // ------  /* auto */
/*2DD61*/ int32_t cglow_obj_start;  // -------------------  /* auto */
/*2DD65*/ MySurface surf65_btnRenderOut;  // -------------  /* auto */
/*2DD8D*/ MySurface surf66_x16[16];  // ------------------  /* auto */
/*2E00D*/ AABB aabb17_x16x30[16][30];  // ----------------  /* auto */
/*2FE0D*/ int8_t gap2FE0D[1292];  // ---------------------  /* auto */
/*30319*/ char f30319;  // -------------------------------  /* auto */
/*3031A*/ char f3031A;  // -------------------------------  /* auto */
/*3031B*/ char f3031B;  // -------------------------------  /* auto */
/*3031C*/ char f3031C;  // -------------------------------  /* auto */
/*3031D*/ char f3031D;  // -------------------------------  /* auto */
/*3031E*/ char fontMask;  // -----------------------------  /* auto */
/*3031F*/ char f3031F;  // -------------------------------  /* auto */
/*30320*/ char f30320;  // -------------------------------  /* auto */
/*30321*/ char f30321;  // -------------------------------  /* auto */
/*30322*/ char f30322;  // -------------------------------  /* auto */
/*30323*/ char f30323;  // -------------------------------  /* auto */
/*30324*/ char f30324;  // -------------------------------  /* auto */
/*30325*/ char f30325;  // -------------------------------  /* auto */
/*30326*/ char f30326;  // -------------------------------  /* auto */
/*30327*/ char f30327;  // -------------------------------  /* auto */
/*30328*/ char f30328;  // -------------------------------  /* auto */
/*30329*/ char f30329;  // -------------------------------  /* auto */
/*3032A*/ char f3032A;  // -------------------------------  /* auto */
/*3032B*/ char f3032B;  // -------------------------------  /* auto */
/*3032C*/ char f3032C;  // -------------------------------  /* auto */
/*3032D*/ char f3032D;  // -------------------------------  /* auto */
/*3032E*/ char f3032E;  // -------------------------------  /* auto */
/*3032F*/ char f3032F;  // -------------------------------  /* auto */
/*30330*/ char f30330;  // -------------------------------  /* auto */
/*30331*/ char f30331;  // -------------------------------  /* auto */
/*30332*/ char f30332;  // -------------------------------  /* auto */
/*30333*/ char f30333;  // -------------------------------  /* auto */
/*30334*/ char f30334;  // -------------------------------  /* auto */
/*30335*/ char f30335;  // -------------------------------  /* auto */
/*30336*/ char f30336;  // -------------------------------  /* auto */
/*30337*/ char f30337;  // -------------------------------  /* auto */
/*30338*/ char f30338;  // -------------------------------  /* auto */
/*30339*/ char f30339;  // -------------------------------  /* auto */
/*3033A*/ char f3033A;  // -------------------------------  /* auto */
/*3033B*/ char f3033B;  // -------------------------------  /* auto */
/*3033C*/ int8_t gap_3033C[8];  // -----------------------  /* auto */
/*30344*/ char f30344;  // -------------------------------  /* auto */
/*30345*/ int8_t gap30345[3];  // ------------------------  /* auto */
/*30348*/ int8_t gap_30348[1326];  // --------------------  /* auto */
/*30876*/ int32_t f30876;  // ----------------------------  /* auto */
/*3087A*/ int8_t gap_3087A[876];  // ---------------------  /* auto */
/*30BE6*/ MySurface surf67;  // --------------------------  /* auto */
/*30C0E*/ int8_t gap_30C0E[8];  // -----------------------  /* auto */
/*30C16*/ int32_t _idx_2b;  // ---------------------------  /* auto */
/*30C1A*/ int32_t f30C1A;  // ----------------------------  /* auto */
/*30C1E*/ int8_t f30C1E;  // -----------------------------  /* auto */
/*30C1F*/ int8_t gap_30C1F[4];  // -----------------------  /* auto */
/*30C23*/ int32_t f30C23;  // ----------------------------  /* auto */
/*30C27*/ int32_t f30C27;  // ----------------------------  /* auto */
/*30C2B*/ int8_t gap_30C2B[236];  // ---------------------  /* auto */
/*30D17*/ int32_t f30D17;  // ----------------------------  /* auto */
/*30D1B*/ int8_t gap_30D1B[37];  // ----------------------  /* auto */
/*30D40*/ int32_t f30D40;  // ----------------------------  /* auto */
/*30D44*/ int8_t gap_30D44[80];  // ----------------------  /* auto */
/*30D94*/ MySurface surf68;  // --------------------------  /* auto */
/*30DBC*/ int8_t gap_30DBC[4];  // -----------------------  /* auto */
/*30DC0*/ int32_t f30DC0;  // ----------------------------  /* auto */
/*30DC4*/ int8_t gap_30DC4[164];  // ---------------------  /* auto */
/*30E68*/ int32_t f30E68;  // ----------------------------  /* auto */
/*30E6C*/ int8_t gap_30E6C[176];  // ---------------------  /* auto */
/*30F1C*/ StaticListeners static_listeners;  // ----------  /* auto */
/*30F30*/ MyStaticStruct field_obj_start;  // ------------  /* auto */
/*30F3C*/ int32_t f30F3C;  // ----------------------------  /* auto */
/*30F40*/ int32_t f30F40;  // ----------------------------  /* auto */
/*30F44*/ CGuiManager cgui_manager;  // ------------------  /* auto */
/*31128*/ int8_t gap31128[4];  // ------------------------  /* auto */
/*3112C*/ int32_t obj_start;  // -------------------------  /* auto */
/*31130*/ int8_t gap_31130[20];  // ----------------------  /* auto */
/*31144*/ char resolutionId;  // -------------------------  /* auto */
/*31145*/ int8_t gap31145[61];  // -----------------------  /* auto */
/*31182*/ int32_t f31182;  // ----------------------------  /* auto */
/*31186*/ int8_t gap_31186[68];  // ----------------------  /* auto */
/*311CA*/ MySurface surf69;  // --------------------------  /* auto */
/*311F2*/ int32_t f311F2;  // ----------------------------  /* auto */
/*311F6*/ int32_t f311F6;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066EF3C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CComponent  -----------------------------  /* auto */
/*  0*/ // virtual int32_t *v_deleting_destructor(char);  // = 0052EF50  /* auto */
/*  4*/ // virtual int32_t v_f4_();  // = 0052EFE0  ------  /* auto */
/*  8*/ // virtual void *v_f8_();  // = 00401200  --------  /* auto */
/*  C*/ // virtual int32_t v_handle();  // = 0052F140  ---  /* auto */
/* 10*/ // virtual int32_t *v_f10_();  // = 0052F550  ----  /* auto */
/* 14*/ // virtual void ***v_mainGuiLoop();  // = 0052F9E0  /* auto */
/*---*/ // CFrontEndComponent  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0052E500*/ CFrontEndComponent *constructor();  // ------  /* auto */
/*0052EF70*/ void destructor();  // ----------------------  /* auto */
/*0052EFE0*/ int32_t fun_52EFE0();  // -------------------  /* auto */
/*0052F140*/ void launchGame();  // ----------------------  /* auto */
/*0052F9E0*/ int32_t maybe_update_textures();  // --------  /* auto */
/*0052FF00*/ int32_t draw2dGui();  // --------------------  /* auto */
/*00532170*/ CButton *findBtnBySomeId(int32_t, int32_t);    /* auto */
/*005322D0*/ CWindow *getCurrentWindow();  // ------------  /* auto */
/*005334C0*/ int32_t draw2dGui_0();  // ------------------  /* auto */
/*00533570*/ char bakeButton(int32_t, int8_t, int32_t);     /* auto */
/*00533E90*/ int32_t sub_533E90();  // -------------------  /* auto */
/*005340F0*/ void showTitleScreen();  // -----------------  /* auto */
/*00534210*/ int32_t load();  // -------------------------  /* auto */
/*00535950*/ CBridge *sub_535950(CBridge *);  // ---------  /* auto */
/*00535A30*/ NameCfg *sub_535A30();  // ------------------  /* auto */
/*00536370*/ char sub_536370(MyStringTexture *);  // -----  /* auto */
/*00536850*/ int32_t sub_536850();  // -------------------  /* auto */
/*00536E20*/ char sub_536E20(int32_t, int32_t);  // ------  /* auto */
/*00539E00*/ char saveAddressBookWinsock(char);  // ------  /* auto */
/*0053BFD0*/ int32_t showIntro();  // --------------------  /* auto */
/*005478B0*/ CButton *sub_5478B0();  // ------------------  /* auto */
/*00547B20*/ int32_t sub_547B20();  // -------------------  /* auto */
/*0054DB20*/ bool fun_54DB20();  // ----------------------  /* auto */
/*00552C70*/ int32_t fun_552C70();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CFrontEndComponent) == 0x311FA);       /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_FRONT_END_COMPONENT_H  ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
