//
// Created by DiaLight on 05.09.2023.
//

#ifndef EMBER_THREADS_H
#define EMBER_THREADS_H


#include <Windows.h>
#include <tlhelp32.h>

struct thread_list {

    HANDLE thread_snap = INVALID_HANDLE_VALUE;
    THREADENTRY32 te32;
    DWORD processId;

    thread_list(DWORD processId) : processId(processId) {}
    thread_list() : processId(GetCurrentProcessId()) {}
    ~thread_list() {
        if(thread_snap != INVALID_HANDLE_VALUE) CloseHandle(thread_snap);
    }

    thread_list &begin() {
        thread_snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
        if(thread_snap == INVALID_HANDLE_VALUE) {
            printf("Invalid Handle Value");
            return *this;
        }
        te32.dwSize = sizeof(THREADENTRY32);
        if (!Thread32First(thread_snap, &te32)) {
            printf("Thread32First Error");
            CloseHandle(thread_snap);
            thread_snap = INVALID_HANDLE_VALUE;
            return *this;
        }
        ++*this;
        return *this;
    }
    static void *end() { return nullptr; }

    bool operator !=(void *it) {
        return thread_snap != INVALID_HANDLE_VALUE;
    }
    DWORD operator *() {
        return te32.th32ThreadID;
    }
    thread_list &operator ++() {
        do {
            if(!Thread32Next(thread_snap, &te32)) {
                CloseHandle(thread_snap);
                thread_snap = INVALID_HANDLE_VALUE;
                break;
            }
        } while (te32.th32OwnerProcessID != processId);
        return *this;
    }

};

#endif //EMBER_THREADS_H
