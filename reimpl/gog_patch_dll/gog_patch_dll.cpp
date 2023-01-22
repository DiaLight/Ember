//
// Created by DiaLight on 20.01.2023.
//
#include <reimpl.h>
#include <api.h>
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

bool reimpl::gog_patch_dll() {
  if(!api::hasFlag("gog_patch")) return true;

  auto *dos = (IMAGE_DOS_HEADER *) dk2_base;
  auto *nt = (IMAGE_NT_HEADERS *) (dk2_base + dos->e_lfanew);

  IMAGE_IMPORT_DESCRIPTOR *target = nullptr;
  for(
      auto *impdesc = (IMAGE_IMPORT_DESCRIPTOR *) (dk2_base + nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
      impdesc->Name != NULL;
      impdesc++
      ) {
    auto *libname = (char *) (dk2_base + impdesc->Name);
    if(stricmp(libname, "ddraw.dll") != 0) continue;
    target = impdesc;
    break;
  }
  if(!target) return false;

  std::map<std::string, void *> toReplace {
      {"DirectDrawCreate", fake_DirectDrawCreate},
      {"DirectDrawEnumerateA", fake_DirectDrawEnumerateA},
  };
  for(
      auto nameAddressPtr = (PIMAGE_THUNK_DATA) (dk2_base + target->OriginalFirstThunk),
          functionAddressPtr = (PIMAGE_THUNK_DATA) (dk2_base + target->FirstThunk);
      nameAddressPtr->u1.Function;
      nameAddressPtr++, functionAddressPtr++
      ) {
    LPCSTR lpProcName;
    if (nameAddressPtr->u1.Ordinal & IMAGE_ORDINAL_FLAG) {
      lpProcName = MAKEINTRESOURCEA(nameAddressPtr->u1.Ordinal);
      return false;
    } else {
      auto importByNameImage = (PIMAGE_IMPORT_BY_NAME) (dk2_base + nameAddressPtr->u1.AddressOfData);
      lpProcName = (char *) importByNameImage->Name;
    }
    auto it = toReplace.find(lpProcName);
    if(it == toReplace.end()) {
      printf("[ERROR]: ddraw.dll!%s replacement not found\n", lpProcName);
      return false;
    }

    DWORD prot = 0;
    if(!VirtualProtect(functionAddressPtr, sizeof(IMAGE_THUNK_DATA), PAGE_EXECUTE_READWRITE, &prot)) return false;
    functionAddressPtr->u1.Function = (DWORD_PTR) it->second;
    VirtualProtect(functionAddressPtr, sizeof(IMAGE_THUNK_DATA), prot, &prot);
  }

  if(!DllEntryPoint(NULL, DLL_PROCESS_ATTACH, NULL)) return false;
  return true;
}
