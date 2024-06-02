//
// Created by DiaLight on 20.12.2023.
//

#include "stdex.h"
#include "dk2_info.h"
#include <cstdio>
#include <Windows.h>
#include <utils/stacktrace.h>
#include <set>
#include <map>
#include <iomanip>
#include <filesystem>
#include <fstream>
#include "threads.h"

#define hex32(val) std::hex << std::uppercase << std::setfill(L'0') << std::setw(8) << ((uint32_t) val) << std::dec
#define hex32a(val) std::hex << std::uppercase << std::setfill('0') << std::setw(8) << ((uint32_t) val) << std::dec

bool equals(const StackFrame &left, const StackFrame &right) {
    if(left.eip != right.eip) return false;
    return true;
}

struct ActiveThread {

    StackLimits limits;
    std::vector<std::shared_ptr<StackFrame>> _lastFrames;
    std::vector<std::shared_ptr<StackFrame>> frames;
    bool hasError = false;
    uint32_t tid;
    uint32_t startTime;
    std::filesystem::path file;
    std::ofstream f;

    explicit ActiveThread(uint32_t tid, uint32_t startTime, std::filesystem::path &dumpRoot) : tid(tid), startTime(startTime) {
        std::stringstream ss;
        ss << hex32a(startTime) << "_" << tid << ".log";
        file = dumpRoot / ss.str();
        f.open(file);
    }
    ~ActiveThread() {
        f.close();
    }

    bool updateStack(HANDLE hThread) {
        if(SuspendThread(hThread) == ((DWORD) -1)) return false;
        bool result = updateStack_suspended(hThread);
        ResumeThread(hThread);
        return result;
    }

    bool isStackChanged() {
        if(frames.size() != _lastFrames.size()) return true;
        size_t sz = frames.size();
        for (int i = 0; i < sz; ++i) {
            if(!equals(*frames[i], *_lastFrames[i])) return true;
        }
        return false;
    }

private:
    bool updateStack_suspended(HANDLE hThread) {
        CONTEXT ctx;
        ZeroMemory(&ctx, sizeof(ctx));
        ctx.ContextFlags = CONTEXT_FULL;
        if(!GetThreadContext(hThread, &ctx)) {
            printf("[TST]: GetThreadContext failed\n");
            return false;
        }
        if(!limits.resolve(hThread)) {
            printf("[TST]: resolve stack limits failed\n");
            return false;
        }
        if(!hasError) _lastFrames = std::move(frames);
        frames.clear();
        hasError = !api::traceTheStack(&ctx, limits, frames);
        if(hasError && GetThreadId(hThread) == api::main_tid) {
            std::wstringstream wss;
            wss << "stack limits: " << hex32(limits.low) << "-" << hex32(limits.high);
            wss << "  tid: " << tid << "\n";
            for(auto &fr : frames) {
                fr->format(wss);
            }
            std::wstring wstr = wss.str();
            printf("%S\n", wstr.c_str());
            __debugbreak();
        }
        return true;
    }

};


struct ThreadsStackTracer_impl {

    std::map<uint32_t, std::shared_ptr<ActiveThread>> m_threads;
    bool hasError = false;
    uint32_t startTicks;
    std::filesystem::path dumpRoot;

    ThreadsStackTracer_impl() : dumpRoot("ThreadsStackTracer") {
        if(!exists(dumpRoot)) create_directory(dumpRoot);
        startTicks = GetTickCount();
    }

    void updateAll() {
        std::set<uint32_t> unvisited;
        for(auto e : m_threads) {
            unvisited.insert(e.first);
        }
        for(auto tid : thread_list()) {
            if(tid == GetCurrentThreadId()) continue;
            HANDLE hThread = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_QUERY_LIMITED_INFORMATION, FALSE, tid);
            if(hThread == NULL) {
                printf("[TST]: failed to open thread\n");
                hasError = true;
                continue;
            }
            auto it = m_threads.find(tid);
            if(it == m_threads.end()) {
                auto it2 = m_threads.insert(std::make_pair(
                        tid,
                        std::make_shared<ActiveThread>(
                                tid,
                                GetTickCount() - startTicks,
                                dumpRoot)
                ));
                if (it2.second) {
                    it = it2.first;
                }
            }
            if(it != m_threads.end()) {
                if(it->second->updateStack(hThread)) {
                    unvisited.erase(tid);
                } else {
                    hasError = true;
                }
            }
            CloseHandle(hThread);
        }

        for(auto tid : unvisited) {
            auto it = m_threads.find(tid);
            if(it == m_threads.end()) continue;
            m_threads.erase(it);
        }
    }

    void save() {
        for(auto &e : m_threads) {
            auto &thr = *e.second;
            std::wstringstream wss;
            wss << "stack limits: " << hex32(thr.limits.low) << "-" << hex32(thr.limits.high) << "\n";
            for(auto &fr : thr.frames) {
                fr->format(wss);
            }
            std::wstring wstr = wss.str();
            if(thr.hasError) {
                printf("%S\n", wstr.c_str());
            }
            if(!wstr.empty() && !thr.hasError && thr.isStackChanged()) {
                auto stack = utf8_encode(wstr);
                thr.f << stack;
            }
        }
    }

};


DWORD WINAPI ThreadsStackTracer_thr(LPVOID lpThreadParameter) {
    ThreadsStackTracer_impl tst;
    while(!tst.hasError) {
        tst.updateAll();
        tst.save();
        SleepEx(200, FALSE);
    }
    return 0;
}

namespace utils {
    bool ThreadsStackTracer();
}

bool utils::ThreadsStackTracer() {
    CreateThread(NULL, 0, ThreadsStackTracer_thr, NULL, 0, NULL);
    return true;
}
