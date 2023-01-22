//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_GetVersion.h>
#include <api.h>


DWORD WINAPI asm_GetVersion(VOID) {
  return 0xA280105;
}
BOOL WINAPI asm_GetVersionExA(_Inout_ LPOSVERSIONINFOA lpVersionInformation) {
  lpVersionInformation->dwMajorVersion = 5;
  lpVersionInformation->dwMinorVersion = 1;
  return TRUE;
}

void gog::patch_GetVersion() {
  //  VirtualProtect((LPVOID)0x66C10C, 4u, 0x40u, &fdwReason);
  //  MEMORY[0x66C10C] = fake_GetVersion;
  //  VirtualProtect((LPVOID)0x66C10C, 4u, fdwReason, &fdwReason);
  {
    auto pGetVersion = (void **) (dk2_base + (0x0066C10C - dk2_virtual_base));
    DWORD oldProtect;
    VirtualProtect((LPVOID) pGetVersion, sizeof(void *), PAGE_EXECUTE_READWRITE, &oldProtect);
    *pGetVersion = asm_GetVersion;
    VirtualProtect((LPVOID) pGetVersion, sizeof(void *), oldProtect, &oldProtect);
  }

  //  VirtualProtect((LPVOID)0x66C090, 4u, 0x40u, &fdwReason);
  //  MEMORY[0x66C090] = fake_GetVersionExA;
  //  VirtualProtect((LPVOID)0x66C090, 4u, fdwReason, &fdwReason)
  {
    auto pGetVersionExA = (void **) (dk2_base + (0x0066C090 - dk2_virtual_base));
    DWORD oldProtect;
    VirtualProtect((LPVOID) pGetVersionExA, sizeof(void *), PAGE_EXECUTE_READWRITE, &oldProtect);
    *pGetVersionExA = asm_GetVersionExA;
    VirtualProtect((LPVOID) pGetVersionExA, sizeof(void *), oldProtect, &oldProtect);
  }
}
