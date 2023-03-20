//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_DINPUT_H
#define EMBER_DINPUT_H

#include <dk2/utils.h>
#include <dk2/input.h>

namespace dk2 {

  struct MyDxDevice {  // vft=00672868
//    MyDxDevice_vtbl *__vftable /*VFT*/;
    /*0004*/ uint32_t f4_nextCoopLevel;
    /*0008*/ uint32_t f8_curCoopLevel;
    /*000C*/ LPDIRECTINPUTDEVICE fC_device;
    /*0010*/ uint32_t f10_isWindowActive;
    /*0014*/ uint32_t f14_hInstance;
    /*0018*/ HWND f18_curHWnd;
    /*001C*/ HWND f1C_nextHWnd;
    virtual ~MyDxDevice();

    /*005DCCD0*/ status_t &updateCoopLevel_acquire(status_t &status);
    /*005DCBE0*/ status_t &updateCoopLevel(status_t &status);
    /*005DCCB0*/ HWND getHInstance();
    /*005DCCC0*/ HWND getNextHWindow();
    /*005DCBB0*/ status_t &queryDevice(status_t &status, LPDIRECTINPUTDEVICE &dev);
    /***
     * @param flags one of DISCL_EXCLUSIVE, DISCL_NONEXCLUSIVE, DISCL_FOREGROUND, DISCL_BACKGROUND
     */
    /*005DCE50*/ status_t &setCoopLevel(status_t &status, char flags);
    /*005DCCA0*/ void updateWindowActive(bool isWindowActivated);
  };
  static_assert(sizeof(MyDxDevice) == 0x20);

  struct LPDIDEVICEOBJECTDATA_10 {
    /*0000*/ uint32_t f0_dwOfs;
    /*0004*/ uint32_t f4_dwData;
    /*0008*/ uint32_t f8_dwTimeStamp;
    /*000C*/ uint32_t fC_dwSequence;
  };
  static_assert(sizeof(LPDIDEVICEOBJECTDATA_10) == 0x10);

  struct MyDirectInput : MySignalBase {  // vft=00673048
    struct vtbl_t : MySignalBase::vtbl_t {
      void (__thiscall *handleData)(MyDirectInput *, int count);
    };
    static_assert(sizeof(vtbl_t) == 0x18);

    /*0010*/ MyDxDevice dx_device;
    /*0030*/ LPDIDEVICEOBJECTDATA_10 *f2C_pdevObjArr;
    virtual ~MyDirectInput();
    inline vtbl_t *vtbl() { return *(vtbl_t **) this; }

    /*006005B0*/ void processData();
  };
  static_assert(sizeof(MyDirectInput) == 0x34);

  struct MyLList2_entry
  {
    /*0000*/ MyLList2_entry *f0_prev;
    /*0004*/ MyLList2_entry *f4_next;
    /*0008*/ uint32_t *f8_value;
  };
  static_assert(sizeof(MyLList2_entry) == 0xC);

  struct MyLList2 {
    /*0000*/ uint32_t field_0;
    /*0004*/ MyLList2_entry *f4_first;
    /*0008*/ uint32_t f8_count;
    /*000C*/ MyLList2_entry *fC_it;
  };
  static_assert(sizeof(MyLList2) == 0x10);

  struct MouseRgbDxActionList {  // vft=006728FC
//    MouseRgbDxActionList_vtbl *__vftable /*VFT*/;
    /*0004*/ MyLList2 f4_list;
    virtual ~MouseRgbDxActionList();
  };
  static_assert(sizeof(MouseRgbDxActionList) == 0x14);

  struct MouseXyzDxActionList {  // vft=00672904
//    MouseXyzDxActionList_vtbl *__vftable /*VFT*/;
    MyLList2 f4_list;
    virtual ~MouseXyzDxActionList();
  };
  static_assert(sizeof(MouseXyzDxActionList) == 0x14);

  struct MyDxKeyboard : MyDirectInput {  // vft=00672920
//    /*0000*/ void *__vftable /*VFT*/;
    MouseRgbDxActionList f34_listKb;
    virtual ~MyDxKeyboard();
  };
  static_assert(sizeof(MyDxKeyboard) == 0x48);

  struct MyDxMouse : MyDirectInput {  // vft=006728E0
//    MyDxMouse_vtbl *__vftable /*VFT*/;
    /*0034*/ MouseXyzDxActionList f34_listXYZ;
    /*0048*/ MouseRgbDxActionList f48_listRGB;
    virtual ~MyDxMouse();

    /*005BC760*/ static status_t &__cdecl create(status_t &status, MyDxMouse *&instance);
    /*005DDA90*/ void handleData(int count);
  };
  static_assert(sizeof(MyDxMouse) == 0x5C);

  struct DxAction {  // vft=stripped
//    DxAction_vtbl *__vftable /*VFT*/;
    int f4_timestamp;
    int f8_isNotHandled;
    virtual ~DxAction();
  };
  static_assert(sizeof(DxAction) == 0xC);

  struct MouseXyzDxAction : DxAction {  // vft=00672900
//    MouseXyzDxAction_vtbl *__vftable /*VFT*/;
    int fC_actedAxe;
    int f10_value;
    virtual ~MouseXyzDxAction();
  };
  static_assert(sizeof(MouseXyzDxAction) == 0x14);

  struct MouseRgbDxAction : DxAction {
    /*006728F8*/ static void *vtable;
//    MouseRgbDxAction_vtbl *__vftable /*VFT*/;
    DWORD fC;
    DWORD f10_KeyCode_F0toF3;
    Pos2i f14_pos;
    int f1C_data;
    int f20_btnPressFlags;
  };
  static_assert(sizeof(MouseRgbDxAction) == 0x24);

}

#endif //EMBER_DINPUT_H
