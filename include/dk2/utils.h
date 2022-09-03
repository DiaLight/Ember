//
// Created by DiaLight on 20.08.2022.
//

#ifndef DKII_UTILS_H
#define DKII_UTILS_H

namespace dk2 {

  using status_t = int;

  struct Pos2i {
    int32_t x;
    int32_t y;
  };
  static_assert(sizeof(Pos2i) == 0x8);

  struct Pos2f {
    float x;
    float y;
  };
  static_assert(sizeof(Pos2i) == 0x8);

  struct AABB {
    int32_t minX;
    int32_t minY;
    int32_t maxX;
    int32_t maxY;
  };
  static_assert(sizeof(AABB) == 0x10);

}

#endif //EMBER_DKII_UTILS_H
