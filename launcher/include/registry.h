//
// Created by DiaLight on 27.12.2022.
//

#ifndef EMBER_REGISTRY_H
#define EMBER_REGISTRY_H

#include <string>
#include <vector>

bool persistence_getStr(const std::wstring &name, std::wstring &value);
bool persistence_setStr(const std::wstring &name, const std::wstring &value);
bool persistence_getDword(const std::wstring &name, DWORD &value);
bool persistence_setDword(const std::wstring &name, DWORD value);

void saveDk2Path(std::wstring &dk2Dir);
void loadDk2Path(std::wstring &dk2Dir);

bool dk2Cfg_getDword(const std::wstring &section, const std::wstring &name, DWORD &value);
bool dk2Cfg_setDword(const std::wstring &section, const std::wstring &name, DWORD value);

bool dk2Cfg_getBytes(const std::wstring &section, const std::wstring &name, std::vector<char> &value);
bool dk2Cfg_setBytes(const std::wstring &section, const std::wstring &name, const std::vector<char> &value);

#endif //EMBER_REGISTRY_H
