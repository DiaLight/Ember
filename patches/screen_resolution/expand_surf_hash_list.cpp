//
// Created by DiaLight on 16.12.2022.
//
#include <dk2_patches.h>
#include <cstdio>
#include <dk2_info.h>
#include <utils/patch.h>

bool patch::expand_surf_hash_list() {
    // .text:00592FAC                 push    18h
    uint8_t *pCount = (uint8_t *) (api::dk2_base + (0x00592FAC + 1 - dk2_virtual_base));
    {
        write_protect prot(pCount, sizeof(uint8_t));
        *pCount = 0x68;  // don't know how to correct scale surf reserve
    }
    return true;
}
