//
// Created by DiaLight on 28.12.2022.
//
#include <patches.h>
#include <cstdio>
#include <sstream>
#include <dk2_structures.h>
#include <dk2/globals.h>
#include <lodepng.h>
#include <api.h>

namespace {
  typedef dk2::CEngineCompressedSurface *(__fastcall *MyTextures_loadCompressed_t)(dk2::MyTextures *_this, void *edx, char *texName);
  typedef void (__fastcall *CEngineSurface_create_t)(dk2::MyCESurfHandle *_this, void *edx);
  typedef void *(__cdecl *MyHeap_alloc_t)(int size);
  typedef void (__cdecl *MyHeap_free_t)(void *ptr);
  MyTextures_loadCompressed_t MyTextures_loadCompressed = nullptr;
  CEngineSurface_create_t CEngineSurface_create = nullptr;
  dk2::MyCEngineSurfDesc *pMyCEngineSurfDesc_argb32_instance = nullptr;
  dk2::CEngineSurface::vtbl_t *CEngineSurface_vtbl = nullptr;
  MyHeap_alloc_t MyHeap_alloc = nullptr;
  MyHeap_free_t MyHeap_free = nullptr;
}

dk2::CEngineSurfaceBase *createSurf_orig(uint8_t width, uint8_t height) {
  alignas(dk2::MyCESurfHandle) uint8_t handle_buf[sizeof(dk2::MyCESurfHandle)];
  dk2::MyCESurfHandle &handle = *(dk2::MyCESurfHandle *) handle_buf;
  ZeroMemory(&handle, sizeof(handle));
  handle.f3C_reductionLevel_andFlags |= 0x80;
  handle.f0_cesurf = nullptr;
  handle.f40_surfWidth8 = 0;
  handle.f41_surfHeight8 = 0;
  CEngineSurface_create(&handle, nullptr);
  return handle.f0_cesurf;
}

dk2::CEngineSurface *createSurf(uint32_t width, uint32_t height) {
  dk2::CEngineSurface *surf = (dk2::CEngineSurface *) MyHeap_alloc(sizeof(dk2::CEngineSurface));
  surf->fC_desc = pMyCEngineSurfDesc_argb32_instance;
  surf->f4_width = width;
  surf->f8_height = height;
  surf->fC_lineWidth = width * surf->fC_desc->f8_bytesize;
  surf->vtbl() = CEngineSurface_vtbl;
  surf->f14_pixels = MyHeap_alloc(height * width * surf->fC_desc->f8_bytesize);
  return surf;
}

int getByteOffs(uint32_t mask) {
  if(mask == 0xFF) return 0;
  if(mask == 0xFF00) return 1;
  if(mask == 0xFF0000) return 2;
  if(mask == 0xFF000000) return 3;
  return -1;
}

dk2::CEngineSurfaceBase *__fastcall replace_MyTextures_loadCompressed(dk2::MyTextures *_this, void *edx, char *texName) {
  std::stringstream ss;
  ss << dk2::globals::getDk2HomeDir() << "/resources/default/" << texName << ".png";
  std::string file = ss.str();

  unsigned error;
  std::vector<unsigned char> buffer;
  error = lodepng::load_file(buffer, file);
  if(error) {
    printf("failed to load %s from resources. using EngineTextures.dat\n", texName);
    return MyTextures_loadCompressed(_this, edx, texName);
  }
  lodepng::State state;
  state.decoder.ignore_crc = 1;
  state.decoder.zlibsettings.ignore_adler32 = 1;
  unsigned w, h;
  std::vector<unsigned char> rgba;
  error = lodepng::decode(rgba, w, h, state, buffer);
  if(error || w == 0 || h == 0) {
    printf("failed to decode %s from resources. using EngineTextures.dat\n", texName);
    return MyTextures_loadCompressed(_this, edx, texName);
  }
  dk2::CEngineSurface *surf = createSurf(w, h);
  int ro = getByteOffs(surf->fC_desc->f1C__rmask);
  int go = getByteOffs(surf->fC_desc->f20__gmask);
  int bo = getByteOffs(surf->fC_desc->f24__bmask);
  int ao = getByteOffs(surf->fC_desc->f28__amask);
  if(ro < 0 || go < 0 || bo < 0 || ao < 0) {
    printf("invalid rgba mask %s in resources. using EngineTextures.dat\n", texName);
    return MyTextures_loadCompressed(_this, edx, texName);
  }
  uint8_t *line = (uint8_t *) surf->f14_pixels;
  for (unsigned y = 0; y < h; ++y) {
    for (unsigned x = 0; x < w; ++x) {
      int r = rgba[y * w * 4 + x * 4 + 0];
      int g = rgba[y * w * 4 + x * 4 + 1];
      int b = rgba[y * w * 4 + x * 4 + 2];
      int a = rgba[y * w * 4 + x * 4 + 3];
      line[x * 4 + ro] = r;
      line[x * 4 + go] = g;
      line[x * 4 + bo] = b;
      line[x * 4 + ao] = a;
    }
    line += surf->fC_lineWidth;
  }
//  printf("loaded from resources %s\n", texName);
  return surf;
}

bool patch::redirect_load_cached_textures() {
  if(!api::hasFlag("redirect_textures")) return true;

  MyTextures_loadCompressed = (MyTextures_loadCompressed_t) (dk2_base + (0x00591070 - dk2_virtual_base));
  CEngineSurface_create = (CEngineSurface_create_t) (dk2_base + (0x00591C20 - dk2_virtual_base));
  pMyCEngineSurfDesc_argb32_instance = (dk2::MyCEngineSurfDesc *) (dk2_base + (0x00792D98 - dk2_virtual_base));
  CEngineSurface_vtbl = (dk2::CEngineSurface::vtbl_t *) (dk2_base + (0x0067034C - dk2_virtual_base));
  MyHeap_alloc = (MyHeap_alloc_t) (dk2_base + (0x0057CEB0 - dk2_virtual_base));
  MyHeap_free = (MyHeap_free_t) (dk2_base + (0x0057D0B0 - dk2_virtual_base));

  if(!replaceXrefs((uint8_t *) MyTextures_loadCompressed, replace_MyTextures_loadCompressed)) return false;

  return true;
}

