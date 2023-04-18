//
// Created by DiaLight on 17.04.2023.
//
#include <reimpl.h>


namespace {

}

bool reimpl_DirectDrawEnumerate_uses();
bool reimpl_DirectDrawCreate_uses();
bool reimpl_mydd_scene_uses();

bool reimpl::directx() {

    if(!reimpl_DirectDrawEnumerate_uses()) return false;
    if(!reimpl_DirectDrawCreate_uses()) return false;

    // DirectDrawCreate -> dk2dd -> dk2dd_get -> mydd_scene
    if(!reimpl_mydd_scene_uses()) return false;

    return true;
}

