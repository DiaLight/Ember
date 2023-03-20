//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_RtGuiView.h>
#include <gog_cfg.h>
#include <dk2_info.h>
#include <dk2/RtGuiView.h>
#include <dk2/CDefaultPlayerInterface.h>
#include "asm_writeJump.h"


void *asm_jumpBack_fix = nullptr;
dk2::RtGuiView *asm_guiView = nullptr;

__declspec(naked)
void asm_RtGuiView_fix() {
  // rewrite view->f4_Arrp31x400_ids[x + view->f27F_width_128blocks * y]
  // eax: x + view->f27F_width_128blocks * y
  // esi: view
  // .text:0042CE95    mov  eax, [esi+eax*4+4]
  // .text:0042CE99    mov  edx, [ecx]
  __asm {
  cmp     eax, 93h
  jl      short loc_10001531
  cmp     esi, asm_guiView
  jnz     short loc_10001531
  xor     eax, eax
  loc_10001531:
  mov     edx, [esi+eax*4+4]
  mov     eax, edx
  mov     edx, [ecx]
  jmp     asm_jumpBack_fix
  }
}

void gog::patch_RtGuiView() {
  // writeJump((int)RtGuiView_fix, 0x42CE95);

  // .data:006CEA10 ?instance@CDefaultPlayerInterface@dk2@@0V12@A dd 58Fh dup(?)
  // CDefaultPlayerInterface+00001984: f1984__allyWindowText RtGuiView ?
  // 6D0394 CDefaultPlayerInterface_f1984__allyWindowText
  auto playerIf = (dk2::CDefaultPlayerInterface *) (api::dk2_base + (0x006CEA10 - dk2_virtual_base));
  asm_guiView = &playerIf->_allyWindowText;

  // CDefaultPlayerInterface_createSurfacesForView_42CDF0
  // .text:0042CE95    mov  eax, [esi+eax*4+4]
  auto pos = (void **) (api::dk2_base + (0x0042CE95 - dk2_virtual_base));
  asm_jumpBack_fix = (void **) (api::dk2_base + (0x0042CE9B - dk2_virtual_base));
  asm_writeJump(asm_RtGuiView_fix, pos);
}
