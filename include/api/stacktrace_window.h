//
// Created by DiaLight on 21.09.2022.
//

#ifndef EMBER_STACKTRACE_WINDOW_H
#define EMBER_STACKTRACE_WINDOW_H

#include <Windows.h>

namespace stacktrace {

  BOOL show(HINSTANCE hInstance, bool &throwAgain, const wchar_t *trace);

}

#endif //EMBER_STACKTRACE_WINDOW_H
