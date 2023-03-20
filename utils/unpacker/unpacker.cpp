//
// Created by DiaLight on 11.09.2022.
//
#include <Windows.h>
#include <cstdlib>
#include <string>
#include <tchar.h>
#include <vector>

#define EmberUnpacker_title _T("Ember - DK2 patching launcher")

class Resource {
    HRSRC hResource = nullptr;
    HGLOBAL hMemory = nullptr;

public:
    LPCWSTR fileName = nullptr;
    size_t size = 0;
    void *ptr = nullptr;

    Resource(LPCSTR resource_id, LPCSTR resource_class, LPCWSTR fileName) : fileName(fileName) {
        hResource = FindResource(nullptr, resource_id, resource_class);
        hMemory = LoadResource(nullptr, hResource);

        size = SizeofResource(nullptr, hResource);
        ptr = LockResource(hMemory);
    }

    ~Resource() {
        UnlockResource(hMemory);
    }

};

char tmp[1024];

#define MD5LEN  16

bool calcMd5(BYTE *hash, std::vector<Resource *> &reslist) {
    HCRYPTPROV hProv = 0;
    if (!CryptAcquireContext(&hProv,
                             NULL,
                             NULL,
                             PROV_RSA_FULL,
                             CRYPT_VERIFYCONTEXT)) {
        DWORD dwStatus = GetLastError();
        snprintf(tmp, sizeof(tmp), "CryptAcquireContext failed: %08X", dwStatus);
        MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
        return false;
    }

    HCRYPTHASH hHash = 0;
    if (!CryptCreateHash(hProv, CALG_MD5, 0, 0, &hHash)) {
        DWORD dwStatus = GetLastError();
        snprintf(tmp, sizeof(tmp), "CryptAcquireContext failed: %08X", dwStatus);
        MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
        CryptReleaseContext(hProv, 0);
        return dwStatus;
    }

    for (auto *res: reslist) {
        if (!CryptHashData(hHash, (const BYTE *) res->ptr, res->size, 0)) {
            DWORD dwStatus = GetLastError();
            snprintf(tmp, sizeof(tmp), "CryptHashData(%S) failed: %08X", res->fileName, dwStatus);
            MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
            CryptReleaseContext(hProv, 0);
            CryptDestroyHash(hHash);
            return false;
        }
    }

    DWORD cbHash = MD5LEN;
    if (!CryptGetHashParam(hHash, HP_HASHVAL, hash, &cbHash, 0)) {
        DWORD dwStatus = GetLastError();
        snprintf(tmp, sizeof(tmp), "CryptGetHashParam failed: %08X", dwStatus);
        MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
        CryptDestroyHash(hHash);
        CryptReleaseContext(hProv, 0);
        return false;
    }

    CryptDestroyHash(hHash);
    CryptReleaseContext(hProv, 0);
    return true;
}

void md5ToString(BYTE *hash, wchar_t *str) {
    CHAR rgbDigits[] = "0123456789abcdef";
    for (DWORD i = 0; i < MD5LEN; i++) {
        str[i * 2] = rgbDigits[hash[i] >> 4];
        str[i * 2 + 1] = rgbDigits[hash[i] & 0xf];
    }
    str[MD5LEN * 2] = 0;
}

bool dirExists(const wchar_t *path) {
    DWORD ftyp = GetFileAttributesW(path);
    if (ftyp == INVALID_FILE_ATTRIBUTES) return false;
    if (ftyp & FILE_ATTRIBUTE_DIRECTORY) return true;
    return false;
}

bool dirDelete(const wchar_t *path) {
    SHFILEOPSTRUCTW shfo = {
            NULL,
            FO_DELETE,
            path,
            NULL,
            FOF_SILENT | FOF_NOERRORUI | FOF_NOCONFIRMATION,
            FALSE,
            NULL,
            NULL
    };
    if (SHFileOperationW(&shfo) != 0 || !dirExists(path)) {
        snprintf(tmp, sizeof(tmp), "Failed to delete %S", path);
        MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
        return false;
    }
    return true;
}

size_t fileSize(LPCWSTR pszFilename) {
    HANDLE hFile = CreateFileW(pszFilename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
    if (hFile == INVALID_HANDLE_VALUE) return 0;
    DWORD size = GetFileSize(hFile, NULL);
    CloseHandle(hFile);
    return size;
}

bool fileExist(LPCWSTR pszFilename) {
    DWORD dwAttrib = GetFileAttributesW(pszFilename);
    if (dwAttrib & FILE_ATTRIBUTE_DEVICE) return false;
    if (dwAttrib & FILE_ATTRIBUTE_DIRECTORY) return false;
    return true;
}

bool allUnpacked(wchar_t *path, std::vector<Resource *> &reslist) {
    size_t dirPos = wcslen(path);
    for (auto *res: reslist) {
        wcscpy(path + dirPos, res->fileName);
        if (!fileExist(path)) {
            path[dirPos] = 0;
            return false;
        }
        if (fileSize(path) != res->size) {
            path[dirPos] = 0;
            return false;
        }
    }
    path[dirPos] = 0;
    return true;
}

bool writeFile(wchar_t *path, Resource *res) {
    HANDLE hFile = CreateFileW(path, GENERIC_WRITE, 0, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        DWORD dwStatus = GetLastError();
        snprintf(tmp, sizeof(tmp), "CreateFileW(%S) failed: %08X", path, dwStatus);
        MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
        return false;
    }
    uint8_t *pos = (uint8_t *) res->ptr;
    uint8_t *end = pos + res->size;
    while (pos < end) {
        DWORD written = 0;
        if (!WriteFile(hFile, pos, end - pos, &written, NULL)) break;
        pos += written;
    }
    CloseHandle(hFile);
    return pos == end;
}

bool unpack(wchar_t *path, std::vector<Resource *> &reslist) {
    if (!CreateDirectoryW(path, NULL)) {
        DWORD dwStatus = GetLastError();
        snprintf(tmp, sizeof(tmp), "CreateDirectoryW(%S) failed: %08X", path, dwStatus);
        MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
        return false;
    }
    size_t dirPos = wcslen(path);
    for (auto *res: reslist) {
        wcscpy(path + dirPos, res->fileName);
        if (!writeFile(path, res)) return false;
        if (fileSize(path) != res->size) {
            snprintf(tmp, sizeof(tmp), "Write file %S size mismatch", path);
            MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
            path[dirPos] = 0;
            return false;
        }
    }
    path[dirPos] = 0;
    return true;
}

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow) {
    CoInitializeEx(NULL, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);

    Resource referencesRes("REFERENCES", "MAP", L"references.map");
    Resource stackRes("STACK", "MAP", L"stack.map");
    Resource exportRes("EXPORTS", "MAP", L"export.map");
    Resource makedllRes("MAKEDLL", "EXE", L"makedll.exe");
    Resource bootstrapRes("BOOTSTRAP_PATCHER", "EXE", L"bootstrap_patcher.exe");
    Resource launcherRes("LAUNCHER", "EXE", L"launcher.exe");
    std::vector<Resource *> reslist = {
            &referencesRes,
            &stackRes,
            &exportRes,
            &makedllRes,
            &bootstrapRes,
            &launcherRes
    };
    for (auto *res: reslist) {
        if (res->ptr == nullptr) {
            snprintf(tmp, sizeof(tmp), "resource %S not found", res->fileName);
            MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
            return -1;
        }
    }

    BYTE rgbHash[MD5LEN];
    if (!calcMd5(rgbHash, reslist)) return -1;
    wchar_t hashStr[(MD5LEN * 2) + 1];
    md5ToString(rgbHash, hashStr);

    wchar_t path[MAX_PATH];
    if (!GetTempPathW(MAX_PATH, path)) {
        DWORD dwStatus = GetLastError();
        snprintf(tmp, sizeof(tmp), "GetTempPathW failed: %08X", dwStatus);
        MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
        return -1;
    }
    wchar_t ch = path[wcslen(path) - 1];
    if (ch != '\\' && ch != '/') {
        wcscpy(path + wcslen(path), L"\\");
    }
    wcscpy(path + wcslen(path), L"Ember_");
    wcscpy(path + wcslen(path), hashStr);
    wcscpy(path + wcslen(path), L"\\");
    if (!dirExists(path)) {
        if (!unpack(path, reslist)) return -1;
    } else if (!allUnpacked(path, reslist)) {
        dirDelete(path);
        if (!unpack(path, reslist)) return -1;
    }
    wcscpy(path + wcslen(path), launcherRes.fileName);

    SHELLEXECUTEINFOW info;
    ZeroMemory(&info, sizeof(info));
    info.cbSize = sizeof(SHELLEXECUTEINFO);
    info.fMask = SEE_MASK_NOCLOSEPROCESS;
    info.hwnd = NULL;
    info.lpVerb = NULL;
    info.lpFile = path;
    info.lpParameters = L"";
    info.lpDirectory = NULL;
    info.nShow = SW_SHOW;
    info.hInstApp = NULL;
    if (!ShellExecuteExW(&info)) {
        DWORD dwStatus = GetLastError();
        snprintf(tmp, sizeof(tmp), "ShellExecuteExW failed: %08X", dwStatus);
        MessageBox(NULL, tmp, EmberUnpacker_title, NULL);
        return -1;
    }
    WaitForSingleObject(info.hProcess, INFINITE);
    CloseHandle(info.hProcess);
    return 0;
}
