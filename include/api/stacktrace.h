//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_STACKTRACE_H
#define EMBER_STACKTRACE_H

#include <Windows.h>

bool initStacktrace();
bool trace_the_stack(CONTEXT *ctx);

#endif //EMBER_STACKTRACE_H
