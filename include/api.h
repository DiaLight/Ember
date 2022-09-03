//
// Created by DiaLight on 17.08.2022.
//

#ifndef EMBER_API_H
#define EMBER_API_H

#include <Windows.h>
#include <cstdint>
#include <functional>
#include <api/window.h>

template<typename T>
uint8_t *follow(T &&ptr) {
  union {
    T *fun;
    uint8_t **ptr;
  } val = {
      .fun = &ptr
  };
  uint8_t *pos = *val.ptr;
  if(*pos++ != 0xFF) return nullptr;
  if(*pos++ != 0x25) return nullptr;
  return **(uint8_t ***) pos;
}
template<auto Fun>
uint8_t *funptr() { return follow(Fun); }

extern uint8_t *dk2_base;
extern size_t dk2_size;
#define dk2_virtual_base 0x00400000
bool dk2_contains(uint8_t *pos);

namespace api {

  extern std::vector <std::function<int(int &argc, char **&argv)>> BEFORE_MAIN;
  extern std::vector <std::function<void(int argc, char *argv[], int &exitCode)>> AFTER_MAIN;

  bool initialize();

}

bool replaceXrefs(uint8_t *fun, void *proxy);

#endif //EMBER_API_H
