//
// Created by DiaLight on 07.04.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <utils/patch.h>
#include <reimpl.h>
#include <dk2/SurfaceHolder.h>
#include <dk2/CEngineDDSurface.h>
#include <dk2_globals.h>
#include <d3dtypes.h>

namespace {

    void __fastcall reimpl_fun(
            dk2::SurfaceHolder *this_,
            void *edx,
            float x, float y) {
        if ((dk2::mydd_scene.flags & 1) != 0) {
            this_->drawSpecial_128x128_mgsr(x, y);
            return;
        }
        DWORD alphablendEnable;
        dk2::mydd_devTexture.d3d3_halDevice->GetRenderState(D3DRENDERSTATE_ALPHABLENDENABLE, &alphablendEnable);
        DWORD textureHandle;
        dk2::mydd_devTexture.d3d3_halDevice->GetRenderState(D3DRENDERSTATE_TEXTUREHANDLE, &textureHandle);
        DWORD zFunc;
        dk2::mydd_devTexture.d3d3_halDevice->GetRenderState(D3DRENDERSTATE_ZFUNC, &zFunc);
        dk2::mydd_devTexture.d3d3_halDevice->SetRenderState(D3DRENDERSTATE_ZFUNC, D3DCMP_ALWAYS);
        static_assert(D3DCMP_ALWAYS == 8);
        dk2::mydd_devTexture.d3d3_halDevice->SetRenderState(D3DRENDERSTATE_ALPHABLENDENABLE, 0);
        if ((dk2::mydd_scene.flags & 1) != 0) {  // always false
            dk2::mgsr_lockedBuf_dw256x256 = (int32_t *) this_->ddsurf->lockBuf();
        } else {
            dk2::mydd_devTexture.d3d3_halDevice->SetTexture(0, this_->ddsurf->devTex);
            if (this_->ddsurf->ddSurf->IsLost()) {
                dk2::g_isCurDdSurfLost = 1;
            }
        }
        D3DTLVERTEX vertices[4];
        vertices[0].sx = x;
        vertices[0].sy = y;
        vertices[0].tu = 0.0;
        vertices[0].tv = 0.0;

        vertices[1].sx = x + 128.0;
        vertices[1].sy = y;
        vertices[1].tu = 1.0;
        vertices[1].tv = 0.0;

        vertices[2].sx = x + 128.0;
        vertices[2].sy = y + 128.0;
        vertices[2].tu = 1.0;
        vertices[2].tv = 1.0;

        vertices[3].sx = x;
        vertices[3].sy = y + 128.0;
        vertices[3].tu = 0.0;
        vertices[3].tv = 1.0;

        for (int i = 0; i < ARRAYSIZE(vertices); ++i) {
            D3DTLVERTEX *p_rhw = &vertices[i];
            p_rhw->sz = 0.0;
            p_rhw->rhw = 1.0;
            p_rhw->color = -1;
            p_rhw->specular = 0;
        }
        WORD indices1[6] {
                0, 1,
                2, 0,
                2, 3,
        };
        dk2::mydd_devTexture.d3d3_halDevice->DrawIndexedPrimitive(
                D3DPT_TRIANGLELIST,
                D3DFVF_TLVERTEX,
                vertices, ARRAYSIZE(vertices),
                indices1, ARRAYSIZE(indices1),
                D3DDP_DONOTUPDATEEXTENTS
        );
        static_assert(ARRAYSIZE(indices1) == 6);
        static_assert(D3DDP_DONOTUPDATEEXTENTS == 8);
        static_assert(D3DFVF_TLVERTEX == 0x1C4);
        DWORD fillMode;
        dk2::mydd_devTexture.d3d3_halDevice->GetRenderState(D3DRENDERSTATE_FILLMODE, &fillMode);
        dk2::mydd_devTexture.d3d3_halDevice->SetRenderState(D3DRENDERSTATE_FILLMODE, D3DFILL_WIREFRAME);
        dk2::mydd_devTexture.d3d3_halDevice->SetRenderState(D3DRENDERSTATE_TEXTUREHANDLE, 0);
        WORD indices2[8] {
                0, 1,
                1, 2,
                2, 3,
                3, 0
        };
        for (int i = 0; i < ARRAYSIZE(vertices); ++i) {
            vertices[0].sx -= 1.0;
            vertices[0].sy -= 1.0;

            vertices[1].sx += 1.0;
            vertices[1].sy -= 1.0;

            vertices[2].sx += 1.0;
            vertices[2].sy += 1.0;

            vertices[3].sx -= 1.0;
            vertices[3].sy += 1.0;
            dk2::mydd_devTexture.d3d3_halDevice->DrawIndexedPrimitive(
                    D3DPT_LINELIST, D3DFVF_TLVERTEX,
                    vertices, ARRAYSIZE(vertices),
                    indices2, ARRAYSIZE(indices2),
                    D3DDP_DONOTUPDATEEXTENTS
            );
            static_assert(ARRAYSIZE(indices2) == 8);
            static_assert(D3DFVF_TLVERTEX == 0x1C4);
        }
        dk2::mydd_devTexture.d3d3_halDevice->SetRenderState(D3DRENDERSTATE_ZFUNC, zFunc);
        dk2::mydd_devTexture.d3d3_halDevice->SetRenderState(D3DRENDERSTATE_FILLMODE, fillMode);
        dk2::mydd_devTexture.d3d3_halDevice->SetRenderState(D3DRENDERSTATE_TEXTUREHANDLE, textureHandle);
        dk2::mydd_devTexture.d3d3_halDevice->SetRenderState(D3DRENDERSTATE_ALPHABLENDENABLE, alphablendEnable);
    }
}

bool reimpl_mydd_devTexture_uses() {

    write_jump(u8ptr<&dk2::SurfaceHolder::drawSpecial_128x128>(), reimpl_fun);

    return true;
}

