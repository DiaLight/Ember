//
// Created by DiaLight on 07.09.2022.
//

#ifndef EMBER_CDEFAULTPLAYERINTERFACE_H
#define EMBER_CDEFAULTPLAYERINTERFACE_H

#include <dk2/utils.h>
#include <dk2/frontend_common.h>
#include <dk2/action.h>

namespace dk2 {

  struct MyProfiler;

#pragma pack(push, 1)
  struct CRenderInfo {

    struct vtbl_t {
      int (__fastcall *fun_4B4710)(void *_this, void *edx);
      int (__fastcall *fun_4B47C0)(void *_this, void *edx);
    };
    virtual ~CRenderInfo();

    DWORD field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    __int16 field_1C;
    __int16 field_1E;
    __int16 field_20;
    WORD field_22;
    WORD field_24;
    __int16 field_26;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    BYTE gap_38[4];
    int field_3C;
    int field_40;
    BYTE gap_44[4];
    char field_48;
    char field_49;
    char field_4A;
    char field_4B;
    char field_4C;
    char field_4D;
    char field_4E;
    __int16 field_4F;
    __int16 field_51;
    __int16 field_53;
    __int16 field_55;
    __int16 field_57;
    __int16 field_59;
    int field_5B;
    BYTE gap_5F[20];
    int field_73;
    int field_77;
    int field_7B;
    int field_7F;
    int field_83;
    int field_87;
    int field_8B;
    char field_8F;
    int field_90;
    int field_94;
    int field_98;
    int field_9C;
    int field_A0;
    int field_A4;
    BYTE gap_A8[4];
    char field_AC;
    char field_AD;
    char field_AE;
    char field_AF;
  };
#pragma pack(pop)
  static_assert(sizeof(CRenderInfo) == 0xB0);

#pragma pack(push, 1)
  class CDefaultPlayerInterface {
    /*006CEA10*/ static CDefaultPlayerInterface instance;
  public:
    struct vtbl_t {
      void (__fastcall *scalar_deleting_destructor)(void *_this, void *edx, bool del);
      int (__fastcall *fun_402D00)(void *_this, void *edx, __int16 a2);
      int (__fastcall *fun_4033F0)(void *_this, void *edx);
      int (__fastcall *fun_4036E0)(void *_this, void *edx);
      int (__fastcall *fun_4039A0)(void *_this, void *edx, int a4, int a5, int a6);
      int (__fastcall *fun_403FB0)(void *_this, void *edx);
      int (__stdcall *fun_402AD0)(void *_this, void *edx);
      int (__fastcall *fun_402B50)(void *_this, void *edx, int a2);
      BOOL (__fastcall *fun_4096B0)(void *_this, void *edx);
      int (__fastcall *fun_409880)(void *_this, void *edx);
      int (__fastcall *fun_4098A0)(void *_this, void *edx);
      int (__fastcall *fun_4098D0)(void *_this, void *edx);
      int (__fastcall *fun_402B60)(void *_this, void *edx);
      void (__fastcall *fun_402B70)(void *_this, void *edx);
      void (__fastcall *fun_402B80)(void *_this, void *edx);
      int (__fastcall *fun_42BC20)(void *_this, void *edx);
      int (__fastcall *fun_42BE40)(void *_this, void *edx);
      BOOL (__fastcall *fun_42C710)(void *_this, void *edx);
      int (__fastcall *fun_42BFE0)(void *_this, void *edx);
      int (__fastcall *fun_42C0D0)(void *_this, void *edx);
      DWORD (__fastcall *fun_42C1E0)(void *_this, void *edx, int a2, int a3);
      char (__fastcall *fun_402B90)(void *_this, void *edx, char a2);
      DWORD (__fastcall *fun_409EC0)(void *_this, void *edx, __int16 a2, const void *a3);
    };
    inline static CDefaultPlayerInterface *getInstance() { return (CDefaultPlayerInterface *) funptr<&instance>(); }
    virtual ~CDefaultPlayerInterface();

    MyProfiler *f4_profiler;
    __int16 f8__cpyToF10;
    int fA;
    BYTE gapE[44];
    DWORD f3A;
    DWORD field_3E;
    DWORD field_42;
    DWORD field_46;
    DWORD field_4A;
    DWORD field_4E;
    BYTE gap_52;
    int f53_pCWorld;
    int field_57;
    int field_5B;
    BYTE gap_5F[154];
    DWORD f59_timestampMs;
    DWORD fFD;
    BYTE gap_101[3591];
    CRenderInfo fF08_render_info;
    CRenderInfo fFB8_render_info;
    BYTE gap_1068[68];
    DWORD f10AC;
    DWORD field_10B0;
    BYTE gap_10B4[18];
    CGuiManager f10C6_cgui_manager;
    BYTE gap12AA[4];
    DWORD field_12AE;
    BYTE gap_12B2[40];
    int field_12DA;
    DWORD field_12DE;
    BYTE gap_12E2[4];
    DWORD f12E6_timeMs;
    DWORD field_12EA;
    BYTE gap_12EE[4];
    int field_12F2;
    WORD field_12F6;
    BYTE gap_12F8[22];
    int field_130E;
    WORD field_1312;
    BYTE gap_1314[22];
    int field_132A;
    BYTE gap_132E;
    int field_132F;
    int field_1333;
    int field_1337;
    int field_133B;
    StaticListeners field_133F_static_listeners;
    MyStaticStruct f1353_obj;
    int field_135F;
    DWORD field_1363;
    DWORD field_1367;
    DWORD field_136B;
    DWORD field_136F;
    DWORD field_1373;
    DWORD field_1377;
    WORD field_137B;
    BYTE field_137D;
    DWORD field_137E;
    BYTE gap_1382[8];
    DWORD field_138A;
    BYTE gap_138E[21];
    MySurface f13A3;
    int gap_13CB;
    BYTE gap13CF[12];
    int f13DB;
    BYTE gap_13DF[42];
    int field_1409;
    BYTE gap_140D[560];
    DWORD field_163D;
    BYTE gap_1641[23];
    MySurface field_1658;
    BYTE gap_1680[32];
    int field_16A0;
    BYTE gap_16A4[60];
    int field_16E0;
    BYTE gap_16E4[560];
    DWORD field_1914;
    BYTE gap_1918[23];
    MySurface field_192F;
    BYTE gap_1957[32];
    int field_1977;
    BYTE gap_197B[9];
    int field_1984;
    BYTE gap_1988[560];
    DWORD field_1BB8;
    BYTE gap_1BBC[23];
    MySurface field_1BD3;
    BYTE gap_1BFB[32];
    int field_1C1B;
    BYTE gap_1C1F[806];
    int field_1F45;
    BYTE gap_1F49[560];
    DWORD field_2179;
    BYTE gap_217D[23];
    MySurface field_2194;
    BYTE gap_21BC[32];
    int field_21DC;
    int field_21E0;
    BYTE gap_21E4[560];
    DWORD field_2414;
    BYTE gap_2418[23];
    MySurface field_242F;
    BYTE gap_2457[32];
    int field_2477;
    BYTE gap_247B[12];
    int field_2487;
    BYTE gap_248B[560];
    DWORD field_26BB;
    BYTE gap_26BF[23];
    MySurface field_26D6;
    BYTE gap_26FE[32];
    int field_271E;
    BYTE gap_2722[21];
    int field_2737;
    BYTE gap_273B[560];
    DWORD field_296B;
    BYTE gap_296F[23];
    MySurface field_2986;
    BYTE gap_29AE[32];
    int field_29CE;
    BYTE gap_29D2[4];
    int field_29D6;
    BYTE gap_29DA[560];
    DWORD field_2C0A;
    BYTE gap_2C0E[23];
    MySurface field_2C25;
    BYTE gap_2C4D[32];
    int field_2C6D;
    int field_2C71;
    BYTE gap_2C75[560];
    DWORD field_2EA5;
    BYTE gap_2EA9[23];
    MySurface field_2EC0;
    BYTE gap_2EE8[32];
    int field_2F08;
    int field_2F0C;
    BYTE gap_2F10[560];
    DWORD field_3140;
    BYTE gap_3144[23];
    MySurface field_315B;
    BYTE gap_3183[32];
    int field_31A3;
    int field_31A7;
    BYTE gap_31AB[560];
    DWORD field_33DB;
    BYTE gap_33DF[23];
    MySurface field_33F6;
    BYTE gap_341E[32];
    int field_343E;
    BYTE gap_3442[8];
    int field_344A;
    BYTE gap_344E[560];
    DWORD field_367E;
    BYTE gap_3682[23];
    MySurface field_3699;
    BYTE gap_36C1[32];
    int field_36E1;
    BYTE gap_36E5[12];
    int field_36F1;
    BYTE gap_36F5[560];
    DWORD field_3925;
    BYTE gap_3929[23];
    MySurface field_3940;
    BYTE gap_3968[32];
    int field_3988;
    BYTE gap_398C[520];
    DWORD field_3B94;
    BYTE gap_3B98[4];
    int field_3B9C;
    BYTE gap_3BA0[560];
    DWORD field_3DD0;
    BYTE gap_3DD4[23];
    MySurface field_3DEB;
    BYTE gap_3E13[32];
    int f3E33;
    DWORD f3E37;
    DWORD f3E3B;
    DWORD f3E3F;
    BYTE gap_3E43[48];
    int field_3E73;
    BYTE gap_3E77[560];
    DWORD field_40A7;
    BYTE gap_40AB[23];
    MySurface my_surface_40C2;
    BYTE gap_40EA[32];
    int field_410A;
    DWORD field_410E;
    BYTE gap_4112[4];
    int field_4116;
    BYTE gap_411A[560];
    DWORD field_434A;
    BYTE gap_434E[23];
    MySurface my_surface_4365;
    BYTE gap_438D[32];
    int field_43AD;
    BYTE gap_43B1[4];
    int field_43B5;
    BYTE gap_43B9[560];
    DWORD field_45E9;
    BYTE gap_45ED[23];
    MySurface my_surface_4604;
    BYTE gap_462C[32];
    int field_464C;
    BYTE gap_4650[16];
    int field_4660;
    BYTE gap_4664[560];
    DWORD field_4894;
    BYTE gap_4898[23];
    MySurface my_surface_48AF;
    BYTE gap_48D7[32];
    int field_48F7;
    BYTE gap_48FB[564];
    BYTE field_4B2F[319];
    DWORD field_4C6E;
    BYTE gap_4C72[8];
    DWORD field_4C7A;
    BYTE gap_4C7E[8];
    int field_4C86;
    int field_4C8A;
    int field_4C8E;
    int field_4C92;
    int field_4C96;
    int field_4C9A;
    DWORD field_4C9E;
    BYTE gap_4CA2[23];
    int field_4CB9;
    BYTE gap_4CBD[12];
    int field_4CC9;
    int field_4CCD;
    int field_4CD1;
    int field_4CD5;
    BYTE gap_4CD9;
    int field_4CDA;
    BYTE gap_4CDE[39];
    DWORD field_4D05;
    BYTE gap_4D09[116];
    DWORD field_4D7D;
    BYTE gap_4D81[116];
    DWORD field_4DF5;
    BYTE gap_4DF9[116];
    DWORD field_4E6D;
    BYTE gap4E71[188];
    int field_4F2D;

    /*004346E0*/ bool pushAction(GameAction &actionStruc);

  };
#pragma pack(pop)
  static_assert(sizeof(CDefaultPlayerInterface) == 0x4F31);

}

#endif //EMBER_CDEFAULTPLAYERINTERFACE_H
