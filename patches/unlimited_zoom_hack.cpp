//
// Created by DiaLight on 09.01.2023.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>
#include <api/patch.h>

bool patch::unlimited_zoom_hack() {
  if(!api::hasFlag("unlimited_zoom")) return true;

//  .text:00449CDC                 cmp     edi, eax
//  .text:00449CDE                 jge     short loc_449CF3
//  .text:00449CE0                 cmp     edx, esi
//  .text:00449CE2                 jle     short loc_449CF1
  uint8_t *pos = (uint8_t *) (dk2_base + (0x00449CDC - dk2_virtual_base));
  DWORD oldProtect;
  if(!VirtualProtect(pos, 8, PAGE_EXECUTE_READWRITE, &oldProtect)) return false;
  memset(pos, 0x90, 8);
  VirtualProtect(pos, 8, oldProtect, NULL);

  return true;
}

