//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_SurfaceHolder_setTexture.h>
#include <dk2/SurfaceHolder.h>
#include <dk2_info.h>


void *asm_SurfaceHolder_setTexture = nullptr;

//  int __cdecl proxy_SurfaceHolder_setTexture(dk2::SurfaceHolder *surfh, int stage) {
//    if (surfh == nullptr) return 0;
//    __asm {
//      jmp asm_SurfaceHolder_setTexture;  // JUMPOUT(0x592B80);
//    }
//  }
__declspec(naked)
int __cdecl asm_proxy_SurfaceHolder_setTexture(dk2::SurfaceHolder *surfh, int stage) {
  __asm {
    mov     eax, [esp+4]
    test    eax, eax
    jz      short locret_1000154E
    jmp     asm_SurfaceHolder_setTexture
  locret_1000154E:
    retn
  }
}

void gog::patch_SurfaceHolder_setTexture() {
  //  VirtualProtect((LPVOID)0x588E3A, 4u, 0x40u, &fdwReason);
  //  MEMORY[0x588E3A] = (char *)proxy_SurfaceHolder_setTexture - 0x588E3E;
  //  VirtualProtect((LPVOID)0x588E3A, 4u, fdwReason, &fdwReason);
  {
    // .text:00588E39    call  SurfaceHolder_setTexture
    auto pSurfaceHolder_setTexture = (uint32_t *) (api::dk2_base + (0x00588E39 + 1 - dk2_virtual_base));
    DWORD oldProtect;
    VirtualProtect(pSurfaceHolder_setTexture, sizeof(void *), PAGE_EXECUTE_READWRITE, &oldProtect);
    asm_SurfaceHolder_setTexture = ((uint8_t *) pSurfaceHolder_setTexture + 4) + *pSurfaceHolder_setTexture;
    *pSurfaceHolder_setTexture = ((uint8_t *) asm_proxy_SurfaceHolder_setTexture) - ((uint8_t *) pSurfaceHolder_setTexture + 4);
    VirtualProtect(pSurfaceHolder_setTexture, sizeof(void *), oldProtect, &oldProtect);
  }

  //  VirtualProtect((LPVOID)0x58A1D0, 4u, 0x40u, &fdwReason);
  //  MEMORY[0x58A1D0] = (char *)proxy_SurfaceHolder_setTexture - 0x58A1D4;
  //  VirtualProtect((LPVOID)0x58A1D0, 4u, fdwReason, &fdwReason);
  {
    // .text:0058A1CF    call  SurfaceHolder_setTexture
    auto pSurfaceHolder_setTexture = (uint32_t *) (api::dk2_base + (0x0058A1CF + 1 - dk2_virtual_base));
    DWORD oldProtect;
    VirtualProtect(pSurfaceHolder_setTexture, sizeof(void *), PAGE_EXECUTE_READWRITE, &oldProtect);
    *pSurfaceHolder_setTexture = ((uint8_t *) asm_proxy_SurfaceHolder_setTexture) - ((uint8_t *) pSurfaceHolder_setTexture + 4);
    VirtualProtect(pSurfaceHolder_setTexture, sizeof(void *), oldProtect, &oldProtect);
  }
}
