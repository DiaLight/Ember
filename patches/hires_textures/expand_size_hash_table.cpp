//
// Created by DiaLight on 28.12.2022.
//
#include <dk2_patches.h>
#include <dk2_info.h>
#include <utils/xrefs.h>
#include <Windows.h>
#include <utils/patch.h>

namespace {
    typedef void *(__cdecl *MyHeap_alloc_t)(unsigned size);

    typedef void (__cdecl *MyHeap_free_t)(void *ptr);

    typedef char *(__cdecl *MyTextures_resetCacheDir_t)(const char *textureCacheDir);

    unsigned sizeHashTable_size = 0;
    uint32_t *sizeHashTable = nullptr;
    MyHeap_alloc_t MyHeap_alloc = nullptr;
    MyHeap_free_t MyHeap_free = nullptr;
    MyTextures_resetCacheDir_t MyTextures_resetCacheDir = nullptr;
}

//char *__cdecl proxy_MyTextures_resetCacheDir(const char *textureCacheDir) {
//  char *ret = MyTextures_resetCacheDir(textureCacheDir);
////  memset(sizeHashTable, 0xFFu, sizeHashTable_size);
////  int idx = sizeHashTable_size - 1;
////  for (int i = 0; i < 5; ++i ) {
////    if ( idx >= 0 ) {
////      for (int j = 0; j < idx + 1; ++j) {
////        sizeHashTable[j] = i;
////      }
////    }
////    idx >>= 1;
////  }
//  return ret;
//}

bool patch::expand_size_hash_table() {
    unsigned upscale = 2;
    sizeHashTable_size = 256 * upscale + 1;

    // .data:00792EC8 sizeHashTable_257
    void *sizeHashTable_257 = (void *) (api::dk2_base + (0x00792EC8 - dk2_virtual_base));
    MyHeap_alloc = (MyHeap_alloc_t) (api::dk2_base + (0x0057CEB0 - dk2_virtual_base));
    MyHeap_free = (MyHeap_free_t) (api::dk2_base + (0x0057D0B0 - dk2_virtual_base));
    MyTextures_resetCacheDir = (MyTextures_resetCacheDir_t) (api::dk2_base + (0x00592720 - dk2_virtual_base));
    // .text:005927E5                 mov     ecx, 101h
    uint32_t *pSizeHashTable_size = (uint32_t *) (api::dk2_base + (0x005927E5 + 1 - dk2_virtual_base));
    // .text:00592810                 mov     edx, 100h
    uint32_t *pSizeHashTable_size2 = (uint32_t *) (api::dk2_base + (0x00592810 + 1 - dk2_virtual_base));

    sizeHashTable = (uint32_t *) MyHeap_alloc(sizeHashTable_size * sizeof(uint32_t));
    ZeroMemory(sizeHashTable, sizeHashTable_size * sizeof(uint32_t));

    {
        write_protect prot(pSizeHashTable_size, sizeof(uint32_t));
        *pSizeHashTable_size = sizeHashTable_size;
        *pSizeHashTable_size2 = sizeHashTable_size - 1;
    }

    if (!api::replaceXrefs((uint8_t *) sizeHashTable_257, sizeHashTable)) return false;

//  if(!api::replaceXrefs((uint8_t *) MyTextures_resetCacheDir, proxy_MyTextures_resetCacheDir)) return false;
    return true;
}
