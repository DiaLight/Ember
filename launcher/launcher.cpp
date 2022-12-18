//
// Created by DiaLight on 11.09.2022.
//
#include <Windows.h>
#include <WinUser.h>
#include <tchar.h>
#include <cstdio>
#include <codecvt>
#include <functional>
#include <ShlObj.h>
#include <windowsx.h>
#include <sstream>
#include <iomanip>
#include "../win32_gui_layout.h"
#include "CItemIterator.h"
#include <thread>
#include <ddraw.h>
#include <algorithm>

#define hex32(val) std::hex << std::uppercase << std::setfill(L'0') << std::setw(8) << ((uint32_t) val) << std::dec
#define hex16(val) std::hex << std::uppercase << std::setfill(L'0') << std::setw(4) << ((uint16_t) val) << std::dec
#define hex8(val) std::hex << std::uppercase << std::setfill(L'0') << std::setw(2) << ((uint8_t) val) << std::dec

#define EmberLauncher_title _T("Ember - DK2 patching launcher")
#define EmberLauncher_class _T("EmberLauncher")
#define DEBUG_CONSOLE 0

std::wstring g_dk2Dir;
std::wstring g_curExeDir;
std::wstring g_cwdDir;
std::wstring g_pathEnv;

std::wstring utf8ToUtf16(const std::string& utf8Str) {
  try {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
    return conv.from_bytes(utf8Str);
  } catch(...) {
    std::wstringstream wss;
//    wss << L"failed to convert len=" << utf8Str.size();
//    for (int i = 0; i < utf8Str.length(); ++i) {
//      wss << " " << hex8(utf8Str[i]);
//    }
//    wss << " ";
    for (int i = 0; i < utf8Str.length(); ++i) {
      wss << (char) utf8Str[i];
    }
    return wss.str();
  }
}

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

bool dirExists(const wchar_t *path) {
  DWORD ftyp = GetFileAttributesW(path);
  if (ftyp == INVALID_FILE_ATTRIBUTES) return false;
  if (ftyp & FILE_ATTRIBUTE_DIRECTORY) return true;
  return false;
}
size_t fileSize(LPCWSTR pszFilename) {
  HANDLE hFile = CreateFileW(pszFilename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
  if(hFile == INVALID_HANDLE_VALUE) return 0;
  DWORD size = GetFileSize(hFile, NULL);
  CloseHandle(hFile);
  return size;
}

bool fileExist(LPCWSTR pszFilename) {
  DWORD dwAttrib = GetFileAttributesW(pszFilename);
  if(dwAttrib & FILE_ATTRIBUTE_DEVICE) return false;
  if(dwAttrib & FILE_ATTRIBUTE_DIRECTORY) return false;
  return true;
}

#include "dk2_versions.h"
#include "open_directory.h"
#include "md5_hash.h"

gui::edit_elem_t DirPath(L"", WS_VISIBLE | WS_BORDER);
gui::button_elem_t SelectDir(L"select", WS_VISIBLE | WS_BORDER);
gui::edit_elem_t TextField(
    L"",
    WS_VISIBLE | WS_BORDER |
    ES_READONLY |
    WS_HSCROLL | WS_VSCROLL | ES_LEFT |
    ES_MULTILINE | ES_AUTOVSCROLL | ES_AUTOHSCROLL
);
gui::button_elem_t StartBtn(L"start", WS_VISIBLE | WS_BORDER);
gui::label_elem_t MenuLabel(L"Menu resolution:", WS_VISIBLE | WS_TABSTOP);
gui::combobox_elem_t MenuModesCombo(L"", CBS_DISABLENOSCROLL | CBS_DROPDOWNLIST | CBS_DROPDOWN | WS_OVERLAPPED | WS_VISIBLE);
gui::label_elem_t GameLabel(L"Game resolution:", WS_VISIBLE | WS_TABSTOP);
gui::combobox_elem_t GameModesCombo(L"", CBS_DISABLENOSCROLL | CBS_DROPDOWNLIST | CBS_DROPDOWN | WS_OVERLAPPED | WS_VISIBLE);
gui::button_elem_t DPIBtn(L"DPI aware:", BS_CHECKBOX | BS_AUTOCHECKBOX | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);
gui::button_elem_t FullscreenBtn(L"Fullscreen:", BS_CHECKBOX | BS_AUTO3STATE | BS_PUSHBUTTON | BS_LEFTTEXT | WS_VISIBLE | WS_BORDER);

struct : gui::layout_t {
  void operator()(HWND hwnd, int width, int height) {
    layout_t::operator()(hwnd, width, height);
    hor(-1, -1, [this] {
      gap(10);
      ver([this] {
        gap(10);

        // body start
        hor(-1, 20, [this] {
          visit(DirPath, -1, size.h);
          gap(10);
          visit(SelectDir, 65, size.h);
        });
        gap(10);
        visit(TextField, -1, -1);
        gap(10);
        hor(-1, 20, [this] {
          visit(MenuLabel, 100, size.h);
          visit(MenuModesCombo, 150, 50000);
          gap(10);
          visit(GameLabel, 100, size.h);
          visit(GameModesCombo, 150, 50000);
        });
        gap(10);
        hor(-1, 20, [this] {
          visit(DPIBtn, 80, size.h);
          gap(20);
          visit(FullscreenBtn, 80, size.h);
        });
        // body end

        gap(10);

        // footer
        hor(-1, 30, [this] {
          gap(-1);
          visit(StartBtn, 100, size.h);
          gap(-1);
        });
        // footer end

        gap(10);
      });
      gap(10);
    });
  }
} layout;


class DDClose {
  LPDIRECTDRAW lpDD;
public:
  explicit DDClose(LPDIRECTDRAW lpDD) : lpDD(lpDD) {}
  ~DDClose() {
    lpDD->Release();
  }
};

struct screen_mode {
  int width;
  int height;
  screen_mode(int width, int height) : width(width), height(height) {}
};
std::vector<screen_mode> screenModeList;

HRESULT FAR PASCAL enumDDModesCallback(LPDDSURFACEDESC desc, LPVOID arg) {
  auto *list = (std::vector<screen_mode> *) arg;
  if(desc->ddpfPixelFormat.dwRGBBitCount == 32) {
    list->emplace_back(desc->dwWidth, desc->dwHeight);
  }
  return DDENUMRET_OK;
}

bool enumModes(HWND hWnd, std::vector<screen_mode> &list) {
  LPDIRECTDRAW lpDD;
  if(DirectDrawCreate(NULL, &lpDD, NULL) != DD_OK) {
    printStatus("failed to create dd");
    return false;
  }
  DDClose ddc(lpDD);
  if (lpDD->SetCooperativeLevel(hWnd, DDSCL_ALLOWMODEX | DDSCL_EXCLUSIVE | DDSCL_NOWINDOWCHANGES | DDSCL_FULLSCREEN) != DD_OK) {
    printStatus("failed to set coop level");
    return false;
  }
  if (lpDD->EnumDisplayModes(0, NULL, &list, (LPDDENUMMODESCALLBACK) enumDDModesCallback) != DD_OK) {
    printStatus("failed to enum modes");
    return false;
  }
  lpDD->SetCooperativeLevel(hWnd, DDSCL_NORMAL);
  return true;
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
  GetExitCodeProcess(pi.hProcess, &exitCode);
  CloseHandle(pi.hProcess);
  CloseHandle(pi.hThread);
  return true;
}

void genDll() {
  DWORD exitCode = 0;
  DWORD lastError = 0;
  std::wstringstream wss;
  wss << L'\"' << g_curExeDir << L"/makedll.exe" << L'\"';
  wss << " " << L'\"' << g_curExeDir << L"/dk2.dll" << L'\"';
  wss << " " << L'\"' << g_curExeDir << L"/DKII.exe" << L'\"';
  wss << " " << L'\"' << g_curExeDir << L"/exports.map" << L'\"';
  wss << " " << L'\"' << g_curExeDir << L"/references.map" << L'\"';
  std::wstring cmd = wss.str();
  if(CreateProcess_runAndWait(cmd.c_str(), NULL, lastError, exitCode)) {
    if(exitCode == 0) return;
  }
  if(lastError) printStatus("start makedll failed: %08X", lastError);
  else if(exitCode) printStatus("makedll exited with: %08X", exitCode);
}

void startEmber(HWND hwnd) {
  DWORD exitCode = 0;
  DWORD lastError = 0;
  std::wstringstream wss;
  wss << L'\"' << g_curExeDir << L"/bootstrap_patcher.exe" << L'\"';
  wss << " -32BITEVERYTHING";
  int check = DPIBtn.getCheck();
  if(check == BST_CHECKED) {
    wss << " -ember:dpi_aware";
  }
  check = FullscreenBtn.getCheck();
  if(check != BST_INDETERMINATE) {
    wss << " -ember:fullscreen=";
    wss << (check == BST_CHECKED ? "true" : "false");
  }
  check = MenuModesCombo.getCurSel();
  if(check != 0) {
    auto &mode = screenModeList[check];
    wss << " -ember:menu_resolution=";
    wss << mode.width << "x" << mode.height;
  }
  check = GameModesCombo.getCurSel();
  if(check != 0) {
    auto &mode = screenModeList[check];
    wss << " -ember:game_resolution=";
    wss << mode.width << "x" << mode.height;
  }

  std::wstring cmd = wss.str();
  ShowWindow(hwnd, SW_HIDE);
  bool created = CreateProcess_runAndWait(cmd.c_str(), g_dk2Dir.c_str(), lastError, exitCode);
  ShowWindow(hwnd, SW_SHOW);
  SetForegroundWindow(hwnd);
  if(created && exitCode == 0) return;
  if(lastError) printStatus("start bootstrap patcher failed: %08X", lastError);
  else if(exitCode) printStatus("bootstrap patcher exited with: %08X", exitCode);
}

bool persistence_getStr(const std::wstring &name, std::wstring &value) {
  value.resize(MAX_PATH);
  LSTATUS status;
  DWORD BufferSize = MAX_PATH;
  status = RegGetValueW(
      HKEY_CURRENT_USER,
      L"SOFTWARE\\Ember Launcher",
      name.c_str(), RRF_RT_REG_SZ, NULL, (PVOID) &*value.begin(), &BufferSize
  );
  if(status != ERROR_SUCCESS) {
    return false;
  }
  value.resize(wcslen(&*value.begin()));
  return true;
}

bool persistence_setStr(const std::wstring &name, const std::wstring &value) {
  LSTATUS status;
  HKEY hKey = NULL;
  status = RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, &hKey);
  if(status == ERROR_FILE_NOT_FOUND) {
    status = RegCreateKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL);
  }
  bool ret = false;
  if(status == ERROR_SUCCESS) {
    status = RegSetValueExW(hKey, name.c_str(), 0, REG_SZ, (BYTE *) value.c_str(), value.length() * sizeof(wchar_t));
    if(status == ERROR_SUCCESS) {
      ret = true;
    }
    RegCloseKey(hKey);
  }
  return ret;
}

bool persistence_getDword(const std::wstring &name, DWORD &value) {
  LSTATUS status;
  DWORD BufferSize = sizeof(DWORD);
  status = RegGetValueW(
      HKEY_CURRENT_USER,
      L"SOFTWARE\\Ember Launcher",
      name.c_str(), RRF_RT_REG_DWORD, NULL, (PVOID) &value, &BufferSize
  );
  if(status != ERROR_SUCCESS) {
    return false;
  }
  return true;
}

bool persistence_setDword(const std::wstring &name, DWORD value) {
  LSTATUS status;
  HKEY hKey = NULL;
  status = RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, &hKey);
  if(status == ERROR_FILE_NOT_FOUND) {
    status = RegCreateKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL);
  }
  bool ret = false;
  if(status == ERROR_SUCCESS) {
    status = RegSetValueExW(hKey, name.c_str(), 0, REG_DWORD, (BYTE *) &value, sizeof(value));
    if(status == ERROR_SUCCESS) {
      ret = true;
    }
    RegCloseKey(hKey);
  }
  return ret;
}

void loadDk2Path() {
  g_dk2Dir.resize(MAX_PATH);
  LSTATUS status;
  DWORD BufferSize = MAX_PATH;
  status = RegGetValueW(
      HKEY_CURRENT_USER,
      L"SOFTWARE\\Ember Launcher",
      L"DK2Path", RRF_RT_REG_SZ, NULL, (PVOID) &*g_dk2Dir.begin(), &BufferSize
  );
  if(status != ERROR_SUCCESS) {
    BufferSize = MAX_PATH;
    status = RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\App Paths\\DKII.exe",
        L"Path", RRF_RT_REG_SZ | RRF_SUBKEY_WOW6432KEY, NULL, (PVOID) &*g_dk2Dir.begin(), &BufferSize
    );
    if(status != ERROR_SUCCESS) {
      g_dk2Dir.resize(0);
    } else {
      g_dk2Dir.resize(wcslen(&*g_dk2Dir.begin()));
    }
  } else {
    g_dk2Dir.resize(wcslen(&*g_dk2Dir.begin()));
  }
  DirPath.setText(g_dk2Dir.c_str());
}
void saveDk2Path() {
  LSTATUS status;
  HKEY hKey = NULL;
  status = RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, &hKey);
  if(status == ERROR_FILE_NOT_FOUND) {
    status = RegCreateKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Ember Launcher", 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL);
  }
  if(status == ERROR_SUCCESS) {
    status = RegSetValueExW(hKey, L"DK2Path", 0, REG_SZ, (BYTE *) g_dk2Dir.c_str(), g_dk2Dir.length() * sizeof(wchar_t));
    if(status == ERROR_SUCCESS) {

    }
    RegCloseKey(hKey);
  }
}
bool validateDk2Path() {
  if(g_dk2Dir[0] == L'\0') {
    printStatus(L"path is empty");
    return false;
  }
  if(!dirExists(g_dk2Dir.c_str())) {
    printStatus(L"selected directory is not exist");
    return false;
  }
  std::wstring exePath = g_dk2Dir + L"/DKII.exe";
  if(!fileExist(exePath.c_str())) {
    printStatus(L"DKII.exe - not found");
    return false;
  }
  printStatus(L"DKII.exe - found");
  DWORD size = 0, entry = 0;
  if(!readSignature(size, entry)) {
    printStatus(L"failed to read signature");
    return false;
  }
  printStatus(L"signature: entry=%08X size=%08X", entry, size);
  DK2Version ver = getDK2Version(entry, size);
  wchar_t verStr[64];
  DK2Version_toString(ver, verStr);
  printStatus(L"Dungeon Keeper 2 version: %s", verStr);
  if(ver != DK2_v170) {
    printStatus(L"error: only 1.70 version of the game is supported fo Ember launcher");
    return false;
  }
  return true;
}
void startAction(HWND hwnd) {
//  status.clear();
//  if(!validateDk2Path()) return;

  std::wstring exePath = g_dk2Dir + L"/DKII.exe";
  if(!fileExist(exePath.c_str())) {
    printStatus(L"DKII.exe - not found");
    return;
  }

  std::wstring dk2DllPath = g_curExeDir + L"/dk2.dll";
  std::wstring dstExePath = g_curExeDir + L"/DKII.exe";
  if(!fileExist(dk2DllPath.c_str()) || !filesHasSameContent(exePath.c_str(), dstExePath.c_str())) {
    if(!CopyFileW(exePath.c_str(), dstExePath.c_str(), FALSE)) {
      printStatus("copy DKII.exe failed: %08X", GetLastError());
      return;
    }
    genDll();
    if(!fileExist(dk2DllPath.c_str())) {
      printStatus("error: dk2.dll was not generated");
      return;
    }
  }
  startEmber(hwnd);
}

bool guiLocked = false;
void lockGui(bool value) {
  guiLocked = value;
  DirPath.enable(!value);
  SelectDir.enable(!value);
  StartBtn.enable(!value);
}
void updateStatus() {
  std::wstringstream wss;
  for(auto &msg : status) wss << msg << "\r\n";
  TextField.setText(wss.str().c_str());
  TextField.lineScroll(0, status.size());
}
void onDK2DirUpdated() {
  if(guiLocked) return;
  status.clear();
  if(validateDk2Path()) {
    saveDk2Path();
    std::wstring var = g_dk2Dir + L";" + g_pathEnv;
    if(!SetEnvironmentVariableW(L"Path", var.c_str())) {
      printStatus("failed to set Path env variable");
    }
    StartBtn.enable(true);
  } else {
    StartBtn.enable(false);
  }
  updateStatus();
}

LRESULT CALLBACK DirPath_WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {
  switch (message) {
    case WM_KEYDOWN:
      switch (wParam) {
        case VK_RETURN:
          g_dk2Dir.resize(MAX_PATH);
          DirPath.getText(&*g_dk2Dir.begin(), MAX_PATH);
          g_dk2Dir.resize(wcslen(&*g_dk2Dir.begin()));
          onDK2DirUpdated();
          break;
      }
    default:
      return CallWindowProc(DirPath.origProc, hwnd, message, wParam, lParam);
  }
  return 0;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {
  switch (message) {
    case WM_CREATE: {
      auto *create = (CREATESTRUCT *) lParam;
      gui::size2i_t size = {create->cx, create->cy};
      layout(hwnd, size.w, size.h);
      gui::resizeWin(hwnd, size.w, size.h);
      DirPath.setWndProc(DirPath_WndProc);

      SendMessage(TextField.hwnd, WM_SETFONT, WPARAM(CreateFont(
          -MulDiv(11, GetDeviceCaps(GetDC(hwnd), LOGPIXELSY), 72),
          0, 0, 0,
          FW_NORMAL,
          FALSE, FALSE, FALSE,
          ANSI_CHARSET,
          OUT_STROKE_PRECIS, CLIP_DEFAULT_PRECIS, DRAFT_QUALITY, FIXED_PITCH | FF_MODERN,
          TEXT("Courier New")
      )), TRUE);

      loadDk2Path();
      onDK2DirUpdated();

      {
        DWORD isFullscreen = 0;
        if(persistence_getDword(L"fullscreen", isFullscreen)) {
          FullscreenBtn.setCheck((int) isFullscreen);
        } else {
          FullscreenBtn.setCheck(BST_INDETERMINATE);
        }
      }
      {
        DWORD isDpiAware = 0;
        if(persistence_getDword(L"dpi_aware", isDpiAware)) {
          DPIBtn.setCheck((int) isDpiAware);
        } else {
          FullscreenBtn.setCheck(BST_UNCHECKED);
        }
      }
      std::wstring menu_resolution;
      persistence_getStr(L"menu_resolution", menu_resolution);
      std::wstring game_resolution;
      persistence_getStr(L"game_resolution", game_resolution);

      screenModeList.emplace_back(0, 0);
      enumModes(hwnd, screenModeList);
      std::sort(screenModeList.begin(), screenModeList.end(), [](screen_mode &i1, screen_mode &i2) -> bool {
        return (i1.width * i1.height < i2.width * i2.height);
      });
      int menuSel = 0;
      int gameSel = 0;
      int i = 0;
      for(auto &mode : screenModeList) {
        std::wstringstream ss;
        if(mode.width == 0 && mode.height == 0) {
          ss << "let dk2 decide";
        } else {
          ss << mode.width << "x" << mode.height;
        }
        std::wstring value = ss.str();
        MenuModesCombo.addString(value.c_str());
        GameModesCombo.addString(value.c_str());
        if(menu_resolution == value) {
          menuSel = i;
        }
        if(game_resolution == value) {
          gameSel = i;
        }
        i++;
      }
      MenuModesCombo.setCurSel(menuSel);
      GameModesCombo.setCurSel(gameSel);
      break;
    }
    case WM_SIZE: {
      UINT width = LOWORD(lParam);
      UINT height = HIWORD(lParam);
      layout(hwnd, gui::revertDpi(width), gui::revertDpi(height));
      break;
    }
    case WM_DPICHANGED: {
      gui::g_dpi = HIWORD(wParam);
      auto *rect = (RECT *) lParam;
      layout(hwnd, rect->right - rect->left, rect->bottom - rect->top);
      break;
    }
    case WM_COMMAND: {
      HMENU hm = (HMENU) LOWORD(wParam);
      if (hm == SelectDir.id) {
        if(openLocateDk2Dir2(hwnd)) {
          DirPath.setText(g_dk2Dir.c_str());
          onDK2DirUpdated();
        }
      } else if (hm == StartBtn.id) {
        lockGui(true);

        std::thread thr([hwnd] {
          try {
            startAction(hwnd);
          } catch(...) {
            printStatus("launcher exception");
            ShowWindow(hwnd, SW_SHOW);
          }

          lockGui(false);
          updateStatus();
        });
        thr.detach();
//      } else if (hm == GameModesCombo.id) {
//        if(HIWORD(wParam) == CBN_SELCHANGE) {
//          auto &mode = screenModeList[GameModesCombo.getCurSel()];
//          std::stringstream ss;
//          ss << mode.width << "x" << mode.height;
//          std::string value = ss.str();
//          printStatus("selected %s", value.c_str());
//          updateStatus();
//        }
//      } else if (hm == DPIBtn.id) {
//        if(HIWORD(wParam) == BN_CLICKED) {
//          std::stringstream ss;
//          ss << DPIBtn.getCheck();
//          std::string value = ss.str();
//          printStatus("selected %s", value.c_str());
//          updateStatus();
//        }
      }
      break;
    }
    case WM_CTLCOLORSTATIC: {
      HDC hdcStatic = (HDC) wParam;
      HBRUSH BGColorBrush = CreateSolidBrush(RGB(255,255,255));
//        SetBkMode(hdcStatic, TRANSPARENT);
      return (INT_PTR)(HBRUSH)BGColorBrush;
    }
    case WM_DESTROY:
      persistence_setDword(L"fullscreen", (DWORD) FullscreenBtn.getCheck());
      persistence_setDword(L"dpi_aware", (DWORD) DPIBtn.getCheck());
      {
        auto &mode = screenModeList[MenuModesCombo.getCurSel()];
        std::wstringstream ss;
        ss << mode.width << "x" << mode.height;
        persistence_setStr(L"menu_resolution", ss.str());
      }
      {
        auto &mode = screenModeList[GameModesCombo.getCurSel()];
        std::wstringstream ss;
        ss << mode.width << "x" << mode.height;
        persistence_setStr(L"game_resolution", ss.str());
      }
      PostQuitMessage(0);
      break;
    default:
      return DefWindowProc(hwnd, message, wParam, lParam);
      break;
  }
  return 0;
}

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow) {
#if DEBUG_CONSOLE
  AllocConsole();
#endif

  gui::initLayout(hInstance);

  g_cwdDir.resize(MAX_PATH);
  GetCurrentDirectoryW(MAX_PATH, &*g_cwdDir.begin());
  g_cwdDir.resize(wcslen(&*g_cwdDir.begin()));


  DWORD dwRet = GetEnvironmentVariableW(L"Path", NULL, 0);
  if(dwRet > 0) {
    g_pathEnv.resize(dwRet + 1);
    dwRet = GetEnvironmentVariableW(L"Path", &*g_pathEnv.begin(), g_pathEnv.length());
    g_pathEnv.resize(dwRet);
  }

  g_curExeDir.resize(MAX_PATH, L'\0');
  if(GetModuleFileNameW(NULL, &*g_curExeDir.begin(), MAX_PATH) != 0) {
    wchar_t *p1 = wcsrchr(&*g_curExeDir.begin(), '/');
    wchar_t *p2 = wcsrchr(&*g_curExeDir.begin(), '\\');
    wchar_t *sep = p1 > p2 ? p1 : p2;
    if(sep) *sep = L'\0';
  } else {
    g_curExeDir = g_cwdDir;
  }
  g_curExeDir.resize(wcslen(&*g_curExeDir.begin()));

  WNDCLASSEX wcex;
  wcex.cbSize = sizeof(WNDCLASSEX);
  wcex.style = CS_HREDRAW | CS_VREDRAW;
  wcex.lpfnWndProc = WndProc;
  wcex.cbClsExtra = 0;
  wcex.cbWndExtra = 0;
  wcex.hInstance = hInstance;
  wcex.hIcon = LoadIcon(wcex.hInstance, IDI_APPLICATION);
  wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
  wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
  wcex.lpszMenuName = NULL;
  wcex.lpszClassName = EmberLauncher_class;
  wcex.hIconSm = LoadIcon(wcex.hInstance, IDI_APPLICATION);

  if (!RegisterClassEx(&wcex)) {
    showError("RegisterClassEx failed: %08X", GetLastError());
    return 1;
  }

  HWND hWnd = CreateWindowEx(
      WS_EX_OVERLAPPEDWINDOW,
      EmberLauncher_class,
      EmberLauncher_title,
      WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, CW_USEDEFAULT, 600, 400,
      NULL,
      NULL,
      hInstance,
      NULL
  );

  if (!hWnd) {
    showError("CreateWindowEx failed: %08X", GetLastError());
    return 1;
  }

  ShowWindow(hWnd, nCmdShow);
  UpdateWindow(hWnd);

  MSG msg;
  while (GetMessage(&msg, NULL, 0, 0)) {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }

  return (int)msg.wParam;
}
