//
// Created by DiaLight on 18.12.2022.
//
#include <dk2_patches.h>
#include <stdexcept>
#include <dk2_info.h>
#include <hooks/main.h>
#include <win32_gui_layout.h>

bool patch::dpi_aware() {
    if (!api::hasFlag("dpi_aware")) return true;
    hook::BEFORE_MAIN.push_back([](int &argc, char **&argv) {
        if (gui::initDPI()) {
            printf("DPI aware initialized\n");
        } else {
            printf("[ERROR] DPI aware failed\n");
            return -1;
        }
        return 0;
    });
    return true;
}
