//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_SurfaceHolder_setTexture.h>
#include <dk2/SurfaceHolder.h>
#include <dk2_info.h>
#include <utils/patch.h>


void *asm_SurfaceHolder_setTexture = nullptr;

//int __cdecl proxy_SurfaceHolder_setTexture(dk2::SurfaceHolder *surfh, int stage) {
//    if (surfh == nullptr) return 0;
//    __asm {
//        jmp asm_SurfaceHolder_setTexture;  // JUMPOUT(0x592B80);
//    }
//}
__declspec(naked)
int __cdecl asm_proxy_SurfaceHolder_setTexture(dk2::SurfaceHolder *surfh, int stage) {
    __asm {
        mov     eax,[esp+4]
        test    eax, eax
        jz short locret_1000154E
        jmp     asm_SurfaceHolder_setTexture
    locret_1000154E:
        retn
    }
}

void gog::patch_SurfaceHolder_setTexture() {
    // .text:00588E39    call  SurfaceHolder_setTexture
    auto pSurfaceHolder_setTexture1 = (uint32_t *) (api::dk2_base + (0x00588E39 + 1 - dk2_virtual_base));
    {
        write_protect prot(pSurfaceHolder_setTexture1, sizeof(void *));
        asm_SurfaceHolder_setTexture = ((uint8_t *) pSurfaceHolder_setTexture1 + 4) + *pSurfaceHolder_setTexture1;
        *pSurfaceHolder_setTexture1 = ((uint8_t *) asm_proxy_SurfaceHolder_setTexture) - ((uint8_t *) pSurfaceHolder_setTexture1 + 4);
    }

    // .text:0058A1CF    call  SurfaceHolder_setTexture
    auto pSurfaceHolder_setTexture2 = (uint32_t *) (api::dk2_base + (0x0058A1CF + 1 - dk2_virtual_base));
    {
        write_protect prot(pSurfaceHolder_setTexture2, sizeof(void *));
        *pSurfaceHolder_setTexture2 = ((uint8_t *) asm_proxy_SurfaceHolder_setTexture) - ((uint8_t *) pSurfaceHolder_setTexture2 + 4);
    }
}
