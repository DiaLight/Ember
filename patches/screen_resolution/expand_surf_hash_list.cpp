//
// Created by DiaLight on 16.12.2022.
//
#include <patches.h>
#include <cstdio>
#include <api/patch.h>
#include <dk2_structures.h>
#include <api.h>

bool patch::expand_surf_hash_list() {
  // .text:00592FAC                 push    18h
  uint8_t *pCount = (uint8_t *) (dk2_base + (0x00592FAC + 1 - dk2_virtual_base));
  DWORD oldProtect;
  if(!VirtualProtect(pCount, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &oldProtect)) return false;
  *pCount = 0x68;  // don't know how to correct scale surf reserve
  VirtualProtect(pCount, sizeof(uint8_t), oldProtect, NULL);
  return true;
}
