//
// Created by DiaLight on 17.08.2022.
//

#ifndef EMBER_API_H
#define EMBER_API_H

#include <Windows.h>
#include <cstdint>
#include <string>
#include <functional>
#include <api/window.h>
#include <api/imports.h>

extern HINSTANCE g_bootstrap_patcher;

extern uint8_t *dk2_base;
extern size_t dk2_size;
#define dk2_virtual_base 0x00400000
bool dk2_contains(uint8_t *pos);
inline void *dk2_toVirt(void *pos) { return (void *) ((((uint8_t *) pos) - dk2_base) + dk2_virtual_base); }

namespace api {

  extern std::vector<std::function<int(int &argc, char **&argv)>> BEFORE_MAIN;
  extern std::vector<std::function<void(int argc, char *argv[], int &exitCode)>> AFTER_MAIN;
  extern std::vector<std::function<void()>> ALL_READY_TO_START;

  extern std::vector<std::string> EMBER_ARGS;
  extern std::vector<std::string> DK2_ARGS;

  bool initialize();

  std::string findArgValue(const std::string &name);
  std::vector<std::string> findArgValues(const std::string &name);
  bool hasFlag(const std::string &name);

}

bool replaceXrefs(uint8_t *fun, void *proxy);

std::vector<std::string> split(const std::string &s, char separator);

#endif //EMBER_API_H
