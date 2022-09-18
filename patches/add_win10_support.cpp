//
// Created by DiaLight on 20.08.2022.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>

// add support for win 10
BOOL __stdcall proxy_checkOsCompatible(int maxVersion, int minVersion, uint16_t CSDVersion) {
  printf("caught proxy_checkOsCompatible %d %d %d\n", maxVersion, minVersion, CSDVersion);
  bool isCompatible = dk2::isOsVersionGE(10, minVersion, CSDVersion);
  printf("checkOsCompatible return %d\n", isCompatible);
  return isCompatible;
}

bool patch::add_win10_support() {
  if(!replaceXrefs(funptr<&dk2::isOsVersionGE>(), proxy_checkOsCompatible)) return false;
  return true;
}
