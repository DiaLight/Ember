//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_BUF_H
#define EMBER_BUF_H

#include <cstdint>

struct Buf {
  uint8_t *start = nullptr;
  uint8_t *tail = nullptr;
  uint8_t *end = nullptr;

  Buf();
  ~Buf();

  size_t size() const;

  void prepare(size_t size);
  size_t fill(int val, size_t size);
  size_t write(const void *ptr, size_t size);
  void align(size_t align);

};

#endif //EMBER_BUF_H
