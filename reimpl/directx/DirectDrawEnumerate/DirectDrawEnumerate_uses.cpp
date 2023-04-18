//
// Created by DiaLight on 17.04.2023.
//
#include <ddraw.h>
#include <dk2_functions.h>
#include <dk2_globals.h>
#include <utils/patch.h>
#include <utils/stacktrace.h>
#include <reimpl.h>
#include <dk2/DxDeviceInfo.h>
#include <dk2/DxD3dInfo.h>
#include <dk2/DxModeInfo.h>


namespace {

    BOOL __stdcall reimpl_collect_namesAndDescs_DDEnumCB(GUID *guid, LPSTR name, LPSTR desc, dk2::MyGame *ctx) {
        if ( guid ) {
            ctx->guid_arr16[ctx->dds_count] = *guid;
            ctx->is_empty_dd[ctx->dds_count] = 0;
        } else {
            ctx->is_empty_dd[ctx->dds_count] = 1;
        }
        strncpy(ctx->dds_descs_arr16[ctx->dds_count], desc, 64);
        ctx->dds_descs_arr16[ctx->dds_count][63] = '\0';
        strncpy(ctx->dds_names_arr16[ctx->dds_count], name, 64);
        ctx->dds_names_arr16[ctx->dds_count++][63] = '\0';
        return TRUE;
    }

    int __stdcall reimpl_collect_devices_DDEnumDevicesCB(
            GUID *lpGuid,
            LPCSTR lpDeviceDescription,
            LPCSTR lpDeviceName,
            LPD3DDEVICEDESC *desc1,
            LPD3DDEVICEDESC *desc2,
            int devIdx
    ) {
        if ( strstr(lpDeviceName, "Ramp") || strstr(lpDeviceName, "RGB Emulation") )
            return TRUE;
        dk2::DxDeviceInfo &devInfo = dk2::ddraw_devices[devIdx];
        int infoIdx = devInfo.infoListCount;
        if ( infoIdx ) {
            devInfo.infoList = (dk2::DxD3dInfo *) dk2::_realloc(
                    devInfo.infoList,
                    sizeof(dk2::DxD3dInfo) * (infoIdx + 1)
            );
        } else {
            devInfo.infoList = (dk2::DxD3dInfo *) dk2::_malloc_1(sizeof(dk2::DxD3dInfo));
            static_assert(sizeof(dk2::DxD3dInfo) == 0x19Au);
        }
        dk2::DxD3dInfo &d3dInfo = devInfo.infoList[infoIdx];
        if (lpGuid) {
            d3dInfo.pGuid = &d3dInfo.guid;
            d3dInfo.guid = *lpGuid;
        } else {
            d3dInfo.pGuid = NULL;
        }
        lstrcpyA(d3dInfo.desc, lpDeviceDescription);
        lstrcpyA(d3dInfo.name, lpDeviceName);
        LPD3DDEVICEDESC *desc_ = desc1;
        if(desc1[1]) {
            d3dInfo.hasDesc = 1;
        } else {
            desc_ = desc2;
            d3dInfo.hasDesc = 0;
        }
        memcpy(
                &d3dInfo.devDesc,
                desc_,
                sizeof(d3dInfo.devDesc));
        d3dInfo.f192 = 0;
        d3dInfo.texCapsAnd1 = d3dInfo.devDesc.dpcTriCaps.dwTextureCaps & 1;
        d3dInfo.hasZbuffer = d3dInfo.devDesc.dwDeviceZBufferBitDepth != 0;
        ++devInfo.infoListCount;
        return TRUE;
    }

    BOOL __stdcall reimpl_collect_devices_DDEnumCB(GUID *lpGUID, LPSTR driverName, LPSTR driverDesc, LPVOID a4) {
        int device_idx = dk2::ddraw_device_count;
        dk2::DxDeviceInfo *devs;
        if ( dk2::ddraw_device_count ) {
            devs = (dk2::DxDeviceInfo *) dk2::_realloc(dk2::ddraw_devices, sizeof(dk2::DxDeviceInfo) * (dk2::ddraw_device_count + 1));
            static_assert(sizeof(dk2::DxDeviceInfo) == 0x21A);
        } else {
            devs = (dk2::DxDeviceInfo *) dk2::_malloc_1(sizeof(dk2::DxDeviceInfo));
            static_assert(sizeof(dk2::DxDeviceInfo) == 538u);
        }
        dk2::ddraw_devices = devs;
        int device_offs = device_idx;
        if ( lpGUID ) {
            devs[device_idx].pGuid = &devs[device_idx].guid;
            dk2::ddraw_devices[device_idx].guid = *lpGUID;
        } else {
            devs[device_idx].pGuid = 0;
        }
        lstrcpyA(dk2::ddraw_devices[device_offs].desc, driverName);
        lstrcpyA(dk2::ddraw_devices[device_offs].name, driverDesc);
        dk2::ddraw_devices[device_offs].modeListCount = 0;
        dk2::ddraw_devices[device_offs].modeList = 0;
        dk2::ddraw_devices[device_offs].infoListCount = 0;
        dk2::ddraw_devices[device_offs].infoList = 0;

        LPDIRECTDRAW lpDD;
        DirectDrawCreate(lpGUID, &lpDD, NULL);
        dk2::ddraw_devices->ddcaps.dwSize = sizeof(DDCAPS);
        static_assert(sizeof(DDCAPS) == 380);
        lpDD->GetCaps(&dk2::ddraw_devices->ddcaps, NULL);

        dk2::DxDeviceInfo *ddraw_device = &dk2::ddraw_devices[device_offs];

        ddraw_device->dwVendorId = 0;
        ddraw_device->dwDeviceId = 0;

        IDirectDraw4 *dd4;
        DDDEVICEIDENTIFIER ddDevId;
        if ( lpDD->QueryInterface(dk2::CLSID_IDirectDraw4, (LPVOID *)&dd4) >= 0 && dd4->GetDeviceIdentifier(&ddDevId, 1) >= 0 ) {
            int dwDeviceId = ddDevId.dwDeviceId;
            ddraw_device->dwVendorId = ddDevId.dwVendorId;
            ddraw_device->dwDeviceId = dwDeviceId;
            dd4->Release();
        }
        dk2::ddraw_devices[device_offs].isVendor121A = 0;
        if (dk2::ddraw_devices[device_offs].dwVendorId == 0x121A) {
            int f212_dwDeviceId = dk2::ddraw_devices[device_offs].dwDeviceId;
            if (f212_dwDeviceId == 1 || f212_dwDeviceId == 2) {
                dk2::ddraw_devices[device_offs].isVendor121A = 1;
            }
        }
        {
            IDirect3D *d3d;
            lpDD->QueryInterface(dk2::CLSID_IDirect3D, (LPVOID *)&d3d);
            d3d->EnumDevices((LPD3DENUMDEVICESCALLBACK) dk2::collect_devices_DDEnumDevicesCB, (LPVOID) device_idx);
            d3d->Release();
        }
        lpDD->Release();
        ++dk2::ddraw_device_count;
        return TRUE;
    }

    int __stdcall reimpl_collect_displayModes_DDEnumModesCB(DDSURFACEDESC *surfDesc, int idx_1) {
        int idx = idx_1;
        int f1FE_modeListCount = dk2::ddraw_devices[idx_1].modeListCount;
        dk2::DxModeInfo *ddraw_mode;
        if ( f1FE_modeListCount ) {
            ddraw_mode = (dk2::DxModeInfo *) dk2::_realloc(dk2::ddraw_devices[idx].modeList, 124 * (f1FE_modeListCount + 1));
        } else {
            ddraw_mode = (dk2::DxModeInfo *) dk2::_malloc_1(0x7Cu);
            static_assert(sizeof(dk2::DxModeInfo) == 0x7Cu);
        }
        dk2::ddraw_devices[idx].modeList = ddraw_mode;
        int mode_idx = f1FE_modeListCount;
        dk2::ddraw_devices[idx].modeList[mode_idx].dwWidth = surfDesc->dwWidth;
        dk2::ddraw_devices[idx].modeList[mode_idx].dwHeight = surfDesc->dwHeight;
        dk2::ddraw_devices[idx].modeList[mode_idx].dwRGBBitCount = surfDesc->ddpfPixelFormat.dwRGBBitCount;
        dk2::ddraw_devices[idx].modeList[mode_idx].hasFlag_shr5and1 = (surfDesc->ddpfPixelFormat.dwFlags >> 5) & 1;
        ++dk2::ddraw_devices[idx].modeListCount;
        return 1;
    }

    BOOL __stdcall reimpl_collect_displayModes_DDEnumCB(GUID *lpGUID, LPSTR a2, LPSTR a3, LPVOID hWindow) {
        void *idx; // esi
        LPDIRECTDRAW lpDD; // [esp+2Ch] [ebp-4h] BYREF

        idx = (void *)dk2::dd_index;
        dk2::ddraw_devices[dk2::dd_index].modeListCount = 0;
        DirectDrawCreate(lpGUID, &lpDD, 0);
        lpDD->SetCooperativeLevel((HWND)hWindow, 21);
        lpDD->EnumDisplayModes(0, 0, idx, (LPDDENUMMODESCALLBACK) dk2::collect_displayModes_DDEnumModesCB);
        lpDD->SetCooperativeLevel((HWND)hWindow, 8);
        lpDD->Release();
        ++dk2::dd_index;
        return 1;
    }

#ifndef _FPU_GETCW
#define _FPU_GETCW(cw) \
        __asm {\
            fnstcw cw \
        }
#endif

    bool MyGame_selectRenderEngine(dk2::MyGame *this_) {
        if (dk2::cmd_flag_DDD) {
            this_->selected_dd_idx = dk2::cmd_flag_DDD_value;

            printf("[INFO]: select render engine %d by flag DDD name='%s' desc='%s'\n",  // additional line
                   this_->selected_dd_idx,
//                   dk2::ddraw_devices[this_->selected_dd_idx].name,
                   this_->dds_names_arr16[this_->selected_dd_idx],
//                   dk2::ddraw_devices[this_->selected_dd_idx].desc
                   this_->dds_descs_arr16[this_->selected_dd_idx]
            );
            return true;
        }

        int devCount = dk2::ddraw_device_count;
        if (dk2::MyResources_instance.video_settings.guid_index < dk2::ddraw_device_count
            && dk2::MyResources_instance.video_settings.guid_index_verifier_working) {
            this_->selected_dd_idx = dk2::MyResources_instance.video_settings.guid_index;

            printf("[INFO]: select render engine %d by guid name='%s' desc='%s'\n",  // additional line
                   this_->selected_dd_idx,
                   dk2::ddraw_devices[this_->selected_dd_idx].name,
//                   this_->dds_names_arr16[this_->selected_dd_idx],
                   dk2::ddraw_devices[this_->selected_dd_idx].desc
//                   this_->dds_descs_arr16[this_->selected_dd_idx]
            );
            return true;
        }
        if (dk2::ddraw_device_count == 0) {
            DirectDrawEnumerateA((LPDDENUMCALLBACKA) dk2::collect_devices_DDEnumCB, NULL);
            devCount = dk2::ddraw_device_count;
        }

        if (devCount <= 0) return false;
        int devIdx = 0;
        for (; devIdx < devCount; ++devIdx) {
            if(dk2::isDevSupports_D3DPTFILTERCAPS_LINEARMIPNEAREST(devIdx)) break;
        }
        if(devIdx >= dk2::ddraw_device_count) return false;

        printf("[INFO]: select render engine %d name='%s' desc='%s'\n",  // additional line
               devIdx,
               dk2::ddraw_devices[devIdx].name,
               dk2::ddraw_devices[devIdx].desc
        );
        dk2::MyResources_instance.video_settings.setSelected3dEngine(2);
        dk2::MyResources_instance.video_settings.sub_566E40((HKEY) devIdx);
        this_->selected_dd_idx = devIdx;
        return true;
    }

    int __fastcall reimpl_MyGame_init(dk2::MyGame *this_, void *edx) {
        this_->dds_count = 0;
        DirectDrawEnumerateA((LPDDENUMCALLBACKA) dk2::collect_namesAndDescs_DDEnumCB, this_);
        if (dk2::ddraw_device_count == 0) {
            DirectDrawEnumerateA((LPDDENUMCALLBACKA) dk2::collect_devices_DDEnumCB, NULL);
        }

        HWND HWindow = dk2::getHWindow();
        if (!dk2::dd_index)
            DirectDrawEnumerateA((LPDDENUMCALLBACKA) dk2::collect_displayModes_DDEnumCB, HWindow);

        if(dk2::MyResources_instance.video_settings.cmd_flag_SOFTWARE || !MyGame_selectRenderEngine(this_)) {
            if(dk2::MyResources_instance.video_settings.cmd_flag_SOFTWARE) {  // additional line
                printf("[INFO]: forced select software render engine by flag SOFTWARE\n");
            } else {
                printf("[WARN]: select render engine failed. Using software renderer\n");
            }
            // select software render engine
            dk2::MyResources_instance.video_settings.setSelected3dEngine(4);
            dk2::MyResources_instance.video_settings.sub_566E40(0);
            this_->selected_dd_idx = 0;
        }
        int status;
        if (*dk2::MyInputManagerCb_static_initKeyInputs(&status) < 0)
            return 0;
        int status_;
        if (*dk2::MyInputManagerCb_static_initCursorInputs(&status_) < 0)
            return 0;
        int result = this_->createWindow(1);
        if (!result)
            return 0;
        if (!this_->prepareScreenEx(
                dk2::MyResources_instance.video_settings.display_width,
                dk2::MyResources_instance.video_settings.display_height,
                dk2::MyResources_instance.video_settings.display_bitnes,
                dk2::MyResources_instance.video_settings.isWindowed,
                dk2::MyResources_instance.video_settings.screen_swap,
                dk2::MyResources_instance.video_settings.screen_hardware3D)) {
            printf("[WARN]: failed to prepareScreenEx with %dx%d\n",  // additional line
                   dk2::MyResources_instance.video_settings.display_width,
                   dk2::MyResources_instance.video_settings.display_height
            );
            if(!this_->prepareScreenEx(
                    640,
                    480,
                    dk2::MyResources_instance.video_settings.display_bitnes,
                    dk2::MyResources_instance.video_settings.isWindowed,
                    dk2::MyResources_instance.video_settings.screen_swap,
                    dk2::MyResources_instance.video_settings.screen_hardware3D)) {
                printf("[WARN]: failed to prepareScreenEx with 640x480\n");  // additional line
                return 0;
            }
        }
        dk2::setCustomDefWindowProcA((int) dk2::myCustomDefWindowProcA);
        dk2::WinEventHandlers_instance.addHandler(
                0,
                (void (__stdcall *)(int32_t, int32_t, const void *)) dk2::static_MyGame_Event07_cb,
                this_);
        this_->fE71 = 0;
        this_->fE75 = 0;
        this_->fE79 = 0;
        this_->fE7D = 0;
        this_->moonAge = dk2::calc_moon_age();
        this_->f0 = 1;

        unsigned short cw;
        _FPU_GETCW(cw);

        this_->fF51 = cw;
        return 1;
    }

    int __stdcall reimpl_getDevIdxSupportsLinearPerspective() {
        int devCount = dk2::ddraw_device_count;
        if ( !dk2::ddraw_device_count ) {
            DirectDrawEnumerateA((LPDDENUMCALLBACKA) dk2::collect_devices_DDEnumCB, (LPVOID) dk2::ddraw_device_count);
            devCount = dk2::ddraw_device_count;
        }
        if ( devCount <= 0 )
            return -1;
        int devIdx = 0;
        for (; devIdx < devCount; ++devIdx) {
            dk2::DxD3dInfo *d3dInfo = dk2::ddraw_devices[devIdx].infoList;
            if (d3dInfo && d3dInfo->hasDesc && d3dInfo->texCapsAnd1 && d3dInfo->hasZbuffer) {
                D3DDEVICEDESC devDesc;
                memcpy(&devDesc, &d3dInfo->devDesc, sizeof(devDesc));
                if (
                        (devDesc.dpcTriCaps.dwTextureCaps & D3DPTEXTURECAPS_PERSPECTIVE) != 0 &&
                        (devDesc.dpcTriCaps.dwTextureFilterCaps & D3DPTFILTERCAPS_LINEAR) != 0
                ) break;
            }
        }
        if (devIdx >= devCount)
            return -1;
        return devIdx;
    }
}


bool reimpl_DirectDrawEnumerate_uses() {

    write_jump(&dk2::getDevIdxSupportsLinearPerspective, reimpl_getDevIdxSupportsLinearPerspective);

    write_jump(&dk2::collect_namesAndDescs_DDEnumCB, reimpl_collect_namesAndDescs_DDEnumCB);

    write_jump(&dk2::collect_devices_DDEnumDevicesCB, reimpl_collect_devices_DDEnumDevicesCB);
    write_jump(&dk2::collect_devices_DDEnumCB, reimpl_collect_devices_DDEnumCB);

    write_jump(&dk2::collect_displayModes_DDEnumModesCB, reimpl_collect_displayModes_DDEnumModesCB);
    write_jump(&dk2::collect_displayModes_DDEnumCB, reimpl_collect_displayModes_DDEnumCB);

    write_jump(u8ptr<&dk2::MyGame::init>(), reimpl_MyGame_init);

    return true;
}

