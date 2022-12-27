//
// Created by DiaLight on 27.12.2022.
//
#include "create_process.h"
#include <Windows.h>
#include <WinUser.h>
#include <thread>
#include <string>
#include <sstream>
#include <windowsx.h>
#include <status.h>


struct CollectWindows {
  DWORD procId = 0;
  DWORD count = 0;
};

BOOL CALLBACK CollectWindows_WndEnumProc(HWND hWnd, LPARAM lParam) {
  CollectWindows &collect = *(CollectWindows *) lParam;
  DWORD procId = 0;
  GetWindowThreadProcessId(hWnd, &procId);
  if(collect.procId == procId) {
    DWORD dwStyle = GetWindowStyle(hWnd);
    if((dwStyle & WS_VISIBLE) != 0) {
      collect.count++;
    }
  }
  return TRUE;
}

bool CreateProcess_runAndWait(const wchar_t *cmd, const wchar_t *dir, DWORD &lastError, DWORD &exitCode) {
  SECURITY_ATTRIBUTES saAttr;
  saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
  saAttr.bInheritHandle = TRUE;
  saAttr.lpSecurityDescriptor = NULL;

  HANDLE hChildStd_OUT_Rd = NULL;
  HANDLE hChildStd_OUT_Wr = NULL;
  if (!CreatePipe(&hChildStd_OUT_Rd, &hChildStd_OUT_Wr, &saAttr, 0) ) {
    printStatus("CreatePipe failed: %08X", GetLastError());
    return false;
  }

  if (!SetHandleInformation(hChildStd_OUT_Rd, HANDLE_FLAG_INHERIT, 0) ) {
    printStatus("SetHandleInformation failed: %08X", GetLastError());
    return false;
  }

  STARTUPINFOW si;
  ZeroMemory(&si, sizeof(si));
  si.cb = sizeof(STARTUPINFOW);
  si.hStdError = hChildStd_OUT_Wr;
  si.hStdOutput = hChildStd_OUT_Wr;
  si.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
  si.dwFlags |= STARTF_USESTDHANDLES;

  PROCESS_INFORMATION	pi;
  ZeroMemory(&pi, sizeof(pi));

  printStatus("");
  printStatus(L"CreateProcessW(%s) cwd=%s", cmd, dir);
  int cmdLen = wcslen(cmd);
  wchar_t *mcmd = (wchar_t *) malloc((cmdLen + 1) * sizeof(wchar_t));
  wcscpy(mcmd, cmd);
  bool created = CreateProcessW(
      NULL, mcmd, NULL, NULL, TRUE,
      0, NULL, dir, &si, &pi
  );
  CloseHandle(hChildStd_OUT_Wr);
  free(mcmd);
  if(!created) {
    lastError = GetLastError();
    CloseHandle(hChildStd_OUT_Rd);
    return false;
  }

  std::thread thr([&pi] {  // window observer thread
    while(WaitForSingleObject(pi.hProcess, 2000) == WAIT_TIMEOUT) {
      CollectWindows collect;
      std::stringstream ss;
      collect.procId = pi.dwProcessId;
      EnumWindows(CollectWindows_WndEnumProc, (LPARAM) &collect);
      if(collect.count != 0) continue;
      if(WaitForSingleObject(pi.hProcess, 2000) != WAIT_TIMEOUT) break;
      collect.count = 0;
      EnumWindows(CollectWindows_WndEnumProc, (LPARAM) &collect);
      if(collect.count != 0) continue;
      int iStatus = MessageBoxA(NULL,
                                "Running process without open windows detected\n"
                                "terminate DK2 process?",
                                "DK2 window observer thread", MB_OKCANCEL);
      if(iStatus == IDOK) {
        TerminateProcess(pi.hProcess, 1);
      }
    }
  });
#define BUFSIZE 4096
  DWORD dwRead;
  std::string line;
  size_t lineEndOffs = 0;
  BOOL bSuccess = FALSE;
  for (;;) {
    line.resize(lineEndOffs + BUFSIZE);
    bSuccess = ReadFile(hChildStd_OUT_Rd, (&*line.begin()) + lineEndOffs, BUFSIZE, &dwRead, NULL);
    if(!bSuccess || dwRead == 0) break;
    char *pos = (&*line.begin()) + lineEndOffs;
    char *end = pos + dwRead;
    lineEndOffs += dwRead;
    for(;pos < end; pos++) {
      if(*pos == '\n') {
        size_t lineLen = pos - (&*line.begin());
        std::string tmp(&*line.begin(), lineLen);
        printStatus(tmp.c_str());
        line.erase(0, lineLen + 1);
        lineEndOffs -= lineLen + 1;
      }
    }
  }
  if(!line.empty()) {
    printStatus(line.c_str());
  }
  CloseHandle(hChildStd_OUT_Rd);

  WaitForSingleObject(pi.hProcess, INFINITE);
  thr.join();
  GetExitCodeProcess(pi.hProcess, &exitCode);
  CloseHandle(pi.hProcess);
  CloseHandle(pi.hThread);
  return true;
}
