//
// Created by DiaLight on 17.04.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <utils/patch.h>
#include <dk2/Event0_unk6.h>
#include <reimpl.h>


namespace {

    bool attachToRoot(dk2::MyGame *game) {
        HRESULT hr;
        dk2::MyDdSurfaceEx *rootSurfEx;
        if (game->isWindowed) {
            rootSurfEx = game->c_window_test.getCurOffScreenSurf();
        } else {
            rootSurfEx = dk2::g_pCurOffScreen;
        }
        if (!rootSurfEx) return false;
        LPDIRECTDRAWSURFACE rootDdSurf = dk2::MyDdSurface_addRef(&rootSurfEx->dd_surf, 0);
        if (!rootDdSurf) return false;
        hr = rootDdSurf->AddAttachedSurface(game->zbufferSurf);
        if (FAILED(hr)) return false;
        return true;
    }
    int __fastcall reimpl_MyGame_createSurface(dk2::MyGame *_this, void *edx, int mipMapCount) {
        HRESULT hr;
        DDSURFACEDESC desc;
        memset(&desc, 0, sizeof(desc));
        desc.dwSize = sizeof(DDSURFACEDESC);
        static_assert(sizeof(DDSURFACEDESC) == 108);
        desc.dwFlags = DDSD_CAPS | DDSD_WIDTH | DDSD_HEIGHT | DDSD_ZBUFFERBITDEPTH;
        static_assert((DDSD_CAPS | DDSD_WIDTH | DDSD_HEIGHT | DDSD_ZBUFFERBITDEPTH) == 71);
        desc.ddsCaps.dwCaps = DDSCAPS_ZBUFFER | DDSCAPS_VIDEOMEMORY;
        static_assert((DDSCAPS_ZBUFFER | DDSCAPS_VIDEOMEMORY) == 0x24000);
        desc.dwWidth = _this->dwWidth;
        desc.dwHeight = _this->dwHeight;
        desc.dwMipMapCount = mipMapCount;
        hr = dk2::dk2dd_get(false)->CreateSurface(&desc, &_this->zbufferSurf, NULL);
        if (FAILED(hr)) {
            _this->zbufferSurf = nullptr;
            return false;
        }
        if(!attachToRoot(_this)) {
            _this->zbufferSurf->Release();
            _this->zbufferSurf = nullptr;
            return false;
        }
        return true;
    }

    int __stdcall reimpl_MyGame_D3DENUMDEVICESCALLBACK(
            GUID *lpGuid,
            char *lpDeviceDescription,
            char *lpDeviceName,
            LPD3DDEVICEDESC a4,
            LPD3DDEVICEDESC a5,
            dk2::MyGame *game) {
        unsigned int f69_d3devCount;
        f69_d3devCount = game->d3devCount;
        if(f69_d3devCount >= 0x10) return 0;
        dk2::MyD3DevInfo *inf = &game->d3devArr[f69_d3devCount];
        inf->lpGuid = *lpGuid;
        inf->lpDeviceDescription = lpDeviceDescription;
        inf->lpDeviceName = lpDeviceName;
        inf->desc1 = a4;
        inf->desc2 = a5;
        ++game->d3devCount;
        return 1;
    }
    int __fastcall reimpl_MyGame_collect3dDevices(dk2::MyGame *this_, void *edx) {
        IDirect3D2 *f6D_pIDirect3D2 = this_->pIDirect3D2;
        if (f6D_pIDirect3D2) {
            f6D_pIDirect3D2->Release();
            this_->pIDirect3D2 = nullptr;
        }
        this_->d3devCount = 0;

        LPDIRECTDRAW lpdd = dk2::dk2dd_get(false);
        if (
                lpdd->QueryInterface(dk2::CLSID_IDirect3D2, (LPVOID *) &this_->pIDirect3D2) >= 0 &&
                this_->pIDirect3D2->EnumDevices((LPD3DENUMDEVICESCALLBACK) dk2::MyGame_D3DENUMDEVICESCALLBACK, this_) < 0
                ) {
            this_->pIDirect3D2->Release();
            this_->pIDirect3D2 = nullptr;
        }

        DDSCAPS caps;
        caps.dwCaps = 0x10000000;
        this_->totalDisplayMemory = 0;
        IDirectDraw2 *lpdd2;
        LPDIRECTDRAW lpdd_ = dk2::dk2dd_get(false);
        int result = lpdd_->QueryInterface(dk2::CLSID_IDirectDraw2, (LPVOID *) &lpdd2);
        if (result < 0)
            return result;
        DWORD freeMemory;
        if (lpdd2->GetAvailableVidMem(&caps, (LPDWORD) &this_->totalDisplayMemory, &freeMemory) >= 0) {
            unsigned int availVidMem = 2
                                       * dk2::MyResources_instance.video_settings.display_width
                                       * dk2::MyResources_instance.video_settings.display_height
                                       + this_->totalDisplayMemory;
            this_->totalDisplayMemory = availVidMem;
            dk2::MyGame_debugMsg(this_, "Available Video Memory %dK\n", availVidMem >> 10);
            return lpdd2->Release();
        } else {
            IDirectDraw2 *lpdd2_ = lpdd2;
            this_->totalDisplayMemory = 0;
            return lpdd2_->Release();
        }
        return result;
    }

    int __fastcall reimpl_MyGame_createZBufferSurf(dk2::MyGame *this_, void *edx, int mipMapCount) {
        DDSURFACEDESC desc;
        memset(&desc, 0, sizeof(desc));

        int dwWidth = this_->dwWidth;
        int dwHeight = this_->dwHeight;
        desc.dwSize = 108;
        desc.dwFlags = 0x47;
        desc.ddsCaps.dwCaps = DDSCAPS_ZBUFFER | DDSCAPS_VIDEOMEMORY;
        static_assert((DDSCAPS_ZBUFFER | DDSCAPS_VIDEOMEMORY) == 0x24000);
        desc.dwWidth = dwWidth;
        desc.dwHeight = dwHeight;
        desc.dwMipMapCount = mipMapCount;
        LPDIRECTDRAW lpdd = dk2::dk2dd_get(false);

        if (lpdd->CreateSurface(&desc, &this_->zbufferSurf, NULL) >= 0) {
            dk2::MyDdSurfaceEx *CurOffScreenSurf;
            if (this_->isWindowed)
                CurOffScreenSurf = this_->c_window_test.getCurOffScreenSurf();
            else
                CurOffScreenSurf = dk2::g_pCurOffScreen;
            if (CurOffScreenSurf) {
                dk2::MyDdSurfaceEx *offscreen = this_->isWindowed ? this_->c_window_test.getCurOffScreenSurf() : dk2::g_pCurOffScreen;
                LPDIRECTDRAWSURFACE lpddsurf = MyDdSurface_addRef(&offscreen->dd_surf, 0);
                if (lpddsurf) {
                    if (lpddsurf->AddAttachedSurface(this_->zbufferSurf) >= 0)
                        return 1;
                }
            }
            this_->zbufferSurf->Release();
        }
        this_->zbufferSurf = nullptr;
        return 0;
    }

#define VideoFlags_MMXSoftwareRenderer 1

    int __fastcall reimpl_CPCEngineInterface_init3d(dk2::CPCEngineInterface *this_, void *edx) {
        int flags = 0;
        if (dk2::MyResources_instance.video_settings.selected_3D_engine == 4)
            flags = VideoFlags_MMXSoftwareRenderer;
        if (!dk2::MyGame_instance.zbufferSurf) {
            flags |= VideoFlags_MMXSoftwareRenderer;
            dk2::MyResources_instance.video_settings.setSelected3dEngine(4);
        }
        if (dk2::MyResources_instance.video_settings.untouched2_eq_1)
            flags |= 2u;
        if (dk2::MyResources_instance.video_settings.cmd_flag_32BITTEXTURES)
            flags |= 4u;
        if (dk2::MyResources_instance.video_settings.cmd_flag_SOFTWAREFILTER)
            flags |= 8u;
        if (dk2::MyResources_instance.video_settings.isBumpmappingEnabled == 1) {
            flags |= 0x10u;
        } else if (dk2::MyResources_instance.video_settings.isBumpmappingEnabled == 2) {
            flags |= 0x20u;
        }

        {
            printf("[INFO]: init 3D engine=%d hires=%d\n",
                   dk2::MyResources_instance.video_settings.selected_3D_engine,
                   dk2::MyResources_instance.video_settings.high_res_texture
            );
            int isLowResTexture = dk2::MyResources_instance.video_settings.high_res_texture == 0;

            dk2::MyDdSurfaceEx *primarySurf = dk2::Obj6723A0_getPrimarySurf();
            IDirectDrawSurface *ddPrimarySurf = MyDdSurface_addRef(&primarySurf->dd_surf, 0);

            dk2::MyDdSurfaceEx *offScrSurf = dk2::MyGame_instance.getCurOffScreenSurf();
            IDirectDrawSurface *ddOffScrSurf = MyDdSurface_addRef(&offScrSurf->dd_surf, 0);

            IDirectDraw *lpdd = dk2::dk2dd_get(false);
            int initResult = dk2::mydd_scene_init(
                    lpdd,
                    ddOffScrSurf,
                    ddPrimarySurf,
                    &dk2::MyResources_instance.video_settings.deviceGuid,
                    flags,
                    isLowResTexture);
            this_->init3dResult = initResult;
            if (initResult) return 1;
        }

        if ((flags & 0x30) != 0) {  // try disable bump mapping
            flags &= ~0x30u;
            printf("[WARN]: init 3D fallback with disable bump mapping\n");
            int isLowResTexture = dk2::MyResources_instance.video_settings.high_res_texture == 0;

            dk2::MyDdSurfaceEx *primarySurf = dk2::Obj6723A0_getPrimarySurf();
            IDirectDrawSurface *ddPrimarySurf = MyDdSurface_addRef(&primarySurf->dd_surf, 0);

            dk2::MyDdSurfaceEx *offScrSurf = dk2::MyGame_instance.getCurOffScreenSurf();
            IDirectDrawSurface *ddOffScrSurf = MyDdSurface_addRef(&offScrSurf->dd_surf, 0);

            IDirectDraw *lpdd = dk2::dk2dd_get(false);
            int initResult = dk2::mydd_scene_init(
                    lpdd,
                    ddOffScrSurf,
                    ddPrimarySurf,
                    &dk2::MyResources_instance.video_settings.deviceGuid,
                    flags,
                    isLowResTexture);
            this_->init3dResult = initResult;
            if (initResult) return 1;
        }

        {
            printf("[WARN]: init 3D fallback with MMX Software Renderer\n");
            dk2::MyResources_instance.video_settings.setSelected3dEngine(4);
            int isLowResTexture = dk2::MyResources_instance.video_settings.high_res_texture == 0;

            dk2::MyDdSurfaceEx *primarySurf = dk2::Obj6723A0_getPrimarySurf();
            IDirectDrawSurface *ddPrimarySurf = MyDdSurface_addRef(&primarySurf->dd_surf, 0);

            dk2::MyDdSurfaceEx *offScrSurf = dk2::MyGame_instance.getCurOffScreenSurf();
            IDirectDrawSurface *ddOffScrSurf = MyDdSurface_addRef(&offScrSurf->dd_surf, 0);

            IDirectDraw *lpdd = dk2::dk2dd_get(false);
            int initResult = dk2::mydd_scene_init(
                    lpdd,
                    ddOffScrSurf,
                    ddPrimarySurf,
                    &dk2::MyResources_instance.video_settings.deviceGuid,
                    flags | VideoFlags_MMXSoftwareRenderer,
                    isLowResTexture);
            this_->init3dResult = initResult;
            if (initResult) return 1;
        }
        return 0;
    }

    dk2::AABB *__fastcall reimpl_Obj6723A0_getOffScreenAabb(dk2::Obj6723B8 *this_, void *edx, dk2::AABB *aabb) {
        if (dk2::dk2dd_get(false)) {
            dk2::MyDdSurfaceEx *surf = this_->v_getCurOffScreenSurf();
            dk2::MySurface *mysurf = surf->updateDesc();
            aabb->minX = 0;
            aabb->minY = 0;
            aabb->maxX = mysurf->dwWidth;
            aabb->maxY = mysurf->dwHeight;
            return aabb;
        }
        aabb->minX = 0;
        aabb->minY = 0;
        aabb->maxX = 0;
        aabb->maxY = 0;
        return aabb;
    }

    void __fastcall reimpl_CFrontEndComponent_showMovie(dk2::CFrontEndComponent *this_, void *edx, LPSTR pszFileName) {
        // dont show movies
        printf("[INFO] skip movie %s\n", pszFileName);
    }

}

bool reimpl_dk2dd_get_uses() {

    write_jump(u8ptr<&dk2::MyGame::createZBufferSurf>(), reimpl_MyGame_createSurface);
    write_jump(u8ptr<&dk2::MyGame::collect3dDevices>(), reimpl_MyGame_collect3dDevices);
    write_jump(&dk2::MyGame_D3DENUMDEVICESCALLBACK, reimpl_MyGame_D3DENUMDEVICESCALLBACK);
    write_jump(u8ptr<&dk2::MyGame::createZBufferSurf>(), reimpl_MyGame_createZBufferSurf);
    write_jump(u8ptr<&dk2::CPCEngineInterface::init3d>(), reimpl_CPCEngineInterface_init3d);
    write_jump(u8ptr<&dk2::Obj6723B8::Obj6723A0_getOffScreenAabb>(), reimpl_Obj6723A0_getOffScreenAabb);
//    write_jump(u8ptr<&dk2::CFrontEndComponent::showMovie>(), reimpl_CFrontEndComponent_showMovie);

    return true;
}
