//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_INPUT_H
#define EMBER_INPUT_H

#include <dk2/utils.h>

namespace dk2 {

  class ControlKeysUpdater;

  struct MySharedObj {  // vft=00672408
    struct vtbl_t {
      LONG (__thiscall *release)(MySharedObj *);
      LONG (__thiscall *addRef)(MySharedObj *);
      void *(__thiscall *scalar_destructor)(void *, bool release);
    };
    static_assert(sizeof(vtbl_t) == 0xC);
//    /*0000*/ void *__vftable /*VFT*/;
    /*0004*/ uint32_t refs;
    virtual ~MySharedObj();
  };
  static_assert(sizeof(MySharedObj) == 0x8);

  struct MySignalBase : MySharedObj {  // vft=00672800
    struct vtbl_t : MySharedObj::vtbl_t {
      void (__thiscall *handleData)(MySignalBase *);
      status_t &(__thiscall *initDevice)(MySignalBase *, status_t &pResult);
    };
    static_assert(sizeof(vtbl_t) == 0x14);
//    /*0000*/ void *__vftable /*VFT*/;
    /*0008*/ uint32_t f8_hEvent;
    /*000C*/ ControlKeysUpdater *f8_pcontrolkeys;
    virtual ~MySignalBase();
  };
  static_assert(sizeof(MySignalBase) == 0x10);

}

#endif //EMBER_INPUT_H
