//
// Created by DiaLight on 12.09.2022.
//

#ifndef EMBER_LAYOUT_H
#define EMBER_LAYOUT_H

#include <ShellScalingApi.h>

HINSTANCE g_hInst = nullptr;

struct pos2i_t {
  int x = 0;
  int y = 0;
};
struct size2i_t {
  int w = 0;
  int h = 0;
};

int g_dpi = USER_DEFAULT_SCREEN_DPI;

int getDpi() {
  UINT dpiX = 0, dpiY;
  POINT pt = { 1, 1 };
  auto hMonitor = MonitorFromPoint(pt, MONITOR_DEFAULTTONEAREST);
  if (SUCCEEDED(GetDpiForMonitor(hMonitor, MDT_EFFECTIVE_DPI, &dpiX, &dpiY))) {
    return dpiX;
  }
  return 96; // default
}
int applyDpi(int size) {
  return MulDiv(size, g_dpi, USER_DEFAULT_SCREEN_DPI);
}
int revertDpi(int size) {
  return MulDiv(size, USER_DEFAULT_SCREEN_DPI, g_dpi);
}
void applyDpi(size2i_t &size) {
  size.w = applyDpi(size.w);
  size.h = applyDpi(size.h);
}
void applyDpi(pos2i_t &pos) {
  pos.x = applyDpi(pos.x);
  pos.y = applyDpi(pos.y);
}

struct gui_elem_t {
  static HMENU nextId;
  LPCWSTR className;
  LPCWSTR windowName;
  DWORD style;

  pos2i_t pos;
  size2i_t size = { CW_USEDEFAULT, CW_USEDEFAULT };
  HWND hwnd = nullptr;
  HMENU id = nullptr;
  WNDPROC origProc = NULL;

  gui_elem_t(LPCWSTR className, LPCWSTR windowName, DWORD style) :
      className(className), windowName(windowName), style(style) {
  }

  void create(HWND parent) {
    pos2i_t lpos = pos;
    size2i_t lsize = size;
    applyDpi(lpos);
    applyDpi(lsize);
    if(hwnd != nullptr) {
      SetWindowPos(
          hwnd, parent,
          lpos.x, lpos.y, lsize.w, lsize.h,
          SWP_NOCOPYBITS | SWP_NOACTIVATE | SWP_NOZORDER
      );
      return;
    }
    id = nextId;
    nextId = (HMENU) (((uint8_t *) nextId) + 1);
    if(parent != nullptr) style |= WS_CHILD;
    hwnd = CreateWindowW(
        className, windowName,
        style,
        lpos.x, lpos.y, lsize.w, lsize.h,
        parent, id, g_hInst, NULL
    );
  }

  bool enable(bool fEnable) { return EnableWindow(hwnd, fEnable); }
  void setWndProc(WNDPROC proc) {
    if(!origProc) {
      origProc = (WNDPROC) SetWindowLongPtrW(hwnd, GWLP_WNDPROC, (LONG_PTR) proc);
    } else {
      SetWindowLongPtrW(hwnd, GWLP_WNDPROC, (LONG_PTR) proc);
    }
  }

};

HMENU gui_elem_t::nextId = (HMENU) 1;

struct layout_t {
  enum mode_t : uint8_t {
    LM_Hor,
    LM_Ver,
  };
  HWND parent = nullptr;
  mode_t mode = LM_Ver;
  pos2i_t cursor;
  size2i_t size;
  size2i_t static_size;
  size2i_t dynamic_scale;
  size2i_t dynamic_size;
  int depth = 0;
  bool collect_static_mode = false;

#if 0
  void layout_dbg(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    char tmp[1024];
    for (int i = 0; i < depth; ++i) {
      tmp[i] = ' ';
    }
    char *pos = tmp + depth;
    int len = vsnprintf(pos, 1024, fmt, ap);
    pos[len++] = '\n';
    pos[len] = '\0';
    WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), tmp, len + depth, NULL, NULL);
    va_end(ap);
  }
#else
#define layout_dbg(fmt, ...)
#endif
  void operator()(HWND hwnd, int width, int height) {
    parent = hwnd;
    cursor = {0, 0};
    static_size = {0, 0};
    dynamic_scale = {0, 0};
    dynamic_size = { width, height};
    size = dynamic_size;
    layout_dbg("size=[%d %d]", width, height);
  }
  void add_size(size2i_t &size) {
    if(size.w >= 0) {
      static_size.w += size.w;
    } else {
      dynamic_scale.w += -size.w;
    }
    if(size.h >= 0) {
      static_size.h += size.h;
    } else {
      dynamic_scale.h += -size.h;
    }
  }
  void add_size(int width, int height) {
    size2i_t sz = { width, height };
    add_size(sz);
  }
  size2i_t get_size(int width, int height) {
    return {
        width >= 0 ? width : dynamic_size.w * -width,
        height >= 0 ? height : dynamic_size.h * -height
    };
  }
  void visit(gui_elem_t &e, int width, int height) {
    if(collect_static_mode) {
      if(mode == LM_Hor) {
        add_size(width, 0);
      } else if(mode == LM_Ver) {
        add_size(0, height);
      }
      return;
    }
    pos2i_t ocursor = this->cursor;
    e.pos = cursor;
    e.size = get_size(width, height);
    if(mode == LM_Hor) {
      cursor.x += e.size.w;
    } else if(mode == LM_Ver) {
      cursor.y += e.size.h;
    }
    layout_dbg("- visit cursor=[%d %d] + elem(pos=[%d %d] size=[%d %d]) -> cursor[%d %d]  size=[%d %d]",
        ocursor.x, ocursor.y,
        e.pos.x, e.pos.y, e.size.w, e.size.h,
        cursor.x, cursor.y,
        dynamic_size.w, dynamic_size.h
    );
    e.create(parent);
  }
  void hor(int width, int height, const std::function<void ()> &f) {
    if(collect_static_mode) {
      add_size(width, height);
      return;
    }
    // save state
    auto lmode = mode;
    pos2i_t lcursor = cursor;
    size2i_t ldynamic_size = dynamic_size;
    size2i_t lstatic_size = static_size;
    size2i_t ldynamic_scale = dynamic_scale;
    // update state
    depth++;
    mode = LM_Hor;
    size = get_size(width, height);
    layout_dbg("enter hor cursor=[%d %d]  size=[%d %d]  max=[%d %d]",
        cursor.x, cursor.y,
        dynamic_size.w, dynamic_size.h,
        size.w, size.h
    );
    // process
    static_size = {0, 0};
    dynamic_scale = {0, 0};
    collect_static_mode = true;
    f();
    dynamic_size = {
        dynamic_scale.w != 0 ? (size.w - static_size.w) / dynamic_scale.w : 0,
        dynamic_scale.h != 0 ? (size.h - static_size.h) : 0
    };
    collect_static_mode = false;
    f();
    // update state
    if(lmode == LM_Ver) {
      pos2i_t ocursor = this->cursor;
      cursor.x = lcursor.x;
      cursor.y += size.h;
      layout_dbg("exit hor to ver cursor=[%d %d] -> cursor=[%d %d]  max=[%d %d]",
          ocursor.x, ocursor.y,
          cursor.x, cursor.y,
          size.w, size.h
          );
    } else {
      layout_dbg("exit hor cursor=[%d %d]  max=[%d %d]", cursor.x, cursor.y, size.w, size.h);
    }
    // restore state
    dynamic_size = ldynamic_size;
    static_size = lstatic_size;
    dynamic_scale = ldynamic_scale;
    mode = lmode;
    depth--;
  }
  void ver(const std::function<void ()> &f, int width = -1, int height = -1) {
    if(collect_static_mode) {
      add_size(width, height);
      return;
    }
    // save state
    auto lmode = this->mode;
    pos2i_t lcursor = this->cursor;
    size2i_t ldynamic_size = dynamic_size;
    size2i_t lstatic_size = static_size;
    size2i_t ldynamic_scale = dynamic_scale;
    // update state
    depth++;
    this->mode = LM_Ver;
    size = get_size(width, height);
    layout_dbg("enter ver cursor=[%d %d]  size=[%d %d]  max=[%d %d]",
        cursor.x, cursor.y,
        dynamic_size.w, dynamic_size.h,
        size.w, size.h
    );
    static_size = {0, 0};
    dynamic_scale = {0, 0};
    static_size = {0, 0};
    dynamic_scale = {0, 0};
    // process
    collect_static_mode = true;
    f();
    dynamic_size = {
        dynamic_scale.w != 0 ? (size.w - static_size.w) : 0,
        dynamic_scale.h != 0 ? (size.h - static_size.h) / dynamic_scale.h : 0
    };
    collect_static_mode = false;
    f();
    // update state
    if(lmode == LM_Hor) {
      pos2i_t scursor = this->cursor;
      cursor.x += size.w;
      cursor.y = lcursor.y;
      layout_dbg("exit ver to hor cursor=[%d %d] -> cursor=[%d %d]  max=[%d %d]",
          scursor.x, scursor.y,
          cursor.x, cursor.y,
          size.w, size.h
      );
    } else {
      layout_dbg("exit ver cursor=[%d %d]  max=[%d %d]", cursor.x, cursor.y, size.w, size.h);
    }
    depth--;
    // restore state
    dynamic_size = ldynamic_size;
    static_size = lstatic_size;
    dynamic_scale = ldynamic_scale;
    mode = lmode;
  }
  void gap(int size) {
    if(collect_static_mode) {
      if(mode == LM_Hor) {
        if(size >= 0) {
          static_size.w += size;
        } else {
          dynamic_scale.w += -size;
        }
      } else if(mode == LM_Ver) {
        if(size >= 0) {
          static_size.h += size;
        } else {
          dynamic_scale.h += -size;
        }
      }
      return;
    }
    pos2i_t ocursor = cursor;
    size2i_t sz = get_size(mode == LM_Hor ? size : 0, mode == LM_Ver ? size : 0);
    cursor.x += sz.w;
    cursor.y += sz.h;
    layout_dbg("- gap cursor[%d %d] + %d -> cursor=[%d %d]",
        ocursor.x, ocursor.y, size,
        cursor.x, cursor.y
    );
  }
};

#define     GetWindowStyle(hwnd)    ((DWORD)GetWindowLong(hwnd, GWL_STYLE))
#define     GetWindowExStyle(hwnd)  ((DWORD)GetWindowLong(hwnd, GWL_EXSTYLE))

void resizeWin(HWND hwnd, int width, int height) {
  RECT rect = {0, 0, applyDpi(width), applyDpi(height)};
  AdjustWindowRectEx(&rect, GetWindowStyle(hwnd), GetMenu(hwnd) != NULL, GetWindowExStyle(hwnd));
  size2i_t winSize = { rect.right - rect.left, rect.bottom - rect.top };
  pos2i_t winPos = {
      (GetSystemMetrics(SM_CXSCREEN) - winSize.w) / 2,
      (GetSystemMetrics(SM_CYSCREEN) - winSize.h) / 2
  };
  SetWindowPos(
      hwnd, HWND_TOP,
      winPos.x, winPos.y, winSize.w, winSize.h,
      SWP_NOCOPYBITS | SWP_NOACTIVATE | SWP_NOZORDER
  );
}

bool initDPI() {
  HMODULE userDLL = LoadLibrary("User32.dll");
  if (userDLL) {
    typedef BOOL (WINAPI *SetProcessDpiAwarenessContext_fun)(DPI_AWARENESS_CONTEXT value);
    auto SetProcessDpiAwarenessContext = (SetProcessDpiAwarenessContext_fun) GetProcAddress(userDLL, "SetProcessDpiAwarenessContext");
    if(SetProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2)) return true;
  }


  HMODULE shcoreDLL = LoadLibrary("SHCORE.DLL");
  if (shcoreDLL) {
    typedef HRESULT(WINAPI *SetProcessDpiAwareness_fun)(PROCESS_DPI_AWARENESS);
    auto SetProcessDpiAwareness = (SetProcessDpiAwareness_fun) GetProcAddress(shcoreDLL, "SetProcessDpiAwareness");

    if (SetProcessDpiAwareness) {
      /* Try Windows 8.1+ version */
      if(SUCCEEDED(SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE))) return true;
    }
  }
  if (userDLL) {
    typedef BOOL(WINAPI *SetProcessDPIAware_fun)(void);
    auto SetProcessDPIAware = (SetProcessDPIAware_fun) GetProcAddress(userDLL, "SetProcessDPIAware");
    if (SetProcessDPIAware) {
      /* Try Vista - Windows 8 version.
      This has a constant scale factor for all monitors.
      */
      if(SetProcessDPIAware()) return true;
    }
  }
  return false;
}

void initLayout(HINSTANCE hInstance) {
  initDPI();
  g_dpi = getDpi();
  g_hInst = hInstance;
}


#endif //EMBER_LAYOUT_H
