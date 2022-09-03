//
// Created by DiaLight on 17.08.2022.
//

#ifndef EMBER_DK2_H
#define EMBER_DK2_H

#include <ddraw.h>
#include <dinput.h>
#include <api.h>
#include <dk2/dd.h>
#include <dk2/window.h>
#include <dk2/dinput.h>
#include <dk2/input.h>

namespace dk2 {

  __analysis_noreturn
  /*00638440*/ void __cdecl start();
  /*005A5DA0*/ int __cdecl main(int argc, char *argv[]);

  class globals {
    /*0079D01C*/ static HINSTANCE hInstance;
  public:
    /*005B2DA0*/ static void __cdecl setHInstance(HINSTANCE hInst);
    /*005B2D90*/ static HINSTANCE __cdecl getHInstance();
    // msvc is importing data as functions. So we follow import jump to get actual data address
    inline static HINSTANCE *getHInstancePtr() { return (HINSTANCE *) funptr<&hInstance>(); }

    /*005B2E50*/ static void __cdecl setAppExitStatus(bool shouldExit);
    /*005B2E40*/ static bool __cdecl isAppExitStatusSet();
  };

  class CFrontEndComponent {

  public:

    /*005340F0*/ void showTitleScreen();

  };

  /*00557FD0*/ bool __stdcall checkOsCompatible(int maxVersion, int minVersion, uint16_t CSDVersion);


  struct CursorDrawer {
  private:
    /*0079F630*/ static bool initialized;
    /*0079F638*/ static CursorDrawer instance;
  public:
    /*001DBE10*/ static CursorDrawer *__stdcall getInstance();

    /*0000*/ //void *__vftable;  /*00672854*/
    /*0004*/ uint8_t f4_00;
    /*0005*/ uint8_t f5_isCursorsCreated;
    /*0006*/ uint8_t f6_00;
    /*0007*/ uint8_t f7_ff;
    /*0008*/ uint8_t f8_00;
    /*0009*/ uint8_t f9_ff;
    /*000A*/ uint8_t fA_00;
    /*000B*/ uint8_t fB_00;
    /*000C*/ Pos2i fC_cursorSurfSize;
    /*0014*/ Pos2i f14_cursorSize;
    /*001C*/ uint32_t f1C_idx;
    /*0020*/ uint32_t f20_prevIdx;
    /*0024*/ uint32_t f24_bpt_forceDraw;
    /*0028*/ uint32_t f28_bpt_isCursorAabbIntersectsWithPrevPos;
    /*002C*/ uint32_t f2C_doCursorRedraw;
    /*0030*/ AABB f30_screenAabb;
    /*0040*/ Pos2i f40_mouseToCursorOffs;  // mostly negative
    /*0048*/ Pos2i f48_mousePos;
    /*0050*/ ControlSurf f50_cursorSurf[3];  // 0: cursor 1,2: cursor_background
    /*0164*/ AABB f164_ingameCursorFullSize[3];
    /*0194*/ AABB f194_cursorSizeAabb[3];
    /*01C4*/ AABB f1C4_cursorAabbScreenCut[3];
    /*01F4*/ AABB f1F4_bpt_cursorIntersection[3];
    /*0224*/ MyDdSurfaceEx *f224_pScreen[3];  // 0: current 1,2: double_buffering
    virtual ~CursorDrawer();

    /*005DBF80*/ void updateCursorAndDraw(Pos2i *cursorPos, MyDdSurfaceEx *screenDds);
    /*005DC000*/ void resetAndReleaseCursorSurfaces();
    /*005DC010*/ status_t &recreateCursorSurfaces(status_t &status);
    /*005DC0B0*/ void nextFrame();
    /*005DC0F0*/ void releaseCursorSurfaces();
    /*005DC120*/ status_t &setCursorImage(status_t &status, MyDdSurfaceEx *newCursor, AABB *newCursorAabb_tmp, Pos2i *cursorToMouseOffs);
    /*005DC310*/ bool drawBgAndIntersectionToCursorSurf();
    /*005DC470*/ bool drawCursor();
    /*005DC530*/ bool drawCursorToScreenSurf();
    /*005DC580*/ int calcCursorAabbFromMouse(Pos2i *mousePos);
    /*005DC7D0*/ status_t &resetCursorSize(status_t &status);
    /*005DC7F0*/ char sub_5DC7F0_setUnk(int a2);
    /*005DC830*/ void updateCursorAndForceDraw(Pos2i *mousePos, MyDdSurface *surf1, MyDdSurfaceEx *surf2, char a5, char a6);
    /*005DC860*/ int drawCursorTo(MyDdSurfaceEx *newScreenSurf, MyDdSurfaceEx *dstSurf, char doDrawCursor, char useForce);

  };
  static_assert(sizeof(CursorDrawer) == 0x230);

  struct MyCbHandle {  // vft=006723D8
//    /*0000*/ void *__vftable /*VFT*/;
    /*0004*/ uint32_t *f4_callbackIdxList;
    /*0008*/ void *f8_callbackObj;
    virtual ~MyCbHandle();
  };
  static_assert(sizeof(MyCbHandle) == 0xC);

  struct MyComEx : MySharedObj {  // vft=00672418
//    /*0000*/ void *__vftable /*VFT*/;
    struct vtbl_t : MySharedObj::vtbl_t {
      void (__fastcall *fun1)(MyComEx *_this, void *edx, DxAction *action);  // unused
      void (__fastcall *fun2)(MyComEx *_this, void *edx, DxAction *action);  // WndMsgDxAction
      void (__fastcall *fun3)(MyComEx *_this, void *edx, DxAction *action);  // MouseXyzDxAction
      void (__fastcall *fun4)(MyComEx *_this, void *edx, DxAction *action);  // MouseRgbDxAction
    };
    static_assert(sizeof(vtbl_t) == 0x1C);
    /*0008*/ MyComEx *f4_child;
    virtual ~MyComEx();
  };
  static_assert(sizeof(MyComEx) == 0xC);

  struct PtrArrList {
    uint32_t field_0;
    uint32_t *f4_base;
    uint32_t *f8_wpos;
    uint32_t *fC_end;
  };
  static_assert(sizeof(PtrArrList) == 0x10);

  struct AsyncThing : MyComEx {  // vft=006727FC
//    /*0000*/ void *__vftable /*VFT*/;
    uint32_t f8_lastError;
    uint32_t exit_thread_flag;
    uint32_t f10_hThread;
    uint32_t f14_hEvent1;
    uint32_t f18_hEvent2;
    uint32_t field_1C;
    PtrArrList f20_dwordList;
    uint32_t field_30;
    uint32_t field_34;
    uint32_t field_38;
    uint32_t field_3C;
    virtual ~AsyncThing();
  };
  static_assert(sizeof(AsyncThing) == 0x44);

  struct MyCallback {  // vft=006723E0
//    MyCallback_vtbl *__vftable /*VFT*/;
    virtual ~MyCallback();
  };
  static_assert(sizeof(MyCallback) == 0x4);

  struct ControlKeysUpdater : MyComEx {  // vft=00672888
    struct vtbl_t : MyComEx::vtbl_t {};
    inline vtbl_t *vtbl() { return *(vtbl_t **) this; }
    static_assert(sizeof(vtbl_t) == 0x1C);

    /*000C*/ MyCallback fC_mycb;
    /*0010*/ MyCbHandle f10_cbhandle;
    /*001C*/ MyDirectInput *f1C_dinput;
    /*0020*/ uint32_t f20_controlKey_flags;
    virtual ~ControlKeysUpdater();
  };
  static_assert(sizeof(ControlKeysUpdater) == 0x24);

  struct MyMouseCb : MyCallback {  // vft=006724A0
//    MyMouseCb_vtbl *__vftable /*VFT*/;
    virtual ~MyMouseCb();
  };
  static_assert(sizeof(MyMouseCb) == 0x4);

  struct MyDxInputStateCb : MyCallback {  // vft=00672820
//    MyDxInputStateCb_vtbl *__vftable /*VFT*/;
    virtual ~MyDxInputStateCb();
  };
  static_assert(sizeof(MyDxInputStateCb) == 0x4);

  struct MyMouse : MyComEx {  // vft=006728B0
    /*000C*/ /*Obj672844*/ void *f8_pobj;
    /*0010*/ Pos2i fC_pos;
    /*0018*/ Pos2i f14_pos2_prev;
    /*0020*/ float f1C_flX;
    /*0024*/ float f20_flY;
    /*0028*/ float f24_flX2;
    /*002C*/ float f28_flY2;
    /*0030*/ float f2C_speed_cfg;
    /*0034*/ AABB f30_aabb;
    /*0044*/ UINT f40_dblClickTime;
    /*0048*/ int f44_dblClickKey;
    /*004C*/ int f48_dblClickThreshold;
    /*0050*/ int f4C_x_threshold;
    /*0054*/ int f50_y_threshold;
    /*0058*/ int f54_acceleration;
    /*005C*/ int f58_target___;
    /*0060*/ int f5C_isButtonsSwaped;
    virtual ~MyMouse();

    /*005DD630*/ void updatePos();
    /*005DD4A0*/ void fun3_xyzAction(dk2::MouseXyzDxAction &action);
  };
  static_assert(sizeof(MyMouse) == 0x64);

  struct MyMouseUpdater : MyMouse {  // vft=006724A8
//    MyMouseUpdater_vtbl *__vftable /*VFT*/;
    /*0064*/ MyMouseCb f64_cb;
    /*0068*/ MyCbHandle f68_cbhandle;
    virtual ~MyMouseUpdater();

    /*005BC540*/ static status_t &__cdecl create(status_t &status, MyMouseUpdater *&instance);
  };
  static_assert(sizeof(MyMouseUpdater) == 0x74);

  struct Buf1000 {
    uint32_t f0_base;
    uint32_t f4_end;
    uint32_t *f8_pos;
    uint32_t *fC_pdwarr;
  };
  static_assert(sizeof(Buf1000) == 0x10);

  struct DxActionQueue : MyComEx {  // vft=006727B0
//    DxActionQueue_vtbl *__vftable /*VFT*/;
    uint32_t field_C;
    char field_10;
    Buf1000 f14_read;
    Buf1000 f24_write;
    uint32_t *f34_dwarr_base;
    int f38_dwcount;
    int f3C_itemsCount;
    struct _RTL_CRITICAL_SECTION *f40_pCriticalSection;
    virtual ~DxActionQueue();
  };
  static_assert(sizeof(DxActionQueue) == 0x44);

  struct MyDxInputManagerCb {  // vft=00672480
    struct vtbl_t {
//    virtual MyDxInputManagerCb_call
//    virtual MyDxInputManagerCb_scalar_destructor
//    virtual MyDxInputManagerCb_initInputs
      status_t &(*initMouse)(status_t &status);
//    virtual MyDxInputManagerCb_initKeyboard
//    virtual MyDxInputManagerCb_releaseKeyboard
//    virtual MyDxInputManagerCb_releaseMous
    };
    inline vtbl_t *vtbl() { return *(vtbl_t **) this; }

    MyCbHandle f0_cbhandle;
    AsyncThing fC_async;
    uint32_t f50_createDD_state;
    MyDxKeyboard *f54_pdxKeyboard;
    MyDxMouse *f58_pdxmouse;
    ControlKeysUpdater *f5C_controlKeys;
    MyMouseUpdater *f60_mouse;
    DxActionQueue *f64_dxActionQueue;

//    virtual MyDxInputManagerCb_call
//    virtual MyDxInputManagerCb_scalar_destructor
//    virtual MyDxInputManagerCb_initInputs
    /*005BC060*/ status_t &initMouse(status_t &status);
//    virtual MyDxInputManagerCb_initKeyboard
//    virtual MyDxInputManagerCb_releaseKeyboard
//    virtual MyDxInputManagerCb_releaseMous
    virtual ~MyDxInputManagerCb();
  };
  static_assert(sizeof(MyDxInputManagerCb) == 0x6C);

  struct CComponent {
    uint32_t is_component_destroy;
    int field_4;
  };

  struct StaticListeners {
    int (__cdecl *f0_onKeyboardAction)(int, int, CComponent *);
    int (__cdecl *f4_onMouseAction)(int, int, int, int, CComponent *);
    int (__cdecl *f8_onWindowMsg)(__int16 uMsg, WPARAM wParam, LPARAM lParam, CComponent *comp);
    int (__cdecl *fC_onKeyboardActionWithCtrl)(int, int, int, CComponent *);
    void (__cdecl *f10_onMouseActionWithCtrl)(int, int, int, int, int, CComponent *);
  };

  struct MyInputListenersHolder : MyComEx {  // vft=006723E8
//    MyInputListenersHolder_vtbl *__vftable /*VFT*/;
    StaticListeners *fC_static_listeners;
    CComponent *f10_ccomponent;
    virtual ~MyInputListenersHolder();
  };
  static_assert(sizeof(MyInputListenersHolder) == 0x14);

  struct MyDxInputState : MyComEx {  // vft=00672828
//    MyDxInputState_vtbl *__vftable /*VFT*/;
    MyDxInputStateCb fC_cb;
    MyCbHandle f10_cbhandle;
    char f1C_keyboardState[240];
    int f10C_rgbButtons;
    char field_110[12];
    MyDxKeyboard *f11C_dxkeyboard;
    MyDxMouse *f120_dxmouse;
    virtual ~MyDxInputState();
  };
  static_assert(sizeof(MyDxInputState) == 0x124);

  struct WndMsgDxActionList {  // vft=00672450
//    WndMsgDxActionList_vtbl *__vftable /*VFT*/;
    MyLList2 f4_list;
    virtual ~WndMsgDxActionList();
  };
  static_assert(sizeof(WndMsgDxActionList) == 0x14);

  struct MyWindowMsgs : MySignalBase {  // vft=00672438
//    MyWindowMsgs_vtable *__vftable;
    WndMsgDxActionList f10_listWm;
    PtrArrList f24_handleArr;
    struct _RTL_CRITICAL_SECTION *f34_pCritSection;
    virtual ~MyWindowMsgs();
  };
  static_assert(sizeof(MyWindowMsgs) == 0x38);

  struct MyCollectDxAction_Action {
    char type;
    char KeyCode;
    __int16 uMsg_isPressed;
    int wParam_xy;
    int btnPressFlags;
  };
  static_assert(sizeof(MyCollectDxAction_Action) == 0xC);

  struct MyCollectDxAction : MyComEx {  // vft=00672458
//    MyCollectDxAction_vtbl *__vftable /*VFT*/;
    MyCollectDxAction_Action fC_act;
    virtual ~MyCollectDxAction();
  };
  static_assert(sizeof(MyCollectDxAction) == 0x18);

  struct Obj6723B8 {  // vft=006723B8
//    Obj6723B8_vtbl *__vftable /*VFT*/;
    virtual ~Obj6723B8();
  };
  static_assert(sizeof(Obj6723B8) == 0x4);

  struct MyInputManagerCb : MyDxInputManagerCb {  // vft=00672380
  private:
    /*0079CF90*/ static MyInputManagerCb instance;
  public:
    inline static MyInputManagerCb *getInstance() { return (MyInputManagerCb *) funptr<&instance>(); }
//    struct vftable_t : MyDxInputManagerCb::vftable_t {};
//    /*0000*/ vftable_t *__vftable;  /*00672380*/
    MyInputListenersHolder *f6C_pInputListenersHolder;
    MyDxInputState *f70_pdxInputState;
    MyWindowMsgs *f74_pMyWindowMsgs;
    MyCollectDxAction *f78_pDxActionCollector;
    int field_7C;
    /*MyCb6723D0*/ void *f80_pchildcb;
    Obj6723B8 f84_obj;

//    virtual MyDxInputManagerCb_call
//    virtual MyInputManagerCb_scalar_destructor
//    virtual MyInputManagerCb_initInputs
    /*005BB1C0*/ status_t &initMouse(status_t &status);
//    virtual MyInputManagerCb_initKeyInputs
//    virtual MyDxInputManagerCb_releaseKeyboard
//    virtual MyDxInputManagerCb_releaseMouse
  };
  static_assert(sizeof(MyInputManagerCb) == 0x88);

#pragma pack(push, 1)
  class MyGame {
    /*00756EE8*/ static MyGame instance;
  public:
    inline static MyGame *getInstance() { return (MyGame *) funptr<&instance>(); }

    uint32_t field_0;
    int dwWidth;
    int dwHeight;
    int dwRGBBitCount;
    int isFullscreen;
    int field_14;
    int field_18;
    int field_1C;
    MySurface surf_desc;
    int field_48;
    char field_obj_start_4C;
    char field_4D;
    char field_4E;
    char field_4F;
    char field_50;
    char field_51;
    char field_52;
    char field_53;
    char field_54;
    char field_55;
    char field_56;
    char field_57;
    char field_58;
    char field_59;
    char field_5A;
    char field_5B;
    char field_5C;
    char field_5D;
    char field_5E;
    char field_5F;
    char field_obj_60;
    char gap_61[8];
    int field_69;
    int field_obj_6D;
    char gap_71[516];
    int field_275;
    StaticListeners f279_static_listeners;
    int f28D;
    uint32_t field_291;
    uint8_t gap_295[8];
    int field_29D;
    uint8_t gap_2A1[304];
    int field_3D1;
    uint8_t gap_3D5[304];
    int field_505;
    int field_obj_509;
    int field_50D;
    int field_511;
    int field_515;
    int field_519;
    int field_51D;
    int field_521;
    GUID guid_arr16[16];
    uint32_t is_empty_dd[16];
    char dds_descs_arr16[16][64];
    char dds_names_arr16[16][64];
    uint32_t dds_count;
    int selected_dd_idx;
    int last_selected_dd_idx;
    uint32_t field_E71;
    uint32_t field_E75;
    uint32_t field_E79;
    uint32_t field_E7D;
    int field_E81;
    uint8_t gap_E85[4];
    uint8_t fE89_field_obj_start;
    uint8_t gap_E8A[31];
    uint32_t field_EA9;
    uint8_t gap_EAD[28];
    CWindowTest fEC9_c_window_test;
    uint16_t fF29_field_obj;
    uint8_t gap_F2B[34];
    int field_F4D;
    __int16 field_F51;

    /*005581B0*/ void prepareScreen(int dwWidth, int dwHeight, int dwRGBBitCount, int isWindowed, int a6, int a7);

  };
#pragma pack(pop)
  static_assert(sizeof(MyGame) == 0xF53);

}

#endif //EMBER_DK2_H
