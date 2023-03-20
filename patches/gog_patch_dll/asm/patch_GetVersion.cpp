//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_GetVersion.h>
#include <dk2_info.h>
#include <utils/patch.h>


DWORD WINAPI asm_GetVersion(VOID) {
    return 0xA280105;
}

BOOL WINAPI asm_GetVersionExA(_Inout_ LPOSVERSIONINFOA lpVersionInformation) {
    lpVersionInformation->dwMajorVersion = 5;
    lpVersionInformation->dwMinorVersion = 1;
    return TRUE;
}

void gog::patch_GetVersion() {
    auto pGetVersion = (void **) (api::dk2_base + (0x0066C10C - dk2_virtual_base));
    {
        write_protect prot(pGetVersion, sizeof(void *));
        *pGetVersion = asm_GetVersion;
    }

    auto pGetVersionExA = (void **) (api::dk2_base + (0x0066C090 - dk2_virtual_base));
    {
        write_protect prot(pGetVersionExA, sizeof(void *));
        *pGetVersionExA = asm_GetVersionExA;
    }
}
