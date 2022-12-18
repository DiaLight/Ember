//
// Created by DiaLight on 17.12.2022.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>
#include <api/patch.h>

// 0057CEB0
typedef void *(__cdecl *MyHeap_alloc_t)(int size);
MyHeap_alloc_t MyHeap_alloc = nullptr;

// 005742F0
typedef BOOL (*MyHeap_autoremoveObjects_t)();
MyHeap_autoremoveObjects_t MyHeap_autoremoveObjects = nullptr;

// 0057D0B0
typedef void (__cdecl *MyHeap_free_t)(void *ptr);
MyHeap_free_t MyHeap_free = nullptr;

HANDLE hHeap = NULL;
void *heap_malloc(int size) {
//  return HeapAlloc(hHeap, HEAP_ZERO_MEMORY, size);
  return _aligned_malloc(size, 0x100);
}
void heap_free(void *ptr) {
//  HeapFree(hHeap, 0, ptr);
  _aligned_free(ptr);
}
void *__cdecl reimpl_MyHeap_alloc(int size) {
  void *result = heap_malloc(size);
  if (result) return result;
  __debugbreak();
  BOOL removed = MyHeap_autoremoveObjects();
  result = heap_malloc(size);
  if (result) return result;
  while (removed) {
    removed = MyHeap_autoremoveObjects();
    result = heap_malloc(size);
    if (result) return result;
  }
  __debugbreak();
  exit(-1);
}
void __cdecl reimpl_MyHeap_free(void *ptr) {
  heap_free(ptr);
}

bool patch::replace_custom_heap() {
//  hHeap = HeapCreate(0, 128 * 1024 * 1024, 0);
//  MyHeap_autoremoveObjects = (MyHeap_autoremoveObjects_t) (dk2_base + (0x005742F0 - dk2_virtual_base));
//  MyHeap_alloc = (MyHeap_alloc_t) (dk2_base + (0x0057CEB0 - dk2_virtual_base));
//  MyHeap_free = (MyHeap_free_t) (dk2_base + (0x0057D0B0 - dk2_virtual_base));

  // .text:0057CEB0                 sub     esp, 100h
  write_jump(dk2_base + (0x0057CEB0 - dk2_virtual_base), reimpl_MyHeap_alloc);

  // .text:0057D0B0                 mov     eax, [esp+arg_0]
  // .text:0057D0B4                 test    eax, eax
  write_jump(dk2_base + (0x0057D0B0 - dk2_virtual_base), reimpl_MyHeap_free);


//  if(!replaceXrefs((uint8_t *) MyHeap_alloc, reimpl_MyHeap_alloc)) return false;
//  if(!replaceXrefs((uint8_t *) MyHeap_free, reimpl_MyHeap_free)) return false;

  return true;
}
