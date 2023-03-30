//
// Created by DiaLight on 18.03.2023.
//
#include <dk2_info.h>
#include <Windows.h>
#include <stdex.h>
#include <ios>
#include <io.h>
#include <fcntl.h>
#include <filesystem>

using namespace api;

std::wstring api::g_curExeDir;
uint8_t *api::ember_base = nullptr;

uint8_t *api::dk2_base = nullptr;
size_t api::dk2_size = 0;

bool api::dk2_contains(uint8_t *pos) {
    return api::dk2_base <= pos && pos < (api::dk2_base + dk2_size);
}

std::vector<std::string> api::EMBER_ARGS;
std::vector<std::string> api::DK2_ARGS;

int api::g_width = 0;
int api::g_height = 0;

std::string api::findArgValue(const std::string &name) {
    for(auto &arg : EMBER_ARGS) {
        if(arg.starts_with(name + "=")) {
            return arg.substr(name.length() + 1);
        }
    }
    return std::string();
}

std::vector<std::string> api::findArgValues(const std::string &name) {
    std::vector<std::string> list;
    for(auto &arg : EMBER_ARGS) {
        if(arg.starts_with(name + "=")) {
            list.push_back(arg.substr(name.length() + 1));
        }
    }
    return list;
}

bool api::hasFlag(const std::string &name) {
    for(auto &arg : EMBER_ARGS) {
        if(arg == name) {
            return true;
        }
    }
    return false;
}


void RedirectStandardIo() {
    /* This clever code have been found at:
    Adding Console I/O to a Win32 GUI App
    Windows Developer Journal, December 1997
    http://dslweb.nwnexus.com/~ast/dload/guicon.htm
    Andrew Tucker's Home Page */

    // redirect unbuffered STDOUT to the console
    long lStdHandle = (long)GetStdHandle(STD_OUTPUT_HANDLE);
    int hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
    if(hConHandle > 0) {
        FILE *fp = _fdopen(hConHandle, "w");
        *stdout = *fp;
        setvbuf(stdout, NULL, _IONBF, 0);
    }

    // redirect unbuffered STDIN to the console
    lStdHandle = (long)GetStdHandle(STD_INPUT_HANDLE);
    hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
    if(hConHandle > 0) {
        FILE *fp = _fdopen( hConHandle, "r" );
        *stdin = *fp;
        setvbuf(stdin, NULL, _IONBF, 0);
    }

    // redirect unbuffered STDERR to the console
    lStdHandle = (long)GetStdHandle(STD_ERROR_HANDLE);
    hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
    if(hConHandle > 0) {
        FILE *fp = _fdopen(hConHandle, "w");
        *stderr = *fp;
        setvbuf(stderr, NULL, _IONBF, 0 );
    }

    // make cout, wcout, cin, wcin, wcerr, cerr, wclog and clog point to console as well
    std::ios::sync_with_stdio();
}

bool api::info_initialize(void *emberBase) {

    int nArgs;
    LPWSTR *szArglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
    if(szArglist == NULL) {
        printf("CommandLineToArgvW failed\n");
        return false;
    }
    for(int i = 0; i < nArgs; i++) {
        std::wstring warg(szArglist[i]);
        std::string arg = utf8_encode(warg);
        if(i != 0 && arg.starts_with("-ember:")) {
            arg = arg.substr(7);
            EMBER_ARGS.push_back(arg);
        } else DK2_ARGS.push_back(arg);
    }
    LocalFree(szArglist);
#ifdef REVERSE_MODE
    if(api::hasFlag("console") || true) {
        AllocConsole();
        freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
        freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);
    }
    RedirectStandardIo();
    ember_base = (uint8_t *) emberBase;
    if(!ember_base) ember_base = (uint8_t *) GetModuleHandleW(L"bootstrap_patcher.dll");
#else
    if(api::hasFlag("console")) {
        AllocConsole();
        freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
        freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);
    }
    RedirectStandardIo();
    ember_base = (uint8_t *) GetModuleHandleW(NULL);
#endif

    {
        g_curExeDir.resize(MAX_PATH, L'\0');
        if(GetModuleFileNameW((HMODULE) ember_base, &*g_curExeDir.begin(), MAX_PATH) == 0) return false;
        wchar_t *p1 = wcsrchr(&*g_curExeDir.begin(), '/');
        wchar_t *p2 = wcsrchr(&*g_curExeDir.begin(), '\\');
        wchar_t *sep = p1 > p2 ? p1 : p2;
        if(sep) *sep = L'\0';
        g_curExeDir.resize(wcslen(&*g_curExeDir.begin()));
    }

    {
#ifdef REVERSE_MODE
        dk2_base = (uint8_t *) dk2_virtual_base;
#else
        dk2_base = (uint8_t *) LoadLibraryA("dk2.dll");
        if(dk2_base == NULL) {
            wchar_t path[MAX_PATH];
            GetModuleFileNameW(NULL, path, MAX_PATH);
            std::filesystem::path pp(path);
            pp = pp.parent_path().append("dk2.dll");
            dk2_base = (uint8_t *) LoadLibraryW((wchar_t *) pp.c_str());
            if(dk2_base == NULL) {
                DWORD lastError = GetLastError();
                if(lastError == ERROR_MOD_NOT_FOUND) {
                    printf("dk2.dll is not found\n");
                    return false;
                }
                printf("failed to load dk2. err: %08X\n", lastError);
                return false;
            }
            printf("dk2: %p\n", dk2_base);
        }
#endif
        auto *dos = (IMAGE_DOS_HEADER *) dk2_base;
        auto *nt = (IMAGE_NT_HEADERS *) (dk2_base + dos->e_lfanew);
        dk2_size = nt->OptionalHeader.SizeOfImage;
    }
    printf("ember base: %p\n", ember_base);
    printf("dk2 base: %p\n", dk2_base);

    printf("dk2 args:\n");
    for(auto &arg : DK2_ARGS) {
        printf("  %s\n", arg.c_str());
    }
    printf("ember args:\n");
    for(auto &arg : EMBER_ARGS) {
        printf("  -ember:%s\n", arg.c_str());
    }

    if(!ember_base || !dk2_base) return false;
    return true;
}
