//
// Created by DiaLight on 07.09.2022.
//

#ifndef EMBER_CGAMECOMPONENT_H
#define EMBER_CGAMECOMPONENT_H

#include <dk2/utils.h>

namespace dk2 {

  class CBridge;
  class CWorld;
  class CCommunicationInterface;

#pragma pack(push, 1)
  struct MyProfiler {
    DWORD field_0;
    int field_4;
    int field_8;
    CDefaultPlayerInterface *fC_player_i;
    CBridge *f10_c_bridge;
    CWorld *f14_cworld;
    CCommunicationInterface *f18_communication_interface;
    DWORD field_1C;
    BYTE gap_20[584];
    DWORD f268;
    DWORD field_26C;
    DWORD f270_counter;
    DWORD f274_counter;
    BYTE gap_278[4];
    DWORD field_int_27C;
    int field_280;
    int field_284;
    int field_288;
    int field_28C;
    __int16 field_290;
    int field_292;
    int field_296;
    int field_29A;
    int field_29E;
    int field_2A2;
    int field_2A6;
  };
#pragma pack(pop)
  static_assert(sizeof(MyProfiler) == 0x2AA);

#pragma pack(push, 1)
  class CGameComponent : public CComponent {
    /*0070D138*/ static CGameComponent instance;
  public:
    struct vtbl_t {
      void (__fastcall *scalar_deleting_destructor)(void *_this, void *edx, bool del);
      int (__fastcall *CMap__fun_4B4C20)();
      void (__fastcall *ret_void_0args_0)(void *_this, void *edx);
      void *CGameComponent__fun_525350;
      void *unknown_libname_14;
      void *(__fastcall *CGameComponent__mainGuiLoop)(void *_this, void *edx);
    };
    inline static CGameComponent *getInstance() { return (CGameComponent *) funptr<&instance>(); }
    virtual ~CGameComponent();
    DWORD exit_flag;
    MyProfiler mt_profiler;
    DWORD drawCount;
    int field_2BE;
    DWORD lastTimeMs;
    int f2C6__vftable;
    int field_2CA;
    int field_2CE;
    int field_2D2;
    int field_2D6;
    int field_2DA;
  };
#pragma pack(pop)
  static_assert(sizeof(CGameComponent) == 0x2DE);

}

#endif //EMBER_CGAMECOMPONENT_H
