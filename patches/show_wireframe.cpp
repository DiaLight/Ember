//
// Created by DiaLight on 26.01.2023.
//
#include <dk2_patches.h>
#include <dk2/MyDirectDraw.h>
#include <dk2_info.h>
#include <hooks/direct_input.h>

namespace {
    DWORD g_modes_idx = 1;
    DWORD g_modes[] {
            D3DFILL_SOLID,
            D3DFILL_WIREFRAME,
            D3DFILL_POINT
    };
}

bool patch::show_wireframe() {

    // .data:0076C2B8 mydd_cpy.d3d_hal_device
    dk2::MyDirectDraw *pMydd_cpy_instance = (dk2::MyDirectDraw *) (api::dk2_base + (0x0076C2B8 - dk2_virtual_base));
    hook::DIRECT_INPUT_KEYBOARD_DATA.emplace_back([pMydd_cpy_instance](DIDEVICEOBJECTDATA *data) {
        bool isPressed = (data->dwData & 0x80) != 0;
        DWORD keyCode = data->dwOfs;
        switch (keyCode) {
            case DIK_F12:
                if (isPressed) {
                    IDirect3DDevice3 *dev3 = pMydd_cpy_instance->d3d3_halDevice;
                    if (dev3 != nullptr) {  // use gog_patch
                        dev3->SetRenderState(D3DRENDERSTATE_FILLMODE, g_modes[g_modes_idx++ % ARRAYSIZE(g_modes)]);
                    }
                }
                break;
        }
    });
    return true;
}

