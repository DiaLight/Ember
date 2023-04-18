//
// Created by DiaLight on 30.10.2022.
//

#ifndef EMBER_REIMPL_H
#define EMBER_REIMPL_H

#include <ddraw.h>

namespace reimpl {

    bool SurfHashList__probablySort();
    bool draw3dScene();
    bool directx();

    extern IDirectDraw *dk2dd;
    extern IDirectDraw *lpSurfaceDD;
}

#define dk2_dk2dd reimpl::dk2dd
//#define dk2_dk2dd dk2::dk2dd

#define dk2_lpSurfaceDD reimpl::lpSurfaceDD
//#define dk2_lpSurfaceDD dk2::lpSurfaceDD

#endif //EMBER_REIMPL_H
