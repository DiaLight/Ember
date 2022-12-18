//
// Created by DiaLight on 07.09.2022.
//

#ifndef EMBER_CFRONTENDCOMPONENT_H
#define EMBER_CFRONTENDCOMPONENT_H

#include <dk2/utils.h>
#include <dk2/StaticListeners.h>
#include <dk2/frontend_common.h>

namespace dk2 {

#pragma pack(push, 1)
  struct CWorldEntry {
    int field_0;
    int field_4;
    int field_8;
    __int16 field_C;
    char field_E;
    DWORD field_F;
    DWORD field_13;
    int field_17;
  };
#pragma pack(pop)

#pragma pack(push, 1)
  class CFrontEndComponent : public CComponent {

    /*0070D6D8*/ static CFrontEndComponent instance;
  public:
    struct vtbl_t {
      void (__fastcall *scalar_deleting_destructor)(void *_this, void *edx, bool del);
      int (__fastcall *fun_52EFE0)(void *_this, void *edx);
      void (__fastcall *nullsub_1)(void *_this, void *edx);
      int (__fastcall *launchGame)(void *_this, void *edx);
      int *(__fastcall *fun_52F550)(void *_this, void *edx);
      int (__fastcall *maybe_update_textures)(void *_this, void *edx);
    };
    inline static CFrontEndComponent *getInstance() { return (CFrontEndComponent *) funptr<&instance>(); }
    virtual ~CFrontEndComponent();

    DWORD field_C;
    DWORD field_10;
    BYTE gap_14[942];
    WORD field_3C2;
    BYTE gap_3C4[14];
    int field_3D2;
    int field_3D6;
    MySurface field_3DA;
    BYTE gap_402[101];
    int f467_timestampMs;
    int field_46B;
    int field_46F;
    int field_473;
    BYTE gap_477[8];
    DWORD field_47F;
    BYTE gap_483[9276];
    MySurface field_28BF_x36[36];
    BYTE gap2E5F[260];
    MySurface field_2F63_x9[9];
    MySurface field_30CB;
    MySurface field_30F3;
    BYTE gap_311B[145];
    MySurface field_31AC[20];
    MySurface field_34CC[4];
    MySurface field_356C[4];
    MySurface f360C_surf[23];
    MySurface f39A4_surf[23];
    AABB f3D3C_aabb0_x23[23];
    MySurface surf1;
    MySurface surf2;
    int field_3EFC;
    int field_3F00;
    int field_3F04;
    int field_3F08;
    MySurface surf3;
    MySurface surf4;
    int field_3F5C;
    int field_3F60;
    int field_3F64;
    int field_3F68;
    BYTE gap_3F6C[64];
    MySurface surf5;
    MySurface surf6;
    BYTE gap_3FFC[384];
    MySurface surf7_x3[3];
    MySurface surf8_x3[3];
    MySurface surf9_x3[3];
    MySurface surf10_x3[3];
    MySurface surf11;
    MySurface surf12;
    MySurface surf13;
    BYTE gap_43D4[16];
    char field_43E4;
    BYTE gap_43E5[15];
    int field_43F4;
    int field_43F8;
    MySurface surf14;
    MySurface surf15;
    MySurface surf16;
    MySurface surf17;
    MySurface surf18_x5[5];
    MySurface surf19_x5[5];
    MySurface surf20_x5[5];
    AABB aabb1_x5[5];
    AABB aabb2_x5[5];
    AABB aabb3_x5[5];
    MySurface surf21;
    MySurface surf22;
    MySurface surf23;
    BYTE gap_485C[16];
    char field_486C;
    BYTE gap_486D[15];
    int field_487C;
    int field_4880;
    MySurface surf24;
    MySurface surf25;
    MySurface surf26;
    MySurface surf27;
    MySurface surf28_x5[5];
    MySurface surf29_x5[5];
    MySurface surf30_x5[5];
    AABB aabb4_x5[5];
    AABB aabb5_x5[5];
    AABB aabb6_x5[5];
    MySurface surf31;
    BYTE gap_4C94[16];
    char field_4CA4;
    BYTE gap_4CA5[15];
    int field_4CB4;
    int field_4CB8;
    MySurface surf32;
    MySurface surf33;
    MySurface surf34_x5[5];
    AABB aabb7_x5[5];
    MySurface surf35;
    MySurface surf36;
    MySurface surf37;
    BYTE gap_4E9C[16];
    char field_4EAC;
    BYTE gap_4EAD[15];
    int field_4EBC;
    int field_4EC0;
    MySurface surf38;
    MySurface surf39;
    MySurface surf40;
    MySurface surf41;
    MySurface surf42_x5[5];
    MySurface surf43_x5[5];
    MySurface surf44_x5[5];
    AABB aabb8_x5[5];
    AABB aabb9_x5[5];
    AABB aabb10_x5[5];
    MySurface surf45;
    BYTE gap_52D4[16];
    char field_52E4;
    BYTE gap_52E5[15];
    int field_52F4;
    int field_52F8;
    MySurface surf46;
    MySurface surf47;
    MySurface surf48_x5[5];
    AABB aabb11_x5[5];
    MySurface f5464_surf49;
    MySurface f548C_surf50;
    MySurface surf51_x5[5];
    AABB aabb12_x5[5];
    MySurface surf52;
    MySurface surf53;
    MySurface surf54_x5[5];
    AABB aabb13_x5[5];
    MySurface surf55;
    MySurface surf56;
    MySurface surf57_x5[5];
    AABB aabb14_x5[5];
    MyDdSurfaceEx f589C_surf_2;
    int field_58EC;
    MyDdSurfaceEx f58F0_surf_1;
    int field_5940;
    BYTE gap_5944[373];
    DWORD field_5AB9;
    BYTE gap5ABD[75];
    char field_5B08;
    BYTE f5B09_arr_x16x30[16][30];
    BYTE gap5CE9[9];
    CWorldEntry cwolrd_entry_x24[24];
    BYTE gap5F7A[122];
    char field_5FF4;
    char field_5FF5;
    char field_5FF6;
    char field_5FF7;
    char field_5FF8;
    DWORD field_5FF9;
    DWORD field_5FFD;
    DWORD field_6001;
    DWORD field_6005;
    DWORD field_6009;
    DWORD field_600D;
    BYTE gap_6011[43];
    MySurface surf60_x8[8];
    MySurface field_617C;
    BYTE gap_61A4[336];
    AABB aabb15_x8[8];
    BYTE gap6374[669];
    MySurface surf61_x3_applyBtn[3];
    MySurface surf62_x3_exitBtn[3];
    BYTE gap_6701[4];
    BYTE field_6705;
    BYTE field_6706;
    BYTE field_6707;
    BYTE field_6708;
    BYTE gap_6709[2];
    BYTE field_670B;
    BYTE field_670C;
    BYTE field_670D;
    BYTE gap_670E[19];
    char field_6721;
    BYTE gap_6722[15];
    int field_6731;
    int field_6735;
    MySurface surf63;
    AABB aabb16_x16x30x6[16][30][6];
    MySurface surf64_x16x30x6[16][30][6];
    DWORD cglow_obj_start;
    MySurface surf65_btnRenderOut;
    MySurface surf66_x16[16];
    AABB aabb17_x16x30[16][30];
    BYTE gap2FE0D[1292];
    char field_30319;
    char field_3031A;
    char field_3031B;
    char field_3031C;
    char field_3031D;
    char f3031E_fontMask;
    char field_3031F;
    char field_30320;
    char field_30321;
    char field_30322;
    char field_30323;
    char field_30324;
    char field_30325;
    char field_30326;
    char field_30327;
    char field_30328;
    char field_30329;
    char field_3032A;
    char field_3032B;
    char field_3032C;
    char field_3032D;
    char field_3032E;
    char field_3032F;
    char field_30330;
    char field_30331;
    char field_30332;
    char field_30333;
    char field_30334;
    char field_30335;
    char field_30336;
    char field_30337;
    char field_30338;
    char field_30339;
    char field_3033A;
    char field_3033B;
    BYTE gap_3033C[1338];
    int field_30876;
    BYTE gap_3087A[876];
    MySurface surf67;
    BYTE gap_30C0E[21];
    int field_30C23;
    int field_30C27;
    BYTE gap_30C2B[236];
    DWORD f30D17;
    BYTE gap_30D1B[37];
    int f30D40;
    BYTE gap_30D44[80];
    MySurface f30D94_surf68;
    BYTE gap_30DBC[4];
    int f30DC0;
    BYTE gap_30DC4[164];
    int field_30E68;
    BYTE gap_30E6C[176];
    StaticListeners f30F1C_static_listeners;
    MyStaticStruct f30F30_field_obj_start;
    int field_30F3C;
    int field_30F40;
    CGuiManager f30F44_cgui_manager;
    BYTE gap31128[4];
    int f3112C_obj_start;
    BYTE gap_31130[82];
    DWORD field_31182;
    BYTE gap_31186[68];
    MySurface f311CA_surf69;
    int field_311F2;
    int f311F6;

    /*005340F0*/ void showTitleScreen();

    /*005306F0*/ static int __cdecl execute(unsigned int idx, int command, CFrontEndComponent *obj);
    /*0052FAF0*/ static int __cdecl onKeyboardActionWithCtrl(
        int keyCode,
        int isPressed,
        int controlKeyFlags,
        CFrontEndComponent *frontend);

  };
#pragma pack(pop)
  static_assert(sizeof(CFrontEndComponent) == 0x311FA);

}
// ?CFrontEndComponent_static_onKeyboardActionWithCtrl@@YAHHHHPAVCFrontEndComponent@dk2@@@Z
// ?onKeyboardActionWithCtrl@CFrontEndComponent@dk2@@SAHHHHPAV12@@Z

#endif //EMBER_CFRONTENDCOMPONENT_H
