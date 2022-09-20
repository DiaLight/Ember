//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_PATCH_H
#define EMBER_PATCH_H

#include <vector>
#include <functional>

class PatchBuilder {
  std::vector<uint8_t> proxy;
public:
  PatchBuilder() : proxy() {}
  inline size_t offs() {
    return proxy.size();
  }
  inline uint8_t *base() {
    return proxy.data();
  }

  void write(uint8_t *buf, size_t size);
  template<typename int_t>
  void write(int_t val) {
    write((uint8_t *) &val, sizeof(val));
  }
  void writeAsm(void (*asmFun)());
};


struct Regs {
  intptr_t eax;
  intptr_t ebx;
  intptr_t ecx;
  intptr_t edx;
  intptr_t esi;
  intptr_t edi;
  intptr_t ebp;
  intptr_t esp;

  void dump() const {
    printf("eax=%08X\n", eax);
    printf("ebx=%08X\n", ebx);
    printf("ecx=%08X\n", ecx);
    printf("edx=%08X\n", edx);
    printf("esi=%08X\n", esi);
    printf("edi=%08X\n", edi);
    printf("ebp=%08X\n", ebp);
    printf("esp=%08X\n", esp);
  }

};

struct HookHandler;
struct HookHandle;

// target - replaced address of function. Not null only with replaceCall hook
typedef std::function<void(HookHandler &handle, Regs &regs, void *target)> handler_t;

struct HookHandler {
  handler_t handler;
  bool is_remove_pending = false;
  size_t entrance = 0;
  HookHandle *handle = nullptr;
  HookHandler(const handler_t &handler) : handler(handler) {}

  void release();

};

class HookHandle {
  friend HookHandler;
  std::vector<HookHandler *> handlers;
  uint8_t code[1];

public:
  HookHandle() : handlers(), code() {}

  HookHandler *addHandler(const handler_t &handler);

private:

  static void __fastcall _call_proxy(HookHandle *self, Regs *regs, void *target);
  static void __fastcall _call(HookHandle *self, Regs *regs);
  void call_proxy(Regs *regs, void *target);
  void call(Regs *regs);
  static HookHandle *_create(uint8_t *orig_addr, size_t orig_size, size_t reloc_offs, bool overwrite);

public:

  // call any_dk_fun
  static HookHandle *replaceCall(uint8_t *orig_addr, int clear_stack_args);

  // original code to hook should NOT:
  // - have relative operations(short jump, ...)
  // - have more than one relocation (far jump, call, mov [addr] ...)
  // - be less than 5 bytes in size
  // safe to hook example:
  //   .text:00525839  add esp, 8
  //   .text:0052583C  cmp eax, ebx
  static HookHandle *create(uint8_t *orig_addr, size_t orig_size, size_t reloc_offs = 0);
  static HookHandle *overwrite(uint8_t *orig_addr, size_t orig_size);

};

bool initPatchApi();

#endif //EMBER_PATCH_H
