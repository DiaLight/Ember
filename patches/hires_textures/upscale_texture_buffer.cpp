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


bool patch::upscale_texture_buffer() {
  unsigned upscale = 2;

  uint32_t *pTexSize = (uint32_t *) (dk2_base + (0x00592DC7 + 3 - dk2_virtual_base));
  DWORD oldProtect;
  if(!VirtualProtect(pTexSize, sizeof(uint32_t), PAGE_EXECUTE_READWRITE, &oldProtect)) return false;
  *pTexSize *= upscale;
  VirtualProtect(pTexSize, sizeof(uint32_t), oldProtect, NULL);
  return true;
}
