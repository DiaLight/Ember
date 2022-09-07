//
// Created by DiaLight on 06.09.2022.
//

#ifndef EMBER_RESOURCES_H
#define EMBER_RESOURCES_H

#include <dk2/utils.h>

namespace dk2 {

  class MySurface;

  class MBToUni {
  public:
    /*00553B90*/ static bool __cdecl convert(const char *mbStr, wchar_t *out, int size);
  };

  class MyTextText {
  public:
    // gui texts
    /*00553A60*/ static const char *__cdecl idx1091_getMbString(unsigned int strId);
    // in game messages
    /*00553AF0*/ static const char *__cdecl idx1090_getMbString(unsigned int strId);
  };

  class MyResources {

    /*00758340*/ static MyResources instance;
  public:
    inline static MyResources *getInstance() { return (MyResources *) funptr<&instance>(); }

    /*0059A4B0*/ static MySurface *__cdecl loadPng(const char *name);

  };

}

#endif //EMBER_RESOURCES_H
