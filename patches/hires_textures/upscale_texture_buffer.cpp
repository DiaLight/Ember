//
// Created by DiaLight on 28.12.2022.
//
#include <dk2_patches.h>
#include <dk2_info.h>
#include <utils/patch.h>


bool patch::upscale_texture_buffer() {
    unsigned upscale = 2;

    uint32_t *pTexSize = (uint32_t *) (api::dk2_base + (0x00592DC7 + 3 - dk2_virtual_base));

    {
        write_protect prot(pTexSize, sizeof(uint32_t));
        *pTexSize *= upscale;
    }
    return true;
}
