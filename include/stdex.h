//
// Created by DiaLight on 18.12.2022.
//

#ifndef EMBER_STDEX_H
#define EMBER_STDEX_H

#include <vector>
#include <string>

std::string utf8_encode(const std::wstring &wstr);
std::vector<std::string> split(const std::string &s, char separator);
bool parse_int(const std::string &S, int &value, std::string &err);


#endif //EMBER_STDEX_H
