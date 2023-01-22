//
// Created by DiaLight on 27.12.2022.
//
#include "layout.h"


gui::edit_elem_t DirPath(L"", WS_VISIBLE | WS_BORDER);
gui::button_elem_t SelectDir(L"select", WS_VISIBLE | WS_BORDER);
gui::edit_elem_t TextField(
    L"",
    WS_VISIBLE | WS_BORDER |
    ES_READONLY |
    WS_HSCROLL | WS_VSCROLL | ES_LEFT |
    ES_MULTILINE | ES_AUTOVSCROLL | ES_AUTOHSCROLL
);
gui::button_elem_t StartBtn(L"start", WS_VISIBLE | WS_BORDER);
gui::label_elem_t MenuLabel(L"Menu resolution:", WS_VISIBLE | WS_TABSTOP);
gui::combobox_elem_t MenuModesCombo(L"", CBS_DISABLENOSCROLL | CBS_DROPDOWNLIST | CBS_DROPDOWN | WS_OVERLAPPED | WS_VISIBLE);
gui::label_elem_t GameLabel(L"Game resolution:", WS_VISIBLE | WS_TABSTOP);
gui::combobox_elem_t GameModesCombo(L"", CBS_DISABLENOSCROLL | CBS_DROPDOWNLIST | CBS_DROPDOWN | WS_OVERLAPPED | WS_VISIBLE);
gui::button_elem_t DPIChk(L"DPI aware:", BS_CHECKBOX | BS_AUTOCHECKBOX | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);
gui::button_elem_t FullscreenChk(L"Fullscreen:", BS_CHECKBOX | BS_AUTO3STATE | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);
gui::button_elem_t UnlimitedZoomChk(L"Unlimited zoom:", BS_CHECKBOX | BS_AUTOCHECKBOX | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);
gui::button_elem_t Wheel2ZoomChk(L"Wheel to zoom:", BS_CHECKBOX | BS_AUTOCHECKBOX | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);
gui::button_elem_t BindWasdBtn(L"Bind WASD", WS_VISIBLE | WS_BORDER);


gui::label_elem_t ResLabel(L"Resources:", WS_VISIBLE | WS_TABSTOP);
gui::button_elem_t ResExtractBtn(L"Extract", WS_VISIBLE | WS_BORDER);
gui::button_elem_t ResOpenBtn(L"Open", WS_VISIBLE | WS_BORDER);
gui::button_elem_t ResRedirectChk(L"Redirect resources:", BS_CHECKBOX | BS_AUTOCHECKBOX | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);

gui::button_elem_t AllocConsoleChk(L"Alloc console:", BS_CHECKBOX | BS_AUTOCHECKBOX | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);
gui::button_elem_t GogPatchChk(L"Gog patch:", BS_CHECKBOX | BS_AUTOCHECKBOX | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);

struct : gui::layout_t {
  void operator()(HWND hwnd, int width, int height, bool reset=false) {
    layout_t::operator()(hwnd, width, height, reset);
    hor(-1, -1, [this] {
      gap(10);
      ver([this] {
        gap(10);

        // body start
        hor(-1, 20, [this] {
          visit(DirPath, -1, size.h);
          gap(10);
          visit(SelectDir, 65, size.h);
        });
        gap(10);
        visit(TextField, -1, -1);
        gap(10);
        hor(-1, 20, [this] {
          visit(MenuLabel, 100, size.h);
          visit(MenuModesCombo, 150, 50000);
          gap(10);
          visit(GameLabel, 100, size.h);
          visit(GameModesCombo, 150, 50000);
        });
        gap(10);
        hor(-1, 20, [this] {
          visit(DPIChk, 80, size.h);
          gap(20);
          visit(FullscreenChk, 80, size.h);
          gap(20);
          visit(UnlimitedZoomChk, 105, size.h);
          gap(20);
          visit(Wheel2ZoomChk, 105, size.h);
          gap(20);
          visit(BindWasdBtn, 70, size.h);
        });
        gap(10);
        hor(-1, 20, [this] {
          visit(ResLabel, 60, size.h);
          gap(20);
          visit(ResExtractBtn, 80, size.h);
          gap(20);
          visit(ResOpenBtn, 80, size.h);
          gap(20);
          visit(ResRedirectChk, 130, size.h);
        });
        gap(10);
        hor(-1, 20, [this] {
          visit(AllocConsoleChk, 95, size.h);
          gap(20);
          visit(GogPatchChk, 95, size.h);
        });
        // body end

        gap(10);

        // footer
        hor(-1, 30, [this] {
          gap(-1);
          visit(StartBtn, 100, size.h);
          gap(-1);
        });
        // footer end

        gap(10);
      });
      gap(10);
    });
  }
} launcher_layout_;

void launcher_layout(HWND hwnd, int width, int height, bool reset) {
  launcher_layout_(hwnd, width, height, reset);
}
