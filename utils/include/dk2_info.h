//
// Created by DiaLight on 18.03.2023.
//

#ifndef EMBER_DK2_INFO_H
#define EMBER_DK2_INFO_H

#include <cstdint>
#include <string>
#include <vector>
#include <functional>

namespace api {

    extern std::wstring g_curExeDir;
    extern uint8_t *ember_base;

    extern uint8_t *dk2_base;
    extern size_t dk2_size;
    extern uint32_t main_tid;

#define dk2_virtual_base 0x00400000
    bool dk2_contains(uint8_t *pos);
    inline void *dk2_toVirt(void *pos) { return (void *) ((((uint8_t *) pos) - dk2_base) + dk2_virtual_base); }


    extern uint8_t *weanetr_base;
    extern size_t weanetr_size;

    bool weanetr_contains(uint8_t *pos);

    extern std::vector<std::string> EMBER_ARGS;
    extern std::vector<std::string> DK2_ARGS;

    extern int g_width;
    extern int g_height;

    std::string findArgValue(const std::string &name);
    std::vector<std::string> findArgValues(const std::string &name);
    bool hasFlag(const std::string &name);

    bool info_initialize(void *emberBase);

}

#endif //EMBER_DK2_INFO_H
