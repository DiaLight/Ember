//
// Created by DiaLight on 09.11.2022.
//

#ifndef EMBER_SURFACE_H
#define EMBER_SURFACE_H

#include <dk2/utils.h>
#include <d3d.h>

namespace dk2 {
  struct SurfaceHolder;

#pragma pack(push, 1)
  struct MyDirectDraw {
    IDirectDraw4 *dd4;
    IDirectDrawSurface4 *dd4_1;
    IDirectDrawSurface4 *dd4_2;
    LPDIRECT3DDEVICE3 d3d_hal_device;
    IDirect3D3 *d3d3;
    LPDIRECT3DVIEWPORT3 d3d_viewport3;
    int field_18;
    int field_1C;
    int textures;
    int f24_reductionLevel;
    __int16 field_28;
  };
#pragma pack(pop)
  static_assert(sizeof(MyDirectDraw) == 0x2A);

#pragma pack(push, 1)
  struct MyCEngineSurfDesc {
    DWORD field_0;
    int f4__bitsiz;
    int f8_bytesize;
    int fC_rbitcount;
    int f10_gbitcount;
    int f14_bbitcount;
    int f18_abitcount;
    unsigned int f1C__rmask;
    unsigned int f20__gmask;
    unsigned int f24__bmask;
    unsigned int f28__amask;
    char field_2C;
    MySurfDesc f2D_desc;
    DDPIXELFORMAT f45_ddPixFmt;
  };
#pragma pack(pop)
  static_assert(sizeof(MyCEngineSurfDesc) == 0x65);

#pragma pack(push, 1)
  struct CEngineSurfaceBase {
    virtual ~CEngineSurfaceBase();
    int f4_width;
    int f8_height;
    int fC_lineWidth;
    MyCEngineSurfDesc *fC_desc;
  };
#pragma pack(pop)
  static_assert(sizeof(CEngineSurfaceBase) == 0x14);

#pragma pack(push, 1)
  struct CEngineSurface : public CEngineSurfaceBase {
    virtual ~CEngineSurface();
    uint8_t *f14_pixels;
  };
#pragma pack(pop)
  static_assert(sizeof(CEngineSurface) == 0x18);

#pragma pack(push, 1)
  struct MyCESurfHandle {
    CEngineSurface *f0_cesurf;
    SurfaceHolder *f4_holder_parent;
    DWORD field_8;
    DWORD field_C;
    MyCESurfHandle *f10_nextByHashList;
    MyCESurfHandle *f14_nextByHolder;
    MyCESurfHandle *f18_nextByReduction;
    MyCESurfHandle *f1C_curReduction;
    int field_20;
    DWORD f24_mapIdx;
    BYTE gap_28[16];
    int f38_falgs;
    unsigned int f3C_reductionLevel_andFlags;
    unsigned __int8 f40_surfWidth8;
    unsigned __int8 f41_surfHeight8;
    char field_42;
    char field_43;
    int field_44;
    int f48_sortTick;
  };
#pragma pack(pop)
  static_assert(sizeof(MyCESurfHandle) == 0x4C);

#pragma pack(push, 1)
  struct CEngineDDSurface : public CEngineSurfaceBase {
    virtual ~CEngineDDSurface();
    DWORD field_14;
    LPDIRECTDRAWSURFACE4 f18_ddSurf;
    IDirect3DTexture2 *f1C_d3dTex;
    int field_20;
  };
#pragma pack(pop)
  static_assert(sizeof(CEngineDDSurface) == 0x24);

  struct SurfHashListItem;

#pragma pack(push, 1)
  struct SurfaceHolder {
    DWORD f0_SceneObject30;
    MyCESurfHandle *f4_surfh_first;
    int f8_a3;
    CEngineDDSurface *fC_ddsurf;
    SurfaceHolder *f10_prev;
    SurfaceHolder *f14_next;
    SurfHashListItem *f18_hashItem_link;
    float f1C_1divSize;
  };
#pragma pack(pop)
  static_assert(sizeof(SurfaceHolder) == 0x20);

#pragma pack(push, 1)
  struct SurfHashListItem {
    SurfaceHolder *f0_holder_link;
    SurfHashListItem *f4_next;
    SurfHashListItem *f8_prev;
    SurfHashListItem *fC_p1of4;
    SurfHashListItem *f10_p3of4;
    SurfHashListItem *f14_p2of4;
    SurfHashListItem *f18_p4of4;
    unsigned __int16 f1C_width;
    unsigned __int16 f1E_height;
    char f20_x;
    char f21_y;
    char f22__aBool;
    char field_23;
  };
#pragma pack(pop)
  static_assert(sizeof(SurfHashListItem) == 0x24);

#pragma pack(push, 1)
  struct SurfHashList {
    SurfHashListItem *f0_arr5x5[5][5];
    MyCEngineSurfDesc *f64_pSurfDesc;
    MyCESurfHandle *f68_surfh_first;
    int field_6C;
    SurfaceHolder *f70_holder_first;
    int f74_entriesCount;
    int f78_size;
  };
#pragma pack(pop)
  static_assert(sizeof(SurfHashList) == 0x7C);

}

#endif //EMBER_SURFACE_H
