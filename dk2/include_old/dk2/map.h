//
// Created by DiaLight on 20.09.2022.
//

#ifndef EMBER_MAP_H
#define EMBER_MAP_H

#include <dk2/utils.h>

namespace dk2 {

  struct BufCx400Item {
    int f0_name;
    void *f4_value;
    int f8_prev_idx_for_same_hash;
  };

  struct BufCx400 {
    int f0_count_to_add;
    DWORD f4_max_count;
    BufCx400Item *f8_buf;
  };

  class MyNameObjMap {
  public:
    DWORD f0_hashTable[256];
    DWORD f400_idx;
    BufCx400 f404_buf;

    int put(const char *key, void *value);

  };

}

#endif //EMBER_MAP_H
