// --  warning: file is managed by gen_functions_h.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef DK2_FUNCTIONS_H  // ------------------------------  /* auto */
#define DK2_FUNCTIONS_H  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <xmmintrin.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct AsyncThing;  // ---------------------------------  /* auto */
  struct ButtonCfg;  // ----------------------------------  /* auto */
  struct CAnimMeshResource;  // --------------------------  /* auto */
  struct CButton;  // ------------------------------------  /* auto */
  struct CCamera;  // ------------------------------------  /* auto */
  struct CClickButton;  // -------------------------------  /* auto */
  struct CComponent;  // ---------------------------------  /* auto */
  struct CDefaultPlayerInterface;  // --------------------  /* auto */
  struct CEngine2DAnimMesh;  // --------------------------  /* auto */
  struct CEngine2DStaticMesh;  // ------------------------  /* auto */
  struct CEngineDynamicMesh;  // -------------------------  /* auto */
  struct CEnginePrimitiveBase;  // -----------------------  /* auto */
  struct CEngineQuadPlane;  // ---------------------------  /* auto */
  struct CEngineSprite;  // ------------------------------  /* auto */
  struct CEngineVirtualPerspective2DAnimMesh;  // --------  /* auto */
  struct CFileManager;  // -------------------------------  /* auto */
  struct CFrontEndComponent;  // -------------------------  /* auto */
  struct CMeshGroup;  // ---------------------------------  /* auto */
  struct CMeshResourceBase;  // --------------------------  /* auto */
  struct CPCEngineInterface;  // -------------------------  /* auto */
  struct CPolyMeshResource;  // --------------------------  /* auto */
  struct CTag;  // ---------------------------------------  /* auto */
  struct CTag_vtbl;  // ----------------------------------  /* auto */
  struct CWindow;  // ------------------------------------  /* auto */
  struct CWindowTest;  // --------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct CWorldEntry;  // --------------------------------  /* auto */
  struct ControlKeysUpdater;  // -------------------------  /* auto */
  struct CursorDrawer;  // -------------------------------  /* auto */
  struct DdModeList;  // ---------------------------------  /* auto */
  struct DdModeListItem;  // -----------------------------  /* auto */
  struct DiscFileBase;  // -------------------------------  /* auto */
  struct DxActionQueue;  // ------------------------------  /* auto */
  struct DxD3dInfo;  // ----------------------------------  /* auto */
  struct Event0_winShown7;  // ---------------------------  /* auto */
  struct FPUControlWordWithState;  // --------------------  /* auto */
  struct FloatObjThing;  // ------------------------------  /* auto */
  struct FontObj;  // ------------------------------------  /* auto */
  struct Idx3b;  // --------------------------------------  /* auto */
  struct MyCESurfHandle;  // -----------------------------  /* auto */
  struct MyCEngineSurfDesc;  // --------------------------  /* auto */
  struct MyCRCtx;  // ------------------------------------  /* auto */
  struct MyCallback;  // ---------------------------------  /* auto */
  struct MyCollectDxAction;  // --------------------------  /* auto */
  struct MyCollectDxAction_Action;  // -------------------  /* auto */
  struct MyDLVec2i;  // ----------------------------------  /* auto */
  struct MyDblNamedSurface;  // --------------------------  /* auto */
  struct MyDdSurface;  // --------------------------------  /* auto */
  struct MyDdSurfaceEx;  // ------------------------------  /* auto */
  struct MyDirectDraw;  // -------------------------------  /* auto */
  struct MyDirectInput;  // ------------------------------  /* auto */
  struct MyDxDevice;  // ---------------------------------  /* auto */
  struct MyDxInputState;  // -----------------------------  /* auto */
  struct MyDxKeyboard;  // -------------------------------  /* auto */
  struct MyDxMouse;  // ----------------------------------  /* auto */
  struct MyFileInfo;  // ---------------------------------  /* auto */
  struct MyFileStorage;  // ------------------------------  /* auto */
  struct MyGame;  // -------------------------------------  /* auto */
  struct MyInputListenersHolder;  // ---------------------  /* auto */
  struct MyInputManagerCb;  // ---------------------------  /* auto */
  struct MyLocalStr;  // ---------------------------------  /* auto */
  struct MyLoopLList_DxAction_entry;  // -----------------  /* auto */
  struct MyMeshResourceHolder;  // -----------------------  /* auto */
  struct MyMouseUpdater;  // -----------------------------  /* auto */
  struct MyMultilineRenderCtx;  // -----------------------  /* auto */
  struct MyObj67B948;  // --------------------------------  /* auto */
  struct MyProfiler;  // ---------------------------------  /* auto */
  struct MyScaledSurface;  // ----------------------------  /* auto */
  struct MySharedObj;  // --------------------------------  /* auto */
  struct MySharedObj_vtbl;  // ---------------------------  /* auto */
  struct MyStr;  // --------------------------------------  /* auto */
  struct MySubStr;  // -----------------------------------  /* auto */
  struct MySurface;  // ----------------------------------  /* auto */
  struct MySurfaceWrapper;  // ---------------------------  /* auto */
  struct MyTRCtx;  // ------------------------------------  /* auto */
  struct MyTextBase;  // ---------------------------------  /* auto */
  struct MyTextText;  // ---------------------------------  /* auto */
  struct MyUnk674058;  // --------------------------------  /* auto */
  struct MyVideoSettings;  // ----------------------------  /* auto */
  struct MyWindowMsgs;  // -------------------------------  /* auto */
  struct Obj79DC68;  // ----------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
  struct ResourceIndexEntry;  // -------------------------  /* auto */
  struct RtGuiView;  // ----------------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
  struct SceneObject30;  // ------------------------------  /* auto */
  struct StaticListeners;  // ----------------------------  /* auto */
  struct SurfaceHolder;  // ------------------------------  /* auto */
  struct ThreadCtx;  // ----------------------------------  /* auto */
  struct Triangle24;  // ---------------------------------  /* auto */
  struct Triangle34;  // ---------------------------------  /* auto */
  struct Uv2f;  // ---------------------------------------  /* auto */
  struct Uv2f_arr1024;  // -------------------------------  /* auto */
  struct Vec3f;  // --------------------------------------  /* auto */
  struct WinEventHandlers;  // ---------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

#include <ctime>
#define EHRegistrationNode void
#define TypeDescriptor void
#define _s_FuncInfo void
namespace dk2 {
    using status_t = int;
}

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
/*00401000*/ int32_t objarr_init(const void *, int32_t, int32_t, int32_t (__thiscall *)(int32_t));  /* auto */
/*00401030*/ int32_t CEntryComponent_static_init();  // --  /* auto */
/*00401050*/ void __cdecl CEntryComponent_static_destroy();  /* auto */
/*00401510*/ int32_t __cdecl sub_401510(int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*00401570*/ int32_t __cdecl sub_401570(__int16, int16_t, int32_t, int32_t);  /* auto */
/*004015A0*/ int32_t __cdecl cmd_Game_setup(int32_t, int32_t, int32_t *);  /* auto */
/*004015D0*/ int32_t __cdecl cmd_Gamepad_Setup(int32_t, int32_t, int32_t *);  /* auto */
/*00401600*/ int32_t __cdecl cmd_FrontEnd_setup(int32_t, int32_t, int32_t *);  /* auto */
/*00401660*/ int32_t __cdecl cmd_FrontEnd3D_setup(int32_t, int32_t, int32_t *);  /* auto */
/*004016C0*/ int32_t __cdecl cmd_Network_setup(int32_t, int32_t, int32_t *);  /* auto */
/*004016E0*/ int32_t __cdecl cmd_PacketLoad_setup(int32_t, int32_t);  /* auto */
/*00401740*/ int32_t __cdecl cmd_PacketFreq_setup(int32_t, int32_t);  /* auto */
/*00401770*/ int32_t __cdecl cmd_PacketSave_setup(int32_t, int32_t);  /* auto */
/*004017D0*/ int32_t cmd_PacketRecording_setup();  // ----  /* auto */
/*004017F0*/ int32_t cmd_PacketList_setup();  // ---------  /* auto */
/*004018A0*/ int32_t cmd_getVideoMode();  // -------------  /* auto */
/*00401BF0*/ int32_t __cdecl cmd_VideoMode_set(int32_t, int32_t, int32_t);  /* auto */
/*004020B0*/ int32_t cmd_Test_run();  // -----------------  /* auto */
/*004020E0*/ int32_t cmd_D3D_list();  // -----------------  /* auto */
/*00402180*/ int32_t __cdecl cmd_D3D_select(int32_t, int32_t);  /* auto */
/*00402220*/ int32_t cmd_3DEngines_list();  // -----------  /* auto */
/*004022E0*/ int32_t __cdecl cmd_3DEngines_set(int32_t, int32_t);  /* auto */
/*004023B0*/ int32_t cmd_getZBuffer();  // ---------------  /* auto */
/*004023F0*/ int32_t __cdecl cmd_selectLevel(int32_t, int32_t);  /* auto */
/*00402470*/ int32_t cmd_D3DDevices_list();  // ----------  /* auto */
/*004024C0*/ int32_t __cdecl cmd_Spec_set(int32_t, int32_t);  /* auto */
/*004024E0*/ MySurface *sub_4024E0();  // ----------------  /* auto */
/*00402510*/ MySurface *sub_402510();  // ----------------  /* auto */
/*00402540*/ MySurface *sub_402540();  // ----------------  /* auto */
/*00402570*/ MySurface *sub_402570();  // ----------------  /* auto */
/*004025B0*/ MySurface *sub_4025B0();  // ----------------  /* auto */
/*004025F0*/ MySurface *sub_4025F0();  // ----------------  /* auto */
/*00402630*/ MySurface *sub_402630();  // ----------------  /* auto */
/*00402AD0*/ int32_t ret_0_0args();  // ------------------  /* auto */
/*00403060*/ int32_t sub_403060();  // -------------------  /* auto */
/*00404E50*/ __int64 __cdecl sub_404E50(int32_t *, int32_t *, int32_t, int32_t);  /* auto */
/*00404EB0*/ int32_t __cdecl sub_404EB0(int32_t, int32_t, float, float);  /* auto */
/*00405010*/ BOOL __cdecl CDefaultPlayerInterface_onKeyboardAction(int32_t, int32_t, int32_t, CDefaultPlayerInterface *, int32_t);  /* auto */
/*00406530*/ BOOL __cdecl CDefaultPlayerInterface_onMouseAction(int32_t, int32_t, int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00409640*/ int32_t __cdecl CDefaultPlayerInterface_onWindowMsg(__int16, int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00409740*/ int32_t isGameKeyPressed(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004097E0*/ int32_t isActionKeyPressed(int32_t, int32_t, int32_t);  /* auto */
/*00409B10*/ int32_t __cdecl CDefaultPlayerInterface_WM_ACTIVATE_cb(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00409E30*/ int32_t __cdecl CDefaultPlayerInterface_chatCallback(int32_t, int32_t *, int32_t);  /* auto */
/*0040A9F0*/ int32_t __cdecl cmd_toggleGui(int32_t, int32_t, int32_t);  /* auto */
/*0040AA40*/ int32_t sub_40AA40();  // -------------------  /* auto */
/*0040B7F0*/ char __fastcall CDefaultPlayerInterface_sub_40B7F0(CDefaultPlayerInterface *, __int16);  /* auto */
/*0040C120*/ int32_t __fastcall sub_40C120(int32_t);  // -  /* auto */
/*0040C290*/ BOOL __fastcall sub_40C290(int32_t);  // ----  /* auto */
/*0040D440*/ void __cdecl ret_void_0args();  // ----------  /* auto */
/*0040D8F0*/ BOOL __fastcall CDefaultPlayerInterface_sub_40D8F0(CDefaultPlayerInterface *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0040E300*/ int32_t __cdecl sub_40E300(int32_t, int32_t *);  /* auto */
/*0040E3C0*/ int32_t __cdecl sub_40E3C0(int32_t, int32_t *);  /* auto */
/*0040E3F0*/ int32_t __cdecl sub_40E3F0(int32_t, int32_t *);  /* auto */
/*0040E520*/ int32_t __cdecl sub_40E520(int32_t, int32_t *);  /* auto */
/*0040E5E0*/ const void *__cdecl sub_40E5E0();  // assembly  /* auto */
/*0040E910*/ const void *__cdecl CDefaultPlayerInterface_sub_40E910();  // assembly  /* auto */
/*00410710*/ int32_t CDefaultPlayerInterface_static_init();  /* auto */
/*00410730*/ void __cdecl CDefaultPlayerInterface_static_destroy();  /* auto */
/*00410740*/ int32_t sub_410740();  // -------------------  /* auto */
/*00410760*/ void __cdecl sub_410760();  // --------------  /* auto */
/*00410780*/ int32_t ObjCIME6CE998_static_init();  // ----  /* auto */
/*004107D0*/ void __cdecl ObjCIME6CE998_static_destroy();   /* auto */
/*00410860*/ char __cdecl BtnHandler_sub_410860(int32_t, int32_t, int32_t);  /* auto */
/*00410990*/ int32_t __cdecl sub_410990(int32_t, int32_t);  /* auto */
/*00410A60*/ int32_t __cdecl sub_410A60(int32_t, int32_t);  /* auto */
/*00410AE0*/ int32_t __cdecl sub_410AE0(int32_t, int8_t *, int32_t);  /* auto */
/*00410BC0*/ char __cdecl BtnHandler_sub_410BC0(int32_t, int32_t, int32_t);  /* auto */
/*00410DE0*/ int32_t __cdecl sub_410DE0(int32_t, int32_t);  /* auto */
/*00410FE0*/ int32_t __cdecl sub_410FE0(int32_t, int8_t *, int32_t);  /* auto */
/*00411080*/ int32_t __cdecl sub_411080(int32_t, int8_t *, int32_t);  /* auto */
/*00411140*/ char __cdecl BtnHandler_sub_411140(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*004113B0*/ int32_t __cdecl sub_4113B0(int32_t, int32_t);  /* auto */
/*004115E0*/ int32_t __cdecl sub_4115E0(int32_t, int8_t *, int32_t);  /* auto */
/*00411690*/ BOOL __cdecl sub_411690(int32_t, int32_t);     /* auto */
/*004118B0*/ int32_t __cdecl BtnHandler_sub_4118B0(int32_t, int32_t, int32_t);  /* auto */
/*00411900*/ int32_t __cdecl sub_411900(int32_t);  // ----  /* auto */
/*00411A80*/ void __cdecl sub_411A80(CButton *, int32_t);   /* auto */
/*00412260*/ void __cdecl sub_412260(CButton *, int32_t);   /* auto */
/*004129A0*/ void __cdecl sub_4129A0(int32_t, CDefaultPlayerInterface *);  /* auto */
/*004129E0*/ void __cdecl sub_4129E0(CButton *, int32_t);   /* auto */
/*00412FC0*/ void __cdecl sub_412FC0(int32_t, int32_t);     /* auto */
/*00414210*/ void __cdecl sub_414210(int32_t, int32_t *);   /* auto */
/*00414400*/ void __cdecl sub_414400(CButton *, int32_t);   /* auto */
/*00414750*/ void __cdecl sub_414750(CButton *, int32_t);   /* auto */
/*00414850*/ void __cdecl sub_414850(CButton *, int32_t);   /* auto */
/*00414BC0*/ void __cdecl sub_414BC0(CButton *, int32_t);   /* auto */
/*00415880*/ const void *__cdecl sub_415880();  // assembly  /* auto */
/*00416070*/ int32_t __cdecl BtnHandler_sub_416070(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*004163F0*/ char __cdecl BtnHandler_sub_4163F0(int32_t, int32_t, int32_t);  /* auto */
/*00416480*/ char __cdecl BtnHandler_sub_416480(int32_t, int32_t, int32_t);  /* auto */
/*00416580*/ char __cdecl BtnHandler_sub_416580(int32_t, int32_t, int32_t);  /* auto */
/*00416680*/ BOOL __cdecl BtnHandler_sub_416680(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00416730*/ int32_t __cdecl BtnHandler_sub_416730(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*004167D0*/ char __cdecl BtnHandler_sub_4167D0(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00416980*/ int32_t __cdecl sub_416980(int32_t, int32_t, int32_t);  /* auto */
/*00416BB0*/ int32_t __cdecl sub_416BB0(int32_t);  // ----  /* auto */
/*00416C20*/ char __cdecl BtnHandler_sub_416C20(int32_t, int32_t, int32_t);  /* auto */
/*00416E20*/ int32_t __cdecl sub_416E20(int32_t, int32_t);  /* auto */
/*00417730*/ int32_t __cdecl sub_417730(int32_t, int32_t, int32_t);  /* auto */
/*004177B0*/ char __cdecl sub_4177B0(int32_t, int32_t, int32_t);  /* auto */
/*004177D0*/ void __cdecl sub_4177D0(CButton *, int32_t);   /* auto */
/*00417850*/ void __cdecl sub_417850(int32_t, int32_t);     /* auto */
/*00417B40*/ void __cdecl sub_417B40(CButton *, int32_t);   /* auto */
/*00417EA0*/ void __cdecl sub_417EA0(CWindow *, int32_t);   /* auto */
/*00417F60*/ int32_t __cdecl sub_417F60(int32_t, int32_t, int32_t);  /* auto */
/*00418080*/ char __cdecl sub_418080(int32_t, int32_t, int32_t);  /* auto */
/*00418360*/ char __cdecl sub_418360(int32_t, int32_t, int32_t);  /* auto */
/*00418A90*/ int32_t sub_418A90(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00418DD0*/ int32_t __cdecl sub_418DD0(int32_t, int32_t);  /* auto */
/*00418EE0*/ void __cdecl sub_418EE0(CWindow *, int32_t);   /* auto */
/*0041A2B0*/ BOOL __cdecl BtnHanler_sub_41A2B0(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*0041A2D0*/ void __cdecl BtnHandler_sub_41A2D0(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*0041A410*/ void __cdecl CDefaultPlayerInterface_sub_41A410(CDefaultPlayerInterface *);  /* auto */
/*0041A7D0*/ MyProfiler *__cdecl BtnHandler_sub_41A7D0(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*0041EF70*/ int32_t sub_41EF70(float, float, float, float, float, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0041F920*/ int32_t sub_41F920(int32_t *, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *);  /* auto */
/*0041FFA0*/ int32_t *TbPNGLoader_load(int32_t *, const char *, int32_t, const void *);  /* auto */
/*004201B0*/ void __cdecl sub_4201B0(int32_t, int32_t);     /* auto */
/*00420570*/ CButton *__cdecl ButtonCfg_ExitGameAction(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*004205B0*/ CWindow *__cdecl ButtonCfg_ConfirmYesAction(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00420770*/ CWindow *__cdecl sub_420770(int32_t, int32_t, int32_t);  /* auto */
/*004207E0*/ int32_t __cdecl sub_4207E0(CButton *, int32_t);  /* auto */
/*00422660*/ void __cdecl sub_422660(CButton *, int32_t);   /* auto */
/*00422820*/ void __cdecl sub_422820(CButton *, int32_t);   /* auto */
/*004229E0*/ void __cdecl sub_4229E0(CButton *, int32_t);   /* auto */
/*00422B70*/ int32_t __cdecl sub_422B70(int32_t, int32_t, int32_t);  /* auto */
/*00423360*/ CWindow *__cdecl sub_423360(int32_t, int32_t, int32_t);  /* auto */
/*00423450*/ void __cdecl sub_423450(int32_t, int32_t);     /* auto */
/*00423F50*/ int32_t __cdecl sub_423F50(int32_t, int32_t, int32_t);  /* auto */
/*00424220*/ CWindow *__cdecl sub_424220(int32_t, int32_t, int32_t);  /* auto */
/*004242F0*/ void __cdecl sub_4242F0(CButton *, int32_t);   /* auto */
/*00424660*/ BOOL __cdecl sub_424660(int32_t, int32_t);     /* auto */
/*004246B0*/ int32_t __cdecl sub_4246B0(int32_t, int32_t);  /* auto */
/*004246E0*/ int32_t __cdecl sub_4246E0(int32_t, int32_t);  /* auto */
/*00424710*/ int32_t __cdecl sub_424710(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00424720*/ int32_t __cdecl sub_424720(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00424790*/ int32_t __cdecl sub_424790(int32_t, int32_t, int32_t);  /* auto */
/*004247F0*/ CWindow *__cdecl sub_4247F0(int32_t, int32_t, int32_t);  /* auto */
/*00424810*/ int32_t __cdecl sub_424810(int32_t);  // ----  /* auto */
/*00424840*/ void __cdecl sub_424840(CButton *, int32_t);   /* auto */
/*00424EC0*/ BOOL __cdecl sub_424EC0(int32_t);  // -------  /* auto */
/*00424F50*/ int32_t __cdecl sub_424F50(int32_t, int32_t, int32_t);  /* auto */
/*00424FB0*/ int32_t __cdecl sub_424FB0(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00424FD0*/ int32_t __cdecl sub_424FD0(int32_t, int32_t);  /* auto */
/*00425070*/ CWindow *__cdecl sub_425070(int32_t, int32_t, int32_t);  /* auto */
/*004250F0*/ void __cdecl sub_4250F0(int32_t, int32_t);     /* auto */
/*004255F0*/ int32_t __cdecl sub_4255F0(int32_t *, int32_t);  /* auto */
/*004256B0*/ void __cdecl sub_4256B0(CButton *, int32_t);   /* auto */
/*00425AB0*/ CTag *__cdecl sub_425AB0(int32_t, int32_t, int32_t);  /* auto */
/*00425B50*/ __int16 __cdecl BtnHandler_sub_425B50(int32_t, int32_t, int32_t);  /* auto */
/*00425D40*/ CWindow *__cdecl sub_425D40(int32_t, int32_t, int32_t);  /* auto */
/*00425DF0*/ void __cdecl sub_425DF0(CButton *, int32_t);   /* auto */
/*00426000*/ int32_t __cdecl sub_426000(int32_t, int32_t, int32_t);  /* auto */
/*00426070*/ int32_t __cdecl sub_426070(int32_t, int32_t, int32_t);  /* auto */
/*004260F0*/ void __cdecl sub_4260F0(CButton *, int32_t);   /* auto */
/*004263E0*/ void __cdecl sub_4263E0(int32_t, int32_t);     /* auto */
/*00426650*/ int32_t __cdecl sub_426650(int32_t, int32_t);  /* auto */
/*00426680*/ BOOL __cdecl BtnHandler_sub_426680(int32_t, int32_t, int32_t);  /* auto */
/*00426730*/ BOOL __cdecl BtnHandler_sub_426730(int32_t, int32_t, int32_t);  /* auto */
/*004267D0*/ BOOL __cdecl BtnHandler_sub_4267D0(int32_t, int32_t, int32_t);  /* auto */
/*00426830*/ int32_t __cdecl sub_426830(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*004268A0*/ BOOL __cdecl BtnHandler_sub_4268A0(int32_t, int32_t, int32_t);  /* auto */
/*00426920*/ BOOL __cdecl sub_426920(int32_t, int32_t);     /* auto */
/*00426960*/ int32_t __cdecl sub_426960(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*004269D0*/ int32_t __cdecl sub_4269D0(int32_t, int32_t);  /* auto */
/*00426A00*/ CTag *__cdecl sub_426A00(int32_t, int32_t, int32_t);  /* auto */
/*00426B90*/ __int16 __cdecl sub_426B90(int32_t, int32_t);  /* auto */
/*00426C10*/ BOOL __cdecl BtnHandler_sub_426C10(int32_t, int32_t, int32_t);  /* auto */
/*00426CA0*/ BOOL __cdecl BtnHandler_sub_426CA0(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00427010*/ void __cdecl sub_427010(CButton *, int32_t);   /* auto */
/*00427230*/ void __cdecl sub_427230(CButton *, int32_t);   /* auto */
/*004273D0*/ void __cdecl sub_4273D0(CButton *, int32_t);   /* auto */
/*004274C0*/ int32_t __cdecl sub_4274C0(CButton *, CDefaultPlayerInterface *);  /* auto */
/*00427770*/ void __cdecl sub_427770(CButton *, int32_t);   /* auto */
/*00427870*/ void __cdecl sub_427870(CButton *, int32_t);   /* auto */
/*00427980*/ void __cdecl sub_427980(CButton *, int32_t);   /* auto */
/*004281D0*/ BOOL __cdecl BtnHandler_sub_4281D0(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*00428230*/ int16_t __cdecl sub_428230(int32_t, int32_t, int32_t);  /* auto */
/*00428250*/ void __cdecl sub_428250(CButton *, CDefaultPlayerInterface *);  /* auto */
/*00428360*/ int32_t __cdecl sub_428360(CWindow *, int32_t);  /* auto */
/*00428450*/ int32_t __cdecl sub_428450(CButton *, CDefaultPlayerInterface *);  /* auto */
/*004286E0*/ const wchar_t *__cdecl sub_4286E0(int32_t);    /* auto */
/*00428710*/ CWindow *__cdecl BtnHandler_sub_428710(int32_t, int32_t, CDefaultPlayerInterface *);  /* auto */
/*004288C0*/ CWindow *__cdecl sub_4288C0(int32_t, int32_t, int32_t);  /* auto */
/*004289D0*/ int32_t __cdecl sub_4289D0(int32_t, int32_t);  /* auto */
/*00428A30*/ int32_t __cdecl sub_428A30(int32_t *, int32_t);  /* auto */
/*00428C30*/ int32_t __cdecl sub_428C30(int32_t *, int32_t);  /* auto */
/*00428C60*/ int32_t __cdecl sub_428C60(int32_t *, int32_t);  /* auto */
/*00428CD0*/ int32_t __cdecl sub_428CD0(int32_t, CDefaultPlayerInterface *);  /* auto */
/*00428E90*/ int32_t __cdecl sub_428E90(int32_t, int32_t, int32_t);  /* auto */
/*00428F00*/ int32_t *__cdecl sub_428F00(int32_t, int32_t);  /* auto */
/*00428F40*/ int32_t *__cdecl sub_428F40(int32_t, int32_t);  /* auto */
/*00428F80*/ int32_t *__cdecl sub_428F80(int32_t, int32_t);  /* auto */
/*00428FC0*/ HKEY__ *__cdecl sub_428FC0(int32_t);  // ----  /* auto */
/*00428FF0*/ int32_t __cdecl sub_428FF0(int32_t, CDefaultPlayerInterface *);  /* auto */
/*00429160*/ HKEY__ *sub_429160();  // -------------------  /* auto */
/*00429180*/ int32_t __cdecl sub_429180(int32_t);  // ----  /* auto */
/*004291E0*/ int32_t __cdecl sub_4291E0(int32_t, CDefaultPlayerInterface *);  /* auto */
/*00429350*/ HKEY__ *sub_429350();  // -------------------  /* auto */
/*004293B0*/ int32_t __cdecl sub_4293B0(int32_t, CDefaultPlayerInterface *);  /* auto */
/*00429520*/ HKEY__ *sub_429520();  // -------------------  /* auto */
/*00429570*/ int32_t __cdecl sub_429570(int32_t, CDefaultPlayerInterface *);  /* auto */
/*004296E0*/ HKEY__ *sub_4296E0();  // -------------------  /* auto */
/*00429700*/ int32_t __cdecl sub_429700(int32_t, CDefaultPlayerInterface *);  /* auto */
/*00429870*/ HKEY__ *sub_429870();  // -------------------  /* auto */
/*00429890*/ int32_t __cdecl sub_429890(int32_t, CDefaultPlayerInterface *);  /* auto */
/*00429A70*/ HKEY__ *sub_429A70();  // -------------------  /* auto */
/*00429AA0*/ int32_t __cdecl sub_429AA0(int32_t, CDefaultPlayerInterface *);  /* auto */
/*00429C10*/ HKEY__ *sub_429C10();  // -------------------  /* auto */
/*00429C30*/ int32_t __cdecl sub_429C30(int32_t, int32_t, int32_t);  /* auto */
/*00429C90*/ int32_t __cdecl sub_429C90(int32_t, int32_t);  /* auto */
/*00429CD0*/ int32_t __cdecl sub_429CD0(int32_t, int32_t);  /* auto */
/*00429D90*/ int32_t __cdecl sub_429D90(int32_t, CDefaultPlayerInterface *);  /* auto */
/*00429F00*/ BOOL __cdecl BtnHandler_sub_429F00(int32_t, int32_t, int32_t);  /* auto */
/*00429F80*/ int32_t __cdecl sub_429F80(int32_t, CDefaultPlayerInterface *);  /* auto */
/*0042A0F0*/ int32_t __cdecl sub_42A0F0(int32_t, int32_t, int32_t);  /* auto */
/*0042A130*/ HKEY__ *__cdecl sub_42A130(int32_t);  // ----  /* auto */
/*0042A160*/ int32_t __cdecl sub_42A160(int32_t, CDefaultPlayerInterface *);  /* auto */
/*0042A330*/ HKEY__ *sub_42A330();  // -------------------  /* auto */
/*0042A360*/ int32_t __cdecl sub_42A360(int32_t, int32_t);  /* auto */
/*0042A3B0*/ void __cdecl sub_42A3B0(CButton *, CDefaultPlayerInterface *);  /* auto */
/*0042A760*/ char sub_42A760();  // ----------------------  /* auto */
/*0042A780*/ int32_t sub_42A780();  // -------------------  /* auto */
/*0042A790*/ const wchar_t *__cdecl sub_42A790(int32_t);    /* auto */
/*0042A7D0*/ void __cdecl sub_42A7D0(int32_t, int32_t, int32_t);  /* auto */
/*0042A850*/ int32_t __cdecl sub_42A850(int32_t, int32_t, int32_t);  /* auto */
/*0042A920*/ int32_t __cdecl sub_42A920(int32_t, int32_t, int32_t);  /* auto */
/*0042A9F0*/ void __cdecl sub_42A9F0(CButton *, CDefaultPlayerInterface *);  /* auto */
/*0042AE40*/ int32_t __cdecl sub_42AE40(int32_t, int32_t, int32_t);  /* auto */
/*0042AE90*/ int32_t __cdecl sub_42AE90(int32_t, CDefaultPlayerInterface *);  /* auto */
/*0042AF20*/ HKEY__ *__cdecl sub_42AF20(int32_t);  // ----  /* auto */
/*0042AF50*/ HKEY__ *__cdecl sub_42AF50(int32_t);  // ----  /* auto */
/*0042AF80*/ int32_t __cdecl sub_42AF80(int32_t, CDefaultPlayerInterface *);  /* auto */
/*0042B0F0*/ HKEY__ *sub_42B0F0();  // -------------------  /* auto */
/*0042B110*/ int32_t __cdecl sub_42B110(int32_t, CDefaultPlayerInterface *);  /* auto */
/*0042B280*/ HKEY__ *sub_42B280();  // -------------------  /* auto */
/*0042B2A0*/ int32_t __cdecl sub_42B2A0(int32_t, CDefaultPlayerInterface *);  /* auto */
/*0042B410*/ CButton *__cdecl sub_42B410(int32_t, int32_t, int32_t);  /* auto */
/*0042B440*/ int32_t __cdecl sub_42B440(int32_t, CDefaultPlayerInterface *);  /* auto */
/*0042B5B0*/ HKEY__ *sub_42B5B0();  // -------------------  /* auto */
/*0042B5D0*/ BOOL __cdecl BtnHandler_sub_42B5D0(int32_t, int32_t, int32_t);  /* auto */
/*0042B660*/ int32_t __cdecl sub_42B660(int32_t, int32_t, int32_t);  /* auto */
/*0042B6B0*/ BOOL __cdecl BtnHandler_sub_42B6B0(int32_t, int32_t, int32_t);  /* auto */
/*0042B710*/ int32_t __cdecl sub_42B710(int32_t, int32_t);  /* auto */
/*0042B750*/ int32_t __cdecl sub_42B750(int32_t, int32_t, int32_t);  /* auto */
/*0042B770*/ int32_t __cdecl sub_42B770(int32_t, int32_t, int32_t);  /* auto */
/*0042B7C0*/ void __cdecl sub_42B7C0(CButton *, int32_t);   /* auto */
/*0042B950*/ int32_t *__cdecl sub_42B950(int32_t, int32_t);  /* auto */
/*0042B9F0*/ int32_t *__cdecl sub_42B9F0(int32_t, int32_t);  /* auto */
/*0042BA90*/ int32_t *__cdecl sub_42BA90(int32_t, int32_t);  /* auto */
/*0042C980*/ void sub_42C980(int32_t);  // ---------------  /* auto */
/*0042C9B0*/ int32_t RtGuiView_42C9B0(RtGuiView *);  // --  /* auto */
/*0042CA70*/ int32_t sub_42CA70(RtGuiView *, int32_t);      /* auto */
/*0042D1C0*/ int32_t *CDefaultPlayerInterface_CTextIconDraw_fun_42D1C0(int32_t *, int32_t, int32_t, int32_t *, int32_t *);  /* auto */
/*0042E140*/ void __cdecl sub_42E140(CButton *, int32_t);   /* auto */
/*0042EA10*/ const void *__cdecl sub_42EA10();  // assembly  /* auto */
/*0042F5E0*/ int32_t __cdecl sub_42F5E0(int32_t);  // ----  /* auto */
/*0042F710*/ void sub_42F710();  // ----------------------  /* auto */
/*0042F730*/ void nullsub_12(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0042F800*/ void __cdecl sub_42F800();  // --------------  /* auto */
/*0042FCE0*/ const wchar_t *__cdecl _wmemset(const wchar_t *, wchar_t, size_t);  /* auto */
/*004300A0*/ const wchar_t *__cdecl _wmemmove(const wchar_t *, const wchar_t *, size_t);  /* auto */
/*00430110*/ const wchar_t *__cdecl _wmemcpy(const wchar_t *, const wchar_t *, size_t);  /* auto */
/*00430250*/ int32_t __fastcall sub_430250(int32_t *, int32_t, HWND__ *, int32_t, WPARAM, LPARAM);  /* auto */
/*00430F40*/ int32_t sub_430F40(HWND__ *, int32_t, WPARAM, LPARAM);  /* auto */
/*00431400*/ int32_t *__fastcall sub_431400(int32_t *, int32_t, int32_t, __int16, int8_t *);  /* auto */
/*00431B70*/ void sub_431B70(int32_t *, int32_t *);  // --  /* auto */
/*00432410*/ void sub_432410(int32_t, int32_t);  // ------  /* auto */
/*004333F0*/ void sub_4333F0(const void *);  // ----------  /* auto */
/*00433BF0*/ int32_t *__cdecl sub_433BF0(int32_t *, int32_t *, int32_t *);  /* auto */
/*00433D50*/ int32_t *__cdecl sub_433D50(int32_t, int32_t, int32_t *);  /* auto */
/*00433FC0*/ int32_t sub_433FC0(const char *, const char *, int32_t);  /* auto */
/*00434110*/ void __cdecl sub_434110(int32_t, const char *);  /* auto */
/*00435660*/ int32_t *Effect_cpp_435660(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00435720*/ int16_t *Effect_cpp_435720(int16_t *, int32_t);  /* auto */
/*004384D0*/ int32_t *__cdecl sub_4384D0(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00439790*/ int32_t sub_439790();  // -------------------  /* auto */
/*0043A5E0*/ int32_t CBridge_static_init();  // ----------  /* auto */
/*0043A600*/ void __cdecl CBridge_static_destroy();  // --  /* auto */
/*0043A610*/ int32_t Obj6D39B8_static_init();  // --------  /* auto */
/*0043A630*/ void __cdecl Obj6D39B8_static_destroy();       /* auto */
/*0043A880*/ int32_t sub_43A880(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0043A890*/ int32_t sub_43A890(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0043A8A0*/ int32_t ret_0_8args(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0043E000*/ int32_t sub_43E000();  // -------------------  /* auto */
/*0043E020*/ void __cdecl unknown_libname_7();  // -------  /* auto */
/*0043E440*/ int32_t sub_43E440(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004405A0*/ int32_t __cdecl sub_4405A0(int32_t *, int32_t);  /* auto */
/*00440640*/ int32_t __cdecl sub_440640(int32_t, int32_t);  /* auto */
/*00440720*/ int32_t __cdecl sub_440720(int32_t *, int32_t);  /* auto */
/*004407D0*/ int32_t __cdecl sub_4407D0(int32_t, int32_t);  /* auto */
/*00441870*/ int32_t *Bridge_cpp_441870(int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*004419D0*/ int32_t *sub_4419D0(int32_t *, int32_t, int32_t);  /* auto */
/*00443070*/ int32_t CEngineInterface_fun_443070(int32_t, int32_t, int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*00443090*/ int32_t CEngineInterface_fun_443090(int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*004430B0*/ void nullsub_21(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004430C0*/ int32_t ret_0_5args(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004430D0*/ int32_t CEngineInterface_fun_4430D0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00443120*/ CCamera *CEngineInterface_fun_443120();  // -  /* auto */
/*00443150*/ int32_t ret_0_2args(int32_t, int32_t);  // --  /* auto */
/*00443190*/ int32_t sub_443190();  // -------------------  /* auto */
/*00446800*/ int32_t sub_446800(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004472F0*/ int32_t sub_4472F0(int32_t *, int32_t *, int32_t *, int32_t *);  /* auto */
/*00447A70*/ BOOL sub_447A70(int32_t *);  // -------------  /* auto */
/*00447AB0*/ int32_t CBridgeThing_fun_447AB0();  // ------  /* auto */
/*0044D290*/ void __cdecl unknown_libname_8();  // -------  /* auto */
/*0044D870*/ int32_t sub_44D870(int32_t);  // ------------  /* auto */
/*0044DB70*/ BOOL sub_44DB70(int32_t);  // ---------------  /* auto */
/*0044F800*/ int32_t sub_44F800(__int16, int16_t *, int32_t);  /* auto */
/*00450470*/ int32_t __fastcall sub_450470(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*004526C0*/ int8_t __fastcall sub_4526C0(int32_t *, int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*00452970*/ BOOL sub_452970(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00452AB0*/ int32_t __cdecl sub_452AB0(int32_t, float, float, float, float, float, float, float);  /* auto */
/*00452B20*/ int32_t sub_452B20();  // -------------------  /* auto */
/*00452F20*/ BOOL sub_452F20(char, int32_t);  // ---------  /* auto */
/*00454FD0*/ const char *sub_454FD0(int32_t, int32_t, char);  /* auto */
/*00455000*/ char sub_455000(int32_t, int32_t);  // ------  /* auto */
/*004558F0*/ int32_t __fastcall sub_4558F0(int16_t *);      /* auto */
/*00455D40*/ int32_t __cdecl sub_455D40(int32_t);  // ----  /* auto */
/*004560F0*/ BOOL __fastcall sub_4560F0(int32_t, int32_t);  /* auto */
/*00459C20*/ const void *__cdecl sub_459C20();  // assembly  /* auto */
/*0045AFC0*/ BOOL __cdecl sub_45AFC0(int16_t, const void *);  /* auto */
/*00462850*/ const void *__cdecl sub_462850();  // assembly  /* auto */
/*00463760*/ const void *__cdecl sub_463760();  // assembly  /* auto */
/*00476060*/ const void *__cdecl sub_476060();  // assembly  /* auto */
/*004762D0*/ const void *__cdecl sub_4762D0();  // assembly  /* auto */
/*00477850*/ const void *__cdecl sub_477850();  // assembly  /* auto */
/*004778E0*/ const void *__cdecl sub_4778E0();  // assembly  /* auto */
/*004780C0*/ BOOL __cdecl CompareFunction(const void *, const void *);  /* auto */
/*00478680*/ const void *__cdecl State_cpp_478680();  // assembly  /* auto */
/*004787F0*/ const void *__cdecl sub_4787F0();  // assembly  /* auto */
/*00478800*/ const void *__cdecl sub_478800();  // assembly  /* auto */
/*00478B40*/ int32_t __cdecl __RTC_NumErrors();  // ------  /* auto */
/*00478F00*/ const void *__cdecl sub_478F00();  // assembly  /* auto */
/*004798E0*/ int32_t sub_4798E0();  // -------------------  /* auto */
/*004798F0*/ int32_t sub_4798F0();  // -------------------  /* auto */
/*0047BBD0*/ int32_t sub_47BBD0();  // -------------------  /* auto */
/*0047BBE0*/ int32_t sub_47BBE0();  // -------------------  /* auto */
/*004805F0*/ int32_t sub_4805F0(int32_t, int32_t, int32_t *, int16_t *);  /* auto */
/*00484940*/ int32_t ret_0_0args_0();  // ----------------  /* auto */
/*004859E0*/ const void *__cdecl sub_4859E0();  // assembly  /* auto */
/*0048AB20*/ BOOL __cdecl sub_48AB20(int16_t, CTag_vtbl *, __int16);  /* auto */
/*0048CAD0*/ const void *__cdecl sub_48CAD0();  // assembly  /* auto */
/*0048F0F0*/ BOOL sub_48F0F0();  // ----------------------  /* auto */
/*00491C20*/ void sub_491C20();  // ----------------------  /* auto */
/*004943E0*/ void __cdecl nullsub_3();  // ---------------  /* auto */
/*00494470*/ void __cdecl nullsub_4();  // ---------------  /* auto */
/*00494540*/ void __cdecl nullsub_5();  // ---------------  /* auto */
/*004945C0*/ void __cdecl nullsub_6();  // ---------------  /* auto */
/*00494640*/ void __cdecl nullsub_7();  // ---------------  /* auto */
/*004946B0*/ void __cdecl nullsub_13();  // --------------  /* auto */
/*00495080*/ int32_t __cdecl sub_495080(int8_t);  // -----  /* auto */
/*004950B0*/ int32_t sub_4950B0();  // -------------------  /* auto */
/*004950C0*/ int32_t sub_4950C0();  // -------------------  /* auto */
/*00496DC0*/ const char *sub_496DC0(int32_t);  // --------  /* auto */
/*00499800*/ int32_t __fastcall sub_499800(int32_t);  // -  /* auto */
/*0049A6C0*/ void sub_49A6C0();  // ----------------------  /* auto */
/*0049A7A0*/ BOOL Ctl3dAutoSubclass(HINSTANCE__ *);  // --  /* auto */
/*0049D0B0*/ CTag *__cdecl sub_49D0B0(char, int32_t, int32_t);  /* auto */
/*0049E5F0*/ int32_t sub_49E5F0();  // -------------------  /* auto */
/*0049E600*/ int32_t sub_49E600();  // -------------------  /* auto */
/*004A3400*/ int32_t __fastcall sub_4A3400(int32_t);  // -  /* auto */
/*004A3450*/ int32_t __fastcall sub_4A3450(int32_t);  // -  /* auto */
/*004A3E90*/ int32_t sub_4A3E90(__int16, int32_t);  // ---  /* auto */
/*004A68A0*/ const wchar_t *CDoor_fun_4A68A0(const wchar_t *);  /* auto */
/*004A7810*/ const wchar_t *__fastcall sub_4A7810(int32_t, int32_t, const wchar_t *, int32_t);  /* auto */
/*004A7910*/ int32_t sub_4A7910();  // -------------------  /* auto */
/*004A7920*/ void __cdecl sub_4A7920();  // --------------  /* auto */
/*004A8E70*/ int32_t __fastcall sub_4A8E70(int32_t);  // -  /* auto */
/*004A93A0*/ int32_t *sub_4A93A0();  // ------------------  /* auto */
/*004AB170*/ BOOL CShot_sub_4AB170();  // ----------------  /* auto */
/*004ABCA0*/ int32_t sub_4ABCA0();  // -------------------  /* auto */
/*004AD1A0*/ int32_t sub_4AD1A0();  // -------------------  /* auto */
/*004AD1B0*/ int32_t sub_4AD1B0();  // -------------------  /* auto */
/*004AE000*/ const void *__cdecl sub_4AE000();  // assembly  /* auto */
/*004AEE50*/ int32_t __fastcall sub_4AEE50(int32_t);  // -  /* auto */
/*004B0A80*/ int32_t sub_4B0A80(int32_t, int32_t, char);    /* auto */
/*004B1980*/ int32_t sub_4B1980();  // -------------------  /* auto */
/*004B1B50*/ BOOL CActionPoint_sub_4B1B50();  // ---------  /* auto */
/*004B1F10*/ int32_t j_j_CMap_fun_4B4C20();  // ----------  /* auto */
/*004B2AC0*/ int32_t j_CMap_fun_4B4C20();  // ------------  /* auto */
/*004B35C0*/ BOOL sub_4B35C0(int32_t *);  // -------------  /* auto */
/*004B4C20*/ int32_t ret_1_0args_0();  // ----------------  /* auto */
/*004B5980*/ BOOL sub_4B5980(int32_t, int32_t);  // ------  /* auto */
/*004B59B0*/ BOOL sub_4B59B0(int32_t, int32_t);  // ------  /* auto */
/*004B5C50*/ int16_t *CPhysicalThing_fun_4B5C50(int16_t *);  /* auto */
/*004BB130*/ int32_t Player_cpp_4BB130();  // ------------  /* auto */
/*004BFF60*/ CWorld *sub_4BFF60(__int16);  // ------------  /* auto */
/*004C04C0*/ int8_t *sub_4C04C0();  // -------------------  /* auto */
/*004C06F0*/ int32_t sub_4C06F0();  // -------------------  /* auto */
/*004C2C30*/ int32_t sub_4C2C30(int32_t, int16_t);  // ---  /* auto */
/*004C3000*/ int32_t __fastcall sub_4C3000(int32_t);  // -  /* auto */
/*004C3670*/ const void *__cdecl sub_4C3670();  // assembly  /* auto */
/*004C3A20*/ const void *__cdecl sub_4C3A20();  // assembly  /* auto */
/*004C3B50*/ const void *__cdecl sub_4C3B50();  // assembly  /* auto */
/*004C4B90*/ int32_t sub_4C4B90(int32_t);  // ------------  /* auto */
/*004C6510*/ const void *__cdecl sub_4C6510();  // assembly  /* auto */
/*004C6610*/ const void *__cdecl sub_4C6610();  // assembly  /* auto */
/*004C6AE0*/ const void *__cdecl sub_4C6AE0();  // assembly  /* auto */
/*004C8AD0*/ char sub_4C8AD0();  // ----------------------  /* auto */
/*004C8B10*/ char sub_4C8B10();  // ----------------------  /* auto */
/*004C8B50*/ int32_t sub_4C8B50();  // -------------------  /* auto */
/*004C8BD0*/ int32_t __cdecl sub_4C8BD0(int32_t, int32_t);  /* auto */
/*004C8D00*/ void sub_4C8D00();  // ----------------------  /* auto */
/*004C8D10*/ int32_t __cdecl sub_4C8D10(__int16, __int16, __int16, __int16);  /* auto */
/*004C8F30*/ int32_t sub_4C8F30();  // -------------------  /* auto */
/*004C8F50*/ int32_t __cdecl sub_4C8F50(int32_t);  // ----  /* auto */
/*004C9080*/ int32_t __cdecl sub_4C9080(int32_t);  // ----  /* auto */
/*004C91A0*/ int32_t __cdecl sub_4C91A0(int32_t);  // ----  /* auto */
/*004C9400*/ BOOL __cdecl sub_4C9400(int32_t, int32_t);     /* auto */
/*004C9540*/ int32_t __cdecl sub_4C9540(int32_t, int32_t, int32_t *, int32_t *);  /* auto */
/*004C9710*/ void __cdecl sub_4C9710(int32_t *, int32_t *);  /* auto */
/*004C97B0*/ int32_t __cdecl sub_4C97B0(int32_t, int32_t);  /* auto */
/*004C98B0*/ int32_t __cdecl sub_4C98B0(int32_t, int32_t);  /* auto */
/*004C9B50*/ int32_t __cdecl sub_4C9B50(int32_t, int32_t, int32_t *, int32_t *);  /* auto */
/*004C9C30*/ int32_t __cdecl sub_4C9C30(int32_t, int32_t, int32_t, int32_t, int32_t *, int32_t *);  /* auto */
/*004C9DF0*/ int32_t __cdecl sub_4C9DF0(int32_t, int32_t);  /* auto */
/*004C9FC0*/ int32_t __cdecl sub_4C9FC0(int32_t, int32_t);  /* auto */
/*004CA500*/ int32_t __cdecl sub_4CA500(int32_t, __int16, __int16);  /* auto */
/*004CA820*/ int32_t __cdecl sub_4CA820(int32_t, int32_t, int32_t, int32_t, __int16);  /* auto */
/*004CAA50*/ int32_t __cdecl sub_4CAA50(int32_t, int32_t);  /* auto */
/*004CAF40*/ int32_t __cdecl sub_4CAF40(int32_t *, int32_t *);  /* auto */
/*004CB170*/ int32_t __cdecl sub_4CB170(int32_t, int32_t);  /* auto */
/*004CB8C0*/ int32_t __cdecl sub_4CB8C0(int32_t, int32_t);  /* auto */
/*004CBBD0*/ int32_t __cdecl sub_4CBBD0(int32_t, int32_t, int32_t);  /* auto */
/*004CBD10*/ int32_t __cdecl sub_4CBD10(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CC120*/ int32_t __cdecl sub_4CC120(int32_t);  // ----  /* auto */
/*004CC190*/ BOOL __cdecl sub_4CC190(int32_t, int32_t);     /* auto */
/*004CC3D0*/ char __cdecl sub_4CC3D0(int32_t, int32_t);     /* auto */
/*004CC650*/ int32_t __cdecl sub_4CC650(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CC850*/ int32_t __cdecl sub_4CC850(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*004CC9B0*/ int32_t __cdecl sub_4CC9B0(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*004CCB30*/ int32_t __cdecl sub_4CCB30(int32_t);  // ----  /* auto */
/*004CCCB0*/ int32_t __cdecl sub_4CCCB0(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CCD50*/ int32_t __cdecl sub_4CCD50(int32_t, int32_t, int32_t *, int32_t *, int32_t *, int32_t *);  /* auto */
/*004CCF00*/ int32_t __cdecl sub_4CCF00(int32_t);  // ----  /* auto */
/*004CCF70*/ int32_t __cdecl sub_4CCF70(int32_t);  // ----  /* auto */
/*004CD000*/ int32_t __cdecl sub_4CD000(int32_t, int32_t, int32_t *);  /* auto */
/*004CD490*/ int32_t __cdecl __workWithTriangles(int32_t, int32_t, int32_t *);  /* auto */
/*004CD920*/ int32_t __cdecl sub_4CD920(int32_t, int32_t);  /* auto */
/*004CDF20*/ int32_t __cdecl sub_4CDF20(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CDFE0*/ int32_t __cdecl sub_4CDFE0(int32_t, int32_t, int32_t);  /* auto */
/*004CE0C0*/ int32_t __cdecl sub_4CE0C0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CE380*/ int32_t __cdecl sub_4CE380(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CE410*/ int32_t __cdecl sub_4CE410(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CE4E0*/ int32_t __cdecl sub_4CE4E0(int32_t *, int32_t *, int32_t *, int32_t *);  /* auto */
/*004CE570*/ int32_t __cdecl sub_4CE570(int32_t *, int32_t *, int32_t *, int32_t *, int8_t *);  /* auto */
/*004CE680*/ int32_t __cdecl sub_4CE680(int32_t);  // ----  /* auto */
/*004CE690*/ int32_t __cdecl sub_4CE690(int32_t, int32_t);  /* auto */
/*004CE740*/ int32_t __cdecl sub_4CE740(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CE770*/ int32_t __cdecl sub_4CE770(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004CEF20*/ int32_t sub_4CEF20();  // -------------------  /* auto */
/*004CEF40*/ int32_t __cdecl sub_4CEF40(int32_t, int32_t, int32_t, int32_t, int32_t *, int32_t, int32_t *, int32_t *);  /* auto */
/*004CF490*/ int32_t __cdecl sub_4CF490(int32_t, int32_t, int32_t, int32_t, int32_t *, int32_t, int32_t *, int32_t);  /* auto */
/*004CFC50*/ int32_t __cdecl sub_4CFC50(int32_t *, int32_t);  /* auto */
/*004CFDA0*/ int32_t __cdecl sub_4CFDA0(int32_t *, int32_t);  /* auto */
/*004CFFD0*/ BOOL __cdecl sub_4CFFD0(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004D0150*/ int32_t __cdecl sub_4D0150(int32_t *, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004D0240*/ int32_t __cdecl sub_4D0240(int32_t *, int32_t *, int32_t);  /* auto */
/*004D0320*/ int32_t __cdecl sub_4D0320(int32_t *, int32_t, int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*004D0E10*/ int32_t __cdecl sub_4D0E10(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004D0E60*/ BOOL sub_4D0E60(int32_t *, int32_t *, char);   /* auto */
/*004D1170*/ int32_t __cdecl sub_4D1170(int32_t, int32_t, void (__cdecl *)(int32_t, CTag *), int32_t);  /* auto */
/*004D12B0*/ int32_t __cdecl sub_4D12B0(int32_t, int32_t, void (__cdecl *)(int32_t, int32_t *), int32_t);  /* auto */
/*004D15E0*/ int32_t __cdecl sub_4D15E0(int32_t *, int32_t, int32_t);  /* auto */
/*004D16B0*/ int32_t __cdecl sub_4D16B0(int32_t, int32_t, int32_t);  /* auto */
/*004D1700*/ BOOL sub_4D1700(int32_t *, int32_t *, int16_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004D1A40*/ int32_t Obj6ECA70_static_init();  // --------  /* auto */
/*004D1A60*/ void __cdecl Obj6ECA70_static_destroy();       /* auto */
/*004D1A70*/ int32_t Obj6ECA60_static_init();  // --------  /* auto */
/*004D1AA0*/ void __cdecl Obj6ECA60_static_destroy();       /* auto */
/*004D1AB0*/ void __cdecl sub_4D1AB0(int32_t, int32_t);     /* auto */
/*004D1B40*/ int32_t __cdecl sub_4D1B40(int32_t, int32_t);  /* auto */
/*004D1BC0*/ int32_t *__cdecl sub_4D1BC0(int32_t, int32_t, int32_t, int32_t *, int32_t *);  /* auto */
/*004D1F10*/ int32_t *__cdecl sub_4D1F10(int32_t *, int32_t *);  /* auto */
/*004D2070*/ int32_t __cdecl sub_4D2070(int32_t *, int32_t);  /* auto */
/*004D20F0*/ int32_t __cdecl sub_4D20F0(int32_t *, int32_t *, int32_t *, int32_t);  /* auto */
/*004D2230*/ int32_t __cdecl sub_4D2230(int32_t *, int32_t *, int32_t *, int32_t);  /* auto */
/*004D2360*/ int32_t Obj6ECAE0_static_init();  // --------  /* auto */
/*004D2380*/ void __cdecl Obj6ECAE0_static_destroy();       /* auto */
/*004D23B0*/ int32_t Obj6ECAD8_static_init();  // --------  /* auto */
/*004D23D0*/ void __cdecl Obj6ECAD8_static_destroy();       /* auto */
/*004D23E0*/ int32_t Seek_static_init();  // -------------  /* auto */
/*004D2440*/ void __cdecl Seek_static_destroy();  // -----  /* auto */
/*004D2450*/ int32_t Arrival_static_init();  // ----------  /* auto */
/*004D24B0*/ void __cdecl Arrival_static_destroy();  // --  /* auto */
/*004D24C0*/ int32_t Separation_static_init();  // -------  /* auto */
/*004D2520*/ void __cdecl Separation_static_destroy();      /* auto */
/*004D2530*/ int32_t Avoid_Obstacle_static_init();  // ---  /* auto */
/*004D2590*/ void __cdecl Avoid_Obstacle_static_destroy();  /* auto */
/*004D25A0*/ int32_t Repel_Obstacle_static_init();  // ---  /* auto */
/*004D2600*/ void __cdecl Repel_Obstacle_static_destroy();  /* auto */
/*004D2610*/ int32_t Formation_static_init();  // --------  /* auto */
/*004D2670*/ void __cdecl Formation_static_destroy();       /* auto */
/*004D2680*/ int32_t Avoid_Walls_static_init();  // ------  /* auto */
/*004D26E0*/ void __cdecl Avoid_Walls_static_destroy();     /* auto */
/*004D26F0*/ int32_t Follow_Path_static_init();  // ------  /* auto */
/*004D2750*/ void __cdecl Follow_Path_static_destroy();     /* auto */
/*004D2770*/ int32_t __cdecl sub_4D2770(int32_t, int32_t);  /* auto */
/*004D2790*/ int32_t __cdecl sub_4D2790(int32_t, int32_t);  /* auto */
/*004D27B0*/ int32_t __cdecl sub_4D27B0(int32_t, int32_t);  /* auto */
/*004D27D0*/ int32_t __cdecl sub_4D27D0(int32_t, int32_t);  /* auto */
/*004D27F0*/ int32_t __cdecl sub_4D27F0(int32_t, int32_t *);  /* auto */
/*004D2850*/ char __cdecl sub_4D2850(int32_t, int32_t, __int16);  /* auto */
/*004D2A40*/ int32_t *Seek_fun_4D2A40(int32_t *, int32_t, int32_t);  /* auto */
/*004D2A60*/ int32_t __cdecl sub_4D2A60(int32_t, int32_t);  /* auto */
/*004D2B80*/ int32_t *__cdecl sub_4D2B80(int32_t, int32_t);  /* auto */
/*004D2DF0*/ int32_t *__fastcall Separation_fun_4D2DF0(int32_t, int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*004D3020*/ int32_t __cdecl sub_4D3020(int32_t *, int32_t);  /* auto */
/*004D31D0*/ const void *__cdecl Repel_Obstacle_fun_4D31D0();  // assembly  /* auto */
/*004D32E0*/ int32_t __cdecl sub_4D32E0(int32_t, int32_t *);  /* auto */
/*004D33A0*/ const void *__cdecl Avoid_Obstacle_fun_4D33A0();  // assembly  /* auto */
/*004D35C0*/ int32_t *Avoid_Walls_fun_4D35C0(int32_t *, int32_t, int32_t);  /* auto */
/*004D3BE0*/ int32_t *__cdecl sub_4D3BE0(int32_t *, int32_t, int32_t);  /* auto */
/*004D3C10*/ int32_t *__cdecl sub_4D3C10(int32_t *, int32_t, int32_t);  /* auto */
/*004D3C40*/ int32_t *Follow_Path_fun_4D3C40(int32_t *, int32_t, int32_t);  /* auto */
/*004D4F60*/ int32_t *__cdecl sub_4D4F60(int32_t *, int32_t *, int32_t);  /* auto */
/*004D5060*/ int32_t *__cdecl sub_4D5060(int32_t *, int32_t *);  /* auto */
/*004D54F0*/ const void *__cdecl sub_4D54F0();  // assembly  /* auto */
/*004D56E0*/ int32_t *sub_4D56E0();  // ------------------  /* auto */
/*004D6A40*/ int32_t __fastcall sub_4D6A40(int32_t);  // -  /* auto */
/*004D7180*/ int32_t sub_4D7180(int32_t, int32_t);  // ---  /* auto */
/*004D72D0*/ __int16 __cdecl sub_4D72D0(int32_t, CTag **);  /* auto */
/*004D7460*/ int32_t __cdecl sub_4D7460(int32_t, CTag **);  /* auto */
/*004D75F0*/ int32_t __fastcall sub_4D75F0(int32_t, int32_t, int32_t *, CTag **, int32_t);  /* auto */
/*004D9690*/ const void *__cdecl sub_4D9690();  // assembly  /* auto */
/*004DAE40*/ __int16 __fastcall DungeonHeart_cpp_4DAE40(int32_t);  /* auto */
/*004DCE70*/ __int16 __cdecl sub_4DCE70(int32_t);  // ----  /* auto */
/*004DDCA0*/ int32_t __fastcall sub_4DDCA0(int16_t *);      /* auto */
/*004DE1CD*/ void def_4DE112(int32_t);  // ---------------  /* auto */
/*004DEC40*/ BOOL __cdecl sub_4DEC40(int32_t);  // -------  /* auto */
/*004DFF00*/ int32_t __cdecl sub_4DFF00(int32_t);  // ----  /* auto */
/*004E0370*/ BOOL sub_4E0370(int16_t *, int32_t);  // ----  /* auto */
/*004E53B0*/ const void *__cdecl sub_4E53B0();  // assembly  /* auto */
/*004E5480*/ const void *__cdecl sub_4E5480();  // assembly  /* auto */
/*004E69B0*/ const void *__cdecl sub_4E69B0();  // assembly  /* auto */
/*004EC2A0*/ int32_t sub_4EC2A0(CCamera *);  // ----------  /* auto */
/*004EDF20*/ int16_t sub_4EDF20(int16_t *);  // ----------  /* auto */
/*004EDFC0*/ char __fastcall RoomManager_cpp_4EDFC0(int32_t, int32_t, int32_t);  /* auto */
/*004F2910*/ char __cdecl sub_4F2910(char, char);  // ----  /* auto */
/*004F2930*/ int32_t __cdecl sub_4F2930(char, char);  // -  /* auto */
/*004F2950*/ int32_t __cdecl sub_4F2950(char, char);  // -  /* auto */
/*004F2F50*/ int8_t sub_4F2F50(int32_t);  // -------------  /* auto */
/*004F6140*/ const void *__cdecl sub_4F6140();  // assembly  /* auto */
/*004F8180*/ int32_t sub_4F8180();  // -------------------  /* auto */
/*004FAC40*/ int32_t sub_4FAC40(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00505310*/ int32_t *__fastcall sub_505310(int32_t *);     /* auto */
/*005056E0*/ char __fastcall sub_5056E0(int32_t, int32_t, __int16);  /* auto */
/*00505A10*/ int32_t GameActionHandler_N43(int32_t);  // -  /* auto */
/*00505AA0*/ int32_t GameActionHandler_N44(int32_t);  // -  /* auto */
/*00505C90*/ int32_t GameActionHandler_N49(int32_t);  // -  /* auto */
/*00505D00*/ int32_t GameActionHandler_N4A(int32_t);  // -  /* auto */
/*00505DA0*/ int32_t GameActionHandler_N4C(int32_t);  // -  /* auto */
/*00505DD0*/ int32_t GameActionHandler_N4D(int32_t);  // -  /* auto */
/*00505E20*/ int32_t GameActionHandler_N4E(int32_t);  // -  /* auto */
/*005060E0*/ int32_t GameActionHandler_N54(int32_t);  // -  /* auto */
/*00506100*/ int32_t GameActionHandler_N55(int32_t);  // -  /* auto */
/*005079B0*/ BOOL __cdecl sub_5079B0(const void *, const void **);  /* auto */
/*00507A30*/ int32_t sub_507A30();  // -------------------  /* auto */
/*00507A40*/ int32_t sub_507A40();  // -------------------  /* auto */
/*005089D0*/ int32_t CWorld_static_init();  // -----------  /* auto */
/*005089F0*/ void __cdecl CWorld_static_destroy();  // ---  /* auto */
/*00508C40*/ CTag *CWorld_getCTag(int16_t);  // ----------  /* auto */
/*005091C0*/ BOOL CWorld_5091C0(int32_t);  // ------------  /* auto */
/*005095D0*/ int32_t CWorld_5095D0(int32_t);  // ---------  /* auto */
/*0050E530*/ int32_t CWorld_fun_50E530(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0050E560*/ int32_t CWorld_fun_50E560(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0050E590*/ int32_t CWorld_fun_50E590(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0050F830*/ const char *CWorld_fun_50F830(int16_t, int32_t);  /* auto */
/*0050F880*/ int32_t CWorld_fun_50F880(int32_t);  // -----  /* auto */
/*00510790*/ void __cdecl sub_510790(int32_t, int32_t);     /* auto */
/*005108F0*/ int32_t *__cdecl TbSysCommand_WM_ACTIVATE_cb_PauseOrRestart(int32_t);  /* auto */
/*00510950*/ int32_t __cdecl sub_510950(int32_t, int32_t, int32_t);  /* auto */
/*00510E60*/ void nullsub_23(int32_t, int32_t, int32_t);    /* auto */
/*005113C0*/ int32_t __cdecl sub_5113C0(int32_t);  // ----  /* auto */
/*00511A30*/ BOOL __cdecl sub_511A30(int16_t *, int16_t *);  /* auto */
/*00511A70*/ int32_t GameActionRecord_arr_static_init();    /* auto */
/*00511A80*/ int32_t GameActionRecord_arr_init();  // ----  /* auto */
/*00512850*/ int32_t GameActionHandler_N2F(int32_t);  // -  /* auto */
/*005128F0*/ int32_t GameActionHandler_N31(__int16 *);      /* auto */
/*00513210*/ int32_t GameActionHandler_N32(int32_t);  // -  /* auto */
/*00513240*/ int32_t GameActionHandler_N33(int32_t);  // -  /* auto */
/*00513270*/ int32_t GameActionHandler_N34(int32_t);  // -  /* auto */
/*005132A0*/ int32_t GameActionHandler_N35(int32_t);  // -  /* auto */
/*00513340*/ int32_t GameActionHandler_N37(int32_t);  // -  /* auto */
/*00513370*/ int32_t GameActionHandler_N38(int32_t);  // -  /* auto */
/*00513480*/ int32_t GameActionHandler_N39(int16_t *);      /* auto */
/*005134E0*/ int32_t GameActionHandler_N3A(int32_t);  // -  /* auto */
/*005135B0*/ int32_t GameActionHandler_N3B(int16_t *);      /* auto */
/*00513600*/ int32_t GameActionHandler_N3C(int16_t *);      /* auto */
/*00513650*/ int32_t GameActionHandler_N3D(int32_t);  // -  /* auto */
/*00513690*/ int32_t GameActionHandler_N3E(int16_t *);      /* auto */
/*005136E0*/ int32_t GameActionHandler_N3F(int16_t *);      /* auto */
/*00513730*/ int32_t GameActionHandler_N40(int16_t *);      /* auto */
/*00513800*/ int32_t GameActionHandler_N5D(int16_t *);      /* auto */
/*00513DC0*/ int32_t GameActionHandler_N6A(int16_t *);      /* auto */
/*00513E50*/ int32_t GameActionHandler_N71(int16_t *);      /* auto */
/*00513EB0*/ int32_t GameActionHandler_N72(int32_t);  // -  /* auto */
/*00514280*/ int32_t GameActionHandler_N7C(int16_t *);      /* auto */
/*005142E0*/ int32_t GameActionHandler_N81(int16_t *);      /* auto */
/*00514420*/ int32_t GameActionHandler_N88(int16_t *);      /* auto */
/*00514560*/ int32_t GameActionHandler_N14(int32_t);  // -  /* auto */
/*00514590*/ int32_t GameActionHandler_N15(int32_t);  // -  /* auto */
/*005146B0*/ int32_t GameActionHandler_N19(int32_t);  // -  /* auto */
/*00516050*/ BOOL sub_516050(int32_t, int32_t, int32_t);    /* auto */
/*005162E0*/ BOOL sub_5162E0(int32_t, int32_t);  // ------  /* auto */
/*00516670*/ BOOL sub_516670(int32_t *, int16_t, int32_t *, int16_t *);  /* auto */
/*00516950*/ BOOL sub_516950(int16_t *, int32_t *, int32_t *);  /* auto */
/*005169E0*/ int32_t GameActionHandler_N24(int32_t);  // -  /* auto */
/*00516E40*/ int32_t GameActionHandler_N26(int32_t);  // -  /* auto */
/*00517190*/ int32_t GameActionHandler_N1E(int32_t);  // -  /* auto */
/*005171D0*/ int32_t GameActionHandler_N27(int32_t);  // -  /* auto */
/*00517220*/ int32_t GameActionHandler_N1F(int32_t);  // -  /* auto */
/*00517270*/ int32_t GameActionHandler_N1D(int32_t);  // -  /* auto */
/*005172B0*/ int32_t GameActionHandler_N20_N2C__TbTQILoader_fun_5172B0(int32_t);  /* auto */
/*005172C0*/ int32_t GameActionHandler_N21(int32_t);  // -  /* auto */
/*00517310*/ int32_t GameActionHandler_N22(int32_t);  // -  /* auto */
/*00517370*/ __int16 CWorldInterface_fun_517370(int32_t, int32_t);  /* auto */
/*00517380*/ void nullsub_24(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00517390*/ int32_t *CWorldInterface_fun_517390(int32_t *);  /* auto */
/*005173B0*/ int32_t CEngineInterface_fun_5173B0(int32_t, int32_t);  /* auto */
/*005173C0*/ int32_t *CWorldInterface_fun_5173C0(int32_t *, int32_t);  /* auto */
/*005173E0*/ int32_t *CWorldInterface_fun_5173E0(int32_t *, int32_t, int32_t);  /* auto */
/*00517400*/ int32_t ret_0_3args(int32_t, int32_t, int32_t);  /* auto */
/*00517410*/ char CWorldInterface_fun_517410(int32_t);      /* auto */
/*00517420*/ __int16 CWorldInterface_fun_517420(int32_t);   /* auto */
/*00517430*/ __int16 CWorldInterface_fun_517430(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00517440*/ __int16 CWorldInterface_517440(int32_t, int32_t, int32_t);  /* auto */
/*00517450*/ __int16 CWorldInterface_fun_517450();  // ---  /* auto */
/*00517460*/ char CWorldInterface_fun_517460();  // ------  /* auto */
/*005174A0*/ const void *sub_5174A0();  // ---------------  /* auto */
/*00517580*/ char sub_517580();  // ----------------------  /* auto */
/*00517990*/ BOOL sub_517990(int32_t, int32_t, int16_t);    /* auto */
/*00517AB0*/ BOOL sub_517AB0(int16_t, int32_t, int16_t);    /* auto */
/*00517F60*/ BOOL DllMain(HINSTANCE__ *, int32_t, const void *);  /* auto */
/*00519980*/ BOOL sub_519980(int32_t, int32_t, int32_t);    /* auto */
/*0051AA80*/ int32_t sub_51AA80();  // -------------------  /* auto */
/*0051AA90*/ int32_t sub_51AA90();  // -------------------  /* auto */
/*0051CAE0*/ int32_t sub_51CAE0(int32_t *, int32_t);  // -  /* auto */
/*0051CB80*/ int32_t sub_51CB80(int32_t);  // ------------  /* auto */
/*0051CD90*/ int32_t sub_51CD90(int32_t);  // ------------  /* auto */
/*0051DC20*/ int32_t sub_51DC20(int32_t);  // ------------  /* auto */
/*0051DC40*/ int32_t sub_51DC40(int32_t *);  // ----------  /* auto */
/*0051DC70*/ int32_t sub_51DC70(int32_t);  // ------------  /* auto */
/*0051DE10*/ const void *__cdecl sub_51DE10();  // assembly  /* auto */
/*0051E6D0*/ int32_t __cdecl sub_51E6D0(int32_t, CWorld *);  /* auto */
/*0051EA40*/ int32_t __cdecl sub_51EA40(int32_t, int32_t);  /* auto */
/*0051EB00*/ int32_t __cdecl sub_51EB00(int32_t, int8_t *);  /* auto */
/*0051EB30*/ int32_t __cdecl sub_51EB30(int32_t *, int32_t);  /* auto */
/*0051EB50*/ int32_t __cdecl sub_51EB50(int32_t, int32_t *);  /* auto */
/*0051EC30*/ BOOL __cdecl sub_51EC30(int32_t *, int32_t);   /* auto */
/*0051EC60*/ const void *__cdecl sub_51EC60();  // assembly  /* auto */
/*0051EE40*/ int32_t __cdecl sub_51EE40(int32_t *, int32_t);  /* auto */
/*0051EE60*/ int32_t __cdecl sub_51EE60(int32_t, int32_t *);  /* auto */
/*0051EF80*/ int32_t __cdecl sub_51EF80(int32_t, int32_t);  /* auto */
/*0051F0B0*/ int32_t __cdecl sub_51F0B0(int32_t, int32_t);  /* auto */
/*0051F220*/ int32_t __cdecl sub_51F220(int32_t *, int32_t);  /* auto */
/*0051F240*/ int32_t __cdecl sub_51F240(int32_t, int32_t *);  /* auto */
/*0051FCB0*/ int32_t __cdecl sub_51FCB0(int32_t *, int32_t);  /* auto */
/*0051FCD0*/ int32_t __cdecl sub_51FCD0(int32_t, int32_t *);  /* auto */
/*0051FDE0*/ int32_t __cdecl sub_51FDE0(int32_t *, int32_t);  /* auto */
/*0051FE00*/ int32_t __cdecl sub_51FE00(int32_t, int32_t *);  /* auto */
/*0051FF10*/ int32_t __cdecl sub_51FF10(int32_t *, int32_t);  /* auto */
/*0051FF30*/ int32_t __cdecl sub_51FF30(int32_t, int32_t *);  /* auto */
/*00520040*/ int32_t __cdecl sub_520040(int32_t *, int32_t);  /* auto */
/*00520060*/ int32_t __cdecl sub_520060(int32_t, int32_t *);  /* auto */
/*00520180*/ int32_t __cdecl sub_520180(int32_t, int32_t);  /* auto */
/*00520460*/ int32_t __cdecl sub_520460(int32_t, int32_t);  /* auto */
/*005208B0*/ int32_t __cdecl sub_5208B0(int32_t, int32_t);  /* auto */
/*00520BB0*/ int32_t __cdecl sub_520BB0(int32_t, int32_t);  /* auto */
/*00520E50*/ int32_t __cdecl sub_520E50(int32_t, int32_t);  /* auto */
/*00520F40*/ int32_t __cdecl sub_520F40(int32_t, int32_t);  /* auto */
/*005211A0*/ int32_t __cdecl sub_5211A0(int32_t, int32_t);  /* auto */
/*005212A0*/ int32_t __cdecl sub_5212A0(int32_t, const char *);  /* auto */
/*005212D0*/ BOOL __cdecl WorldWDL_cpp_5212D0(int32_t, int32_t);  /* auto */
/*00521380*/ int32_t __cdecl sub_521380(int32_t, int32_t);  /* auto */
/*00521420*/ int32_t __cdecl sub_521420(int32_t, int32_t *);  /* auto */
/*005215F0*/ int32_t __cdecl sub_5215F0(int8_t *, int32_t);  /* auto */
/*00521630*/ int32_t __cdecl sub_521630(int32_t *, int32_t);  /* auto */
/*00521650*/ int32_t __cdecl sub_521650(int32_t, int32_t *);  /* auto */
/*00521770*/ int32_t __cdecl sub_521770(int32_t, int32_t);  /* auto */
/*00521790*/ int32_t __cdecl sub_521790(int32_t, int32_t);  /* auto */
/*005217F0*/ int32_t __cdecl sub_5217F0(int32_t *, int32_t);  /* auto */
/*00521810*/ int32_t __cdecl sub_521810(int32_t, int32_t *);  /* auto */
/*00521930*/ int32_t __cdecl sub_521930(int32_t *, int32_t);  /* auto */
/*00521A60*/ int32_t __cdecl sub_521A60(int32_t, int32_t);  /* auto */
/*00521AB0*/ int32_t __cdecl sub_521AB0(int32_t, int32_t);  /* auto */
/*00521B00*/ int32_t __cdecl sub_521B00(int32_t, int32_t, int32_t);  /* auto */
/*00521B40*/ int32_t CCommunicationInterface_fun_521B40(int32_t);  /* auto */
/*00522650*/ int32_t CLocalCommunication_static_init();     /* auto */
/*00522670*/ void __cdecl CLocalCommunication_static_destroy();  /* auto */
/*00522870*/ int32_t sub_522870(const void *);  // -------  /* auto */
/*00522990*/ int32_t CNetworkCommunication_static_init();   /* auto */
/*005229B0*/ void __cdecl CNetworkCommunication_static_destroy();  /* auto */
/*005240C0*/ int32_t __cdecl sub_5240C0(int32_t, int32_t *, int32_t, int32_t, int32_t *);  /* auto */
/*00524240*/ void __cdecl sub_524240(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00525170*/ int32_t CGameComponent_static_init();  // ---  /* auto */
/*00525190*/ void __cdecl CGameComponent_static_destroy();  /* auto */
/*00525D30*/ int32_t MyGame_prepareWithSettings(int32_t *);  /* auto */
/*00527440*/ int32_t CNetworkComponent_static_init();       /* auto */
/*00527460*/ void __cdecl CNetworkComponent_static_destroy();  /* auto */
/*00527890*/ int32_t __cdecl sub_527890(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005278C0*/ int32_t cmd_Game();  // ---------------------  /* auto */
/*00527920*/ int32_t __cdecl cmd_Quit(int32_t, int32_t, int32_t *);  /* auto */
/*00527960*/ int32_t cmd_getNetworkServices();  // -------  /* auto */
/*005279F0*/ int32_t __cdecl cmd_selectNetworkServiceWithName(int32_t, int32_t);  /* auto */
/*00527A90*/ int32_t __cdecl cmd_selectNetworkService(int32_t, int32_t);  /* auto */
/*00527B10*/ int32_t cmd_getNetworkSessions();  // -------  /* auto */
/*00527BD0*/ int32_t cmd_getMyMachineNetworkInfo();  // --  /* auto */
/*00527C50*/ int32_t __cdecl cmd_createSession(int32_t, int32_t);  /* auto */
/*00527D00*/ int32_t __cdecl cmd_selectNetworkSession(int32_t, int32_t);  /* auto */
/*00527D90*/ int32_t __cdecl cmd_Leave(int32_t, int32_t, int32_t *);  /* auto */
/*00527DD0*/ int32_t cmd_PlayerList_sub();  // -----------  /* auto */
/*00527EB0*/ int32_t __cdecl cmd_sendChatMessage(int32_t, int32_t);  /* auto */
/*00527F40*/ int32_t __cdecl cmd_sendDataMessage(int32_t, int32_t);  /* auto */
/*00527FE0*/ int32_t cmd_GetNews();  // ------------------  /* auto */
/*00528000*/ int32_t cmd_GetGameNews();  // --------------  /* auto */
/*00528020*/ int32_t cmd_Login();  // --------------------  /* auto */
/*00528040*/ int32_t cmd_Logout();  // -------------------  /* auto */
/*00528060*/ int32_t cmd_PlayerList();  // ---------------  /* auto */
/*00528080*/ int32_t __cdecl cmd_dumpPlayer(int32_t, int32_t);  /* auto */
/*005280F0*/ int32_t systemCallbackStub();  // -----------  /* auto */
/*00528100*/ int32_t __cdecl probably_chatCallback(int32_t, const wchar_t *);  /* auto */
/*00528110*/ int32_t dataCallbackStub();  // -------------  /* auto */
/*00528120*/ char __cdecl guaranteedDataCallback(int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*005282F0*/ int32_t CButton_fun_5282F0(int32_t, int32_t);  /* auto */
/*0052B700*/ int32_t CCommunicationInterface_fun_52B700(int32_t);  /* auto */
/*0052BB30*/ CButton *CButton_createEx(CWindow *, int32_t, ButtonCfg *, int32_t);  /* auto */
/*0052C6D0*/ CButton *CButton_create(CWindow *, ButtonCfg *, CButton *);  /* auto */
/*0052CA70*/ int32_t CTextInput_fun_52CA70(size_t);  // --  /* auto */
/*0052CAD0*/ int32_t sub_52CAD0(int32_t, int32_t, int32_t);  /* auto */
/*0052CB40*/ int32_t CWorldEntry_createArr277(CWorldEntry **, int32_t);  /* auto */
/*0052CF90*/ int32_t *MySurface_static_copy(int32_t *, MySurface *, int32_t, int32_t, MySurface *, AABB *, int32_t);  /* auto */
/*0052D410*/ int32_t *probably_copySurface_16bpp_noAlpha(int32_t *, MySurface *, int32_t, int32_t, MySurface *, int32_t *, int32_t);  /* auto */
/*0052D8B0*/ int32_t *probably_copySurface_16bpp_alphaMask(int32_t *, MySurface *, int32_t, int32_t, MySurface *, int32_t *, int32_t);  /* auto */
/*0052DCE0*/ int32_t *probably_copySurface_32bpp(int32_t *, MySurface *, int32_t, int32_t, MySurface *, int32_t *, int32_t);  /* auto */
/*0052DEC0*/ int32_t *probably_copySurface_16bpp(int32_t *, MySurface *, int32_t, int32_t, MySurface *, int32_t *, int32_t);  /* auto */
/*0052E0A0*/ int32_t *probably_copySurface_8bpp(int32_t *, MySurface *, int32_t, int32_t, MySurface *, AABB *, int32_t);  /* auto */
/*0052E490*/ int32_t CFrontEndComponent_static_init();      /* auto */
/*0052E4B0*/ void __cdecl CFrontEndComponent_static_destroy();  /* auto */
/*0052E4C0*/ int32_t CFrontEndComponent3D_static_init();    /* auto */
/*0052E4E0*/ void __cdecl CFrontEndComponent3D_static_destroy();  /* auto */
/*0052FAF0*/ int32_t __cdecl CFrontEndComponent_onKeyboardActionWithCtrl(int32_t, int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0052FBF0*/ int32_t __cdecl CFrontEndComponent_onMouseAction(int32_t, int32_t, int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0052FE40*/ void __cdecl nullsub_8();  // ---------------  /* auto */
/*0052FE50*/ int32_t __cdecl CFrontEndComponent_onWindowMsg(__int16, int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0052FE90*/ int32_t sub_52FE90(int32_t, const char *, int32_t, int32_t);  /* auto */
/*0052FED0*/ int32_t sub_52FED0(int32_t, const char *, int32_t);  /* auto */
/*0052FF10*/ int32_t __cdecl sub_52FF10(CButton *, int32_t);  /* auto */
/*00530430*/ const wchar_t *__cdecl sub_530430(int32_t);    /* auto */
/*00530440*/ int32_t __cdecl CListBox_sub_530440(int32_t, CFrontEndComponent *);  /* auto */
/*005306F0*/ int32_t __cdecl CFrontEndComponent_execute(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*00531F00*/ void sub_531F00(const void **);  // ---------  /* auto */
/*00531F20*/ int32_t __cdecl sub_531F20(const char *);      /* auto */
/*00531F50*/ int32_t __cdecl sub_531F50(__int16 *);  // --  /* auto */
/*00531F80*/ int32_t __cdecl sub_531F80(int32_t, const char *);  /* auto */
/*00531FF0*/ int16_t *__cdecl sub_531FF0(int32_t, int16_t *);  /* auto */
/*00532040*/ char sub_532040(int8_t *);  // --------------  /* auto */
/*00532060*/ __int16 sub_532060(int16_t *);  // ----------  /* auto */
/*005322F0*/ int32_t *__cdecl sub_5322F0(CButton *, int32_t);  /* auto */
/*00532310*/ int32_t *__cdecl sub_532310(CButton *, int32_t);  /* auto */
/*00532330*/ int32_t *__cdecl sub_532330(CButton *, int32_t);  /* auto */
/*00532350*/ int32_t *__cdecl sub_532350(CButton *, int32_t);  /* auto */
/*00532370*/ int32_t *__cdecl sub_532370(CButton *, int32_t);  /* auto */
/*00532390*/ int32_t *__cdecl sub_532390(CButton *, int32_t);  /* auto */
/*005323B0*/ int32_t *__cdecl sub_5323B0(FontObj *, CButton *, int32_t);  /* auto */
/*00532660*/ void __cdecl unknown_libname_16();  // ------  /* auto */
/*00532670*/ char __cdecl CButton_render(CButton *, CFrontEndComponent *);  /* auto */
/*00533380*/ int32_t *sub_533380(MyObj67B948 *, int32_t *);  /* auto */
/*00533450*/ const char *__cdecl sub_533450(int32_t);       /* auto */
/*00533D30*/ char __cdecl CFrontEndComponent_do_special_gui(CFrontEndComponent *);  /* auto */
/*00535BE0*/ int32_t sub_535BE0(const wchar_t *);  // ----  /* auto */
/*00535E10*/ int32_t __cdecl sub_535E10(int32_t, int32_t);  /* auto */
/*00535F50*/ void __cdecl CClickButton_renderApplyBtn(CButton *, CFrontEndComponent *);  /* auto */
/*00536070*/ void __cdecl CClickButton_renderExitBtn(CClickButton *, CFrontEndComponent *);  /* auto */
/*00536190*/ int32_t *__cdecl sub_536190(CButton *, int32_t);  /* auto */
/*005366D0*/ void __cdecl nullsub_16();  // --------------  /* auto */
/*005366E0*/ void __cdecl nullsub_17();  // --------------  /* auto */
/*005366F0*/ void __cdecl unknown_libname_17();  // ------  /* auto */
/*00536700*/ int32_t *__cdecl sub_536700(CButton *, int32_t);  /* auto */
/*005367D0*/ int32_t *__cdecl sub_5367D0(int32_t, int32_t);  /* auto */
/*00536DD0*/ void sub_536DD0(int32_t);  // ---------------  /* auto */
/*00536DF0*/ int32_t *sub_536DF0(int32_t);  // -----------  /* auto */
/*00536F90*/ int32_t __cdecl sub_536F90(int32_t);  // ----  /* auto */
/*00536FA0*/ int32_t *__cdecl sub_536FA0(int32_t, int32_t);  /* auto */
/*005372F0*/ int32_t sub_5372F0(int32_t);  // ------------  /* auto */
/*005379B0*/ int32_t __cdecl sub_5379B0(CButton *, int32_t);  /* auto */
/*00537C30*/ int8_t __cdecl sub_537C30(int32_t, int32_t);   /* auto */
/*00537CA0*/ char __cdecl sub_537CA0(CButton *, int32_t);   /* auto */
/*00537E10*/ int32_t __cdecl sub_537E10(CButton *, int32_t);  /* auto */
/*00537F30*/ int32_t sub_537F30();  // -------------------  /* auto */
/*00537F50*/ void __cdecl sub_537F50();  // --------------  /* auto */
/*00537F70*/ MySurface *sub_537F70();  // ----------------  /* auto */
/*00538000*/ int8_t __cdecl sub_538000(int32_t, int32_t, int32_t);  /* auto */
/*005384F0*/ char __cdecl do_special_gui_sub(CFrontEndComponent *);  /* auto */
/*00538AC0*/ const char *__cdecl sub_538AC0(int32_t);       /* auto */
/*00538B90*/ int32_t __cdecl sub_538B90(int32_t, int32_t);  /* auto */
/*00538D00*/ char __cdecl sub_538D00(int32_t);  // -------  /* auto */
/*005391F0*/ CWindow *__cdecl __unk_before_action(int32_t, int32_t, int32_t);  /* auto */
/*005392E0*/ char __cdecl sub_5392E0(int32_t, int32_t);     /* auto */
/*005393B0*/ char __cdecl sub_5393B0(int32_t);  // -------  /* auto */
/*00539490*/ int32_t __cdecl sub_539490(int32_t, int32_t, int32_t);  /* auto */
/*005394E0*/ int32_t __cdecl sub_5394E0(int32_t, int32_t, int32_t);  /* auto */
/*00539500*/ int32_t __cdecl sub_539500(int32_t, int32_t, int32_t);  /* auto */
/*005395A0*/ char sub_5395A0();  // ----------------------  /* auto */
/*005396B0*/ int32_t sub_5396B0();  // -------------------  /* auto */
/*00539710*/ int32_t __cdecl sub_539710(int32_t, int16_t *);  /* auto */
/*0053A010*/ int32_t *__cdecl sub_53A010(int32_t, int32_t);  /* auto */
/*0053A280*/ BOOL __cdecl sub_53A280(int32_t, int32_t);     /* auto */
/*0053AC60*/ int32_t sub_53AC60(const wchar_t *, int32_t);  /* auto */
/*0053AF80*/ int32_t __cdecl sub_53AF80(CButton *, int32_t);  /* auto */
/*0053B5F0*/ __int16 sub_53B5F0();  // -------------------  /* auto */
/*0053B810*/ CButton *__cdecl sub_53B810(int32_t, const void *);  /* auto */
/*0053B840*/ CWindow *__cdecl show_cond_movie(int32_t, int32_t, int32_t *);  /* auto */
/*0053BCD0*/ const void *__cdecl CFrontEndComponent_showMovie();  // assembly  /* auto */
/*0053C070*/ int32_t *__cdecl sub_53C070(CButton *, int32_t);  /* auto */
/*0053C120*/ int32_t __cdecl sub_53C120(int32_t, int32_t);  /* auto */
/*0053C270*/ int32_t __cdecl CFrontEndComponent_ShowMovie_onKeyboardAction(int32_t, int32_t, CComponent *);  /* auto */
/*0053C2A0*/ int32_t __cdecl CFrontEndComponent_ShowMovie_onMouseAction(int32_t, int32_t, int32_t, int32_t, CComponent *);  /* auto */
/*0053C2C0*/ int32_t sub_53C2C0();  // -------------------  /* auto */
/*0053C2E0*/ int32_t __cdecl CFrontEndComponent_WM_ACTIVATE_cb(int32_t);  /* auto */
/*0053C320*/ int32_t sub_53C320(int32_t);  // ------------  /* auto */
/*0053C3C0*/ int8_t *__cdecl sub_53C3C0(int32_t, int32_t);  /* auto */
/*0053CAF0*/ const char *__cdecl sub_53CAF0(CButton *, int32_t);  /* auto */
/*0053D270*/ int32_t __cdecl sub_53D270(CButton *, int32_t);  /* auto */
/*0053D550*/ int32_t __cdecl sub_53D550(CButton *, int32_t);  /* auto */
/*0053DBD0*/ void __cdecl sub_53DBD0(CButton *, int32_t);   /* auto */
/*0053E720*/ int32_t sub_53E720();  // -------------------  /* auto */
/*0053E740*/ void __cdecl sub_53E740();  // --------------  /* auto */
/*0053F280*/ int32_t __cdecl sub_53F280(int32_t, int32_t);  /* auto */
/*0053F530*/ int32_t __cdecl sub_53F530(int32_t *, int32_t);  /* auto */
/*0053F590*/ int32_t __cdecl sub_53F590(int32_t *, int32_t);  /* auto */
/*0053F600*/ int32_t __cdecl sub_53F600(int32_t, int32_t);  /* auto */
/*0053F8B0*/ void __cdecl sub_53F8B0(CButton *, int32_t);   /* auto */
/*0053FDF0*/ int32_t sub_53FDF0(const wchar_t *, int32_t);  /* auto */
/*00540220*/ int32_t __cdecl sub_540220(CButton *, int32_t);  /* auto */
/*00540600*/ int32_t __cdecl sub_540600(CButton *, int32_t);  /* auto */
/*005409E0*/ const wchar_t *__cdecl sub_5409E0(int32_t);    /* auto */
/*00540A30*/ const wchar_t *__cdecl sub_540A30(int32_t);    /* auto */
/*00540A80*/ const wchar_t *__cdecl sub_540A80(int32_t);    /* auto */
/*00540AD0*/ int32_t sub_540AD0();  // -------------------  /* auto */
/*00540B20*/ int32_t sub_540B20();  // -------------------  /* auto */
/*00540B70*/ int32_t sub_540B70();  // -------------------  /* auto */
/*00540BC0*/ BOOL __cdecl sub_540BC0(int32_t, int32_t);     /* auto */
/*005410C0*/ int32_t __cdecl sub_5410C0(int32_t, int32_t);  /* auto */
/*005415D0*/ CButton *__cdecl sub_5415D0(int32_t, int32_t, int32_t *);  /* auto */
/*005416E0*/ CButton *__cdecl sub_5416E0(int32_t, int32_t, int32_t);  /* auto */
/*005417F0*/ const wchar_t *__cdecl sub_5417F0(int32_t, int32_t, int32_t);  /* auto */
/*00541940*/ int32_t *__cdecl sub_541940(int32_t, int32_t);  /* auto */
/*00541980*/ int32_t *__cdecl sub_541980(int32_t, int32_t);  /* auto */
/*005419F0*/ int16_t *sub_5419F0(int16_t *);  // ---------  /* auto */
/*00541DF0*/ char __cdecl sub_541DF0(int32_t);  // -------  /* auto */
/*00541F50*/ char __cdecl sub_541F50(CButton *, CFrontEndComponent *);  /* auto */
/*00542070*/ CWindow *__cdecl sub_542070(int32_t, int32_t, int32_t);  /* auto */
/*00542110*/ BOOL __cdecl sub_542110(int32_t, int32_t);     /* auto */
/*005424D0*/ int32_t __cdecl do_smth_and_execute_action_91(int32_t);  /* auto */
/*00542500*/ int32_t sub_542500();  // -------------------  /* auto */
/*00542520*/ void __cdecl sub_542520();  // --------------  /* auto */
/*00542540*/ int32_t __cdecl do_smth_and_execute_action_8(int32_t);  /* auto */
/*005427B0*/ const void *__cdecl _malloc(size_t);  // ----  /* auto */
/*005427E0*/ char sub_5427E0();  // ----------------------  /* auto */
/*00542BD0*/ bool sub_542BD0(int32_t);  // ---------------  /* auto */
/*00542BF0*/ const char *__cdecl CFrontEndComponent_chatCallback(const wchar_t *, int32_t, int32_t);  /* auto */
/*00542F40*/ void __cdecl CFrontEndComponent_guaranteedDataCallback(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00543820*/ SIZE_T sub_543820();  // --------------------  /* auto */
/*00543840*/ int32_t __cdecl probably_session_destructor(int32_t, int32_t, int32_t);  /* auto */
/*00544060*/ void __cdecl CFrontEndComponent_dataCallback(int8_t *, int32_t, int32_t, int32_t);  /* auto */
/*005445C0*/ int32_t sub_5445C0();  // -------------------  /* auto */
/*005445D0*/ int32_t __cdecl sub_5445D0(int32_t);  // ----  /* auto */
/*005445F0*/ int32_t __cdecl sub_5445F0(CButton *, int32_t);  /* auto */
/*00544DF0*/ char sub_544DF0(__int16 *, int32_t, int16_t *);  /* auto */
/*00544E90*/ int32_t *__cdecl sub_544E90(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*00544FA0*/ int32_t *__cdecl sub_544FA0(CButton *, int32_t);  /* auto */
/*00545610*/ char __cdecl sub_545610(int32_t, int32_t, int32_t);  /* auto */
/*005457A0*/ CButton *__cdecl CFrontEndComponent_static_sub_5457A0(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*00545970*/ char sub_545970(int8_t, int32_t *, int32_t *);  /* auto */
/*00545B10*/ char sub_545B10(int8_t, int8_t *, int32_t);    /* auto */
/*00545C80*/ int32_t __cdecl sub_545C80(CButton *, int32_t);  /* auto */
/*00545E10*/ char sub_545E10();  // ----------------------  /* auto */
/*00545F20*/ const char *sub_545F20(int32_t, int32_t *);    /* auto */
/*00545FC0*/ const char *__cdecl sub_545FC0(int32_t, int32_t, int32_t);  /* auto */
/*00546150*/ char __cdecl sub_546150(int32_t, int32_t);     /* auto */
/*00546360*/ int32_t __cdecl sub_546360(int32_t, int32_t, int32_t);  /* auto */
/*005463B0*/ int32_t __cdecl sub_5463B0(int32_t, int32_t, int32_t);  /* auto */
/*00546400*/ char __cdecl sub_546400(CButton *, int32_t);   /* auto */
/*00546830*/ BOOL __cdecl sub_546830(int32_t, int32_t);     /* auto */
/*005475A0*/ int32_t __cdecl sub_5475A0(int32_t, int32_t, int32_t);  /* auto */
/*00547720*/ int32_t __cdecl sub_547720(int32_t, int32_t, int32_t);  /* auto */
/*00547AE0*/ void __cdecl CFrontEndComponent_systemCallback(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00547B40*/ int32_t sub_547B40(int32_t, int32_t);  // ---  /* auto */
/*00547C20*/ int32_t __cdecl CButton_sub_547C20(CButton *, CFrontEndComponent *);  /* auto */
/*00547EA0*/ int32_t sub_547EA0();  // -------------------  /* auto */
/*00547EB0*/ const wchar_t *__cdecl sub_547EB0(int32_t);    /* auto */
/*005482D0*/ int32_t __cdecl sub_5482D0(CButton *, int32_t);  /* auto */
/*00548A30*/ int32_t __cdecl sub_548A30(size_t *, int32_t);  /* auto */
/*00548A70*/ int32_t __cdecl sub_548A70(size_t *, int32_t);  /* auto */
/*00548AB0*/ int32_t __cdecl sub_548AB0(size_t *, int32_t);  /* auto */
/*00548AF0*/ int32_t __cdecl sub_548AF0(size_t *, int32_t);  /* auto */
/*00548B30*/ int32_t __cdecl sub_548B30(size_t *, int32_t);  /* auto */
/*00548B70*/ int32_t __cdecl sub_548B70(int32_t, int32_t);  /* auto */
/*00548BE0*/ int32_t __cdecl sub_548BE0(int32_t, int32_t);  /* auto */
/*00548C40*/ int32_t __cdecl sub_548C40(int32_t, int32_t);  /* auto */
/*00548CA0*/ int32_t __cdecl sub_548CA0(int32_t, int32_t);  /* auto */
/*00548D00*/ int32_t __cdecl sub_548D00(int32_t, int32_t);  /* auto */
/*00549220*/ int32_t __cdecl sub_549220(int32_t, int32_t, int32_t);  /* auto */
/*00549420*/ int32_t __cdecl sub_549420(int32_t, int32_t, int32_t);  /* auto */
/*00549620*/ int32_t *__cdecl sub_549620(int32_t, int32_t);  /* auto */
/*005496B0*/ int32_t *__cdecl sub_5496B0(int32_t, int32_t);  /* auto */
/*00549770*/ int32_t *__cdecl sub_549770(int32_t, int32_t);  /* auto */
/*00549830*/ int32_t *__cdecl sub_549830(int32_t, int32_t);  /* auto */
/*00549900*/ int32_t *__cdecl sub_549900(int32_t, int32_t);  /* auto */
/*005499D0*/ int32_t *__cdecl sub_5499D0(int32_t, int32_t);  /* auto */
/*00549AA0*/ int32_t *__cdecl sub_549AA0(int32_t, int32_t);  /* auto */
/*00549B70*/ int32_t *__cdecl sub_549B70(int32_t, int32_t);  /* auto */
/*00549C40*/ int32_t *__cdecl sub_549C40(int32_t, int32_t);  /* auto */
/*0054A4D0*/ void __cdecl sub_54A4D0(int32_t, int32_t, int32_t);  /* auto */
/*0054A710*/ void __cdecl sub_54A710(int32_t, int32_t);     /* auto */
/*0054A8A0*/ int32_t __cdecl sub_54A8A0(CButton *, int32_t);  /* auto */
/*0054AA50*/ int32_t __cdecl sub_54AA50(CButton *, int32_t);  /* auto */
/*0054ABB0*/ int32_t *__cdecl sub_54ABB0(CButton *, int32_t);  /* auto */
/*0054AC90*/ CButton *__cdecl sub_54AC90(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054AD40*/ int32_t *__cdecl sub_54AD40(int32_t, CFrontEndComponent *);  /* auto */
/*0054ADD0*/ int32_t *__cdecl sub_54ADD0(int32_t, CFrontEndComponent *);  /* auto */
/*0054AE50*/ int32_t *__cdecl sub_54AE50(int32_t, CFrontEndComponent *);  /* auto */
/*0054AEE0*/ int32_t *__cdecl sub_54AEE0(int32_t, CFrontEndComponent *);  /* auto */
/*0054AF70*/ char __cdecl sub_54AF70(int32_t, int32_t);     /* auto */
/*0054AFA0*/ char __cdecl sub_54AFA0(int32_t, int32_t);     /* auto */
/*0054AFD0*/ const void *__cdecl sub_54AFD0();  // assembly  /* auto */
/*0054B820*/ int32_t *__cdecl sub_54B820(int32_t, int32_t);  /* auto */
/*0054B860*/ int32_t *__cdecl sub_54B860(int32_t, int32_t);  /* auto */
/*0054B8A0*/ int32_t *__cdecl sub_54B8A0(int32_t, int32_t);  /* auto */
/*0054B8E0*/ HKEY__ *__cdecl sub_54B8E0(int32_t, int32_t);  /* auto */
/*0054B910*/ HKEY__ *__cdecl sub_54B910(int32_t, int32_t);  /* auto */
/*0054B940*/ int32_t *__cdecl sub_54B940(int32_t, int32_t);  /* auto */
/*0054B980*/ int32_t *__cdecl sub_54B980(int32_t, int32_t);  /* auto */
/*0054B9B0*/ int32_t *__cdecl sub_54B9B0(int32_t, int32_t);  /* auto */
/*0054BA30*/ int32_t __cdecl sub_54BA30(int32_t, int32_t);  /* auto */
/*0054BA50*/ int32_t __cdecl sub_54BA50(int32_t, int32_t);  /* auto */
/*0054BA70*/ int32_t __cdecl sub_54BA70(int32_t, int32_t);  /* auto */
/*0054BA90*/ int32_t *__cdecl sub_54BA90(int32_t, int32_t);  /* auto */
/*0054BAC0*/ int32_t *__cdecl sub_54BAC0(int32_t, int32_t);  /* auto */
/*0054BAF0*/ int32_t *__cdecl sub_54BAF0(int32_t, int32_t);  /* auto */
/*0054BB20*/ int32_t __cdecl sub_54BB20(int32_t, int32_t);  /* auto */
/*0054BD70*/ int32_t __cdecl sub_54BD70(int32_t, int32_t, int32_t);  /* auto */
/*0054BD90*/ int32_t sub_54BD90(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054BDE0*/ int32_t sub_54BDE0();  // -------------------  /* auto */
/*0054BDF0*/ const wchar_t *__cdecl sub_54BDF0(int32_t);    /* auto */
/*0054BE30*/ BOOL __cdecl sub_54BE30(int32_t, int32_t);     /* auto */
/*0054C2A0*/ int32_t __cdecl ResolutionBtn_pressFun_54C2A0(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054C3F0*/ int32_t __cdecl ResolutionBtn_releaseFun_54C3F0(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054C540*/ int32_t __cdecl sub_54C540(int32_t, int32_t, int32_t);  /* auto */
/*0054C6B0*/ char __cdecl sub_54C6B0(int32_t, int32_t, int32_t);  /* auto */
/*0054C810*/ int32_t __cdecl sub_54C810(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054C8C0*/ int32_t __cdecl sub_54C8C0(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054C970*/ int32_t __cdecl sub_54C970(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054C9F0*/ int32_t __cdecl sub_54C9F0(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054CE00*/ int32_t *__cdecl sub_54CE00(int32_t, int32_t);  /* auto */
/*0054CEC0*/ int32_t __cdecl sub_54CEC0(CButton *, int32_t);  /* auto */
/*0054D040*/ CButton *__cdecl sub_54D040(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054D0E0*/ CButton *__cdecl sub_54D0E0(int32_t, int32_t, CFrontEndComponent *);  /* auto */
/*0054D180*/ int32_t *__cdecl sub_54D180(int32_t, int32_t);  /* auto */
/*0054D240*/ int32_t *__cdecl sub_54D240(int32_t, int32_t);  /* auto */
/*0054DFF0*/ int32_t __cdecl sub_54DFF0(int32_t, int32_t, int32_t);  /* auto */
/*0054E4D0*/ int32_t sub_54E4D0();  // -------------------  /* auto */
/*0054E670*/ int32_t sub_54E670(int8_t *);  // -----------  /* auto */
/*0054E720*/ void sub_54E720();  // ----------------------  /* auto */
/*0054E740*/ int32_t *__cdecl sub_54E740(CButton *, int32_t);  /* auto */
/*0054E8E0*/ int32_t *__cdecl sub_54E8E0(CButton *, int32_t);  /* auto */
/*0054EA90*/ BOOL __cdecl sub_54EA90(int32_t, int32_t);     /* auto */
/*0054EDF0*/ void sub_54EDF0();  // ----------------------  /* auto */
/*0054EE10*/ const wchar_t *sub_54EE10();  // ------------  /* auto */
/*0054EE30*/ const void *__cdecl _malloc_0(size_t);  // --  /* auto */
/*0054F050*/ MySurface *sub_54F050();  // ----------------  /* auto */
/*0054F070*/ int32_t sub_54F070();  // -------------------  /* auto */
/*0054F090*/ void __cdecl sub_54F090();  // --------------  /* auto */
/*0054F160*/ BOOL __cdecl CListBox_LoadGame_SaveList_render(int32_t, CFrontEndComponent *);  /* auto */
/*0054FA60*/ int8_t *sub_54FA60(int32_t, const char *, int32_t, int32_t);  /* auto */
/*0054FC40*/ const void *sub_54FC40(__int16 *);  // ------  /* auto */
/*0054FCE0*/ int32_t sub_54FCE0();  // -------------------  /* auto */
/*0054FF00*/ int32_t __cdecl sub_54FF00(CButton *, int32_t);  /* auto */
/*005501F0*/ int32_t __cdecl sub_5501F0(CButton *, int32_t);  /* auto */
/*00550420*/ int32_t *__cdecl sub_550420(CButton *, int32_t);  /* auto */
/*005507E0*/ int32_t __cdecl sub_5507E0(CButton *, int32_t);  /* auto */
/*00550A10*/ int32_t *__cdecl sub_550A10(CButton *, int32_t);  /* auto */
/*00550D90*/ int32_t *__cdecl sub_550D90(CButton *, int32_t);  /* auto */
/*00551490*/ int32_t *__cdecl sub_551490(CButton *, int32_t);  /* auto */
/*00551820*/ int32_t *__cdecl sub_551820(CButton *, int32_t);  /* auto */
/*00551BA0*/ int32_t *__cdecl sub_551BA0(CButton *, int32_t);  /* auto */
/*00551F20*/ int32_t *__cdecl sub_551F20(int32_t, int32_t);  /* auto */
/*00551FE0*/ int32_t *__cdecl sub_551FE0(int32_t, int32_t);  /* auto */
/*005520A0*/ int32_t *__cdecl sub_5520A0(CButton *, int32_t);  /* auto */
/*005524F0*/ int32_t *sub_5524F0(int32_t *, int32_t *, int32_t *, int32_t, int32_t);  /* auto */
/*00552620*/ int32_t sub_552620(int32_t, MySurface *, MySurface *, float);  /* auto */
/*00552770*/ int32_t *sub_552770(int32_t *, int32_t *, int32_t, int8_t *);  /* auto */
/*00552990*/ int32_t sub_552990(int32_t *, int32_t, int32_t);  /* auto */
/*00552BE0*/ int32_t sub_552BE0();  // -------------------  /* auto */
/*00552C30*/ void sub_552C30();  // ----------------------  /* auto */
/*00552CA0*/ int32_t MyLangObj_static_init();  // --------  /* auto */
/*00552CC0*/ void __cdecl MyLangObj_static_destroy();       /* auto */
/*00552CD0*/ int32_t FontObj_3_static_constructor();  // -  /* auto */
/*00552CF0*/ void __cdecl FontObj_3_static_destructor();    /* auto */
/*00552D00*/ int32_t FontObj_2_static_constructor();  // -  /* auto */
/*00552D20*/ void __cdecl FontObj_2_static_destructor();    /* auto */
/*00552D30*/ int32_t FontObj_1_static_constructor();  // -  /* auto */
/*00552D50*/ void __cdecl FontObj_1_static_destructor();    /* auto */
/*00552D60*/ int32_t FontObj1_static_init();  // ---------  /* auto */
/*00552D80*/ void __cdecl FontObj1_static_destructor();     /* auto */
/*00552D90*/ int32_t FontObj2_static_init();  // ---------  /* auto */
/*00552DB0*/ void __cdecl FontObj2_static_destructor();     /* auto */
/*00552DC0*/ int32_t FontObj3_static_init();  // ---------  /* auto */
/*00552DE0*/ void __cdecl FontObj3_static_destructor();     /* auto */
/*00552DF0*/ int32_t FontObj4_static_init();  // ---------  /* auto */
/*00552E10*/ void __cdecl FontObj4_static_destructor();     /* auto */
/*00552E20*/ int32_t FontObj5_static_init();  // ---------  /* auto */
/*00552E40*/ void __cdecl FontObj5_static_destructor();     /* auto */
/*00552E50*/ int32_t FontObj6_static_init();  // ---------  /* auto */
/*00552E70*/ void __cdecl FontObj6_static_destructor();     /* auto */
/*00552E80*/ int32_t FontObj7_static_init();  // ---------  /* auto */
/*00552EA0*/ void __cdecl FontObj7_static_destructor();     /* auto */
/*00552EB0*/ int32_t FontObj8_static_init();  // ---------  /* auto */
/*00552ED0*/ void __cdecl FontObj8_static_destructor();     /* auto */
/*00552EE0*/ int32_t FontObj9_static_init();  // ---------  /* auto */
/*00552F00*/ void __cdecl FontObj9_static_destructor();     /* auto */
/*00552F10*/ int32_t loadResources();  // ----------------  /* auto */
/*005534D0*/ int32_t __cdecl sub_5534D0(int32_t);  // ----  /* auto */
/*00553690*/ int32_t __cdecl sub_553690(int32_t, int32_t);  /* auto */
/*00553780*/ int32_t __cdecl sub_553780(int32_t);  // ----  /* auto */
/*00553800*/ int32_t __cdecl sub_553800(int32_t);  // ----  /* auto */
/*00553880*/ int32_t sub_553880();  // -------------------  /* auto */
/*00553A60*/ const char *__cdecl MyTextText_idx1091_getMbString(int32_t);  /* auto */
/*00553A80*/ MyTextText *MyTextText_getinstance_idx1091();  /* auto */
/*00553A90*/ const char *__cdecl MyTextText_getMbString_idx1056_1081(int32_t);  /* auto */
/*00553AC0*/ const char *__cdecl MyTextText_getMbString_idx1000_1023(int32_t);  /* auto */
/*00553AF0*/ const char *__cdecl MyTextText_idx1090_getMbString(int32_t);  /* auto */
/*00553B10*/ MyTextText *sub_553B10();  // ---------------  /* auto */
/*00553B20*/ BOOL __cdecl MyLangObj_static_toUniToMB_2(const wchar_t *, int8_t *, int32_t);  /* auto */
/*00553B90*/ BOOL __cdecl MBToUni_convert(int8_t *, const wchar_t *, int32_t);  /* auto */
/*00553C00*/ int32_t sub_553C00();  // -------------------  /* auto */
/*00553DD0*/ const char *__cdecl MyTextText_getMbString_idx1024_1029(int32_t);  /* auto */
/*00553E80*/ char __cdecl sub_553E80(int32_t);  // -------  /* auto */
/*00553EE0*/ int32_t sub_553EE0();  // -------------------  /* auto */
/*00553F00*/ void __cdecl unknown_libname_32();  // ------  /* auto */
/*00553F10*/ int32_t TbPNGLoader_static_init();  // ------  /* auto */
/*00553F30*/ void __cdecl TbPNGLoader_static_destroy();     /* auto */
/*00553F40*/ int32_t TbTQILoader_static_init();  // ------  /* auto */
/*00553F60*/ void __cdecl TbTQILoader_static_destroy();     /* auto */
/*00553F90*/ int32_t TbBMPLoader_static_init();  // ------  /* auto */
/*00553FB0*/ void __cdecl TbBMPLoader_static_destroy();     /* auto */
/*00554000*/ int32_t __cdecl DiscFileBase_554000(DiscFileBase *, CFileManager *, const char *, int32_t);  /* auto */
/*005540B0*/ int32_t __cdecl loadArtToSurface(int32_t, MyDdSurfaceEx *, CFileManager *, const char *, int32_t);  /* auto */
/*00554240*/ int32_t __cdecl sub_554240(int32_t, int32_t, int32_t, int32_t, const char *, int32_t);  /* auto */
/*00554380*/ int32_t probably_Console_static_init();  // -  /* auto */
/*005543E0*/ void __cdecl probably_Console_static_destroy();  /* auto */
/*00554560*/ int32_t __cdecl format_string(int32_t, const char *, ...);  /* auto */
/*00554A40*/ void MyGame_static_release();  // -----------  /* auto */
/*005557E0*/ int32_t __cdecl unicodeToUtf8(const wchar_t *, const char *, int32_t);  /* auto */
/*00555850*/ int32_t __cdecl utf8_to_unicode(const char *, const wchar_t *, int32_t);  /* auto */
/*005558B0*/ const char *__cdecl sub_5558B0(const char *);  /* auto */
/*005558D0*/ int32_t __cdecl badRandomCall(int32_t, int32_t, const char *, int32_t);  /* auto */
/*00556170*/ void __cdecl nullsub_9();  // ---------------  /* auto */
/*00556330*/ int32_t *__fastcall CWindowTest__probably_do_show_window_ev0_7(CWindowTest *, int32_t, int32_t *, AABB *);  /* auto */
/*00556650*/ LRESULT CWindowTest_proc(HWND__ *, int32_t, WPARAM, LPARAM);  /* auto */
/*00556EF0*/ int32_t __cdecl sub_556EF0(int32_t, int32_t, int32_t *, const float *);  /* auto */
/*00557090*/ int32_t __cdecl sub_557090(const float *);     /* auto */
/*00557230*/ double calc_moon_age();  // -----------------  /* auto */
/*00557390*/ int32_t MyGame_static_init();  // -----------  /* auto */
/*005573B0*/ void __cdecl MyGame_static_destroy();  // ---  /* auto */
/*005573C0*/ BOOL collect_devices_DDEnumCB(GUID *, const char *, const char *, const void *);  /* auto */
/*005575F0*/ int32_t Direct3DEnumCallback(GUID *, const char *, const char *, _D3DDeviceDesc **, _D3DDeviceDesc **, int32_t);  /* auto */
/*00557820*/ DxD3dInfo *__cdecl sub_557820(int32_t);  // -  /* auto */
/*005578E0*/ int32_t collect_ddraw_devices();  // --------  /* auto */
/*00557980*/ BOOL hWindow_enum_DDEnumCB(GUID *, const char *, const char *, const void *);  /* auto */
/*00557A10*/ int32_t ___DDEnumModesCB(DDSURFACEDESC *, int32_t);  /* auto */
/*00557AF0*/ int32_t sub_557AF0(int32_t, int32_t, int32_t, MyVideoSettings *);  /* auto */
/*00557EE0*/ BOOL MyGame_enum_DDEnumCB(GUID *, const char *, const char *, MyGame *);  /* auto */
/*00557FD0*/ BOOL isOsVersionGE(int32_t, int32_t, int16_t);  /* auto */
/*005587E0*/ MyDdSurfaceEx *Obj6723A0_getDdSurface1();      /* auto */
/*00558A00*/ void MyInputManagerCb_static_setMousePos_(Pos2i *);  /* auto */
/*00558C70*/ LRESULT myCustomDefWindowProcA(HWND__ *, int32_t, WPARAM, LPARAM);  /* auto */
/*00558DD0*/ int32_t MyGame_D3DENUMDEVICESCALLBACK(GUID *, const char *, const char *, _D3DDeviceDesc *, _D3DDeviceDesc *, MyGame *);  /* auto */
/*00559050*/ int32_t __cdecl MyGame_static_559050_parse(const char *);  /* auto */
/*005594E0*/ int32_t __cdecl sub_5594E0(int32_t, int32_t, int32_t);  /* auto */
/*005595C0*/ void __cdecl MyGame_debugMsg(MyGame *, const char *, ...);  /* auto */
/*00559710*/ int32_t MyGame_static_callback(int32_t, Event0_winShown7 *, MyGame *);  /* auto */
/*00559770*/ __int16 __fastcall MyGame_sub_559770(__int16);  /* auto */
/*00559B90*/ int32_t sub_559B90();  // -------------------  /* auto */
/*00559BB0*/ void __cdecl unknown_libname_38();  // ------  /* auto */
/*00559D70*/ void sub_559D70(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00559ED0*/ int32_t *sub_559ED0(int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*0055A4D0*/ int32_t sub_55A4D0(const void *, int32_t);     /* auto */
/*0055A850*/ const char *MLDPlay_error_to_string(int32_t);  /* auto */
/*0055AF10*/ int32_t MyResources_static_init();  // ------  /* auto */
/*0055AF30*/ void __cdecl MyResources_static_destroy();     /* auto */
/*0055B370*/ int32_t sub_55B370(int32_t);  // ------------  /* auto */
/*0055BE80*/ int32_t *__cdecl CFileManager_readAndParseWad(int32_t *, CFileManager *, const char *, ...);  /* auto */
/*0055BF40*/ int32_t __cdecl CFileManager_setPathFormat(int32_t, CFileManager *, const char *, ...);  /* auto */
/*0055C940*/ int32_t sub_55C940(int32_t);  // ------------  /* auto */
/*0055CE80*/ int32_t sub_55CE80(int32_t);  // ------------  /* auto */
/*0055D530*/ int32_t sub_55D530();  // -------------------  /* auto */
/*0055DD70*/ HKEY__ *___sub_55DD70_newCampagin(int8_t);     /* auto */
/*0055DDF0*/ int32_t sub_55DDF0();  // -------------------  /* auto */
/*0055E1B0*/ int32_t sub_55E1B0(int32_t);  // ------------  /* auto */
/*0055EBE0*/ int32_t __fastcall sub_55EBE0(int32_t);  // -  /* auto */
/*0055EC10*/ const char *sub_55EC10();  // ---------------  /* auto */
/*0055EEC0*/ int32_t settings_openPlayerRegKey(int32_t);    /* auto */
/*00560FD0*/ int32_t sub_560FD0(int32_t);  // ------------  /* auto */
/*00560FE0*/ int32_t sub_560FE0(int32_t);  // ------------  /* auto */
/*00562A30*/ int32_t sub_562A30(int32_t);  // ------------  /* auto */
/*00563E30*/ int32_t RegKey_static_checkDk2Keys_563E30(int32_t);  /* auto */
/*00567080*/ int32_t sub_567080();  // -------------------  /* auto */
/*005670D0*/ int32_t __cdecl sub_5670D0(int32_t);  // ----  /* auto */
/*005670F0*/ int32_t sub_5670F0();  // -------------------  /* auto */
/*00567100*/ int32_t CSoundSystem_static_init();  // -----  /* auto */
/*00567120*/ void __cdecl CSoundSystem_static_destroy();    /* auto */
/*00567130*/ void MySound_static_init();  // -------------  /* auto */
/*005671D0*/ void ret_void_4args(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005671E0*/ void ret_void_1args(int32_t);  // -----------  /* auto */
/*00567DE0*/ const void *__cdecl CSoundSystem_init_sound();  // assembly  /* auto */
/*00567F10*/ int32_t CSpeechSystem_static_init();  // ----  /* auto */
/*00567F80*/ void __cdecl CSpeechSystem_static_destroy();   /* auto */
/*0056A250*/ int32_t __cdecl sub_56A250(int32_t *, int32_t);  /* auto */
/*0056A6D0*/ int32_t __cdecl sub_56A6D0(int32_t *, int32_t);  /* auto */
/*0056AC80*/ int32_t __cdecl sub_56AC80(int32_t *, int32_t);  /* auto */
/*0056B210*/ int32_t __cdecl sub_56B210(int32_t *, int32_t);  /* auto */
/*0056B740*/ int32_t __cdecl sub_56B740(int32_t *, int32_t);  /* auto */
/*0056BCF0*/ int32_t __cdecl sub_56BCF0(int32_t *, int32_t);  /* auto */
/*0056C4E0*/ int32_t __cdecl sub_56C4E0(int32_t *, int32_t);  /* auto */
/*0056CBD0*/ int32_t __cdecl sub_56CBD0(int32_t *, int32_t *);  /* auto */
/*0056D2D0*/ int32_t __cdecl sub_56D2D0(int32_t *, int32_t);  /* auto */
/*0056D880*/ int32_t __cdecl sub_56D880(int32_t *, int32_t);  /* auto */
/*0056DAD0*/ int32_t __cdecl sub_56DAD0(int32_t *, int32_t);  /* auto */
/*0056E300*/ int32_t __cdecl sub_56E300(int32_t *, int32_t);  /* auto */
/*0056E900*/ int32_t __cdecl sub_56E900(int32_t *, int32_t);  /* auto */
/*0056F090*/ int32_t __cdecl sub_56F090(int32_t *, int32_t);  /* auto */
/*0056FA00*/ int32_t __cdecl sub_56FA00(int32_t *, int32_t);  /* auto */
/*005700A0*/ int32_t __cdecl sub_5700A0(int32_t, int32_t *, int32_t);  /* auto */
/*00570210*/ int32_t __cdecl sub_570210(int32_t, int32_t *, int32_t);  /* auto */
/*00570500*/ int32_t __cdecl sub_570500(int32_t, int32_t *, int32_t);  /* auto */
/*00570630*/ int32_t __cdecl sub_570630(int32_t, int32_t *, int32_t);  /* auto */
/*005707C0*/ int32_t __cdecl sub_5707C0(int32_t *, int32_t *, int32_t);  /* auto */
/*005708A0*/ int32_t __cdecl sub_5708A0(int32_t, int32_t *, int32_t);  /* auto */
/*00570A20*/ int32_t __cdecl sub_570A20(int32_t, int32_t *, int32_t);  /* auto */
/*00571040*/ int32_t __cdecl sub_571040(int32_t *, int32_t);  /* auto */
/*00571290*/ int32_t __cdecl sub_571290(int32_t *, int32_t);  /* auto */
/*005716E0*/ int32_t __cdecl sub_5716E0(int32_t *, int32_t *);  /* auto */
/*00571910*/ int32_t __cdecl set_g2_screenArea(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00571940*/ void nullsub_26();  // ----------------------  /* auto */
/*00571950*/ void nullsub_27();  // ----------------------  /* auto */
/*00571960*/ void nullsub_28();  // ----------------------  /* auto */
/*00571970*/ void nullsub_29();  // ----------------------  /* auto */
/*00571980*/ void nullsub_30();  // ----------------------  /* auto */
/*00571990*/ char sub_571990();  // ----------------------  /* auto */
/*00571A60*/ void nullsub_31();  // ----------------------  /* auto */
/*00571A70*/ int32_t __cdecl sub_571A70(int32_t);  // ----  /* auto */
/*00571A90*/ int32_t *__cdecl sub_571A90(int32_t *);  // -  /* auto */
/*00571AB0*/ int32_t *__cdecl sub_571AB0(int32_t *);  // -  /* auto */
/*00571AD0*/ int32_t __cdecl sub_571AD0(float);  // ------  /* auto */
/*00571AE0*/ int32_t __cdecl sub_571AE0(int32_t);  // ----  /* auto */
/*00571B00*/ int32_t *__cdecl sub_571B00(int32_t *, int32_t, int32_t);  /* auto */
/*00571C50*/ int32_t *sub_571C50();  // ------------------  /* auto */
/*00571DA0*/ void sub_571DA0();  // ----------------------  /* auto */
/*00571E00*/ void __cdecl sub_571E00(int32_t, int32_t);     /* auto */
/*00571E60*/ int32_t __cdecl sub_571E60(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00571F00*/ int32_t __cdecl sub_571F00(__int16 *);  // --  /* auto */
/*00572060*/ int32_t __cdecl sub_572060(__int16 *);  // --  /* auto */
/*005722A0*/ int32_t __cdecl sub_5722A0(__int16 *);  // --  /* auto */
/*005723D0*/ int32_t __cdecl sub_5723D0(__int16 *);  // --  /* auto */
/*005725D0*/ void sub_5725D0();  // ----------------------  /* auto */
/*00572820*/ int32_t __cdecl sub_572820(float, float, int32_t);  /* auto */
/*00572920*/ int32_t __cdecl sub_572920(int32_t, float, int32_t, int32_t);  /* auto */
/*00572A70*/ void __cdecl sub_572A70(__int16 *, int32_t, int32_t);  /* auto */
/*00572CF0*/ int32_t sub_572CF0();  // -------------------  /* auto */
/*00572E00*/ void __cdecl sub_572E00(int32_t, char);  // -  /* auto */
/*00572F60*/ int32_t __cdecl sub_572F60(int32_t, int32_t, int32_t **, int32_t);  /* auto */
/*005735A0*/ void __cdecl MyDLVec2i_static_sub_5735A0(MyDLVec2i *);  /* auto */
/*005737E0*/ int32_t *__cdecl MyDLVec2i_static_sub_5737E0(MyDLVec2i *);  /* auto */
/*00573C20*/ IDirectDraw4 *dk2_cleanup3d();  // ----------  /* auto */
/*00573CF0*/ int32_t configureFlagsAndTexturesCount();      /* auto */
/*00573ED0*/ int32_t __cdecl dk2_init3d(IDirectDraw *, IDirectDrawSurface *, IDirectDrawSurface *, GUID *, __int16, int32_t);  /* auto */
/*005741D0*/ HRESULT sub_5741D0();  // -------------------  /* auto */
/*00574200*/ HRESULT __cdecl setGammaRamp(const void *);    /* auto */
/*00574240*/ CEngineSprite *__cdecl sub_574240(float);      /* auto */
/*005742F0*/ int32_t MyHeap_autoremoveObjects();  // -----  /* auto */
/*00574310*/ SceneObject30 *__cdecl LoadCachedTextures(int32_t, int32_t, const char *, int32_t);  /* auto */
/*005747B0*/ int32_t __cdecl sub_5747B0(int32_t);  // ----  /* auto */
/*005747C0*/ int32_t __cdecl setPmeshReductionLevel(int32_t);  /* auto */
/*005747D0*/ int32_t __cdecl sub_5747D0(int32_t);  // ----  /* auto */
/*005747E0*/ void __cdecl sub_5747E0(float, float, float);  /* auto */
/*00574820*/ MyDLVec2i *MyDLVec2i_generate();  // --------  /* auto */
/*00575700*/ void sub_575700();  // ----------------------  /* auto */
/*00575780*/ bool __cdecl drawScene(char);  // -----------  /* auto */
/*00575A00*/ void __cdecl sub_575A00(int32_t, float);       /* auto */
/*00575D70*/ int32_t __cdecl Vec3f_static_sub_575D70(Vec3f *, float, int32_t *);  /* auto */
/*00575F10*/ Vec3f *__cdecl Vec3f_static_sub_575F10(Vec3f *, float, Vec3f *, const float *);  /* auto */
/*00575FA0*/ void __cdecl sub_575FA0(int32_t);  // -------  /* auto */
/*00575FD0*/ int32_t __cdecl sub_575FD0(const void *);      /* auto */
/*00576010*/ int32_t sub_576010();  // -------------------  /* auto */
/*00576230*/ int32_t sub_576230();  // -------------------  /* auto */
/*005767C0*/ void sub_5767C0();  // ----------------------  /* auto */
/*005767E0*/ int32_t *sub_5767E0(SceneObject2E *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, int32_t);  /* auto */
/*005785E0*/ int32_t *CEngineWorldPrimitive_fun_5785E0(int32_t *, int32_t);  /* auto */
/*00578DE0*/ int32_t sub_578DE0();  // -------------------  /* auto */
/*00578E40*/ void sub_578E40();  // ----------------------  /* auto */
/*00578E50*/ int32_t __cdecl sub_578E50(int32_t, int32_t);  /* auto */
/*00578E80*/ CEnginePrimitiveBase *sub_578E80();  // -----  /* auto */
/*00578EC0*/ void __cdecl CEngine2DRotatableSprite_create(__int16, __int16, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, int32_t);  /* auto */
/*00579180*/ int32_t __cdecl CEngine2DSprite_create(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, int32_t);  /* auto */
/*005794B0*/ int32_t __cdecl CEngine2DMeshSurface_create(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, int32_t);  /* auto */
/*00579730*/ CEngine2DStaticMesh *__cdecl CEngine2DStaticMesh_create(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, Vec3f *, float, int32_t, int32_t);  /* auto */
/*00579A10*/ CEngine2DAnimMesh *__cdecl CEngine2DAnimMesh_create(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, int32_t, int32_t);  /* auto */
/*00579CF0*/ CEngineVirtualPerspective2DAnimMesh *__cdecl CEngineVirtualPerspective2DAnimMesh_create(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, int32_t, int32_t);  /* auto */
/*0057BBE0*/ int32_t sub_57BBE0();  // -------------------  /* auto */
/*0057C270*/ int32_t MyEntryBuf_MyScaledSurface_static_init();  /* auto */
/*0057C290*/ int32_t MyStringHashMap_MyScaledSurface_static_constructor();  /* auto */
/*0057C2B0*/ void __cdecl MyStringHashMap_MyScaledSurface_static_destructor();  /* auto */
/*0057C780*/ MyScaledSurface *__cdecl MyEntryBuf_MyScaledSurface_getByIdx(int32_t);  /* auto */
/*0057C7B0*/ int32_t MyEntryBuf_MyScaledSurface_static_alloc();  /* auto */
/*0057C7E0*/ void sub_57C7E0();  // ----------------------  /* auto */
/*0057C850*/ int32_t __cdecl MyEntryBuf_MyScaledSurface_create(MyDblNamedSurface *, char);  /* auto */
/*0057C920*/ MyCESurfHandle *__cdecl CPCEngineInterface_57C920(int32_t, MySurface *, char);  /* auto */
/*0057C950*/ void __cdecl MyScaledSurface_resolveById(int16_t);  /* auto */
/*0057C970*/ MyScaledSurface *__cdecl MyDblNamedSurface_createPrescaled(int32_t, int32_t, int32_t);  /* auto */
/*0057CBE0*/ int32_t __cdecl MyHeap_static_init(int32_t);   /* auto */
/*0057CCF0*/ int32_t MyHeap_static_destroy();  // --------  /* auto */
/*0057CD30*/ int32_t __cdecl MyHeap_alloc_impl(int32_t);    /* auto */
/*0057CEB0*/ const void *__cdecl MyHeap_alloc(int32_t);     /* auto */
/*0057D0B0*/ void __cdecl MyHeap_free(const void *);  // -  /* auto */
/*0057D210*/ int32_t CMemLoadIFFFile_static_init();  // --  /* auto */
/*0057D230*/ void CMemLoadIFFFile_static_destroy();  // --  /* auto */
/*0057D270*/ CMeshResourceBase *__cdecl CMeshResourceBase_load(const char *, int32_t, int32_t);  /* auto */
/*0057D390*/ int32_t __cdecl load_martials(int32_t);  // -  /* auto */
/*0057D5B0*/ CPolyMeshResource *CMemLoadIFFFile_load_CPolyMeshResource();  /* auto */
/*0057DAC0*/ void __cdecl sub_57DAC0(int32_t);  // -------  /* auto */
/*0057DAD0*/ CAnimMeshResource *CMemLoadIFFFile_load_CAnimMeshResource();  /* auto */
/*0057E110*/ CMeshGroup *CMemLoadIFFFile_load_CMeshGroup();  /* auto */
/*0057EB60*/ int32_t ret_2_0args();  // ------------------  /* auto */
/*0057ECF0*/ int32_t MyStringHashMap_MyMeshResourceHolder_static_init();  /* auto */
/*0057ED10*/ void __cdecl MyStringHashMap_MyMeshResourceHolder_static_destroy();  /* auto */
/*0057ED30*/ CMeshResourceBase *__cdecl MyMeshResourceHolder_getResource(MyMeshResourceHolder *);  /* auto */
/*0057EDE0*/ int32_t cleanup_57EDE0();  // ---------------  /* auto */
/*0057EED0*/ int32_t sub_57EED0();  // -------------------  /* auto */
/*0057EEF0*/ int32_t MyStringHashMap_MyMeshResourceHolder_cleanup();  /* auto */
/*0057EF30*/ int32_t __cdecl MyMeshResourceHolder_getOrCreate(const char *, char, int32_t, int32_t);  /* auto */
/*0057F010*/ void sub_57F010();  // ----------------------  /* auto */
/*0057F020*/ void nullsub_32();  // ----------------------  /* auto */
/*0057F030*/ int32_t __cdecl sub_57F030(MyScaledSurface *, float, float);  /* auto */
/*0057F090*/ int32_t *transformFlags(__int16, int32_t *, int32_t *);  /* auto */
/*0057F1C0*/ int32_t CEngineWorldPrimitive_fun_57F1C0(int32_t, int32_t, int32_t, int32_t *, int32_t);  /* auto */
/*00580470*/ void ret_void_2args(int32_t, int32_t);  // --  /* auto */
/*00586A70*/ void __cdecl static_appendToSceneObject2EList(int32_t, int32_t, int32_t, __int16, int32_t, __int16, char);  /* auto */
/*00588AE0*/ int32_t mymgsr_vertices_Static_destructor();   /* auto */
/*00588B00*/ int32_t my_indicies_static_destroy();  // ---  /* auto */
/*00588B20*/ int32_t sub_588B20();  // -------------------  /* auto */
/*00588B40*/ int32_t MyEntryBuf_Triangle34_static_destroy();  /* auto */
/*00588B60*/ Triangle34 *__cdecl Triangle34_add(int32_t);   /* auto */
/*00588C40*/ int32_t __cdecl MyEntryBuf_Triangle24_add(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00588D00*/ int32_t draw_tex_to_buf_impl2();  // --------  /* auto */
/*00588F90*/ int32_t draw_tex_to_buf_impl1();  // --------  /* auto */
/*00589140*/ MyCESurfHandle *__cdecl MyCESurfHandle_static_addToHashList_flagsOr400(MyCESurfHandle *, __int16);  /* auto */
/*00589160*/ int32_t __cdecl mgsr_setDrawFun(int32_t);      /* auto */
/*00589250*/ HRESULT __cdecl DirectDraw_prepareTexture(int32_t);  /* auto */
/*005898F0*/ int32_t *draw_tex_to_buf();  // -------------  /* auto */
/*00589910*/ void mydd_triangles_destroy();  // ----------  /* auto */
/*005899F0*/ Triangle24 *__cdecl mydd_triangles_init(MyDirectDraw *);  /* auto */
/*00589C90*/ int32_t __cdecl sub_589C90(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00589D70*/ int32_t sub_589D70();  // -------------------  /* auto */
/*00589D90*/ void __cdecl addObjectToScene(SceneObject30 *);  /* auto */
/*0058A000*/ HRESULT __cdecl DrawTriangleList(int32_t, int32_t, int32_t);  /* auto */
/*0058A150*/ void drawTexToSurfTriangles();  // ----------  /* auto */
/*0058A3B0*/ char sub_58A3B0();  // ----------------------  /* auto */
/*0058A480*/ void nullsub_33();  // ----------------------  /* auto */
/*0058A490*/ void nullsub_34();  // ----------------------  /* auto */
/*0058A4A0*/ void nullsub_35();  // ----------------------  /* auto */
/*0058A4B0*/ void nullsub_36();  // ----------------------  /* auto */
/*0058A4C0*/ void nullsub_37();  // ----------------------  /* auto */
/*0058A4D0*/ void nullsub_38();  // ----------------------  /* auto */
/*0058A4E0*/ void nullsub_39();  // ----------------------  /* auto */
/*0058A4F0*/ int32_t __cdecl sub_58A4F0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0058A520*/ Uv2f_arr1024 *__cdecl mydd_uvs_init(MyDirectDraw *);  /* auto */
/*0058A550*/ void mydd_flags_destroy();  // --------------  /* auto */
/*0058A570*/ void __cdecl sub_58A570(int32_t, float, float, float, float, int32_t);  /* auto */
/*0058A6F0*/ int32_t __cdecl sub_58A6F0(int32_t *);  // --  /* auto */
/*0058A970*/ char __cdecl __renderFun_setSceneObject2E(SceneObject2E *, int32_t, int32_t, int32_t, float, int32_t);  /* auto */
/*0058AC20*/ int32_t *applyIndxs_sub_58AC20();  // -------  /* auto */
/*0058ACB0*/ int32_t __cdecl sub_58ACB0(int32_t, Vec3f *);  /* auto */
/*0058AD10*/ int32_t __cdecl sub_58AD10(int32_t, Vec3f *);  /* auto */
/*0058AD70*/ int32_t __cdecl sub_58AD70(int32_t, const float *);  /* auto */
/*0058ADC0*/ int32_t __cdecl RenderData_addToArr(int32_t, Vec3f *);  /* auto */
/*0058AF70*/ int32_t __cdecl sub_58AF70(int32_t, int32_t *);  /* auto */
/*0058B190*/ int32_t __cdecl sub_58B190(int32_t, Vec3f *);  /* auto */
/*0058B2A0*/ int8_t __cdecl renderFun_sub_58B2A0(int32_t, Vec3f *, Uv2f *);  /* auto */
/*0058B370*/ int8_t __cdecl renderFun_sub_58B370(int32_t, Vec3f *, Uv2f *);  /* auto */
/*0058B440*/ char __cdecl renderFun_sub_58B440(int32_t, Vec3f *, Uv2f *);  /* auto */
/*0058B680*/ char __cdecl renderFun_sub_58B680(int32_t, Vec3f *, Uv2f *);  /* auto */
/*0058B940*/ void __cdecl addTriangleToRender2(int32_t, int32_t, int32_t);  /* auto */
/*0058B9D0*/ void __cdecl addTriangleToRender1(int32_t, int32_t, int32_t);  /* auto */
/*0058BB60*/ int32_t __cdecl adjustAndAddToRender_sub_58BB60(Idx3b *);  /* auto */
/*0058C450*/ int32_t __cdecl applyScale_sub_58C450(int32_t, int32_t);  /* auto */
/*0058C680*/ int32_t __cdecl applyScale_sub_58C680(int32_t, int32_t);  /* auto */
/*0058C890*/ int32_t __cdecl applyScale_sub_58C890(int32_t, int32_t);  /* auto */
/*0058CA80*/ int32_t __cdecl applyScale_sub_58CA80(int32_t, int32_t);  /* auto */
/*0058CC40*/ int32_t __cdecl adjustAndAddToRender_sub_58CC40(Idx3b *);  /* auto */
/*0058D580*/ int32_t __cdecl applyScale_sub_58D580(int32_t, int32_t);  /* auto */
/*0058D790*/ int32_t __cdecl applyScale_sub_58D790(int32_t, int32_t);  /* auto */
/*0058D990*/ int32_t __cdecl applyScale_sub_58D990(int32_t, int32_t);  /* auto */
/*0058DB70*/ int32_t __cdecl applyScale_sub_58DB70(int32_t, int32_t);  /* auto */
/*0058DD40*/ int32_t *sub_58DD40();  // ------------------  /* auto */
/*0058E080*/ int32_t __cdecl sub_58E080(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0058E2C0*/ int32_t __cdecl MyEntryBuf_MyScaledSurface_addFormatEnfineShadow(const char *, int32_t);  /* auto */
/*0058E330*/ int32_t shadows_init();  // -----------------  /* auto */
/*0058E3E0*/ int32_t sub_58E3E0();  // -------------------  /* auto */
/*0058E440*/ int32_t __cdecl sub_58E440(int32_t);  // ----  /* auto */
/*0058E470*/ MyCESurfHandle *sub_58E470();  // -----------  /* auto */
/*0058E580*/ void __cdecl sub_58E580(int32_t);  // -------  /* auto */
/*0058E640*/ void __cdecl sub_58E640(SceneObject2E *, int32_t, float, int32_t, int32_t, float, int32_t);  /* auto */
/*0058EE40*/ void nullsub_40();  // ----------------------  /* auto */
/*0058EE50*/ void nullsub_41();  // ----------------------  /* auto */
/*0058EE60*/ int32_t sub_58EE60();  // -------------------  /* auto */
/*0058F480*/ const float *sub_58F480();  // --------------  /* auto */
/*0058F510*/ int32_t SceneObject2EList_static_destructor();  /* auto */
/*0058F530*/ int32_t objects30ToDraw_static_destructor();   /* auto */
/*0058F550*/ SceneObject30 *SceneObject2EList_SceneObject30List_static_init();  /* auto */
/*0058F5F0*/ void SceneObject2EList_SceneObject30List_static_destroy();  /* auto */
/*0058F640*/ void draw3dScene();  // ---------------------  /* auto */
/*0058F980*/ int32_t *sub_58F980();  // ------------------  /* auto */
/*0058F9E0*/ int32_t MyStringHashMap_MyCESurfHandle_static_constructor();  /* auto */
/*0058FA00*/ void __cdecl MyStringHashMap_MyCESurfHandle_static_destructor();  /* auto */
/*0058FA20*/ int32_t MyTextures_static_constructor();       /* auto */
/*0058FA40*/ void __cdecl MyTextures_static_destructor();   /* auto */
/*0058FAF0*/ void nullsub_42();  // ----------------------  /* auto */
/*0058FB00*/ MySurface *__cdecl MySurface_58FB00(MySurface *, MySurface *);  /* auto */
/*0058FCB0*/ MySurface *__cdecl MySurface_58FCB0(MySurface *, MySurface *);  /* auto */
/*0058FE80*/ MySurface *__cdecl MySurface_58FE80(MySurface *, MySurface *);  /* auto */
/*0058FF70*/ int32_t __cdecl MySurface_58FF70(MySurface *, MySurface *);  /* auto */
/*00590000*/ MySurface *__cdecl MySurface_590000(MySurface *, MySurface *);  /* auto */
/*00590240*/ int32_t __cdecl sub_590240(int32_t);  // ----  /* auto */
/*005915A0*/ int32_t __cdecl sub_5915A0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00591DA0*/ SurfaceHolder *__cdecl SurfaceHolder_create(int32_t, MyCEngineSurfDesc *, int32_t);  /* auto */
/*00591FF0*/ const void *__cdecl SurfaceHolder_draw();  // assembly  /* auto */
/*005924A0*/ int32_t __cdecl MySurfaceWrapper_createPrescaled(MySurfaceWrapper *, char);  /* auto */
/*00592720*/ const char *__cdecl MyTextures_resetCacheDir(const char *);  /* auto */
/*00592950*/ void destroySurfHashLists();  // ------------  /* auto */
/*00592B80*/ const void *__cdecl SurfaceHolder_setTexture(SurfaceHolder *, int32_t);  /* auto */
/*00592EA0*/ int32_t __cdecl mydd_cpy3_initSurfHashLists(MyDirectDraw *);  /* auto */
/*00593280*/ int32_t surfaces_cleanup();  // -------------  /* auto */
/*00593350*/ int32_t D3DENUMPIXELFORMATSCALLBACK_proc(DDPIXELFORMAT *, int32_t);  /* auto */
/*005934C0*/ int32_t MyCESurfHandle_cleanup();  // -------  /* auto */
/*00593640*/ SurfaceHolder *__cdecl sub_593640(int32_t, int32_t, float, int32_t, float);  /* auto */
/*00593720*/ MyCESurfHandle *__cdecl MyCESurfHandle_static_addToHashList(MyCESurfHandle *, char);  /* auto */
/*00593F20*/ int32_t __probablySortSurfListX3_593F20();     /* auto */
/*00594BA0*/ const char *__cdecl MyCESurfHandle_getName(MyCESurfHandle *);  /* auto */
/*00594C70*/ bool __cdecl MyTextures_hasTexture(const char *);  /* auto */
/*00595990*/ int32_t sub_595990(int32_t, int32_t, int32_t, int16_t, int16_t, int32_t, int32_t);  /* auto */
/*005974A0*/ int32_t __fastcall FloatObjThing_init_retGammaRampRes(FloatObjThing *, float);  /* auto */
/*00598080*/ void __cfltcvt_init_6();  // ----------------  /* auto */
/*005981F0*/ void __cfltcvt_init_7();  // ----------------  /* auto */
/*00598270*/ int32_t sub_598270();  // -------------------  /* auto */
/*00598290*/ void __cdecl CPCEngineInterface_destructor2();  /* auto */
/*005986D0*/ BOOL CPCEngineInterface_fun_5986D0(int32_t);   /* auto */
/*00598800*/ int32_t CPCEngineInterface_fun_598800(__int16 *);  /* auto */
/*005998C0*/ int32_t CPCEngineInterface_fun_5998C0(float, float, int32_t);  /* auto */
/*00599C00*/ void __cdecl sub_599C00(int32_t);  // -------  /* auto */
/*0059A3C0*/ int32_t __cdecl hasTexture(const char *, const char *, char);  /* auto */
/*0059A4B0*/ MySurface *__cdecl MyResources_loadPng(const char *);  /* auto */
/*0059A500*/ int32_t __cdecl CBridge_static_getMeshBuf(const char *);  /* auto */
/*0059A570*/ BOOL __cdecl sub_59A570(int32_t, int32_t, int32_t *);  /* auto */
/*0059A5C0*/ int32_t __cdecl sub_59A5C0(int32_t, int32_t);  /* auto */
/*0059A5E0*/ void __cdecl sub_59A5E0(int32_t, int32_t);     /* auto */
/*0059A600*/ int32_t __cdecl sub_59A600(int32_t, int32_t, int32_t);  /* auto */
/*0059A630*/ int32_t __cdecl sub_59A630(int32_t, int32_t, int32_t);  /* auto */
/*0059ACA0*/ int32_t sub_59ACA0();  // -------------------  /* auto */
/*0059AD80*/ int32_t ScreenObjectArr_static_renderItems();  /* auto */
/*0059B0B0*/ void __cdecl nullsub_19();  // --------------  /* auto */
/*0059BB80*/ char sub_59BB80(int32_t, const float *, int16_t *, int32_t);  /* auto */
/*0059C010*/ void ret_void_6args(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0059C020*/ BOOL sub_59C020(const char *, const char **, int32_t *);  /* auto */
/*0059C0D0*/ int32_t CPCEngineInterface_fun_59C0D0(int32_t *);  /* auto */
/*0059C2A0*/ const float *__cdecl sub_59C2A0(int32_t, int32_t *, int32_t *, const float *, const float *);  /* auto */
/*0059C360*/ CEngineSprite *sub_59C360(float, int32_t, float, int32_t, int32_t);  /* auto */
/*0059C720*/ CEngineQuadPlane *sub_59C720(int32_t, const float *, int32_t);  /* auto */
/*0059D010*/ CEngineDynamicMesh *sub_59D010(int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*0059D4B0*/ int32_t sub_59D4B0(int32_t, int32_t *, int32_t *);  /* auto */
/*0059D5F0*/ int32_t __cdecl sub_59D5F0(int32_t, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);  /* auto */
/*0059D8D0*/ IDirectDraw4 *__cdecl CPCEngineInterface_WM_ACTIVATE_cb(int32_t, int32_t, int32_t, CPCEngineInterface *);  /* auto */
/*0059DAD0*/ int32_t __cdecl sub_59DAD0(int32_t, int32_t, int32_t, int32_t, int32_t, float, float, float);  /* auto */
/*0059DB70*/ int32_t __cdecl sub_59DB70(int32_t, float, float, float, float, float, float);  /* auto */
/*0059DBD0*/ int32_t __cdecl sub_59DBD0(int32_t, float, float, float);  /* auto */
/*0059DCA0*/ int32_t __cdecl sub_59DCA0(int32_t, int32_t, float, float, float);  /* auto */
/*0059DD30*/ int32_t __cdecl sub_59DD30(float, float, float, float, float, float, float, int32_t, int32_t, int32_t);  /* auto */
/*0059E210*/ int32_t __cdecl sub_59E210(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0059E3A0*/ int32_t *__cdecl sub_59E3A0(int32_t *, int32_t, int32_t);  /* auto */
/*0059E400*/ int32_t __cdecl sub_59E400(int32_t, int32_t, int32_t);  /* auto */
/*0059E480*/ int32_t __cdecl sub_59E480(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0059E670*/ int32_t __cdecl sub_59E670(int32_t, int32_t, int32_t);  /* auto */
/*0059E700*/ int32_t __cdecl sub_59E700(int32_t, float, float, int32_t, int32_t);  /* auto */
/*0059E750*/ int32_t __cdecl ProceduralMesh_cpp_59E750(int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*0059EC90*/ int32_t __cdecl sub_59EC90(int32_t, float, float, int32_t, int32_t);  /* auto */
/*0059ECF0*/ int32_t __cdecl sub_59ECF0(int32_t *, int32_t, int32_t);  /* auto */
/*0059ED80*/ int32_t __cdecl ProceduralMesh_cpp_59ED80(int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*0059F2F0*/ int32_t __cdecl sub_59F2F0(int32_t, float, float, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0059F3C0*/ const float *__cdecl sub_59F3C0(int32_t, float, float, float);  /* auto */
/*0059F4B0*/ const float *__cdecl sub_59F4B0(const float *, int32_t *, const float *);  /* auto */
/*0059F760*/ int32_t sub_59F760();  // -------------------  /* auto */
/*0059F940*/ void __cdecl sub_59F940(const float *, const float *, const float *);  /* auto */
/*0059FBE0*/ int32_t __cdecl sub_59FBE0(int32_t);  // ----  /* auto */
/*0059FDD0*/ int32_t __cdecl sub_59FDD0(int32_t);  // ----  /* auto */
/*005A0030*/ int32_t *__cdecl sub_5A0030(float, float, float, float, float, float);  /* auto */
/*005A1070*/ int32_t __cdecl sub_5A1070(int32_t *, int32_t *, int32_t, int32_t);  /* auto */
/*005A18A0*/ int32_t __cdecl sub_5A18A0(int32_t, const float *, int32_t, int32_t);  /* auto */
/*005A3220*/ const float *__cdecl sub_5A3220(int32_t, float, float, float);  /* auto */
/*005A37F0*/ const float *__cdecl sub_5A37F0(const float *, int32_t *, const float *);  /* auto */
/*005A4730*/ int32_t __cdecl mpeg2__putpict(int32_t, int8_t *, int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005A4E20*/ int32_t *__cdecl sub_5A4E20(const float *, int32_t);  /* auto */
/*005A53F0*/ const float *__cdecl sub_5A53F0(const float *, const float *);  /* auto */
/*005A55A0*/ const float *__cdecl sub_5A55A0(const float *, const float *);  /* auto */
/*005A5730*/ const float *__cdecl sub_5A5730(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005A58A0*/ int32_t __cdecl mpeg2_putbits(int32_t, int32_t);  /* auto */
/*005A5980*/ int32_t __cdecl mpeg2_putintrablk(int32_t *, int32_t, int8_t *);  /* auto */
/*005A5DA0*/ int32_t __cdecl dk2_main(int32_t, const char **);  /* auto */
/*005A63B0*/ int32_t __cdecl parse_command_line(int32_t, const char **);  /* auto */
/*005A6CD0*/ int32_t __cdecl drawToSurface_mgsr(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char, int32_t);  /* auto */
/*005A7100*/ int32_t __cdecl drawToSurface32bit(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int16_t *, int32_t, char, __int64);  /* auto */
/*005A7210*/ void __cdecl render_clearBuffers(int32_t, int32_t, int32_t *, int32_t, int16_t *, int32_t);  /* auto */
/*005A7270*/ int32_t __cdecl drawTriangle34_impl4(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005A73F0*/ int32_t __cdecl drawTriangle34_impl2(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005A74B0*/ int32_t __cdecl drawTriangle34_impl1(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005A7550*/ int32_t __cdecl drawTriangle34_impl3(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005A7600*/ const void *__cdecl init_mgsr(int32_t *, int32_t *, int32_t, int32_t);  /* auto */
/*005A78E0*/ int32_t __cdecl sub_5A78E0(int32_t);  // ----  /* auto */
/*005A7900*/ int32_t __cdecl sub_5A7900(int32_t);  // ----  /* auto */
/*005A7920*/ int32_t mgsr_initBuffers();  // -------------  /* auto */
/*005A7980*/ const void *__cdecl mgsr_alloc_buf(int32_t, int32_t);  /* auto */
/*005A79C0*/ const char *__cdecl mgsr_alloc_buf2(int32_t, int32_t);  /* auto */
/*005A7A00*/ void release_mgsr();  // --------------------  /* auto */
/*005A7A20*/ void mgsr_free_buf();  // -------------------  /* auto */
/*005A7A50*/ void mgsr_free_buf2();  // ------------------  /* auto */
/*005A7A80*/ int32_t __cdecl sub_5A7A80(const char *, int32_t, int32_t);  /* auto */
/*005A7B10*/ int32_t __fastcall sub_5A7B10(const char *, int32_t *);  /* auto */
/*005A82D0*/ int32_t __fastcall sub_5A82D0(int32_t, int32_t, int32_t);  /* auto */
/*005A83B0*/ int32_t __fastcall sub_5A83B0(int32_t *, int32_t);  /* auto */
/*005A8430*/ int32_t __fastcall sub_5A8430(int32_t *, int32_t);  /* auto */
/*005A87F0*/ int32_t __fastcall sub_5A87F0(int32_t *, int32_t);  /* auto */
/*005A8980*/ int32_t __cdecl sub_5A8980(int32_t ***);       /* auto */
/*005A8A60*/ int32_t __cdecl sub_5A8A60(const void *);      /* auto */
/*005A8AE0*/ void __cdecl StartAddress(const void *);       /* auto */
/*005A8F60*/ int32_t sub_5A8F60();  // -------------------  /* auto */
/*005A8F70*/ const void *__cdecl sub_5A8F70(const char *, int32_t, int32_t);  /* auto */
/*005A8FB0*/ BOOL __cdecl sub_5A8FB0(int32_t *);  // -----  /* auto */
/*005A8FF0*/ int32_t __cdecl sub_5A8FF0(int32_t);  // ----  /* auto */
/*005A94C0*/ int32_t __fastcall sub_5A94C0(int32_t *, int32_t);  /* auto */
/*005A95B0*/ int32_t __fastcall sub_5A95B0(int32_t, int32_t *);  /* auto */
/*005A9660*/ int32_t __fastcall sub_5A9660(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005A97C0*/ int32_t __fastcall sub_5A97C0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, char, char, char);  /* auto */
/*005A9AE0*/ int32_t __fastcall sub_5A9AE0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005A9C60*/ void __fastcall sub_5A9C60(int32_t, int32_t *, int32_t *);  /* auto */
/*005A9D20*/ int32_t __fastcall sub_5A9D20(int32_t);  // -  /* auto */
/*005A9D40*/ int32_t __fastcall sub_5A9D40(int32_t);  // -  /* auto */
/*005A9DA0*/ int32_t __fastcall sub_5A9DA0(int32_t, int32_t);  /* auto */
/*005AA2E0*/ int32_t __fastcall sub_5AA2E0(int32_t *, __int16 *);  /* auto */
/*005AA520*/ int32_t __fastcall sub_5AA520(int32_t *, int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*005AA670*/ int32_t **__fastcall sub_5AA670(int32_t *, int32_t);  /* auto */
/*005AAA50*/ int32_t __cdecl sub_5AAA50(int32_t);  // ----  /* auto */
/*005AAB10*/ int32_t __cdecl sub_5AAB10(int32_t *, int32_t);  /* auto */
/*005AAC80*/ int32_t __fastcall sub_5AAC80(int32_t *, const char *, int32_t, int32_t, int32_t);  /* auto */
/*005AAD90*/ const void *__cdecl sub_5AAD90();  // assembly  /* auto */
/*005AAF90*/ int32_t __fastcall sub_5AAF90(int32_t *, const char *, int32_t, int32_t, int32_t);  /* auto */
/*005AB0A0*/ int32_t __cdecl sub_5AB0A0(char, char, char, char, char, char, const char *, int32_t);  /* auto */
/*005AB250*/ int32_t __fastcall sub_5AB250(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005AB2F0*/ int32_t __fastcall sub_5AB2F0(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005AB390*/ int32_t __fastcall sub_5AB390(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005AB700*/ int32_t __fastcall sub_5AB700(int32_t *, int32_t *, int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*005AB8F0*/ int32_t __fastcall sub_5AB8F0(int32_t *, int32_t **, int32_t, int32_t, int32_t);  /* auto */
/*005ABAE0*/ int32_t *__cdecl sub_5ABAE0(int32_t, int32_t *, int32_t *, int32_t *, int32_t, int16_t **);  /* auto */
/*005ABC60*/ int32_t __cdecl sub_5ABC60(int32_t, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *, int32_t, int16_t **);  /* auto */
/*005ABEF0*/ void __cdecl sub_5ABEF0(const void *);  // --  /* auto */
/*005ABF70*/ int32_t __fastcall sub_5ABF70(int32_t *, int32_t);  /* auto */
/*005AC360*/ HRESULT __fastcall sub_5AC360(IDirectSound **, HWND__ *);  /* auto */
/*005AC660*/ void __cdecl sub_5AC660(int32_t, int8_t *, int16_t *, int32_t, int32_t *, int32_t *);  /* auto */
/*005AC703*/ void __cdecl sub_5AC703(int8_t *, int32_t, int32_t, int32_t *, int32_t *);  /* auto */
/*005AC8B0*/ int32_t sub_5AC8B0();  // -------------------  /* auto */
/*005ACA50*/ const void *__cdecl sub_5ACA50();  // assembly  /* auto */
/*005ACD39*/ const void *__cdecl sub_5ACD39();  // assembly  /* auto */
/*005ACFC4*/ const void *__cdecl sub_5ACFC4();  // assembly  /* auto */
/*005AD25F*/ int32_t __cdecl sub_5AD25F(int8_t *, int32_t *, int32_t);  /* auto */
/*005ADA3E*/ int32_t __cdecl sub_5ADA3E(int8_t *, int16_t *, int32_t);  /* auto */
/*005AE220*/ const void *__cdecl fun_5AE220_no_stack_no_return();  // assembly  /* auto */
/*005AE509*/ const void *__cdecl sub_5AE509();  // assembly  /* auto */
/*005AE9FF*/ int32_t __cdecl sub_5AE9FF(int32_t, int32_t, int32_t *);  /* auto */
/*005AEBED*/ int32_t __cdecl sub_5AEBED(int32_t, int32_t, int32_t *);  /* auto */
/*005AEDDB*/ int32_t __cdecl sub_5AEDDB(int32_t, int32_t, int32_t);  /* auto */
/*005AEFC9*/ int32_t __cdecl sub_5AEFC9(int16_t *, int32_t, int32_t *);  /* auto */
/*005AF310*/ const void *__cdecl sub_5AF310();  // assembly  /* auto */
/*005AF7E0*/ const void *__cdecl sub_5AF7E0();  // assembly  /* auto */
/*005AFCE0*/ const void *__cdecl sub_5AFCE0();  // assembly  /* auto */
/*005AFEC8*/ const void *__cdecl sub_5AFEC8();  // assembly  /* auto */
/*005AFF0C*/ int32_t __cdecl sub_5AFF0C(int32_t *, int32_t *, int32_t);  /* auto */
/*005B0020*/ const void *__cdecl sub_5B0020();  // assembly  /* auto */
/*005B00AC*/ int32_t __cdecl sub_5B00AC(int32_t *, int32_t *, int32_t, int32_t);  /* auto */
/*005B018C*/ const void *__cdecl sub_5B018C();  // assembly  /* auto */
/*005B02CB*/ const void *__cdecl sub_5B02CB();  // assembly  /* auto */
/*005B03B5*/ const void *__cdecl sub_5B03B5();  // assembly  /* auto */
/*005B04C0*/ int8_t *__fastcall sub_5B04C0(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B05A0*/ int8_t *__fastcall sub_5B05A0(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B0610*/ int32_t __fastcall sub_5B0610(int16_t *, int32_t, int32_t);  /* auto */
/*005B06D0*/ int32_t sub_5B06D0();  // -------------------  /* auto */
/*005B0890*/ int32_t __fastcall sub_5B0890(int32_t, int32_t *, int32_t);  /* auto */
/*005B0B00*/ int32_t __fastcall sub_5B0B00(int32_t);  // -  /* auto */
/*005B0B60*/ int32_t sub_5B0B60();  // -------------------  /* auto */
/*005B0B90*/ int32_t __fastcall sub_5B0B90(int32_t *, int32_t);  /* auto */
/*005B0BF0*/ int32_t __fastcall sub_5B0BF0(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B0D60*/ int32_t __fastcall sub_5B0D60(int32_t, int32_t *);  /* auto */
/*005B1090*/ int32_t __fastcall sub_5B1090(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B1110*/ void __fastcall sub_5B1110(int32_t, int8_t *, int32_t);  /* auto */
/*005B1220*/ int32_t __fastcall sub_5B1220(const void **, int32_t);  /* auto */
/*005B1380*/ int32_t __fastcall sub_5B1380(int32_t *);      /* auto */
/*005B1430*/ const void *__cdecl sub_5B1430();  // assembly  /* auto */
/*005B1650*/ int32_t sub_5B1650();  // -------------------  /* auto */
/*005B17FD*/ int32_t __cdecl sub_5B17FD(int8_t *, int8_t *, int32_t *, int32_t);  /* auto */
/*005B1906*/ const void *__cdecl sub_5B1906();  // assembly  /* auto */
/*005B1B11*/ const void *__cdecl sub_5B1B11();  // assembly  /* auto */
/*005B1C74*/ const void *__cdecl sub_5B1C74();  // assembly  /* auto */
/*005B1D7E*/ int32_t __cdecl sub_5B1D7E(int32_t, int32_t);  /* auto */
/*005B1F5C*/ void __cdecl sub_5B1F5C(int16_t *, const char *, int32_t);  /* auto */
/*005B207F*/ int32_t __cdecl sub_5B207F(int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*005B2128*/ void __cdecl sub_5B2128(int32_t *, int32_t, int32_t *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B21E0*/ int32_t tqi_5B21E0();  // -------------------  /* auto */
/*005B2450*/ int32_t __cdecl tqia_init(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B26F0*/ int32_t __cdecl tqia_decompressJpeg(int8_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B29F0*/ HRESULT DirectDrawEnumerateA(BOOL (__stdcall *)(GUID *, const char *, const char *, const void *), const void *);  /* auto */
/*005B29F6*/ HRESULT DirectDrawCreate(GUID *, IDirectDraw **, IUnknown *);  /* auto */
/*005B2A00*/ int32_t MyInputManagerCb_static_init();  // -  /* auto */
/*005B2A10*/ MyInputManagerCb *MyInputManagerCb_static_constructor();  /* auto */
/*005B2A30*/ void __cdecl MyInputManagerCb_static_destroy();  /* auto */
/*005B2A40*/ int32_t __cdecl MyInputManager_static_getKeyState(int32_t);  /* auto */
/*005B2A50*/ int32_t MyInputManagerCb_static_buildControlFlags();  /* auto */
/*005B2AE0*/ int32_t __cdecl MyInputManagerCb_static_processInputs_setStaticListenersAndHandleDxActions(StaticListeners *, int32_t, CComponent *, int32_t);  /* auto */
/*005B2B10*/ int32_t unknown_libname_42();  // -----------  /* auto */
/*005B2B20*/ int32_t __cdecl MyInputManagerCb_static_initKeyInputs(int32_t);  /* auto */
/*005B2B60*/ int32_t __cdecl MyInputManagerCb_static_initCursorInputs(int32_t);  /* auto */
/*005B2BA0*/ Pos2i *MyMouse_static_getPos();  // ---------  /* auto */
/*005B2BB0*/ Pos2i *MyInputManagerCb_static_getMouseF14();  /* auto */
/*005B2BC0*/ void __cdecl MyInputManagerCb_static_setMousePos(Pos2i *);  /* auto */
/*005B2BD0*/ int32_t __cdecl sub_5B2BD0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B2C00*/ int32_t *__cdecl MyInputManagerCb_static_updateMouse(AABB *);  /* auto */
/*005B2C10*/ void __cdecl MyInputManagerCb_static_windowMsgW(__int16, int32_t);  /* auto */
/*005B2C30*/ int32_t __cdecl MyInputManagerCb_static_popDxAction(MyCollectDxAction_Action *);  /* auto */
/*005B2C40*/ int32_t *__cdecl MyInputManagerCb_static__(int32_t);  /* auto */
/*005B2C50*/ int32_t *__cdecl MyInputManagerCb_static_setEnabled(int32_t);  /* auto */
/*005B2C60*/ char __cdecl sub_5B2C60(int32_t);  // -------  /* auto */
/*005B2D10*/ BOOL TbWType_fun_5B2D10(int32_t);  // -------  /* auto */
/*005B2D80*/ int32_t __cdecl sub_5B2D80(int32_t);  // ----  /* auto */
/*005B2D90*/ HINSTANCE__ *getHInstance();  // ------------  /* auto */
/*005B2DA0*/ int32_t __cdecl setHInstance(int32_t);  // --  /* auto */
/*005B2DB0*/ HWND__ *getHWindow();  // -------------------  /* auto */
/*005B2DC0*/ HWND__ *__cdecl setHWindow(HWND__ *);  // ---  /* auto */
/*005B2DD0*/ BOOL process_win_inputs();  // --------------  /* auto */
/*005B2E40*/ int32_t isAppExitStatusSet();  // -----------  /* auto */
/*005B2E50*/ void __cdecl setAppExitStatus(int32_t);  // -  /* auto */
/*005B2E60*/ int32_t __cdecl setCustomDefWindowProcA(int32_t);  /* auto */
/*005B2E70*/ int32_t __cdecl getCustomDefWindowProcA();     /* auto */
/*005B2E80*/ int32_t *__cdecl sub_5B2E80(int32_t *, __int16);  /* auto */
/*005B2EA0*/ int32_t *__cdecl sub_5B2EA0(int32_t *, const char *);  /* auto */
/*005B2ED0*/ __int16 getLibIconName();  // ---------------  /* auto */
/*005B2EE0*/ const char *get_Bullgrog_str();  // ---------  /* auto */
/*005B2EF0*/ HDC__ *__cdecl sub_5B2EF0(int32_t *);  // ---  /* auto */
/*005B2F40*/ int32_t sub_5B2F40();  // -------------------  /* auto */
/*005B2F50*/ int32_t sub_5B2F50();  // -------------------  /* auto */
/*005B2F70*/ int32_t sub_5B2F70();  // -------------------  /* auto */
/*005B2F80*/ int32_t sub_5B2F80();  // -------------------  /* auto */
/*005B2FA0*/ int32_t sub_5B2FA0();  // -------------------  /* auto */
/*005B2FB0*/ int32_t sub_5B2FB0();  // -------------------  /* auto */
/*005B3000*/ void j_My8BitTexture_static_init();  // -----  /* auto */
/*005B3010*/ void My8BitTexture_static_init();  // -------  /* auto */
/*005B3020*/ void j_My16BitTexture_static_init();  // ----  /* auto */
/*005B3030*/ void My16BitTexture_static_init();  // ------  /* auto */
/*005B3050*/ void sub_5B3050();  // ----------------------  /* auto */
/*005B3060*/ void j_My32BitTexture_static_init();  // ----  /* auto */
/*005B3070*/ void My32BitTexture_static_init();  // ------  /* auto */
/*005B3080*/ BOOL __cdecl AABB_isIntersectsWithScreen(AABB *);  /* auto */
/*005B30C0*/ int32_t __cdecl sub_5B30C0(int32_t, int32_t, int32_t, char);  /* auto */
/*005B30F0*/ int32_t __cdecl sub_5B30F0(int32_t *, int32_t, char);  /* auto */
/*005B3130*/ int32_t __cdecl sub_5B3130(int32_t *, int32_t, char);  /* auto */
/*005B3170*/ int32_t __cdecl sub_5B3170(int32_t, int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B31E0*/ int32_t __cdecl sub_5B31E0(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B3250*/ int32_t __cdecl sub_5B3250(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B32C0*/ int32_t __cdecl sub_5B32C0(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B3340*/ int8_t *__cdecl MyNBitTexture_renderIfInScreen(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B33C0*/ int32_t __cdecl sub_5B33C0(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B3440*/ int32_t __cdecl sub_5B3440(int32_t, int32_t, char);  /* auto */
/*005B3490*/ int32_t __cdecl sub_5B3490(int32_t, int32_t, char);  /* auto */
/*005B34D0*/ int32_t __cdecl sub_5B34D0(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B3510*/ BOOL __cdecl MySurface_AABB_sub_5B3510(int32_t *);  /* auto */
/*005B35B0*/ BOOL __cdecl MySurface_AABB_sub_5B35B0(AABB *);  /* auto */
/*005B36F0*/ BOOL sub_5B36F0();  // ----------------------  /* auto */
/*005B3700*/ AABB *getCharRenderSurfAabb();  // ----------  /* auto */
/*005B3710*/ MySurface *__cdecl MySurface_probably_set_global_bitnes(MySurface *);  /* auto */
/*005B37F0*/ void __cdecl MyDdSurfaceEx_probably_set_global_bitnes(MyDdSurfaceEx *);  /* auto */
/*005B3900*/ int32_t __cdecl sub_5B3900(int32_t, const char *);  /* auto */
/*005B3940*/ int32_t __cdecl sub_5B3940(int32_t, const char *);  /* auto */
/*005B3980*/ int32_t *__cdecl MyDiscFile_create(int32_t *, int32_t **, const char *, int32_t);  /* auto */
/*005B3A30*/ int32_t *__cdecl sub_5B3A30(int32_t *, int32_t);  /* auto */
/*005B3A60*/ int32_t __cdecl sub_5B3A60(int32_t, int32_t);  /* auto */
/*005B3A80*/ int32_t __cdecl sub_5B3A80(int32_t);  // ----  /* auto */
/*005B3A90*/ int32_t __cdecl sub_5B3A90(int32_t, int32_t, int32_t);  /* auto */
/*005B3AB0*/ int32_t __cdecl sub_5B3AB0(int32_t, const char *, int32_t);  /* auto */
/*005B3B20*/ int32_t __cdecl sub_5B3B20(int32_t, const char *, int32_t);  /* auto */
/*005B3B80*/ int32_t __cdecl sub_5B3B80(int32_t);  // ----  /* auto */
/*005B3B90*/ const void *__cdecl sub_5B3B90(const char *);  /* auto */
/*005B3BF0*/ BOOL __cdecl fileExists(const char *);  // --  /* auto */
/*005B3C30*/ int32_t __cdecl sub_5B3C30(const char *);      /* auto */
/*005B3C80*/ int32_t __cdecl sub_5B3C80(int32_t, const char *);  /* auto */
/*005B3CE0*/ int32_t __cdecl findFile(int32_t, const char *, _WIN32_FIND_DATAA *, int32_t);  /* auto */
/*005B3DD0*/ int32_t __cdecl findNextFile(int32_t, _WIN32_FIND_DATAA *);  /* auto */
/*005B3E60*/ int32_t *__cdecl closeFindFile(int32_t *, int32_t);  /* auto */
/*005B3E80*/ int32_t __cdecl sub_5B3E80(int32_t, const char *, const char *);  /* auto */
/*005B3EB0*/ int32_t *__cdecl obj_read_file_0(int32_t *, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*005B3EE0*/ int32_t *__cdecl sub_5B3EE0(int32_t *, const void *, int32_t *, int32_t, int32_t *);  /* auto */
/*005B3F10*/ MySurface *sub_5B3F10();  // ----------------  /* auto */
/*005B3F20*/ MySurface *sub_5B3F20();  // ----------------  /* auto */
/*005B3F50*/ MySurface *j_g_dd_surface1_init();  // ------  /* auto */
/*005B3F60*/ MySurface *g_dd_surface1_static_init();  // -  /* auto */
/*005B3F90*/ MySurface *sub_5B3F90();  // ----------------  /* auto */
/*005B3FA0*/ MySurface *sub_5B3FA0();  // ----------------  /* auto */
/*005B3FD0*/ int32_t sub_5B3FD0();  // -------------------  /* auto */
/*005B3FE0*/ FPUControlWordWithState *FPUControlWord_static_init();  /* auto */
/*005B4020*/ void __cdecl FPUControlWordWithState_static_init();  /* auto */
/*005B4040*/ GUID *__cdecl setSelectedDDGuid(GUID *);       /* auto */
/*005B4050*/ IDirectDraw *__cdecl dk2dd_get(bool);  // ---  /* auto */
/*005B4070*/ void __cdecl showMessageBox(HWND__ *, const char *, const char *, int32_t);  /* auto */
/*005B40E0*/ void BullfrogWindow_destroy();  // ----------  /* auto */
/*005B4160*/ const void *dk2wndCleanup_sendEv0_5();  // --  /* auto */
/*005B4230*/ void dk2dd_destroy();  // -------------------  /* auto */
/*005B4260*/ int32_t __cdecl BullfrogWindow_create(int32_t, GUID *, int32_t, HWND__ *, int32_t);  /* auto */
/*005B4330*/ int32_t static_isNeedBlt();  // -------------  /* auto */
/*005B4340*/ void __cdecl showTodoMessageBox(const char *, ...);  /* auto */
/*005B4390*/ void __cdecl dk2dd_init(int32_t *, int32_t, int32_t, int32_t, int32_t, tagPALETTEENTRY *);  /* auto */
/*005B4AE0*/ int32_t *__cdecl dk2wnd_cleanup(int32_t *);    /* auto */
/*005B4B00*/ int32_t *__cdecl __sub_5B4B00_ev1(int32_t *, int32_t);  /* auto */
/*005B4D40*/ IDirectDrawPalette *__cdecl sub_5B4D40(tagPALETTEENTRY *, int32_t, int32_t);  /* auto */
/*005B4D80*/ const void *__cdecl sub_5B4D80(const void *, int32_t, int32_t);  /* auto */
/*005B4DE0*/ int32_t *__cdecl createDirectDrawObject(int32_t *, GUID *, IDirectDraw **);  /* auto */
/*005B4E20*/ int32_t __cdecl DdModeList_collect(int32_t, int32_t, int32_t, GUID *);  /* auto */
/*005B4F70*/ int32_t enumDDModesCallback(_DDSURFACEDESC *, DdModeList *);  /* auto */
/*005B4FC0*/ ATOM BullfrogWindow_registerClass();  // ----  /* auto */
/*005B5070*/ LRESULT BullfrogWindow_proc(HWND__ *, int32_t, WPARAM, LPARAM);  /* auto */
/*005B5160*/ HICON__ *__cdecl setAppActivatedStatus(int32_t);  /* auto */
/*005B5180*/ MyDdSurfaceEx *__cdecl MyDdSurfaceEx_setInstance(MyDdSurfaceEx *);  /* auto */
/*005B5410*/ void __cdecl setSurfaceDD(IDirectDraw *);      /* auto */
/*005B5420*/ MyDdSurface *__cdecl MyDdSurface_constructor(MyDdSurface *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B5460*/ BOOL __cdecl MyDdSurfaceEx_restoreSurf_if_unk(MyDdSurfaceEx *);  /* auto */
/*005B5490*/ int32_t *__cdecl __surface_init_blt(int32_t *, MyDdSurfaceEx *, tagRECT *, int32_t, int8_t, int32_t);  /* auto */
/*005B5700*/ int32_t *__cdecl createSurface(int32_t *, int32_t, int32_t, int32_t, MyDdSurface *);  /* auto */
/*005B57C0*/ int32_t *__cdecl MyDdSurface_release(int32_t *, MyDdSurface *);  /* auto */
/*005B57F0*/ int32_t *__cdecl static_MyDdSurfaceEx_BltWait(int32_t *, MyDdSurfaceEx *, int32_t, int32_t, MyDdSurfaceEx *, AABB *, int32_t);  /* auto */
/*005B5970*/ tagPOINT *__cdecl sub_5B5970(int32_t *, MyDdSurfaceEx *, int32_t *, int32_t, int32_t *, int32_t);  /* auto */
/*005B5BE0*/ int32_t *__cdecl MyDdSurfaceEx_resolveDesc(int32_t *, MyDdSurfaceEx *, int32_t *);  /* auto */
/*005B5C90*/ HRESULT __cdecl MyDdSurfaceEx_unlock(MyDdSurfaceEx *);  /* auto */
/*005B5CB0*/ IDirectDrawSurface *__cdecl MyDdSurface_addRef(MyDdSurface *, int32_t);  /* auto */
/*005B5CD0*/ int32_t *__cdecl sub_5B5CD0(int32_t *);  // -  /* auto */
/*005B5D20*/ int32_t *__cdecl sub_5B5D20(int32_t *);  // -  /* auto */
/*005B5E90*/ int32_t getTimeMs();  // --------------------  /* auto */
/*005B5EA0*/ int32_t __cdecl sub_5B5EA0(int32_t, int32_t, int32_t);  /* auto */
/*005B5EE0*/ const void *__cdecl TbPNGLoader_fun_5B5EE0();  // assembly  /* auto */
/*005B6030*/ const void *__cdecl TbPNGLoader_fun_5B6030();  // assembly  /* auto */
/*005B6740*/ void __cdecl sub_5B6740(int32_t *);  // -----  /* auto */
/*005B6750*/ BOOL TbPNGLoader_fun_5B6750(int32_t);  // ---  /* auto */
/*005B6790*/ char __cdecl sub_5B6790(int32_t, int8_t, int8_t, int8_t);  /* auto */
/*005B6AC0*/ int32_t sub_5B6AC0();  // -------------------  /* auto */
/*005B6B00*/ int32_t sub_5B6B00();  // -------------------  /* auto */
/*005B6B50*/ int32_t sub_5B6B50();  // -------------------  /* auto */
/*005B6E00*/ BOOL TbBMPLoader_fun_5B6E00(int32_t);  // ---  /* auto */
/*005B6FA0*/ int32_t *__cdecl MyGetLastError(int32_t *);    /* auto */
/*005B7140*/ char __cdecl setExeDirPath(const char *);      /* auto */
/*005B71A0*/ const char *getExeDir();  // ----------------  /* auto */
/*005B71C0*/ int32_t *__cdecl buildExeBasedPath(int32_t *, const char *, int32_t, const char *);  /* auto */
/*005B72E0*/ int32_t __cdecl loadFile(int32_t, const char *, int32_t, int32_t, int32_t);  /* auto */
/*005B7400*/ int32_t __cdecl __saveFile(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B74A0*/ void resolveDk2HomeDir();  // ---------------  /* auto */
/*005B7570*/ int32_t *__cdecl sub_5B7570(int32_t *, int32_t **, int32_t, int32_t);  /* auto */
/*005B75A0*/ const void *__cdecl sub_5B75A0(const void *, int32_t, size_t);  /* auto */
/*005B75F0*/ const void *__cdecl malloc_2(size_t);  // ---  /* auto */
/*005B76F0*/ BOOL _TbWickedSpriteBank_fun_5B76F0(int32_t);  /* auto */
/*005B7880*/ void __cdecl sub_5B7880(int32_t, int32_t, int8_t *, int32_t, char);  /* auto */
/*005B78F0*/ int32_t __cdecl sub_5B78F0(AABB *, int16_t *, int32_t, int32_t, char);  /* auto */
/*005B7D40*/ int32_t __cdecl sub_5B7D40(int32_t, int32_t *, int32_t);  /* auto */
/*005B7D70*/ int32_t __cdecl sub_5B7D70(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B7DA0*/ int32_t __cdecl sub_5B7DA0(int32_t, int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005B7DE0*/ int32_t __cdecl sub_5B7DE0(int32_t);  // ----  /* auto */
/*005B7E20*/ int32_t __cdecl sub_5B7E20(int32_t);  // ----  /* auto */
/*005B7E60*/ char __cdecl sub_5B7E60(int32_t, int32_t, int16_t *, int32_t, int32_t, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005B81A0*/ MySurface *__cdecl MySurface_copyFromMyDdSurf(MySurface *, MyDdSurfaceEx *);  /* auto */
/*005B81E0*/ void __cdecl sub_5B81E0(int32_t);  // -------  /* auto */
/*005B8210*/ SIZE_T getTotalPhysMemory();  // ------------  /* auto */
/*005B8230*/ int32_t *enum_drives(int32_t *, int32_t *, char);  /* auto */
/*005B83C0*/ char TbCharStringList_sub_5B83C0(int32_t, const char *);  /* auto */
/*005B8450*/ char sub_5B8450(int8_t *);  // --------------  /* auto */
/*005B8470*/ int32_t sub_5B8470(int32_t, const char *, const char *, int32_t);  /* auto */
/*005B84D0*/ int32_t unknown_libname_48();  // -----------  /* auto */
/*005B8500*/ int32_t *TbTQILoader_fun_5B8500(int32_t *, int32_t, int32_t *);  /* auto */
/*005B8AB0*/ int32_t __cdecl MyStr_format(MyStr *, int32_t, ...);  /* auto */
/*005B9270*/ int32_t __cdecl sub_5B9270(int32_t, int32_t, wchar_t);  /* auto */
/*005B97A0*/ void WinEventHandlers_static_init();  // ----  /* auto */
/*005B97B0*/ WinEventHandlers *WinEventHandlers_constructor();  /* auto */
/*005B97C0*/ int32_t sub_5B97C0();  // -------------------  /* auto */
/*005B97D0*/ void __cdecl WinEventHandlers_static_destructor();  /* auto */
/*005BA0F0*/ int32_t __cdecl sub_5BA0F0(int32_t, int32_t, const char *, int32_t);  /* auto */
/*005BA200*/ void __cdecl sub_5BA200(int32_t, int32_t, const char *, ...);  /* auto */
/*005BA420*/ int32_t *__cdecl sub_5BA420(int32_t *, int32_t *);  /* auto */
/*005BA450*/ int32_t __cdecl sub_5BA450(int32_t);  // ----  /* auto */
/*005BA460*/ BOOL __cdecl debugMsgBox(const char *);  // -  /* auto */
/*005BA4E0*/ int32_t __cdecl setDebugStringFun(int32_t (__cdecl *)(const char *));  /* auto */
/*005BA4F0*/ int32_t sub_5BA4F0();  // -------------------  /* auto */
/*005BA500*/ int32_t sub_5BA500();  // -------------------  /* auto */
/*005BA540*/ int32_t sub_5BA540();  // -------------------  /* auto */
/*005BA550*/ int32_t sub_5BA550();  // -------------------  /* auto */
/*005BAC60*/ int32_t sub_5BAC60();  // -------------------  /* auto */
/*005BAC70*/ Obj79DC68 *Obj79DC68_static_constructor();     /* auto */
/*005BAC90*/ void __cdecl Obj79DC68_static_destructor();    /* auto */
/*005BACA0*/ int32_t *MySurface_static_convertPixelType(int32_t *, MySurface *, MySurface *, int32_t);  /* auto */
/*005BB5A0*/ int32_t *__cdecl MyInputListenersHolder_create(int32_t *, MyInputListenersHolder **);  /* auto */
/*005BB800*/ int32_t *__cdecl MyDxInputState_create(int32_t *, MyDxInputState **);  /* auto */
/*005BB8A0*/ int32_t *__cdecl MyWindowMsgs_create(int32_t *, MyWindowMsgs **);  /* auto */
/*005BBA30*/ const void *__fastcall MyWindowMsgs_destructor(MyWindowMsgs *);  /* auto */
/*005BBC40*/ int32_t *__cdecl MyCollectDxAction_create(int32_t *, MyCollectDxAction **);  /* auto */
/*005BC3F0*/ MyDxDevice **DxDevice_updateCoopLevelAndSignal_ev5(int32_t *, MyDxDevice *);  /* auto */
/*005BC470*/ int32_t *__cdecl ControlKeysUpdater_create(int32_t *, ControlKeysUpdater **);  /* auto */
/*005BC540*/ int32_t *__cdecl MyMouseUpdater_create(int32_t *, MyMouseUpdater **);  /* auto */
/*005BC650*/ int32_t __fastcall MyMouseUpdater_destructor(MyMouseUpdater *);  /* auto */
/*005BC6C0*/ int32_t *__cdecl DxActionQueue_create(int32_t *, DxActionQueue **);  /* auto */
/*005BC760*/ int32_t *__cdecl MyDxMouse_create(int32_t *, MyDxMouse **);  /* auto */
/*005BC830*/ int32_t *__cdecl MyDxKeyboard_create(int32_t *, MyDxKeyboard **);  /* auto */
/*005BC910*/ int32_t sub_5BC910();  // -------------------  /* auto */
/*005BC920*/ int32_t *unknown_libname_51();  // ----------  /* auto */
/*005BC940*/ void __cdecl unknown_libname_52();  // ------  /* auto */
/*005C0740*/ char My24BitTexture_5C0740(int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005C1080*/ int8_t *My24BitTexture_5C1080(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005C1230*/ int32_t My24BitTexture_5C1230(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005C35D0*/ MySurface *My24BitTexture_f2C_5C35D0(int32_t, int32_t);  /* auto */
/*005C3650*/ char My24BitTexture_5C3650(AABB *, int32_t, int8_t);  /* auto */
/*005C3800*/ char My24BitTexture_5C3800(int32_t, int32_t, const char *, int32_t, int32_t);  /* auto */
/*005C3A00*/ int16_t My24BitTexture_5C3A00(int32_t, int32_t, int16_t *, int32_t, int32_t);  /* auto */
/*005C3C00*/ __int16 My24BitTexture_f38_5C3C00(int32_t, int32_t, const char **);  /* auto */
/*005C4490*/ __int16 My24BitTexture_5C4490(int32_t, int32_t, const char **, int32_t, int32_t);  /* auto */
/*005C4B50*/ int32_t My32BitTexture_5C4B50(int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005C53E0*/ int32_t My32BitTexture_5C53E0(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005C55E0*/ int32_t My32BitTexture_5C55E0(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005C8770*/ int32_t My32BitTexture_f2C_5C8770(int32_t, int32_t);  /* auto */
/*005C8810*/ char My32BitTexture_5C8810(AABB *, int32_t, int8_t);  /* auto */
/*005C8A40*/ int32_t My32BitTexture_5C8A40(int32_t, int32_t, const char *, int32_t, int32_t);  /* auto */
/*005C8D10*/ int16_t My32BitTexture_5C8D10(int32_t, int32_t, int16_t *, int32_t, int32_t);  /* auto */
/*005C8FC0*/ __int16 My32BitTexture_f38_5C8FC0(int32_t, int32_t, const char **);  /* auto */
/*005C9930*/ __int16 My32BitTexture_5C9930(int32_t, int32_t, const char **, int32_t, int32_t);  /* auto */
/*005CA100*/ MySurface *My16BitTexture_5CA100(int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005CAE20*/ int32_t My16BitTexture_5CAE20(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005CB0E0*/ int32_t My16BitTexture_5CB0E0(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005CB3C0*/ MySurface *My16BitTexture_f14_5CB3C0(int32_t, int32_t, int32_t, int32_t, int8_t);  /* auto */
/*005CEFB0*/ int32_t My16BitTexture_5CEFB0(int32_t, int32_t, int8_t *, int32_t, int32_t);  /* auto */
/*005CF380*/ int32_t My16BitTexture_5CF380(int32_t, int32_t, int16_t *, int32_t, int32_t);  /* auto */
/*005CF760*/ __int16 My16BitTexture_f38_5CF760(int32_t, int32_t, const char **);  /* auto */
/*005D0470*/ __int16 My16BitTexture_5D0470(int32_t, int32_t, const char **, int32_t, int32_t);  /* auto */
/*005D0F80*/ int32_t __cdecl sub_5D0F80(int32_t *, int32_t *);  /* auto */
/*005D0FA0*/ int32_t __cdecl AABB_getWidth(AABB *);  // --  /* auto */
/*005D0FB0*/ int32_t __cdecl AABB_getHeight(AABB *);  // -  /* auto */
/*005D0FC0*/ BOOL __cdecl AABB_intersect(AABB *, AABB *);   /* auto */
/*005D1040*/ AABB *__cdecl AABB_collapseToMax(AABB *);      /* auto */
/*005D1050*/ AABB *__cdecl AABB_normalize(AABB *);  // ---  /* auto */
/*005D1230*/ DdModeList *__cdecl DdModeList_constructor(DdModeList *);  /* auto */
/*005D1250*/ DdModeListItem *__cdecl llist_insert(DdModeList *, DdModeListItem *, DdModeListItem *);  /* auto */
/*005D1270*/ int32_t __cdecl sub_5D1270(int32_t *);  // --  /* auto */
/*005D1290*/ int32_t __cdecl libpng_png_set_sig_bytes(int32_t *, int32_t);  /* auto */
/*005D12C0*/ int32_t __cdecl libpng_png_sig_cmp(int32_t, int32_t, int32_t);  /* auto */
/*005D1320*/ BOOL __cdecl libpng_png_check_sig(int32_t, int32_t);  /* auto */
/*005D1340*/ const char *__cdecl libpng_png_zalloc(int32_t *, int32_t, int32_t);  /* auto */
/*005D13B0*/ void __cdecl libpng_png_zfree(int32_t, const void *);  /* auto */
/*005D13D0*/ int32_t __cdecl libpng_png_reset_crc(int32_t);  /* auto */
/*005D13F0*/ int32_t __cdecl libpng_png_calculate_crc(int32_t, int8_t *, int32_t);  /* auto */
/*005D1450*/ const void *__cdecl libpng_png_create_info_struct(int32_t);  /* auto */
/*005D1480*/ void __cdecl libpng_png_destroy_info_struct(int32_t, const void **);  /* auto */
/*005D14C0*/ int32_t __cdecl libpng_png_info_init(const void *);  /* auto */
/*005D14D0*/ int32_t __cdecl libpng_png_info_destroy(int32_t, int32_t);  /* auto */
/*005D1590*/ int32_t __cdecl libpng_png_get_io_ptr(int32_t);  /* auto */
/*005D15A0*/ const void *__cdecl libpng_png_create_read_struct();  // assembly  /* auto */
/*005D16F0*/ int32_t __cdecl libpng_png_read_info(int32_t *, int32_t);  /* auto */
/*005D1A70*/ int32_t __cdecl libpng_png_read_update_info(int32_t *, int32_t);  /* auto */
/*005D1AA0*/ void __cdecl libpng_png_read_row(int32_t *, int32_t, int32_t);  /* auto */
/*005D1F00*/ int32_t *__cdecl libpng_png_read_image(int32_t *, int32_t);  /* auto */
/*005D1F60*/ void __cdecl libpng_png_read_end(int32_t *, int32_t);  /* auto */
/*005D2230*/ void __cdecl libpng_png_destroy_read_struct(const void **, const void ***, const void ***);  /* auto */
/*005D22D0*/ int32_t __cdecl libpng_png_read_destroy(int32_t, int32_t, int32_t);  /* auto */
/*005D2940*/ int32_t __cdecl libpng_png_set_strip_16(int32_t);  /* auto */
/*005D2950*/ int32_t __cdecl libpng_png_set_expand(int32_t);  /* auto */
/*005D2960*/ int32_t __cdecl libpng_png_set_gray_to_rgb(int32_t);  /* auto */
/*005D2970*/ char __cdecl libpng_png_init_read_transformations(int32_t *);  /* auto */
/*005D33C0*/ int32_t __cdecl libpng_png_read_transform_info(int32_t, int32_t *);  /* auto */
/*005D3510*/ void __cdecl libpng_png_do_read_transformations(int32_t *);  /* auto */
/*005D38C0*/ int8_t __cdecl libpng_png_do_unpack(int32_t *, int32_t);  /* auto */
/*005D39D0*/ void __cdecl libpng_png_do_unshift(int32_t *, int8_t *, int8_t *);  /* auto */
/*005D3BC0*/ void __cdecl libpng_png_do_chop(int32_t, const char *);  /* auto */
/*005D3C10*/ const char *__cdecl libpng_png_do_read_swap_alpha(const char *, int32_t);  /* auto */
/*005D3D10*/ const char *__cdecl libpng_png_do_read_invert_alpha(const char *, int32_t);  /* auto */
/*005D3E20*/ char __cdecl libpng_png_do_read_filler(int32_t, int32_t, int32_t, char);  /* auto */
/*005D4070*/ void __cdecl libpng_png_do_gray_to_rgb(int32_t *, int32_t);  /* auto */
/*005D41C0*/ const void *__cdecl libpng_png_do_background();  // assembly  /* auto */
/*005D5250*/ char __cdecl libpng_png_do_gamma(int32_t *, int8_t *, int32_t, int32_t, char);  /* auto */
/*005D5620*/ char __cdecl libpng_png_do_expand_palette(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005D5830*/ char __cdecl libpng_png_do_expand(int32_t *, int32_t, int16_t *);  /* auto */
/*005D5BA0*/ const char *__cdecl libpng_png_do_dither(const char *, const char *, int32_t, int32_t);  /* auto */
/*005D5CC0*/ int32_t __cdecl libpng_png_build_gamma_table(int32_t *);  /* auto */
/*005D6250*/ int32_t __cdecl libpng_png_get_valid(int32_t, int32_t, int32_t);  /* auto */
/*005D6270*/ int32_t __cdecl libpng_png_get_IHDR(int32_t, int32_t, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *);  /* auto */
/*005D6360*/ int32_t __cdecl libpng_png_get_PLTE(int32_t, int32_t, int32_t *, int32_t *);  /* auto */
/*005D63A0*/ int32_t __cdecl libpng_png_set_bgr(int32_t);   /* auto */
/*005D63B0*/ int32_t __cdecl libpng_png_set_packing(int32_t);  /* auto */
/*005D63D0*/ int32_t __cdecl libpng_png_set_interlace_handling(int32_t);  /* auto */
/*005D6400*/ void __cdecl libpng_png_do_invert(int32_t, const char *);  /* auto */
/*005D6430*/ void __cdecl libpng_png_do_swap(int32_t, const char *);  /* auto */
/*005D6460*/ int8_t *__cdecl libpng_png_do_packswap(int8_t *, int8_t *);  /* auto */
/*005D64B0*/ char __cdecl libpng_png_do_strip_filler(int32_t, int8_t *, char);  /* auto */
/*005D66C0*/ char __cdecl libpng_png_do_bgr(int32_t *, const char *);  /* auto */
/*005D6780*/ int32_t __cdecl libpng_png_read_data(int32_t *, int32_t, int32_t);  /* auto */
/*005D67B0*/ int32_t __cdecl libpng_png_set_read_fn(int32_t *, int32_t, int32_t);  /* auto */
/*005D6810*/ size_t __cdecl libpng_png_default_read_data(int32_t *, const void *, size_t);  /* auto */
/*005D6F60*/ const void *__cdecl sub_5D6F60();  // assembly  /* auto */
/*005D7000*/ const void *__cdecl sub_5D7000();  // assembly  /* auto */
/*005D7300*/ int32_t __cdecl sub_5D7300(int32_t, int32_t, int32_t);  /* auto */
/*005D7320*/ int32_t __cdecl sub_5D7320(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*005D7360*/ int32_t __cdecl __tqi_5D7360(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005D77A0*/ int32_t __cdecl __tqi_5D77A0(int8_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005D7A50*/ int32_t __cdecl sub_5D7A50(__int16 *, int32_t *, int32_t *);  /* auto */
/*005D7A70*/ size_t __cdecl strlen_(const char *);  // ---  /* auto */
/*005D7A90*/ const char *fast_strcpy(const char *, const char *);  /* auto */
/*005D7AC0*/ const char *__strncpy(const char *, const char *, size_t);  /* auto */
/*005D7AE0*/ const char *__cdecl strcat_(const char *, const char *);  /* auto */
/*005D7B20*/ const char *__cdecl strncat_(const char *, const char *, size_t);  /* auto */
/*005D7B40*/ int32_t sub_5D7B40(const char *);  // -------  /* auto */
/*005D7B50*/ int32_t sub_5D7B50(char);  // ---------------  /* auto */
/*005D7B70*/ int32_t vsprintf_(const char *, const char *, const char *);  /* auto */
/*005D7B90*/ int32_t vsnprintf(const char *, size_t, const char *, const char *);  /* auto */
/*005D7BB0*/ size_t sub_5D7BB0(const wchar_t *);  // -----  /* auto */
/*005D7BC0*/ const wchar_t *sub_5D7BC0(const wchar_t *, const wchar_t *);  /* auto */
/*005D7BE0*/ const wchar_t *sub_5D7BE0(const wchar_t *, const wchar_t *, size_t);  /* auto */
/*005D7C00*/ const wchar_t *sub_5D7C00(const wchar_t *, const wchar_t *);  /* auto */
/*005D7C20*/ const wchar_t *sub_5D7C20(const wchar_t *, const wchar_t *, size_t);  /* auto */
/*005D7C40*/ int32_t sub_5D7C40(const wchar_t *);  // ----  /* auto */
/*005D7C50*/ int32_t sub_5D7C50(wchar_t);  // ------------  /* auto */
/*005D7C70*/ int32_t sub_5D7C70(const wchar_t *, size_t, const wchar_t *);  /* auto */
/*005D8B00*/ int32_t *MyWadDirectory_sub_5D8B00(int32_t *, int32_t);  /* auto */
/*005D9470*/ int32_t MyFileInfo_constructor(MyFileInfo *, _WIN32_FIND_DATAA *);  /* auto */
/*005D9910*/ MyDdSurfaceEx *Obj6723A0_getDdSurface2();      /* auto */
/*005D9980*/ int32_t Obj6723A0_isSurfaceFlag();  // ------  /* auto */
/*005DA300*/ AsyncThing *__fastcall AsyncThing_constructor(AsyncThing *);  /* auto */
/*005DA3E0*/ int32_t AsyncThing_thread_proc(AsyncThing *);  /* auto */
/*005DA9F0*/ void sub_5DA9F0();  // ----------------------  /* auto */
/*005DBD40*/ int32_t MyCallback_call(int32_t, const void *, MyCallback *);  /* auto */
/*005DBE10*/ CursorDrawer *CursorDrawer_getInstance();      /* auto */
/*005DBE50*/ void __cdecl CursorDrawer_static_destructor();  /* auto */
/*005DDA70*/ GUID *MySysMouse_getGuid();  // -------------  /* auto */
/*005DDA80*/ DIDATAFORMAT *MySysMouse_getDataFormat();      /* auto */
/*005DDDE0*/ MyLoopLList_DxAction_entry *MyLoopLList_DxAction_entry_createBetween(MyLoopLList_DxAction_entry *, MyLoopLList_DxAction_entry *);  /* auto */
/*005DE020*/ int32_t *__cdecl PVoid_assign(int32_t *, int32_t *);  /* auto */
/*005DE240*/ GUID *MySysKeyboard_getGuid();  // ----------  /* auto */
/*005DE250*/ DIDATAFORMAT *MySysKeyboard_getDataFormat();   /* auto */
/*005DE260*/ const void *__cdecl MyDxKeyboard_processKeyboardData();  // assembly  /* auto */
/*005DE310*/ char sub_5DE310(int32_t *, AABB *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E0DA0*/ char sub_5E0DA0(int32_t *, AABB *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E26E0*/ int8_t sub_5E26E0(int32_t *, int32_t *, char, int32_t, int32_t, int32_t);  /* auto */
/*005E2820*/ char sub_5E2820(int32_t *, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E29F0*/ char sub_5E29F0(int32_t *, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E32A0*/ char sub_5E32A0(int32_t *, AABB *, char, int32_t *, int32_t);  /* auto */
/*005E3960*/ __int16 sub_5E3960(int32_t *, int32_t *, char, int32_t, int32_t, const char **, int32_t *);  /* auto */
/*005E3F90*/ __int16 sub_5E3F90(int32_t, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E44D0*/ void sub_5E44D0(int32_t *, int32_t *, __int16, int32_t, int32_t, int8_t *, int32_t);  /* auto */
/*005E4AE0*/ int32_t sub_5E4AE0(int32_t *, AABB *, __int16, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E72B0*/ int32_t sub_5E72B0(int32_t *, AABB *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E8D50*/ int32_t sub_5E8D50(int32_t *, int32_t *, char, int32_t, int32_t, int32_t);  /* auto */
/*005E8E80*/ int32_t sub_5E8E80(int32_t *, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E9040*/ int32_t sub_5E9040(int32_t *, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005E9960*/ int32_t sub_5E9960(int32_t *, AABB *, char, int32_t *, int32_t);  /* auto */
/*005EA020*/ __int16 sub_5EA020(int32_t *, int32_t *, char, int32_t, int32_t, const char **, int32_t *);  /* auto */
/*005EA610*/ __int16 sub_5EA610(int32_t, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005EAB70*/ void sub_5EAB70(int32_t *, int32_t *, char, int32_t, int32_t, int8_t *, int32_t);  /* auto */
/*005EB180*/ char sub_5EB180(int32_t *, AABB *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005EE0A0*/ char sub_5EE0A0(int32_t *, AABB *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005EFB60*/ char sub_5EFB60(int32_t *, int32_t *, char, int32_t, int32_t, int32_t);  /* auto */
/*005EFCA0*/ char sub_5EFCA0(int32_t *, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005EFE60*/ char sub_5EFE60(int32_t *, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005F06D0*/ int32_t sub_5F06D0(int32_t *, AABB *, char, int32_t *, int32_t);  /* auto */
/*005F0D90*/ __int16 sub_5F0D90(int32_t *, int32_t *, char, int32_t, int32_t, const char **, int32_t *);  /* auto */
/*005F1310*/ __int16 sub_5F1310(int32_t, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005F1950*/ void sub_5F1950(int32_t *, int32_t *, char, int32_t, int32_t, int8_t *, int32_t);  /* auto */
/*005F1F90*/ int32_t sub_5F1F90(int32_t *, AABB *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005F45D0*/ int32_t sub_5F45D0(int32_t *, AABB *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005F5EB0*/ int32_t sub_5F5EB0(int32_t *, int32_t *, char, int32_t, int32_t, int32_t);  /* auto */
/*005F5FE0*/ int32_t sub_5F5FE0(int32_t *, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005F6170*/ int32_t sub_5F6170(int32_t *, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005F6930*/ int32_t sub_5F6930(int32_t *, AABB *, char, int32_t *, int32_t);  /* auto */
/*005F6FA0*/ __int16 sub_5F6FA0(int32_t *, int32_t *, char, int32_t, int32_t, const char **, int32_t *);  /* auto */
/*005F74F0*/ __int16 sub_5F74F0(int32_t, int32_t *, char, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005F7A40*/ void sub_5F7A40(int32_t *, int32_t *, char, int32_t, int32_t, int8_t *, int32_t);  /* auto */
/*005F7FD0*/ void sub_5F7FD0();  // ----------------------  /* auto */
/*005F7FE0*/ void sub_5F7FE0();  // ----------------------  /* auto */
/*005F7FF0*/ void sub_5F7FF0();  // ----------------------  /* auto */
/*005F8000*/ void sub_5F8000();  // ----------------------  /* auto */
/*005F8010*/ void sub_5F8010();  // ----------------------  /* auto */
/*005F8020*/ void sub_5F8020();  // ----------------------  /* auto */
/*005F8030*/ void sub_5F8030();  // ----------------------  /* auto */
/*005F8040*/ void sub_5F8040();  // ----------------------  /* auto */
/*005F8190*/ void __cdecl libpng_png_error(int32_t *, int32_t);  /* auto */
/*005F81C0*/ int32_t __cdecl libpng_png_warning(int32_t, const char *);  /* auto */
/*005F81F0*/ void __cdecl libpng_png_chunk_error(int32_t *, int32_t);  /* auto */
/*005F8220*/ int8_t *__cdecl libpng_png_format_buffer(int32_t, int32_t, const void *);  /* auto */
/*005F82B0*/ int32_t __cdecl libpng_png_chunk_warning(int32_t, int32_t);  /* auto */
/*005F82E0*/ void __cdecl libpng_png_default_error(int32_t *, int32_t);  /* auto */
/*005F8310*/ int32_t __cdecl libpng_png_default_warning(int32_t, const char *);  /* auto */
/*005F8330*/ int32_t *__cdecl libpng_png_set_error_fn(int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*005F8350*/ const void *__cdecl libpng_png_create_struct(int32_t);  /* auto */
/*005F83A0*/ void __cdecl libpng_png_destroy_struct(const void *);  /* auto */
/*005F83C0*/ const void *__cdecl libpng_png_malloc(int32_t *, size_t);  /* auto */
/*005F8400*/ void __cdecl libpng_png_free(int32_t, const void *);  /* auto */
/*005F8420*/ const void *__cdecl libpng_png_memcpy_check(int32_t, const void *, const void *, int32_t);  /* auto */
/*005F8450*/ const void *__cdecl libpng_png_memset_check();  // assembly  /* auto */
/*005F8490*/ int32_t __cdecl zlib_crc32(int32_t, int8_t *, int32_t);  /* auto */
/*005F85D0*/ int32_t __cdecl zlib_inflateReset(int32_t *);  /* auto */
/*005F8620*/ int32_t __cdecl zlib_inflateEnd(int32_t *);    /* auto */
/*005F8670*/ int32_t __cdecl zlib_inflateInit2_(int32_t *, int32_t, int8_t *, int32_t);  /* auto */
/*005F8780*/ int32_t __cdecl zlib_inflateInit_(int32_t *, int8_t *, int32_t);  /* auto */
/*005F87A0*/ int32_t __cdecl zlib_inflate(int8_t **, int32_t);  /* auto */
/*005F8BF0*/ int32_t __cdecl libpng_png_get_uint_32(int8_t *);  /* auto */
/*005F8C20*/ int32_t __cdecl libpng_png_get_uint_16(int8_t *);  /* auto */
/*005F8C40*/ int32_t __cdecl libpng_png_crc_read(int32_t *, int32_t, int32_t);  /* auto */
/*005F8C70*/ int32_t __cdecl libpng_png_crc_finish(int32_t *, int32_t);  /* auto */
/*005F8D20*/ BOOL __cdecl libpng_png_crc_error(int32_t *);  /* auto */
/*005F8D90*/ void __cdecl libpng_png_handle_IHDR(int32_t *, int32_t, int32_t);  /* auto */
/*005F9000*/ char __cdecl libpng_png_handle_PLTE(int32_t *, int32_t, int32_t);  /* auto */
/*005F9170*/ int32_t __cdecl libpng_png_handle_IEND(int32_t *, int32_t, int32_t);  /* auto */
/*005F91D0*/ int32_t __cdecl libpng_png_handle_gAMA(int32_t *, int32_t, int32_t);  /* auto */
/*005F9340*/ int32_t __cdecl libpng_png_handle_sBIT(int32_t *, int32_t, int32_t);  /* auto */
/*005F94B0*/ void __cdecl libpng_png_handle_cHRM(int32_t *, int32_t, int32_t);  /* auto */
/*005F9B50*/ int32_t __cdecl libpng_png_handle_sRGB(int32_t *, int32_t, int32_t);  /* auto */
/*005F9DB0*/ int32_t __cdecl libpng_png_handle_tRNS(int32_t *, int32_t, size_t);  /* auto */
/*005FA000*/ int32_t __cdecl libpng_png_handle_bKGD(int32_t *, int32_t, int32_t);  /* auto */
/*005FA1E0*/ int32_t __cdecl libpng_png_handle_hIST(int32_t *, int32_t, int32_t);  /* auto */
/*005FA330*/ int32_t __cdecl libpng_png_handle_pHYs(int32_t *, int32_t, int32_t);  /* auto */
/*005FA440*/ int32_t __cdecl libpng_png_handle_oFFs(int32_t *, int32_t, int32_t);  /* auto */
/*005FA550*/ void __cdecl libpng_png_handle_pCAL(const void *, int32_t, int32_t);  /* auto */
/*005FA7A0*/ int32_t *__cdecl libpng_png_handle_tIME(int32_t *, int32_t, int32_t);  /* auto */
/*005FA8A0*/ void __cdecl libpng_png_handle_tEXt(int32_t *, int32_t, int32_t);  /* auto */
/*005FA960*/ void __cdecl libpng_png_handle_zTXt(int32_t *, int32_t, int32_t);  /* auto */
/*005FACE0*/ int32_t __cdecl libpng_png_handle_unknown(int32_t *, int32_t, int32_t);  /* auto */
/*005FAD30*/ int8_t __cdecl libpng_png_check_chunk_name(int32_t *, int32_t);  /* auto */
/*005FADA0*/ char __cdecl libpng_png_combine_row(int32_t, const char *, int32_t);  /* auto */
/*005FB0C0*/ void __cdecl libpng_png_do_read_interlace(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005FB4F0*/ char __cdecl libpng_png_read_filter_row(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005FB6D0*/ const void *__cdecl libpng_png_read_finish_row();  // assembly  /* auto */
/*005FB990*/ void __cdecl libpng_png_read_start_row(int32_t *);  /* auto */
/*005FD650*/ int32_t *sub_5FD650(int32_t, int32_t, int32_t *, int32_t *);  /* auto */
/*005FE240*/ size_t __cdecl MyLocalStr_format(MyLocalStr *, const char *, ...);  /* auto */
/*005FE970*/ MyLocalStr *__cdecl MyLocalStr_toLowerPath(MyLocalStr *);  /* auto */
/*005FF9D0*/ int32_t sub_5FF9D0(int32_t, int32_t);  // ---  /* auto */
/*005FFC60*/ int32_t sub_5FFC60(int32_t, int32_t, int32_t);  /* auto */
/*005FFCA0*/ int32_t j_MyInputStream_destructor();  // ---  /* auto */
/*00600480*/ const void *__fastcall MyDirectInput_destructor(MyDirectInput *);  /* auto */
/*006006C0*/ int32_t sub_6006C0();  // -------------------  /* auto */
/*006006D0*/ int32_t sub_6006D0();  // -------------------  /* auto */
/*00600710*/ int32_t sub_600710();  // -------------------  /* auto */
/*00600720*/ int32_t sub_600720();  // -------------------  /* auto */
/*006007B0*/ int32_t sub_6007B0();  // -------------------  /* auto */
/*006007C0*/ int32_t sub_6007C0();  // -------------------  /* auto */
/*00600800*/ int32_t sub_600800();  // -------------------  /* auto */
/*00600810*/ int32_t sub_600810();  // -------------------  /* auto */
/*006008F0*/ int32_t sub_6008F0();  // -------------------  /* auto */
/*00600900*/ int32_t sub_600900();  // -------------------  /* auto */
/*00600940*/ int32_t sub_600940();  // -------------------  /* auto */
/*00600950*/ int32_t sub_600950();  // -------------------  /* auto */
/*00600F80*/ int32_t __cdecl zlib_inflate_blocks_reset(int32_t *, int32_t, int32_t *);  /* auto */
/*00601000*/ int32_t *__cdecl zlib_inflate_blocks_new(int32_t, int32_t, int32_t);  /* auto */
/*006010B0*/ int32_t __cdecl zlib_inflate_blocks(int32_t *, int32_t, int32_t);  /* auto */
/*00601DA0*/ int32_t __cdecl zlib_inflate_blocks_free(int32_t, int32_t);  /* auto */
/*00601DF0*/ int32_t __cdecl zlib_adler32(int32_t, int8_t *, int32_t);  /* auto */
/*00601F20*/ const void *__cdecl zlib_zcalloc(int32_t, size_t, size_t);  /* auto */
/*00601F40*/ void __cdecl zlib_zcfree(int32_t, const void *);  /* auto */
/*00601F50*/ int32_t __cdecl libpng_png_set_bKGD(int32_t, int32_t, int32_t);  /* auto */
/*00601F90*/ int32_t __cdecl libpng_png_set_cHRM(int32_t, int32_t, double, double, double, double, double, double, double, double);  /* auto */
/*00602000*/ int32_t __cdecl libpng_png_set_gAMA(int32_t, int32_t, double);  /* auto */
/*00602030*/ int32_t __cdecl libpng_png_set_hIST(int32_t, int32_t, int32_t);  /* auto */
/*00602060*/ void __cdecl libpng_png_set_IHDR(int32_t, int32_t, int32_t, int32_t, char, char, char, char, char);  /* auto */
/*00602120*/ int32_t __cdecl libpng_png_set_oFFs(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*00602150*/ void __cdecl libpng_png_set_pCAL(int32_t *, int32_t, int32_t, int32_t, int32_t, char, int32_t, int32_t, int32_t);  /* auto */
/*006022A0*/ int32_t __cdecl libpng_png_set_pHYs(int32_t, int32_t, int32_t, int32_t, char);  /* auto */
/*006022D0*/ int32_t __cdecl libpng_png_set_PLTE(int32_t, int32_t, int32_t, __int16);  /* auto */
/*00602300*/ int32_t __cdecl libpng_png_set_sBIT(int32_t, int32_t, int32_t);  /* auto */
/*00602330*/ int32_t __cdecl libpng_png_set_sRGB(int32_t, int32_t, char);  /* auto */
/*00602360*/ int32_t __cdecl libpng_png_set_sRGB_gAMA_and_cHRM(int32_t, int32_t, char);  /* auto */
/*00602400*/ void __cdecl libpng_png_set_text(int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*00602510*/ int32_t *__cdecl libpng_png_set_tIME(int32_t *, int32_t *, int32_t *);  /* auto */
/*00602540*/ int32_t __cdecl libpng_png_set_tRNS(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00602CA0*/ int32_t sub_602CA0(const void *, int32_t);     /* auto */
/*00602CC0*/ const void *sub_602CC0(size_t);  // ---------  /* auto */
/*00602CE0*/ int32_t sub_602CE0(const void *);  // -------  /* auto */
/*00602F90*/ BOOL sub_602F90(const char *, int32_t);  // -  /* auto */
/*006031B0*/ int32_t __cdecl sub_6031B0(int8_t *, int32_t);  /* auto */
/*006031E0*/ int32_t __cdecl sub_6031E0(int8_t *, int32_t, int32_t);  /* auto */
/*00603220*/ int32_t __cdecl sub_603220(const char *, const char *, int32_t);  /* auto */
/*00603710*/ int32_t sub_603710(int8_t *, int8_t *, int32_t);  /* auto */
/*00603900*/ int32_t sub_603900();  // -------------------  /* auto */
/*00603910*/ int32_t sub_603910(int8_t *);  // -----------  /* auto */
/*00603950*/ int32_t *sub_603950();  // ------------------  /* auto */
/*00603990*/ void __cdecl sub_603990();  // --------------  /* auto */
/*00603A50*/ int32_t __cdecl sub_603A50(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00603AC0*/ int32_t __cdecl zlib_inflate_codes_new(char, char, int32_t, int32_t, int32_t);  /* auto */
/*00603B00*/ int32_t __cdecl zlib_inflate_codes(int32_t *, int8_t **, int32_t);  /* auto */
/*006042B0*/ int32_t __cdecl zlib_inflate_codes_free(int32_t, int32_t);  /* auto */
/*006042D0*/ int32_t __cdecl zlib_inflate_trees_bits(int32_t, int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*00604380*/ int32_t __cdecl zlib_huft_build(int32_t *, int32_t, int32_t, int32_t, int32_t, int32_t *, int32_t *, int32_t, int32_t *, int32_t *);  /* auto */
/*00604830*/ int32_t __cdecl zlib_inflate_trees_dynamic(int32_t, int32_t, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *, int32_t, int32_t);  /* auto */
/*006049C0*/ int32_t __cdecl zlib_inflate_trees_fixed(int32_t *, int32_t *, int32_t *, int32_t *);  /* auto */
/*006049F0*/ int32_t __cdecl zlib_inflate_flush(int32_t *, int32_t *, int32_t);  /* auto */
/*00604B30*/ int32_t __cdecl sub_604B30(int32_t *, int32_t, int32_t);  /* auto */
/*00604D40*/ int32_t sub_604D40();  // -------------------  /* auto */
/*00604D50*/ int32_t sub_604D50();  // -------------------  /* auto */
/*00604D60*/ int32_t sub_604D60(int32_t *);  // ----------  /* auto */
/*00605010*/ int32_t __cdecl zlib_inflate_fast(int32_t, int32_t, int32_t, int32_t, int32_t *, int8_t **);  /* auto */
/*006053B0*/ int32_t __cdecl sub_6053B0(int32_t *, int32_t, int32_t, int32_t, int32_t, int32_t, int8_t *, int32_t);  /* auto */
/*006055E0*/ int32_t __cdecl sub_6055E0(int32_t *);  // --  /* auto */
/*00605660*/ int32_t __cdecl sub_605660(int32_t, int32_t);  /* auto */
/*00605920*/ int32_t __cdecl sub_605920(int32_t, __int16);  /* auto */
/*00605950*/ int32_t *__cdecl sub_605950(int32_t);  // ---  /* auto */
/*006059D0*/ char __cdecl sub_6059D0(int32_t);  // -------  /* auto */
/*00605A80*/ int32_t __cdecl sub_605A80(int32_t);  // ----  /* auto */
/*00605B20*/ int32_t __cdecl sub_605B20(int32_t *, int32_t);  /* auto */
/*00605C80*/ int32_t __cdecl sub_605C80(int32_t);  // ----  /* auto */
/*00605DB0*/ int32_t __cdecl sub_605DB0(int32_t, const void *, int32_t);  /* auto */
/*00605E30*/ int32_t __cdecl sub_605E30(int32_t, int32_t);  /* auto */
/*00606190*/ int32_t __cdecl sub_606190(int32_t *, int32_t);  /* auto */
/*00606310*/ int32_t __cdecl sub_606310(int32_t *, int32_t);  /* auto */
/*00606770*/ int16_t *__cdecl sub_606770(int32_t);  // ---  /* auto */
/*006067E0*/ void nullsub_20();  // ----------------------  /* auto */
/*006067F0*/ int16_t *__cdecl sub_6067F0(int32_t);  // ---  /* auto */
/*00606860*/ int8_t *__cdecl sub_606860(int32_t, int8_t *, int32_t, int32_t);  /* auto */
/*00606900*/ int32_t __cdecl sub_606900(int32_t);  // ----  /* auto */
/*00606B50*/ int16_t *__cdecl sub_606B50(int32_t, int8_t *, int32_t, int32_t);  /* auto */
/*00606D50*/ int32_t __cdecl sub_606D50(int32_t *, int32_t *);  /* auto */
/*00606F90*/ int32_t __cdecl sub_606F90(int32_t, int32_t, int32_t);  /* auto */
/*00607050*/ __int16 __cdecl sub_607050(int32_t *, int32_t *);  /* auto */
/*00607280*/ int32_t __cdecl sub_607280(int16_t *, int32_t, int32_t);  /* auto */
/*00607300*/ int32_t __cdecl sub_607300(int32_t);  // ----  /* auto */
/*00607380*/ int32_t __cdecl sub_607380(int16_t *, int32_t, int32_t);  /* auto */
/*00607470*/ int32_t __cdecl sub_607470(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*006076E0*/ int32_t __cdecl sub_6076E0(int32_t, int32_t, int32_t);  /* auto */
/*00607C60*/ int32_t __cdecl sub_607C60(int32_t, int32_t, int32_t);  /* auto */
/*006080B0*/ BOOL __cdecl sub_6080B0(int32_t);  // -------  /* auto */
/*00608120*/ int32_t __cdecl sub_608120(int32_t, int32_t);  /* auto */
/*00608140*/ int32_t __cdecl sub_608140(int32_t);  // ----  /* auto */
/*006081D0*/ int32_t __cdecl sub_6081D0(int32_t);  // ----  /* auto */
/*00608240*/ int8_t *__cdecl sub_608240(int32_t *, int8_t *, int32_t, int32_t);  /* auto */
/*006082E0*/ int32_t *TbSysCommand_Process_fun_6082E0(int32_t *, int32_t);  /* auto */
/*00608300*/ int32_t *TbSysCommand_StopAll_fun_608300(int32_t *, int32_t *);  /* auto */
/*00608320*/ int32_t *TbSysCommand_PauseAll_fun_608320(int32_t *, int32_t *);  /* auto */
/*00608340*/ int32_t *TbSysCommand_RestartAll_fun_608340(int32_t *, int32_t *);  /* auto */
/*00608540*/ int32_t TbSysCommand_StopSFX_fun_608540(int32_t, int32_t);  /* auto */
/*00609030*/ const void *__cdecl sub_609030();  // assembly  /* auto */
/*0060A880*/ void sub_60A880(const void *);  // ----------  /* auto */
/*0060B270*/ void sub_60B270(const void *);  // ----------  /* auto */
/*0060B9F0*/ int32_t *sub_60B9F0(int32_t *, int32_t *, int32_t *);  /* auto */
/*0060BA20*/ void sub_60BA20(int32_t *, int32_t, int32_t *);  /* auto */
/*0060BBC0*/ int32_t __cdecl sub_60BBC0(int32_t, int32_t);  /* auto */
/*0060BC10*/ int32_t __cdecl sub_60BC10(int32_t *, int32_t, int32_t *, int32_t);  /* auto */
/*0060BCB0*/ int32_t __cdecl sub_60BCB0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0060BEC0*/ int32_t *sub_60BEC0(int32_t *, int32_t *, int32_t);  /* auto */
/*0060C5E0*/ double sub_60C5E0(int32_t);  // -------------  /* auto */
/*0060C5F0*/ double sub_60C5F0();  // --------------------  /* auto */
/*0060C630*/ double sub_60C630();  // --------------------  /* auto */
/*0060CFE0*/ double sub_60CFE0(int32_t);  // -------------  /* auto */
/*0060D210*/ int32_t sub_60D210();  // -------------------  /* auto */
/*0060D350*/ int32_t *sub_60D350();  // ------------------  /* auto */
/*0060D3F0*/ int32_t *sub_60D3F0();  // ------------------  /* auto */
/*0060D460*/ int32_t sub_60D460();  // -------------------  /* auto */
/*0060D4A0*/ void __cdecl sub_60D4A0(const void *);  // --  /* auto */
/*0060DE40*/ int32_t *__cdecl sub_60DE40(int32_t *, int32_t *, int32_t);  /* auto */
/*0060E020*/ int32_t sub_60E020();  // -------------------  /* auto */
/*0060E0B0*/ int32_t *sub_60E0B0(int32_t *, int32_t *, int32_t);  /* auto */
/*0060E290*/ const void *__cdecl sub_60E290();  // assembly  /* auto */
/*0060E720*/ int32_t sub_60E720(int32_t);  // ------------  /* auto */
/*0060ED30*/ const void *__cdecl sub_60ED30();  // assembly  /* auto */
/*0060F1D0*/ void ret_void_3args(int32_t, int32_t, int32_t);  /* auto */
/*0060F1E0*/ MyUnk674058 *MyUnk674058_getInstance();  // -  /* auto */
/*0060F220*/ void __cdecl MyUnk674058_static_destructor();  /* auto */
/*006123E0*/ void sub_6123E0(const void *);  // ----------  /* auto */
/*00612B70*/ void sub_612B70(const void *);  // ----------  /* auto */
/*006137F0*/ int32_t __cdecl sub_6137F0(int32_t);  // ----  /* auto */
/*00613EB0*/ void sub_613EB0(const void *);  // ----------  /* auto */
/*006144D0*/ int32_t *sub_6144D0(int32_t *, int32_t *);     /* auto */
/*006147D0*/ int32_t *__cdecl sub_6147D0(int32_t *, int32_t, int32_t, int32_t *, int32_t, int32_t *, int32_t, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *, int32_t);  /* auto */
/*00614860*/ int32_t *__cdecl sub_614860(int32_t *, int32_t, int32_t *, int32_t *, int32_t, int32_t, int32_t, int32_t *, int32_t, int32_t *, int32_t *, int32_t *, int32_t);  /* auto */
/*006148F0*/ int32_t *__cdecl MyDwordsCpy(int32_t *, int32_t *, int32_t *);  /* auto */
/*00614920*/ MyStr *__cdecl sub_614920(MyStr *, MySubStr *);  /* auto */
/*00614940*/ const char *__cdecl sub_614940(const char *, int32_t *);  /* auto */
/*00614B90*/ int32_t *sub_614B90(int32_t, int32_t);  // --  /* auto */
/*00614C50*/ int32_t sub_614C50(int32_t *, int32_t);  // -  /* auto */
/*00614C90*/ int32_t *sub_614C90(int32_t *, int32_t *);     /* auto */
/*00614D10*/ const void *sub_614D10();  // ---------------  /* auto */
/*00614D50*/ void __cdecl unknown_libname_57();  // ------  /* auto */
/*00614DC0*/ const void *__cdecl sub_614DC0();  // assembly  /* auto */
/*00615380*/ int32_t sub_615380();  // -------------------  /* auto */
/*00615390*/ void sub_615390();  // ----------------------  /* auto */
/*006153C0*/ void __cdecl sub_6153C0();  // --------------  /* auto */
/*006153F0*/ void sub_6153F0();  // ----------------------  /* auto */
/*00615430*/ int32_t *__cdecl sub_615430(size_t);  // ----  /* auto */
/*006154A0*/ void __cdecl sub_6154A0(const void *, int32_t);  /* auto */
/*006154F0*/ int32_t sub_6154F0();  // -------------------  /* auto */
/*00615500*/ void sub_615500();  // ----------------------  /* auto */
/*00615530*/ void __cdecl sub_615530();  // --------------  /* auto */
/*00615560*/ void sub_615560();  // ----------------------  /* auto */
/*006155A0*/ int32_t *__cdecl sub_6155A0(size_t);  // ----  /* auto */
/*00615610*/ void __cdecl sub_615610(const void *, int32_t);  /* auto */
/*006157F0*/ int32_t *__cdecl sub_6157F0(int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*00615940*/ int32_t sub_615940();  // -------------------  /* auto */
/*00615EE0*/ int32_t *__cdecl sub_615EE0(int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*00615F80*/ int32_t __cdecl __RTC_NumErrors_0();  // ----  /* auto */
/*00615F90*/ int32_t *sub_615F90();  // ------------------  /* auto */
/*00616090*/ int32_t *__cdecl sub_616090(int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*006160E0*/ int32_t *sub_6160E0();  // ------------------  /* auto */
/*00616150*/ int32_t sub_616150();  // -------------------  /* auto */
/*006162F0*/ int32_t *__cdecl sub_6162F0(int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*00616360*/ int32_t __cdecl __RTC_NumErrors_1();  // ----  /* auto */
/*006165E0*/ int32_t *__cdecl sub_6165E0(int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*00616630*/ int32_t *__cdecl sub_616630(int32_t, int32_t *, int32_t, int32_t);  /* auto */
/*00616C90*/ const void *__cdecl sub_616C90();  // assembly  /* auto */
/*00618040*/ int32_t *sub_618040(int32_t *, int32_t *, int32_t, int32_t);  /* auto */
/*00618160*/ int32_t sub_618160(int32_t *);  // ----------  /* auto */
/*00618190*/ void __cdecl sub_618190(const void *);  // --  /* auto */
/*00618440*/ int32_t *sub_618440(int32_t *, int32_t, int32_t *);  /* auto */
/*00618B60*/ int32_t *sub_618B60(int32_t *);  // ---------  /* auto */
/*00618C20*/ int32_t sub_618C20(__int16);  // ------------  /* auto */
/*00618ED0*/ int32_t sub_618ED0(int32_t, int32_t *, int32_t *);  /* auto */
/*006190D0*/ int32_t *sub_6190D0(int32_t *, int32_t, int32_t *);  /* auto */
/*006193B0*/ int32_t sub_6193B0(int64_t *, int32_t, int32_t);  /* auto */
/*006193D0*/ void __cdecl my_memcpy(int64_t *, int64_t *, int32_t);  /* auto */
/*006197A0*/ int32_t sub_6197A0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*006197E0*/ int32_t *sub_6197E0(int32_t *, MySharedObj **, int32_t, int32_t *, MySharedObj_vtbl *);  /* auto */
/*00619CE0*/ int32_t sub_619CE0(int32_t, char, char);       /* auto */
/*0061A290*/ BOOL __fastcall sub_61A290(int32_t);  // ----  /* auto */
/*0061A8B0*/ const void *__cdecl sub_61A8B0();  // assembly  /* auto */
/*0061AC80*/ int32_t *sub_61AC80(int32_t *);  // ---------  /* auto */
/*0061AD00*/ int32_t *sub_61AD00(int32_t, int32_t *);       /* auto */
/*0061AD90*/ int32_t *sub_61AD90(int32_t *);  // ---------  /* auto */
/*0061B070*/ int32_t *sub_61B070(int32_t *, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0061B080*/ int32_t *sub_61B080(int32_t *, int32_t, int32_t);  /* auto */
/*0061B090*/ int32_t *sub_61B090(int32_t *, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0061B0A0*/ int32_t *sub_61B0A0(int32_t *, int32_t, int32_t, int32_t);  /* auto */
/*0061B230*/ void __cdecl sub_61B230(const void *);  // --  /* auto */
/*0061BE80*/ int32_t *sub_61BE80(int32_t, int32_t, int32_t);  /* auto */
/*0061C0A0*/ int32_t sub_61C0A0();  // -------------------  /* auto */
/*0061C0B0*/ void sub_61C0B0();  // ----------------------  /* auto */
/*0061C0E0*/ void __cdecl sub_61C0E0();  // --------------  /* auto */
/*0061C110*/ void sub_61C110();  // ----------------------  /* auto */
/*0061C150*/ int32_t *__cdecl sub_61C150(size_t);  // ----  /* auto */
/*0061C1C0*/ void __cdecl sub_61C1C0(const void *, int32_t);  /* auto */
/*0061C510*/ int32_t sub_61C510();  // -------------------  /* auto */
/*0061C520*/ void sub_61C520();  // ----------------------  /* auto */
/*0061C550*/ void __cdecl sub_61C550();  // --------------  /* auto */
/*0061C580*/ void sub_61C580();  // ----------------------  /* auto */
/*0061C5C0*/ int32_t *__cdecl sub_61C5C0(size_t);  // ----  /* auto */
/*0061C630*/ void __cdecl sub_61C630(const void *, int32_t);  /* auto */
/*0061C7F0*/ int32_t sub_61C7F0();  // -------------------  /* auto */
/*0061C800*/ void sub_61C800();  // ----------------------  /* auto */
/*0061C830*/ void __cdecl sub_61C830();  // --------------  /* auto */
/*0061C860*/ void sub_61C860();  // ----------------------  /* auto */
/*0061C8A0*/ int32_t *__cdecl sub_61C8A0(size_t);  // ----  /* auto */
/*0061C910*/ void __cdecl sub_61C910(const void *, int32_t);  /* auto */
/*0061CB20*/ int32_t sub_61CB20();  // -------------------  /* auto */
/*0061CB30*/ void sub_61CB30();  // ----------------------  /* auto */
/*0061CB60*/ void __cdecl sub_61CB60();  // --------------  /* auto */
/*0061CB90*/ void sub_61CB90();  // ----------------------  /* auto */
/*0061CBD0*/ int32_t *__cdecl sub_61CBD0(size_t);  // ----  /* auto */
/*0061CC40*/ void __cdecl sub_61CC40(const void *, int32_t);  /* auto */
/*0061CE30*/ int32_t sub_61CE30();  // -------------------  /* auto */
/*0061CE40*/ void sub_61CE40();  // ----------------------  /* auto */
/*0061CE70*/ void __cdecl sub_61CE70();  // --------------  /* auto */
/*0061CEA0*/ void sub_61CEA0();  // ----------------------  /* auto */
/*0061CEE0*/ int32_t *__cdecl sub_61CEE0(size_t);  // ----  /* auto */
/*0061CF50*/ void __cdecl sub_61CF50(const void *, int32_t);  /* auto */
/*0061D120*/ int32_t sub_61D120();  // -------------------  /* auto */
/*0061D130*/ void sub_61D130();  // ----------------------  /* auto */
/*0061D160*/ void __cdecl sub_61D160();  // --------------  /* auto */
/*0061D190*/ void sub_61D190();  // ----------------------  /* auto */
/*0061D1D0*/ int32_t *__cdecl sub_61D1D0(size_t);  // ----  /* auto */
/*0061D240*/ void __cdecl sub_61D240(const void *, int32_t);  /* auto */
/*0061D690*/ int32_t sub_61D690(__int16 *, __int16 *, int32_t);  /* auto */
/*0061D910*/ int32_t sub_61D910();  // -------------------  /* auto */
/*0061D920*/ void sub_61D920();  // ----------------------  /* auto */
/*0061D950*/ void __cdecl sub_61D950();  // --------------  /* auto */
/*0061D980*/ void sub_61D980();  // ----------------------  /* auto */
/*0061D9C0*/ int32_t *__cdecl sub_61D9C0(size_t);  // ----  /* auto */
/*0061DA30*/ void __cdecl sub_61DA30(const void *, int32_t);  /* auto */
/*0061DC80*/ int32_t sub_61DC80();  // -------------------  /* auto */
/*0061DC90*/ void sub_61DC90();  // ----------------------  /* auto */
/*0061DCC0*/ void __cdecl sub_61DCC0();  // --------------  /* auto */
/*0061DCF0*/ void sub_61DCF0();  // ----------------------  /* auto */
/*0061DD30*/ int32_t *__cdecl sub_61DD30(size_t);  // ----  /* auto */
/*0061DDA0*/ void __cdecl sub_61DDA0(const void *, int32_t);  /* auto */
/*0061DFD0*/ int32_t sub_61DFD0();  // -------------------  /* auto */
/*0061DFE0*/ void sub_61DFE0();  // ----------------------  /* auto */
/*0061E010*/ void __cdecl sub_61E010();  // --------------  /* auto */
/*0061E040*/ void sub_61E040();  // ----------------------  /* auto */
/*0061E080*/ int32_t *__cdecl sub_61E080(size_t);  // ----  /* auto */
/*0061E0F0*/ void __cdecl sub_61E0F0(const void *, int32_t);  /* auto */
/*0061E2B0*/ int32_t sub_61E2B0();  // -------------------  /* auto */
/*0061E2C0*/ void sub_61E2C0();  // ----------------------  /* auto */
/*0061E2F0*/ void __cdecl sub_61E2F0();  // --------------  /* auto */
/*0061E320*/ void sub_61E320();  // ----------------------  /* auto */
/*0061E360*/ int32_t *__cdecl sub_61E360(size_t);  // ----  /* auto */
/*0061E3D0*/ void __cdecl sub_61E3D0(const void *, int32_t);  /* auto */
/*0061E420*/ int32_t sub_61E420();  // -------------------  /* auto */
/*0061E430*/ void sub_61E430();  // ----------------------  /* auto */
/*0061E460*/ void __cdecl sub_61E460();  // --------------  /* auto */
/*0061E490*/ void sub_61E490();  // ----------------------  /* auto */
/*0061E4D0*/ int32_t *__cdecl sub_61E4D0(size_t);  // ----  /* auto */
/*0061E540*/ void __cdecl sub_61E540(const void *, int32_t);  /* auto */
/*0061E700*/ BOOL __fastcall sub_61E700(int32_t, int32_t, int32_t, int32_t, int32_t *, int32_t);  /* auto */
/*0061E740*/ int32_t sub_61E740();  // -------------------  /* auto */
/*0061E750*/ void sub_61E750();  // ----------------------  /* auto */
/*0061E780*/ void __cdecl sub_61E780();  // --------------  /* auto */
/*0061E7B0*/ void sub_61E7B0();  // ----------------------  /* auto */
/*0061E7F0*/ int32_t *__cdecl sub_61E7F0(size_t);  // ----  /* auto */
/*0061E860*/ void __cdecl sub_61E860(const void *, int32_t);  /* auto */
/*0061EBF0*/ int32_t sub_61EBF0();  // -------------------  /* auto */
/*0061EC00*/ void sub_61EC00();  // ----------------------  /* auto */
/*0061EC30*/ void __cdecl sub_61EC30();  // --------------  /* auto */
/*0061EC60*/ void sub_61EC60();  // ----------------------  /* auto */
/*0061ECA0*/ int32_t *__cdecl sub_61ECA0(size_t);  // ----  /* auto */
/*0061ED10*/ void __cdecl sub_61ED10(const void *, int32_t);  /* auto */
/*0061EF50*/ int32_t sub_61EF50();  // -------------------  /* auto */
/*0061EF60*/ void sub_61EF60();  // ----------------------  /* auto */
/*0061EF90*/ void __cdecl sub_61EF90();  // --------------  /* auto */
/*0061EFC0*/ void sub_61EFC0();  // ----------------------  /* auto */
/*0061F000*/ int32_t *__cdecl sub_61F000(size_t);  // ----  /* auto */
/*0061F070*/ void __cdecl sub_61F070(const void *, int32_t);  /* auto */
/*0061F3D0*/ int32_t sub_61F3D0();  // -------------------  /* auto */
/*0061F3E0*/ void sub_61F3E0();  // ----------------------  /* auto */
/*0061F410*/ void __cdecl sub_61F410();  // --------------  /* auto */
/*0061F440*/ void sub_61F440();  // ----------------------  /* auto */
/*0061F480*/ int32_t *__cdecl sub_61F480(size_t);  // ----  /* auto */
/*0061F4F0*/ void __cdecl sub_61F4F0(const void *, int32_t);  /* auto */
/*0061F7C0*/ int32_t sub_61F7C0();  // -------------------  /* auto */
/*0061F8D0*/ int32_t sub_61F8D0();  // -------------------  /* auto */
/*0061F8E0*/ void sub_61F8E0();  // ----------------------  /* auto */
/*0061F910*/ void __cdecl sub_61F910();  // --------------  /* auto */
/*0061F940*/ void sub_61F940();  // ----------------------  /* auto */
/*0061F980*/ int32_t *__cdecl sub_61F980(size_t);  // ----  /* auto */
/*0061F9F0*/ void __cdecl sub_61F9F0(const void *, int32_t);  /* auto */
/*0061FB30*/ int32_t sub_61FB30();  // -------------------  /* auto */
/*0061FB40*/ void sub_61FB40();  // ----------------------  /* auto */
/*0061FB70*/ void __cdecl sub_61FB70();  // --------------  /* auto */
/*0061FBA0*/ void sub_61FBA0();  // ----------------------  /* auto */
/*0061FBF0*/ int32_t *__cdecl sub_61FBF0(size_t);  // ----  /* auto */
/*0061FC70*/ void __cdecl sub_61FC70(const void *, int32_t);  /* auto */
/*0061FCC0*/ int32_t sub_61FCC0();  // -------------------  /* auto */
/*0061FCD0*/ void sub_61FCD0();  // ----------------------  /* auto */
/*0061FD00*/ void __cdecl sub_61FD00();  // --------------  /* auto */
/*0061FD30*/ void sub_61FD30();  // ----------------------  /* auto */
/*0061FD80*/ int32_t *__cdecl sub_61FD80(size_t);  // ----  /* auto */
/*0061FE00*/ void __cdecl sub_61FE00(const void *, int32_t);  /* auto */
/*006201C0*/ const float *__cdecl sub_6201C0(const float *, const float *, const float *);  /* auto */
/*00628430*/ int32_t static_mmxTest();  // ---------------  /* auto */
/*00628440*/ int32_t mmxTest();  // ----------------------  /* auto */
/*00628450*/ int32_t testMmxSupport();  // ---------------  /* auto */
/*006285C0*/ int32_t __cdecl sub_6285C0(int32_t, int32_t, int32_t);  /* auto */
/*00628800*/ int32_t __cdecl sub_628800(int32_t);  // ----  /* auto */
/*00628B70*/ int32_t ret_0_4args(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00628BA0*/ int32_t *sub_628BA0(int32_t *, int32_t);       /* auto */
/*00628BC0*/ int32_t ret_1_0args();  // ------------------  /* auto */
/*00628E30*/ int32_t ret_0_1args(int32_t);  // -----------  /* auto */
/*00629150*/ __int16 sub_629150(int32_t, int32_t);  // ---  /* auto */
/*006291B0*/ __int16 sub_6291B0(int32_t, int32_t);  // ---  /* auto */
/*00629300*/ int32_t sub_629300(int32_t);  // ------------  /* auto */
/*00629BC0*/ int32_t *sub_629BC0(int32_t *, int32_t);       /* auto */
/*00629DD0*/ int32_t getOrCreateObj_629DD0();  // --------  /* auto */
/*00629E10*/ void __cdecl sub_629E10();  // --------------  /* auto */
/*0062A1F0*/ const void *__cdecl sub_62A1F0();  // assembly  /* auto */
/*0062A200*/ int32_t *sub_62A200(int32_t *, int32_t);       /* auto */
/*0062A210*/ void ret_void_1args_0(int32_t);  // ---------  /* auto */
/*0062A380*/ int32_t sub_62A380(int32_t *, int32_t);  // -  /* auto */
/*0062A440*/ int32_t *sub_62A440(int32_t *, int32_t);       /* auto */
/*0062A6A0*/ int32_t sub_62A6A0(int32_t, int32_t, int32_t, int32_t, float);  /* auto */
/*0062AC80*/ const float *__cdecl sub_62AC80(const float *, int32_t, int32_t);  /* auto */
/*0062B660*/ const char *__cdecl sub_62B660(int32_t, const float *);  /* auto */
/*0062B760*/ __m64 *__cdecl sub_62B760(int16_t *, int16_t *, __m64 *);  /* auto */
/*0062C510*/ int32_t MyDR67B9E0_static_constructor();       /* auto */
/*0062C520*/ int32_t MyDR67B9E0_constructor();  // -------  /* auto */
/*0062C540*/ void __cdecl MyDR67B9E0_static_destructor();   /* auto */
/*0062C550*/ int32_t sub_62C550();  // -------------------  /* auto */
/*0062C560*/ int32_t unknown_libname_61();  // -----------  /* auto */
/*0062C580*/ void __cdecl unknown_libname_62();  // ------  /* auto */
/*0062C590*/ void MyCR0_static_constructor();  // --------  /* auto */
/*0062C5A0*/ int32_t MyCR0_constructor();  // ------------  /* auto */
/*0062C5F0*/ void MyCR1_static_constructor();  // --------  /* auto */
/*0062C600*/ int32_t MyCR1_constructor();  // ------------  /* auto */
/*0062C620*/ void __cdecl MyCR1_static_destructor();  // -  /* auto */
/*0062C650*/ int32_t MyCR2_static_constructor();  // -----  /* auto */
/*0062C660*/ const void ***MyCR2_constructor();  // ------  /* auto */
/*0062C680*/ void __cdecl MyCR2_static_destructor();  // -  /* auto */
/*0062C6D0*/ int32_t MyCR3_static_init();  // ------------  /* auto */
/*0062C6E0*/ void MyCR3_constructor();  // ---------------  /* auto */
/*0062C700*/ void __cdecl MyCR3_static_destroy();  // ----  /* auto */
/*0062C740*/ void MyTR4_static_constructor();  // --------  /* auto */
/*0062C750*/ const void *MyTR4_constructor();  // --------  /* auto */
/*0062C7A0*/ int32_t MyTR5_static_constructor();  // -----  /* auto */
/*0062C7B0*/ int32_t *MyTR5_constructor();  // -----------  /* auto */
/*0062C7D0*/ void __cdecl MyTR5_static_destructor();  // -  /* auto */
/*0062C800*/ int32_t MyTR2_static_constructor();  // -----  /* auto */
/*0062C810*/ int32_t *MyTR2_constructor();  // -----------  /* auto */
/*0062C830*/ void __cdecl MyTR2_static_destructor();  // -  /* auto */
/*0062C880*/ int32_t MyTR67B938_static_constructor();       /* auto */
/*0062C890*/ int32_t *MyTR67B938_constructor();  // ------  /* auto */
/*0062C8B0*/ void __cdecl MyTR67B938_static_destructor();   /* auto */
/*0062D560*/ int32_t *__cdecl sub_62D560(int32_t *, int32_t *, int32_t *);  /* auto */
/*0062D820*/ int32_t __cdecl sub_62D820(int32_t, int32_t, int32_t, int32_t, ...);  /* auto */
/*0062D8A0*/ int32_t __cdecl MyTextText_fun_62D8A0(int32_t *, int32_t, int32_t, int32_t, ...);  /* auto */
/*0062D920*/ int32_t sub_62D920(int32_t, int32_t *);  // -  /* auto */
/*0062D9B0*/ int32_t *MyTextText_create(int32_t *, DiscFileBase *, MyTextBase **, int32_t, MyFileStorage *);  /* auto */
/*0062E140*/ int32_t *MyTextUniToMB_create(int32_t *, DiscFileBase *, MyTextBase **, int32_t, MyFileStorage *);  /* auto */
/*0062E280*/ int32_t *MyTextMBToUni_create(int32_t *, DiscFileBase *, MyTextBase **, int32_t, MyFileStorage *);  /* auto */
/*0062E550*/ int32_t get_chr_type(__int16);  // ----------  /* auto */
/*0062EBF0*/ int32_t charsOneType_doCalcAabb(AABB *, MyCRCtx *, AABB *);  /* auto */
/*0062EC30*/ int32_t charsOneType_doCalcAabbAndDraw(AABB *, MyCRCtx *, AABB *, AABB *);  /* auto */
/*0062EC90*/ int32_t charsOneType_doDrawOrCalcAabb(int32_t, AABB *, MyCRCtx *, AABB *, AABB *);  /* auto */
/*0062EF30*/ int32_t chars_doDrawOrCalcAabb(int32_t, AABB *, MyMultilineRenderCtx *, AABB *, AABB *);  /* auto */
/*0062F1F0*/ int32_t MyCR0_sub_62F1F0(AABB *, MyMultilineRenderCtx *, AABB *);  /* auto */
/*0062F2A0*/ int32_t MyCR1_sub_62F2A0(AABB *, MyMultilineRenderCtx *, AABB *);  /* auto */
/*0062F9E0*/ int32_t sub_62F9E0();  // -------------------  /* auto */
/*0062F9F0*/ int32_t unknown_libname_65();  // -----------  /* auto */
/*0062FA10*/ void __cdecl unknown_libname_66();  // ------  /* auto */
/*0062FA20*/ int32_t MyFontRenderer_static_constructor();   /* auto */
/*0062FA30*/ const void ***MyFontRenderer_constructor();    /* auto */
/*0062FA50*/ void __cdecl MyFontRenderer_static_destructor();  /* auto */
/*0062FA60*/ int32_t MyFontRenderer2_static_init();  // --  /* auto */
/*0062FA70*/ void MyFontRenderer2_constructor();  // -----  /* auto */
/*0062FA90*/ void __cdecl MyFontRenderer2_static_destroy();  /* auto */
/*0062FAA0*/ int32_t MyFontRenderer3_static_init();  // --  /* auto */
/*0062FAB0*/ void MyFontRenderer3_constructor();  // -----  /* auto */
/*0062FAD0*/ void __cdecl MyFontRenderer3_static_destroy();  /* auto */
/*0062FC60*/ void TextType_MBToUni_static_init();  // ----  /* auto */
/*0062FC80*/ void TextType_UniToMB_static_init();  // ----  /* auto */
/*0062FCA0*/ void TextType_MB_static_init();  // ---------  /* auto */
/*0062FCB0*/ void j_TextType_Text_static_init();  // -----  /* auto */
/*0062FCC0*/ void TextType_Text_static_init();  // -------  /* auto */
/*0062FCE0*/ void TextType_Font_static_init();  // -------  /* auto */
/*0062FDE0*/ int32_t sub_62FDE0(int32_t);  // ------------  /* auto */
/*0062FF10*/ int32_t *ResourceIndexEntry_getText_addRef(int32_t *, ResourceIndexEntry *, MyTextBase **);  /* auto */
/*00630140*/ int32_t ResourceIndexEntry_getTextType(ResourceIndexEntry *);  /* auto */
/*006305A0*/ int32_t charsOneTypeEx_doCalcAabb(AABB *, MyTRCtx *, AABB *);  /* auto */
/*006305E0*/ int32_t charsOneTypeEx_doCalcAabbAndDraw(AABB *, MyTRCtx *, AABB *, AABB *);  /* auto */
/*00630640*/ int32_t charsOneTypeEx_doDrawOrCalcAabb(int32_t, AABB *, MyTRCtx *, AABB *, AABB *);  /* auto */
/*006309D0*/ int32_t *sub_6309D0(int32_t *, int32_t, int32_t);  /* auto */
/*00630C80*/ int32_t *sub_630C80(int32_t *, int32_t, int32_t);  /* auto */
/*00630F30*/ int32_t *sub_630F30(int32_t *, int32_t, int32_t);  /* auto */
/*006311E0*/ int32_t *sub_6311E0(int32_t *, int32_t, int32_t);  /* auto */
/*00631A50*/ int32_t *MyFontRenderer2_sub_631A50(int32_t *, int32_t, int32_t **);  /* auto */
/*00631E10*/ int32_t *MyFontRenderer2_sub_631E10(int32_t *, int32_t, int32_t **);  /* auto */
/*006321D0*/ int32_t *MyFontRenderer2_sub_6321D0(int32_t *, int32_t, int32_t **);  /* auto */
/*00632530*/ int32_t *MyFontRenderer2_sub_632530(int32_t *, int32_t, int32_t **);  /* auto */
/*006328D0*/ int32_t *MyFontRenderer3_sub_6328D0(int32_t *, int32_t, int32_t);  /* auto */
/*00632BC0*/ int32_t *MyFontRenderer3_sub_632BC0(int32_t *, int32_t, int32_t);  /* auto */
/*00632DC0*/ int32_t *MyFontRenderer3_sub_632DC0(int32_t *, int32_t, int32_t);  /* auto */
/*006330B0*/ int32_t *MyFontRenderer3_sub_6330B0(int32_t *, int32_t, int32_t);  /* auto */
/*00633390*/ int32_t *MyTextMB_create(int32_t *, DiscFileBase *, MyTextBase **, int32_t, MyFileStorage *);  /* auto */
/*006336D0*/ int32_t *MyTextFont_create(int32_t *, DiscFileBase *, MyTextBase **, int32_t, MyFileStorage *);  /* auto */
/*00633F30*/ AABB *AABB_probably_alignToSurface(AABB *, AABB *, Pos2i *, MySurface *);  /* auto */
/*00634150*/ void __cdecl gCharBuffer_static_destructor();  /* auto */
/*006347B0*/ const void *__cdecl __onexit(int32_t (__cdecl *)());  /* auto */
/*00634840*/ int32_t __cdecl _atexit(void (__cdecl *)());   /* auto */
/*006349A0*/ int32_t __cdecl ___CxxFrameHandler(EXCEPTION_RECORD *, EHRegistrationNode *, _CONTEXT *, const void *);  /* auto */
/*00634C70*/ int32_t __cdecl __global_unwind2(const void *);  /* auto */
/*00634CB2*/ int32_t __cdecl __local_unwind2(int32_t, int32_t);  /* auto */
/*00634D1A*/ int32_t __cdecl __abnormal_termination();      /* auto */
/*00634D70*/ const wchar_t *__cdecl _wcsncpy(const wchar_t *, const wchar_t *, size_t);  /* auto */
/*00634DB0*/ int32_t __cdecl _sprintf(const char *, const char *, ...);  /* auto */
/*00634E20*/ int32_t __fpmath();  // ---------------------  /* auto */
/*00634E40*/ int32_t __cfltcvt_init_15();  // ------------  /* auto */
/*00634E90*/ int32_t __cdecl _swprintf(const wchar_t *, size_t, const wchar_t *, ...);  /* auto */
/*00635000*/ int32_t __cdecl ___RTtypeid(int32_t *);  // -  /* auto */
/*00635120*/ int32_t __cdecl ___RTDynamicCast(const void **, int32_t, TypeDescriptor *, TypeDescriptor *, int32_t);  /* auto */
/*00635730*/ int32_t __cdecl __snwprintf(const wchar_t *, size_t, const wchar_t *, ...);  /* auto */
/*006357D0*/ int32_t __cdecl interlocked_or_tolower(int32_t);  /* auto */
/*00635860*/ int32_t __cdecl sub_635860(int32_t);  // ----  /* auto */
/*00635960*/ const wchar_t *__cdecl _wcscat(const wchar_t *, const wchar_t *);  /* auto */
/*006359A0*/ const wchar_t *__cdecl _wcscpy(const wchar_t *, const wchar_t *);  /* auto */
/*006359D0*/ size_t __cdecl _wcslen(const wchar_t *);       /* auto */
/*006359F0*/ int32_t __cdecl _rand();  // ----------------  /* auto */
/*00635A20*/ int32_t __cdecl _strncmp(const char *, const char *, size_t);  /* auto */
/*00635A60*/ const void *__cdecl _memcpy(const void *, const void *, size_t);  /* auto */
/*00635DA0*/ void ___for_each_destruct(const void *, int32_t, int32_t, void (__thiscall *)(const void *));  /* auto */
/*00635EC0*/ void ___for_each_construct(const void *, int32_t, int32_t, void (__thiscall *)(const void *), void (__thiscall *)(const void *));  /* auto */
/*00635F60*/ void __cdecl _qsort(const void *, size_t, size_t, int32_t (__cdecl *)(const void *, const void *));  /* auto */
/*006361A0*/ const char *__cdecl _strncpy(const char *, const char *, size_t);  /* auto */
/*006362A0*/ int32_t __cdecl _fflush(FILE *);  // --------  /* auto */
/*006362E0*/ int32_t __cdecl __fflush_lk(int32_t);  // ---  /* auto */
/*00636320*/ int32_t __cdecl __flush(int32_t *);  // -----  /* auto */
/*00636390*/ int32_t __cdecl __flushall();  // -----------  /* auto */
/*006363A0*/ int32_t __cdecl _flsall(int32_t);  // -------  /* auto */
/*00636460*/ int32_t __cdecl _fputs(const char *, FILE *);  /* auto */
/*006364C0*/ FILE *__cdecl __fsopen(const char *, const char *, int32_t);  /* auto */
/*00636500*/ FILE *__cdecl _fopen(const char *, const char *);  /* auto */
/*00636539*/ double __cdecl _pow(double, double);  // ----  /* auto */
/*00636715*/ const void *__cdecl sub_636715();  // assembly  /* auto */
/*00636740*/ const char *__cdecl _strstr(const char *, const char *);  /* auto */
/*006367C0*/ const char *__cdecl _strrchr(const char *, int32_t);  /* auto */
/*006367F0*/ int32_t __cdecl ThreadCtx_create(const void *, int32_t, int32_t (__stdcall *)(const void *), const void *, int32_t, int32_t *);  /* auto */
/*00636920*/ void __cdecl __endthreadex(int32_t);  // ----  /* auto */
/*00636960*/ int32_t __cdecl deleteFile(const char *);      /* auto */
/*00636990*/ int32_t __cdecl __wtoi(const wchar_t *);       /* auto */
/*006369C0*/ int32_t __cdecl _iswdigit(int16_t);  // -----  /* auto */
/*006369D0*/ int32_t __cdecl _iswspace(int16_t);  // -----  /* auto */
/*006369E0*/ int32_t __cdecl _iswprint(int16_t);  // -----  /* auto */
/*00636A00*/ const char *__cdecl _strcpy(const char *, const char *);  /* auto */
/*00636AF0*/ const wchar_t *__cdecl _wcsstr(const wchar_t *, const wchar_t *);  /* auto */
/*00636B50*/ int32_t __cdecl __strcmpi(const char *, const char *);  /* auto */
/*00636C20*/ const wchar_t *__cdecl __itow(int32_t, const wchar_t *, int32_t);  /* auto */
/*00636C60*/ int32_t __cdecl _wcscmp(const wchar_t *, const wchar_t *);  /* auto */
/*00636CC0*/ int16_t __cdecl _towupper(int16_t);  // -----  /* auto */
/*00636D50*/ int16_t __cdecl _towupper_0(int16_t);  // ---  /* auto */
/*00636DD0*/ int32_t __cdecl sub_636DD0(int32_t, int32_t, int32_t);  /* auto */
/*00636FD0*/ int16_t __cdecl _towlower(int16_t);  // -----  /* auto */
/*00637070*/ int16_t __cdecl _towlower_0(int16_t);  // ---  /* auto */
/*006370F0*/ const wchar_t *__cdecl _wcsncat(const wchar_t *, const wchar_t *, size_t);  /* auto */
/*00637140*/ int32_t __cdecl _vsprintf(const char *, const char *, const char *);  /* auto */
/*006371B0*/ int32_t __cdecl _vswprintf(const wchar_t *, size_t, const wchar_t *, const char *);  /* auto */
/*00637250*/ int32_t __cinit();  // ----------------------  /* auto */
/*00637280*/ void __cdecl _exit(int32_t);  // ------------  /* auto */
/*006372A0*/ void __cdecl __exit(int32_t);  // -----------  /* auto */
/*006372C0*/ void __cdecl _doexit(int32_t, int32_t, int32_t);  /* auto */
/*00637380*/ void __lockexit();  // ----------------------  /* auto */
/*00637390*/ void __unlockexit();  // --------------------  /* auto */
/*006373A0*/ void __cdecl __initterm(void (__cdecl **)(), void (__cdecl **)());  /* auto */
/*006373C0*/ int32_t __cdecl _atol(const char *);  // ----  /* auto */
/*00637460*/ int32_t __cdecl _atoi(const char *);  // ----  /* auto */
/*00637470*/ int32_t __cdecl _isdigit(int32_t);  // ------  /* auto */
/*006374A0*/ int32_t __cdecl _isspace(int32_t);  // ------  /* auto */
/*006374D0*/ int32_t __cdecl _isalnum(int32_t);  // ------  /* auto */
/*00637500*/ double __cdecl _ceil(double);  // -----------  /* auto */
/*00637600*/ double __cdecl _floor(double);  // ----------  /* auto */
/*00637700*/ int32_t __cdecl _printf(const char *, ...);    /* auto */
/*00637760*/ tm *__cdecl _gmtime(__time32_t *);  // ------  /* auto */
/*006378D0*/ __time32_t __cdecl _time(__time32_t *);  // -  /* auto */
/*00637A00*/ const void *__cdecl _realloc(const void *, size_t);  /* auto */
/*00637BB0*/ const void *__cdecl _malloc_1(size_t);  // --  /* auto */
/*00637BD0*/ int32_t *__cdecl __nh_malloc(size_t, int32_t);  /* auto */
/*00637C20*/ int32_t *__cdecl __heap_alloc(int32_t);  // -  /* auto */
/*00637C90*/ const char *__cdecl _strchr(const char *, int32_t);  /* auto */
/*00637D50*/ int32_t __cdecl __strnicmp(const char *, const char *, size_t);  /* auto */
/*00637E60*/ int32_t __cdecl _sscanf(const char *, const char *, ...);  /* auto */
/*00637EB0*/ int32_t __cdecl _fseek(FILE *, int32_t, int32_t);  /* auto */
/*00637EF0*/ int32_t __cdecl __fseek_lk(int32_t, int32_t, int32_t);  /* auto */
/*00637F90*/ int32_t __cdecl _fclose(FILE *);  // --------  /* auto */
/*00637FD0*/ int32_t __cdecl __fclose_lk(int32_t);  // ---  /* auto */
/*00638040*/ size_t __cdecl readFromFile(const void *, size_t, size_t, FILE *);  /* auto */
/*00638080*/ size_t __cdecl _fread(const void *, size_t, size_t, FILE *);  /* auto */
/*006381C0*/ size_t __cdecl writeFile(const void *, size_t, size_t, FILE *);  /* auto */
/*00638200*/ size_t __cdecl _fwrite(const void *, size_t, size_t, FILE *);  /* auto */
/*00638350*/ void __cdecl _free(const void *);  // -------  /* auto */
/*006383F0*/ const char *__cdecl __strdup(const char *);    /* auto */
/*00638440*/ void dk2_start();  // -----------------------  /* auto */
/*006385F0*/ void __cdecl __amsg_exit(int32_t);  // ------  /* auto */
/*00638650*/ const void *__cdecl _calloc(size_t, size_t);   /* auto */
/*00638700*/ int32_t __cdecl __beginthread(void (__cdecl *)(const void *), int32_t, const void *);  /* auto */
/*00638830*/ void __cdecl __endthread();  // -------------  /* auto */
/*00638880*/ int32_t __cdecl interlocked_or_toupper(int32_t);  /* auto */
/*00638910*/ int32_t __cdecl sub_638910(int32_t);  // ----  /* auto */
/*00638A10*/ const void *__cdecl __setjmp3();  // assembly  /* auto */
/*00638A8C*/ void __cdecl _longjmp(int32_t *, int32_t);     /* auto */
/*00638B10*/ void __cdecl __splitpath(const char *, const char *, const char *, const char *, const char *);  /* auto */
/*00638C90*/ const void *__cdecl _memchr(const void *, int32_t, size_t);  /* auto */
/*00638D40*/ int32_t __cdecl _vfprintf(FILE *, const char *, const char *);  /* auto */
/*00638D90*/ int32_t __cdecl _fprintf(FILE *, const char *, ...);  /* auto */
/*00638DE0*/ const char *__cdecl _strncat(const char *, const char *, size_t);  /* auto */
/*00638F10*/ int32_t __cdecl sub_638F10(wchar_t, int32_t);  /* auto */
/*00638F80*/ int32_t __cdecl __vsnprintf(const char *, size_t, const char *, const char *);  /* auto */
/*00639240*/ int32_t __cdecl __isnan(double);  // --------  /* auto */
/*00639270*/ int32_t __cdecl __fpclass(double);  // ------  /* auto */
/*00639318*/ int32_t __cdecl __except_handler3(int32_t, const void *, int32_t);  /* auto */
/*006393F0*/ size_t __cdecl __msize(const void *);  // ---  /* auto */
/*00639460*/ void __mtinitlocks();  // -------------------  /* auto */
/*00639490*/ void __cdecl __lock(int32_t);  // -----------  /* auto */
/*00639510*/ void __cdecl __unlock(int32_t);  // ---------  /* auto */
/*00639530*/ void __cdecl __lock_file(FILE *);  // -------  /* auto */
/*00639570*/ void __cdecl __lock_file2(int32_t, int32_t);   /* auto */
/*006395A0*/ void __cdecl __unlock_file(FILE *);  // -----  /* auto */
/*006395E0*/ void __cdecl __unlock_file2(int32_t, int32_t);  /* auto */
/*00639610*/ int32_t __cdecl sub_639610(EXCEPTION_RECORD *, EHRegistrationNode *, _CONTEXT *, const void *, _s_FuncInfo *, int32_t, const void *, char);  /* auto */
/*00639B40*/ int32_t __cdecl sub_639B40(int32_t **);  // -  /* auto */
/*0063A090*/ int32_t __mtinit();  // ---------------------  /* auto */
/*0063A0F0*/ int32_t __cdecl __initptd(int32_t);  // -----  /* auto */
/*0063A110*/ int32_t *__getptd();  // --------------------  /* auto */
/*0063A190*/ int32_t __cdecl sub_63A190(const void *);      /* auto */
/*0063A2D0*/ void sub_63A2D0();  // ----------------------  /* auto */
/*0063A360*/ int32_t __cdecl __flsbuf(int32_t, FILE *);     /* auto */
/*0063A490*/ int32_t __cdecl __output(FILE *, int32_t, int32_t);  /* auto */
/*0063AE20*/ int32_t __cdecl _write_char(int32_t, FILE *, int32_t);  /* auto */
/*0063AE70*/ int32_t __cdecl _write_multi_char(int32_t, int32_t, FILE *, int32_t);  /* auto */
/*0063AEB0*/ int32_t __cdecl _write_string(int32_t, int32_t, FILE *, int32_t);  /* auto */
/*0063AEF0*/ __int16 __cdecl _get_short_arg(int32_t *);     /* auto */
/*0063AF10*/ int32_t __setdefaultprecision();  // --------  /* auto */
/*0063AF30*/ BOOL __ms_p5_test_fdiv();  // ---------------  /* auto */
/*0063AF80*/ int32_t __ms_p5_mp_test_fdiv();  // ---------  /* auto */
/*0063B280*/ int32_t __cdecl __cftof(int32_t, const void *, int32_t);  /* auto */
/*0063B2F0*/ int32_t __cdecl __cftof2(const void *, int32_t, int32_t, char);  /* auto */
/*0063B3B0*/ int32_t __cdecl __cftog(int32_t, const void *, int32_t, int32_t);  /* auto */
/*0063B470*/ int32_t __cdecl __cfltcvt(int32_t, const void *, int32_t, int32_t, int32_t);  /* auto */
/*0063B4E0*/ int32_t __cdecl __shift(const void *, int32_t);  /* auto */
/*0063B510*/ int32_t __cdecl __woutput(FILE *, int32_t, int32_t);  /* auto */
/*0063BE70*/ __int16 __cdecl _write_char_0(wchar_t, FILE *, int32_t);  /* auto */
/*0063BEA0*/ int32_t __cdecl _write_multi_char_0(wchar_t, int32_t, FILE *, int32_t);  /* auto */
/*0063BEE0*/ int32_t __cdecl _write_string_0(int32_t, int32_t, FILE *, int32_t);  /* auto */
/*0063BF20*/ int32_t __cdecl _get_int_arg(int32_t *);       /* auto */
/*0063BF40*/ __int64 __cdecl _get_int64_arg(int32_t *);     /* auto */
/*0063BF60*/ int32_t __cdecl ___crtLCMapStringW(LCID, int32_t, const wchar_t *, const char *, const wchar_t *, int32_t, int32_t);  /* auto */
/*0063C170*/ int32_t __cdecl _wcsncnt(int16_t *, int32_t);  /* auto */
/*0063C1B0*/ int32_t __cdecl sub_63C1B0(LCID, int32_t, const char *, const wchar_t *, const char *, int32_t, int32_t, int32_t);  /* auto */
/*0063C3E0*/ size_t __cdecl _strncnt(const char *, size_t);  /* auto */
/*0063C410*/ int32_t __cdecl __isctype(int32_t, int32_t);   /* auto */
/*0063C4B0*/ int32_t __cdecl __commit(int32_t);  // ------  /* auto */
/*0063C550*/ int32_t __cdecl __write(int32_t, const void *, int32_t);  /* auto */
/*0063C5D0*/ int32_t __cdecl __write_lk(int32_t, const void *, int32_t);  /* auto */
/*0063C7E0*/ int32_t __cdecl sub_63C7E0(FILE *);  // -----  /* auto */
/*0063C8A0*/ __int16 __cdecl __ftbuf(int32_t, int32_t *);   /* auto */
/*0063C8E0*/ int32_t __cdecl __openfile(const char *, int32_t, int32_t, int32_t);  /* auto */
/*0063CAB0*/ int32_t *__getstream();  // -----------------  /* auto */
/*0063CB90*/ const void *__cdecl fFYTOX();  // assembly  -  /* auto */
/*0063CF59*/ const void *__cdecl __rttosnpopde();  // assembly  /* auto */
/*0063D015*/ int32_t __fastcall __fload_withFB(int32_t, int32_t);  /* auto */
/*0063D160*/ int32_t __cdecl __powhlp(double, double, int32_t);  /* auto */
/*0063D390*/ int32_t __cdecl __d_inttype(double);  // ----  /* auto */
/*0063D420*/ int32_t *__cdecl __dosmaperr(int32_t);  // --  /* auto */
/*0063D4A0*/ int32_t *__cdecl __errno();  // -------------  /* auto */
/*0063D4B0*/ int32_t *__cdecl ___doserrno();  // ---------  /* auto */
/*0063D4C0*/ int32_t __cdecl __XcptFilter(int32_t, _EXCEPTION_POINTERS *);  /* auto */
/*0063D710*/ const char *__cdecl __itoa(int32_t, const char *, int32_t);  /* auto */
/*0063D750*/ char __cdecl _xtoa(int32_t, const char *, int32_t, int32_t);  /* auto */
/*0063D800*/ double __cdecl __frnd(double);  // ----------  /* auto */
/*0063D820*/ double __cdecl __handle_qnan1(int32_t, double, int32_t);  /* auto */
/*0063D870*/ double __cdecl __except1(int32_t, int32_t, int32_t, int32_t, double, int32_t);  /* auto */
/*0063D930*/ ULONG_PTR __cdecl __raise_exc(ULONG_PTR, int32_t, char, int32_t, int32_t, int32_t);  /* auto */
/*0063DC70*/ BOOL __cdecl __handle_exc(char, const double *, __int16);  /* auto */
/*0063DFA0*/ double __cdecl __umatherr(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, double, int32_t);  /* auto */
/*0063E050*/ errno_t __cdecl __set_errno(int32_t);  // ---  /* auto */
/*0063E080*/ const void **__cdecl __get_fname(int32_t);     /* auto */
/*0063E0B0*/ int32_t __cdecl __errcode(char);  // --------  /* auto */
/*0063E0F0*/ double __cdecl __set_exp(int32_t, int32_t, __int16);  /* auto */
/*0063E130*/ int32_t __cdecl __sptype(int32_t, int32_t);    /* auto */
/*0063E190*/ double __cdecl __decomp(double, int32_t);      /* auto */
/*0063E2A0*/ const void *__cdecl __statfp();  // assembly   /* auto */
/*0063E2B0*/ const void *__cdecl __clrfp();  // assembly    /* auto */
/*0063E2D0*/ int32_t __fastcall __ctrlfp(__int16);  // ---  /* auto */
/*0063E300*/ void __set_statfp();  // --------------------  /* auto */
/*0063E360*/ int32_t __cdecl ___loctotime_t(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0063E450*/ int32_t __cdecl __callnewh(size_t);  // -----  /* auto */
/*0063E470*/ int32_t __heap_init();  // ------------------  /* auto */
/*0063E4B0*/ const void **___sbh_new_region();  // -------  /* auto */
/*0063E620*/ BOOL __cdecl ___sbh_release_region(const void *);  /* auto */
/*0063E680*/ void __cdecl ___sbh_decommit_pages(int32_t);   /* auto */
/*0063E750*/ int32_t __cdecl ___sbh_find_block(ThreadCtx *, const void ***, int32_t *);  /* auto */
/*0063E7B0*/ void __cdecl ___sbh_free_block(int32_t, ThreadCtx *, int8_t *);  /* auto */
/*0063E810*/ int32_t *__cdecl ___sbh_alloc_block(int32_t);  /* auto */
/*0063EA50*/ int32_t __cdecl ___sbh_alloc_block_from_page(int32_t, int32_t, int32_t);  /* auto */
/*0063EBD0*/ int32_t __cdecl ___sbh_resize_block(int32_t, int32_t *, int8_t *, int32_t);  /* auto */
/*0063ECA0*/ int32_t __cdecl __input(FILE *, int32_t, int32_t);  /* auto */
/*0063F9E0*/ int32_t __cdecl __hextodec(int32_t);  // ----  /* auto */
/*0063FA20*/ int32_t __cdecl _fgetc(FILE *);  // ---------  /* auto */
/*0063FA50*/ int32_t __cdecl __un_inc(int32_t, FILE *);     /* auto */
/*0063FA70*/ int32_t __cdecl __whiteout(int32_t, FILE *);   /* auto */
/*0063FAC0*/ int32_t __cdecl __lseek(int32_t, int32_t, int32_t);  /* auto */
/*0063FB40*/ int32_t __cdecl __lseek_lk(int32_t, int32_t, int32_t);  /* auto */
/*0063FBC0*/ int32_t __cdecl __ftell_lk(int32_t *);  // --  /* auto */
/*0063FD70*/ int32_t __cdecl __close(int32_t);  // -------  /* auto */
/*0063FDE0*/ int32_t __cdecl __close_lk(int32_t);  // ----  /* auto */
/*0063FE70*/ int32_t __cdecl __freebuf(int32_t);  // -----  /* auto */
/*0063FEB0*/ int32_t __cdecl __filbuf(FILE *);  // -------  /* auto */
/*0063FFA0*/ int32_t __cdecl __read(int32_t, const void *, int32_t);  /* auto */
/*00640020*/ int32_t __cdecl __read_lk(int32_t, const void *, int32_t);  /* auto */
/*00640250*/ int32_t __cdecl __ismbblead(int32_t);  // ---  /* auto */
/*00640270*/ int32_t __cdecl _x_ismbbtype(int8_t, int32_t, int8_t);  /* auto */
/*006402B0*/ int32_t __setenvp();  // --------------------  /* auto */
/*006403A0*/ int32_t __setargv();  // --------------------  /* auto */
/*00640650*/ int32_t ___crtGetEnvironmentStringsA();  // -  /* auto */
/*006407B0*/ int32_t __cdecl sub_6407B0(int32_t);  // ----  /* auto */
/*00640A90*/ int32_t _setSBCS();  // ---------------------  /* auto */
/*00640AD0*/ int32_t sub_640AD0();  // -------------------  /* auto */
/*00640CB0*/ int32_t ___initmbctable();  // --------------  /* auto */
/*00640CC0*/ int32_t __ioinit();  // ---------------------  /* auto */
/*00640ED0*/ int32_t *__FF_MSGBANNER();  // --------------  /* auto */
/*00640F10*/ int32_t *__cdecl __NMSG_WRITE(int32_t);  // -  /* auto */
/*00641160*/ int8_t *__cdecl __mbsnbcpy(int8_t *, int8_t *, size_t);  /* auto */
/*00641210*/ int32_t __cdecl ___crtGetStringTypeW(int32_t, const wchar_t *, int32_t, int16_t *, int32_t, LCID);  /* auto */
/*006413A0*/ int32_t __cdecl sub_6413A0(int32_t, const char *, int32_t, int16_t *, int32_t, LCID, int32_t);  /* auto */
/*00641570*/ int32_t __cdecl __fcloseall();  // ----------  /* auto */
/*00641630*/ BOOL __cdecl _ValidateWrite(const void *, UINT_PTR);  /* auto */
/*00641670*/ void __cdecl _abort();  // ------------------  /* auto */
/*00641690*/ char __cdecl __getbuf(int32_t *);  // -------  /* auto */
/*006416F0*/ int32_t __cdecl __isatty(int32_t);  // ------  /* auto */
/*00641720*/ int32_t __cdecl _wctomb(const char *, wchar_t);  /* auto */
/*00641790*/ int32_t __cdecl __wctomb_lk(const char *, wchar_t);  /* auto */
/*00641900*/ int32_t __cdecl __control87(int32_t, int32_t);  /* auto */
/*00641940*/ int32_t __cdecl __controlfp(int32_t, int32_t);  /* auto */
/*00641A90*/ int32_t __cdecl __ZeroTail(int32_t, int32_t);  /* auto */
/*00641B00*/ int32_t __cdecl __IncMan(int32_t, int32_t);    /* auto */
/*00641B70*/ int32_t __cdecl __RoundMan(int32_t, int32_t);  /* auto */
/*00641C10*/ int32_t *__cdecl __CopyMan(int32_t, int32_t *);  /* auto */
/*00641C30*/ int32_t __cdecl __FillZeroMan(int32_t *);      /* auto */
/*00641C40*/ int32_t __cdecl __IsZeroMan(int32_t *);  // -  /* auto */
/*00641C60*/ int32_t __cdecl __ShrMan(int32_t *, int32_t);  /* auto */
/*00641D20*/ int32_t __cdecl __ld12cvt(int16_t *, int32_t *, int32_t *);  /* auto */
/*00641EF0*/ int32_t __cdecl sub_641EF0(int16_t *, int32_t *);  /* auto */
/*00641F10*/ int32_t __cdecl sub_641F10(int32_t, int32_t);  /* auto */
/*00641F30*/ int32_t __cdecl sub_641F30(int32_t *, int32_t);  /* auto */
/*00641F70*/ int32_t __cdecl sub_641F70(int32_t, int32_t);  /* auto */
/*006421B0*/ int32_t __cdecl _mbtowc(const wchar_t *, const char *, size_t);  /* auto */
/*00642230*/ int32_t __cdecl __mbtowc_lk(const wchar_t *, const char *, int32_t);  /* auto */
/*00642330*/ wchar_t __cdecl __putwc_lk(wchar_t, FILE *);   /* auto */
/*00642B10*/ int32_t __cdecl _storeTimeFmt(const void *, int32_t);  /* auto */
/*00643100*/ int32_t sub_643100();  // -------------------  /* auto */
/*006433C0*/ size_t __cdecl _strcspn(const char *, const char *);  /* auto */
/*00643400*/ const char *__cdecl _strpbrk(const char *, const char *);  /* auto */
/*00643440*/ int32_t __alloc_osfhnd();  // ---------------  /* auto */
/*006435B0*/ int32_t __cdecl __set_osfhnd(int32_t, const void *);  /* auto */
/*00643660*/ int32_t __cdecl __free_osfhnd(int32_t);  // -  /* auto */
/*00643700*/ intptr_t __cdecl __get_osfhandle(int32_t);     /* auto */
/*00643750*/ void __cdecl __lock_fhandle(int32_t);  // ---  /* auto */
/*006437C0*/ void __cdecl __unlock_fhandle(int32_t);  // -  /* auto */
/*006437F0*/ int32_t __cdecl __sopen(const char *, int32_t, int32_t, ...);  /* auto */
/*00643B90*/ int32_t __cdecl unknown_libname_74(char, char, int32_t, int32_t);  /* auto */
/*00644381*/ const void *__cdecl unknown_libname_87();  // assembly  /* auto */
/*00644A40*/ void ___tzset();  // ------------------------  /* auto */
/*00644A80*/ void __tzset_lk();  // ----------------------  /* auto */
/*00644D60*/ int32_t __cdecl __isindst(int32_t);  // -----  /* auto */
/*00644D90*/ BOOL __cdecl sub_644D90(int32_t *);  // -----  /* auto */
/*00645000*/ int32_t __cdecl _cvtdate(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*006451C0*/ int32_t __cdecl _ungetc(int32_t, FILE *);      /* auto */
/*00645250*/ int32_t __cdecl ___crtMessageBoxA(const char *, const char *, int32_t);  /* auto */
/*006452E0*/ int32_t __cdecl _raise(int32_t);  // --------  /* auto */
/*00645530*/ int32_t __cdecl ___addl(int32_t, int32_t, int32_t *);  /* auto */
/*00646250*/ int32_t __cdecl __flswbuf(int32_t, int32_t);   /* auto */
/*006463A0*/ int32_t __cdecl ___getlocaleinfo(int32_t, LCID, LCTYPE, int32_t);  /* auto */
/*00646550*/ int32_t __cdecl __chsize_lk(int32_t, int32_t);  /* auto */
/*006466A0*/ size_t __cdecl _wcstombs(const char *, const wchar_t *, size_t);  /* auto */
/*00646720*/ int32_t __cdecl __wcstombs_lk(const char *, const wchar_t *, int32_t);  /* auto */
/*00646910*/ int32_t __cdecl _wcsncnt_0(int16_t *, int32_t);  /* auto */
/*00646950*/ int32_t __cdecl __getenv_lk(int8_t *);  // --  /* auto */
/*00646D30*/ int32_t __cdecl ___crtGetLocaleInfoW(LCID, LCTYPE, const wchar_t *, int32_t, int32_t);  /* auto */
/*00646E60*/ int32_t __cdecl sub_646E60(LCID, LCTYPE, const char *, int32_t, int32_t);  /* auto */
/*00646FA0*/ int32_t __cdecl __setmode_lk(int32_t, int32_t);  /* auto */
/*00647010*/ int32_t __cdecl __mbsnbicoll(int8_t *, int8_t *, size_t);  /* auto */
/*00647050*/ const wchar_t *___wtomb_environ();  // ------  /* auto */
/*006470D0*/ int32_t __cdecl ___crtCompareStringA(LCID, int32_t, const char *, const wchar_t *, const char *, int32_t, int32_t);  /* auto */
/*006473A0*/ int32_t __cdecl ___crtsetenv(int8_t *, int32_t);  /* auto */
/*006475B0*/ int32_t __cdecl _findenv(int8_t *, size_t);    /* auto */
/*00647630*/ int32_t *__cdecl _copy_environ(int32_t *);     /* auto */
/*006476A0*/ int8_t *__cdecl __mbschr(int8_t *, int32_t);   /* auto */
/*00647770*/ int32_t ImmGetCompositionStringA(HIMC__ *, int32_t, const void *, int32_t);  /* auto */
/*00647776*/ BOOL ImmSetCompositionStringA(HIMC__ *, int32_t, const void *, int32_t, const void *, int32_t);  /* auto */
/*0064777C*/ BOOL ImmNotifyIME(HIMC__ *, int32_t, int32_t, int32_t);  /* auto */
/*00647782*/ BOOL ImmGetOpenStatus(HIMC__ *);  // --------  /* auto */
/*00647788*/ BOOL ImmSetOpenStatus(HIMC__ *, BOOL);  // --  /* auto */
/*0064778E*/ BOOL ImmSetCompositionWindow(HIMC__ *, tagCOMPOSITIONFORM *);  /* auto */
/*00647794*/ int32_t ImmGetCandidateListA(HIMC__ *, int32_t, tagCANDIDATELIST *, int32_t);  /* auto */
/*0064779A*/ BOOL ImmDestroyContext(HIMC__ *);  // -------  /* auto */
/*006477A0*/ BOOL ImmReleaseContext(HWND__ *, HIMC__ *);    /* auto */
/*006477A6*/ HIMC__ *ImmGetContext(HWND__ *);  // --------  /* auto */
/*006477AC*/ int32_t ImmGetDescriptionA(HKL__ *, const char *, int32_t);  /* auto */
/*006477B2*/ HIMC__ *ImmAssociateContext(HWND__ *, HIMC__ *);  /* auto */
/*006477B8*/ HIMC__ *ImmCreateContext();  // -------------  /* auto */
/*006477BE*/ int32_t WSACleanup();  // -------------------  /* auto */
/*006477C4*/ const char *inet_ntoa(in_addr);  // ---------  /* auto */
/*006477CA*/ hostent *gethostbyname(const char *);  // ---  /* auto */
/*006477D0*/ int32_t gethostname(const char *, int32_t);    /* auto */
/*006477D6*/ int32_t WSAStartup(int16_t, WSAData *);  // -  /* auto */
/*006477DC*/ HRESULT DirectSoundCreate(GUID *, IDirectSound **, IUnknown *);  /* auto */
/*006477E2*/ void RtlUnwind(const void *, const void *, EXCEPTION_RECORD *, const void *);  /* auto */
/*006477F0*/ int32_t WinMain(HINSTANCE__ *, HINSTANCE__ *, const char *, int32_t);  /* auto */
/*00647820*/ HRESULT DirectInputCreateA(HINSTANCE__ *, int32_t, IDirectInputA **, IUnknown *);  /* auto */
/*006488A0*/ int32_t __cdecl __wcsicmp(const wchar_t *, const wchar_t *);  /* auto */
/*00650053*/ void __cdecl j_nullsub_2();  // -------------  /* auto */
/*00650076*/ void __cdecl j_nullsub_2_0();  // -----------  /* auto */
/*006503C0*/ const void *__cdecl sub_6503C0();  // assembly  /* auto */
/*006503CB*/ const void *__cdecl sub_6503CB();  // assembly  /* auto */
/*00653080*/ int32_t __cdecl mgsr_drawTriangle24_impl5(__m64 *, __m64 *, __m64 *);  /* auto */
/*00653B6E*/ int32_t __cdecl mgsr_draw_1024tex_to_buf_impl6(__m64 *, __m64 *, __m64 *);  /* auto */
/*006542E0*/ int32_t __cdecl mgsr_drawTriangle24_impl7(__m64 *, __m64 *, __m64 *);  /* auto */
/*00654C10*/ int32_t __cdecl mgsr_draw_1024tex_to_buf_impl8(__m64 *, __m64 *, __m64 *);  /* auto */
/*006552B0*/ const void *__cdecl mgsr_6552B0();  // assembly  /* auto */
/*00655320*/ const void *__cdecl mgsr_655320();  // assembly  /* auto */
/*006554B0*/ const void *__cdecl mgsr_6554B0();  // assembly  /* auto */
/*006555F0*/ const void *__cdecl mgsr_draw48_copy_withMode();  // assembly  /* auto */
/*00655660*/ const void *__cdecl mgsr_draw48_copy_drawMode0();  // assembly  /* auto */
/*00655840*/ const void *__cdecl mgsr_draw48_copy_drawMode1();  // assembly  /* auto */
/*006559C0*/ const void *__cdecl mgsr_draw49();  // assembly  /* auto */
/*00655A30*/ const void *__cdecl mgsr_draw49_655A30();  // assembly  /* auto */
/*00655C40*/ const void *__cdecl mgsr_draw49_655C40();  // assembly  /* auto */
/*00655DF0*/ const void *__cdecl mgsr_draw51();  // assembly  /* auto */
/*00655E60*/ const void *__cdecl mgsr_draw51_655E60();  // assembly  /* auto */
/*00656060*/ const void *__cdecl mgsr_draw51_656060();  // assembly  /* auto */
/*00656200*/ const void *__cdecl mgsr_draw50();  // assembly  /* auto */
/*00656270*/ const void *__cdecl mgsr_draw50_656270();  // assembly  /* auto */
/*00656450*/ const void *__cdecl mgsr_draw50_656450();  // assembly  /* auto */
/*006565E0*/ const void *__cdecl mgsr_draw53();  // assembly  /* auto */
/*00656650*/ const void *__cdecl mgsr_draw53_656650();  // assembly  /* auto */
/*006568D0*/ const void *__cdecl mgsr_draw53_6568D0();  // assembly  /* auto */
/*00656AF0*/ const void *__cdecl mgsr_draw52();  // assembly  /* auto */
/*00656B60*/ const void *__cdecl mgsr_draw52_656B60();  // assembly  /* auto */
/*00656DE0*/ const void *__cdecl mgsr_draw52_656DE0();  // assembly  /* auto */
/*00657000*/ const void *__cdecl mgsr_draw54();  // assembly  /* auto */
/*00657070*/ const void *__cdecl mgsr_draw54_657070();  // assembly  /* auto */
/*00657310*/ const void *__cdecl mgsr_draw54_657310();  // assembly  /* auto */
/*00657560*/ const void *__cdecl mgsr_draw55();  // assembly  /* auto */
/*006575D0*/ const void *__cdecl mgsr_draw55_6575D0();  // assembly  /* auto */
/*00657870*/ const void *__cdecl mgsr_draw55_657870();  // assembly  /* auto */
/*00657AB0*/ const void *__cdecl mgsr_draw56();  // assembly  /* auto */
/*00657B20*/ const void *__cdecl mgsr_draw56_657B20();  // assembly  /* auto */
/*00657CB0*/ const void *__cdecl mgsr_draw56_657CB0();  // assembly  /* auto */
/*00657DE0*/ const void *__cdecl mgsr_draw57();  // assembly  /* auto */
/*00657E50*/ const void *__cdecl mgsr_draw57_657E50();  // assembly  /* auto */
/*00658000*/ const void *__cdecl mgsr_draw57_658000();  // assembly  /* auto */
/*00658160*/ const void *__cdecl mgsr_draw58();  // assembly  /* auto */
/*006581D0*/ const void *__cdecl mgsr_draw58_6581D0();  // assembly  /* auto */
/*00658390*/ const void *__cdecl mgsr_draw58_658390();  // assembly  /* auto */
/*006584F0*/ const void *__cdecl mgsr_draw59();  // assembly  /* auto */
/*00658560*/ const void *__cdecl mgsr_draw59_658560();  // assembly  /* auto */
/*00658710*/ const void *__cdecl mgsr_draw59_658710();  // assembly  /* auto */
/*00658870*/ const void *__cdecl mgsr_draw40();  // assembly  /* auto */
/*006588D0*/ const void *__cdecl mgsr_draw40_6588D0();  // assembly  /* auto */
/*006589B0*/ const void *__cdecl mgsr_draw32();  // assembly  /* auto */
/*00658A10*/ const void *__cdecl mgsr_draw32_658A10();  // assembly  /* auto */
/*00658AF0*/ const void *__cdecl mgsr_draw33();  // assembly  /* auto */
/*00658B50*/ const void *__cdecl mgsr_draw33_658B50();  // assembly  /* auto */
/*00658C60*/ const void *__cdecl mgsr_draw34();  // assembly  /* auto */
/*00658CC0*/ const void *__cdecl mgsr_draw34_658CC0();  // assembly  /* auto */
/*00658DA0*/ const void *__cdecl mgsr_draw35();  // assembly  /* auto */
/*00658E00*/ const void *__cdecl mgsr_draw35_658E00();  // assembly  /* auto */
/*00658F10*/ const void *__cdecl mgsr_draw36();  // assembly  /* auto */
/*00658F70*/ const void *__cdecl mgsr_draw36_658F70();  // assembly  /* auto */
/*006590E0*/ const void *__cdecl mgsr_draw37();  // assembly  /* auto */
/*00659140*/ const void *__cdecl mgsr_draw37_659140();  // assembly  /* auto */
/*006592B0*/ const void *__cdecl mgsr_draw38();  // assembly  /* auto */
/*00659310*/ const void *__cdecl mgsr_draw38_659310();  // assembly  /* auto */
/*006594B0*/ const void *__cdecl mgsr_draw39();  // assembly  /* auto */
/*00659510*/ const void *__cdecl mgsr_draw39_659510();  // assembly  /* auto */
/*00659580*/ void __cdecl tqia_dec_659580(int32_t);  // --  /* auto */
/*006595C0*/ int32_t __cdecl tqia_dec_6595C0(int32_t, int32_t);  /* auto */
/*00659608*/ const void *__cdecl tqia_reset_659608();  // assembly  /* auto */
/*00659930*/ const void *__cdecl tqia_659930();  // assembly  /* auto */
/*00659A90*/ const void *__cdecl tqia_659A90();  // assembly  /* auto */
/*00659B90*/ int32_t __cdecl tqia_dec_659B90(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0065AEB0*/ int32_t *__cdecl tqia_dec_65AEB0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0065C120*/ const void *__cdecl tqia_fill_buf_special();  // assembly  /* auto */
/*0065C290*/ int32_t tqia_65C290();  // ------------------  /* auto */
/*0065CA50*/ int32_t *__cdecl tqia_dec_65CA50(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0065E280*/ int16_t *__cdecl tqia_dec_65E280(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0065FAE0*/ int32_t __cdecl asm_update_65FAE0(int32_t);    /* auto */
/*0065FB54*/ __int16 __cdecl asm_update2_65FB54(int32_t, int32_t);  /* auto */
/*0065FEA0*/ void __cdecl m8bit_asm_65FEA0(int32_t, int32_t, int8_t **);  /* auto */
/*00665EB0*/ void __cdecl tqi_asm_665EB0(int32_t);  // ---  /* auto */
/*00665EF0*/ const void *__cdecl tqi_asm_reset_665EF0();  // assembly  /* auto */
/*00666210*/ const void *__cdecl tqi_asm_666210();  // assembly  /* auto */
/*00666370*/ const void *__cdecl tqi_asm_666370();  // assembly  /* auto */
/*00666480*/ int32_t __cdecl tqi_asm_666480(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00668810*/ int32_t *__cdecl tqi_asm_668810(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00669A80*/ void __cdecl m8bit_asm_669A80(int32_t, int32_t, int32_t);  /* auto */
/*0066BAF8*/ void __cdecl m8bit_asm_66BAF8(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //DK2_FUNCTIONS_H  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
