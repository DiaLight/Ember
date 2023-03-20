//
// Created by DiaLight on 17.09.2022.
//

#ifndef EMBER_DK2_VERSIONS_H
#define EMBER_DK2_VERSIONS_H


enum DK2Version {
    DK2_v130,  // aka 1.00
    DK2_v151,
    DK2_v170,
    DK2_unknown,
};

void DK2Version_toString(DK2Version ver, wchar_t *str) {
    switch(ver) {
        case DK2_v130: wcscpy(str, L"v1.30"); break;
        case DK2_v151: wcscpy(str, L"v1.51"); break;
        case DK2_v170: wcscpy(str, L"v1.70"); break;
        case DK2_unknown: wcscpy(str, L"unknown version"); break;
    }
}

bool _readSignature(HANDLE hFile, DWORD &size, DWORD &entryPoint) {
    size = GetFileSize(hFile, NULL);
    if (size == INVALID_FILE_SIZE) {
        printStatus("GetFileSize error: %08X", GetLastError());
        return false;
    }
    if (size < 0x400) return false;
    char headers[0x400];
    DWORD read = 0;
    if (!ReadFile(hFile, headers, sizeof(headers), &read, NULL) || read != sizeof(headers)) {
        printStatus("ReadFile error: %08X", GetLastError());
        return false;
    }
    auto *dos = (IMAGE_DOS_HEADER *) headers;
    auto *nt = (IMAGE_NT_HEADERS32 *) (headers + dos->e_lfanew);
    entryPoint = nt->OptionalHeader.AddressOfEntryPoint;
    return true;
}

bool readSignature(DWORD &size, DWORD &entryPoint) {
    std::wstring exePath = g_dk2Dir + L"/DKII.exe";
    HANDLE hFile = CreateFileW(exePath.c_str(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        printStatus("CreateFileW error: %08X", GetLastError());
        return false;
    }
    bool ret = _readSignature(hFile, size, entryPoint);
    CloseHandle(hFile);
    return ret;
}

DK2Version getDK2Version(DWORD entry, DWORD size) {
    DK2Version ver = DK2_unknown;
    // entry=003A0046 size=0077005C
    if (entry == 0x00229F50 && (size & ~0xFF) == 0x002C9800) {
        ver = DK2_v130;
    } else if (entry == 0x00238440 && (size & ~0xFF) == 0x002D6E00) {
        ver = DK2_v170;
    } else if (entry == 0x00232D90 && (
            (size & ~0xFF) == 0x002D2A00 ||  // official
            (size & ~0xFF) == 0x002D0A00  // GIM
    )) {
        ver = DK2_v151;
    }
    return ver;
}

#endif //EMBER_DK2_VERSIONS_H
