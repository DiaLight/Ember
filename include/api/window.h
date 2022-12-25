//
// Created by DiaLight on 23.08.2022.
//

#ifndef EMBER_WINDOW_H
#define EMBER_WINDOW_H

namespace dk2 {
  class MyGame;
}
namespace api {

  extern std::vector <std::function<bool(HWND & , UINT & , WPARAM & , LPARAM & )>> BEFORE_WINDOW_PROC;
  extern std::vector <std::function<void(HWND, UINT, WPARAM, LPARAM, LRESULT & )>> AFTER_WINDOW_PROC;

  extern std::vector <std::function<BOOL(dk2::MyGame *game, int &dwWidth, int &dwHeight, int &dwRGBBitCount, int &isWindowed, int &a6, int &a7)>> BEFORE_PREPARE_SCREEN;
  extern int g_width;
  extern int g_height;

  bool initWindow();

}

#endif //EMBER_WINDOW_H
