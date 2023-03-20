//
// Created by DiaLight on 18.03.2023.
//

#ifndef EMBER_DK2_RELINK_H
#define EMBER_DK2_RELINK_H

#include <map>
#include <vector>
#include <memory>
#include <Windows.h>


typedef struct BASE_RELOCATION_ENTRY {
    USHORT Offset : 12;
    USHORT Type : 4;
} BASE_RELOCATION_ENTRY, * PBASE_RELOCATION_ENTRY;
static_assert(sizeof(BASE_RELOCATION_ENTRY) == 2);

enum RelocKind {
    VA32,  // IMAGE_REL_I386_DIR32 -> IMAGE_REL_BASED_HIGHLOW
    REL32  // IMAGE_REL_I386_REL32 -> ignore
};

enum SymKind {
    SK_Global,
    SK_Function,
    SK_ThisFunction,
};

struct ref_t {
    uint32_t *src;
    RelocKind kind;

    ref_t(uint32_t *src, RelocKind kind) : src(src), kind(kind) {}
};

struct xrefs_t {
    std::vector<ref_t> refs;
    uint32_t dk2_rva;
    SymKind kind;
    const char *name;

    explicit xrefs_t(uint32_t dk2_rva, SymKind kind, const char *name) : dk2_rva(dk2_rva), kind(kind), name(name) {}
};

void ember_runtime_relink(void *dk2_base);

#endif //EMBER_DK2_RELINK_H
