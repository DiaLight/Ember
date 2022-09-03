//
// Created by DiaLight on 20.08.2022.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>

bool patch::reduce_title_screen_time() {
  auto *pos = funptr<&dk2::CFrontEndComponent::showTitleScreen>() + 0xF1;
  if(*(uint32_t *) pos != 10000) {
    printf("failed to patch time\n");
    return false;
  }
  DWORD oldProtect;
  VirtualProtect(pos, sizeof(uint32_t), PAGE_EXECUTE_READWRITE, &oldProtect);
  *(uint32_t *) pos = 500;  // sleep time
  VirtualProtect(pos, sizeof(uint32_t), oldProtect, NULL);
  return true;
}
