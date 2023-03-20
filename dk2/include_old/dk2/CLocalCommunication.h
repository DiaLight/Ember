//
// Created by DiaLight on 11.09.2022.
//

#ifndef EMBER_CLOCALCOMMUNICATION_H
#define EMBER_CLOCALCOMMUNICATION_H

#include <dk2/utils.h>
#include <dk2/action.h>
#include <dk2/CCommunicationInterface.h>

namespace dk2 {

  class CLocalCommunication : public CCommunicationInterface {
    /*006FCEC0*/ static CDefaultPlayerInterface instance;
  public:
    inline static CLocalCommunication *getInstance() { return (CLocalCommunication *) funptr<&instance>(); }
    GameActionArray f14_clickList;

    /*00522750*/ bool pushAction(GameAction &action);
  };
  static_assert(sizeof(CLocalCommunication) == 0x260);

}

#endif //EMBER_CLOCALCOMMUNICATION_H
