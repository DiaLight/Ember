//
// Created by DiaLight on 22.01.2023.
//

#ifndef EMBER_ASM_WRITEJUMP_H
#define EMBER_ASM_WRITEJUMP_H

#include <utils/patch.h>

static void asm_writeJump(void *pdst, void *psrc) {
    uint8_t *src = (uint8_t *) psrc;
    uint8_t *dst = (uint8_t *) pdst;
    {
        write_protect prot(src, sizeof(BYTE));
        *(BYTE *) src = 0xE9;
    }
    {
        write_protect prot(src + 1, sizeof(DWORD));
        *(DWORD *) (src + 1) = dst - (src + 5);
    }
}

#endif //EMBER_ASM_WRITEJUMP_H
