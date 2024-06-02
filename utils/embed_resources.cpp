//
// Created by DiaLight on 30.03.2023.
//
#include <Windows.h>
#include <string>

#if EMBED_MAPPINGS

#include <dk2_info.h>
#include "embed_resources.h"

namespace {
    class Resource {
    public:
        struct Parameters {
            std::size_t size_bytes = 0;
            void* ptr = nullptr;
        };
    private:
        HRSRC hResource = nullptr;
        HGLOBAL hMemory = nullptr;

        Parameters p;

    public:
        Resource(void *module, int resource_id, const std::string &resource_class) {
            hResource = FindResourceA((HMODULE) module, MAKEINTRESOURCEA(resource_id), resource_class.c_str());
            hMemory = LoadResource((HMODULE) module, hResource);

            p.size_bytes = SizeofResource((HMODULE) module, hResource);
            p.ptr = LockResource(hMemory);
        }

        bool operator!() const {
            return p.size_bytes == 0;
        }

        [[nodiscard]] auto& GetResource() const {
            return p;
        }

        [[nodiscard]] auto GetResourceString() const {
            std::string_view dst;
            if (p.ptr != nullptr)
                dst = std::string_view(reinterpret_cast<char*>(p.ptr), p.size_bytes);
            return dst;
        }
    };
}

bool getReferences(std::string &out) {
    Resource referencesRes(api::ember_base, IDR_REFERENCES, "TEXT");
    if(!referencesRes) return false;
    auto references = referencesRes.GetResourceString();
    out = references;
    return true;
}

bool getDk2Stack(std::string &out) {
    Resource stackRes(api::ember_base, IDR_DK2_STACK, "TEXT");
    if(!stackRes) return false;
    auto stack = stackRes.GetResourceString();
    out = stack;
    return true;
}

bool getWeanetrStack(std::string &out) {
    Resource stackRes(api::ember_base, IDR_WEANETR_STACK, "TEXT");
    if(!stackRes) return false;
    auto stack = stackRes.GetResourceString();
    out = stack;
    return true;
}

#endif
