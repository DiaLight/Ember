//
// Created by DiaLight on 15.12.2022.
//
#include <dk2_patches.h>
#include <cstdio>
#include <dk2_info.h>
#include <utils/patch.h>
#include <dk2/RtGuiView.h>

// max=140
//  8 19  152
//
// 2040 1120
//
// 133
// 1024 * 2040 / 2560 = 816  (816 + 128-1) / 128 = 7
// 768 * 1120 / 1920 = 448  (448 + 32-1) / 32 = 14
// 7 * 14 = 98  < 140
//
// 1280 * 2040 / 2560 = 1020  (1020 + 128-1) / 128 = 8
// 1024 * 1120 / 1920 = 597  (597 + 32-1) / 32 = 19
// 8 * 19 = 152  > 140
//
// 1600 * 2040 / 2560 = 1275  (1275 + 128-1) / 128 = 10
// 1200 * 1120 / 1920 = 700  (700 + 32-1) / 32 = 22
// 10 * 22 = 220  > 140
//
//
//
//
// 640 480
// 720 480
// 720 576
// 800 600
// 1024 768   98     128 +
// 1152 864          162 -
// 1176 664   104 +  140 -
// 1280 720   112 +
// 1280 768   112 +
// 1280 800   120 +
// 1280 960   144
// 1280 1024  152
// 1360 768   126 +
// 1366 768   126 +
// 1600 900   170
// 1600 1024  190
// 1600 1200  220
// 1680 1050  220
// 1920 1080
// 1920 1200
// 1920 1440
// 2048 1536
// 2560 1440
// 2560 1600
// 3840 2160         1350
// 7680 4320         5400
// 8192 4320         5760
// 1440 900   153    228

bool patch::expand_surf_idx_array() {
    // create array instead builtin limited to 140 dwords
    // .text:0042C7E1  mov ecx, 6
    auto *hh0 = HookHandle::create(api::dk2_base + (0x0042C7E1 - dk2_virtual_base), 5);
    hh0->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        dk2::RtGuiView *view = (dk2::RtGuiView *) regs.ebx;
        DWORD *&arr = *(DWORD **) &view->Arrp31x400_ids[0];
        if (arr == nullptr) {
            arr = (DWORD *) malloc(8192 * sizeof(DWORD));  // 5760 needs for 8K resolution
            ZeroMemory(arr, 8192 * sizeof(DWORD));
//      printf("%p create array %p instead builtin limited to 140 dwords\n", view, arr);
        } else {
            printf("%p array already created %p\n", view, arr);
        }
    });

    // redirect write to array
    // .text:0042C8A6  push ecx
    // .text:0042C8A7  push 101h
    auto *hh = HookHandle::create(api::dk2_base + (0x0042C8A6 - dk2_virtual_base), 6);
    hh->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        DWORD blockX = regs.esi;
        DWORD blockY = regs.edi;
        dk2::RtGuiView *view = (dk2::RtGuiView *) regs.ebx;
        int idx = blockX + view->width_128blocks * blockY;
        DWORD *arr = (DWORD *) view->Arrp31x400_ids[0];
        DWORD *pos = &arr[idx];
//    printf("%p w=%d redirect write to array %p  %dx%d %p->%p\n", view, view->f27F_width_128blocks, arr, blockX, blockY, regs.ecx, pos);
        regs.ecx = (intptr_t) pos;
    });

    // redirect read from array
    // .text:0042CE99  mov  edx, [ecx]
    // .text:0042CE9B  push eax
    // .text:0042CE9C  call dword ptr [edx+68h]
    auto *hh2 = HookHandle::create(api::dk2_base + (0x0042CE99 - dk2_virtual_base), 6);
    hh2->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        DWORD blockX = regs.edi;
        DWORD blockY = *(DWORD *) (regs.esp + 0x5C);
        dk2::RtGuiView *view = (dk2::RtGuiView *) regs.esi;
        int idx = blockX + view->width_128blocks * blockY;
        DWORD *arr = (DWORD *) view->Arrp31x400_ids[0];
//    printf("%p redirect read from array %dx%d %d %d\n", view, blockX, blockY, idx, arr[idx]);
        regs.eax = arr[idx];
    });

    // redirect read2 from array
    // .text:0042CF86  mov edx, [esp+10Ch+var_E4]
    // .text:0042CF8A  mov [esp+10Ch+var_CD], eax
    auto *hh3 = HookHandle::create(api::dk2_base + (0x0042CF86 - dk2_virtual_base), 8);
    hh3->addHandler([](HookHandler &handle, Regs &regs, void *target) {
        DWORD blockX = regs.esi;
        DWORD blockY = *(DWORD *) (regs.esp + 0x1C);
        dk2::RtGuiView *view = (dk2::RtGuiView *) regs.edi;
        int idx = blockX + view->width_128blocks * blockY;
        DWORD *arr = (DWORD *) view->Arrp31x400_ids[0];
//    printf("%p redirect read2 from array %dx%d %d %d\n", view, blockX, blockY, idx, arr[idx]);
        regs.eax = arr[idx];
    });
    return true;
}
