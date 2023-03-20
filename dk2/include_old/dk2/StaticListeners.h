//
// Created by DiaLight on 07.09.2022.
//

#ifndef EMBER_STATICLISTENERS_H
#define EMBER_STATICLISTENERS_H

#include <dk2/utils.h>

namespace dk2 {

  struct StaticListeners {
    int (__cdecl *f0_onKeyboardAction)(int, int, CComponent *);
    int (__cdecl *f4_onMouseAction)(int, int, int, int, CComponent *);
    int (__cdecl *f8_onWindowMsg)(__int16 uMsg, WPARAM wParam, LPARAM lParam, CComponent *comp);
    int (__cdecl *fC_onKeyboardActionWithCtrl)(int, int, int, CComponent *);
    void (__cdecl *f10_onMouseActionWithCtrl)(int, int, int, int, int, CComponent *);
  };

}

#endif //EMBER_STATICLISTENERS_H
