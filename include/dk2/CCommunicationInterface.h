//
// Created by DiaLight on 11.09.2022.
//

#ifndef EMBER_CCOMMUNICATIONINTERFACE_H
#define EMBER_CCOMMUNICATIONINTERFACE_H

#include <dk2/utils.h>
#include <dk2/action.h>

namespace dk2 {

  class CCommunicationInterface {
  public:
    virtual ~CCommunicationInterface();
    DWORD field_0;
    int field_4;
    int f8_timeMs_to__;
    int field_C;
  };
  static_assert(sizeof(CCommunicationInterface) == 0x14);

}

#endif //EMBER_CCOMMUNICATIONINTERFACE_H
