//
// Created by DiaLight on 18.12.2022.
//

#include "stdex.h"
#include <Windows.h>
#include <stdexcept>


std::string utf8_encode(const std::wstring &wstr) {
  if(wstr.empty()) return std::string();
  int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
  std::string strTo(size_needed, 0);
  WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
  return strTo;
}

std::vector<std::string> split(const std::string &s, char separator) {
  std::vector<std::string> output;
  std::string::size_type prev_pos = 0, pos = 0;
  while((pos = s.find(separator, pos)) != std::string::npos) {
    std::string substring( s.substr(prev_pos, pos-prev_pos) );
    output.push_back(substring);
    prev_pos = ++pos;
  }
  output.push_back(s.substr(prev_pos, pos-prev_pos)); // Last word
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