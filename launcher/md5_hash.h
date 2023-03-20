//
// Created by DiaLight on 17.09.2022.
//

#ifndef EMBER_MD5_HASH_H
#define EMBER_MD5_HASH_H

#define MD5LEN  16

bool _calcMd5(BYTE *hash, HANDLE hFile) {
    HCRYPTPROV hProv = 0;
    if (!CryptAcquireContext(&hProv,
                             NULL,
                             NULL,
                             PROV_RSA_FULL,
                             CRYPT_VERIFYCONTEXT)) {
        DWORD dwStatus = GetLastError();
        printStatus("CryptAcquireContext failed: %08X", dwStatus);
        return false;
    }

    HCRYPTHASH hHash = 0;
    if (!CryptCreateHash(hProv, CALG_MD5, 0, 0, &hHash)) {
        DWORD dwStatus = GetLastError();
        printStatus("CryptAcquireContext failed: %08X", dwStatus);
        CryptReleaseContext(hProv, 0);
        return dwStatus;
    }

    char fileBuf[0x1000];
    while (true) {
        DWORD read = 0;
        if (!ReadFile(hFile, fileBuf, sizeof(fileBuf), &read, NULL)) {
            printStatus("ReadFile error: %08X", GetLastError());
            CryptReleaseContext(hProv, 0);
            CryptDestroyHash(hHash);
            return false;
        }
        if (read == 0) break;
        if (!CryptHashData(hHash, (const BYTE *) fileBuf, read, 0)) {
            DWORD dwStatus = GetLastError();
            printStatus("CryptHashData failed: %08X", dwStatus);
            CryptReleaseContext(hProv, 0);
            CryptDestroyHash(hHash);
            return false;
        }
    }

    DWORD cbHash = MD5LEN;
    if (!CryptGetHashParam(hHash, HP_HASHVAL, hash, &cbHash, 0)) {
        DWORD dwStatus = GetLastError();
        printStatus("CryptGetHashParam failed: %08X", dwStatus);
        CryptDestroyHash(hHash);
        CryptReleaseContext(hProv, 0);
        return false;
    }

    CryptDestroyHash(hHash);
    CryptReleaseContext(hProv, 0);
    return true;
}

bool calcMd5(BYTE *hash, LPCWSTR pszFilename) {
    HANDLE hFile = CreateFileW(pszFilename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL,
                               NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        printStatus("CreateFileW error: %08X", GetLastError());
        return false;
    }
    bool ret = _calcMd5(hash, hFile);
    CloseHandle(hFile);
    return ret;
}

void md5ToString(BYTE *hash, wchar_t *str) {
    CHAR rgbDigits[] = "0123456789abcdef";
    for (DWORD i = 0; i < MD5LEN; i++) {
        str[i * 2] = rgbDigits[hash[i] >> 4];
        str[i * 2 + 1] = rgbDigits[hash[i] & 0xf];
    }
    str[MD5LEN * 2] = 0;
}

bool filesHasSameContent(LPCWSTR file1, LPCWSTR file2) {
    BYTE md5_1[MD5LEN];
    BYTE md5_2[MD5LEN];
    if (!calcMd5(md5_1, file1)) return false;
    if (!calcMd5(md5_2, file2)) return false;
    return memcmp(md5_1, md5_2, MD5LEN) == 0;
}

#endif //EMBER_MD5_HASH_H
