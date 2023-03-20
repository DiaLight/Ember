//
// Created by DiaLight on 26.12.2022.
//

#ifndef EMBER_IMPORTS_H
#define EMBER_IMPORTS_H


template<typename T>
uint8_t *follow(T &&ptr) {
    union {
        T *fun;
        uint8_t **ptr;
    } val = {
            .fun = &ptr
    };
    uint8_t *pos = *val.ptr;
#ifdef REVERSE_MODE
    if(*pos++ != 0xE9) return nullptr;
    pos = (pos + 4) + *(uint32_t *) pos;
    if(*pos++ != 0xB8) return nullptr;
    pos = *(uint8_t **) pos;
#else
    if (*pos++ != 0xFF) return nullptr;
    if (*pos++ != 0x25) return nullptr;
    pos = *(uint8_t **) pos;
    pos = *(uint8_t **) pos;
#endif
    return pos;
}

template<auto Fun>
uint8_t *funptr() { return follow(Fun); }


#endif //EMBER_IMPORTS_H
