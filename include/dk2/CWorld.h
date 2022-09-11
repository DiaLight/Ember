//
// Created by DiaLight on 11.09.2022.
//

#ifndef EMBER_CWORLD_H
#define EMBER_CWORLD_H

#include <dk2/utils.h>
#include <dk2/action.h>

namespace dk2 {

  struct MyProfiler;

#pragma pack(push, 1)
  struct MyCreatureCollection {
    DWORD field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    DWORD field_18;
    WORD field_1C;
    int field_1E;
    int field_22;
    int field_26;
    int field_2A;
    int field_2E;
    int field_32;
    int field_36;
    int field_3A;
    DWORD field_3E;
  };
#pragma pack(pop)
  static_assert(sizeof(MyCreatureCollection) == 0x42);

#pragma pack(push, 1)
  struct CMapEntry {
    char field_0;
    char field_1;
    char field_2;
    int field_3;
    int field_7;
  };
#pragma pack(pop)
  static_assert(sizeof(CMapEntry) == 0xB);

#pragma pack(push, 1)
  struct CMap {
//    CMap_vtbl *__vftable /*VFT*/;
    virtual ~CMap();
    DWORD field_4;
    BYTE gap_8[4];
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    BYTE gap_20[260];
    CMapEntry entries[225];
  };
#pragma pack(pop)
  static_assert(sizeof(CMap) == 0xACF);

#pragma pack(push, 1)
  struct CWorldShortEntry3 {
    __int16 field_0;
    char field_2;
    int field_3;
  };
#pragma pack(pop)
  static_assert(sizeof(CWorldShortEntry3) == 0x7);

#pragma pack(push, 1)
  struct CResearchOrder {
    virtual ~CResearchOrder();
    DWORD field_4;
    BYTE gap_8[4];
    DWORD field_C;
    DWORD field_10;
    int field_14;
  };
#pragma pack(pop)
  static_assert(sizeof(CResearchOrder) == 0x18);

#pragma pack(push, 1)
  struct CWorldShortEntry2 {
    BYTE gap_0[4];
    WORD field_4;
    DWORD field_6;
    int field_A;
    int field_E;
    int field_12;
    int field_16;
    int field_1A;
    int field_1E;
    int field_22;
  };
#pragma pack(pop)
  static_assert(sizeof(CWorldShortEntry2) == 0x26);

#pragma pack(push, 1)
  struct CWorld {
    /*006F2A08*/ static CWorld instance;
  public:
    inline static CWorld *getInstance() { return (CWorld *) funptr<&instance>(); }
    virtual ~CWorld();
    MyProfiler *profiler;
    MyCreatureCollection creatures;
    BYTE gap4A[48];
    WORD field_7A;
    BYTE gap_7C[2370];
    WORD f9BE;
    BYTE f9C0_gap[26];
    CMap f9DA_cmap;
    BYTE gap14A9[247];
    DWORD field_15A0;
    BYTE gap_15A4[144];
    MyDdSurface f1634_surface;
    BYTE gap165C[40];
    GameActionHandler f1684_actionHandlers[138];
    DWORD field_1F24;
    BYTE gap_1F28[3884];
    DWORD field_2E54;
    BYTE gap_2E58[17377];
    char field_7239;
    BYTE gap_723A[9];
    __int16 field_7243;
    AABB aabb_4[4];
    BYTE gap7285[12];
    char field_7291;
    char field_7292;
    int field_7293;
    int field_7297;
    BYTE gap_729B[34];
    CWorldShortEntry3 short3_entries_6[6];
    BYTE gap72E7[5];
    CResearchOrder f72EC_c_recearch_order;
    BYTE gap_7304[10572];
    CWorldShortEntry2 short2_entries_8[8];
    BYTE gap9D80[68];
    CWorldEntry entries_6[6];
    BYTE gap9E66[16];
    CWorldEntry f9E76_entries_2[2];
    BYTE gap9EAC[120];
    CWorldEntry entries_30[30];
    BYTE gapA24E[28];
    CWorldEntry entries_7[7];
    BYTE gapA327[116];
    int field_A39B;
    int field_A39F;
    int buf_field_A3A3;
    int buf_field_A3A7;
    int field_A3AB;
    int field_A3AF;
    int field_A3B3;
    int field_A3B7;
    int field_A3BB;
    int fA3BF_is_surface_filled;

    /*00510F90*/ int handleAction(GameAction &action);

  };
#pragma pack(pop)
  static_assert(sizeof(CWorld) == 0xA3C3);

}

#endif //EMBER_CWORLD_H
