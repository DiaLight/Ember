//
// Created by DiaLight on 23.08.2022.
//

#ifndef EMBER_WINDOW_H
#define EMBER_WINDOW_H

#include <vector>
#include <functional>
#include <Windows.h>

namespace dk2 {
    struct MyGame;
}

namespace hook {

    extern std::vector<std::function<bool(HWND &, UINT &, WPARAM &, LPARAM &)>> BEFORE_WINDOW_PROC;
    extern std::vector<std::function<void(HWND, UINT, WPARAM, LPARAM, LRESULT &)>> AFTER_WINDOW_PROC;

    extern std::vector<std::function<bool(HWND &, UINT &, WPARAM &, LPARAM &)>> BEFORE_BULLFROG_WINDOW_PROC;
    extern std::vector<std::function<void(HWND, UINT, WPARAM, LPARAM, LRESULT &)>> AFTER_BULLFROG_WINDOW_PROC;

    extern std::vector<std::function<BOOL(dk2::MyGame *game, int &dwWidth, int &dwHeight, int &dwRGBBitCount, int &isWindowed, int &a6, int &a7)>> BEFORE_PREPARE_SCREEN;

}

#endif //EMBER_WINDOW_H
