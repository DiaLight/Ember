//
// Created by DiaLight on 23.08.2022.
//

#ifndef EMBER_WINDOW_H
#define EMBER_WINDOW_H

namespace api {

  extern std::vector <std::function<bool(HWND & , UINT & , WPARAM & , LPARAM & )>> BEFORE_WINDOW_PROC;
  extern std::vector <std::function<void(HWND, UINT, WPARAM, LPARAM, LRESULT & )>> AFTER_WINDOW_PROC;

  bool initWindow();

}

#endif //EMBER_WINDOW_H
