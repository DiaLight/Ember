//
// Created by DiaLight on 27.12.2022.
//

#ifndef EMBER_REGISTRY_H
#define EMBER_REGISTRY_H


bool persistence_getStr(const std::wstring &name, std::wstring &value);
bool persistence_setStr(const std::wstring &name, const std::wstring &value);
bool persistence_getDword(const std::wstring &name, DWORD &value);
bool persistence_setDword(const std::wstring &name, DWORD value);

void saveDk2Path(std::wstring &dk2Dir);
void loadDk2Path(std::wstring &dk2Dir);

#endif //EMBER_REGISTRY_H
