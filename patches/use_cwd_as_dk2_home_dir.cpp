//
// Created by DiaLight on 18.09.2022.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>
#include <api/patch.h>

// dk2 uses only backward slash as folder separator when calculating dk2 home directory
// path "F:\Games\Dungeon Keeper 2/DKII.exe" will be separated
//   to "F:\Games" and "Dungeon Keeper 2/DKII.exe"
// this patch replaces calculated dk2 home directory to current working directory

HookHandle *replaceExeDir = nullptr;

void __cdecl proxy_resolveDk2HomeDir() {
  dk2::resolveDk2HomeDir();
  char tmp[MAX_PATH];
  DWORD len = GetCurrentDirectoryA(MAX_PATH, tmp);
  strcpy(tmp + len, "\\");
  printf("replace exe dir path1: %s -> %s\n", dk2::globals::getDk2HomeDir(), tmp);
  strcpy(dk2::globals::getDk2HomeDir(), tmp);
}

bool patch::use_cwd_as_dk2_home_dir() {
  if(!replaceXrefs(funptr<&dk2::resolveDk2HomeDir>(), proxy_resolveDk2HomeDir)) return false;

  // strcpy(to=exeDir, fr=cmdl);
  // .text:0055C19A  shr     ecx, 2
  // .text:0055C19D  rep movsd
  // .text:0055C19F  mov     ecx, eax
  // .text:0055C1A1  and     ecx, 3
  // .text:0055C1A4  rep movsb
  replaceExeDir = HookHandle::overwrite(dk2_base + (0x0055C19A - dk2_virtual_base), 12);
  replaceExeDir->addHandler([](HookHandler &handle, Regs &regs, void *target) {
    char *cmdl = (char *) regs.esi;
    char *exeDir = (char *) regs.edi;
    DWORD len = GetCurrentDirectoryA(MAX_PATH, exeDir);
    strcpy(exeDir + len, "\\");
    printf("replace exe dir path2: %s -> %s\n", cmdl, exeDir);
  });
  return true;
}

