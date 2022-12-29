//
// Created by DiaLight on 27.12.2022.
//

#ifndef EMBER_LAYOUT_H
#define EMBER_LAYOUT_H

#include <Windows.h>
#include <WinUser.h>
#include <CommCtrl.h>
#include <cstdint>
#include <functional>
#include "../win32_gui_layout.h"


#define hex32(val) std::hex << std::uppercase << std::setfill(L'0') << std::setw(8) << ((uint32_t) val) << std::dec
#define hex16(val) std::hex << std::uppercase << std::setfill(L'0') << std::setw(4) << ((uint16_t) val) << std::dec
#define hex8(val) std::hex << std::uppercase << std::setfill(L'0') << std::setw(2) << ((uint8_t) val) << std::dec

extern gui::edit_elem_t DirPath;
extern gui::button_elem_t SelectDir;
extern gui::edit_elem_t TextField;
extern gui::button_elem_t StartBtn;
extern gui::combobox_elem_t MenuModesCombo;
extern gui::combobox_elem_t GameModesCombo;
extern gui::button_elem_t DPIBtn;
extern gui::button_elem_t FullscreenBtn;
extern gui::button_elem_t ResExtractBtn;
extern gui::button_elem_t ResOpenBtn;
extern gui::button_elem_t ResRedirectBtn;

void launcher_layout(HWND hwnd, int width, int height, bool reset=false);

#endif //EMBER_LAYOUT_H
