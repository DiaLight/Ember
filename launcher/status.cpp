//
// Created by DiaLight on 27.12.2022.
//
#include "status.h"
#include <vector>
#include <string>
#include <sstream>
#include <layout.h>
#include <utils.h>
#include <launcher.h>


std::vector<std::wstring> status;
void printStatus(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char tmp[1024];
  int len = wvsprintfA(tmp, fmt, ap);
  tmp[len] = '\0';
  status.push_back(utf8ToUtf16(tmp));
  va_end(ap);
}
void printStatus(const wchar_t *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  wchar_t tmp[1024];
  int len = wvsprintfW(tmp, fmt, ap);
  tmp[len] = '\0';
  status.emplace_back(tmp);
  va_end(ap);
}
void clearStatus() {
  status.clear();
}
void updateStatus() {
  std::wstringstream wss;
  for(auto &msg : status) wss << msg << "\r\n";
  TextField.setText(wss.str().c_str());
  TextField.lineScroll(0, status.size());
}

#if DEBUG_CONSOLE
void printConsole(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char tmp[1024];
  int len = wvsprintfA(tmp, fmt, ap);
  tmp[len++] = '\n';
  tmp[len] = '\0';
  WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), tmp, len, NULL, NULL);
  va_end(ap);
}
void printConsole(const wchar_t *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  wchar_t tmp[1024];
  int len = wvsprintfW(tmp, fmt, ap);
  tmp[len++] = '\n';
  tmp[len] = '\0';
  WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE), tmp, len, NULL, NULL);
  va_end(ap);
}
#else
#define printConsole(fmt, ...)
#endif
void showError(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char tmp[1024];
  int len = wvsprintfA(tmp, fmt, ap);
#if 0
  tmp[len++] = '\n';
  tmp[len] = '\0';
  WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), tmp, len, NULL, NULL);
#else
  tmp[len] = '\0';
  MessageBox(NULL, tmp, EmberLauncher_title, NULL);
#endif
  va_end(ap);
}
