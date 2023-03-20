//
// Created by DiaLight on 24.09.2022.
//

#ifndef EMBER_GUI_ELEMENTS_H
#define EMBER_GUI_ELEMENTS_H

namespace dk2 {

  struct CWindow;
  struct CGuiManager;
  struct CDefaultPlayerInterface;
  struct CFrontEndComponent;

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
    void *f49_actionFun;
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
  struct CClickButton : public CButton {

    virtual ~CClickButton();

    static void __cdecl renderExitBtn(dk2::CClickButton *btn, dk2::CFrontEndComponent *frontend);
    static void __cdecl renderApplyBtn(dk2::CClickButton *btn, dk2::CFrontEndComponent *frontend);
  };
#pragma pack(pop)
  static_assert(sizeof(CClickButton) == 0x80);

}

#endif //EMBER_GUI_ELEMENTS_H
