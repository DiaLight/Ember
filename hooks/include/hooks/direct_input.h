//
// Created by DiaLight on 25.01.2023.
//

#ifndef EMBER_DIRECT_INPUT_H
#define EMBER_DIRECT_INPUT_H

#include <dinput.h>
#include <vector>
#include <functional>

namespace hook {

    extern std::vector<std::function<void(DIDEVICEOBJECTDATA *)>> DIRECT_INPUT_MOUSE_DATA;
    extern std::vector<std::function<void(DIDEVICEOBJECTDATA *)>> DIRECT_INPUT_KEYBOARD_DATA;

    bool initDirectInput();
}


#endif //EMBER_DIRECT_INPUT_H
