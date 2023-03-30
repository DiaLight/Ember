//
// Created by DiaLight on 27.12.2022.
//
#include <dk2_patches.h>
#include <dk2/MyCEngineSurfDesc.h>
#include <dk2/MyDirectDraw.h>
#include <dk2/CEngineCompressedSurface.h>
#include <dk2/MyTextures.h>
#include <dk2/CEngineSurface.h>
#include <dk2_info.h>
#include <dk2_globals.h>
#include <dk2_functions.h>
#include <cstdio>
#include <sstream>
#include <filesystem>
#include <lodepng.h>
#include <CommCtrl.h>
#include <tchar.h>
#include <utils/xrefs.h>


struct Rgba32 {

    alignas(dk2::MyCEngineSurfDesc) uint8_t desc_buf[sizeof(dk2::MyCEngineSurfDesc)];

    Rgba32() {
        dk2::MyCEngineSurfDesc &rgba32 = desc();
        ZeroMemory(&rgba32, sizeof(rgba32));
        rgba32.f0 = 1;
        rgba32._bitsiz = 0x20;
        rgba32.bytesize = 4;
        rgba32.rbitcount = 8;
        rgba32.gbitcount = 8;
        rgba32.bbitcount = 8;
        rgba32.abitcount = 8;
        rgba32._rmask = 0xFF;
        rgba32._gmask = 0xFF00;
        rgba32._bmask = 0xFF0000;
        rgba32._amask = 0xFF000000;
        rgba32.f2C = 0;
        rgba32.desc = {
                0xFF, 0xFF00, 0xFF0000, (int) 0xFF000000, 0x20, 0
        };
        rgba32.ddPixFmt = {
                0, 0, 0, 0x20, 0xFF, 0xFF00, 0xFF0000, 0xFF000000
        };
    }

    inline dk2::MyCEngineSurfDesc &desc() {
        return *(dk2::MyCEngineSurfDesc *) desc_buf;
    }

};


void save32_(int width, int height, int pitch, std::vector<uint8_t> &buffer, const char *name) {
    std::vector<unsigned char> png;
    unsigned error = lodepng::encode(png, (const unsigned char *) &buffer[0], width, height);
    if (error) {
        printf("ERR: %d\n", error);
        MessageBoxA(NULL, "ERROR", "ERROR", MB_OK);
    } else {
        std::stringstream ss;
        ss << dk2::pathBuf << "/resources/default/EngineTextures/" << name << ".png";
        std::string file = ss.str();
        std::filesystem::path path(file);
        std::filesystem::create_directories(path.parent_path());
        lodepng::save_file(png, file);
//    MessageBoxA(NULL, name, "OK", MB_OK);
    }
}

namespace {
    typedef int (__cdecl *initSurfHashLists_mydd_cpy3_t)(dk2::MyDirectDraw *a1);

    typedef dk2::CEngineCompressedSurface *(__fastcall *MyTextures_loadCompressed_t)(dk2::MyTextures *_this, void *edx,
                                                                                     char *texName);

    initSurfHashLists_mydd_cpy3_t initSurfHashLists_mydd_cpy3 = nullptr;
    MyTextures_loadCompressed_t MyTextures_loadCompressed = nullptr;
    dk2::MyTextures *tex = nullptr;
}

void unpackAndExit() {
//  InitCommonControls();

    RECT rcClient;  // Client area of parent window.
    GetClientRect((HWND) dk2::getHWindow(), &rcClient);

    int cyVScroll = GetSystemMetrics(SM_CYVSCROLL);

    HWND hwnd = dk2::getHWindow();
    HWND hwndST = CreateWindowEx(0, WC_EDIT, _T("Extracting resources"),
                                 WS_CHILD | WS_VISIBLE | WS_TABSTOP | SS_LEFT, rcClient.left + cyVScroll,
                                 (rcClient.bottom - cyVScroll) / 2 - cyVScroll,
                                 rcClient.right - cyVScroll * 2, cyVScroll * 2,
                                 hwnd, (HMENU) 11, dk2::getHInstance(), NULL);
//  RedrawWindow(hwndST, NULL, NULL, RDW_UPDATENOW);

    HWND hwndPB = CreateWindowEx(0, PROGRESS_CLASS, (LPTSTR) NULL,
                                 WS_CHILD | WS_VISIBLE, rcClient.left + cyVScroll,
                                 (rcClient.bottom - cyVScroll) / 2,
                                 rcClient.right - cyVScroll * 2, cyVScroll,
                                 hwnd, (HMENU) 10, dk2::getHInstance(), NULL);
    RedrawWindow(hwnd, NULL, NULL, RDW_UPDATENOW);

    FILE *f = fopen(tex->textureCacheFile_dir, "rb");
    uint32_t signature;
    fread(&signature, sizeof(signature), 1, f);
    uint32_t file_size;
    fread(&file_size, sizeof(file_size), 1, f);
    uint32_t version;
    fread(&version, sizeof(version), 1, f);
    int32_t num_entries;
    fread(&num_entries, sizeof(num_entries), 1, f);

    // Set the range and increment of the progress bar.

#define Progress_MAX_VALUE 4096
    SendMessage(hwndPB, PBM_SETRANGE, 0, MAKELPARAM(0, Progress_MAX_VALUE));

    SendMessage(hwndPB, PBM_SETSTEP, (WPARAM) 1, 0);

    DWORD time = GetTickCount();
    for (int i = 0; i < num_entries; ++i) {
        std::string name;
        while (true) {
            char c;
            fread(&c, sizeof(c), 1, f);
            if (c == '\0') break;
            name.push_back(c);
        }
        uint32_t offset;
        fread(&offset, sizeof(offset), 1, f);

        DWORD cur = GetTickCount();
        if ((cur - time) > 50) {
            time = cur;
            std::stringstream ss;
            ss << "Extracting resources (" << std::setw(6) << i << "/" << num_entries << "): " << name;
            std::string title = ss.str();
            SetWindowTextA(hwndST, title.c_str());
            MSG msg = {};
            while (PeekMessage(&msg, hwnd, 0, 0, PM_REMOVE)) {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
            SendMessage(hwndPB, PBM_SETPOS, i * Progress_MAX_VALUE / num_entries, 0);
//      SendMessage(hwndPB, PBM_SETPOS, i * Progress_MAX_VALUE / num_entries, 0);
        }
        dk2::CEngineCompressedSurface *ret = MyTextures_loadCompressed(tex, nullptr, (char *) name.c_str());
        if (ret) {
            alignas(dk2::CEngineSurface) uint8_t decompressed_buf[sizeof(dk2::CEngineSurface)];
            dk2::CEngineSurface &dec = *(dk2::CEngineSurface *) decompressed_buf;
            ZeroMemory(&dec, sizeof(dec));
            Rgba32 rgba32;
//      decompressed.vtbl() = dk2::CEngineSurface::class_vtbl();
            *(void **) &dec = dk2::CEngineSurface::vftable();
            dec.width = ret->width;
            dec.height = ret->height;
            dec.fC_desc = &rgba32.desc();
            dec.lineWidth = dec.width * dec.fC_desc->bytesize;
            std::vector<uint8_t> buffer;
            buffer.resize(dec.width * dec.height * dec.fC_desc->bytesize);
            dec.pixels = &buffer[0];
            if (!ret->v_copySurf(&dec, 0, 0)) {
                printf("failed to decompress %s\n", name.c_str());
            } else {
                try {
                    save32_(dec.width, dec.height, dec.lineWidth, buffer, name.c_str());
                } catch (...) {
                    printf("failed to save %s\n", name.c_str());
                }
            }
            ret->v_scalar_destructor(1u);
        }
    }
    fclose(f);
    DestroyWindow(hwndST);
    DestroyWindow(hwndPB);
    exit(0);
}

int __cdecl proxy_initSurfHashLists_mydd_cpy3(dk2::MyDirectDraw *a1) {
    int ret = initSurfHashLists_mydd_cpy3(a1);
    unpackAndExit();
    return ret;
}

bool tools::unpack_texture_cache() {
    if (!api::hasFlag("unpack_texture_cache")) return true;

    tex = (dk2::MyTextures *) (api::dk2_base + (0x007920D8 - dk2_virtual_base));
    initSurfHashLists_mydd_cpy3 = (initSurfHashLists_mydd_cpy3_t) (api::dk2_base + (0x00592EA0 - dk2_virtual_base));
    MyTextures_loadCompressed = (MyTextures_loadCompressed_t) (api::dk2_base + (0x00591070 - dk2_virtual_base));

    if (!api::replaceXrefs((uint8_t *) initSurfHashLists_mydd_cpy3, proxy_initSurfHashLists_mydd_cpy3)) return false;
    return true;
}
