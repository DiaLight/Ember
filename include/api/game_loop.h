//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_GAME_LOOP_H
#define EMBER_GAME_LOOP_H

#include <functional>

bool initGameLoop();

namespace api {

  extern std::vector <std::function<void()>> BEFORE_GAME_LOOP;
  extern std::vector <std::function<void()>> TICK_GAME_LOOP;
  extern std::vector <std::function<void()>> AFTER_GAME_LOOP;

}

#endif //EMBER_GAME_LOOP_H
