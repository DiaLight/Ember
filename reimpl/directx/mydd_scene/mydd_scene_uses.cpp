//
// Created by DiaLight on 17.04.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <utils/patch.h>
#include <utils/stacktrace.h>
#include <reimpl.h>
#include <dk2/MyDblNamedSurface.h>


namespace {

    BOOL __cdecl reimpl_mydd_scene_init(
            LPDIRECTDRAW dd,
            LPDIRECTDRAWSURFACE ddOffScreen,
            LPDIRECTDRAWSURFACE ddPrimarySurf,
            GUID *deviceGuid,
            __int16 flags,
            int isLowResTexture) {

        dk2::mydd_scene_destroy();
        dk2::is3dInitialized = 1;
        dd->QueryInterface(dk2::CLSID_IDirectDraw4, (LPVOID *)&dk2::mydd_scene);
        ddOffScreen->QueryInterface(dk2::CLSID_IDirectDrawSurface4, (LPVOID *)&dk2::mydd_scene.ddsurf4_offScreen);
        ddPrimarySurf->QueryInterface(dk2::CLSID_IDirectDrawSurface4, (LPVOID *)&dk2::mydd_scene.ddsurf4_primarySurf);
        dk2::mydd_scene.reductionLevel = isLowResTexture;
        dk2::mydd_scene.flags = flags;
        DDSURFACEDESC surfDesc;
        memset(&surfDesc, 0, sizeof(surfDesc));
        surfDesc.dwSize = sizeof(DDSURFACEDESC);
        static_assert(sizeof(DDSURFACEDESC) == 108);
        ddOffScreen->GetSurfaceDesc(&surfDesc);
        dk2::g_sceneWidth = surfDesc.dwWidth;
        dk2::g_sceneHeight = surfDesc.dwHeight;
        dk2::g2_sceneLeft = 0;
        dk2::g2_sceneTop = 0;
        dk2::g2_sceneWidth = surfDesc.dwWidth;
        dk2::g2_sceneHeight = surfDesc.dwHeight;
        if ( (dk2::mydd_scene.flags & 1) != 0 ) {
            // Martin Griffiths MMX Software Renderer
            dk2::mydd_scene.buf = dk2::init_mgsr(ddOffScreen, &dk2::mydd_scene.buf2, surfDesc.dwWidth, surfDesc.dwHeight);
            dk2::grpoly_mydd_buf2 = dk2::mydd_scene.buf2;
            dk2::grpoly_mydd_buf = dk2::mydd_scene.buf;
            dk2::mgsr_buf2_width = 2 * dk2::g_sceneWidth;
            dk2::mgsr_buf_width = 4 * dk2::g_sceneWidth;
            dk2::mgsr_initialized = 1;
        } else {
            dk2::mydd_scene.dd4->QueryInterface(dk2::CLSID_IDirect3D3, (LPVOID *)&dk2::mydd_scene.d3d3);
            HRESULT hresult;
            hresult = dk2::mydd_scene.d3d3->CreateViewport(&dk2::mydd_scene.d3d3_viewport, NULL);
            if(hresult) {
                dk2::mydd_scene_destroy();
                return 0;
            }
            hresult = dk2::mydd_scene.d3d3->CreateDevice(
                    dk2::CLSID_IDirect3DHALDevice,
                    dk2::mydd_scene.ddsurf4_offScreen,
                    &dk2::mydd_scene.d3d3_halDevice,
                    NULL);
            if (hresult) {
                dk2::mydd_scene_destroy();
                return 0;
            }
            dk2::mydd_scene.d3d3_halDevice->AddViewport(dk2::mydd_scene.d3d3_viewport);
            dk2::mydd_scene.d3d3_halDevice->SetCurrentViewport(dk2::mydd_scene.d3d3_viewport);
        }
        if ( !dk2::configureFlagsAndTexturesCount() || !dk2::mydd_devTexture_init(&dk2::mydd_scene) ) {
            dk2::mydd_scene_destroy();
            return 0;
        }
        if ((dk2::mydd_scene.flags & 2) != 0) {
            dk2::mydd_scene.ddsurf4_primarySurf->QueryInterface(dk2::CLSID_IDirectDrawGammaControl, (LPVOID *)&dk2::dd_gamma_control);
            if (dk2::is3dInitialized) {
                if ((dk2::mydd_scene.flags & 2) != 0) {
                    dk2::dd_gamma_control->SetGammaRamp(0, &dk2::gamma_ramp);
                }
            }
        }
        dk2::mydd_triangles_init(&dk2::mydd_scene);
        dk2::mydd_uvs_init(&dk2::mydd_scene);
        dk2::shadows_init();
        dk2::MyDblNamedSurface testLightSurf;
        testLightSurf.constructor("EngineTestLight", "EngineTestLight", 16, 0, 1);
        dk2::EngineTestLight_a31x400_idx = MyEntryBuf_MyScaledSurface_create(&testLightSurf, 1);

        dk2::MyDblNamedSurface testCrossSurf;
        testCrossSurf.constructor("EngineTestCross", "EngineTestCross", 16, 0, 1);
        dk2::EngineTestCross_a31x400_idx = MyEntryBuf_MyScaledSurface_create(&testCrossSurf, 1);

        dk2::MyDblNamedSurface whiteTextureSurf;
        whiteTextureSurf.constructor("EngineTextureWhite", "EngineTextureWhite", 0, 0, 1);
        dk2::EngineTextureWhite_a31x400_idx = MyEntryBuf_MyScaledSurface_create(&whiteTextureSurf, 1);
        dk2::g_isCurDdSurfLost = 0;
        return 1;
    }

}

bool reimpl_mydd_devTexture_uses();

bool reimpl_mydd_scene_uses() {

    write_jump(&dk2::mydd_scene_init, reimpl_mydd_scene_init);

    if(!reimpl_mydd_devTexture_uses()) return false;

    return true;
}
