//
// Created by DiaLight on 27.12.2022.
//

#ifndef EMBER_UTILS_H
#define EMBER_UTILS_H

#include <string>
#include <Windows.h>

std::wstring utf8ToUtf16(const std::string& utf8Str);
bool dirExists(const wchar_t *path);
size_t fileSize(LPCWSTR pszFilename);
bool fileExist(LPCWSTR pszFilename);

#endif //EMBER_UTILS_H
