//
// Created by DiaLight on 01.09.2022.
//
#include <api/Buf.h>
#include <Windows.h>
#include <cstdlib>
#include <cstring>

DWORD align_up(DWORD val, DWORD align) {
  return (val + align - 1) & ~(align - 1);
}

Buf::Buf() : start((uint8_t *) malloc(256)), tail(start), end(start + 256) {}

Buf::~Buf() {
  free(start);
}

size_t Buf::size() const {
  return tail - start;
}

void Buf::prepare(size_t size) {
  if((end - tail) < size) {
    size_t newLimit = tail - start + size;
    auto *buf = (uint8_t *) realloc(start, newLimit + newLimit / 3);
    tail = buf + (tail - start);
    start = buf;
    end = buf + newLimit;
  }
}

size_t Buf::fill(int val, size_t size) {
  prepare(size);
  memset(tail, val, size);
  size_t offs = tail - start;
  tail += size;
  return offs;
}

size_t Buf::write(const void *ptr, size_t size) {
  prepare(size);
  memcpy(tail, ptr, size);
  size_t offs = tail - start;
  tail += size;
  return offs;
}

void Buf::align(size_t align) {
  fill(0, align_up(size(), align) - size());
}
