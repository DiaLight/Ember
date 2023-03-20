//
// Created by DiaLight on 01.09.2022.
//
#include <utils/patch.h>
#include <utils/parse.h>
#include <Windows.h>
#include <cassert>

using namespace api;

void PatchBuilder::write(uint8_t *buf, size_t size) {
    proxy.insert(proxy.end(), buf, buf + size);
}

void PatchBuilder::writeAsm(void (*asmFun)()) {
    auto *pos = (uint8_t *) asmFun;
    if (*pos == 0xE9) {  // jump table. just follow
        size_t offs = *(uint32_t *) (++pos);
        pos += 4;
        pos += offs;
    }
    assert(*pos == 0xEB);
    size_t size = *(uint8_t *) (++pos);
    pos += 1;
    write(pos, size);
}

void write_jump(uint8_t *pos, void *to, size_t orig_size) {
    write_protect prot(pos, max(5, orig_size));
    pos[0] = 0xE9;
    *((uint32_t *) (pos + 1)) = (uint8_t *) to - (pos + 5);
    for (int i = 5; i < orig_size; ++i) pos[i] = 0x90;
}

void write_call(uint8_t *pos, void *to, size_t orig_size) {
    write_protect prot(pos, max(5, orig_size));
    pos[0] = 0xE8;
    *((uint32_t *) (pos + 1)) = (uint8_t *) to - (pos + 5);
    for (int i = 5; i < orig_size; ++i) pos[i] = 0x90;
}

_declspec(naked)

void saveRegs_asm() {
    _asm{
        jmp     end  // emit size of content [0xE9, offs to end]
        push    esp
        push    ebp
        push    edi
        push    esi
        push    edx
        push    ecx
        push    ebx
        push    eax
    end:
    }
}

_declspec(naked)

void loadRegs_asm() {
    _asm{
        jmp    end  // emit size of content [0xE9, offs to end]
        pop    eax
        pop    ebx
        pop    ecx
        pop    edx
        pop    esi
        pop    edi
        pop    ebp
        pop    esp
    end:
    }
}

_declspec(naked)

void mov1_asm() {
    _asm{
        jmp    end  // emit size of content [0xE9, offs to end]
        mov    edx, esp
    end:
    }
}


HANDLE proxies_heap = nullptr;


void HookHandler::release() {
    if (is_remove_pending) return;
    is_remove_pending = true;
    if (entrance != 0) return;
    auto &r = handle->handlers;
    r.erase(std::remove(r.begin(), r.end(), this), r.end());
    delete this;
}

HookHandler *HookHandle::addHandler(const handler_t &handler) {
    auto *hh = new(HeapAlloc(proxies_heap, 0, sizeof(HookHandler))) HookHandler(handler);
    handlers.push_back(hh);
    hh->handle = this;
    return hh;
}

void __fastcall HookHandle::_call_proxy(HookHandle *self, Regs *regs, void *target) {
    self->call_proxy(regs, target);
}

void __fastcall HookHandle::_call(HookHandle *self, Regs *regs) {
    self->call(regs);
}


HookHandle *HookHandle::replaceCall(uint8_t *orig_addr, int clear_stack_args) {
    assert(*orig_addr == 0xE8);
    uint8_t *target = (orig_addr + 5) + *(uint32_t *) (orig_addr + 1);

    PatchBuilder pb;
    // call handlers
    pb.writeAsm(saveRegs_asm);
    pb.write<uint8_t>(0xB9);  // mov ecx
    size_t proxy = pb.offs();
    pb.write<uint32_t>(0xFFFFFFFF);
    pb.writeAsm(mov1_asm);
    pb.write<uint8_t>(0x68);
    pb.write<uint32_t>((uint32_t) target);  // push <uint32_t>
    pb.write<uint8_t>(0xE8);  // call ...
    size_t run = pb.offs();
    pb.write<uint32_t>(0xFFFFFFFF);
    pb.writeAsm(loadRegs_asm);

    // ret back
    if (clear_stack_args == 0) {
        pb.write<uint8_t>(0xC3);
    } else {
        pb.write<uint8_t>(0xC2);
        pb.write<uint16_t>(clear_stack_args * 0x4);
    }

    // create proxy
    auto *handle = new(HeapAlloc(proxies_heap, 0, FIELD_OFFSET(HookHandle, code) + pb.offs())) HookHandle();
    memcpy(handle->code, pb.base(), pb.offs());

    // fixups
    *(uint32_t *) (handle->code + proxy) = (intptr_t) handle;
    *(uint32_t *) (handle->code + run) = /*dst=*/
            ((uint8_t *) &HookHandle::_call_proxy) - /*src=*/(handle->code + run + 4);

    // jump proxy
    write_call(orig_addr, handle->code);
    return handle;
}

HookHandle *HookHandle::_create(uint8_t *orig_addr, size_t orig_size, size_t reloc_offs, bool overwrite) {
    PatchBuilder pb;
    // call handlers
    pb.writeAsm(saveRegs_asm);
    pb.write<uint8_t>(0xB9);  // mov ecx
    size_t proxy = pb.offs();
    pb.write<uint32_t>(0xFFFFFFFF);
    pb.writeAsm(mov1_asm);
    pb.write<uint8_t>(0xE8);  // call ...
    size_t run = pb.offs();
    pb.write<uint32_t>(0xFFFFFFFF);
    pb.writeAsm(loadRegs_asm);

    // exec orig code
    size_t copy = pb.offs();
    if (!overwrite) pb.write(orig_addr, orig_size);

    // jump back
    pb.write<uint8_t>(0xE9);
    size_t back = pb.offs();
    pb.write<uint32_t>(0xFFFFFFFF);

    // create proxy
    auto *handle = new(HeapAlloc(proxies_heap, 0, FIELD_OFFSET(HookHandle, code) + pb.offs())) HookHandle();
    memcpy(handle->code, pb.base(), pb.offs());

    // fixups
    *(uint32_t *) (handle->code + proxy) = (intptr_t) handle;
    *(uint32_t *) (handle->code + run) = /*dst=*/((uint8_t *) &HookHandle::_call) - /*src=*/(handle->code + run + 4);
    *(uint32_t *) (handle->code + back) = /*dst=*/(orig_addr + orig_size) - /*src=*/(handle->code + back + 4);
    if (!overwrite && reloc_offs != 0) {
        DWORD reloc = *(DWORD *) (orig_addr + reloc_offs);
        uint8_t *copy_addr = handle->code + copy;
        DWORD &copy_reloc = *(DWORD *) (copy_addr + reloc_offs);
        copy_reloc = reloc + (copy_addr - orig_addr);
    }

    // jump proxy
    write_jump(orig_addr, handle->code, orig_size);
    return handle;
}

HookHandle *HookHandle::create(uint8_t *orig_addr, size_t orig_size, size_t reloc_offs) {
    return _create(orig_addr, orig_size, reloc_offs, false);
}

HookHandle *HookHandle::overwrite(uint8_t *orig_addr, size_t orig_size) {
    return _create(orig_addr, orig_size, 0, true);
}

void HookHandle::call_proxy(Regs *regs, void *target) {
    for (auto it = handlers.begin(); it != handlers.end();) {
        HookHandler *handle = *it;
        if (!handle->is_remove_pending) {
            handle->entrance++;
            handle->handler(*handle, *regs, target);
            handle->entrance--;
        }
        if (handle->entrance == 0 && handle->is_remove_pending) {
            it = handlers.erase(it);
            handle->release();
        } else {
            ++it;
        }
    }
}

void HookHandle::call(Regs *regs) {
    for (auto it = handlers.begin(); it != handlers.end();) {
        HookHandler *handle = *it;
        if (!handle->is_remove_pending) {
            handle->entrance++;
            handle->handler(*handle, *regs, NULL);
            handle->entrance--;
        }
        if (handle->entrance == 0 && handle->is_remove_pending) {
            it = handlers.erase(it);
            handle->release();
        } else {
            ++it;
        }
    }
}


bool api::initPatchApi() {
    proxies_heap = HeapCreate(HEAP_CREATE_ENABLE_EXECUTE, 0, 0);
    return true;
}
