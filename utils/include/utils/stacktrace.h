//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_STACKTRACE_H
#define EMBER_STACKTRACE_H

#include <Windows.h>
#include <sstream>

namespace api {

    bool initStacktrace();
    bool traceCurrentStack(std::wstringstream &ss);

}

#endif //EMBER_STACKTRACE_H
