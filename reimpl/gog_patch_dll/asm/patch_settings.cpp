//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_settings.h>
#include <api.h>
#include <gog_cfg.h>
#include "asm_writeJump.h"

using namespace gog;


void *asm_jumpBack_settings_readValue = nullptr;
//  int *__fastcall proxy_settings_readValue(HKEY *_this, void *edx, int *status, LPCSTR lpValueName, DWORD *pValue) {
//    if (cfg::patchRegistryConfig(status, lpValueName, pValue) != -1) return status;
//    __asm {
//      push    ebp
//      mov     ebp, esp
//      sub     esp, 8
//      jmp asm_jumpBack_settings_readValue;
//    }
//  }
__declspec(naked)
int *__fastcall asm_proxy_settings_readValue(HKEY *_this, void *edx, int *status, LPCSTR lpValueName, DWORD *pValue) {
  __asm {
  push    ecx
  push    edx
  mov     eax, [esp+14h]
  push    eax
  mov     eax, [esp+14h]
  push    eax
  mov     eax, [esp+14h]
  push    eax
  call    cfg::patchRegistryConfig
  pop     edx
  pop     ecx
  cmp     eax, 0FFFFFFFFh
  jz      short loc_10001404
  mov     eax, [esp+4]
  retn    0Ch

  loc_10001404:
  push    ebp
  mov     ebp, esp
  sub     esp, 8
  jmp     asm_jumpBack_settings_readValue
  }
}

void gog::patch_settings() {
  //  writeJump((int)proxy_settings_readValue, 0x5626C0);
  // .text:005626C0    push  ebp
  auto settings_readValue = (void **) (dk2_base + (0x005626C0 - dk2_virtual_base));
  asm_jumpBack_settings_readValue = (void *) (dk2_base + (0x005626C6 - dk2_virtual_base));
  asm_writeJump(asm_proxy_settings_readValue, settings_readValue);
}
