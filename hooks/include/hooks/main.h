//
// Created by DiaLight on 18.03.2023.
//

#ifndef EMBER_MAIN_H
#define EMBER_MAIN_H

#include <Windows.h>
#include <cstdint>
#include <string>
#include <functional>

namespace hook {

    extern std::vector<std::function<int(int &argc, const char **&argv)>> BEFORE_MAIN;
    extern std::vector<std::function<void(int argc, const char *argv[], int &exitCode)>> AFTER_MAIN;
    extern std::vector<std::function<void()>> ALL_READY_TO_START;

}

#endif //EMBER_MAIN_H
