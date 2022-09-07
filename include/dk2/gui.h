//
// Created by DiaLight on 06.09.2022.
//

#ifndef EMBER_GUI_H
#define EMBER_GUI_H

#include <dk2/utils.h>

namespace dk2 {

  struct CWindow;
  struct CGuiManager;
  struct CDefaultPlayerInterface;

  struct CGadget {  // vft=0066ED14
    struct vtbl_t {
      void (__fastcall *scalar_deleting_destructor)(void *_this, void *edx, bool del);
    };
    inline vtbl_t *vtbl() { return *(vtbl_t **) this; }
    virtual ~CGadget();

    int x_offs;
    int y_offs;
    int width;
    int height;
    Area2i pos;

  };
  static_assert(sizeof(CGadget) == 0x24);

#pragma pack(push, 1)
  struct CButton : public CGadget {
    DWORD field_20;
    DWORD f24_renderFun;
    DWORD field_28;
    DWORD f2C_textId;
    DWORD f30_idxLow;
    int f34_idxHigh;
    DWORD f38_unkIdx;
    BYTE field_3C;
    DWORD field_3D;
    DWORD field_41;
    DWORD f45_containsCursor;
    int f49_actionFun;
    int field_4D;
    CWindow *f51_pWindow;
    DWORD field_55;
    DWORD field_59;
    DWORD f5D_isVisible;
    WORD f61_posFlags;
    DWORD field_63;
    DWORD field_67;
    DWORD field_6B;
    BYTE f6F_kind;
    DWORD f70_;
    DWORD f74_prev;
    CButton *f78_next;
    virtual ~CButton();

  };
#pragma pack(pop)
  static_assert(sizeof(CButton) == 0x80);

#pragma pack(push, 1)
  struct ButtonCfg {
    char f0_kind;
    int f1_idx;
    BYTE field_5;
    void *f6_actionFun;
    void *field_A;
    DWORD field_E;
    DWORD field_12;
    DWORD field_16;
    DWORD field_1A;
    WORD f1E_posFlags;
    __int16 f20_x;
    __int16 f22_y;
    WORD f24_w;
    unsigned __int16 f26_h;
    WORD f28_x_offs;
    WORD f2A_y_offs;
    WORD f2C_width;
    unsigned __int16 f2E_height;
    DWORD field_30;
    void *field_34;
    void *f38_renderFun;
    void *field_3C;
    DWORD f40_textId;
    DWORD *f44_p_idxLow;
    DWORD f48_idxHigh;
    DWORD f4C_nameIdx;
    
    bool getText(wchar_t *buf, size_t *len = nullptr) {
      if(this->f40_textId == 0) {
        if(buf) buf[0] = '\0';
        return true;
      }
      auto *mbText = dk2::MyTextText::idx1091_getMbString(this->f40_textId);
      if(mbText == nullptr) return false;
      bool result = true;
      size_t size = strlen(mbText) + 1;
      if(buf) result = dk2::MBToUni::convert(mbText, buf, size);
      if(len) *len = size;
      return result;
    }

  };
#pragma pack(pop)
  static_assert(sizeof(ButtonCfg) == 0x50);
  
#pragma pack(push, 1)
  struct CWindow : public CGadget {
    struct vtbl_t {
      void (__fastcall *scalar_deleting_destructor)(void *_this, void *edx, bool del);
      int (__fastcall *update)(void *_this, void *edx);
    };
    virtual ~CWindow();

    DWORD f20_updateFun;
    DWORD f24_fun;
    DWORD field_28;
    DWORD field_2C;
    DWORD field_30;
    DWORD field_34;
    DWORD field_38;
    DWORD field_3C;
    DWORD f40_idx;
    DWORD f44_isCurrent;
    WORD field_48;
    CGuiManager *f4A_c_gui_manager;
    DWORD field_4E;
    CWindow *f52_parent;
    int field_56;
    CWindow *f5A_prev;
    CWindow *f5E_next;
    int field_62_bool;
    CButton *f66_buttons;
    __int16 _end_f6A_unk;
  };
#pragma pack(pop)
  static_assert(sizeof(CWindow) == 0x70);

#pragma pack(push, 1)
  struct WindowCfg {
    int f0_idx;
    DWORD f4_isCurrent;
    WORD field_8;
    WORD fA_x;
    WORD fC_y;
    WORD fE_w;
    WORD f10_h;
    WORD f12_x_offs;
    WORD f14_y_offs;
    WORD f16_width;
    WORD f18_height;
    DWORD field_1A;
    void *field_1E;
    void *f22_fun;
    DWORD field_26;
    DWORD field_2A;
    DWORD field_2E;
    DWORD field_32;
    DWORD field_36;
    DWORD field_3A;
    ButtonCfg *f3E_pButtonCfg_list;
    __int16 field_42;
  };
#pragma pack(pop)
  static_assert(sizeof(WindowCfg) == 0x44);
  
  struct CGuiManager {
    struct vtbl_t {
      void (__fastcall *scalar_deleting_destructor)(void *_this, void *edx, bool del);
    };
    virtual ~CGuiManager();
    DWORD f4_width;
    DWORD f8_height;
    DWORD fC_isButtonVisited;
    DWORD f10;
    DWORD f14;
    DWORD field_18;
    DWORD field_1C;
    DWORD field_20;
    DWORD field_24;
    CWindow f28_window;
    CWindow *f98_pWindow_first;
    CWindow *f9C_currentWin;
    DWORD field_A0;
    DWORD field_A4;
    int field_A8;
    Pos2i fAC_mousePos;
    Pos2i fB4_pos;
    DWORD fBC_is_clicked;
    int field_C0;
    int field_C4;
    int field_C8;
    AABB fCC_pos;
    BYTE gap_DC[256];
    DWORD field_1DC;
    int field_1E0;

    /*0052B8F0*/ int createElements(WindowCfg **c_window_list, CDefaultPlayerInterface *a3);

  };
  static_assert(sizeof(CGuiManager) == 0x1E4);

  enum MainGuiId {
    MGI_Main = 1,
    MGI_SinglePlayer = 2,
    MGI_Multiplayer = 3,
    MGI_Options = 4,
    MGI_Extras = 6,
    MGI_LoadGame = 8,
    MGI_Scrimish = 9,
    MGI_MultiplayerWinsock = 11,
    MGI_GraphicsOptions = 15,
    MGI_SoundOptions = 16,
    MGI_ControlOptions = 17,
    MGI_TodaysTopKeepers = 18,
  };

  enum GameGuiId {
    GGI_EscMenu = 22,
    GGI_Load = 23,
    GGI_Save = 24,
    GGI_Options = 25,
    GGI_GraphicsOptions = 26,
    GGI_SoundOptions = 27,
    GGI_AdvancedSoundOptions = 28,
    GGI_EndGame = 34,
    GGI_Confirm = 35,
  };

  class gui_globals {
    /*006AE4E0*/ static WindowCfg *view006AE4E0[];
    /*00693EF8*/ static WindowCfg *view00693EF8[];
  public:
    inline static WindowCfg **getMainGuiConfig() { return (WindowCfg **) funptr<&view006AE4E0>(); }
    inline static WindowCfg **getInGameGuiConfig() { return (WindowCfg **) funptr<&view00693EF8>(); }

    static WindowCfg *getMainWindowCfg(MainGuiId id) {
      auto *pos = dk2::gui_globals::getMainGuiConfig();
      for(;(*pos)->f0_idx != -1; pos++) {
        auto *win = *pos;
        if(win->f0_idx != id) continue;
        return win;
      }
      return nullptr;
    }
    static WindowCfg *getGameWindowCfg(GameGuiId id) {
      auto *pos = dk2::gui_globals::getInGameGuiConfig();
      for(;(*pos)->f0_idx != -1; pos++) {
        auto *win = *pos;
        if(win->f0_idx != id) continue;
        return win;
      }
      return nullptr;
    }

  };

}

#endif //EMBER_GUI_H
