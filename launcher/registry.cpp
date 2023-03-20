//
// Created by DiaLight on 27.12.2022.
//
#include <Windows.h>
#include <registry.h>
#include <status.h>


bool persistence_getStr(const std::wstring &name, std::wstring &value) {
    value.resize(MAX_PATH);
    LSTATUS status;
    DWORD BufferSize = MAX_PATH;
    status = RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Ember Launcher",
            name.c_str(), RRF_RT_REG_SZ, NULL, (PVOID) &*value.begin(), &BufferSize
    );
    if (status != ERROR_SUCCESS) {
        return false;
    }
    value.resize(wcslen(&*value.begin()));
    return true;
}

bool persistence_setStr(const std::wstring &name, const std::wstring &value) {
    LSTATUS status;
    HKEY hKey = NULL;
    status = RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, &hKey);
    if (status == ERROR_FILE_NOT_FOUND) {
        status = RegCreateKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", 0, NULL, REG_OPTION_NON_VOLATILE,
                                 KEY_ALL_ACCESS, NULL, &hKey, NULL);
    }
    bool ret = false;
    if (status == ERROR_SUCCESS) {
        status = RegSetValueExW(hKey, name.c_str(), 0, REG_SZ, (BYTE *) value.c_str(), value.length() * sizeof(wchar_t));
        if (status == ERROR_SUCCESS) {
            ret = true;
        }
        RegCloseKey(hKey);
    }
    return ret;
}

bool persistence_getDword(const std::wstring &name, DWORD &value) {
    LSTATUS status;
    DWORD BufferSize = sizeof(DWORD);
    status = RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Ember Launcher",
            name.c_str(), RRF_RT_REG_DWORD, NULL, (PVOID) &value, &BufferSize
    );
    if (status != ERROR_SUCCESS) {
        return false;
    }
    return true;
}

bool persistence_setDword(const std::wstring &name, DWORD value) {
    LSTATUS status;
    HKEY hKey = NULL;
    status = RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, &hKey);
    if (status == ERROR_FILE_NOT_FOUND) {
        status = RegCreateKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", 0, NULL, REG_OPTION_NON_VOLATILE,
                                 KEY_ALL_ACCESS, NULL, &hKey, NULL);
    }
    bool ret = false;
    if (status == ERROR_SUCCESS) {
        status = RegSetValueExW(hKey, name.c_str(), 0, REG_DWORD, (BYTE *) &value, sizeof(value));
        if (status == ERROR_SUCCESS) {
            ret = true;
        }
        RegCloseKey(hKey);
    }
    return ret;
}


void saveDk2Path(std::wstring &dk2Dir) {
    LSTATUS status;
    HKEY hKey = NULL;
    status = RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, &hKey);
    if (status == ERROR_FILE_NOT_FOUND) {
        status = RegCreateKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", 0, NULL, REG_OPTION_NON_VOLATILE,
                                 KEY_ALL_ACCESS, NULL, &hKey, NULL);
    }
    if (status == ERROR_SUCCESS) {
        status = RegSetValueExW(hKey, L"DK2Path", 0, REG_SZ, (BYTE *) dk2Dir.c_str(),
                                dk2Dir.length() * sizeof(wchar_t));
        if (status == ERROR_SUCCESS) {

        }
        RegCloseKey(hKey);
    }
}

void loadDk2Path(std::wstring &dk2Dir) {
    dk2Dir.resize(MAX_PATH);
    LSTATUS status;
    DWORD BufferSize = MAX_PATH;
    status = RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Ember Launcher",
            L"DK2Path", RRF_RT_REG_SZ, NULL, (PVOID) &*dk2Dir.begin(), &BufferSize
    );
    if (status != ERROR_SUCCESS) {
        BufferSize = MAX_PATH;
        status = RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\App Paths\\DKII.exe",
                L"Path", RRF_RT_REG_SZ | RRF_SUBKEY_WOW6432KEY, NULL, (PVOID) &*dk2Dir.begin(), &BufferSize
        );
        if (status != ERROR_SUCCESS) {
            dk2Dir.resize(0);
        } else {
            dk2Dir.resize(wcslen(&*dk2Dir.begin()));
        }
    } else {
        dk2Dir.resize(wcslen(&*dk2Dir.begin()));
    }
}


bool dk2Cfg_getDword(const std::wstring &section, const std::wstring &name, DWORD &value) {
    LSTATUS status;
    DWORD BufferSize = sizeof(DWORD);
    std::wstring key = L"SOFTWARE\\Bullfrog Productions Ltd\\Dungeon Keeper II\\Configuration\\";
    key += section;
    status = RegGetValueW(
            HKEY_CURRENT_USER,
            key.c_str(),
            name.c_str(), RRF_RT_REG_DWORD, NULL, (PVOID) &value, &BufferSize
    );
    if (status != ERROR_SUCCESS) {
        return false;
    }
    return true;
}

bool dk2Cfg_setDword(const std::wstring &section, const std::wstring &name, DWORD value) {
    LSTATUS status;
    HKEY hKey = NULL;
    std::wstring key = L"SOFTWARE\\Bullfrog Productions Ltd\\Dungeon Keeper II\\Configuration\\";
    key += section;
    status = RegOpenKeyExW(HKEY_CURRENT_USER, key.c_str(), REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, &hKey);
    if (status == ERROR_FILE_NOT_FOUND) {
        status = RegCreateKeyExW(HKEY_CURRENT_USER, key.c_str(), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL,
                                 &hKey, NULL);
    }
    bool ret = false;
    if (status == ERROR_SUCCESS) {
        status = RegSetValueExW(hKey, name.c_str(), 0, REG_DWORD, (BYTE *) &value, sizeof(value));
        if (status == ERROR_SUCCESS) {
            ret = true;
        }
        RegCloseKey(hKey);
    }
    return ret;
}


bool dk2Cfg_getBytes(const std::wstring &section, const std::wstring &name, std::vector<char> &value) {
    LSTATUS status;
    std::wstring key = L"SOFTWARE\\Bullfrog Productions Ltd\\Dungeon Keeper II\\Configuration\\";
    key += section;
    DWORD BufferSize = 0;
    DWORD Type = 0;
    status = RegGetValueW(
            HKEY_CURRENT_USER,
            key.c_str(),
            name.c_str(), RRF_RT_ANY, &Type, NULL, &BufferSize
    );
    if (status != ERROR_SUCCESS) {
        printStatus("RegGetValueW1 failed with %08X", status);
        return false;
    }
    value.resize(BufferSize);
    status = RegGetValueW(
            HKEY_CURRENT_USER,
            key.c_str(),
            name.c_str(), RRF_RT_ANY, &Type, (PVOID) value.data(), &BufferSize
    );
    if (status != ERROR_SUCCESS) {
        printStatus("RegGetValueW2 %d failed with %08X", Type, status);
        return false;
    }
    return true;
}

bool dk2Cfg_setBytes(const std::wstring &section, const std::wstring &name, const std::vector<char> &value) {
    LSTATUS status;
    HKEY hKey = NULL;
    std::wstring key = L"SOFTWARE\\Bullfrog Productions Ltd\\Dungeon Keeper II\\Configuration\\";
    key += section;
    status = RegOpenKeyExW(HKEY_CURRENT_USER, key.c_str(), REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, &hKey);
    if (status == ERROR_FILE_NOT_FOUND) {
        status = RegCreateKeyExW(HKEY_CURRENT_USER, key.c_str(), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL);
    }
    bool ret = false;
    if (status == ERROR_SUCCESS) {
        status = RegSetValueExW(hKey, name.c_str(), 0, REG_NONE, (BYTE *) value.data(), value.size());
        if (status == ERROR_SUCCESS) {
            ret = true;
        } else {
            printStatus("RegSetValueExW failed with %08X", status);
        }
        RegCloseKey(hKey);
    }
    return ret;
}
