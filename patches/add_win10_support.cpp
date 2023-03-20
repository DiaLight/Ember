//
// Created by DiaLight on 20.08.2022.
//
#include <dk2_patches.h>
#include <cstdio>
#include <Windows.h>
#include <cstdint>
#include <dk2_functions.h>
#include <utils/patch.h>
#include <utils/xrefs.h>

// add support for win 10
BOOL __stdcall proxy_isOsVersionGE(int maxVersion, int minVersion, uint16_t CSDVersion) {
    printf("caught proxy_isOsVersionGE major=%d minor=%d %d\n", maxVersion, minVersion, CSDVersion);
    bool isCompatible = dk2::isOsVersionGE(10, minVersion, CSDVersion);
    printf("isOsVersionGE return %d\n", isCompatible);
    return isCompatible;
}

bool patch::add_win10_support() {
    if (!api::replaceXrefs(u8ptr<&dk2::isOsVersionGE>(), proxy_isOsVersionGE)) return false;
    return true;
}
