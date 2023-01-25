//
// Created by DiaLight on 25.01.2023.
//

#ifndef EMBER_DIRECT_INPUT_H
#define EMBER_DIRECT_INPUT_H

#include <dinput.h>

bool initDirectInput();

namespace api {

  extern std::vector<std::function<void(DIDEVICEOBJECTDATA *)>> DIRECT_INPUT_DATA;

}

#endif //EMBER_DIRECT_INPUT_H
