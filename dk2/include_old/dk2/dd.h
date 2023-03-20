//
// Created by DiaLight on 20.08.2022.
//

#ifndef DKII_DD_H
#define DKII_DD_H

#include <ddraw.h>
#include <dk2/utils.h>

namespace dk2 {

  struct MyDdSurface{
    uint32_t field_0;
    uint32_t field_4;
    uint32_t field_8;
    uint8_t gap_C[4];
    uint8_t f10_00;
    uint8_t f11_ff;
    uint8_t f12_00;
    uint8_t f13_ff;
    uint8_t f14_00_dwColorSpaceValue;
    uint8_t field_15;
    uint8_t field_16;
    uint8_t field_17;
    tagPALETTEENTRY *field_18;
    uint32_t f1C_flags;
    uint32_t field_20;
    LPDIRECTDRAWSURFACE f24_dd_surface;
  };
  static_assert(sizeof(MyDdSurface) == 0x28);

  struct MySurfDesc {
    uint32_t dwRBitMask;
    uint32_t dwGBitMask;
    uint32_t dwBBitMask;
    uint32_t dwRGBAlphaBitMask;
    uint32_t dwRGBBitCount;
    uint32_t isBytePerPixel;
  };
  static_assert(sizeof(MySurfDesc) == 0x18);

  struct MySurface {
    MySurfDesc desc;
    uint32_t lpSurface;
    uint32_t dwWidth;
    uint32_t dwHeight;
    uint32_t lPitch;
  };
  static_assert(sizeof(MySurface) == 0x28);

  struct MyDdSurfaceEx {
    /*0000*/ MyDdSurface f0_dd_surf;
    /*0028*/ MySurface f28_surf;
  };
  static_assert(sizeof(MyDdSurfaceEx) == 0x50);

  struct ControlSurf {  // vft=006729F8
    /*0000*/ //void *__vftable;
    /*0004*/ MyDdSurfaceEx f4_ddSurfEx;
    /*0054*/ uint32_t f54_isSurfCreated;
    /*0058*/ uint32_t f58__isSurfBusy;
    virtual ~ControlSurf();
  };
  static_assert(sizeof(ControlSurf) == 0x5C);

}

#endif //DKII_DD_H
