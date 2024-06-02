//
// Created by DiaLight on 09.09.2023.
//
#include <utils/StackLimits.h>
#include <cstdio>


typedef LONG NTSTATUS;
typedef DWORD KPRIORITY;

typedef struct _CLIENT_ID {
    PVOID UniqueProcess;
    PVOID UniqueThread;
} CLIENT_ID, *PCLIENT_ID;

typedef struct _THREAD_BASIC_INFORMATION {
    NTSTATUS                ExitStatus;
    PVOID                   TebBaseAddress;
    CLIENT_ID               ClientId;
    ULONG_PTR               AffinityMask;
    KPRIORITY               Priority;
    LONG                    BasePriority;
} THREAD_BASIC_INFORMATION, *PTHREAD_BASIC_INFORMATION;

enum THREADINFOCLASS {
    ThreadBasicInformation,
};


typedef NTSTATUS (WINAPI *NtQueryInformationThreadProc)(HANDLE ThreadHandle, THREADINFOCLASS ThreadInformationClass, PVOID ThreadInformation, ULONG ThreadInformationLength, PULONG ReturnLength);
NtQueryInformationThreadProc NtQueryInformationThread = nullptr;

ULONG_PTR GetThreadStackLimits(HANDLE hThread, ULONG_PTR &low) {
    if(!NtQueryInformationThread) {
        NtQueryInformationThread = (NtQueryInformationThreadProc) GetProcAddress(
                GetModuleHandle("ntdll.dll"), "NtQueryInformationThread"
        );
        if (!NtQueryInformationThread) {
            printf("NtQueryInformationThread failed\n");
            return NULL;
        }
    }
    THREAD_BASIC_INFORMATION tbi = {0};
    ULONG length;
    NTSTATUS status = NtQueryInformationThread(hThread, ThreadBasicInformation, &tbi, sizeof(tbi), &length);
    if (FAILED(status)) {
        printf("NtQueryInformationThread failed %08X  size %d\n", status, length);
        return NULL;
    }
    NT_TIB tib = {0};
    memcpy(&tib, tbi.TebBaseAddress, sizeof(tbi));
    low = (ULONG_PTR) tib.StackLimit;
    return (ULONG_PTR) tib.StackBase;
}


StackLimits::StackLimits() {}

void StackLimits::resolve() {
    GetCurrentThreadStackLimits(&low, &high);
}
bool StackLimits::resolve(HANDLE handle) {
    high = GetThreadStackLimits(handle, low);
    return high != NULL;
}

bool StackLimits::contains(ULONG_PTR addr) {
    return low <= addr && addr < high;
}
