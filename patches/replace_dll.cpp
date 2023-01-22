//
// Created by DiaLight on 20.01.2023.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>
#include <api/patch.h>
#include <stdex.h>


bool replaceDllImports(const char *dllName, HMODULE replaceTo) {
  auto *dos = (IMAGE_DOS_HEADER *) dk2_base;
  auto *nt = (IMAGE_NT_HEADERS *) (dk2_base + dos->e_lfanew);

  IMAGE_IMPORT_DESCRIPTOR *target = nullptr;
  for(
      auto *impdesc = (IMAGE_IMPORT_DESCRIPTOR *) (dk2_base + nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
      impdesc->Name != NULL;
      impdesc++
      ) {
    auto *libname = (char *) (dk2_base + impdesc->Name);
    if(stricmp(libname, dllName) != 0) continue;
    target = impdesc;

    DWORD prot = 0;
    int len = strlen(libname);
    if(!VirtualProtect(libname, len, PAGE_EXECUTE_READWRITE, &prot)) return false;
    strcpy(libname, dllName);
    VirtualProtect(libname, len, prot, &prot);
    break;
  }
  if(!target) return false;

  for(
      auto nameAddressPtr = (PIMAGE_THUNK_DATA) (dk2_base + target->OriginalFirstThunk),
          functionAddressPtr = (PIMAGE_THUNK_DATA) (dk2_base + target->FirstThunk);
      nameAddressPtr->u1.Function;
      nameAddressPtr++, functionAddressPtr++
      ) {
    LPCSTR lpProcName;
    if (nameAddressPtr->u1.Ordinal & IMAGE_ORDINAL_FLAG) {
      lpProcName = MAKEINTRESOURCEA(nameAddressPtr->u1.Ordinal);
    } else {
      auto importByNameImage = (PIMAGE_IMPORT_BY_NAME) (dk2_base + nameAddressPtr->u1.AddressOfData);
      lpProcName = (char *) importByNameImage->Name;
    }

    FARPROC fun = GetProcAddress(replaceTo, lpProcName);
    if (!fun) return false;

    DWORD prot = 0;
    if(!VirtualProtect(functionAddressPtr, sizeof(IMAGE_THUNK_DATA), PAGE_EXECUTE_READWRITE, &prot)) return false;
    functionAddressPtr->u1.Function = (DWORD_PTR) fun;
    VirtualProtect(functionAddressPtr, sizeof(IMAGE_THUNK_DATA), prot, &prot);
  }
  return true;
}

bool patch::replace_dll() {
  std::vector<std::string> toReplace = api::findArgValues("replace_dll");
  for(auto &repl : toReplace) {
    auto pos = repl.find(':');
    if(pos == std::string::npos || pos < 2) {
      printf("[ERROR]: invalid replace_dll arg\n");
      return false;
    }
    std::string target = repl.substr(0, pos);
    std::string replace = repl.substr(pos + 1);

    target += ".dll";
    trim(replace, [](unsigned char ch) {
      return !(std::isspace(ch) || ch == '\"');
    });
//    replaceAll(replace, "/", "\\");

//    auto *patch_base = (uint8_t *) LoadLibraryA(replace.c_str());
    auto *patch_base = (uint8_t *) LoadLibraryExA(replace.c_str(), NULL, 0);
    if(patch_base == nullptr) {
      DWORD lastError = GetLastError();
      if(lastError == ERROR_DLL_INIT_FAILED) {
        printf("[ERROR]: dll \"%s\" initialization failed\n", replace.c_str(), lastError);
      } else {
        printf("[ERROR]: dll \"%s\" not found. %08X\n", replace.c_str(), lastError);
      }
      return false;
    }
    printf("replace_dll %s -> \"%s\" %08X\n", target.c_str(), replace.c_str(), patch_base);

    auto *dos = (IMAGE_DOS_HEADER *) patch_base;
    auto *nt = (IMAGE_NT_HEADERS *) (patch_base + dos->e_lfanew);
    typedef BOOL (__stdcall *DllEntryPoint_t)(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);
    auto entry = (DllEntryPoint_t) (patch_base + nt->OptionalHeader.AddressOfEntryPoint);
    entry((HINSTANCE) patch_base, DLL_THREAD_ATTACH, NULL);

    if(!replaceDllImports(target.c_str(), (HMODULE) patch_base)) {
      printf("[ERROR]: failed to replace_dll %s -> \"%s\"\n", target.c_str(), replace.c_str());
      return false;
    }
  }
  return true;
}

