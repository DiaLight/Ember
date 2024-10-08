//
// Created by DiaLight on 20.01.2023.
//
#include <ddraw.h>
#include <map>
#include <gog_cfg.h>
#include <gog_fake.h>
#include <gog_exports.h>
#include <asm/patch_GetVersion.h>
#include <asm/patch_settings.h>
#include <asm/patch_WndProc.h>
#include <asm/patch_parseCommandLine.h>
#include <asm/patch_RtGuiView.h>
#include <asm/patch_SurfaceHolder_setTexture.h>
#include <dk2_info.h>
#include <utils/patch.h>

using namespace gog;


//#pragma comment(linker, "/ENTRY:DllEntryPoint")
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) {
    if (fdwReason != DLL_PROCESS_ATTACH) return TRUE;
    gog::cfg::load();
    gog::fakeInit();
    if (gog::cfg::iSingleCore) {
        HANDLE hProc = GetCurrentProcess();
        SetProcessAffinityMask(hProc, 1);
    }
    if (gog::cfg::iDisableDEP) {
        HMODULE kernel32 = LoadLibraryA("kernel32.dll");
        typedef BOOL (WINAPI *SetProcessDEPPolicy_t)(_In_ DWORD dwFlags);
        auto SetProcessDEPPolicy = (SetProcessDEPPolicy_t) GetProcAddress(kernel32, "SetProcessDEPPolicy");
        if (SetProcessDEPPolicy) {
            SetProcessDEPPolicy(0);
        }
    }
    patch_GetVersion();
    patch_settings();
    patch_WndProc();
    patch_parseCommandLine();
    patch_RtGuiView();
    if (cfg::iCpuIdle) {
        timeBeginPeriod(1u);
    }
    patch_SurfaceHolder_setTexture();
    return TRUE;
}

IMAGE_IMPORT_DESCRIPTOR *findImportDescriptor(void *module, const char *name) {
    auto *base = (uint8_t *) module;
    auto *dos = (IMAGE_DOS_HEADER *) base;
    auto *nt = (IMAGE_NT_HEADERS *) (base + dos->e_lfanew);

    for (
            auto *impdesc = (IMAGE_IMPORT_DESCRIPTOR *) (base +
                                                         nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
            impdesc->Name != NULL;
            impdesc++
            ) {
        auto *libname = (char *) (base + impdesc->Name);
        if (stricmp(libname, name) != 0) continue;
        return impdesc;
    }
    return nullptr;
}
bool gog_patch_dll() {
    if (!api::hasFlag("gog_patch")) return true;

    IMAGE_IMPORT_DESCRIPTOR *target = findImportDescriptor(api::dk2_base, "ddraw.dll");
    if (!target) target = findImportDescriptor(api::dk2_base, "patch.dll");
    if (!target) {
        printf("[ERROR]: ddraw.dll not found\n");
        return false;
    }

    std::map<std::string, void *> toReplace{
            {"DirectDrawCreate",     fake_DirectDrawCreate},
            {"DirectDrawEnumerateA", fake_DirectDrawEnumerateA},
    };
    for (
            auto nameAddressPtr = (PIMAGE_THUNK_DATA) (api::dk2_base + target->OriginalFirstThunk),
                    functionAddressPtr = (PIMAGE_THUNK_DATA) (api::dk2_base + target->FirstThunk);
            nameAddressPtr->u1.Function;
            nameAddressPtr++, functionAddressPtr++
            ) {
        LPCSTR lpProcName;
        if (nameAddressPtr->u1.Ordinal & IMAGE_ORDINAL_FLAG) {
            lpProcName = MAKEINTRESOURCEA(nameAddressPtr->u1.Ordinal);
            continue;  // ignore ordinals
        } else {
            auto importByNameImage = (PIMAGE_IMPORT_BY_NAME) (api::dk2_base + nameAddressPtr->u1.AddressOfData);
            lpProcName = (char *) importByNameImage->Name;
        }
        auto it = toReplace.find(lpProcName);
        if (it == toReplace.end()) {
            printf("[ERROR]: ddraw.dll!%s replacement not found\n", lpProcName);
            return false;
        }
        {
            write_protect prot(functionAddressPtr, sizeof(IMAGE_THUNK_DATA));
            functionAddressPtr->u1.Function = (DWORD_PTR) it->second;
        }
    }

    if (!DllEntryPoint(NULL, DLL_PROCESS_ATTACH, NULL)) return false;
    return true;
}
