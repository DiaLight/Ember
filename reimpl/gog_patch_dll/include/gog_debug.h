//
// Created by DiaLight on 22.01.2023.
//

#ifndef EMBER_GOG_DEBUG_H
#define EMBER_GOG_DEBUG_H

#include <cstdio>

#define gog_debug(msg) { \
  OutputDebugStringA(msg "\n"); \
  printf(msg "\n");\
}

#define gog_debugf(format, ...) { \
  char msg_buf[1024]; \
  wsprintfA(msg_buf, format "\n", __VA_ARGS__); \
  OutputDebugStringA(msg_buf);    \
  printf(format "\n", __VA_ARGS__);\
}

#endif //EMBER_GOG_DEBUG_H
