//
// Created by DiaLight on 18.12.2022.
//

#include "stdex.h"
#include <Windows.h>
#include <stdexcept>
#include <locale>
#include <codecvt>
#include <sstream>

std::wstring utf8ToUtf16(const std::string &utf8Str) {
    try {
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
        return conv.from_bytes(utf8Str);
    } catch (...) {
        std::wstringstream wss;
//    wss << L"failed to convert len=" << utf8Str.size();
//    for (int i = 0; i < utf8Str.length(); ++i) {
//      wss << " " << hex8(utf8Str[i]);
//    }
//    wss << " ";
        for (int i = 0; i < utf8Str.length(); ++i) {
            wss << (char) utf8Str[i];
        }
        return wss.str();
    }
}

std::string utf8_encode(const std::wstring &wstr) {
    if (wstr.empty()) return std::string();
    int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int) wstr.size(), NULL, 0, NULL, NULL);
    std::string strTo(size_needed, 0);
    WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int) wstr.size(), &strTo[0], size_needed, NULL, NULL);
    return strTo;
}

std::vector<std::string> split(const std::string &s, char separator) {
    std::vector<std::string> output;
    std::string::size_type prev_pos = 0, pos = 0;
    while ((pos = s.find(separator, pos)) != std::string::npos) {
        std::string substring(s.substr(prev_pos, pos - prev_pos));
        output.push_back(substring);
        prev_pos = ++pos;
    }
    output.push_back(s.substr(prev_pos, pos - prev_pos)); // Last word
    return output;
}

bool parse_int(const std::string &S, int &value, std::string &err) {
    try {
        value = std::stoi(S);
        return true;
    } catch (std::invalid_argument &e) {
        err = "Invalid argument";
    } catch (std::out_of_range &e) {
        err = "Out of range";
    } catch (...) {
        err = "failed to parse";
    }
    return false;
}

// trim from start (in place)
void ltrim(std::string &s, const trim_pred_t &pred) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), pred));
}

// trim from end (in place)
void rtrim(std::string &s, const trim_pred_t &pred) {
    s.erase(std::find_if(s.rbegin(), s.rend(), pred).base(), s.end());
}

// trim from both ends (in place)
void trim(std::string &s, const trim_pred_t &pred) {
    rtrim(s, pred);
    ltrim(s, pred);
}

void replaceAll(std::string &str, const std::string &from, const std::string &to) {
    if (from.empty())
        return;
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}
