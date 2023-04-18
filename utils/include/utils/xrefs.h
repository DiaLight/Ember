//
// Created by DiaLight on 18.03.2023.
//

#ifndef EMBER_XREFS_H
#define EMBER_XREFS_H

#include <exception>

namespace api {

    bool replaceXrefs(void *fun, void *proxy);
    bool initXrefsApi();

    bool replaceEmberXrefs(void *pfun, void *proxy);  // from dk2_relink.h

    template<auto Fun>
    inline decltype(Fun)replaceAllXrefs(void *proxy) {
        decltype(Fun) orig = Fun;
        if (!api::replaceXrefs(u8ptr<Fun>(), proxy)) throw std::exception("dk2 xrefs is not found");
        if (!api::replaceEmberXrefs(u8ptr<Fun>(), proxy)) throw std::exception("ember xrefs is not found");
        return orig;
    }

}

#endif //EMBER_XREFS_H
