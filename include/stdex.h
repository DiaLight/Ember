//
// Created by DiaLight on 18.12.2022.
//

#ifndef EMBER_STDEX_H
#define EMBER_STDEX_H

#include <vector>
#include <string>
#include <functional>

std::string utf8_encode(const std::wstring &wstr);
std::vector<std::string> split(const std::string &s, char separator);
bool parse_int(const std::string &S, int &value, std::string &err);

typedef std::function<bool(unsigned char ch)> trim_pred_t;

void trim(std::string &s, const trim_pred_t &pred);
void replaceAll(std::string& str, const std::string& from, const std::string& to);

#endif //EMBER_STDEX_H
