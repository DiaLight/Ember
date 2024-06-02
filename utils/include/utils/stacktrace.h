//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_STACKTRACE_H
#define EMBER_STACKTRACE_H

#include <Windows.h>
#include <sstream>
#include <vector>
#include <memory>
#include <utils/StackLimits.h>

struct StackFrame {

    bool isOld;
    DWORD eip;
    DWORD esp;
    DWORD ebp;

    // lib fields
    std::string libName;
    DWORD libBase = 0;
    std::string symName;
    DWORD symAddr = 0;

    // dk2 fields
    std::string dk2Name;
    std::wstring spinfo;
    bool error = false;

    void formatOneLine(std::wstringstream &ss);
    void format(std::wstringstream &ss);

    void onSuccess(const std::wstring &info) {
        spinfo = info;
        error = true;
    }
    void onError(const std::wstring &info) {
        spinfo = info;
        error = true;
    }

};

namespace api {

    bool initStacktrace();
    bool traceCurrentStack(std::wstringstream &ss);
    bool traceTheStack(CONTEXT *ctx, StackLimits &limits, std::vector<std::shared_ptr<StackFrame>> &frames);

}

#endif //EMBER_STACKTRACE_H
