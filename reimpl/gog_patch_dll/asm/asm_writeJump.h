//
// Created by DiaLight on 22.01.2023.
//

#ifndef EMBER_ASM_WRITEJUMP_H
#define EMBER_ASM_WRITEJUMP_H

static void asm_writeJump(void *pdst, void *psrc) {
  uint8_t *src = (uint8_t *) psrc;
  uint8_t *dst = (uint8_t *) pdst;
  {
    DWORD oldProtect;
    VirtualProtect((LPVOID) src, sizeof(BYTE), PAGE_EXECUTE_READWRITE, &oldProtect);
    *(BYTE *)src = 0xE9;
    VirtualProtect((LPVOID) src, sizeof(BYTE), oldProtect, &oldProtect);
  }
  {
    DWORD oldProtect;
    VirtualProtect((LPVOID) (src + 1), sizeof(DWORD), PAGE_EXECUTE_READWRITE, &oldProtect);
    *(DWORD *) (src + 1) = dst - (src + 5);
    VirtualProtect((LPVOID) (src + 1), sizeof(DWORD), oldProtect, &oldProtect);
  }
}

#endif //EMBER_ASM_WRITEJUMP_H
