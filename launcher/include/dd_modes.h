//
// Created by DiaLight on 27.12.2022.
//

#ifndef EMBER_DD_MODES_H
#define EMBER_DD_MODES_H

#include <Windows.h>
#include <vector>

struct screen_mode {
    int width;
    int height;
    screen_mode(int width, int height) : width(width), height(height) {}
};

extern std::vector<screen_mode> g_screenModeList;

bool collectModes(HWND hWnd);

#endif //EMBER_DD_MODES_H
