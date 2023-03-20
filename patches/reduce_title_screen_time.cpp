//
// Created by DiaLight on 20.08.2022.
//
#include <dk2_patches.h>
#include <cstdio>
#include <dk2_functions.h>
#include <dk2/CFrontEndComponent.h>
#include <utils/patch.h>

bool patch::reduce_title_screen_time() {
    auto *pos = u8ptr<&dk2::CFrontEndComponent::showTitleScreen>() + 0xF1;
    if(*(uint32_t *) pos != 10000) {
        printf("failed to patch time\n");
        return false;
    }
    {
        write_protect prot(pos);
        *(uint32_t *) pos = 500;  // sleep time
    }
    return true;
}
