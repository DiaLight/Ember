//
// Created by DiaLight on 11.09.2022.
//
#include <Windows.h>
#include <WinUser.h>
#include <tchar.h>
#include <cstdio>
#include <functional>
#include <ShlObj.h>
#include <sstream>
#include "CItemIterator.h"
#include <thread>
#include <ddraw.h>
#include <algorithm>
#include <dd_modes.h>
#include <filesystem>
#include "layout.h"
#include "registry.h"
#include "create_process.h"
#include "utils.h"
#include "launcher.h"
#include "status.h"
#include "keyboard_bind.h"

std::wstring g_dk2Dir;
std::wstring g_curExeDir;
std::wstring g_cwdDir;
std::wstring g_pathEnv;
std::vector<std::wstring> ARGS;


#include "dk2_versions.h"
#include "open_directory.h"
#include "md5_hash.h"


void genDll() {
  bool redirectConsole = AllocConsoleChk.getCheck() != BST_CHECKED;
  DWORD exitCode = 0;
  DWORD lastError = 0;
  std::wstringstream wss;
  wss << L'\"' << g_curExeDir << L"/makedll.exe" << L'\"';
  wss << " " << L'\"' << g_curExeDir << L"/dk2.dll" << L'\"';
  wss << " " << L'\"' << g_curExeDir << L"/DKII.exe" << L'\"';
  wss << " " << L'\"' << g_curExeDir << L"/exports.map" << L'\"';
  wss << " " << L'\"' << g_curExeDir << L"/references.map" << L'\"';
  std::wstring cmd = wss.str();
  if(CreateProcess_runAndWait(cmd.c_str(), NULL, lastError, exitCode, redirectConsole)) {
    if(exitCode == 0) return;
  }
  if(lastError) printStatus("start makedll failed: %08X", lastError);
  else if(exitCode) printStatus("makedll exited with: %08X", exitCode);
}

void startEmber(HWND hwnd, std::wstring &cmd) {
  bool redirectConsole = AllocConsoleChk.getCheck() != BST_CHECKED;
  DWORD exitCode = 0;
  DWORD lastError = 0;
  ShowWindow(hwnd, SW_HIDE);
  bool created = CreateProcess_runAndWait(cmd.c_str(), g_dk2Dir.c_str(), lastError, exitCode, redirectConsole);
  ShowWindow(hwnd, SW_SHOW);
  SetForegroundWindow(hwnd);
  if(created && exitCode == 0) return;
  if(lastError) printStatus("start bootstrap patcher failed: %08X", lastError);
  else if(exitCode) printStatus("bootstrap patcher exited with: %08X", exitCode);
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
bool prepareEmber() {
//  status.clear();
//  if(!validateDk2Path()) return;

  std::wstring exePath = g_dk2Dir + L"/DKII.exe";
  if(!fileExist(exePath.c_str())) {
    printStatus(L"DKII.exe - not found");
    return false;
  }

  std::wstring dk2DllPath = g_curExeDir + L"/dk2.dll";
  std::wstring dstExePath = g_curExeDir + L"/DKII.exe";
  if(!fileExist(dk2DllPath.c_str()) || !filesHasSameContent(exePath.c_str(), dstExePath.c_str())) {
    if(!CopyFileW(exePath.c_str(), dstExePath.c_str(), FALSE)) {
      printStatus("copy DKII.exe failed: %08X", GetLastError());
      return false;
    }
    genDll();
    if(!fileExist(dk2DllPath.c_str())) {
      printStatus("error: dk2.dll was not generated");
      return false;
    }
  }
  return true;
}

bool guiLocked = false;
void lockGui(bool value) {
  guiLocked = value;
  DirPath.enable(!value);
  SelectDir.enable(!value);
  StartBtn.enable(!value);
  ResExtractBtn.enable(!value);
}
void onDK2DirUpdated() {
  if(guiLocked) return;
  clearStatus();
  if(validateDk2Path()) {
    saveDk2Path(g_dk2Dir);
    std::wstring var = g_dk2Dir + L";" + g_pathEnv;
    if(!SetEnvironmentVariableW(L"Path", var.c_str())) {
      printStatus("failed to set Path env variable");
    }
    StartBtn.enable(true);
    ResExtractBtn.enable(true);
  } else {
    StartBtn.enable(false);
    ResExtractBtn.enable(false);
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
      launcher_layout(hwnd, size.w, size.h);
      gui::resizeWin(hwnd, size.w, size.h);
      DirPath.setWndProc(DirPath_WndProc);
      initIncompatibles();

      SendMessage(TextField.hwnd, WM_SETFONT, WPARAM(CreateFont(
          -MulDiv(11, GetDeviceCaps(GetDC(hwnd), LOGPIXELSY), 72),
          0, 0, 0,
          FW_NORMAL,
          FALSE, FALSE, FALSE,
          ANSI_CHARSET,
          OUT_STROKE_PRECIS, CLIP_DEFAULT_PRECIS, DRAFT_QUALITY, FIXED_PITCH | FF_MODERN,
          TEXT("Courier New")
      )), TRUE);

      loadDk2Path(g_dk2Dir);
      DirPath.setText(g_dk2Dir.c_str());
      onDK2DirUpdated();

      if(!ARGS.empty()) {
        printStatus("additional args:");
        for(auto &arg : ARGS) {
          printStatus(L" %s", arg.c_str());
        }
      }
      updateStatus();

      {
        DWORD isFullscreen = 0;
        if(persistence_getDword(L"fullscreen", isFullscreen)) {
          FullscreenChk.setCheck((int) isFullscreen);
        } else {
          FullscreenChk.setCheck(BST_INDETERMINATE);
        }
      }
      {
        DWORD check = 0;
        if(persistence_getDword(L"dpi_aware", check)) {
          DPIChk.setCheck((int) check);
        } else {
          DPIChk.setCheck(BST_UNCHECKED);
        }
      }
      {
        DWORD check = 0;
        if(persistence_getDword(L"unlimited_zoom", check)) {
          UnlimitedZoomChk.setCheck((int) check);
        } else {
          UnlimitedZoomChk.setCheck(BST_UNCHECKED);
        }
      }
      {
        DWORD check = 0;
        if(persistence_getDword(L"wheel2zoom", check)) {
          Wheel2ZoomChk.setCheck((int) check);
        } else {
          Wheel2ZoomChk.setCheck(BST_UNCHECKED);
        }
      }
      {
        DWORD check = 0;
        if(persistence_getDword(L"redirect_textures", check)) {
          ResRedirectChk.setCheck((int) check);
        } else {
          ResRedirectChk.setCheck(BST_UNCHECKED);
        }
      }
      {
        DWORD check = 0;
        if(persistence_getDword(L"console", check)) {
          AllocConsoleChk.setCheck((int) check);
        } else {
          AllocConsoleChk.setCheck(BST_UNCHECKED);
        }
      }
      {
        DWORD check = 0;
        if(persistence_getDword(L"gog_patch", check)) {
          GogPatchChk.setCheck((int) check);
        } else {
          GogPatchChk.setCheck(BST_UNCHECKED);
        }
      }
      std::wstring menu_resolution;
      persistence_getStr(L"menu_resolution", menu_resolution);
      std::wstring game_resolution;
      persistence_getStr(L"game_resolution", game_resolution);

      g_screenModeList.emplace_back(0, 0);
      collectModes(hwnd);
      std::sort(g_screenModeList.begin(), g_screenModeList.end(), [](screen_mode &i1, screen_mode &i2) -> bool {
        return (i1.width * i1.height < i2.width * i2.height);
      });
      int menuSel = 0;
      int gameSel = 0;
      int i = 0;
      for(auto &mode : g_screenModeList) {
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
      launcher_layout(hwnd, gui::revertDpi(width), gui::revertDpi(height));
      break;
    }
    case WM_DPICHANGED: {
      gui::g_dpi = HIWORD(wParam);
      auto *rect = (RECT *) lParam;
      launcher_layout(hwnd, rect->right - rect->left, rect->bottom - rect->top);
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
            if(prepareEmber()) {
              std::wstringstream wss;
              wss << L'\"' << g_curExeDir << L"/bootstrap_patcher.exe" << L'\"';
              wss << " -32BITEVERYTHING";
              int check;
              check = DPIChk.getCheck();
              if(check == BST_CHECKED) {
                wss << " -ember:dpi_aware";
              }
              check = UnlimitedZoomChk.getCheck();
              if(check == BST_CHECKED) {
                wss << " -ember:unlimited_zoom";
              }
              check = Wheel2ZoomChk.getCheck();
              if(check == BST_CHECKED) {
                wss << " -ember:wheel2zoom";
              }
              check = ResRedirectChk.getCheck();
              if(check == BST_CHECKED) {
                wss << " -ember:redirect_textures";
              }
              check = AllocConsoleChk.getCheck();
              if(check == BST_CHECKED) {
                wss << " -ember:console";
              }
              check = GogPatchChk.getCheck();
              if(check == BST_CHECKED) {
                wss << " -ember:gog_patch";
              }
              check = FullscreenChk.getCheck();
              if(check != BST_INDETERMINATE) {
                wss << " -ember:fullscreen=";
                wss << (check == BST_CHECKED ? "true" : "false");
              }
              check = MenuModesCombo.getCurSel();
              if(check != 0) {
                auto &mode = g_screenModeList[check];
                wss << " -ember:menu_resolution=";
                wss << mode.width << "x" << mode.height;
              }
              check = GameModesCombo.getCurSel();
              if(check != 0) {
                auto &mode = g_screenModeList[check];
                wss << " -ember:game_resolution=";
                wss << mode.width << "x" << mode.height;
              }
              for(auto &arg : ARGS) wss << " " << arg;
              std::wstring cmd = wss.str();
              startEmber(hwnd, cmd);
            }
          } catch(...) {
            printStatus("launcher exception");
            ShowWindow(hwnd, SW_SHOW);
          }

          lockGui(false);
          updateStatus();
        });
        thr.detach();
      } else if (hm == ResExtractBtn.id) {
        lockGui(true);

        std::thread thr([hwnd] {
          try {
            if(prepareEmber()) {
              std::wstringstream wss;
              wss << L'\"' << g_curExeDir << L"/bootstrap_patcher.exe" << L'\"';
              wss << " -32BITEVERYTHING";
              int check = DPIChk.getCheck();
              if(check == BST_CHECKED) {
                wss << " -ember:dpi_aware";
              }
              check = FullscreenChk.getCheck();
              if(check != BST_INDETERMINATE) {
                wss << " -ember:fullscreen=";
                wss << (check == BST_CHECKED ? "true" : "false");
              }
              check = MenuModesCombo.getCurSel();
              if(check != 0) {
                auto &mode = g_screenModeList[check];
                wss << " -ember:menu_resolution=";
                wss << mode.width << "x" << mode.height;
              }
              check = GameModesCombo.getCurSel();
              if(check != 0) {
                auto &mode = g_screenModeList[check];
                wss << " -ember:game_resolution=";
                wss << mode.width << "x" << mode.height;
              }
              wss << " -ember:unpack_texture_cache";
              std::wstring cmd = wss.str();
              startEmber(hwnd, cmd);
              std::wstringstream ss;
              ss << g_dk2Dir << "/resources/default/";
              std::wstring path = ss.str();
              std::filesystem::create_directories(path);
              ShellExecuteW(NULL, L"open", path.c_str(), NULL, NULL, SW_SHOWNORMAL);
            }
          } catch(...) {
            printStatus("launcher exception");
            ShowWindow(hwnd, SW_SHOW);
          }

          lockGui(false);
          updateStatus();
        });
        thr.detach();
      } else if (hm == ResOpenBtn.id) {
        std::wstringstream ss;
        ss << g_dk2Dir << "/resources/default/";
        std::wstring path = ss.str();
        std::filesystem::create_directories(path);
        ShellExecuteW(NULL, L"open", path.c_str(), NULL, NULL, SW_SHOWNORMAL);
      } else if (hm == BindWasdBtn.id) {
        bindWasd();
        updateStatus();

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
      } else {
        if(HIWORD(wParam) == BN_CLICKED) {
          uncheckIncompatibles(hm);
        }
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
      persistence_setDword(L"fullscreen", (DWORD) FullscreenChk.getCheck());
      persistence_setDword(L"dpi_aware", (DWORD) DPIChk.getCheck());
      persistence_setDword(L"unlimited_zoom", (DWORD) UnlimitedZoomChk.getCheck());
      persistence_setDword(L"wheel2zoom", (DWORD) Wheel2ZoomChk.getCheck());
      persistence_setDword(L"redirect_textures", (DWORD) ResRedirectChk.getCheck());
      persistence_setDword(L"console", (DWORD) AllocConsoleChk.getCheck());
      persistence_setDword(L"gog_patch", (DWORD) GogPatchChk.getCheck());
      {
        auto &mode = g_screenModeList[MenuModesCombo.getCurSel()];
        std::wstringstream ss;
        ss << mode.width << "x" << mode.height;
        persistence_setStr(L"menu_resolution", ss.str());
      }
      {
        auto &mode = g_screenModeList[GameModesCombo.getCurSel()];
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

  int nArgs;
  LPWSTR *szArglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
  if(szArglist == NULL) {
    printf("CommandLineToArgvW failed\n");
    return false;
  }
  for(int i = 1; i < nArgs; i++) {
    std::wstring warg(szArglist[i]);
    ARGS.push_back(warg);
  }
  LocalFree(szArglist);

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

int main() {
  return WinMain(GetModuleHandleA(NULL), NULL, NULL, SW_NORMAL);
}
