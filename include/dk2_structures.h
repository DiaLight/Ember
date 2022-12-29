#include <Windows.h>
#include <ddraw.h>
#include <d3d.h>
#include <dinput.h>
#include <api/imports.h>

namespace dk2 {

    class MyLock;
    class PtrArrList;
    class CComponent;
    class GameAction;
    class GameActionArray;
    class MyProfiler;
    class CGameComponent;
    class CEngineInterface;
    class CWorldEntry;
    class CRenderInfo;
    class CPCEngineInterface;
    class MySurfDesc;
    class MySurface;
    class PixelMask;
    class MyGame_f4C;
    class StaticListeners;
    class MyDdSurface;
    class MyDdSurfaceEx;
    class CWindowTest;
    class MyGame;
    class DdModeListItem;
    class DdModeList;
    class MyVideoSettings;
    class DDGAMMARAMP;
    class MyDirectDraw;
    class CCommunicationInterface;
    class Area2i;
    class CGadget;
    class CWindow;
    class Pos2i;
    class AABB;
    class CGuiManager;
    class MyStaticStruct;
    class RtGuiView;
    class CDefaultPlayerInterface;
    class CBridgeInterface;
    class My_sub_56F850;
    class ProbablyGlobalRenderObj;
    class FloatObjThing;
    class CBridge;
    class CResearchOrder;
    class MyCreatureCollection;
    class CMapEntry;
    class CMap;
    class GameActionHandler;
    class CWorldShortEntry3;
    class CWorldShortEntry2;
    class CWorld;
    class CWorldShortEntry;
    class CWorldInterface;
    class MyCbHandle;
    class MySharedObj;
    class MyComEx;
    class AsyncThing;
    class MyDxInputManagerCb;
    class Obj6723B8;
    class MyInputManagerCb;
    class LockBase;
    class Buf1000;
    class DxActionQueue;
    class MyMouse;
    class MyMouseCb_vtbl;
    class Event0_winShown7;
    class MyMouseUpdater;
    class Event0_unk6;
    class ThreadCtx;
    class CFrontEndComponent;
    class CButton;
    class Size2i;
    class CClickButton;
    class CRadioButton;
    class CVerticalSlider;
    class CHorizontalSlider;
    class ButtonCfg;
    class WindowCfg;
    class StrCfg;
    class NameCfg;
    class MyUnk674058;
    class FontObj;
    class FontObjWr;
    class MyObj67B948;
    class MyTextText;
    class FileStorageBase;
    class TbDiscFileStorage;
    class MyFileInfo;
    class CFileManager;
    class MyKeyboard;
    class MyResources_f29CB;
    class MyResources_f2E38Obj;
    class MyResources;
    class KeyEntry;
    class MyTextFont;
    class MyInputStream;
    class MyMemoryMapStream;
    class MyFileStream;
    class MyStr;
    class MySubStr;
    class TbDiscFileStorage_vtbl;
    class MyDirectory;
    class MyFileIterator;
    class DiscFileBase;
    class TbDiscFile;
    class MyLangObj;
    class MyLocalStr;
    class MyTextBase;
    class MyFileStorage;
    class Vtable_672774;
    class WadHeader;
    class MyALList;
    class WadContent;
    class MyWadDirectory;
    class MyCachedOffsStream;
    class MySemaphore;
    class MyConcurrentStream;
    class WadEntry_off8;
    class MyALListEntry;
    class WadEntry;
    class MyDirsLList;
    class MyFilesLList;
    class WadDirObj;
    class MyLListEntry;
    class MyLList2;
    class MyLList2_entry;
    class WadFileObj;
    class TbCharStringList_vtbl;
    class MyWadUnkObj;
    class ResourceIndexEntry;
    class MyTextMBToUni;
    class BFMU_header;
    class MyTextUniToMB;
    class MyTextMB;
    class MyFontHeader;
    class MyFontEntryHeader;
    class MyStringTexture;
    class MyTRBase_vtable;
    class MyTRBase;
    class MyCharRenderCtx;
    class MyCRCtx;
    class MyTRCtx;
    class MyMultilineRenderCtx;
    class MyTRCtx2Sub;
    class MyTRArgs;
    class MyCRBase_vtable;
    class MyCRBase;
    class MyDRBase_vtable;
    class MyDRBase;
    class MyFontRendererBase_vtable;
    class MyFontRendererBase;
    class CharImageReader;
    class CharImageWriter;
    class CharRenderCtx;
    class MySignalBase;
    class MyDxDevice;
    class MyDirectInput;
    class MouseRgbDxActionList;
    class MyDxKeyboard;
    class DIDATAFORMAT;
    class DIOBJECTDATAFORMAT;
    class DIPROPHEADER;
    class DIPROPDWORD;
    class MyWindowMsgs_vtable;
    class Vtable_672434;
    class WndMsgDxActionList;
    class MyWindowMsgs;
    class Vtable_6728FC;
    class MouseXyzDxActionList;
    class MyDxMouse;
    class Obj672844;
    class MyCb6723D0;
    class ControlSurf;
    class CursorDrawer;
    class MyLList_fields;
    class SharedArr79DBD0List;
    class SharedArr79DBD0;
    class SharedArr79DBD0Item;
    class MyCallback;
    class ControlKeysUpdater;
    class Event5_keyboard;
    class MyDxInputStateCb_vtbl;
    class MyDxInputState;
    class LPDIDEVICEOBJECTDATA_10;
    class DIMOUSESTATE;
    class DxAction;
    class WndMsgDxAction;
    class MyInputListenersHolder;
    class MyCollectDxAction_Action;
    class MyCollectDxAction;
    class MouseRgbDxAction;
    class MouseXyzDxAction;
    class CNetworkComponent;
    class TbWType_t_TbPalette_t__vtbl;
    class CEntryComponent;
    class GameObj6A0B00;
    class GameObj6A0B00Item;
    class CvtItem;
    class Item5B06D0;
    class StubStruc6787B8;
    class StubStruc67B320;
    class StubStruc68F650;
    class StubStruc6A1EC8;
    class StubStruc6B84C8;
    class StubStruc6BF280;
    class StubStruc6C3DA0;
    class GameScoreRecord;
    class arr_769A78_t;
    class arr_7793A8_t;
    class VLCtable;
    class arr_6BEA7E_t1;
    class arr_66C780_t;
    class EXCEPTION_RECORD;
    class MyDblNamedSurface;
    class BufCx400;
    class MyNameObjMap;
    class BufCx400Item;
    class Arrp31x400;
    class Arrp31x400Item;
    class MyCESurfHandle;
    class CEngineSurfaceBase;
    class CEngineSurface;
    class MySurfaceWrapper;
    class MyCESurfScale;
    class Obj792D48;
    class Obj79DC68;
    class Obj672520Interface;
    class Obj672510;
    class Obj672E70;
    class Obj672500;
    class Obj672E80;
    class CDirectIFFFile;
    class MyTextures;
    class CEngineCompressedSurface;
    class CEngineDDSurface;
    class MyCEngineSurfDesc;
    class sVLCtable;
    class VLCtable_tab2;
    class CLocalCommunication;
    class GameActionCtx;
    class GameActionRecord;
    class CListBox;
    class TbAudioSystem;
    class MyTbAudioSystem;
    class CSoundSystem;
    class TbSysCommand_SetNumberOfChannels;
    class SurfHashList;
    class SurfaceHolder;
    class SurfHashListItem;
    class CEngineSprite;
    class SceneObject2EList;
    class SceneObject30List;
    class SceneObject2E;
    class CEngine2DMeshSurface;
    class CEngineStaticMesh;
    class CEngineStaticHeightField;
    class CEngineUnlitProceduralMesh;
    class SceneObject30;
    class SurfHashList2;
    class DxDeviceInfo;
    class DxD3dInfo;
    class DxModeInfo;
    class CFileManager_f130;
    class CFileManager_f130Item;

#pragma pack(push, 1)
    class MyLock {
    public:
        
        /*   0*/ _RTL_CRITICAL_SECTION *f0_critSec;
        /*   4*/ int f4_locked;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        
        void dump() {
            printf("f0_critSec: _RTL_CRITICAL_SECTION(%p)\n", this->f0_critSec);
            printf("f4_locked: %d\n", this->f4_locked);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyLock) == 0x18);

#pragma pack(push, 1)
    class PtrArrList {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ uint32_t *f4_base;
        /*   8*/ uint32_t *f8_wpos;
        /*   C*/ uint32_t *fC_end;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4_base: uint32_t(%p)\n", this->f4_base);
            printf("f8_wpos: uint32_t(%p)\n", this->f8_wpos);
            printf("fC_end: uint32_t(%p)\n", this->fC_end);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(PtrArrList) == 0x10);

#pragma pack(push, 1)
    class CComponent {
    public:
        struct vtbl_t {
            /*   0*/ uint32_t *(__thiscall *CComponent___scalar_deleting_destructor_uint)(CComponent *self, char);  // _DWORD *(__thiscall *)(_DWORD *Block, char a2)
            /*   4*/ void(__stdcall *__purecall)();  // void (__stdcall __noreturn *)()
            /*   8*/ void *(__stdcall *duplicate_1_1)();  // void *(__stdcall *)()
            /*   C*/ void *(__stdcall *duplicate_1_2)();  // void *(__stdcall *)()
            /*  10*/ void *(__stdcall *duplicate_1_3)();  // void *(__stdcall *)()
            /*  14*/ void *(__stdcall *duplicate_1_4)();  // void *(__stdcall *)()
        };
        static_assert(sizeof(vtbl_t) == 0x18);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t is_component_destroy;
        /*   8*/ int field_4;
        
        virtual ~CComponent();
        void dump() {
            printf("is_component_destroy: %d\n", this->is_component_destroy);
            printf("field_4: %d\n", this->field_4);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CComponent) == 0xC);

#pragma pack(push, 1)
    class GameAction {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ uint32_t field_4;
        /*   8*/ uint32_t field_8;
        /*   C*/ int fC_actionKind;
        /*  10*/ __int16 f10__cpyFrF8;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("fC_actionKind: %d\n", this->fC_actionKind);
            printf("f10__cpyFrF8: %d\n", this->f10__cpyFrF8);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(GameAction) == 0x12);

#pragma pack(push, 1)
    class GameActionArray {
    public:
        
        /*   0*/ GameAction f0_arr[32];
        /* 240*/ uint32_t f240_counter;
        /* 244*/ int f244_counter_32lim;
        /* 248*/ int f248_idx;
        
        void dump() {
            printf("f240_counter: %d\n", this->f240_counter);
            printf("f244_counter_32lim: %d\n", this->f244_counter_32lim);
            printf("f248_idx: %d\n", this->f248_idx);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(GameActionArray) == 0x24C);

#pragma pack(push, 1)
    class MyProfiler {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ CDefaultPlayerInterface *fC_player_i;
        /*  10*/ CBridge *f10_c_bridge;
        /*  14*/ CWorld *f14_cworld;
        /*  18*/ CCommunicationInterface *f18_communication_interface;
        /*  1C*/ GameActionArray f1C_clickList;
        /* 268*/ uint32_t f268;
        /* 26C*/ uint32_t field_26C;
        /* 270*/ uint32_t f270_counter;
        /* 274*/ uint32_t f274_counter;
        /* 278*/ uint8_t gap_278[4];
        /* 27C*/ uint32_t field_int_27C;
        /* 280*/ int field_280;
        /* 284*/ int field_284;
        /* 288*/ int field_288;
        /* 28C*/ int field_28C;
        /* 290*/ __int16 field_290;
        /* 292*/ int field_292;
        /* 296*/ int field_296;
        /* 29A*/ int field_29A;
        /* 29E*/ int field_29E;
        /* 2A2*/ int field_2A2;
        /* 2A6*/ int field_2A6;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("fC_player_i: CDefaultPlayerInterface(%p)\n", this->fC_player_i);
            printf("f10_c_bridge: CBridge(%p)\n", this->f10_c_bridge);
            printf("f14_cworld: CWorld(%p)\n", this->f14_cworld);
            printf("f18_communication_interface: CCommunicationInterface(%p)\n", this->f18_communication_interface);
            printf("f268: %d\n", this->f268);
            printf("field_26C: %d\n", this->field_26C);
            printf("f270_counter: %d\n", this->f270_counter);
            printf("f274_counter: %d\n", this->f274_counter);
            printf("gap_278: %d\n", this->gap_278);
            printf("field_int_27C: %d\n", this->field_int_27C);
            printf("field_280: %d\n", this->field_280);
            printf("field_284: %d\n", this->field_284);
            printf("field_288: %d\n", this->field_288);
            printf("field_28C: %d\n", this->field_28C);
            printf("field_290: %d\n", this->field_290);
            printf("field_292: %d\n", this->field_292);
            printf("field_296: %d\n", this->field_296);
            printf("field_29A: %d\n", this->field_29A);
            printf("field_29E: %d\n", this->field_29E);
            printf("field_2A2: %d\n", this->field_2A2);
            printf("field_2A6: %d\n", this->field_2A6);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyProfiler) == 0x2AA);

#pragma pack(push, 1)
    class CGameComponent : public CComponent {
    public:
        struct vtbl_t /*: public CComponent::vtbl_t */{
            /*   0*/ uint32_t *(__thiscall *scalar_destructor)(CGameComponent *self, char);  // _DWORD *(__thiscall *)(_DWORD *Block, char)
            /*   4*/ int(__cdecl *CMap__fun_4B4C20)();  // int (*)()
            /*   8*/ void(__thiscall *ret_void_0args_0)(CGameComponent *self);  // void (__thiscall *)(void *)
            /*   C*/ void *CGameComponent__fun_525350;
            /*  10*/ void *unknown_libname_14;
            /*  14*/ uint32_t *(__thiscall *CGameComponent__mainGuiLoop)(CGameComponent *self);  // void ***(__thiscall *)(CGameComponent *this)
        };
        static_assert(sizeof(vtbl_t) == 0x18);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ uint32_t exit_flag;
        /*  10*/ MyProfiler mt_profiler;
        /* 2BA*/ uint32_t drawCount;
        /* 2BE*/ int field_2BE;
        /* 2C2*/ DWORD lastTimeMs;
        /* 2C6*/ int f2C6__vftable;
        /* 2CA*/ int field_2CA;
        /* 2CE*/ int field_2CE;
        /* 2D2*/ int field_2D2;
        /* 2D6*/ int field_2D6;
        /* 2DA*/ int field_2DA;
        
        virtual ~CGameComponent();
        void dump() {
            printf("exit_flag: %d\n", this->exit_flag);
            printf("drawCount: %d\n", this->drawCount);
            printf("field_2BE: %d\n", this->field_2BE);
            printf("lastTimeMs: %d\n", this->lastTimeMs);
            printf("f2C6__vftable: %d\n", this->f2C6__vftable);
            printf("field_2CA: %d\n", this->field_2CA);
            printf("field_2CE: %d\n", this->field_2CE);
            printf("field_2D2: %d\n", this->field_2D2);
            printf("field_2D6: %d\n", this->field_2D6);
            printf("field_2DA: %d\n", this->field_2DA);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CGameComponent) == 0x2DE);

#pragma pack(push, 1)
    class CEngineInterface {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CPlayerInterface__fun_44DEA0)(CEngineInterface *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ void(__stdcall *__purecall)();  // void (__stdcall __noreturn *)()
            /*   8*/ void *(__stdcall *duplicate_1_1)();  // void *(__stdcall *)()
            /*   C*/ void(__cdecl *nullsub_2)();  // void (__cdecl *)()
            /*  10*/ void *(__stdcall *duplicate_3_1)();  // void *(__stdcall *)()
            /*  14*/ int(__stdcall *CPlayerInterface__fun_628BC0)();  // int (__stdcall *)()
            /*  18*/ void(__stdcall *nullsub_44)(int);  // void (__stdcall *)(int a1)
            /*  1C*/ void *(__stdcall *duplicate_5_1)();  // void *(__stdcall *)()
            /*  20*/ void *(__stdcall *duplicate_1_2)();  // void *(__stdcall *)()
            /*  24*/ void *(__stdcall *duplicate_1_3)();  // void *(__stdcall *)()
            /*  28*/ void *(__stdcall *duplicate_1_4)();  // void *(__stdcall *)()
            /*  2C*/ void *(__stdcall *duplicate_1_5)();  // void *(__stdcall *)()
            /*  30*/ void *(__stdcall *duplicate_6_1)();  // void *(__stdcall *)()
            /*  34*/ void *(__stdcall *duplicate_6_2)();  // void *(__stdcall *)()
            /*  38*/ void *(__stdcall *duplicate_5_2)();  // void *(__stdcall *)()
            /*  3C*/ void *(__stdcall *duplicate_5_3)();  // void *(__stdcall *)()
            /*  40*/ void *(__stdcall *duplicate_5_4)();  // void *(__stdcall *)()
            /*  44*/ void *(__stdcall *duplicate_5_5)();  // void *(__stdcall *)()
            /*  48*/ void *(__stdcall *duplicate_1_6)();  // void *(__stdcall *)()
            /*  4C*/ void *(__stdcall *duplicate_1_7)();  // void *(__stdcall *)()
            /*  50*/ int(__stdcall *CEngineInterface__fun_517400)(int, int, int);  // int (__stdcall *)(int a1, int a2, int a3)
            /*  54*/ int(__stdcall *CEngineInterface__fun_443070)(int, int, int, uint32_t *, int, int);  // int (__stdcall *)(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
            /*  58*/ int(__stdcall *CEngineInterface__fun_443090)(int, int, int, int, uint32_t *);  // int (__stdcall *)(int a1, int a2, int a3, int a4, _DWORD *a5)
            /*  5C*/ void(__stdcall *nullsub_43)(int, int, int, int);  // void (__stdcall *)(int a1, int a2, int a3, int a4)
            /*  60*/ void(__stdcall *nullsub_21)(int, int, int, int, int, int);  // void (__stdcall *)(int a1, int a2, int a3, int a4, int a5, int a6)
            /*  64*/ void *(__stdcall *duplicate_23_1)();  // void *(__stdcall *)()
            /*  68*/ void(__stdcall *nullsub_22)(int, int, int);  // void (__stdcall *)(int a1, int a2, int a3)
            /*  6C*/ void *(__stdcall *duplicate_6_3)();  // void *(__stdcall *)()
            /*  70*/ void *(__stdcall *duplicate_6_4)();  // void *(__stdcall *)()
            /*  74*/ int(__stdcall *CPlayerInterface__fun_402AD0)();  // int (__stdcall *)()
            /*  78*/ void *(__stdcall *duplicate_6_5)();  // void *(__stdcall *)()
            /*  7C*/ void *(__stdcall *duplicate_6_6)();  // void *(__stdcall *)()
            /*  80*/ int(__stdcall *CEngineInterface__fun_5173B0)(int, int);  // int (__stdcall *)(int a1, int a2)
            /*  84*/ void *(__stdcall *duplicate_6_7)();  // void *(__stdcall *)()
            /*  88*/ void *(__stdcall *duplicate_29_1)();  // void *(__stdcall *)()
            /*  8C*/ void *(__stdcall *duplicate_3_2)();  // void *(__stdcall *)()
            /*  90*/ int(__stdcall *CEngineInterface__fun_4430D0)(int, int, int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4, int a5, int a6)
            /*  94*/ int(__stdcall *CEngineInterface__fun_4430C0)(int, int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4, int a5)
            /*  98*/ void *(__stdcall *duplicate_36_1)();  // void *(__stdcall *)()
            /*  9C*/ void *(__stdcall *duplicate_6_8)();  // void *(__stdcall *)()
            /*  A0*/ void *(__stdcall *duplicate_37_1)();  // void *(__stdcall *)()
            /*  A4*/ void *(__stdcall *loc_43A8A0)();  // void *(__stdcall *)()
            /*  A8*/ void *(__stdcall *duplicate_6_9)();  // void *(__stdcall *)()
            /*  AC*/ int(__stdcall *CEngineInterface__fun_628E30)(int);  // int (__stdcall *)(int a1)
            /*  B0*/ void *(__stdcall *duplicate_29_2)();  // void *(__stdcall *)()
            /*  B4*/ void(__stdcall *nullsub_10)(int, int);  // void (__stdcall *)(int a1, int a2)
            /*  B8*/ void *(__stdcall *duplicate_26_1)();  // void *(__stdcall *)()
            /*  BC*/ __int16(__thiscall *CEngineInterface__fun_4430E0)(CEngineInterface *self);  // __int16 (__thiscall *)(_WORD *this)
            /*  C0*/ __int16(__thiscall *CEngineInterface__fun_4430F0)(CEngineInterface *self, __int16);  // __int16 (__thiscall *)(_WORD *this, __int16 a2)
            /*  C4*/ __int16(__thiscall *CEngineInterface__fun_443100)(CEngineInterface *self);  // __int16 (__thiscall *)(_WORD *this)
            /*  C8*/ __int16(__thiscall *CEngineInterface__fun_443110)(CEngineInterface *self, __int16);  // __int16 (__thiscall *)(_WORD *this, __int16 a2)
            /*  CC*/ void *(__stdcall *duplicate_29_3)();  // void *(__stdcall *)()
            /*  D0*/ uint32_t *(__stdcall *CEngineInterface__fun_443120)();  // _DWORD *(__stdcall *)()
            /*  D4*/ int(__stdcall *CEngineInterface__fun_443150)(int, int);  // int (__stdcall *)(int a1, int a2)
            /*  D8*/ void *(__stdcall *duplicate_20_1)();  // void *(__stdcall *)()
            /*  DC*/ void *(__stdcall *duplicate_53_1)();  // void *(__stdcall *)()
            /*  E0*/ void *(__stdcall *duplicate_37_2)();  // void *(__stdcall *)()
            /*  E4*/ int(__stdcall *CEngineInterface__fun_628B70)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /*  E8*/ void *(__stdcall *duplicate_57_1)();  // void *(__stdcall *)()
            /*  EC*/ void *(__stdcall *duplicate_20_2)();  // void *(__stdcall *)()
            /*  F0*/ void *(__stdcall *loc_43A880)();  // void *(__stdcall *)()
            /*  F4*/ void *(__stdcall *loc_43A890)();  // void *(__stdcall *)()
            /*  F8*/ void *(__stdcall *duplicate_41_1)();  // void *(__stdcall *)()
            /*  FC*/ void *(__stdcall *duplicate_41_2)();  // void *(__stdcall *)()
            /* 100*/ void *(__stdcall *duplicate_41_3)();  // void *(__stdcall *)()
            /* 104*/ void *(__stdcall *duplicate_57_2)();  // void *(__stdcall *)()
            /* 108*/ void *(__stdcall *duplicate_57_3)();  // void *(__stdcall *)()
            /* 10C*/ void *(__stdcall *duplicate_57_4)();  // void *(__stdcall *)()
        };
        static_assert(sizeof(vtbl_t) == 0x110);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t field_0;
        /*   8*/ CBridge *f4_pCBridge;
        /*   C*/ uint16_t field_8;
        /*   E*/ uint16_t field_A;
        /*  10*/ uint32_t field_C;
        /*  14*/ uint32_t field_10;
        /*  18*/ int field_14;
        /*  1C*/ int field_18;
        /*  20*/ int field_1C;
        /*  24*/ int field_20;
        /*  28*/ int field_24;
        /*  2C*/ int field_28;
        /*  30*/ int field_2C;
        /*  34*/ __int16 field_30;
        /*  36*/ int field_32;
        /*  3A*/ int field_36;
        /*  3E*/ int field_3A;
        /*  42*/ int field_3E;
        /*  46*/ int field_42;
        /*  4A*/ int field_46;
        /*  4E*/ int field_4A;
        /*  52*/ int field_4E;
        /*  56*/ int field_52;
        /*  5A*/ int field_56;
        /*  5E*/ int field_5A;
        /*  62*/ int field_5E;
        /*  66*/ int field_62;
        /*  6A*/ int field_66;
        /*  6E*/ int field_6A;
        
        virtual ~CEngineInterface();
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4_pCBridge: CBridge(%p)\n", this->f4_pCBridge);
            printf("field_8: %d\n", this->field_8);
            printf("field_A: %d\n", this->field_A);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
            printf("field_2C: %d\n", this->field_2C);
            printf("field_30: %d\n", this->field_30);
            printf("field_32: %d\n", this->field_32);
            printf("field_36: %d\n", this->field_36);
            printf("field_3A: %d\n", this->field_3A);
            printf("field_3E: %d\n", this->field_3E);
            printf("field_42: %d\n", this->field_42);
            printf("field_46: %d\n", this->field_46);
            printf("field_4A: %d\n", this->field_4A);
            printf("field_4E: %d\n", this->field_4E);
            printf("field_52: %d\n", this->field_52);
            printf("field_56: %d\n", this->field_56);
            printf("field_5A: %d\n", this->field_5A);
            printf("field_5E: %d\n", this->field_5E);
            printf("field_62: %d\n", this->field_62);
            printf("field_66: %d\n", this->field_66);
            printf("field_6A: %d\n", this->field_6A);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineInterface) == 0x72);

#pragma pack(push, 1)
    class CWorldEntry {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ __int16 field_C;
        /*   E*/ char field_E;
        /*   F*/ uint32_t field_F;
        /*  13*/ uint32_t field_13;
        /*  17*/ int field_17;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_E: %d\n", this->field_E);
            printf("field_F: %d\n", this->field_F);
            printf("field_13: %d\n", this->field_13);
            printf("field_17: %d\n", this->field_17);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CWorldEntry) == 0x1B);

#pragma pack(push, 1)
    class CRenderInfo {
    public:
        struct vtbl_t {
            /*   0*/ int(__thiscall *CRenderInfo__fun_4B4710)(CRenderInfo *self);  // int (__thiscall *)(int this)
            /*   4*/ int(__thiscall *CRenderInfo__fun_4B47C0)(CRenderInfo *self);  // int (__thiscall *)(int this)
        };
        static_assert(sizeof(vtbl_t) == 0x8);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        /*  1C*/ __int16 field_1C;
        /*  1E*/ __int16 field_1E;
        /*  20*/ __int16 field_20;
        /*  22*/ uint16_t field_22;
        /*  24*/ uint16_t field_24;
        /*  26*/ __int16 field_26;
        /*  28*/ int field_28;
        /*  2C*/ int field_2C;
        /*  30*/ int field_30;
        /*  34*/ int field_34;
        /*  38*/ uint8_t gap_38[4];
        /*  3C*/ int field_3C;
        /*  40*/ int field_40;
        /*  44*/ uint8_t gap_44[4];
        /*  48*/ char field_48;
        /*  49*/ char field_49;
        /*  4A*/ char field_4A;
        /*  4B*/ char field_4B;
        /*  4C*/ char field_4C;
        /*  4D*/ char field_4D;
        /*  4E*/ char field_4E;
        /*  4F*/ __int16 field_4F;
        /*  51*/ __int16 field_51;
        /*  53*/ __int16 field_53;
        /*  55*/ __int16 field_55;
        /*  57*/ __int16 field_57;
        /*  59*/ __int16 field_59;
        /*  5B*/ int field_5B;
        /*  5F*/ uint8_t gap_5F[20];
        /*  73*/ int field_73;
        /*  77*/ int field_77;
        /*  7B*/ int field_7B;
        /*  7F*/ int field_7F;
        /*  83*/ int field_83;
        /*  87*/ int field_87;
        /*  8B*/ int field_8B;
        /*  8F*/ char field_8F;
        /*  90*/ int field_90;
        /*  94*/ int field_94;
        /*  98*/ int field_98;
        /*  9C*/ int field_9C;
        /*  A0*/ int field_A0;
        /*  A4*/ int field_A4;
        /*  A8*/ uint8_t gap_A8[4];
        /*  AC*/ char field_AC;
        /*  AD*/ char field_AD;
        /*  AE*/ char field_AE;
        /*  AF*/ char field_AF;
        
        virtual ~CRenderInfo();
        void dump() {
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_1E: %d\n", this->field_1E);
            printf("field_20: %d\n", this->field_20);
            printf("field_22: %d\n", this->field_22);
            printf("field_24: %d\n", this->field_24);
            printf("field_26: %d\n", this->field_26);
            printf("field_28: %d\n", this->field_28);
            printf("field_2C: %d\n", this->field_2C);
            printf("field_30: %d\n", this->field_30);
            printf("field_34: %d\n", this->field_34);
            printf("gap_38: %d\n", this->gap_38);
            printf("field_3C: %d\n", this->field_3C);
            printf("field_40: %d\n", this->field_40);
            printf("gap_44: %d\n", this->gap_44);
            printf("field_48: %d\n", this->field_48);
            printf("field_49: %d\n", this->field_49);
            printf("field_4A: %d\n", this->field_4A);
            printf("field_4B: %d\n", this->field_4B);
            printf("field_4C: %d\n", this->field_4C);
            printf("field_4D: %d\n", this->field_4D);
            printf("field_4E: %d\n", this->field_4E);
            printf("field_4F: %d\n", this->field_4F);
            printf("field_51: %d\n", this->field_51);
            printf("field_53: %d\n", this->field_53);
            printf("field_55: %d\n", this->field_55);
            printf("field_57: %d\n", this->field_57);
            printf("field_59: %d\n", this->field_59);
            printf("field_5B: %d\n", this->field_5B);
            printf("gap_5F: %d\n", this->gap_5F);
            printf("field_73: %d\n", this->field_73);
            printf("field_77: %d\n", this->field_77);
            printf("field_7B: %d\n", this->field_7B);
            printf("field_7F: %d\n", this->field_7F);
            printf("field_83: %d\n", this->field_83);
            printf("field_87: %d\n", this->field_87);
            printf("field_8B: %d\n", this->field_8B);
            printf("field_8F: %d\n", this->field_8F);
            printf("field_90: %d\n", this->field_90);
            printf("field_94: %d\n", this->field_94);
            printf("field_98: %d\n", this->field_98);
            printf("field_9C: %d\n", this->field_9C);
            printf("field_A0: %d\n", this->field_A0);
            printf("field_A4: %d\n", this->field_A4);
            printf("gap_A8: %d\n", this->gap_A8);
            printf("field_AC: %d\n", this->field_AC);
            printf("field_AD: %d\n", this->field_AD);
            printf("field_AE: %d\n", this->field_AE);
            printf("field_AF: %d\n", this->field_AF);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CRenderInfo) == 0xB0);

#pragma pack(push, 1)
    class CPCEngineInterface : public CEngineInterface {
    public:
        struct vtbl_t /*: public CEngineInterface::vtbl_t */{
            /*   0*/ void *(__thiscall *CPCEngineInterface__fun_598350)(CPCEngineInterface *self, char);  // void *(__thiscall *)(void *Block, char)
            /*   4*/ int(__thiscall *CPCEngineInterface__fun_5983C0)(CPCEngineInterface *self, int);  // int (__thiscall *)(CPCEngineInterface *this, int a2)
            /*   8*/ void *CPCEngineInterface__fun_598690;
            /*   C*/ void(__cdecl *ret_void_0args)();  // void (__cdecl *)()
            /*  10*/ void(__cdecl *anonymous_0)();  // void (__cdecl *)()
            /*  14*/ int(__cdecl *CPlayerInterface__fun_628BC0)();  // int (*)()
            /*  18*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int)
            /*  1C*/ int(__cdecl *anonymous_1)();  // int (*)()
            /*  20*/ void *CPCEngineInterface__fun_5986D0;
            /*  24*/ int(__stdcall *CPCEngineInterface__fun_5986F0)(uint32_t *);  // int (__stdcall *)(int *)
            /*  28*/ void *CPCEngineInterface__fun_598800;
            /*  2C*/ int(__thiscall *CPCEngineInterface__fun_598880)(CPCEngineInterface *self, uint32_t *);  // int (__thiscall *)(CPCEngineInterface *this, int *a2)
            /*  30*/ void(__stdcall *anonymous_2)(int);  // void (__stdcall *)(int)
            /*  34*/ void(__stdcall *anonymous_3)(int);  // void (__stdcall *)(int)
            /*  38*/ void *CPCEngineInterface__fun_59D760;
            /*  3C*/ int(__thiscall *CPCEngineInterface__fun_59D7F0)(CPCEngineInterface *self);  // int (__thiscall *)(CPCEngineInterface *this)
            /*  40*/ void *CPCEngineInterface__fun_59D860;
            /*  44*/ void *CPCEngineInterface__fun_59D890;
            /*  48*/ int(__stdcall *CPCEngineInterface__fun_5992B0)(float, float, int, int);  // int (__stdcall *)(float, float, int, int)
            /*  4C*/ int(__stdcall *CPCEngineInterface__fun_5998C0)(float, float, int);  // int (__stdcall *)(float, float, int)
            /*  50*/ int(__stdcall *ret_0_3args)(int, int, int);  // int (__stdcall *)(int, int, int)
            /*  54*/ void *CPCEngineInterface__fun_59A6A0;
            /*  58*/ int(__thiscall *CPCEngineInterface_createAndPutInArrp31x400_59A650)(CPCEngineInterface *self, char *, int, int, int, int);  // int (__thiscall *)(CPCEngineInterface *, char *, int, int, int, int)
            /*  5C*/ void *CPCEngineInterface__fun_59B0C0;
            /*  60*/ void(__stdcall *ret_void_6args)(int, int, int, int, int, int);  // void (__stdcall *)(int, int, int, int, int, int)
            /*  64*/ void(__stdcall *ret_void_4args)(int, int, int, int);  // void (__stdcall *)(int, int, int, int)
            /*  68*/ int(__thiscall *CPCEngineInterface__fun_59D580)(CPCEngineInterface *self, int, MySurface *, int);  // int (__thiscall *)(CPCEngineInterface *, int, MySurface *, int)
            /*  6C*/ void *CPCEngineInterface__fun_59C0D0;
            /*  70*/ void *CPCEngineInterface__fun_59C110;
            /*  74*/ void *CPCEngineInterface__fun_59C120;
            /*  78*/ void(__stdcall *anonymous_4)(int);  // void (__stdcall *)(int)
            /*  7C*/ void *CPCEngineInterface__fun_59C130;
            /*  80*/ void *CPCEngineInterface__fun_59C140;
            /*  84*/ unsigned int(__thiscall *setStr_59D5B0)(CPCEngineInterface *self, char *);  // unsigned int (__thiscall *)(CPCEngineInterface *this, const char *a2)
            /*  88*/ int(__thiscall *CPCEngineInterface__fun_59D900)(CPCEngineInterface *self);  // int (__thiscall *)(CPCEngineInterface *this)
            /*  8C*/ void *CPCEngineInterface__fun_59DAB0;
            /*  90*/ int(__stdcall *CEngineInterface__fun_4430D0)(int, int, int, int, int, int);  // int (__stdcall *)(int, int, int, int, int, int)
            /*  94*/ int(__stdcall *ret_0_5args)(int, int, int, int, int);  // int (__stdcall *)(int, int, int, int, int)
            /*  98*/ int(__stdcall *anonymous_5)(int, int, int, int, int, int);  // int (__stdcall *)(int, int, int, int, int, int)
            /*  9C*/ void(__stdcall *anonymous_6)(int);  // void (__stdcall *)(int)
            /*  A0*/ int(__stdcall *anonymous_7)(int, int, int, int, int);  // int (__stdcall *)(int, int, int, int, int)
            /*  A4*/ int(__stdcall *ret_0_8args)(int, int, int, int, int, int, int, int);  // int (__stdcall *)(int, int, int, int, int, int, int, int)
            /*  A8*/ void(__stdcall *anonymous_8)(int);  // void (__stdcall *)(int)
            /*  AC*/ int(__stdcall *CEngineInterface__fun_628E30)(int);  // int (__stdcall *)(int)
            /*  B0*/ int(__cdecl *CPlayerInterface__fun_402AD0)();  // int (*)()
            /*  B4*/ void(__stdcall *ret_void_2args)(int, int);  // void (__stdcall *)(int, int)
            /*  B8*/ void(__stdcall *ret_void_3args)(int, int, int);  // void (__stdcall *)(int, int, int)
            /*  BC*/ __int16(__thiscall *CEngineInterface__fun_4430E0)(CPCEngineInterface *self);  // __int16 (__thiscall *)(_WORD *this)
            /*  C0*/ __int16(__thiscall *CEngineInterface__fun_4430F0)(CPCEngineInterface *self, __int16);  // __int16 (__thiscall *)(_WORD *this, __int16)
            /*  C4*/ __int16(__thiscall *CEngineInterface__fun_443100)(CPCEngineInterface *self);  // __int16 (__thiscall *)(_WORD *this)
            /*  C8*/ __int16(__thiscall *CEngineInterface__fun_443110)(CPCEngineInterface *self, __int16);  // __int16 (__thiscall *)(_WORD *this, __int16)
            /*  CC*/ int(__cdecl *anonymous_9)();  // int (*)()
            /*  D0*/ uint32_t *(__cdecl *CEngineInterface__fun_443120)();  // _DWORD *(*)()
            /*  D4*/ int(__stdcall *CEngineInterface__fun_443150)(int, int);  // int (__stdcall *)(int, int)
            /*  D8*/ void *CPCEngineInterface__fun_59C1D0;
            /*  DC*/ int(__stdcall *anonymous_10)(int, int);  // int (__stdcall *)(int, int)
            /*  E0*/ void *CPCEngineInterface__fun_599960;
            /*  E4*/ void *CPCEngineInterface__fun_599910;
            /*  E8*/ void *CPCEngineInterface__fun_599C60;
            /*  EC*/ void *CPCEngineInterface__fun_599C10;
            /*  F0*/ void *CPCEngineInterface__fun_59A200;
            /*  F4*/ void *CPCEngineInterface__fun_59A050;
            /*  F8*/ void *CPCEngineInterface__fun_5A2570;
            /*  FC*/ void *CPCEngineInterface__fun_5A2BE0;
            /* 100*/ void *CPCEngineInterface__fun_5A2F10;
            /* 104*/ void *CPCEngineInterface__fun_5A1CA0;
            /* 108*/ void *CPCEngineInterface__fun_59D420;
            /* 10C*/ void *CPCEngineInterface__fun_59D380;
            /* 110*/ void(__stdcall *ret_void_1args_0)(int);  // void (__stdcall *)(int)
            /* 114*/ void *CPCEngineInterface__fun_59D5E0;
        };
        static_assert(sizeof(vtbl_t) == 0x118);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  72*/ uint32_t bump_water;
        /*  76*/ uint32_t bump_water_bump_map;
        /*  7A*/ uint32_t bump_water_env_map;
        /*  7E*/ uint32_t bump_lava;
        /*  82*/ uint32_t bump_lava_bump_map;
        /*  86*/ uint32_t bump_lava_env_map;
        /*  8A*/ uint32_t lightning;
        /*  8E*/ uint32_t cursor;
        /*  92*/ uint32_t ice_ring;
        /*  96*/ uint32_t white;
        /*  9A*/ uint32_t field_9A;
        /*  9E*/ uint32_t field_9E;
        /*  A2*/ uint32_t field_A2;
        /*  A6*/ CWorldEntry world_entry1;
        /*  C1*/ int field_C1;
        /*  C5*/ int field_C5;
        /*  C9*/ uint32_t field_C9;
        /*  CD*/ uint32_t field_CD;
        /*  D1*/ uint8_t gap_D1[20];
        /*  E5*/ uint8_t field_E5;
        /*  E6*/ uint8_t field_E6;
        /*  E7*/ uint8_t field_E7;
        /*  E8*/ uint8_t field_E8;
        /*  E9*/ uint8_t gap_E9[17];
        /*  FA*/ uint32_t field_FA;
        /*  FE*/ uint32_t field_FE;
        /* 102*/ uint32_t field_102;
        /* 106*/ uint32_t field_106;
        /* 10A*/ uint32_t field_10A;
        /* 10E*/ uint32_t field_10E;
        /* 112*/ CRenderInfo c_render_info;
        /* 1C2*/ CWorldEntry world_entry2;
        /* 1DD*/ uint8_t gap_1DD[36];
        /* 201*/ uint32_t field_201;
        /* 205*/ char f205_str[32];
        /* 225*/ int field_225;
        /* 229*/ int field_229;
        /* 22D*/ CBridge *pCBridge;
        
        virtual ~CPCEngineInterface();
        void dump() {
            printf("bump_water: %d\n", this->bump_water);
            printf("bump_water_bump_map: %d\n", this->bump_water_bump_map);
            printf("bump_water_env_map: %d\n", this->bump_water_env_map);
            printf("bump_lava: %d\n", this->bump_lava);
            printf("bump_lava_bump_map: %d\n", this->bump_lava_bump_map);
            printf("bump_lava_env_map: %d\n", this->bump_lava_env_map);
            printf("lightning: %d\n", this->lightning);
            printf("cursor: %d\n", this->cursor);
            printf("ice_ring: %d\n", this->ice_ring);
            printf("white: %d\n", this->white);
            printf("field_9A: %d\n", this->field_9A);
            printf("field_9E: %d\n", this->field_9E);
            printf("field_A2: %d\n", this->field_A2);
            printf("field_C1: %d\n", this->field_C1);
            printf("field_C5: %d\n", this->field_C5);
            printf("field_C9: %d\n", this->field_C9);
            printf("field_CD: %d\n", this->field_CD);
            printf("gap_D1: %d\n", this->gap_D1);
            printf("field_E5: %d\n", this->field_E5);
            printf("field_E6: %d\n", this->field_E6);
            printf("field_E7: %d\n", this->field_E7);
            printf("field_E8: %d\n", this->field_E8);
            printf("gap_E9: %d\n", this->gap_E9);
            printf("field_FA: %d\n", this->field_FA);
            printf("field_FE: %d\n", this->field_FE);
            printf("field_102: %d\n", this->field_102);
            printf("field_106: %d\n", this->field_106);
            printf("field_10A: %d\n", this->field_10A);
            printf("field_10E: %d\n", this->field_10E);
            printf("gap_1DD: %d\n", this->gap_1DD);
            printf("field_201: %d\n", this->field_201);
            printf("f205_str: %d\n", this->f205_str);
            printf("field_225: %d\n", this->field_225);
            printf("field_229: %d\n", this->field_229);
            printf("pCBridge: CBridge(%p)\n", this->pCBridge);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CPCEngineInterface) == 0x231);

#pragma pack(push, 1)
    class MySurfDesc {
    public:
        
        /*   0*/ uint32_t dwRBitMask;
        /*   4*/ uint32_t dwGBitMask;
        /*   8*/ uint32_t dwBBitMask;
        /*   C*/ uint32_t dwRGBAlphaBitMask;
        /*  10*/ uint32_t dwRGBBitCount;
        /*  14*/ uint32_t isBytePerPixel;
        
        void dump() {
            printf("dwRBitMask: %d\n", this->dwRBitMask);
            printf("dwGBitMask: %d\n", this->dwGBitMask);
            printf("dwBBitMask: %d\n", this->dwBBitMask);
            printf("dwRGBAlphaBitMask: %d\n", this->dwRGBAlphaBitMask);
            printf("dwRGBBitCount: %d\n", this->dwRGBBitCount);
            printf("isBytePerPixel: %d\n", this->isBytePerPixel);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MySurfDesc) == 0x18);

#pragma pack(push, 1)
    class MySurface {
    public:
        
        /*   0*/ MySurfDesc desc;
        /*  18*/ int lpSurface;
        /*  1C*/ int dwWidth;
        /*  20*/ int dwHeight;
        /*  24*/ int lPitch;
        
        void dump() {
            printf("lpSurface: %d\n", this->lpSurface);
            printf("dwWidth: %d\n", this->dwWidth);
            printf("dwHeight: %d\n", this->dwHeight);
            printf("lPitch: %d\n", this->lPitch);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MySurface) == 0x28);

#pragma pack(push, 1)
    class PixelMask {
    public:
        
        /*   0*/ char field_0;
        /*   1*/ char field_1;
        /*   2*/ char field_2;
        /*   3*/ char field_3;
        /*   4*/ char field_4;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_1: %d\n", this->field_1);
            printf("field_2: %d\n", this->field_2);
            printf("field_3: %d\n", this->field_3);
            printf("field_4: %d\n", this->field_4);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(PixelMask) == 0x5);

#pragma pack(push, 1)
    class MyGame_f4C {
    public:
        
        /*   0*/ char field_0;
        /*   1*/ char field_1;
        /*   2*/ char field_2;
        /*   3*/ char field_3;
        /*   4*/ char field_4;
        /*   5*/ char field_5;
        /*   6*/ char field_6;
        /*   7*/ char field_7;
        /*   8*/ char field_8;
        /*   9*/ char field_9;
        /*   A*/ char field_A;
        /*   B*/ char field_B;
        /*   C*/ char field_C;
        /*   D*/ char field_D;
        /*   E*/ char field_E;
        /*   F*/ char field_F;
        /*  10*/ char field_10;
        /*  11*/ char field_11;
        /*  12*/ char field_12;
        /*  13*/ char field_13;
        /*  14*/ PixelMask f14_pixelMask;
        /*  19*/ int field_19;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_1: %d\n", this->field_1);
            printf("field_2: %d\n", this->field_2);
            printf("field_3: %d\n", this->field_3);
            printf("field_4: %d\n", this->field_4);
            printf("field_5: %d\n", this->field_5);
            printf("field_6: %d\n", this->field_6);
            printf("field_7: %d\n", this->field_7);
            printf("field_8: %d\n", this->field_8);
            printf("field_9: %d\n", this->field_9);
            printf("field_A: %d\n", this->field_A);
            printf("field_B: %d\n", this->field_B);
            printf("field_C: %d\n", this->field_C);
            printf("field_D: %d\n", this->field_D);
            printf("field_E: %d\n", this->field_E);
            printf("field_F: %d\n", this->field_F);
            printf("field_10: %d\n", this->field_10);
            printf("field_11: %d\n", this->field_11);
            printf("field_12: %d\n", this->field_12);
            printf("field_13: %d\n", this->field_13);
            printf("field_19: %d\n", this->field_19);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyGame_f4C) == 0x1D);

#pragma pack(push, 1)
    class StaticListeners {
    public:
        
        /*   0*/ void *f0_onKeyboardAction;
        /*   4*/ void *f4_onMouseAction;
        /*   8*/ void *f8_onWindowMsg;
        /*   C*/ void *fC_onKeyboardActionWithCtrl;
        /*  10*/ void *f10_onMouseActionWithCtrl;
        
        void dump() {
            printf("f0_onKeyboardAction: void(%p)\n", this->f0_onKeyboardAction);
            printf("f4_onMouseAction: void(%p)\n", this->f4_onMouseAction);
            printf("f8_onWindowMsg: void(%p)\n", this->f8_onWindowMsg);
            printf("fC_onKeyboardActionWithCtrl: void(%p)\n", this->fC_onKeyboardActionWithCtrl);
            printf("f10_onMouseActionWithCtrl: void(%p)\n", this->f10_onMouseActionWithCtrl);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StaticListeners) == 0x14);

#pragma pack(push, 1)
    class MyDdSurface {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ uint8_t gap_C[4];
        /*  10*/ char f10_00;
        /*  11*/ char f11_ff;
        /*  12*/ char f12_00;
        /*  13*/ char f13_ff;
        /*  14*/ char f14_00_dwColorSpaceValue;
        /*  15*/ char field_15;
        /*  16*/ char field_16;
        /*  17*/ char field_17;
        /*  18*/ tagPALETTEENTRY *field_18;
        /*  1C*/ int f1C_flags;
        /*  20*/ int field_20;
        /*  24*/ IDirectDrawSurface *f24_dd_surface;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("gap_C: %d\n", this->gap_C);
            printf("f10_00: %d\n", this->f10_00);
            printf("f11_ff: %d\n", this->f11_ff);
            printf("f12_00: %d\n", this->f12_00);
            printf("f13_ff: %d\n", this->f13_ff);
            printf("f14_00_dwColorSpaceValue: %d\n", this->f14_00_dwColorSpaceValue);
            printf("field_15: %d\n", this->field_15);
            printf("field_16: %d\n", this->field_16);
            printf("field_17: %d\n", this->field_17);
            printf("field_18: tagPALETTEENTRY(%p)\n", this->field_18);
            printf("f1C_flags: %d\n", this->f1C_flags);
            printf("field_20: %d\n", this->field_20);
            printf("f24_dd_surface: IDirectDrawSurface(%p)\n", this->f24_dd_surface);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDdSurface) == 0x28);

#pragma pack(push, 1)
    class MyDdSurfaceEx {
    public:
        
        /*   0*/ MyDdSurface f0_dd_surf;
        /*  28*/ MySurface f28_surf;
        
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDdSurfaceEx) == 0x50);

#pragma pack(push, 1)
    class CWindowTest {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CWindowTest__DESTRUCTOR_CWindowTest_void)(CWindowTest *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ HWND__ *f4_hWnd;
        /*   8*/ MyDdSurfaceEx f8_surface;
        /*  58*/ MyDdSurfaceEx *f58_pSurface;
        /*  5C*/ int f5C;
        
        virtual ~CWindowTest();
        void dump() {
            printf("f4_hWnd: HWND__(%p)\n", this->f4_hWnd);
            printf("f58_pSurface: MyDdSurfaceEx(%p)\n", this->f58_pSurface);
            printf("f5C: %d\n", this->f5C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CWindowTest) == 0x60);

#pragma pack(push, 1)
    class MyGame {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ int dwWidth;
        /*   8*/ int dwHeight;
        /*   C*/ int dwRGBBitCount;
        /*  10*/ int isFullscreen;
        /*  14*/ int f14__prepareScreen_a6;
        /*  18*/ int field_18;
        /*  1C*/ int f1C__prepareScreen_a7;
        /*  20*/ MySurface surf_desc;
        /*  48*/ int field_48;
        /*  4C*/ MyGame_f4C f4C_;
        /*  69*/ int field_69;
        /*  6D*/ int field_obj_6D;
        /*  71*/ uint8_t gap_71[516];
        /* 275*/ int field_275;
        /* 279*/ StaticListeners f279_static_listeners;
        /* 28D*/ int f28D;
        /* 291*/ uint32_t field_291;
        /* 295*/ uint8_t gap_295[8];
        /* 29D*/ int field_29D;
        /* 2A1*/ uint8_t gap_2A1[304];
        /* 3D1*/ int field_3D1;
        /* 3D5*/ uint8_t gap_3D5[304];
        /* 505*/ int field_505;
        /* 509*/ int field_obj_509;
        /* 50D*/ int field_50D;
        /* 511*/ int field_511;
        /* 515*/ int field_515;
        /* 519*/ int field_519;
        /* 51D*/ int field_51D;
        /* 521*/ int field_521;
        /* 525*/ GUID guid_arr16[16];
        /* 625*/ uint32_t is_empty_dd[16];
        /* 665*/ char dds_descs_arr16[16][64];
        /* A65*/ char dds_names_arr16[16][64];
        /* E65*/ uint32_t dds_count;
        /* E69*/ int selected_dd_idx;
        /* E6D*/ int last_selected_dd_idx;
        /* E71*/ uint32_t field_E71;
        /* E75*/ uint32_t field_E75;
        /* E79*/ uint32_t field_E79;
        /* E7D*/ uint32_t field_E7D;
        /* E81*/ int field_E81;
        /* E85*/ uint8_t gap_E85[4];
        /* E89*/ void * fE89_obj_arr[8];
        /* EA9*/ uint32_t field_EA9;
        /* EAD*/ uint8_t gap_EAD[28];
        /* EC9*/ CWindowTest fEC9_c_window_test;
        /* F29*/ uint16_t fF29_field_obj;
        /* F2B*/ uint8_t gap_F2B[34];
        /* F4D*/ float fF4D_moonAge;
        /* F51*/ __int16 field_F51;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("dwWidth: %d\n", this->dwWidth);
            printf("dwHeight: %d\n", this->dwHeight);
            printf("dwRGBBitCount: %d\n", this->dwRGBBitCount);
            printf("isFullscreen: %d\n", this->isFullscreen);
            printf("f14__prepareScreen_a6: %d\n", this->f14__prepareScreen_a6);
            printf("field_18: %d\n", this->field_18);
            printf("f1C__prepareScreen_a7: %d\n", this->f1C__prepareScreen_a7);
            printf("field_48: %d\n", this->field_48);
            printf("field_69: %d\n", this->field_69);
            printf("field_obj_6D: %d\n", this->field_obj_6D);
            printf("gap_71: %d\n", this->gap_71);
            printf("field_275: %d\n", this->field_275);
            printf("f28D: %d\n", this->f28D);
            printf("field_291: %d\n", this->field_291);
            printf("gap_295: %d\n", this->gap_295);
            printf("field_29D: %d\n", this->field_29D);
            printf("gap_2A1: %d\n", this->gap_2A1);
            printf("field_3D1: %d\n", this->field_3D1);
            printf("gap_3D5: %d\n", this->gap_3D5);
            printf("field_505: %d\n", this->field_505);
            printf("field_obj_509: %d\n", this->field_obj_509);
            printf("field_50D: %d\n", this->field_50D);
            printf("field_511: %d\n", this->field_511);
            printf("field_515: %d\n", this->field_515);
            printf("field_519: %d\n", this->field_519);
            printf("field_51D: %d\n", this->field_51D);
            printf("field_521: %d\n", this->field_521);
            printf("guid_arr16: %d\n", this->guid_arr16);
            printf("is_empty_dd: %d\n", this->is_empty_dd);
            printf("dds_descs_arr16: %d\n", this->dds_descs_arr16);
            printf("dds_names_arr16: %d\n", this->dds_names_arr16);
            printf("dds_count: %d\n", this->dds_count);
            printf("selected_dd_idx: %d\n", this->selected_dd_idx);
            printf("last_selected_dd_idx: %d\n", this->last_selected_dd_idx);
            printf("field_E71: %d\n", this->field_E71);
            printf("field_E75: %d\n", this->field_E75);
            printf("field_E79: %d\n", this->field_E79);
            printf("field_E7D: %d\n", this->field_E7D);
            printf("field_E81: %d\n", this->field_E81);
            printf("gap_E85: %d\n", this->gap_E85);
            printf("fE89_obj_arr: %d\n", this->fE89_obj_arr);
            printf("field_EA9: %d\n", this->field_EA9);
            printf("gap_EAD: %d\n", this->gap_EAD);
            printf("fF29_field_obj: %d\n", this->fF29_field_obj);
            printf("gap_F2B: %d\n", this->gap_F2B);
            printf("fF4D_moonAge: %d\n", this->fF4D_moonAge);
            printf("field_F51: %d\n", this->field_F51);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyGame) == 0xF53);

#pragma pack(push, 1)
    class DdModeListItem {
    public:
        
        /*   0*/ DdModeListItem *next;
        /*   4*/ DdModeListItem *last;
        /*   8*/ DWORD dwWidth;
        /*   C*/ DWORD dwHeight;
        /*  10*/ DWORD dwRGBBitCount;
        
        void dump() {
            printf("next: DdModeListItem(%p)\n", this->next);
            printf("last: DdModeListItem(%p)\n", this->last);
            printf("dwWidth: %d\n", this->dwWidth);
            printf("dwHeight: %d\n", this->dwHeight);
            printf("dwRGBBitCount: %d\n", this->dwRGBBitCount);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DdModeListItem) == 0x14);

#pragma pack(push, 1)
    class DdModeList {
    public:
        
        /*   0*/ DdModeListItem *pModeList;
        /*   4*/ DdModeListItem head;
        
        void dump() {
            printf("pModeList: DdModeListItem(%p)\n", this->pModeList);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DdModeList) == 0x18);

#pragma pack(push, 1)
    class MyVideoSettings {
    public:
        
        /*   0*/ uint32_t cmd_flag_SPEC_value;
        /*   4*/ int display_width;
        /*   8*/ int display_height;
        /*   C*/ int display_bitnes;
        /*  10*/ int zbuffer_bitnes;
        /*  14*/ int screen_swap;
        /*  18*/ int isWindowed;
        /*  1C*/ int screen_hardware3D;
        /*  20*/ int cmd_flag_32BITTEXTURES;
        /*  24*/ int cmd_flag_SOFTWAREFILTER;
        /*  28*/ int selected_3D_engine;
        /*  2C*/ int field_2C;
        /*  30*/ int cmd_flag_SOFTWARE;
        /*  34*/ uint8_t gap_34[16];
        /*  44*/ int gamma_level;
        /*  48*/ int f48_untouched2_eq_1;
        /*  4C*/ int ambient_light;
        /*  50*/ int view_distance;
        /*  54*/ int shadow_level;
        /*  58*/ int high_walls;
        /*  5C*/ int environment_mapping;
        /*  60*/ int translucent_water;
        /*  64*/ int texture_details;
        /*  68*/ int sine_wave_water;
        /*  6C*/ uint8_t screen_mode_type[4];
        /*  70*/ int field_70;
        /*  74*/ int machine_spec_level;
        /*  78*/ int high_res_texture;
        /*  7C*/ int texture_reduction_level;
        /*  80*/ int cheap_lighting;
        /*  84*/ int solid_blueprints;
        /*  88*/ int res_1024_768_enable;
        /*  8C*/ int res_1280_1024_enable;
        /*  90*/ int res_1600_1200_enable;
        /*  94*/ int should_draw_opt_background_alpha;
        /*  98*/ uint32_t f98__untouched1_eq_0;
        /*  9C*/ int field_9C;
        /*  A0*/ int stipple_alpha;
        /*  A4*/ int pmesh_reduction_level;
        /*  A8*/ int guid_index;
        /*  AC*/ int guid_index_verifier_working;
        /*  B0*/ int guid_index_is_default;
        
        void dump() {
            printf("cmd_flag_SPEC_value: %d\n", this->cmd_flag_SPEC_value);
            printf("display_width: %d\n", this->display_width);
            printf("display_height: %d\n", this->display_height);
            printf("display_bitnes: %d\n", this->display_bitnes);
            printf("zbuffer_bitnes: %d\n", this->zbuffer_bitnes);
            printf("screen_swap: %d\n", this->screen_swap);
            printf("isWindowed: %d\n", this->isWindowed);
            printf("screen_hardware3D: %d\n", this->screen_hardware3D);
            printf("cmd_flag_32BITTEXTURES: %d\n", this->cmd_flag_32BITTEXTURES);
            printf("cmd_flag_SOFTWAREFILTER: %d\n", this->cmd_flag_SOFTWAREFILTER);
            printf("selected_3D_engine: %d\n", this->selected_3D_engine);
            printf("field_2C: %d\n", this->field_2C);
            printf("cmd_flag_SOFTWARE: %d\n", this->cmd_flag_SOFTWARE);
            printf("gap_34: %d\n", this->gap_34);
            printf("gamma_level: %d\n", this->gamma_level);
            printf("f48_untouched2_eq_1: %d\n", this->f48_untouched2_eq_1);
            printf("ambient_light: %d\n", this->ambient_light);
            printf("view_distance: %d\n", this->view_distance);
            printf("shadow_level: %d\n", this->shadow_level);
            printf("high_walls: %d\n", this->high_walls);
            printf("environment_mapping: %d\n", this->environment_mapping);
            printf("translucent_water: %d\n", this->translucent_water);
            printf("texture_details: %d\n", this->texture_details);
            printf("sine_wave_water: %d\n", this->sine_wave_water);
            printf("screen_mode_type: %d\n", this->screen_mode_type);
            printf("field_70: %d\n", this->field_70);
            printf("machine_spec_level: %d\n", this->machine_spec_level);
            printf("high_res_texture: %d\n", this->high_res_texture);
            printf("texture_reduction_level: %d\n", this->texture_reduction_level);
            printf("cheap_lighting: %d\n", this->cheap_lighting);
            printf("solid_blueprints: %d\n", this->solid_blueprints);
            printf("res_1024_768_enable: %d\n", this->res_1024_768_enable);
            printf("res_1280_1024_enable: %d\n", this->res_1280_1024_enable);
            printf("res_1600_1200_enable: %d\n", this->res_1600_1200_enable);
            printf("should_draw_opt_background_alpha: %d\n", this->should_draw_opt_background_alpha);
            printf("f98__untouched1_eq_0: %d\n", this->f98__untouched1_eq_0);
            printf("field_9C: %d\n", this->field_9C);
            printf("stipple_alpha: %d\n", this->stipple_alpha);
            printf("pmesh_reduction_level: %d\n", this->pmesh_reduction_level);
            printf("guid_index: %d\n", this->guid_index);
            printf("guid_index_verifier_working: %d\n", this->guid_index_verifier_working);
            printf("guid_index_is_default: %d\n", this->guid_index_is_default);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyVideoSettings) == 0xB4);

#pragma pack(push, 1)
    class DDGAMMARAMP {
    public:
        
        /*   0*/ WORD red[256];
        /* 200*/ WORD green[256];
        /* 400*/ WORD blue[256];
        
        void dump() {
            printf("red: %d\n", this->red);
            printf("green: %d\n", this->green);
            printf("blue: %d\n", this->blue);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DDGAMMARAMP) == 0x600);

#pragma pack(push, 1)
    class MyDirectDraw {
    public:
        
        /*   0*/ IDirectDraw4 *dd4;
        /*   4*/ IDirectDrawSurface4 *dd4_1;
        /*   8*/ IDirectDrawSurface4 *dd4_2;
        /*   C*/ IDirect3DDevice3 *d3d_hal_device;
        /*  10*/ IDirect3D3 *d3d3;
        /*  14*/ IDirect3DViewport3 *d3d_viewport3;
        /*  18*/ uint32_t *f18_buf;
        /*  1C*/ uint16_t *f1C_buf2;
        /*  20*/ int textures;
        /*  24*/ int f24_reductionLevel;
        /*  28*/ char f28_flags;
        /*  29*/ char field_29;
        
        void dump() {
            printf("dd4: IDirectDraw4(%p)\n", this->dd4);
            printf("dd4_1: IDirectDrawSurface4(%p)\n", this->dd4_1);
            printf("dd4_2: IDirectDrawSurface4(%p)\n", this->dd4_2);
            printf("d3d_hal_device: IDirect3DDevice3(%p)\n", this->d3d_hal_device);
            printf("d3d3: IDirect3D3(%p)\n", this->d3d3);
            printf("d3d_viewport3: IDirect3DViewport3(%p)\n", this->d3d_viewport3);
            printf("f18_buf: uint32_t(%p)\n", this->f18_buf);
            printf("f1C_buf2: uint16_t(%p)\n", this->f1C_buf2);
            printf("textures: %d\n", this->textures);
            printf("f24_reductionLevel: %d\n", this->f24_reductionLevel);
            printf("f28_flags: %d\n", this->f28_flags);
            printf("field_29: %d\n", this->field_29);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDirectDraw) == 0x2A);

#pragma pack(push, 1)
    class CCommunicationInterface {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CCommunicationInterface___scalar_deleting_destructor_uint)(CCommunicationInterface *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ void(__stdcall *__purecall)();  // void (__stdcall __noreturn *)()
            /*   8*/ void *(__stdcall *duplicate_1_1)();  // void *(__stdcall *)()
            /*   C*/ int(__thiscall *CEngineInterface__fun_443150)(CCommunicationInterface *self, GameAction *, int);  // int (__thiscall *)(CCommunicationInterface *, GameAction *, int)
            /*  10*/ void(__thiscall *pushAction)(CCommunicationInterface *self, GameAction *);  // void (__thiscall *)(CCommunicationInterface *, GameAction *)
            /*  14*/ int(__thiscall *f14_collectActions)(CCommunicationInterface *self, void *);  // int (__thiscall *)(CCommunicationInterface *, void *)
            /*  18*/ void *(__stdcall *duplicate_1_4)();  // void *(__stdcall *)()
            /*  1C*/ void *(__stdcall *duplicate_1_5)();  // void *(__stdcall *)()
            /*  20*/ void *(__stdcall *duplicate_1_6)();  // void *(__stdcall *)()
            /*  24*/ void *(__stdcall *duplicate_1_7)();  // void *(__stdcall *)()
            /*  28*/ void *(__stdcall *duplicate_1_8)();  // void *(__stdcall *)()
            /*  2C*/ void *(__stdcall *duplicate_1_9)();  // void *(__stdcall *)()
            /*  30*/ void *(__stdcall *duplicate_1_10)();  // void *(__stdcall *)()
            /*  34*/ void *(__stdcall *duplicate_1_11)();  // void *(__stdcall *)()
            /*  38*/ void *(__stdcall *duplicate_1_12)();  // void *(__stdcall *)()
            /*  3C*/ int(__stdcall *CCommunicationInterface__fun_521B40)(int);  // int (__stdcall *)(int a1)
            /*  40*/ void(__stdcall *nullsub_10)(int, int);  // void (__stdcall *)(int a1, int a2)
            /*  44*/ int(__stdcall *CCommunicationInterface__fun_52B700)(int);  // int (__stdcall *)(int a1)
            /*  48*/ void *(__stdcall *duplicate_1_13)();  // void *(__stdcall *)()
        };
        static_assert(sizeof(vtbl_t) == 0x4C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t field_0;
        /*   8*/ int field_4;
        /*   C*/ int f8_timeMs_to__;
        /*  10*/ int field_C;
        
        virtual ~CCommunicationInterface();
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("f8_timeMs_to__: %d\n", this->f8_timeMs_to__);
            printf("field_C: %d\n", this->field_C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CCommunicationInterface) == 0x14);

#pragma pack(push, 1)
    class Area2i {
    public:
        
        /*   0*/ int x;
        /*   4*/ int y;
        /*   8*/ int w;
        /*   C*/ int h;
        
        void dump() {
            printf("x: %d\n", this->x);
            printf("y: %d\n", this->y);
            printf("w: %d\n", this->w);
            printf("h: %d\n", this->h);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Area2i) == 0x10);

#pragma pack(push, 1)
    class CGadget {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CGadget___scalar_deleting_destructor_uint)(CGadget *self, char);  // std::locale::facet *(__thiscall *)(std::locale::facet *this, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t x_offs;
        /*   8*/ uint32_t y_offs;
        /*   C*/ uint32_t width;
        /*  10*/ int height;
        /*  14*/ Area2i pos;
        
        virtual ~CGadget();
        void dump() {
            printf("x_offs: %d\n", this->x_offs);
            printf("y_offs: %d\n", this->y_offs);
            printf("width: %d\n", this->width);
            printf("height: %d\n", this->height);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CGadget) == 0x24);

#pragma pack(push, 1)
    class CWindow : public CGadget {
    public:
        struct vtbl_t /*: public CGadget::vtbl_t */{
            /*   0*/ void *(__thiscall *CWindow___scalar_deleting_destructor_uint)(CWindow *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__thiscall *update)(CWindow *self);  // int (__thiscall *)(_DWORD *this)
        };
        static_assert(sizeof(vtbl_t) == 0x8);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  24*/ uint32_t f20_updateFun;
        /*  28*/ uint32_t f24_fun;
        /*  2C*/ uint32_t field_28;
        /*  30*/ uint32_t field_2C;
        /*  34*/ uint32_t field_30;
        /*  38*/ uint32_t field_34;
        /*  3C*/ uint32_t field_38;
        /*  40*/ uint32_t field_3C;
        /*  44*/ uint32_t f40_idx;
        /*  48*/ uint32_t f44_isCurrent;
        /*  4C*/ uint16_t field_48;
        /*  4E*/ CGuiManager *f4A_c_gui_manager;
        /*  52*/ uint32_t field_4E;
        /*  56*/ CWindow *f52_parent;
        /*  5A*/ int field_56;
        /*  5E*/ CWindow *f5A_prev;
        /*  62*/ CWindow *f5E_next;
        /*  66*/ int field_62_bool;
        /*  6A*/ CButton *f66_buttons;
        /*  6E*/ __int16 _end_f6A_unk;
        
        virtual ~CWindow();
        void dump() {
            printf("f20_updateFun: %d\n", this->f20_updateFun);
            printf("f24_fun: %d\n", this->f24_fun);
            printf("field_28: %d\n", this->field_28);
            printf("field_2C: %d\n", this->field_2C);
            printf("field_30: %d\n", this->field_30);
            printf("field_34: %d\n", this->field_34);
            printf("field_38: %d\n", this->field_38);
            printf("field_3C: %d\n", this->field_3C);
            printf("f40_idx: %d\n", this->f40_idx);
            printf("f44_isCurrent: %d\n", this->f44_isCurrent);
            printf("field_48: %d\n", this->field_48);
            printf("f4A_c_gui_manager: CGuiManager(%p)\n", this->f4A_c_gui_manager);
            printf("field_4E: %d\n", this->field_4E);
            printf("f52_parent: CWindow(%p)\n", this->f52_parent);
            printf("field_56: %d\n", this->field_56);
            printf("f5A_prev: CWindow(%p)\n", this->f5A_prev);
            printf("f5E_next: CWindow(%p)\n", this->f5E_next);
            printf("field_62_bool: %d\n", this->field_62_bool);
            printf("f66_buttons: CButton(%p)\n", this->f66_buttons);
            printf("_end_f6A_unk: %d\n", this->_end_f6A_unk);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CWindow) == 0x70);

#pragma pack(push, 1)
    class Pos2i {
    public:
        
        /*   0*/ int x;
        /*   4*/ int y;
        
        void dump() {
            printf("x: %d\n", this->x);
            printf("y: %d\n", this->y);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Pos2i) == 0x8);

#pragma pack(push, 1)
    class AABB {
    public:
        
        /*   0*/ int minX;
        /*   4*/ int minY;
        /*   8*/ int maxX;
        /*   C*/ int maxY;
        
        void dump() {
            printf("minX: %d\n", this->minX);
            printf("minY: %d\n", this->minY);
            printf("maxX: %d\n", this->maxX);
            printf("maxY: %d\n", this->maxY);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(AABB) == 0x10);

#pragma pack(push, 1)
    class CGuiManager {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CGuiManager___scalar_deleting_destructor_uint)(CGuiManager *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t f4_width;
        /*   8*/ uint32_t f8_height;
        /*   C*/ uint32_t fC_isButtonVisited;
        /*  10*/ uint32_t f10;
        /*  14*/ uint32_t f14;
        /*  18*/ uint32_t field_18;
        /*  1C*/ uint32_t field_1C;
        /*  20*/ uint32_t field_20;
        /*  24*/ uint32_t field_24;
        /*  28*/ CWindow f28_window;
        /*  98*/ CWindow *f98_pWindow_first;
        /*  9C*/ CWindow *f9C_currentWin;
        /*  A0*/ uint32_t field_A0;
        /*  A4*/ uint32_t field_A4;
        /*  A8*/ int field_A8;
        /*  AC*/ Pos2i fAC_mousePos;
        /*  B4*/ Pos2i fB4_pos;
        /*  BC*/ uint32_t fBC_is_clicked;
        /*  C0*/ int field_C0;
        /*  C4*/ int field_C4;
        /*  C8*/ int field_C8;
        /*  CC*/ AABB fCC_pos;
        /*  DC*/ uint8_t gap_DC[256];
        /* 1DC*/ uint32_t field_1DC;
        /* 1E0*/ int field_1E0;
        
        virtual ~CGuiManager();
        void dump() {
            printf("f4_width: %d\n", this->f4_width);
            printf("f8_height: %d\n", this->f8_height);
            printf("fC_isButtonVisited: %d\n", this->fC_isButtonVisited);
            printf("f10: %d\n", this->f10);
            printf("f14: %d\n", this->f14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("f98_pWindow_first: CWindow(%p)\n", this->f98_pWindow_first);
            printf("f9C_currentWin: CWindow(%p)\n", this->f9C_currentWin);
            printf("field_A0: %d\n", this->field_A0);
            printf("field_A4: %d\n", this->field_A4);
            printf("field_A8: %d\n", this->field_A8);
            printf("fBC_is_clicked: %d\n", this->fBC_is_clicked);
            printf("field_C0: %d\n", this->field_C0);
            printf("field_C4: %d\n", this->field_C4);
            printf("field_C8: %d\n", this->field_C8);
            printf("gap_DC: %d\n", this->gap_DC);
            printf("field_1DC: %d\n", this->field_1DC);
            printf("field_1E0: %d\n", this->field_1E0);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CGuiManager) == 0x1E4);

#pragma pack(push, 1)
    class MyStaticStruct {
    public:
        
        /*   0*/ uint32_t f0;
        /*   4*/ int f4;
        /*   8*/ int f8;
        
        void dump() {
            printf("f0: %d\n", this->f0);
            printf("f4: %d\n", this->f4);
            printf("f8: %d\n", this->f8);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyStaticStruct) == 0xC);

#pragma pack(push, 1)
    class RtGuiView {
    public:
        
        /*   0*/ void *f0_blocksBuf;
        /*   4*/ int f4_Arrp31x400_ids[140];
        /* 234*/ CWorldEntry f234_worldEntry;
        /* 24F*/ MySurface f24F_surf;
        /* 277*/ int f277_width;
        /* 27B*/ int f27B_height;
        /* 27F*/ uint32_t f27F_width_128blocks;
        /* 283*/ uint32_t f283_height_32blocks;
        /* 287*/ uint32_t f287_width_128align;
        /* 28B*/ uint32_t f28B_height_32align;
        /* 28F*/ uint32_t f28F_dwRGBBitCount;
        /* 293*/ uint32_t f293_blocksCount_bytes;
        /* 297*/ int field_297;
        
        void dump() {
            printf("f0_blocksBuf: void(%p)\n", this->f0_blocksBuf);
            printf("f4_Arrp31x400_ids: %d\n", this->f4_Arrp31x400_ids);
            printf("f277_width: %d\n", this->f277_width);
            printf("f27B_height: %d\n", this->f27B_height);
            printf("f27F_width_128blocks: %d\n", this->f27F_width_128blocks);
            printf("f283_height_32blocks: %d\n", this->f283_height_32blocks);
            printf("f287_width_128align: %d\n", this->f287_width_128align);
            printf("f28B_height_32align: %d\n", this->f28B_height_32align);
            printf("f28F_dwRGBBitCount: %d\n", this->f28F_dwRGBBitCount);
            printf("f293_blocksCount_bytes: %d\n", this->f293_blocksCount_bytes);
            printf("field_297: %d\n", this->field_297);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(RtGuiView) == 0x29B);

#pragma pack(push, 1)
    class CDefaultPlayerInterface {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CDefaultPlayerInterface__fun_402C00)(CDefaultPlayerInterface *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__thiscall *CDefaultPlayerInterface__fun_402D00)(CDefaultPlayerInterface *self, __int16);  // int (__thiscall *)(char *this, __int16 a2)
            /*   8*/ int(__thiscall *CDefaultPlayerInterface__fun_4033F0)(CDefaultPlayerInterface *self);  // int (__thiscall *)(int this)
            /*   C*/ int(__thiscall *CDefaultPlayerInterface__fun_4036E0)(CDefaultPlayerInterface *self);  // int (__thiscall *)(int this)
            /*  10*/ int(__thiscall *CDefaultPlayerInterface__fun_4039A0)(CDefaultPlayerInterface *self, int, int, int);  // int (__thiscall *)(CDefaultPlayerInterface *this, int a4, int a5, int a6)
            /*  14*/ int(__thiscall *CDefaultPlayerInterface__fun_403FB0)(CDefaultPlayerInterface *self);  // int (__thiscall *)(_DWORD *this)
            /*  18*/ int(__stdcall *CPlayerInterface__fun_402AD0)();  // int (__stdcall *)()
            /*  1C*/ int(__thiscall *CDefaultPlayerInterface__fun_402B50)(CDefaultPlayerInterface *self, int);  // int (__thiscall *)(int this, int a2)
            /*  20*/ BOOL(__thiscall *CDefaultPlayerInterface__fun_4096B0)(CDefaultPlayerInterface *self);  // BOOL (__thiscall *)(int this)
            /*  24*/ int(__thiscall *CDefaultPlayerInterface__fun_409880)(CDefaultPlayerInterface *self);  // int (__thiscall *)(void *this)
            /*  28*/ int(__thiscall *CDefaultPlayerInterface__fun_4098A0)(CDefaultPlayerInterface *self);  // int (__thiscall *)(int this)
            /*  2C*/ int(__thiscall *CDefaultPlayerInterface__fun_4098D0)(CDefaultPlayerInterface *self);  // int (__thiscall *)(int this)
            /*  30*/ int(__thiscall *CDefaultPlayerInterface__fun_402B60)(CDefaultPlayerInterface *self);  // int (__thiscall *)(int this)
            /*  34*/ void(__thiscall *CDefaultPlayerInterface__fun_402B70)(CDefaultPlayerInterface *self);  // void (__thiscall *)(int this)
            /*  38*/ void(__thiscall *CDefaultPlayerInterface__fun_402B80)(CDefaultPlayerInterface *self);  // void (__thiscall *)(int this)
            /*  3C*/ int(__thiscall *CDefaultPlayerInterface__fun_42BC20)(CDefaultPlayerInterface *self);  // int (__thiscall *)(int this)
            /*  40*/ int(__thiscall *CDefaultPlayerInterface__fun_42BE40)(CDefaultPlayerInterface *self);  // int (__thiscall *)(int this)
            /*  44*/ BOOL(__thiscall *CDefaultPlayerInterface__fun_42C710)(CDefaultPlayerInterface *self);  // BOOL (__thiscall *)(_DWORD *this)
            /*  48*/ int(__thiscall *CDefaultPlayerInterface__fun_42BFE0)(CDefaultPlayerInterface *self);  // int (__thiscall *)(_DWORD *this)
            /*  4C*/ int(__thiscall *CDefaultPlayerInterface__fun_42C0D0)(CDefaultPlayerInterface *self);  // int (__thiscall *)(_DWORD *this)
            /*  50*/ DWORD(__thiscall *CDefaultPlayerInterface__fun_42C1E0)(CDefaultPlayerInterface *self, int, int);  // DWORD (__thiscall *)(_DWORD *this, int a2, int a3)
            /*  54*/ char(__thiscall *CDefaultPlayerInterface__fun_402B90)(CDefaultPlayerInterface *self, char);  // char (__thiscall *)(_BYTE *this, char a2)
            /*  58*/ DWORD(__thiscall *CDefaultPlayerInterface__fun_409EC0)(CDefaultPlayerInterface *self, __int16, void *);  // DWORD (__thiscall *)(int this, __int16 a2, const void *a3)
        };
        static_assert(sizeof(vtbl_t) == 0x5C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyProfiler *f4_profiler;
        /*   8*/ __int16 f8__cpyToF10;
        /*   A*/ int fA__counter;
        /*   E*/ uint8_t gapE[44];
        /*  3A*/ uint32_t f3A;
        /*  3E*/ uint32_t field_3E;
        /*  42*/ uint32_t field_42;
        /*  46*/ uint32_t field_46;
        /*  4A*/ uint32_t field_4A;
        /*  4E*/ uint32_t field_4E;
        /*  52*/ uint8_t gap_52;
        /*  53*/ CWorld *f53_pCWorld;
        /*  57*/ int field_57;
        /*  5B*/ int field_5B;
        /*  5F*/ uint8_t gap_5F[154];
        /*  F9*/ uint32_t f59_timestampMs;
        /*  FD*/ uint32_t fFD;
        /* 101*/ int gap_101;
        /* 105*/ int field_105;
        /* 109*/ int field_109;
        /* 10D*/ int field_10D;
        /* 111*/ int field_111;
        /* 115*/ uint8_t gap_115[2];
        /* 117*/ uint32_t field_117;
        /* 11B*/ uint32_t field_11B;
        /* 11F*/ uint32_t field_11F;
        /* 123*/ uint8_t field_123;
        /* 124*/ uint32_t field_124;
        /* 128*/ uint8_t gap_128[8];
        /* 130*/ uint32_t field_130;
        /* 134*/ uint8_t gap_134[3540];
        /* F08*/ CRenderInfo fF08_render_info;
        /* FB8*/ CRenderInfo fFB8_render_info;
        /*1068*/ uint8_t gap1068[44];
        /*1094*/ int field_1094;
        /*1098*/ int field_1098;
        /*109C*/ int f109C_pressTime;
        /*10A0*/ int field_10A0;
        /*10A4*/ uint8_t gap10A4[8];
        /*10AC*/ uint32_t f10AC;
        /*10B0*/ uint32_t field_10B0;
        /*10B4*/ uint8_t gap_10B4[18];
        /*10C6*/ CGuiManager f10C6_cgui_manager;
        /*12AA*/ uint8_t gap12AA[4];
        /*12AE*/ uint32_t field_12AE;
        /*12B2*/ uint8_t gap_12B2[4];
        /*12B6*/ CWorldEntry *f12B6_arr277;
        /*12BA*/ uint8_t gap_12BA[4];
        /*12BE*/ CWorldEntry *f12BE_arr10;
        /*12C2*/ uint8_t gap_12C2[24];
        /*12DA*/ int field_12DA;
        /*12DE*/ uint32_t field_12DE;
        /*12E2*/ uint8_t gap_12E2[4];
        /*12E6*/ uint32_t f12E6_timeMs;
        /*12EA*/ uint32_t field_12EA;
        /*12EE*/ uint8_t gap_12EE[4];
        /*12F2*/ int field_12F2;
        /*12F6*/ uint16_t field_12F6;
        /*12F8*/ uint8_t gap_12F8[22];
        /*130E*/ int field_130E;
        /*1312*/ uint16_t field_1312;
        /*1314*/ uint8_t gap_1314[22];
        /*132A*/ int field_132A;
        /*132E*/ uint8_t gap_132E;
        /*132F*/ int field_132F;
        /*1333*/ int field_1333;
        /*1337*/ int field_1337;
        /*133B*/ int field_133B;
        /*133F*/ StaticListeners field_133F_static_listeners;
        /*1353*/ MyStaticStruct f1353_obj;
        /*135F*/ int field_135F;
        /*1363*/ uint32_t field_1363;
        /*1367*/ uint32_t field_1367;
        /*136B*/ uint32_t field_136B;
        /*136F*/ CWorldEntry f136F_CWorldEntry;
        /*138A*/ uint32_t field_138A;
        /*138E*/ uint8_t gap_138E[21];
        /*13A3*/ MySurface f13A3_surf;
        /*13CB*/ int gap_13CB;
        /*13CF*/ uint8_t gap13CF[12];
        /*13DB*/ int f13DB;
        /*13DF*/ uint8_t gap_13DF[26];
        /*13F9*/ uint32_t field_13F9;
        /*13FD*/ uint8_t gap_13FD[12];
        /*1409*/ RtGuiView f1409__eventMessageText;
        /*16A4*/ uint8_t gap_16A4[60];
        /*16E0*/ RtGuiView f16E0__wonMpdText;
        /*197B*/ uint8_t gap_197B[9];
        /*1984*/ RtGuiView f1984__allyWindowText;
        /*1C1F*/ uint8_t gap_1C1F[806];
        /*1F45*/ RtGuiView f1F45__chatMessageHistoryWindowText;
        /*21E0*/ RtGuiView f21E0__multiplayerMessageWindowText;
        /*247B*/ uint8_t gap_247B[12];
        /*2487*/ RtGuiView f2487__imeText;
        /*2722*/ uint8_t gap_2722[21];
        /*2737*/ RtGuiView f2737__options;
        /*29D2*/ uint8_t gap_29D2[4];
        /*29D6*/ RtGuiView f29D6__optionsListBox;
        /*2C71*/ RtGuiView f2C71__optionsLoadSaveBox;
        /*2F0C*/ RtGuiView f2F0C__objectiveText;
        /*31A7*/ RtGuiView f31A7__generalText;
        /*3442*/ uint8_t gap_3442[8];
        /*344A*/ RtGuiView f344A__firstFightText;
        /*36E5*/ uint8_t gap_36E5[12];
        /*36F1*/ RtGuiView f36F1__playerInfoText;
        /*398C*/ uint8_t gap_398C[520];
        /*3B94*/ uint32_t field_3B94;
        /*3B98*/ uint8_t gap_3B98[4];
        /*3B9C*/ RtGuiView f3B9C__playerNameText;
        /*3E37*/ uint32_t f3E37;
        /*3E3B*/ uint32_t f3E3B;
        /*3E3F*/ uint32_t f3E3F;
        /*3E43*/ uint8_t gap3E43[44];
        /*3E6F*/ int field_3E6F;
        /*3E73*/ RtGuiView f3E73__followPathSubtitleTextBuffer;
        /*410E*/ uint32_t field_410E;
        /*4112*/ uint8_t gap_4112[4];
        /*4116*/ RtGuiView f4116__kingOfTheHill;
        /*43B1*/ uint8_t gap_43B1[4];
        /*43B5*/ RtGuiView f43B5__pointerInfo;
        /*4650*/ uint8_t gap_4650[8];
        /*4658*/ uint32_t field_4658;
        /*465C*/ uint8_t gap_465C[4];
        /*4660*/ RtGuiView f4660__tooltip;
        /*48FB*/ uint8_t gap_48FB[564];
        /*4B2F*/ uint8_t field_4B2F[319];
        /*4C6E*/ uint32_t field_4C6E;
        /*4C72*/ uint8_t gap_4C72[8];
        /*4C7A*/ uint32_t field_4C7A;
        /*4C7E*/ uint8_t gap_4C7E[8];
        /*4C86*/ int field_4C86;
        /*4C8A*/ int field_4C8A;
        /*4C8E*/ int field_4C8E;
        /*4C92*/ int field_4C92;
        /*4C96*/ int field_4C96;
        /*4C9A*/ int field_4C9A;
        /*4C9E*/ CWorldEntry f4C9E_CWorldEntry;
        /*4CB9*/ int field_4CB9;
        /*4CBD*/ uint8_t gap_4CBD[12];
        /*4CC9*/ int field_4CC9;
        /*4CCD*/ int field_4CCD;
        /*4CD1*/ int field_4CD1;
        /*4CD5*/ int field_4CD5;
        /*4CD9*/ uint8_t gap_4CD9;
        /*4CDA*/ int field_4CDA;
        /*4CDE*/ uint32_t field_4CDE;
        /*4CE2*/ uint32_t field_4CE2;
        /*4CE6*/ uint32_t field_4CE6;
        /*4CEA*/ uint32_t field_4CEA;
        /*4CEE*/ uint32_t field_4CEE;
        /*4CF2*/ uint8_t gap_4CF2[15];
        /*4D01*/ uint32_t field_4D01;
        /*4D05*/ uint32_t field_4D05;
        /*4D09*/ uint8_t gap_4D09[116];
        /*4D7D*/ uint32_t field_4D7D;
        /*4D81*/ uint8_t gap_4D81[116];
        /*4DF5*/ uint32_t field_4DF5;
        /*4DF9*/ uint8_t gap_4DF9[116];
        /*4E6D*/ uint32_t field_4E6D;
        /*4E71*/ uint8_t gap4E71[188];
        /*4F2D*/ int field_4F2D;
        
        virtual ~CDefaultPlayerInterface();
        void dump() {
            printf("f4_profiler: MyProfiler(%p)\n", this->f4_profiler);
            printf("f8__cpyToF10: %d\n", this->f8__cpyToF10);
            printf("fA__counter: %d\n", this->fA__counter);
            printf("gapE: %d\n", this->gapE);
            printf("f3A: %d\n", this->f3A);
            printf("field_3E: %d\n", this->field_3E);
            printf("field_42: %d\n", this->field_42);
            printf("field_46: %d\n", this->field_46);
            printf("field_4A: %d\n", this->field_4A);
            printf("field_4E: %d\n", this->field_4E);
            printf("gap_52: %d\n", this->gap_52);
            printf("f53_pCWorld: CWorld(%p)\n", this->f53_pCWorld);
            printf("field_57: %d\n", this->field_57);
            printf("field_5B: %d\n", this->field_5B);
            printf("gap_5F: %d\n", this->gap_5F);
            printf("f59_timestampMs: %d\n", this->f59_timestampMs);
            printf("fFD: %d\n", this->fFD);
            printf("gap_101: %d\n", this->gap_101);
            printf("field_105: %d\n", this->field_105);
            printf("field_109: %d\n", this->field_109);
            printf("field_10D: %d\n", this->field_10D);
            printf("field_111: %d\n", this->field_111);
            printf("gap_115: %d\n", this->gap_115);
            printf("field_117: %d\n", this->field_117);
            printf("field_11B: %d\n", this->field_11B);
            printf("field_11F: %d\n", this->field_11F);
            printf("field_123: %d\n", this->field_123);
            printf("field_124: %d\n", this->field_124);
            printf("gap_128: %d\n", this->gap_128);
            printf("field_130: %d\n", this->field_130);
            printf("gap_134: %d\n", this->gap_134);
            printf("gap1068: %d\n", this->gap1068);
            printf("field_1094: %d\n", this->field_1094);
            printf("field_1098: %d\n", this->field_1098);
            printf("f109C_pressTime: %d\n", this->f109C_pressTime);
            printf("field_10A0: %d\n", this->field_10A0);
            printf("gap10A4: %d\n", this->gap10A4);
            printf("f10AC: %d\n", this->f10AC);
            printf("field_10B0: %d\n", this->field_10B0);
            printf("gap_10B4: %d\n", this->gap_10B4);
            printf("gap12AA: %d\n", this->gap12AA);
            printf("field_12AE: %d\n", this->field_12AE);
            printf("gap_12B2: %d\n", this->gap_12B2);
            printf("f12B6_arr277: CWorldEntry(%p)\n", this->f12B6_arr277);
            printf("gap_12BA: %d\n", this->gap_12BA);
            printf("f12BE_arr10: CWorldEntry(%p)\n", this->f12BE_arr10);
            printf("gap_12C2: %d\n", this->gap_12C2);
            printf("field_12DA: %d\n", this->field_12DA);
            printf("field_12DE: %d\n", this->field_12DE);
            printf("gap_12E2: %d\n", this->gap_12E2);
            printf("f12E6_timeMs: %d\n", this->f12E6_timeMs);
            printf("field_12EA: %d\n", this->field_12EA);
            printf("gap_12EE: %d\n", this->gap_12EE);
            printf("field_12F2: %d\n", this->field_12F2);
            printf("field_12F6: %d\n", this->field_12F6);
            printf("gap_12F8: %d\n", this->gap_12F8);
            printf("field_130E: %d\n", this->field_130E);
            printf("field_1312: %d\n", this->field_1312);
            printf("gap_1314: %d\n", this->gap_1314);
            printf("field_132A: %d\n", this->field_132A);
            printf("gap_132E: %d\n", this->gap_132E);
            printf("field_132F: %d\n", this->field_132F);
            printf("field_1333: %d\n", this->field_1333);
            printf("field_1337: %d\n", this->field_1337);
            printf("field_133B: %d\n", this->field_133B);
            printf("field_135F: %d\n", this->field_135F);
            printf("field_1363: %d\n", this->field_1363);
            printf("field_1367: %d\n", this->field_1367);
            printf("field_136B: %d\n", this->field_136B);
            printf("field_138A: %d\n", this->field_138A);
            printf("gap_138E: %d\n", this->gap_138E);
            printf("gap_13CB: %d\n", this->gap_13CB);
            printf("gap13CF: %d\n", this->gap13CF);
            printf("f13DB: %d\n", this->f13DB);
            printf("gap_13DF: %d\n", this->gap_13DF);
            printf("field_13F9: %d\n", this->field_13F9);
            printf("gap_13FD: %d\n", this->gap_13FD);
            printf("gap_16A4: %d\n", this->gap_16A4);
            printf("gap_197B: %d\n", this->gap_197B);
            printf("gap_1C1F: %d\n", this->gap_1C1F);
            printf("gap_247B: %d\n", this->gap_247B);
            printf("gap_2722: %d\n", this->gap_2722);
            printf("gap_29D2: %d\n", this->gap_29D2);
            printf("gap_3442: %d\n", this->gap_3442);
            printf("gap_36E5: %d\n", this->gap_36E5);
            printf("gap_398C: %d\n", this->gap_398C);
            printf("field_3B94: %d\n", this->field_3B94);
            printf("gap_3B98: %d\n", this->gap_3B98);
            printf("f3E37: %d\n", this->f3E37);
            printf("f3E3B: %d\n", this->f3E3B);
            printf("f3E3F: %d\n", this->f3E3F);
            printf("gap3E43: %d\n", this->gap3E43);
            printf("field_3E6F: %d\n", this->field_3E6F);
            printf("field_410E: %d\n", this->field_410E);
            printf("gap_4112: %d\n", this->gap_4112);
            printf("gap_43B1: %d\n", this->gap_43B1);
            printf("gap_4650: %d\n", this->gap_4650);
            printf("field_4658: %d\n", this->field_4658);
            printf("gap_465C: %d\n", this->gap_465C);
            printf("gap_48FB: %d\n", this->gap_48FB);
            printf("field_4B2F: %d\n", this->field_4B2F);
            printf("field_4C6E: %d\n", this->field_4C6E);
            printf("gap_4C72: %d\n", this->gap_4C72);
            printf("field_4C7A: %d\n", this->field_4C7A);
            printf("gap_4C7E: %d\n", this->gap_4C7E);
            printf("field_4C86: %d\n", this->field_4C86);
            printf("field_4C8A: %d\n", this->field_4C8A);
            printf("field_4C8E: %d\n", this->field_4C8E);
            printf("field_4C92: %d\n", this->field_4C92);
            printf("field_4C96: %d\n", this->field_4C96);
            printf("field_4C9A: %d\n", this->field_4C9A);
            printf("field_4CB9: %d\n", this->field_4CB9);
            printf("gap_4CBD: %d\n", this->gap_4CBD);
            printf("field_4CC9: %d\n", this->field_4CC9);
            printf("field_4CCD: %d\n", this->field_4CCD);
            printf("field_4CD1: %d\n", this->field_4CD1);
            printf("field_4CD5: %d\n", this->field_4CD5);
            printf("gap_4CD9: %d\n", this->gap_4CD9);
            printf("field_4CDA: %d\n", this->field_4CDA);
            printf("field_4CDE: %d\n", this->field_4CDE);
            printf("field_4CE2: %d\n", this->field_4CE2);
            printf("field_4CE6: %d\n", this->field_4CE6);
            printf("field_4CEA: %d\n", this->field_4CEA);
            printf("field_4CEE: %d\n", this->field_4CEE);
            printf("gap_4CF2: %d\n", this->gap_4CF2);
            printf("field_4D01: %d\n", this->field_4D01);
            printf("field_4D05: %d\n", this->field_4D05);
            printf("gap_4D09: %d\n", this->gap_4D09);
            printf("field_4D7D: %d\n", this->field_4D7D);
            printf("gap_4D81: %d\n", this->gap_4D81);
            printf("field_4DF5: %d\n", this->field_4DF5);
            printf("gap_4DF9: %d\n", this->gap_4DF9);
            printf("field_4E6D: %d\n", this->field_4E6D);
            printf("gap4E71: %d\n", this->gap4E71);
            printf("field_4F2D: %d\n", this->field_4F2D);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CDefaultPlayerInterface) == 0x4F31);

#pragma pack(push, 1)
    class CBridgeInterface : public CEngineInterface {
    public:
        struct vtbl_t /*: public CEngineInterface::vtbl_t */{
            /*   0*/ void *(__thiscall *CBridgeInterface___scalar_deleting_destructor_uint)(CBridgeInterface *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ void(__stdcall *__purecall)();  // void (__stdcall __noreturn *)()
            /*   8*/ void *(__stdcall *duplicate_1_1)();  // void *(__stdcall *)()
            /*   C*/ void(__cdecl *nullsub_2)();  // void (__cdecl *)()
            /*  10*/ void *(__stdcall *duplicate_3_1)();  // void *(__stdcall *)()
            /*  14*/ int(__stdcall *CPlayerInterface__fun_628BC0)();  // int (__stdcall *)()
            /*  18*/ void(__stdcall *nullsub_44)(int);  // void (__stdcall *)(int a1)
            /*  1C*/ void *(__stdcall *duplicate_5_1)();  // void *(__stdcall *)()
            /*  20*/ void *(__stdcall *duplicate_1_2)();  // void *(__stdcall *)()
            /*  24*/ void *(__stdcall *duplicate_1_3)();  // void *(__stdcall *)()
            /*  28*/ void *(__stdcall *duplicate_1_4)();  // void *(__stdcall *)()
            /*  2C*/ void *(__stdcall *duplicate_1_5)();  // void *(__stdcall *)()
            /*  30*/ void *(__stdcall *duplicate_6_1)();  // void *(__stdcall *)()
            /*  34*/ void *(__stdcall *duplicate_6_2)();  // void *(__stdcall *)()
            /*  38*/ void *(__stdcall *duplicate_5_2)();  // void *(__stdcall *)()
            /*  3C*/ void *(__stdcall *duplicate_5_3)();  // void *(__stdcall *)()
            /*  40*/ void *(__stdcall *duplicate_5_4)();  // void *(__stdcall *)()
            /*  44*/ void *(__stdcall *duplicate_5_5)();  // void *(__stdcall *)()
            /*  48*/ void *(__stdcall *duplicate_1_6)();  // void *(__stdcall *)()
            /*  4C*/ void *(__stdcall *duplicate_1_7)();  // void *(__stdcall *)()
            /*  50*/ int(__stdcall *CEngineInterface__fun_517400)(int, int, int);  // int (__stdcall *)(int a1, int a2, int a3)
            /*  54*/ int(__stdcall *CEngineInterface__fun_443070)(int, int, int, uint32_t *, int, int);  // int (__stdcall *)(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
            /*  58*/ int(__stdcall *CEngineInterface__fun_443090)(int, int, int, int, uint32_t *);  // int (__stdcall *)(int a1, int a2, int a3, int a4, _DWORD *a5)
            /*  5C*/ void(__stdcall *nullsub_43)(int, int, int, int);  // void (__stdcall *)(int a1, int a2, int a3, int a4)
            /*  60*/ void(__stdcall *nullsub_21)(int, int, int, int, int, int);  // void (__stdcall *)(int a1, int a2, int a3, int a4, int a5, int a6)
            /*  64*/ void *(__stdcall *duplicate_23_1)();  // void *(__stdcall *)()
            /*  68*/ void(__stdcall *nullsub_22)(int, int, int);  // void (__stdcall *)(int a1, int a2, int a3)
            /*  6C*/ void *(__stdcall *duplicate_6_3)();  // void *(__stdcall *)()
            /*  70*/ void *(__stdcall *duplicate_6_4)();  // void *(__stdcall *)()
            /*  74*/ int(__stdcall *CPlayerInterface__fun_402AD0)();  // int (__stdcall *)()
            /*  78*/ void *(__stdcall *duplicate_6_5)();  // void *(__stdcall *)()
            /*  7C*/ void *(__stdcall *duplicate_6_6)();  // void *(__stdcall *)()
            /*  80*/ int(__stdcall *CEngineInterface__fun_5173B0)(int, int);  // int (__stdcall *)(int a1, int a2)
            /*  84*/ void *(__stdcall *duplicate_6_7)();  // void *(__stdcall *)()
            /*  88*/ void *(__stdcall *duplicate_29_1)();  // void *(__stdcall *)()
            /*  8C*/ void *(__stdcall *duplicate_3_2)();  // void *(__stdcall *)()
            /*  90*/ int(__stdcall *CEngineInterface__fun_4430D0)(int, int, int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4, int a5, int a6)
            /*  94*/ int(__stdcall *CEngineInterface__fun_4430C0)(int, int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4, int a5)
            /*  98*/ void *(__stdcall *duplicate_36_1)();  // void *(__stdcall *)()
            /*  9C*/ void *(__stdcall *duplicate_6_8)();  // void *(__stdcall *)()
            /*  A0*/ void *(__stdcall *duplicate_37_1)();  // void *(__stdcall *)()
            /*  A4*/ void *(__stdcall *loc_43A8A0)();  // void *(__stdcall *)()
            /*  A8*/ void *(__stdcall *duplicate_6_9)();  // void *(__stdcall *)()
            /*  AC*/ int(__stdcall *CEngineInterface__fun_628E30)(int);  // int (__stdcall *)(int a1)
            /*  B0*/ void *(__stdcall *duplicate_1_8)();  // void *(__stdcall *)()
            /*  B4*/ void(__stdcall *nullsub_10)(int, int);  // void (__stdcall *)(int a1, int a2)
            /*  B8*/ void *(__stdcall *duplicate_26_1)();  // void *(__stdcall *)()
            /*  BC*/ __int16(__thiscall *CEngineInterface__fun_4430E0)(CBridgeInterface *self);  // __int16 (__thiscall *)(_WORD *this)
            /*  C0*/ __int16(__thiscall *CEngineInterface__fun_4430F0)(CBridgeInterface *self, __int16);  // __int16 (__thiscall *)(_WORD *this, __int16 a2)
            /*  C4*/ __int16(__thiscall *CEngineInterface__fun_443100)(CBridgeInterface *self);  // __int16 (__thiscall *)(_WORD *this)
            /*  C8*/ __int16(__thiscall *CEngineInterface__fun_443110)(CBridgeInterface *self, __int16);  // __int16 (__thiscall *)(_WORD *this, __int16 a2)
            /*  CC*/ void *(__stdcall *duplicate_29_2)();  // void *(__stdcall *)()
            /*  D0*/ uint32_t *(__stdcall *CEngineInterface__fun_443120)();  // _DWORD *(__stdcall *)()
            /*  D4*/ int(__stdcall *CEngineInterface__fun_443150)(int, int);  // int (__stdcall *)(int a1, int a2)
            /*  D8*/ void *(__stdcall *duplicate_20_1)();  // void *(__stdcall *)()
            /*  DC*/ void *(__stdcall *duplicate_53_1)();  // void *(__stdcall *)()
            /*  E0*/ void *(__stdcall *duplicate_37_2)();  // void *(__stdcall *)()
            /*  E4*/ int(__stdcall *CEngineInterface__fun_628B70)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /*  E8*/ void *(__stdcall *duplicate_57_1)();  // void *(__stdcall *)()
            /*  EC*/ void *(__stdcall *duplicate_20_2)();  // void *(__stdcall *)()
            /*  F0*/ void *(__stdcall *loc_43A880)();  // void *(__stdcall *)()
            /*  F4*/ void *(__stdcall *loc_43A890)();  // void *(__stdcall *)()
            /*  F8*/ void *(__stdcall *duplicate_41_1)();  // void *(__stdcall *)()
            /*  FC*/ void *(__stdcall *duplicate_41_2)();  // void *(__stdcall *)()
            /* 100*/ void *(__stdcall *duplicate_41_3)();  // void *(__stdcall *)()
            /* 104*/ void *(__stdcall *duplicate_57_2)();  // void *(__stdcall *)()
            /* 108*/ void *(__stdcall *duplicate_57_3)();  // void *(__stdcall *)()
            /* 10C*/ void *(__stdcall *duplicate_57_4)();  // void *(__stdcall *)()
            /* 110*/ void *(__stdcall *duplicate_1_9)();  // void *(__stdcall *)()
            /* 114*/ void *(__stdcall *duplicate_1_10)();  // void *(__stdcall *)()
            /* 118*/ void *(__stdcall *duplicate_1_11)();  // void *(__stdcall *)()
            /* 11C*/ void *(__stdcall *duplicate_1_12)();  // void *(__stdcall *)()
            /* 120*/ void *(__stdcall *duplicate_1_13)();  // void *(__stdcall *)()
            /* 124*/ void *(__stdcall *duplicate_1_14)();  // void *(__stdcall *)()
            /* 128*/ void *(__stdcall *duplicate_1_15)();  // void *(__stdcall *)()
            /* 12C*/ void *(__stdcall *duplicate_1_16)();  // void *(__stdcall *)()
            /* 130*/ void *(__stdcall *duplicate_1_17)();  // void *(__stdcall *)()
            /* 134*/ void *(__stdcall *duplicate_1_18)();  // void *(__stdcall *)()
            /* 138*/ void *(__stdcall *duplicate_1_19)();  // void *(__stdcall *)()
            /* 13C*/ void *(__stdcall *duplicate_1_20)();  // void *(__stdcall *)()
        };
        static_assert(sizeof(vtbl_t) == 0x140);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        
        virtual ~CBridgeInterface();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CBridgeInterface) == 0x72);

#pragma pack(push, 1)
    class My_sub_56F850 {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ uint32_t field_4;
        /*   8*/ uint32_t field_8;
        /*   C*/ uint32_t field_C;
        /*  10*/ uint32_t field_10;
        /*  14*/ uint32_t field_14;
        /*  18*/ uint32_t field_18;
        /*  1C*/ uint32_t field_1C;
        /*  20*/ uint32_t field_20;
        /*  24*/ uint32_t field_24;
        /*  28*/ int field_28;
        /*  2C*/ int field_2C;
        /*  30*/ int field_30;
        /*  34*/ int field_34;
        /*  38*/ int field_38;
        /*  3C*/ int field_3C;
        /*  40*/ int field_40;
        /*  44*/ uint8_t field_44[84];
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
            printf("field_2C: %d\n", this->field_2C);
            printf("field_30: %d\n", this->field_30);
            printf("field_34: %d\n", this->field_34);
            printf("field_38: %d\n", this->field_38);
            printf("field_3C: %d\n", this->field_3C);
            printf("field_40: %d\n", this->field_40);
            printf("field_44: %d\n", this->field_44);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(My_sub_56F850) == 0x98);

#pragma pack(push, 1)
    class ProbablyGlobalRenderObj {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ uint8_t gap_4[36];
        /*  28*/ My_sub_56F850 f28_My_sub_56F850_arr_x22[22];
        /* D38*/ uint32_t field_D38;
        /* D3C*/ uint32_t field_D3C;
        /* D40*/ uint32_t field_D40;
        /* D44*/ int field_D44;
        /* D48*/ int field_D48;
        /* D4C*/ int fD4C;
        /* D50*/ uint8_t gap_D50[24];
        /* D68*/ uint32_t fD68_arrx3[3];
        /* D74*/ uint32_t fD74_arrx3[3];
        /* D80*/ uint8_t gapD80[4];
        /* D84*/ uint8_t field_D84[18];
        /* D96*/ uint32_t fD96_arrx3[3];
        /* DA2*/ uint8_t field_DA2[20];
        /* DB6*/ uint32_t fDB6_arrx3[3];
        /* DC2*/ uint8_t gapDC2[4];
        /* DC6*/ uint8_t field_DC6[40];
        /* DEE*/ uint32_t fDEE_arrx3[3];
        /* DFA*/ uint8_t gapDFA[10];
        /* E04*/ uint32_t fE04_arrx3[3];
        /* E10*/ uint8_t gap_E10[44];
        /* E3C*/ uint32_t fE3C_flags;
        /* E40*/ uint8_t gap_E40[8];
        /* E48*/ uint16_t fE48;
        /* E4A*/ uint8_t gap_E4A[8];
        /* E52*/ int field_E52;
        /* E56*/ int field_E56;
        /* E5A*/ int field_E5A;
        /* E5E*/ int field_E5E;
        /* E62*/ int fE62_left;
        /* E66*/ int fE66_top;
        /* E6A*/ int fE6A_right;
        /* E6E*/ int fE6E_bottom;
        /* E72*/ int field_E72;
        /* E76*/ int field_E76;
        /* E7A*/ int field_E7A;
        /* E7E*/ int field_E7E;
        /* E82*/ int field_E82;
        /* E86*/ int field_E86;
        /* E8A*/ int field_E8A;
        /* E8E*/ int field_E8E;
        /* E92*/ int field_E92;
        /* E96*/ int field_E96;
        /* E9A*/ int field_E9A;
        /* E9E*/ int field_E9E;
        /* EA2*/ int field_EA2;
        /* EA6*/ int field_EA6;
        /* EAA*/ int field_EAA;
        /* EAE*/ int field_EAE;
        /* EB2*/ int field_EB2;
        /* EB6*/ int field_EB6;
        /* EBA*/ int fEBA;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("gap_4: %d\n", this->gap_4);
            printf("field_D38: %d\n", this->field_D38);
            printf("field_D3C: %d\n", this->field_D3C);
            printf("field_D40: %d\n", this->field_D40);
            printf("field_D44: %d\n", this->field_D44);
            printf("field_D48: %d\n", this->field_D48);
            printf("fD4C: %d\n", this->fD4C);
            printf("gap_D50: %d\n", this->gap_D50);
            printf("fD68_arrx3: %d\n", this->fD68_arrx3);
            printf("fD74_arrx3: %d\n", this->fD74_arrx3);
            printf("gapD80: %d\n", this->gapD80);
            printf("field_D84: %d\n", this->field_D84);
            printf("fD96_arrx3: %d\n", this->fD96_arrx3);
            printf("field_DA2: %d\n", this->field_DA2);
            printf("fDB6_arrx3: %d\n", this->fDB6_arrx3);
            printf("gapDC2: %d\n", this->gapDC2);
            printf("field_DC6: %d\n", this->field_DC6);
            printf("fDEE_arrx3: %d\n", this->fDEE_arrx3);
            printf("gapDFA: %d\n", this->gapDFA);
            printf("fE04_arrx3: %d\n", this->fE04_arrx3);
            printf("gap_E10: %d\n", this->gap_E10);
            printf("fE3C_flags: %d\n", this->fE3C_flags);
            printf("gap_E40: %d\n", this->gap_E40);
            printf("fE48: %d\n", this->fE48);
            printf("gap_E4A: %d\n", this->gap_E4A);
            printf("field_E52: %d\n", this->field_E52);
            printf("field_E56: %d\n", this->field_E56);
            printf("field_E5A: %d\n", this->field_E5A);
            printf("field_E5E: %d\n", this->field_E5E);
            printf("fE62_left: %d\n", this->fE62_left);
            printf("fE66_top: %d\n", this->fE66_top);
            printf("fE6A_right: %d\n", this->fE6A_right);
            printf("fE6E_bottom: %d\n", this->fE6E_bottom);
            printf("field_E72: %d\n", this->field_E72);
            printf("field_E76: %d\n", this->field_E76);
            printf("field_E7A: %d\n", this->field_E7A);
            printf("field_E7E: %d\n", this->field_E7E);
            printf("field_E82: %d\n", this->field_E82);
            printf("field_E86: %d\n", this->field_E86);
            printf("field_E8A: %d\n", this->field_E8A);
            printf("field_E8E: %d\n", this->field_E8E);
            printf("field_E92: %d\n", this->field_E92);
            printf("field_E96: %d\n", this->field_E96);
            printf("field_E9A: %d\n", this->field_E9A);
            printf("field_E9E: %d\n", this->field_E9E);
            printf("field_EA2: %d\n", this->field_EA2);
            printf("field_EA6: %d\n", this->field_EA6);
            printf("field_EAA: %d\n", this->field_EAA);
            printf("field_EAE: %d\n", this->field_EAE);
            printf("field_EB2: %d\n", this->field_EB2);
            printf("field_EB6: %d\n", this->field_EB6);
            printf("fEBA: %d\n", this->fEBA);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(ProbablyGlobalRenderObj) == 0xEBE);

#pragma pack(push, 1)
    class FloatObjThing {
    public:
        
        /*   0*/ uint16_t field_0;
        /*   2*/ int lastTimeMs;
        /*   6*/ float field_6;
        /*   A*/ int field_A;
        /*   E*/ uint32_t field_E;
        /*  12*/ uint16_t word_buf_3x256_cpy1[3][256];
        /* 612*/ uint16_t word_buf_3x256_cpy2[3][256];
        /* C12*/ uint16_t word_buf_3x256[3][256];
        /*1212*/ int f1212_count;
        /*1216*/ int f1216_count_limit;
        /*121A*/ uint16_t field_121A[26];
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("lastTimeMs: %d\n", this->lastTimeMs);
            printf("field_6: %d\n", this->field_6);
            printf("field_A: %d\n", this->field_A);
            printf("field_E: %d\n", this->field_E);
            printf("word_buf_3x256_cpy1: %d\n", this->word_buf_3x256_cpy1);
            printf("word_buf_3x256_cpy2: %d\n", this->word_buf_3x256_cpy2);
            printf("word_buf_3x256: %d\n", this->word_buf_3x256);
            printf("f1212_count: %d\n", this->f1212_count);
            printf("f1216_count_limit: %d\n", this->f1216_count_limit);
            printf("field_121A: %d\n", this->field_121A);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(FloatObjThing) == 0x124E);

#pragma pack(push, 1)
    class CBridge : public CBridgeInterface {
    public:
        struct vtbl_t /*: public CBridgeInterface::vtbl_t */{
            /*   0*/ void *(__stdcall *loc_43AA10)();  // void *(__stdcall *)()
            /*   4*/ int(__thiscall *CBridge__fun_43AD70)(CBridge *self, int);  // int (__thiscall *)(char *this, int a2)
            /*   8*/ void(__thiscall *CBridge__fun_43B0B0)(CBridge *self);  // void (__thiscall *)(char *this)
            /*   C*/ int(__thiscall *CBridge__fun_441E30)(CBridge *self);  // int (__thiscall *)(int this)
            /*  10*/ void(__thiscall *CBridge__fun_441E60)(CBridge *self);  // void (__thiscall *)(int this)
            /*  14*/ int(__thiscall *CBridge__fun_441EE0)(CBridge *self);  // int (__thiscall *)(int this)
            /*  18*/ void *(__stdcall *loc_43A990)();  // void *(__stdcall *)()
            /*  1C*/ void *(__stdcall *loc_43A9A0)();  // void *(__stdcall *)()
            /*  20*/ int(__thiscall *CBridge__fun_43B150)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /*  24*/ int(__thiscall *CBridge__fun_43B180)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /*  28*/ int(__thiscall *CBridge__fun_43B1E0)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /*  2C*/ int(__thiscall *CBridge__fun_43B220)(CBridge *self, uint32_t *);  // int (__thiscall *)(char *this, _DWORD *a2)
            /*  30*/ int(__thiscall *CBridge__fun_441330)(CBridge *self, uint32_t *);  // int (__thiscall *)(void *this, _DWORD *a2)
            /*  34*/ uint32_t *(__thiscall *CBridge__fun_441350)(CBridge *self, uint32_t *);  // _DWORD *(__thiscall *)(int this, _DWORD *a2)
            /*  38*/ int(__thiscall *CBridge__fun_440FB0)(CBridge *self);  // int (__thiscall *)(int this)
            /*  3C*/ int(__thiscall *CBridge__fun_440FC0)(CBridge *self);  // int (__thiscall *)(int this)
            /*  40*/ int(__thiscall *CBridge__fun_440FD0)(CBridge *self);  // int (__thiscall *)(int this)
            /*  44*/ int(__thiscall *CBridge__fun_440FE0)(CBridge *self);  // int (__thiscall *)(int this)
            /*  48*/ int(__thiscall *CBridge__fun_43C2C0)(CBridge *self, int, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4, int a5)
            /*  4C*/ int(__thiscall *CBridge__fun_43C2F0)(CBridge *self, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4)
            /*  50*/ int(__thiscall *CBridge__fun_441040)(CBridge *self, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4)
            /*  54*/ int(__thiscall *CBridge__fun_43E2F0)(CBridge *self, int, int, int, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4, int a5, int a6, int a7)
            /*  58*/ int(__thiscall *CBridge_createAndRegister_441300)(CBridge *self, int, int, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4, int a5, int a6)
            /*  5C*/ int(__thiscall *CBridge__fun_440FF0)(CBridge *self, int, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4, int a5)
            /*  60*/ void *(__stdcall *loc_43A8B0)();  // void *(__stdcall *)()
            /*  64*/ int(__thiscall *CBridge__fun_441060)(CBridge *self, __int16, int, int, int);  // int (__thiscall *)(int *this, __int16 a2, int a3, int a4, int a5)
            /*  68*/ int(__thiscall *CBridge__fun_441020)(CBridge *self, int, MySurface *, int);  // int (__thiscall *)(int this, int a2, MySurface *a3, int a4)
            /*  6C*/ int(__thiscall *CBridge__fun_441390)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /*  70*/ int(__thiscall *CBridge__fun_4413B0)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /*  74*/ int(__thiscall *CBridge__fun_4413D0)(CBridge *self);  // int (__thiscall *)(int this)
            /*  78*/ int(__stdcall *CBridge__fun_4413E0)(float);  // int (__stdcall *)(float a1)
            /*  7C*/ int(__thiscall *CBridge__fun_441400)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /*  80*/ int(__thiscall *CBridge__fun_4412C0)(CBridge *self, int, int);  // int (__thiscall *)(int this, int a2, int a3)
            /*  84*/ int(__thiscall *setTexturesPath_441C70)(CBridge *self, char *);  // int (__thiscall *)(int this, const char *a2)
            /*  88*/ int(__thiscall *CBridge__fun_441E20)(CBridge *self);  // int (__thiscall *)(int this)
            /*  8C*/ void(__cdecl *nullsub_2)();  // void (__cdecl *)()
            /*  90*/ int(__thiscall *CBridge__fun_440420)(CBridge *self, int, int, uint32_t *, int, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3, int *a4, int a5, int a6, int a7)
            /*  94*/ void *(__stdcall *loc_43A8E0)();  // void *(__stdcall *)()
            /*  98*/ int(__thiscall *CBridge__fun_440350)(CBridge *self, int, int, int, int, int, uint32_t *);  // int (__thiscall *)(int this, int a2, int a3, int a4, int a5, int a6, int *a7)
            /*  9C*/ uint32_t *(__thiscall *CBridge__fun_440530)(CBridge *self, int);  // _DWORD *(__thiscall *)(int this, int a2)
            /*  A0*/ int(__thiscall *CBridge__fun_439880)(CBridge *self, uint32_t *, int, int, int, int);  // int (__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6)
            /*  A4*/ int(__thiscall *CBridge__fun_4397E0)(CBridge *self, int, __int16, __int16, __int16, char, int, int, uint32_t *);  // int (__thiscall *)(int this, int a2, __int16 a3, __int16 a4, __int16 a5, char a6, int a7, int a8, int *a9)
            /*  A8*/ uint32_t *(__thiscall *CBridge__fun_439A20)(CBridge *self, int);  // _DWORD *(__thiscall *)(int this, int a2)
            /*  AC*/ int(__thiscall *CBridge__fun_439AA0)(CBridge *self, uint32_t *);  // int (__thiscall *)(void *this, int *a2)
            /*  B0*/ void *(__stdcall *loc_43A910)();  // void *(__stdcall *)()
            /*  B4*/ unsigned __int16(__thiscall *CBridge__fun_439B00)(CBridge *self, int, int);  // unsigned __int16 (__thiscall *)(_DWORD *this, int a2, int a3)
            /*  B8*/ __int16(__thiscall *CBridge__fun_439B90)(CBridge *self, char *, int, int);  // __int16 (__thiscall *)(_DWORD *this, char *a2, int a3, int a4)
            /*  BC*/ int(__thiscall *CBridge__fun_440F50)(CBridge *self);  // int (__thiscall *)(int this)
            /*  C0*/ int(__thiscall *CBridge__fun_440F60)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /*  C4*/ int(__thiscall *CBridge__fun_440F80)(CBridge *self);  // int (__thiscall *)(int this)
            /*  C8*/ int(__thiscall *CBridge__fun_440F90)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /*  CC*/ int(__thiscall *loc_43A970)(CBridge *self);  // int (__thiscall *)(CBridge *)
            /*  D0*/ ProbablyGlobalRenderObj *(__thiscall *loc_43A980)(CBridge *self);  // ProbablyGlobalRenderObj *(__thiscall *)(CBridge *)
            /*  D4*/ int(__stdcall *CBridge__fun_4412E0)(int, int);  // int (__stdcall *)(int a1, int a2)
            /*  D8*/ int(__thiscall *CBridge__fun_441370)(CBridge *self, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4)
            /*  DC*/ int(__thiscall *CBridge__fun_441B00)(CBridge *self, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3)
            /*  E0*/ int(__stdcall *CEngineInterface__fun_4430C0)(int, int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4, int a5)
            /*  E4*/ int(__stdcall *CEngineInterface__fun_628B70)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /*  E8*/ void *(__stdcall *duplicate_57_1)();  // void *(__stdcall *)()
            /*  EC*/ int(__stdcall *CEngineInterface__fun_517400)(int, int, int);  // int (__stdcall *)(int a1, int a2, int a3)
            /*  F0*/ void *(__stdcall *loc_43A880)();  // void *(__stdcall *)()
            /*  F4*/ void *(__stdcall *loc_43A890)();  // void *(__stdcall *)()
            /*  F8*/ void *(__stdcall *loc_43A8A0)();  // void *(__stdcall *)()
            /*  FC*/ void *(__stdcall *duplicate_62_1)();  // void *(__stdcall *)()
            /* 100*/ void *(__stdcall *duplicate_62_2)();  // void *(__stdcall *)()
            /* 104*/ void *(__stdcall *duplicate_57_2)();  // void *(__stdcall *)()
            /* 108*/ int(__thiscall *CBridge__fun_441AD0)(CBridge *self, int, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4, int a5)
            /* 10C*/ int(__thiscall *CBridge__fun_441AA0)(CBridge *self, int, int, int, int);  // int (__thiscall *)(int this, int a2, int a3, int a4, int a5)
            /* 110*/ int(__thiscall *CBridge__fun_43AAD0)(CBridge *self, int);  // int (__thiscall *)(int this, int a2)
            /* 114*/ void(__thiscall *CBridge__fun_43ACF0)(CBridge *self);  // void (__thiscall *)(int this)
            /* 118*/ int(__thiscall *CBridge__fun_43E030)(CBridge *self, char *);  // int (__thiscall *)(int this, const char *a2)
            /* 11C*/ MySurface *(__thiscall *CBridge_loadPng_fun_43E0F0)(CBridge *self, char *);  // MySurface *(__thiscall *)(int this, char *Str)
            /* 120*/ int(__thiscall *CBridge__fun_43D790)(CBridge *self, int, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int a2, int a3, _DWORD *a4)
            /* 124*/ int(__thiscall *CBridge__fun_43D970)(CBridge *self, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3)
            /* 128*/ void *(__stdcall *loc_43A940)();  // void *(__stdcall *)()
            /* 12C*/ void *(__stdcall *loc_43A920)();  // void *(__stdcall *)()
            /* 130*/ int(__thiscall *CBridge__fun_43C310)(CBridge *self, int, int, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int a2, int a3, int a4, _DWORD *a5)
            /* 134*/ int(__thiscall *CBridge__fun_43CC30)(CBridge *self, unsigned int, unsigned int, int);  // int (__thiscall *)(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
            /* 138*/ void *(__stdcall *loc_43A960)();  // void *(__stdcall *)()
            /* 13C*/ int(__thiscall *CBridge__fun_441420)(CBridge *self, int, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int a2, int a3, _DWORD *a4)
            /* 140*/ char *(__thiscall *CBridge__fun_441CC0)(CBridge *self);  // char *(__thiscall *)(char *this)
            /* 144*/ __int16(__thiscall *CBridge__fun_4408C0)(CBridge *self);  // __int16 (__thiscall *)(int this)
            /* 148*/ __int16(__thiscall *CBridge__fun_4408E0)(CBridge *self, __int16);  // __int16 (__thiscall *)(int this, __int16 a2)
            /* 14C*/ __int16(__thiscall *CBridge__fun_440940)(CBridge *self, __int16);  // __int16 (__thiscall *)(int this, __int16 a2)
            /* 150*/ __int16(__thiscall *CBridge__fun_440A00)(CBridge *self, unsigned int);  // __int16 (__thiscall *)(int this, unsigned int a2)
            /* 154*/ __int16(__thiscall *CBridge__fun_440A30)(CBridge *self, int);  // __int16 (__thiscall *)(int this, int a2)
            /* 158*/ int(__thiscall *CBridge__fun_440A70)(CBridge *self, unsigned __int16);  // int (__thiscall *)(int this, unsigned __int16 a2)
            /* 15C*/ int(__thiscall *CBridge__fun_4409A0)(CBridge *self, unsigned __int16);  // int (__thiscall *)(int this, unsigned __int16 a2)
            /* 160*/ void *(__stdcall *loc_43A9B0)();  // void *(__stdcall *)()
            /* 164*/ void *(__stdcall *loc_43A9C0)();  // void *(__stdcall *)()
            /* 168*/ void *(__stdcall *loc_43A9D0)();  // void *(__stdcall *)()
            /* 16C*/ __int16(__thiscall *CBridge__fun_440AD0)(CBridge *self);  // __int16 (__thiscall *)(int this)
            /* 170*/ __int16(__thiscall *CBridge__fun_440AF0)(CBridge *self, __int16);  // __int16 (__thiscall *)(int this, __int16 a2)
            /* 174*/ __int16(__thiscall *CBridge__fun_440B60)(CBridge *self, __int16);  // __int16 (__thiscall *)(int this, __int16 a2)
            /* 178*/ __int16(__thiscall *CBridge__fun_440C20)(CBridge *self, unsigned int);  // __int16 (__thiscall *)(int this, unsigned int a2)
            /* 17C*/ __int16(__thiscall *CBridge__fun_440C50)(CBridge *self, int);  // __int16 (__thiscall *)(int this, int a2)
            /* 180*/ int(__thiscall *CBridge__fun_440C90)(CBridge *self, unsigned __int16);  // int (__thiscall *)(int this, unsigned __int16 a2)
            /* 184*/ int(__thiscall *CBridge__fun_440BC0)(CBridge *self, unsigned __int16);  // int (__thiscall *)(int this, unsigned __int16 a2)
            /* 188*/ void *(__stdcall *loc_43A9E0)();  // void *(__stdcall *)()
            /* 18C*/ void *(__stdcall *loc_43A9F0)();  // void *(__stdcall *)()
            /* 190*/ void *(__stdcall *loc_43AA00)();  // void *(__stdcall *)()
        };
        static_assert(sizeof(vtbl_t) == 0x194);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  72*/ uint32_t field_72;
        /*  76*/ uint8_t gap_76[32];
        /*  96*/ uint32_t field_96;
        /*  9A*/ int field_9A;
        /*  9E*/ CPCEngineInterface *pCPCEngineInterface;
        /*  A2*/ uint32_t handlers2[138];
        /* 2CA*/ uint32_t handlers1[23];
        /* 326*/ uint32_t dword_arr_x4[4];
        /* 336*/ int field_336;
        /* 33A*/ int field_33A;
        /* 33E*/ uint16_t field_33E;
        /* 340*/ CWorldEntry c_world_entry1;
        /* 35B*/ uint16_t field_35B;
        /* 35D*/ uint16_t field_35D;
        /* 35F*/ CWorldEntry c_world_entry2;
        /* 37A*/ uint16_t field_37A;
        /* 37C*/ uint8_t gap_37C[6];
        /* 382*/ CWorldEntry c_world_entry3;
        /* 39D*/ uint8_t gap39D[4];
        /* 3A1*/ CWorldEntry c_world_entry4;
        /* 3BC*/ uint16_t field_3BC;
        /* 3BE*/ uint32_t field_3BE;
        /* 3C2*/ uint32_t field_3C2;
        /* 3C6*/ uint8_t gap_3C6[4];
        /* 3CA*/ CWorldEntry c_world_entry5;
        /* 3E5*/ ProbablyGlobalRenderObj f3E5_probablyGlobalRenderObj;
        /*12A3*/ uint8_t gap12A3[24];
        /*12BB*/ MySurface f12BB_surf;
        /*12E3*/ uint32_t field_12E3;
        /*12E7*/ uint32_t field_12E7;
        /*12EB*/ uint8_t gap_12EB[52];
        /*131F*/ uint32_t field_131F;
        /*1323*/ uint32_t field_1323;
        /*1327*/ uint32_t field_1327;
        /*132B*/ uint32_t field_132B;
        /*132F*/ uint32_t field_132F;
        /*1333*/ uint8_t gap_1333[48];
        /*1363*/ uint32_t field_1363;
        /*1367*/ uint8_t gap_1367[48];
        /*1397*/ uint32_t field_1397;
        /*139B*/ uint32_t field_139B;
        /*139F*/ uint32_t field_139F;
        /*13A3*/ uint32_t field_13A3;
        /*13A7*/ int field_13A7;
        /*13AB*/ int field_13AB;
        /*13AF*/ int field_13AF;
        /*13B3*/ int field_13B3;
        /*13B7*/ int field_13B7;
        /*13BB*/ int field_13BB;
        /*13BF*/ int field_13BF;
        /*13C3*/ int field_13C3;
        /*13C7*/ uint32_t field_13C7;
        /*13CB*/ uint32_t field_13CB;
        /*13CF*/ uint32_t field_13CF;
        /*13D3*/ FloatObjThing float_obj_thing;
        /*2621*/ uint32_t field_2621;
        /*2625*/ uint32_t field_2625;
        /*2629*/ uint32_t field_2629;
        /*262D*/ uint32_t field_262D;
        /*2631*/ uint32_t f2631_timeMs;
        /*2635*/ uint8_t f2635_str;
        /*2636*/ uint8_t gap_2636[73];
        
        virtual ~CBridge();
        void dump() {
            printf("field_72: %d\n", this->field_72);
            printf("gap_76: %d\n", this->gap_76);
            printf("field_96: %d\n", this->field_96);
            printf("field_9A: %d\n", this->field_9A);
            printf("pCPCEngineInterface: CPCEngineInterface(%p)\n", this->pCPCEngineInterface);
            printf("handlers2: %d\n", this->handlers2);
            printf("handlers1: %d\n", this->handlers1);
            printf("dword_arr_x4: %d\n", this->dword_arr_x4);
            printf("field_336: %d\n", this->field_336);
            printf("field_33A: %d\n", this->field_33A);
            printf("field_33E: %d\n", this->field_33E);
            printf("field_35B: %d\n", this->field_35B);
            printf("field_35D: %d\n", this->field_35D);
            printf("field_37A: %d\n", this->field_37A);
            printf("gap_37C: %d\n", this->gap_37C);
            printf("gap39D: %d\n", this->gap39D);
            printf("field_3BC: %d\n", this->field_3BC);
            printf("field_3BE: %d\n", this->field_3BE);
            printf("field_3C2: %d\n", this->field_3C2);
            printf("gap_3C6: %d\n", this->gap_3C6);
            printf("gap12A3: %d\n", this->gap12A3);
            printf("field_12E3: %d\n", this->field_12E3);
            printf("field_12E7: %d\n", this->field_12E7);
            printf("gap_12EB: %d\n", this->gap_12EB);
            printf("field_131F: %d\n", this->field_131F);
            printf("field_1323: %d\n", this->field_1323);
            printf("field_1327: %d\n", this->field_1327);
            printf("field_132B: %d\n", this->field_132B);
            printf("field_132F: %d\n", this->field_132F);
            printf("gap_1333: %d\n", this->gap_1333);
            printf("field_1363: %d\n", this->field_1363);
            printf("gap_1367: %d\n", this->gap_1367);
            printf("field_1397: %d\n", this->field_1397);
            printf("field_139B: %d\n", this->field_139B);
            printf("field_139F: %d\n", this->field_139F);
            printf("field_13A3: %d\n", this->field_13A3);
            printf("field_13A7: %d\n", this->field_13A7);
            printf("field_13AB: %d\n", this->field_13AB);
            printf("field_13AF: %d\n", this->field_13AF);
            printf("field_13B3: %d\n", this->field_13B3);
            printf("field_13B7: %d\n", this->field_13B7);
            printf("field_13BB: %d\n", this->field_13BB);
            printf("field_13BF: %d\n", this->field_13BF);
            printf("field_13C3: %d\n", this->field_13C3);
            printf("field_13C7: %d\n", this->field_13C7);
            printf("field_13CB: %d\n", this->field_13CB);
            printf("field_13CF: %d\n", this->field_13CF);
            printf("field_2621: %d\n", this->field_2621);
            printf("field_2625: %d\n", this->field_2625);
            printf("field_2629: %d\n", this->field_2629);
            printf("field_262D: %d\n", this->field_262D);
            printf("f2631_timeMs: %d\n", this->f2631_timeMs);
            printf("f2635_str: %d\n", this->f2635_str);
            printf("gap_2636: %d\n", this->gap_2636);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CBridge) == 0x267F);

#pragma pack(push, 1)
    class CResearchOrder {
    public:
        struct vtbl_t {
            /*   0*/ int(__thiscall *CResearchOrder__fun_506EC0)(CResearchOrder *self, uint32_t *);  // int (__thiscall *)(_DWORD *this, int *a2)
            /*   4*/ int(__thiscall *CResearchOrder__fun_506E10)(CResearchOrder *self, uint32_t *);  // int (__thiscall *)(_DWORD *this, int *a2)
            /*   8*/ int(__thiscall *CResearchOrder__fun_506FC0)(CResearchOrder *self);  // int (__thiscall *)(int this)
            /*   C*/ int(__stdcall *CMap__fun_4B4C20)();  // int (__stdcall *)()
        };
        static_assert(sizeof(vtbl_t) == 0x10);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t field_4;
        /*   8*/ uint8_t gap_8[4];
        /*   C*/ uint32_t field_C;
        /*  10*/ uint32_t field_10;
        /*  14*/ int field_14;
        
        virtual ~CResearchOrder();
        void dump() {
            printf("field_4: %d\n", this->field_4);
            printf("gap_8: %d\n", this->gap_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CResearchOrder) == 0x18);

#pragma pack(push, 1)
    class MyCreatureCollection {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ uint32_t field_18;
        /*  1C*/ uint16_t field_1C;
        /*  1E*/ int field_1E;
        /*  22*/ int field_22;
        /*  26*/ int field_26;
        /*  2A*/ int field_2A;
        /*  2E*/ int field_2E;
        /*  32*/ int field_32;
        /*  36*/ int field_36;
        /*  3A*/ int field_3A;
        /*  3E*/ uint32_t field_3E;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_1E: %d\n", this->field_1E);
            printf("field_22: %d\n", this->field_22);
            printf("field_26: %d\n", this->field_26);
            printf("field_2A: %d\n", this->field_2A);
            printf("field_2E: %d\n", this->field_2E);
            printf("field_32: %d\n", this->field_32);
            printf("field_36: %d\n", this->field_36);
            printf("field_3A: %d\n", this->field_3A);
            printf("field_3E: %d\n", this->field_3E);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCreatureCollection) == 0x42);

#pragma pack(push, 1)
    class CMapEntry {
    public:
        
        /*   0*/ char field_0;
        /*   1*/ char field_1;
        /*   2*/ char field_2;
        /*   3*/ int field_3;
        /*   7*/ int field_7;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_1: %d\n", this->field_1);
            printf("field_2: %d\n", this->field_2);
            printf("field_3: %d\n", this->field_3);
            printf("field_7: %d\n", this->field_7);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CMapEntry) == 0xB);

#pragma pack(push, 1)
    class CMap {
    public:
        struct vtbl_t {
            /*   0*/ int(__thiscall *CMap__fun_44F4B0)(CMap *self, uint32_t *);  // int (__thiscall *)(int *this, int *a2)
            /*   4*/ BOOL(__thiscall *CMap__fun_44F3F0)(CMap *self, uint32_t *);  // BOOL (__thiscall *)(_DWORD *this, int *a2)
            /*   8*/ int(__thiscall *std__locale__classic_void)(CMap *self);  // int (__thiscall *)(void *this)
            /*   C*/ int(__stdcall *CMap__fun_4B4C20)();  // int (__stdcall *)()
        };
        static_assert(sizeof(vtbl_t) == 0x10);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t field_4;
        /*   8*/ uint8_t gap_8[4];
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        /*  1C*/ int field_1C;
        /*  20*/ uint8_t gap_20[260];
        /* 124*/ CMapEntry entries[225];
        
        virtual ~CMap();
        void dump() {
            printf("field_4: %d\n", this->field_4);
            printf("gap_8: %d\n", this->gap_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("gap_20: %d\n", this->gap_20);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CMap) == 0xACF);

#pragma pack(push, 1)
    class GameActionHandler {
    public:
        
        /*   0*/ void *f0_handler;
        /*   4*/ int f4_objOffset;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        
        void dump() {
            printf("f0_handler: void(%p)\n", this->f0_handler);
            printf("f4_objOffset: %d\n", this->f4_objOffset);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(GameActionHandler) == 0x10);

#pragma pack(push, 1)
    class CWorldShortEntry3 {
    public:
        
        /*   0*/ __int16 field_0;
        /*   2*/ char field_2;
        /*   3*/ int field_3;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_2: %d\n", this->field_2);
            printf("field_3: %d\n", this->field_3);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CWorldShortEntry3) == 0x7);

#pragma pack(push, 1)
    class CWorldShortEntry2 {
    public:
        
        /*   0*/ uint8_t gap_0[4];
        /*   4*/ uint16_t field_4;
        /*   6*/ uint32_t field_6;
        /*   A*/ int field_A;
        /*   E*/ int field_E;
        /*  12*/ int field_12;
        /*  16*/ int field_16;
        /*  1A*/ int field_1A;
        /*  1E*/ int field_1E;
        /*  22*/ int field_22;
        
        void dump() {
            printf("gap_0: %d\n", this->gap_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_6: %d\n", this->field_6);
            printf("field_A: %d\n", this->field_A);
            printf("field_E: %d\n", this->field_E);
            printf("field_12: %d\n", this->field_12);
            printf("field_16: %d\n", this->field_16);
            printf("field_1A: %d\n", this->field_1A);
            printf("field_1E: %d\n", this->field_1E);
            printf("field_22: %d\n", this->field_22);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CWorldShortEntry2) == 0x26);

#pragma pack(push, 1)
    class CWorld {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *sub_5098E0)(CWorld *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__thiscall *CWorld__create_objects)(CWorld *self);  // int (__thiscall *)(int this)
            /*   8*/ char(__thiscall *CWorld__fun_50A2F0)(CWorld *self);  // char (__thiscall *)(int this)
            /*   C*/ unsigned __int16(__thiscall *CWorld__fun_510E90)(CWorld *self, GameAction *, int);  // unsigned __int16 (__thiscall *)(CWorld *this, GameAction *a2, int a3)
            /*  10*/ void *(__stdcall *loc_508C00)();  // void *(__stdcall *)()
            /*  14*/ BOOL(__thiscall *loc_508C10)(CWorld *self, int);  // BOOL (__thiscall *)(CWorld *this, int a2)
            /*  18*/ unsigned int(__thiscall *tick)(CWorld *self, GameActionCtx *);  // unsigned int (__thiscall *)(int this, GameActionCtx *a2)
            /*  1C*/ int(__thiscall *CWorld__loadLevel)(CWorld *self, char *);  // int (__thiscall *)(int this, const char *a2)
            /*  20*/ int(__thiscall *CWorld__fun_50FBA0)(CWorld *self);  // int (__thiscall *)(void *this)
            /*  24*/ int(__thiscall *CWorld__fun_50FC60)(CWorld *self);  // int (__thiscall *)(_DWORD *this)
            /*  28*/ int(__stdcall *CWorld__fun_50FD10)(int);  // int (__stdcall *)(int a1)
            /*  2C*/ int(__thiscall *CWorld__fun_50FD70)(CWorld *self, char *);  // int (__thiscall *)(char *this, const char *a2)
            /*  30*/ int(__thiscall *sub_509520)(CWorld *self);  // int (__thiscall *)(_DWORD *this)
            /*  34*/ int(__thiscall *CWorld__fun_50F3D0)(CWorld *self);  // int (__thiscall *)(int this)
            /*  38*/ void(__thiscall *CWorld__fun_50EA70)(CWorld *self);  // void (__thiscall *)(int *this)
            /*  3C*/ int(__thiscall *sub_509630)(CWorld *self);  // int (__thiscall *)(_DWORD *this)
            /*  40*/ int(__thiscall *sub_509640)(CWorld *self);  // int (__thiscall *)(_DWORD *this)
            /*  44*/ int(__thiscall *CWorld__fun_510730)(CWorld *self, int, int);  // int (__thiscall *)(int this, int a2, int a3)
            /*  48*/ int(__thiscall *sub_509820)(CWorld *self);  // int (__thiscall *)(int this)
            /*  4C*/ int(__thiscall *sub_509850)(CWorld *self);  // int (__thiscall *)(int this)
            /*  50*/ int(__thiscall *sub_509860)(CWorld *self, int);  // int (__thiscall *)(int this, int a2)
            /*  54*/ char(__thiscall *CWorld__fun_50CD10)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /*  58*/ char(__thiscall *CWorld__fun_50CD60)(CWorld *self, unsigned __int8);  // char (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  5C*/ char(__thiscall *CWorld__fun_50CE00)(CWorld *self, unsigned __int8);  // char (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  60*/ char(__thiscall *CWorld__fun_50CEB0)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /*  64*/ BOOL(__thiscall *CWorld__fun_50CF80)(CWorld *self, unsigned __int8);  // BOOL (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  68*/ int(__thiscall *sub_509480)(CWorld *self, int);  // int (__thiscall *)(void *this, int a2)
            /*  6C*/ int(__thiscall *sub_509450)(CWorld *self, int, int);  // int (__thiscall *)(void *this, int a2, int a3)
            /*  70*/ void *(__stdcall *loc_508DD0)();  // void *(__stdcall *)()
            /*  74*/ void *(__stdcall *loc_508DF0)();  // void *(__stdcall *)()
            /*  78*/ void *(__stdcall *loc_508E00)();  // void *(__stdcall *)()
            /*  7C*/ void *(__stdcall *loc_508E10)();  // void *(__stdcall *)()
            /*  80*/ char(__thiscall *CWorld__fun_50CF20)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /*  84*/ char(__thiscall *CWorld__fun_50CFB0)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /*  88*/ char(__thiscall *CWorld__fun_50CFD0)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /*  8C*/ char(__thiscall *CWorld__fun_50D040)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /*  90*/ char(__thiscall *CWorld__fun_50D120)(CWorld *self, unsigned int);  // char (__thiscall *)(_DWORD *this, unsigned int a2)
            /*  94*/ int(__thiscall *CWorld__fun_50D1B0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  98*/ int(__thiscall *CWorld__fun_50D0B0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  9C*/ void *(__stdcall *loc_508E20)();  // void *(__stdcall *)()
            /*  A0*/ void *(__stdcall *loc_508E30)();  // void *(__stdcall *)()
            /*  A4*/ void *(__stdcall *loc_508E40)();  // void *(__stdcall *)()
            /*  A8*/ char(__thiscall *CWorld__fun_50D150)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /*  AC*/ char(__thiscall *CWorld__fun_50D220)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /*  B0*/ char(__thiscall *CWorld__fun_50D240)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /*  B4*/ char(__thiscall *CWorld__fun_50D2E0)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /*  B8*/ char(__thiscall *CWorld__fun_50D420)(CWorld *self, unsigned int);  // char (__thiscall *)(_DWORD *this, unsigned int a2)
            /*  BC*/ int(__thiscall *CWorld__fun_50D4D0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  C0*/ int(__thiscall *CWorld__fun_50D390)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  C4*/ int(__thiscall *loc_508E50)(CWorld *self);  // int (__thiscall *)(CWorld *)
            /*  C8*/ void *(__stdcall *loc_508E60)();  // void *(__stdcall *)()
            /*  CC*/ void *(__stdcall *loc_508E70)();  // void *(__stdcall *)()
            /*  D0*/ char(__thiscall *CWorld__fun_50D460)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /*  D4*/ char(__thiscall *CWorld__fun_50DEB0)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /*  D8*/ char(__thiscall *CWorld__fun_50DED0)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /*  DC*/ char(__thiscall *CWorld__fun_50DF30)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /*  E0*/ char(__thiscall *CWorld__fun_50E010)(CWorld *self, unsigned int);  // char (__thiscall *)(_DWORD *this, unsigned int a2)
            /*  E4*/ int(__thiscall *CWorld__fun_50E080)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  E8*/ int(__thiscall *CWorld__fun_50DFA0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /*  EC*/ void *(__stdcall *loc_508F40)();  // void *(__stdcall *)()
            /*  F0*/ void *(__stdcall *loc_508F50)();  // void *(__stdcall *)()
            /*  F4*/ void *(__stdcall *loc_508F60)();  // void *(__stdcall *)()
            /*  F8*/ char(__thiscall *CWorld__fun_50E040)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /*  FC*/ char(__thiscall *CWorld__fun_50DC80)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /* 100*/ char(__thiscall *CWorld__fun_50DCA0)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 104*/ char(__thiscall *CWorld__fun_50DD00)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 108*/ char(__thiscall *CWorld__fun_50DDD0)(CWorld *self, unsigned int);  // char (__thiscall *)(_DWORD *this, unsigned int a2)
            /* 10C*/ int(__thiscall *CWorld__fun_50DE50)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 110*/ int(__thiscall *CWorld__fun_50DD60)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 114*/ void *(__stdcall *loc_508F10)();  // void *(__stdcall *)()
            /* 118*/ void *(__stdcall *loc_508F20)();  // void *(__stdcall *)()
            /* 11C*/ void *(__stdcall *loc_508F30)();  // void *(__stdcall *)()
            /* 120*/ char(__thiscall *CWorld__fun_50DE00)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /* 124*/ char(__thiscall *CWorld__fun_50D550)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /* 128*/ char(__thiscall *CWorld__fun_50D570)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 12C*/ char(__thiscall *CWorld__fun_50D5E0)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 130*/ char(__thiscall *CWorld__fun_50D6C0)(CWorld *self, unsigned int);  // char (__thiscall *)(_DWORD *this, unsigned int a2)
            /* 134*/ int(__thiscall *CWorld__fun_50D750)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 138*/ int(__thiscall *CWorld__fun_50D650)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 13C*/ void *(__stdcall *loc_508E80)();  // void *(__stdcall *)()
            /* 140*/ void *(__stdcall *loc_508E90)();  // void *(__stdcall *)()
            /* 144*/ void *(__stdcall *loc_508EA0)();  // void *(__stdcall *)()
            /* 148*/ char(__thiscall *CWorld__fun_50D6F0)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /* 14C*/ char(__thiscall *CWorld__fun_50D7C0)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /* 150*/ char(__thiscall *CWorld__fun_50D7E0)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 154*/ char(__thiscall *CWorld__fun_50D850)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 158*/ char(__thiscall *CWorld__fun_50D930)(CWorld *self, unsigned int);  // char (__thiscall *)(_DWORD *this, unsigned int a2)
            /* 15C*/ int(__thiscall *CWorld__fun_50D9C0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 160*/ int(__thiscall *CWorld__fun_50D8C0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 164*/ void *(__stdcall *loc_508EB0)();  // void *(__stdcall *)()
            /* 168*/ void *(__stdcall *loc_508EC0)();  // void *(__stdcall *)()
            /* 16C*/ void *(__stdcall *loc_508ED0)();  // void *(__stdcall *)()
            /* 170*/ char(__thiscall *CWorld__fun_50D960)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /* 174*/ char(__thiscall *CWorld__fun_50DA20)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /* 178*/ char(__thiscall *CWorld__fun_50DA40)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 17C*/ char(__thiscall *CWorld__fun_50DAB0)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 180*/ char(__thiscall *CWorld__fun_50DB90)(CWorld *self, unsigned int);  // char (__thiscall *)(_DWORD *this, unsigned int a2)
            /* 184*/ int(__thiscall *CWorld__fun_50DC10)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 188*/ int(__thiscall *CWorld__fun_50DB20)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 18C*/ void *(__stdcall *loc_508EE0)();  // void *(__stdcall *)()
            /* 190*/ void *(__stdcall *loc_508EF0)();  // void *(__stdcall *)()
            /* 194*/ void *(__stdcall *loc_508F00)();  // void *(__stdcall *)()
            /* 198*/ char(__thiscall *CWorld__fun_50DBC0)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /* 19C*/ char(__thiscall *CWorld__fun_50E0E0)(CWorld *self);  // char (__thiscall *)(_DWORD *this)
            /* 1A0*/ char(__thiscall *CWorld__fun_50E100)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 1A4*/ char(__thiscall *CWorld__fun_50E170)(CWorld *self, char);  // char (__thiscall *)(_DWORD *this, char a2)
            /* 1A8*/ char(__thiscall *CWorld__fun_50E250)(CWorld *self, unsigned int);  // char (__thiscall *)(_DWORD *this, unsigned int a2)
            /* 1AC*/ int(__thiscall *CWorld__fun_50E2D0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 1B0*/ int(__thiscall *CWorld__fun_50E1E0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 1B4*/ void *(__stdcall *loc_508F70)();  // void *(__stdcall *)()
            /* 1B8*/ void *(__stdcall *loc_508F80)();  // void *(__stdcall *)()
            /* 1BC*/ void *(__stdcall *loc_508F90)();  // void *(__stdcall *)()
            /* 1C0*/ char(__thiscall *CWorld__fun_50E280)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /* 1C4*/ char(__thiscall *CWorld__fun_50E330)(CWorld *self, int);  // char (__thiscall *)(_DWORD *this, int a2)
            /* 1C8*/ int(__thiscall *CWorld__fun_50E3A0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 1CC*/ int(__thiscall *loc_508FA0)(CWorld *self, int);  // int (__thiscall *)(CWorld *, int)
            /* 1D0*/ int(__thiscall *loc_508FB0)(CWorld *self);  // int (__thiscall *)(CWorld *)
            /* 1D4*/ void *(__stdcall *loc_508FE0)();  // void *(__stdcall *)()
            /* 1D8*/ void *(__stdcall *loc_508FC0)();  // void *(__stdcall *)()
            /* 1DC*/ void *(__stdcall *loc_508C70)();  // void *(__stdcall *)()
            /* 1E0*/ void *(__stdcall *loc_508C80)();  // void *(__stdcall *)()
            /* 1E4*/ void *(__stdcall *loc_508CA0)();  // void *(__stdcall *)()
            /* 1E8*/ void(__thiscall *loc_508CC0)(CWorld *self, uint32_t, uint32_t, int);  // void (__thiscall *)(int, _DWORD, _DWORD, int)
            /* 1EC*/ void(__thiscall *loc_508CF0)(CWorld *self, int);  // void (__thiscall *)(CWorld *, int)
            /* 1F0*/ void(__thiscall *loc_508D00)(CWorld *self, uint32_t);  // void (__thiscall *)(CWorld *, _DWORD)
            /* 1F4*/ void *(__stdcall *loc_508D10)();  // void *(__stdcall *)()
            /* 1F8*/ void *(__stdcall *loc_508D40)();  // void *(__stdcall *)()
            /* 1FC*/ void *(__stdcall *loc_509090)();  // void *(__stdcall *)()
            /* 200*/ void *(__stdcall *loc_509050)();  // void *(__stdcall *)()
            /* 204*/ void *(__stdcall *loc_509010)();  // void *(__stdcall *)()
            /* 208*/ int(__thiscall *sub_509200)(CWorld *self, int, int);  // int (__thiscall *)(int this, int a2, int a3)
            /* 20C*/ void *(__stdcall *loc_5090C0)();  // void *(__stdcall *)()
            /* 210*/ BOOL(__stdcall *sub_5091C0)(int);  // BOOL (__stdcall *)(int a1)
            /* 214*/ int(__stdcall *CEngineInterface__fun_443150)(int, int);  // int (__stdcall *)(int a1, int a2)
            /* 218*/ void *(__stdcall *loc_509100)();  // void *(__stdcall *)()
            /* 21C*/ uint32_t *(__thiscall *sub_5092F0)(CWorld *self, int, int, uint32_t *);  // void **(__thiscall *)(void *this, int a2, int a3, _DWORD *a4)
            /* 220*/ int(__stdcall *sub_5092D0)(int, int);  // int (__stdcall *)(int a1, int a2)
            /* 224*/ BOOL(__thiscall *sub_509230)(CWorld *self, int, int);  // BOOL (__thiscall *)(int this, int a2, int a3)
            /* 228*/ int(__stdcall *sub_509260)(int, int, __int16);  // int (__stdcall *)(int a1, int a2, __int16 a3)
            /* 22C*/ int(__stdcall *sub_509280)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /* 230*/ int(__stdcall *sub_509310)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /* 234*/ int(__stdcall *sub_509340)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /* 238*/ int(__stdcall *sub_509370)(int, int, __int16, int);  // int (__stdcall *)(int a1, int a2, __int16 a3, int a4)
            /* 23C*/ int(__stdcall *sub_5093A0)(int, int, int);  // int (__stdcall *)(int a1, int a2, int a3)
            /* 240*/ int(__stdcall *sub_5093C0)(int, int);  // int (__stdcall *)(int a1, int a2)
            /* 244*/ int(__stdcall *sub_5093E0)(int, int, __int16, int);  // int (__stdcall *)(int a1, int a2, __int16 a3, int a4)
            /* 248*/ int(__stdcall *sub_509410)(int, int, int);  // int (__stdcall *)(int a1, int a2, int a3)
            /* 24C*/ int(__stdcall *sub_509430)(int, int, __int16);  // int (__stdcall *)(int a1, int a2, __int16 a3)
            /* 250*/ int(__thiscall *CWorld__fun_5177B0)(CWorld *self, int);  // int (__thiscall *)(void *this, int a2)
            /* 254*/ int(__stdcall *CWorld__fun_50E530)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /* 258*/ int(__stdcall *CWorld__fun_50E560)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /* 25C*/ int(__stdcall *CWorld__fun_50E590)(int, int, int, int);  // int (__stdcall *)(int a1, int a2, int a3, int a4)
            /* 260*/ int(__thiscall *getCTag_508C40)(CWorld *self, MyProfiler *);  // int (__thiscall *)(CWorld *, MyProfiler *)
            /* 264*/ unsigned __int16(__thiscall *loc_508C60)(CWorld *self);  // unsigned __int16 (__thiscall *)(CWorld *)
            /* 268*/ void(__stdcall *nullsub_10)(int, int);  // void (__stdcall *)(int a1, int a2)
            /* 26C*/ BOOL(__thiscall *sub_5094B0)(CWorld *self, int);  // BOOL (__thiscall *)(void *this, int a2)
            /* 270*/ int(__thiscall *sub_5094D0)(CWorld *self, int);  // int (__thiscall *)(void *this, int a2)
            /* 274*/ int(__thiscall *sub_5094F0)(CWorld *self, int, int, int);  // int (__thiscall *)(void *this, int a2, int a3, int a4)
            /* 278*/ int(__thiscall *CWorld__fun_50E420)(CWorld *self, int, __int16);  // int (__thiscall *)(void *this, int a2, __int16 a3)
            /* 27C*/ BOOL(__thiscall *CWorld__fun_510700)(CWorld *self, int);  // BOOL (__thiscall *)(void *this, int a2)
            /* 280*/ int(__stdcall *sub_5095B0)(__int16);  // int (__stdcall *)(__int16 a1)
            /* 284*/ int(__stdcall *sub_5095D0)(int);  // int (__stdcall *)(int a1)
            /* 288*/ int(__thiscall *sub_5095F0)(CWorld *self, unsigned __int8);  // int (__thiscall *)(_DWORD *this, unsigned __int8 a2)
            /* 28C*/ int(__stdcall *sub_509610)(int);  // int (__stdcall *)(int a1)
            /* 290*/ char *(__stdcall *CWorld__fun_50F830)(unsigned __int16, int);  // char *(__stdcall *)(unsigned __int16 a1, int a2)
            /* 294*/ void(__stdcall *nullsub_23)(int, int, int);  // void (__stdcall *)(int a1, int a2, int a3)
            /* 298*/ int(__stdcall *CWorld__fun_50F880)(int);  // int (__stdcall *)(int a1)
            /* 29C*/ char *(__thiscall *sub_509530)(CWorld *self);  // char *(__thiscall *)(char *this)
            /* 2A0*/ int(__thiscall *sub_5097A0)(CWorld *self, int);  // int (__thiscall *)(char *this, int a2)
            /* 2A4*/ int(__thiscall *sub_5097B0)(CWorld *self, int, int);  // int (__thiscall *)(char *this, int a2, int a3)
            /* 2A8*/ uint32_t *(__thiscall *sub_5097D0)(CWorld *self, uint32_t *);  // _DWORD *(__thiscall *)(int this, _DWORD *a2)
            /* 2AC*/ int(__thiscall *sub_5097F0)(CWorld *self, int);  // int (__thiscall *)(char *this, int a2)
            /* 2B0*/ int(__thiscall *sub_509800)(CWorld *self, int, int);  // int (__thiscall *)(char *this, int a2, int a3)
            /* 2B4*/ int(__thiscall *sub_509540)(CWorld *self, int);  // int (__thiscall *)(void *this, int a2)
            /* 2B8*/ int(__thiscall *CWorld__fun_505250)(CWorld *self, int);  // int (__thiscall *)(unsigned __int16 *this, int a2)
            /* 2BC*/ char(__thiscall *sub_509560)(CWorld *self);  // char (__thiscall *)(_BYTE *this)
            /* 2C0*/ char(__thiscall *sub_509570)(CWorld *self);  // char (__thiscall *)(_BYTE *this)
            /* 2C4*/ int(__thiscall *CWorld__fun_510000)(CWorld *self, int, int);  // int (__thiscall *)(void *this, int a2, int a3)
            /* 2C8*/ uint32_t *(__thiscall *CWorld__fun_50FAE0)(CWorld *self, char);  // void **(__thiscall *)(unsigned __int16 *this, char a2)
            /* 2CC*/ uint32_t *(__thiscall *CWorld__fun_50FB10)(CWorld *self, char);  // void **(__thiscall *)(unsigned __int16 *this, char a2)
            /* 2D0*/ int(__stdcall *CEngineInterface__fun_628E30)(int);  // int (__stdcall *)(int a1)
            /* 2D4*/ int(__thiscall *sub_509690)(CWorld *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /* 2D8*/ int(__thiscall *CWorld__fun_5101C0)(CWorld *self, int, int);  // int (__thiscall *)(char *this, int a2, int a3)
            /* 2DC*/ BOOL(__thiscall *CWorld__fun_510210)(CWorld *self, int);  // BOOL (__thiscall *)(_BYTE *this, int a2)
            /* 2E0*/ uint32_t *(__thiscall *CWorld__fun_510230)(CWorld *self, uint32_t *, int);  // _DWORD *(__thiscall *)(char *this, _DWORD *a2, int a3)
            /* 2E4*/ int(__thiscall *sub_5098D0)(CWorld *self);  // int (__thiscall *)(int this)
            /* 2E8*/ char(__thiscall *sub_509680)(CWorld *self);  // char (__thiscall *)(_BYTE *this)
            /* 2EC*/ int(__thiscall *sub_5096A0)(CWorld *self, int);  // int (__thiscall *)(void *this, int a2)
            /* 2F0*/ void *(__stdcall *duplicate_187_1)();  // void *(__stdcall *)()
            /* 2F4*/ char *(__thiscall *sub_5096C0)(CWorld *self, int, __int16, char);  // char *(__thiscall *)(char *this, int a2, __int16 a3, char a4)
            /* 2F8*/ BOOL(__thiscall *sub_5096F0)(CWorld *self);  // BOOL (__thiscall *)(_BYTE *this)
            /* 2FC*/ char *(__thiscall *sub_509700)(CWorld *self);  // char *(__thiscall *)(char *this)
            /* 300*/ int(__thiscall *sub_509710)(CWorld *self);  // int (__thiscall *)(int this)
            /* 304*/ char *(__thiscall *sub_509730)(CWorld *self);  // char *(__thiscall *)(char *this)
            /* 308*/ int(__stdcall *sub_509750)(int, int, int);  // int (__stdcall *)(int a1, int a2, int a3)
            /* 30C*/ int(__thiscall *sub_509780)(CWorld *self, uint32_t *, uint32_t *, int);  // int (__thiscall *)(int this, _DWORD *a2, _DWORD *a3, int a4)
            /* 310*/ void *(__stdcall *loc_508D60)();  // void *(__stdcall *)()
            /* 314*/ void *(__stdcall *loc_508D70)();  // void *(__stdcall *)()
            /* 318*/ void *(__stdcall *loc_508D80)();  // void *(__stdcall *)()
            /* 31C*/ void *(__stdcall *loc_508D90)();  // void *(__stdcall *)()
            /* 320*/ void *(__stdcall *duplicate_154_1)();  // void *(__stdcall *)()
            /* 324*/ char *(__thiscall *sub_509830)(CWorld *self);  // char *(__thiscall *)(char *this)
            /* 328*/ void *(__stdcall *loc_508DA0)();  // void *(__stdcall *)()
            /* 32C*/ void *(__stdcall *loc_508DB0)();  // void *(__stdcall *)()
            /* 330*/ unsigned int(__thiscall *sub_509740)(CWorld *self);  // unsigned int (__thiscall *)(CWorld *this)
            /* 334*/ __int16(__thiscall *CWorld__fun_515420)(CWorld *self, int, uint32_t *, int);  // __int16 (__thiscall *)(void *this, int a2, int *a3, int a4)
            /* 338*/ __int16(__thiscall *CWorld__fun_515520)(CWorld *self, int, uint32_t *, uint16_t *, int);  // __int16 (__thiscall *)(unsigned __int16 *this, int a2, _DWORD *a3, unsigned __int16 *a4, int a5)
            /* 33C*/ __int16(__thiscall *CWorld__fun_515D50)(CWorld *self, int, uint32_t *, uint16_t *);  // __int16 (__thiscall *)(unsigned __int16 *this, int a2, _DWORD *a3, unsigned __int16 *a4)
            /* 340*/ int(__thiscall *sub_509650)(CWorld *self);  // int (__thiscall *)(int this)
            /* 344*/ int(__thiscall *CWorld__fun_511650)(CWorld *self, int);  // int (__thiscall *)(int this, int a2)
            /* 348*/ int(__thiscall *sub_509670)(CWorld *self);  // int (__thiscall *)(int this)
            /* 34C*/ int(__thiscall *sub_509660)(CWorld *self);  // int (__thiscall *)(int this)
            /* 350*/ char(__thiscall *CWorld__fun_510E20)(CWorld *self);  // char (__thiscall *)(unsigned __int16 *this)
            /* 354*/ int(__thiscall *sub_509840)(CWorld *self);  // int (__thiscall *)(int this)
            /* 358*/ BOOL(__thiscall *CWorld__fun_511610)(CWorld *self);  // BOOL (__thiscall *)(int this)
            /* 35C*/ int(__thiscall *CWorld__fun_511630)(CWorld *self, int);  // int (__thiscall *)(int this, int a2)
            /* 360*/ int(__thiscall *CWorld__fun_511640)(CWorld *self);  // int (__thiscall *)(int this)
            /* 364*/ __int16(__thiscall *sub_509870)(CWorld *self);  // __int16 (__thiscall *)(_WORD *this)
            /* 368*/ __int16(__thiscall *sub_509880)(CWorld *self, __int16);  // __int16 (__thiscall *)(_WORD *this, __int16 a2)
            /* 36C*/ int(__thiscall *sub_509890)(CWorld *self);  // int (__thiscall *)(_DWORD *this)
            /* 370*/ int(__thiscall *sub_5098A0)(CWorld *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /* 374*/ char(__thiscall *sub_5098B0)(CWorld *self);  // char (__thiscall *)(_BYTE *this)
            /* 378*/ char(__thiscall *sub_5098C0)(CWorld *self, char);  // char (__thiscall *)(_BYTE *this, char a2)
            /* 37C*/ int(__thiscall *CWorld__fun_50E920)(CWorld *self, int);  // int (__thiscall *)(CWorld *this, int)
            /* 380*/ BOOL(__thiscall *sub_509160)(CWorld *self, int, int);  // BOOL (__thiscall *)(int this, int a2, int a3)
            /* 384*/ int(__stdcall *sub_5092B0)(int, int, __int16);  // int (__stdcall *)(int a1, int a2, __int16 a3)
            /* 388*/ int(__thiscall *CWorld__fun_50E490)(CWorld *self, int, int, int, int, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7)
            /* 38C*/ int(__thiscall *sub_509580)(CWorld *self, int, int, int, int, int);  // int (__thiscall *)(void *this, int a2, int a3, int a4, int a5, int a6)
            /* 390*/ int(__thiscall *CWorld__fun_50E4D0)(CWorld *self, int, int, int, int, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7)
            /* 394*/ int(__thiscall *CWorld__fun_50E510)(CWorld *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x398);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyProfiler *profiler;
        /*   8*/ MyCreatureCollection creatures;
        /*  4A*/ uint8_t gap4A[48];
        /*  7A*/ uint16_t field_7A;
        /*  7C*/ uint8_t gap_7C[2370];
        /* 9BE*/ uint16_t f9BE;
        /* 9C0*/ uint8_t f9C0_gap[26];
        /* 9DA*/ CMap f9DA_cmap;
        /*14A9*/ uint8_t gap_14A9[247];
        /*15A0*/ uint32_t field_15A0;
        /*15A4*/ uint8_t gap_15A4[144];
        /*1634*/ MyDdSurface f1634_surface;
        /*165C*/ uint8_t gap165C[40];
        /*1684*/ GameActionHandler f1684_actionHandlers[138];
        /*1F24*/ uint32_t field_1F24;
        /*1F28*/ uint8_t gap_1F28[3884];
        /*2E54*/ uint32_t field_2E54;
        /*2E58*/ uint8_t gap_2E58[17377];
        /*7239*/ char field_7239;
        /*723A*/ uint8_t gap_723A[9];
        /*7243*/ __int16 field_7243;
        /*7245*/ AABB aabb_4[4];
        /*7285*/ uint8_t gap7285[12];
        /*7291*/ char field_7291;
        /*7292*/ char field_7292;
        /*7293*/ int field_7293;
        /*7297*/ int field_7297;
        /*729B*/ uint8_t gap_729B[34];
        /*72BD*/ CWorldShortEntry3 short3_entries_6[6];
        /*72E7*/ uint8_t gap72E7[5];
        /*72EC*/ CResearchOrder f72EC_c_recearch_order;
        /*7304*/ uint8_t gap_7304[10572];
        /*9C50*/ CWorldShortEntry2 short2_entries_8[8];
        /*9D80*/ uint8_t gap9D80[68];
        /*9DC4*/ CWorldEntry entries_6[6];
        /*9E66*/ uint8_t gap9E66[16];
        /*9E76*/ CWorldEntry f9E76_entries_2[2];
        /*9EAC*/ uint8_t gap9EAC[120];
        /*9F24*/ CWorldEntry entries_30[30];
        /*A24E*/ uint8_t gapA24E[28];
        /*A26A*/ CWorldEntry entries_7[7];
        /*A327*/ uint8_t gapA327[116];
        /*A39B*/ int field_A39B;
        /*A39F*/ int field_A39F;
        /*A3A3*/ int buf_field_A3A3;
        /*A3A7*/ int buf_field_A3A7;
        /*A3AB*/ int field_A3AB;
        /*A3AF*/ int field_A3AF;
        /*A3B3*/ int field_A3B3;
        /*A3B7*/ int field_A3B7;
        /*A3BB*/ int field_A3BB;
        /*A3BF*/ int fA3BF_is_surface_filled;
        
        virtual ~CWorld();
        void dump() {
            printf("profiler: MyProfiler(%p)\n", this->profiler);
            printf("gap4A: %d\n", this->gap4A);
            printf("field_7A: %d\n", this->field_7A);
            printf("gap_7C: %d\n", this->gap_7C);
            printf("f9BE: %d\n", this->f9BE);
            printf("f9C0_gap: %d\n", this->f9C0_gap);
            printf("field_15A0: %d\n", this->field_15A0);
            printf("gap_15A4: %d\n", this->gap_15A4);
            printf("gap165C: %d\n", this->gap165C);
            printf("field_1F24: %d\n", this->field_1F24);
            printf("gap_1F28: %d\n", this->gap_1F28);
            printf("field_2E54: %d\n", this->field_2E54);
            printf("gap_2E58: %d\n", this->gap_2E58);
            printf("field_7239: %d\n", this->field_7239);
            printf("gap_723A: %d\n", this->gap_723A);
            printf("field_7243: %d\n", this->field_7243);
            printf("gap7285: %d\n", this->gap7285);
            printf("field_7291: %d\n", this->field_7291);
            printf("field_7292: %d\n", this->field_7292);
            printf("field_7293: %d\n", this->field_7293);
            printf("field_7297: %d\n", this->field_7297);
            printf("gap_729B: %d\n", this->gap_729B);
            printf("gap72E7: %d\n", this->gap72E7);
            printf("gap_7304: %d\n", this->gap_7304);
            printf("gap9D80: %d\n", this->gap9D80);
            printf("gap9E66: %d\n", this->gap9E66);
            printf("gap9EAC: %d\n", this->gap9EAC);
            printf("gapA24E: %d\n", this->gapA24E);
            printf("gapA327: %d\n", this->gapA327);
            printf("field_A39B: %d\n", this->field_A39B);
            printf("field_A39F: %d\n", this->field_A39F);
            printf("buf_field_A3A3: %d\n", this->buf_field_A3A3);
            printf("buf_field_A3A7: %d\n", this->buf_field_A3A7);
            printf("field_A3AB: %d\n", this->field_A3AB);
            printf("field_A3AF: %d\n", this->field_A3AF);
            printf("field_A3B3: %d\n", this->field_A3B3);
            printf("field_A3B7: %d\n", this->field_A3B7);
            printf("field_A3BB: %d\n", this->field_A3BB);
            printf("fA3BF_is_surface_filled: %d\n", this->fA3BF_is_surface_filled);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CWorld) == 0xA3C3);

#pragma pack(push, 1)
    class CWorldShortEntry {
    public:
        
        /*   0*/ uint32_t f0_px;
        /*   4*/ int f4_py;
        /*   8*/ int f8_pw;
        /*   C*/ int fC_pz;
        
        void dump() {
            printf("f0_px: %d\n", this->f0_px);
            printf("f4_py: %d\n", this->f4_py);
            printf("f8_pw: %d\n", this->f8_pw);
            printf("fC_pz: %d\n", this->fC_pz);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CWorldShortEntry) == 0x10);

#pragma pack(push, 1)
    class CWorldInterface {
    public:
        
        /*   4*/ int field_4;
        
        virtual ~CWorldInterface();
        void dump() {
            printf("field_4: %d\n", this->field_4);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CWorldInterface) == 0x8);

#pragma pack(push, 1)
    class MyCbHandle {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *sub_5BB440)(MyCbHandle *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t *f4_callbackIdxList;
        /*   8*/ void *f8_callbackObj;
        
        virtual ~MyCbHandle();
        void dump() {
            printf("f4_callbackIdxList: uint32_t(%p)\n", this->f4_callbackIdxList);
            printf("f8_callbackObj: void(%p)\n", this->f8_callbackObj);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCbHandle) == 0xC);

#pragma pack(push, 1)
    class MySharedObj {
    public:
        struct vtbl_t {
            /*   0*/ LONG(__thiscall *release)(MySharedObj *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *addRef)(MySharedObj *self);  // LONG (__thiscall *)(volatile LONG *this)
            /*   8*/ MySharedObj *(__thiscall *scalar_destructor)(MySharedObj *self, char);  // MySharedObj *(__thiscall *)(MySharedObj *this, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0xC);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int refs;
        
        virtual ~MySharedObj();
        void dump() {
            printf("refs: %d\n", this->refs);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MySharedObj) == 0x8);

#pragma pack(push, 1)
    class MyComEx : public MySharedObj {
    public:
        struct vtbl_t : public MySharedObj::vtbl_t {
            /*   C*/ void(__stdcall *fun1)(int);  // void (__stdcall *)(int)
            /*  10*/ int(__thiscall *fun2)(MyComEx *self, DxAction *);  // int (__thiscall *)(MyComEx *this, DxAction *)
            /*  14*/ int(__thiscall *fun3)(MyComEx *self, DxAction *);  // int (__thiscall *)(MyComEx *this, DxAction *)
            /*  18*/ int(__thiscall *fun4)(MyComEx *self, DxAction *);  // int (__thiscall *)(MyComEx *this, DxAction *)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   8*/ MyComEx *f4_child;
        
        virtual ~MyComEx();
        void dump() {
            printf("f4_child: MyComEx(%p)\n", this->f4_child);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyComEx) == 0xC);

#pragma pack(push, 1)
    class AsyncThing : public MyComEx {
    public:
        struct vtbl_t /*: public MyComEx::vtbl_t */{
            /*   0*/ void *(__thiscall *std__strstreambuf___scalar_deleting_destructor_uint)(AsyncThing *self, char);  // std::strstreambuf *(__thiscall *)(std::strstreambuf *this, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ uint32_t f8_lastError;
        /*  10*/ uint32_t exit_thread_flag;
        /*  14*/ uint32_t f10_hThread;
        /*  18*/ uint32_t f14_hEvent1;
        /*  1C*/ uint32_t f18_hEvent2;
        /*  20*/ uint32_t field_1C;
        /*  24*/ PtrArrList f20_dwordList;
        /*  34*/ int field_30;
        /*  38*/ int field_34;
        /*  3C*/ int field_38;
        /*  40*/ int field_3C;
        
        virtual ~AsyncThing();
        void dump() {
            printf("f8_lastError: %d\n", this->f8_lastError);
            printf("exit_thread_flag: %d\n", this->exit_thread_flag);
            printf("f10_hThread: %d\n", this->f10_hThread);
            printf("f14_hEvent1: %d\n", this->f14_hEvent1);
            printf("f18_hEvent2: %d\n", this->f18_hEvent2);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_30: %d\n", this->field_30);
            printf("field_34: %d\n", this->field_34);
            printf("field_38: %d\n", this->field_38);
            printf("field_3C: %d\n", this->field_3C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(AsyncThing) == 0x44);

#pragma pack(push, 1)
    class MyDxInputManagerCb {
    public:
        struct vtbl_t {
            /*   0*/ int(__thiscall *sub_5BC280)(MyDxInputManagerCb *self, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int a2, _DWORD *a3)
            /*   4*/ void *(__thiscall *sub_5BBEA0)(MyDxInputManagerCb *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   8*/ uint32_t *(__thiscall *sub_5BBF90)(MyDxInputManagerCb *self, uint32_t *);  // int *(__thiscall *)(int this, int *a2)
            /*   C*/ uint32_t *(__thiscall *sub_5BC060)(MyDxInputManagerCb *self, uint32_t *);  // int *(__thiscall *)(int *this, int *a2)
            /*  10*/ uint32_t *(__thiscall *sub_5BC170)(MyDxInputManagerCb *self, uint32_t *);  // int *(__thiscall *)(_DWORD *this, int *a2)
            /*  14*/ uint32_t *(__thiscall *sub_5BC130)(MyDxInputManagerCb *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2)
            /*  18*/ uint32_t *(__thiscall *sub_5BC0F0)(MyDxInputManagerCb *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyCbHandle f0_cbhandle;
        /*  10*/ AsyncThing fC_async;
        /*  54*/ int f50_createDD_state;
        /*  58*/ MyDxKeyboard *f54_pdxKeyboard;
        /*  5C*/ MyDxMouse *f58_pdxmouse;
        /*  60*/ ControlKeysUpdater *f5C_controlKeys;
        /*  64*/ MyMouseUpdater *f60_mouse;
        /*  68*/ DxActionQueue *f64_dxActionQueue;
        
        virtual ~MyDxInputManagerCb();
        void dump() {
            printf("f50_createDD_state: %d\n", this->f50_createDD_state);
            printf("f54_pdxKeyboard: MyDxKeyboard(%p)\n", this->f54_pdxKeyboard);
            printf("f58_pdxmouse: MyDxMouse(%p)\n", this->f58_pdxmouse);
            printf("f5C_controlKeys: ControlKeysUpdater(%p)\n", this->f5C_controlKeys);
            printf("f60_mouse: MyMouseUpdater(%p)\n", this->f60_mouse);
            printf("f64_dxActionQueue: DxActionQueue(%p)\n", this->f64_dxActionQueue);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDxInputManagerCb) == 0x6C);

#pragma pack(push, 1)
    class Obj6723B8 {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *scalar_destructor)(Obj6723B8 *self, char);  // std::locale::facet *(__thiscall *)(std::locale::facet *this, char a2)
            /*   4*/ MyDdSurface *(__thiscall *getDdSurface1)(Obj6723B8 *self);  // MyDdSurface *(__thiscall *)(Obj6723B8 *)
            /*   8*/ MyDdSurfaceEx *(__thiscall *getDdSurface2)(Obj6723B8 *self);  // MyDdSurfaceEx *(__thiscall *)(Obj6723B8 *)
            /*   C*/ AABB *(__thiscall *getAabb)(Obj6723B8 *self, AABB *);  // AABB *(__thiscall *)(Obj6723B8 *, AABB *)
            /*  10*/ void *(__thiscall *isSurfaceFlag)(Obj6723B8 *self);  // void *(__thiscall *)(Obj6723B8 *)
        };
        static_assert(sizeof(vtbl_t) == 0x14);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        
        virtual ~Obj6723B8();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj6723B8) == 0x4);

#pragma pack(push, 1)
    class MyInputManagerCb : public MyDxInputManagerCb {
    public:
        struct vtbl_t /*: public MyDxInputManagerCb::vtbl_t */{
            /*   0*/ int(__thiscall *__vftable)(MyInputManagerCb *self, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int, _DWORD *)
            /*   4*/ int(__thiscall *field_4)(MyInputManagerCb *self, char);  // int (__thiscall *)(void *Block, char)
            /*   8*/ int(__thiscall *initInputs)(MyInputManagerCb *self, char *);  // int (__thiscall *)(MyInputManagerCb *, char *)
            /*   C*/ uint32_t *(__thiscall *field_C)(MyInputManagerCb *self, uint32_t *);  // int *(__thiscall *)(_DWORD *this, int *)
            /*  10*/ uint32_t *(__thiscall *field_10)(MyInputManagerCb *self, uint32_t *);  // int *(__thiscall *)(MyInputManagerCb *this, int *a2)
            /*  14*/ uint32_t *(__thiscall *field_14)(MyInputManagerCb *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *)
            /*  18*/ uint32_t *(__thiscall *field_18)(MyInputManagerCb *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  6C*/ MyInputListenersHolder *f6C_pInputListenersHolder;
        /*  70*/ MyDxInputState *f70_pdxInputState;
        /*  74*/ MyWindowMsgs *f74_pMyWindowMsgs;
        /*  78*/ MyCollectDxAction *f78_pDxActionCollector;
        /*  7C*/ int field_7C;
        /*  80*/ MyCb6723D0 *f80_pchildcb;
        /*  84*/ Obj6723B8 f84_obj;
        
        virtual ~MyInputManagerCb();
        void dump() {
            printf("f6C_pInputListenersHolder: MyInputListenersHolder(%p)\n", this->f6C_pInputListenersHolder);
            printf("f70_pdxInputState: MyDxInputState(%p)\n", this->f70_pdxInputState);
            printf("f74_pMyWindowMsgs: MyWindowMsgs(%p)\n", this->f74_pMyWindowMsgs);
            printf("f78_pDxActionCollector: MyCollectDxAction(%p)\n", this->f78_pDxActionCollector);
            printf("field_7C: %d\n", this->field_7C);
            printf("f80_pchildcb: MyCb6723D0(%p)\n", this->f80_pchildcb);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyInputManagerCb) == 0x88);

#pragma pack(push, 1)
    class LockBase : public MyComEx {
    public:
        struct vtbl_t : public MyComEx::vtbl_t {
            /*  1C*/ int(__thiscall *getItemsCount)(LockBase *self);  // int (__thiscall *)(DxActionQueue *)
            /*  20*/ void(__thiscall *handleItem)(LockBase *self, uint32_t *, MyDxInputState *);  // void (__thiscall *)(DxActionQueue *, unsigned int *, MyDxInputState *)
        };
        static_assert(sizeof(vtbl_t) == 0x24);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        
        virtual ~LockBase();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(LockBase) == 0xC);

#pragma pack(push, 1)
    class Buf1000 {
    public:
        
        /*   0*/ uint32_t f0_base;
        /*   4*/ uint32_t f4_end;
        /*   8*/ uint32_t *f8_pos;
        /*   C*/ uint32_t *fC_pdwarr;
        
        void dump() {
            printf("f0_base: %d\n", this->f0_base);
            printf("f4_end: %d\n", this->f4_end);
            printf("f8_pos: uint32_t(%p)\n", this->f8_pos);
            printf("fC_pdwarr: uint32_t(%p)\n", this->fC_pdwarr);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Buf1000) == 0x10);

#pragma pack(push, 1)
    class DxActionQueue : public LockBase {
    public:
        struct vtbl_t : public LockBase::vtbl_t {
        };
        static_assert(sizeof(vtbl_t) == 0x24);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ uint32_t field_C;
        /*  10*/ char field_10;
        /*  11*/ uint8_t gap_11[3];
        /*  14*/ Buf1000 f14_read;
        /*  24*/ Buf1000 f24_write;
        /*  34*/ uint32_t *f34_dwarr_base;
        /*  38*/ int f38_dwcount;
        /*  3C*/ int f3C_itemsCount;
        /*  40*/ _RTL_CRITICAL_SECTION *f40_pCriticalSection;
        
        virtual ~DxActionQueue();
        void dump() {
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("f34_dwarr_base: uint32_t(%p)\n", this->f34_dwarr_base);
            printf("f38_dwcount: %d\n", this->f38_dwcount);
            printf("f3C_itemsCount: %d\n", this->f3C_itemsCount);
            printf("f40_pCriticalSection: _RTL_CRITICAL_SECTION(%p)\n", this->f40_pCriticalSection);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DxActionQueue) == 0x44);

#pragma pack(push, 1)
    class MyMouse : public MyComEx {
    public:
        struct vtbl_t /*: public MyComEx::vtbl_t */{
            /*   0*/ LONG(__thiscall *MyCom_release)(MyMouse *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MyCom_addRef)(MyMouse *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *MyMouse_sub_5DD430)(MyMouse *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ void(__stdcall *MyComEx_fun1)(int);  // void (__stdcall *)(int a1)
            /*  10*/ int(__thiscall *MyComEx_fun2)(MyMouse *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /*  14*/ char(__thiscall *sub_5DD4A0)(MyMouse *self, uint32_t *);  // char (__thiscall *)(int this, int *a2)
            /*  18*/ int(__thiscall *sub_5DD560)(MyMouse *self, uint32_t *);  // int (__thiscall *)(int this, _DWORD *a2)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ Obj672844 *f8_pobj;
        /*  10*/ Pos2i fC_pos;
        /*  18*/ Pos2i f14_pos2_prev;
        /*  20*/ float f1C_flX;
        /*  24*/ float f20_flY;
        /*  28*/ float f24_flX2;
        /*  2C*/ float f28_flY2;
        /*  30*/ float f2C_speed_cfg;
        /*  34*/ AABB f30_aabb;
        /*  44*/ UINT f40_dblClickTime;
        /*  48*/ int f44_dblClickKey;
        /*  4C*/ int f48_dblClickThreshold;
        /*  50*/ int f4C_x_threshold;
        /*  54*/ int f50_y_threshold;
        /*  58*/ int f54_acceleration;
        /*  5C*/ int f58_target___;
        /*  60*/ int f5C_isButtonsSwaped;
        
        virtual ~MyMouse();
        void dump() {
            printf("f8_pobj: Obj672844(%p)\n", this->f8_pobj);
            printf("f1C_flX: %d\n", this->f1C_flX);
            printf("f20_flY: %d\n", this->f20_flY);
            printf("f24_flX2: %d\n", this->f24_flX2);
            printf("f28_flY2: %d\n", this->f28_flY2);
            printf("f2C_speed_cfg: %d\n", this->f2C_speed_cfg);
            printf("f40_dblClickTime: %d\n", this->f40_dblClickTime);
            printf("f44_dblClickKey: %d\n", this->f44_dblClickKey);
            printf("f48_dblClickThreshold: %d\n", this->f48_dblClickThreshold);
            printf("f4C_x_threshold: %d\n", this->f4C_x_threshold);
            printf("f50_y_threshold: %d\n", this->f50_y_threshold);
            printf("f54_acceleration: %d\n", this->f54_acceleration);
            printf("f58_target___: %d\n", this->f58_target___);
            printf("f5C_isButtonsSwaped: %d\n", this->f5C_isButtonsSwaped);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyMouse) == 0x64);

#pragma pack(push, 1)
    class MyMouseCb_vtbl {
    public:
        
        /*   0*/ void *sub_5DD6F0;
        /*   4*/ void *sub_5BC900;
        
        void dump() {
            printf("sub_5DD6F0: void(%p)\n", this->sub_5DD6F0);
            printf("sub_5BC900: void(%p)\n", this->sub_5BC900);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyMouseCb_vtbl) == 0x8);

#pragma pack(push, 1)
    class Event0_winShown7 {
    public:
        
        /*   0*/ int f0_eventType;
        /*   4*/ int f4_width;
        /*   8*/ int f8_height;
        /*   C*/ int fC_display_bitnes;
        /*  10*/ int f10_isdevAcquireAnyTime;
        
        void dump() {
            printf("f0_eventType: %d\n", this->f0_eventType);
            printf("f4_width: %d\n", this->f4_width);
            printf("f8_height: %d\n", this->f8_height);
            printf("fC_display_bitnes: %d\n", this->fC_display_bitnes);
            printf("f10_isdevAcquireAnyTime: %d\n", this->f10_isdevAcquireAnyTime);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Event0_winShown7) == 0x14);

#pragma pack(push, 1)
    class MyMouseUpdater : public MyMouse {
    public:
        struct vtbl_t /*: public MyMouse::vtbl_t */{
            /*   0*/ LONG(__thiscall *MyCom_release)(MyMouseUpdater *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MyCom_addRef)(MyMouseUpdater *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *scalar_destructor)(MyMouseUpdater *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ void(__stdcall *MyComEx_fun1)(int);  // void (__stdcall *)(int a1)
            /*  10*/ int(__thiscall *MyComEx_fun2)(MyMouseUpdater *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /*  14*/ char(__thiscall *MyMouse_sub_5DD4A0)(MyMouseUpdater *self, uint32_t *);  // char (__thiscall *)(int this, int *a2)
            /*  18*/ uint32_t *(__thiscall *MyMouse_sub_5DD560)(MyMouseUpdater *self, uint32_t *);  // _DWORD *(__thiscall *)(int this, _DWORD *a2)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  64*/ MyMouseCb_vtbl *f64_cb;
        /*  68*/ MyCbHandle f68_cbhandle;
        
        virtual ~MyMouseUpdater();
        void dump() {
            printf("f64_cb: MyMouseCb_vtbl(%p)\n", this->f64_cb);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyMouseUpdater) == 0x74);

#pragma pack(push, 1)
    class Event0_unk6 {
    public:
        
        /*   0*/ int f0_eventType;
        /*   4*/ int field_4;
        
        void dump() {
            printf("f0_eventType: %d\n", this->f0_eventType);
            printf("field_4: %d\n", this->field_4);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Event0_unk6) == 0x8);

#pragma pack(push, 1)
    class ThreadCtx {
    public:
        
        /*   0*/ uint32_t tid;
        /*   4*/ int field_4;
        /*   8*/ uint8_t gap_8[64];
        /*  48*/ uint32_t f48_proc;
        /*  4C*/ void *f4C_arg;
        
        void dump() {
            printf("tid: %d\n", this->tid);
            printf("field_4: %d\n", this->field_4);
            printf("gap_8: %d\n", this->gap_8);
            printf("f48_proc: %d\n", this->f48_proc);
            printf("f4C_arg: void(%p)\n", this->f4C_arg);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(ThreadCtx) == 0x50);

#pragma pack(push, 1)
    class CFrontEndComponent : public CComponent {
    public:
        struct vtbl_t /*: public CComponent::vtbl_t */{
            /*   0*/ uint32_t *(__thiscall *CFrontEndComponent___scalar_deleting_destructor_uint)(CFrontEndComponent *self, char);  // _DWORD *(__thiscall *)(_DWORD *Block, char a2)
            /*   4*/ int(__thiscall *CFrontEndComponent__fun_52EFE0)(CFrontEndComponent *self);  // int (__thiscall *)(int this)
            /*   8*/ void(__thiscall *nullsub_1)(CFrontEndComponent *self);  // void (__thiscall *)(void *this)
            /*   C*/ int(__thiscall *CFrontEndComponent__launchGame)(CFrontEndComponent *self);  // int (__thiscall *)(CFrontEndComponent *this)
            /*  10*/ uint32_t *(__thiscall *CFrontEndComponent__fun_52F550)(CFrontEndComponent *self);  // int *(__thiscall *)(int this)
            /*  14*/ int(__thiscall *CFrontEndComponent__maybe_update_textures)(CFrontEndComponent *self);  // int (__thiscall *)(int this)
        };
        static_assert(sizeof(vtbl_t) == 0x18);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ uint32_t field_C;
        /*  10*/ uint32_t field_10;
        /*  14*/ uint8_t gap_14[942];
        /* 3C2*/ uint16_t field_3C2;
        /* 3C4*/ uint8_t gap_3C4[14];
        /* 3D2*/ int field_3D2;
        /* 3D6*/ int field_3D6;
        /* 3DA*/ MySurface field_3DA;
        /* 402*/ uint8_t gap_402[101];
        /* 467*/ int f467_timestampMs;
        /* 46B*/ int field_46B;
        /* 46F*/ int field_46F;
        /* 473*/ int field_473;
        /* 477*/ uint8_t gap_477[8];
        /* 47F*/ uint32_t field_47F;
        /* 483*/ uint8_t gap_483[9276];
        /*28BF*/ MySurface field_28BF_x36[36];
        /*2E5F*/ uint8_t gap2E5F[260];
        /*2F63*/ MySurface field_2F63_x9[9];
        /*30CB*/ MySurface field_30CB;
        /*30F3*/ MySurface field_30F3;
        /*311B*/ uint8_t gap_311B[145];
        /*31AC*/ MySurface field_31AC[20];
        /*34CC*/ MySurface field_34CC[4];
        /*356C*/ MySurface field_356C[4];
        /*360C*/ MySurface f360C_surf[23];
        /*39A4*/ MySurface f39A4_surf[23];
        /*3D3C*/ AABB f3D3C_aabb0_x23[23];
        /*3EAC*/ MySurface surf1;
        /*3ED4*/ MySurface surf2;
        /*3EFC*/ int field_3EFC;
        /*3F00*/ int field_3F00;
        /*3F04*/ int field_3F04;
        /*3F08*/ int field_3F08;
        /*3F0C*/ MySurface surf3;
        /*3F34*/ MySurface surf4;
        /*3F5C*/ int field_3F5C;
        /*3F60*/ int field_3F60;
        /*3F64*/ int field_3F64;
        /*3F68*/ int field_3F68;
        /*3F6C*/ uint8_t gap_3F6C[64];
        /*3FAC*/ MySurface surf5;
        /*3FD4*/ MySurface surf6;
        /*3FFC*/ uint8_t gap_3FFC[384];
        /*417C*/ MySurface surf7_x3[3];
        /*41F4*/ MySurface surf8_x3[3];
        /*426C*/ MySurface surf9_x3[3];
        /*42E4*/ MySurface surf10_x3[3];
        /*435C*/ MySurface surf11;
        /*4384*/ MySurface surf12;
        /*43AC*/ MySurface surf13;
        /*43D4*/ uint8_t gap_43D4[16];
        /*43E4*/ char field_43E4;
        /*43E5*/ uint8_t gap_43E5[15];
        /*43F4*/ int field_43F4;
        /*43F8*/ int field_43F8;
        /*43FC*/ MySurface surf14;
        /*4424*/ MySurface surf15;
        /*444C*/ MySurface surf16;
        /*4474*/ MySurface surf17;
        /*449C*/ MySurface surf18_x5[5];
        /*4564*/ MySurface surf19_x5[5];
        /*462C*/ MySurface surf20_x5[5];
        /*46F4*/ AABB aabb1_x5[5];
        /*4744*/ AABB aabb2_x5[5];
        /*4794*/ AABB aabb3_x5[5];
        /*47E4*/ MySurface surf21;
        /*480C*/ MySurface surf22;
        /*4834*/ MySurface surf23;
        /*485C*/ uint8_t gap_485C[16];
        /*486C*/ char field_486C;
        /*486D*/ uint8_t gap_486D[15];
        /*487C*/ int field_487C;
        /*4880*/ int field_4880;
        /*4884*/ MySurface surf24;
        /*48AC*/ MySurface surf25;
        /*48D4*/ MySurface surf26;
        /*48FC*/ MySurface surf27;
        /*4924*/ MySurface surf28_x5[5];
        /*49EC*/ MySurface surf29_x5[5];
        /*4AB4*/ MySurface surf30_x5[5];
        /*4B7C*/ AABB aabb4_x5[5];
        /*4BCC*/ AABB aabb5_x5[5];
        /*4C1C*/ AABB aabb6_x5[5];
        /*4C6C*/ MySurface surf31;
        /*4C94*/ uint8_t gap_4C94[16];
        /*4CA4*/ char field_4CA4;
        /*4CA5*/ uint8_t gap_4CA5[15];
        /*4CB4*/ int field_4CB4;
        /*4CB8*/ int field_4CB8;
        /*4CBC*/ MySurface surf32;
        /*4CE4*/ MySurface surf33;
        /*4D0C*/ MySurface surf34_x5[5];
        /*4DD4*/ AABB aabb7_x5[5];
        /*4E24*/ MySurface surf35;
        /*4E4C*/ MySurface surf36;
        /*4E74*/ MySurface surf37;
        /*4E9C*/ uint8_t gap_4E9C[16];
        /*4EAC*/ char field_4EAC;
        /*4EAD*/ uint8_t gap_4EAD[15];
        /*4EBC*/ int field_4EBC;
        /*4EC0*/ int field_4EC0;
        /*4EC4*/ MySurface surf38;
        /*4EEC*/ MySurface surf39;
        /*4F14*/ MySurface surf40;
        /*4F3C*/ MySurface surf41;
        /*4F64*/ MySurface surf42_x5[5];
        /*502C*/ MySurface surf43_x5[5];
        /*50F4*/ MySurface surf44_x5[5];
        /*51BC*/ AABB aabb8_x5[5];
        /*520C*/ AABB aabb9_x5[5];
        /*525C*/ AABB aabb10_x5[5];
        /*52AC*/ MySurface surf45;
        /*52D4*/ uint8_t gap_52D4[16];
        /*52E4*/ char field_52E4;
        /*52E5*/ uint8_t gap_52E5[15];
        /*52F4*/ int field_52F4;
        /*52F8*/ int field_52F8;
        /*52FC*/ MySurface surf46;
        /*5324*/ MySurface surf47;
        /*534C*/ MySurface surf48_x5[5];
        /*5414*/ AABB aabb11_x5[5];
        /*5464*/ MySurface f5464_surf49;
        /*548C*/ MySurface f548C_surf50;
        /*54B4*/ MySurface surf51_x5[5];
        /*557C*/ AABB aabb12_x5[5];
        /*55CC*/ MySurface surf52;
        /*55F4*/ MySurface surf53;
        /*561C*/ MySurface surf54_x5[5];
        /*56E4*/ AABB aabb13_x5[5];
        /*5734*/ MySurface surf55;
        /*575C*/ MySurface surf56;
        /*5784*/ MySurface surf57_x5[5];
        /*584C*/ AABB aabb14_x5[5];
        /*589C*/ MyDdSurfaceEx f589C_surf_2;
        /*58EC*/ int field_58EC;
        /*58F0*/ MyDdSurfaceEx f58F0_surf_1;
        /*5940*/ int field_5940;
        /*5944*/ uint32_t field_5944;
        /*5948*/ uint8_t gap_5948[369];
        /*5AB9*/ uint32_t field_5AB9;
        /*5ABD*/ uint8_t gap5ABD[75];
        /*5B08*/ char field_5B08;
        /*5B09*/ uint8_t f5B09_arr_x16x30[16][30];
        /*5CE9*/ uint8_t field_5CE9;
        /*5CEA*/ uint8_t gap_5CEA[8];
        /*5CF2*/ CWorldEntry cwolrd_entry_x24[24];
        /*5F7A*/ uint8_t gap5F7A[122];
        /*5FF4*/ char field_5FF4;
        /*5FF5*/ char field_5FF5;
        /*5FF6*/ char field_5FF6;
        /*5FF7*/ char field_5FF7;
        /*5FF8*/ char field_5FF8;
        /*5FF9*/ uint32_t field_5FF9;
        /*5FFD*/ uint32_t field_5FFD;
        /*6001*/ uint32_t field_6001;
        /*6005*/ uint32_t field_6005;
        /*6009*/ uint32_t field_6009;
        /*600D*/ uint32_t field_600D;
        /*6011*/ uint32_t field_6011;
        /*6015*/ uint8_t gap_6015[39];
        /*603C*/ MySurface surf60_x8[8];
        /*617C*/ MySurface field_617C;
        /*61A4*/ uint8_t gap_61A4[336];
        /*62F4*/ AABB aabb15_x8[8];
        /*6374*/ uint8_t gap6374[669];
        /*6611*/ MySurface surf61_x3_applyBtn[3];
        /*6689*/ MySurface surf62_x3_exitBtn[3];
        /*6701*/ uint8_t gap_6701[4];
        /*6705*/ uint8_t field_6705;
        /*6706*/ uint8_t field_6706;
        /*6707*/ uint8_t field_6707;
        /*6708*/ uint8_t field_6708;
        /*6709*/ uint8_t gap_6709[2];
        /*670B*/ uint8_t field_670B;
        /*670C*/ uint8_t field_670C;
        /*670D*/ uint8_t field_670D;
        /*670E*/ uint8_t gap_670E[19];
        /*6721*/ char field_6721;
        /*6722*/ uint8_t gap_6722[15];
        /*6731*/ int field_6731;
        /*6735*/ int field_6735;
        /*6739*/ MySurface surf63;
        /*6761*/ AABB aabb16_x16x30x6[16][30][6];
        /*11B61*/ MySurface surf64_x16x30x6[16][30][6];
        /*2DD61*/ uint32_t cglow_obj_start;
        /*2DD65*/ MySurface surf65_btnRenderOut;
        /*2DD8D*/ MySurface surf66_x16[16];
        /*2E00D*/ AABB aabb17_x16x30[16][30];
        /*2FE0D*/ uint8_t gap2FE0D[1292];
        /*30319*/ char field_30319;
        /*3031A*/ char field_3031A;
        /*3031B*/ char field_3031B;
        /*3031C*/ char field_3031C;
        /*3031D*/ char field_3031D;
        /*3031E*/ char f3031E_fontMask;
        /*3031F*/ char field_3031F;
        /*30320*/ char field_30320;
        /*30321*/ char field_30321;
        /*30322*/ char field_30322;
        /*30323*/ char field_30323;
        /*30324*/ char field_30324;
        /*30325*/ char field_30325;
        /*30326*/ char field_30326;
        /*30327*/ char field_30327;
        /*30328*/ char field_30328;
        /*30329*/ char field_30329;
        /*3032A*/ char field_3032A;
        /*3032B*/ char field_3032B;
        /*3032C*/ char field_3032C;
        /*3032D*/ char field_3032D;
        /*3032E*/ char field_3032E;
        /*3032F*/ char field_3032F;
        /*30330*/ char field_30330;
        /*30331*/ char field_30331;
        /*30332*/ char field_30332;
        /*30333*/ char field_30333;
        /*30334*/ char field_30334;
        /*30335*/ char field_30335;
        /*30336*/ char field_30336;
        /*30337*/ char field_30337;
        /*30338*/ char field_30338;
        /*30339*/ char field_30339;
        /*3033A*/ char field_3033A;
        /*3033B*/ char field_3033B;
        /*3033C*/ uint8_t gap_3033C[8];
        /*30344*/ char field_30344;
        /*30345*/ uint8_t gap30345[3];
        /*30348*/ uint8_t gap_30348[1326];
        /*30876*/ int field_30876;
        /*3087A*/ uint8_t gap_3087A[876];
        /*30BE6*/ MySurface surf67;
        /*30C0E*/ uint8_t gap_30C0E[16];
        /*30C1E*/ uint8_t field_30C1E;
        /*30C1F*/ uint8_t gap_30C1F[4];
        /*30C23*/ int field_30C23;
        /*30C27*/ int field_30C27;
        /*30C2B*/ uint8_t gap_30C2B[236];
        /*30D17*/ uint32_t f30D17;
        /*30D1B*/ uint8_t gap_30D1B[37];
        /*30D40*/ int f30D40;
        /*30D44*/ uint8_t gap_30D44[80];
        /*30D94*/ MySurface f30D94_surf68;
        /*30DBC*/ uint8_t gap_30DBC[4];
        /*30DC0*/ int f30DC0;
        /*30DC4*/ uint8_t gap_30DC4[164];
        /*30E68*/ int field_30E68;
        /*30E6C*/ uint8_t gap_30E6C[176];
        /*30F1C*/ StaticListeners f30F1C_static_listeners;
        /*30F30*/ MyStaticStruct f30F30_field_obj_start;
        /*30F3C*/ int field_30F3C;
        /*30F40*/ int field_30F40;
        /*30F44*/ CGuiManager f30F44_cgui_manager;
        /*31128*/ uint8_t gap31128[4];
        /*3112C*/ int f3112C_obj_start;
        /*31130*/ uint8_t gap_31130[20];
        /*31144*/ char f31144_resolutionId;
        /*31145*/ uint8_t gap_31145[61];
        /*31182*/ uint32_t f31182;
        /*31186*/ uint8_t gap_31186[68];
        /*311CA*/ MySurface f311CA_surf69;
        /*311F2*/ int field_311F2;
        /*311F6*/ int f311F6;
        
        virtual ~CFrontEndComponent();
        void dump() {
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("gap_14: %d\n", this->gap_14);
            printf("field_3C2: %d\n", this->field_3C2);
            printf("gap_3C4: %d\n", this->gap_3C4);
            printf("field_3D2: %d\n", this->field_3D2);
            printf("field_3D6: %d\n", this->field_3D6);
            printf("gap_402: %d\n", this->gap_402);
            printf("f467_timestampMs: %d\n", this->f467_timestampMs);
            printf("field_46B: %d\n", this->field_46B);
            printf("field_46F: %d\n", this->field_46F);
            printf("field_473: %d\n", this->field_473);
            printf("gap_477: %d\n", this->gap_477);
            printf("field_47F: %d\n", this->field_47F);
            printf("gap_483: %d\n", this->gap_483);
            printf("gap2E5F: %d\n", this->gap2E5F);
            printf("gap_311B: %d\n", this->gap_311B);
            printf("field_3EFC: %d\n", this->field_3EFC);
            printf("field_3F00: %d\n", this->field_3F00);
            printf("field_3F04: %d\n", this->field_3F04);
            printf("field_3F08: %d\n", this->field_3F08);
            printf("field_3F5C: %d\n", this->field_3F5C);
            printf("field_3F60: %d\n", this->field_3F60);
            printf("field_3F64: %d\n", this->field_3F64);
            printf("field_3F68: %d\n", this->field_3F68);
            printf("gap_3F6C: %d\n", this->gap_3F6C);
            printf("gap_3FFC: %d\n", this->gap_3FFC);
            printf("gap_43D4: %d\n", this->gap_43D4);
            printf("field_43E4: %d\n", this->field_43E4);
            printf("gap_43E5: %d\n", this->gap_43E5);
            printf("field_43F4: %d\n", this->field_43F4);
            printf("field_43F8: %d\n", this->field_43F8);
            printf("gap_485C: %d\n", this->gap_485C);
            printf("field_486C: %d\n", this->field_486C);
            printf("gap_486D: %d\n", this->gap_486D);
            printf("field_487C: %d\n", this->field_487C);
            printf("field_4880: %d\n", this->field_4880);
            printf("gap_4C94: %d\n", this->gap_4C94);
            printf("field_4CA4: %d\n", this->field_4CA4);
            printf("gap_4CA5: %d\n", this->gap_4CA5);
            printf("field_4CB4: %d\n", this->field_4CB4);
            printf("field_4CB8: %d\n", this->field_4CB8);
            printf("gap_4E9C: %d\n", this->gap_4E9C);
            printf("field_4EAC: %d\n", this->field_4EAC);
            printf("gap_4EAD: %d\n", this->gap_4EAD);
            printf("field_4EBC: %d\n", this->field_4EBC);
            printf("field_4EC0: %d\n", this->field_4EC0);
            printf("gap_52D4: %d\n", this->gap_52D4);
            printf("field_52E4: %d\n", this->field_52E4);
            printf("gap_52E5: %d\n", this->gap_52E5);
            printf("field_52F4: %d\n", this->field_52F4);
            printf("field_52F8: %d\n", this->field_52F8);
            printf("field_58EC: %d\n", this->field_58EC);
            printf("field_5940: %d\n", this->field_5940);
            printf("field_5944: %d\n", this->field_5944);
            printf("gap_5948: %d\n", this->gap_5948);
            printf("field_5AB9: %d\n", this->field_5AB9);
            printf("gap5ABD: %d\n", this->gap5ABD);
            printf("field_5B08: %d\n", this->field_5B08);
            printf("f5B09_arr_x16x30: %d\n", this->f5B09_arr_x16x30);
            printf("field_5CE9: %d\n", this->field_5CE9);
            printf("gap_5CEA: %d\n", this->gap_5CEA);
            printf("gap5F7A: %d\n", this->gap5F7A);
            printf("field_5FF4: %d\n", this->field_5FF4);
            printf("field_5FF5: %d\n", this->field_5FF5);
            printf("field_5FF6: %d\n", this->field_5FF6);
            printf("field_5FF7: %d\n", this->field_5FF7);
            printf("field_5FF8: %d\n", this->field_5FF8);
            printf("field_5FF9: %d\n", this->field_5FF9);
            printf("field_5FFD: %d\n", this->field_5FFD);
            printf("field_6001: %d\n", this->field_6001);
            printf("field_6005: %d\n", this->field_6005);
            printf("field_6009: %d\n", this->field_6009);
            printf("field_600D: %d\n", this->field_600D);
            printf("field_6011: %d\n", this->field_6011);
            printf("gap_6015: %d\n", this->gap_6015);
            printf("gap_61A4: %d\n", this->gap_61A4);
            printf("gap6374: %d\n", this->gap6374);
            printf("gap_6701: %d\n", this->gap_6701);
            printf("field_6705: %d\n", this->field_6705);
            printf("field_6706: %d\n", this->field_6706);
            printf("field_6707: %d\n", this->field_6707);
            printf("field_6708: %d\n", this->field_6708);
            printf("gap_6709: %d\n", this->gap_6709);
            printf("field_670B: %d\n", this->field_670B);
            printf("field_670C: %d\n", this->field_670C);
            printf("field_670D: %d\n", this->field_670D);
            printf("gap_670E: %d\n", this->gap_670E);
            printf("field_6721: %d\n", this->field_6721);
            printf("gap_6722: %d\n", this->gap_6722);
            printf("field_6731: %d\n", this->field_6731);
            printf("field_6735: %d\n", this->field_6735);
            printf("cglow_obj_start: %d\n", this->cglow_obj_start);
            printf("gap2FE0D: %d\n", this->gap2FE0D);
            printf("field_30319: %d\n", this->field_30319);
            printf("field_3031A: %d\n", this->field_3031A);
            printf("field_3031B: %d\n", this->field_3031B);
            printf("field_3031C: %d\n", this->field_3031C);
            printf("field_3031D: %d\n", this->field_3031D);
            printf("f3031E_fontMask: %d\n", this->f3031E_fontMask);
            printf("field_3031F: %d\n", this->field_3031F);
            printf("field_30320: %d\n", this->field_30320);
            printf("field_30321: %d\n", this->field_30321);
            printf("field_30322: %d\n", this->field_30322);
            printf("field_30323: %d\n", this->field_30323);
            printf("field_30324: %d\n", this->field_30324);
            printf("field_30325: %d\n", this->field_30325);
            printf("field_30326: %d\n", this->field_30326);
            printf("field_30327: %d\n", this->field_30327);
            printf("field_30328: %d\n", this->field_30328);
            printf("field_30329: %d\n", this->field_30329);
            printf("field_3032A: %d\n", this->field_3032A);
            printf("field_3032B: %d\n", this->field_3032B);
            printf("field_3032C: %d\n", this->field_3032C);
            printf("field_3032D: %d\n", this->field_3032D);
            printf("field_3032E: %d\n", this->field_3032E);
            printf("field_3032F: %d\n", this->field_3032F);
            printf("field_30330: %d\n", this->field_30330);
            printf("field_30331: %d\n", this->field_30331);
            printf("field_30332: %d\n", this->field_30332);
            printf("field_30333: %d\n", this->field_30333);
            printf("field_30334: %d\n", this->field_30334);
            printf("field_30335: %d\n", this->field_30335);
            printf("field_30336: %d\n", this->field_30336);
            printf("field_30337: %d\n", this->field_30337);
            printf("field_30338: %d\n", this->field_30338);
            printf("field_30339: %d\n", this->field_30339);
            printf("field_3033A: %d\n", this->field_3033A);
            printf("field_3033B: %d\n", this->field_3033B);
            printf("gap_3033C: %d\n", this->gap_3033C);
            printf("field_30344: %d\n", this->field_30344);
            printf("gap30345: %d\n", this->gap30345);
            printf("gap_30348: %d\n", this->gap_30348);
            printf("field_30876: %d\n", this->field_30876);
            printf("gap_3087A: %d\n", this->gap_3087A);
            printf("gap_30C0E: %d\n", this->gap_30C0E);
            printf("field_30C1E: %d\n", this->field_30C1E);
            printf("gap_30C1F: %d\n", this->gap_30C1F);
            printf("field_30C23: %d\n", this->field_30C23);
            printf("field_30C27: %d\n", this->field_30C27);
            printf("gap_30C2B: %d\n", this->gap_30C2B);
            printf("f30D17: %d\n", this->f30D17);
            printf("gap_30D1B: %d\n", this->gap_30D1B);
            printf("f30D40: %d\n", this->f30D40);
            printf("gap_30D44: %d\n", this->gap_30D44);
            printf("gap_30DBC: %d\n", this->gap_30DBC);
            printf("f30DC0: %d\n", this->f30DC0);
            printf("gap_30DC4: %d\n", this->gap_30DC4);
            printf("field_30E68: %d\n", this->field_30E68);
            printf("gap_30E6C: %d\n", this->gap_30E6C);
            printf("field_30F3C: %d\n", this->field_30F3C);
            printf("field_30F40: %d\n", this->field_30F40);
            printf("gap31128: %d\n", this->gap31128);
            printf("f3112C_obj_start: %d\n", this->f3112C_obj_start);
            printf("gap_31130: %d\n", this->gap_31130);
            printf("f31144_resolutionId: %d\n", this->f31144_resolutionId);
            printf("f31182: %d\n", this->f31182);
            printf("gap_31186: %d\n", this->gap_31186);
            printf("field_311F2: %d\n", this->field_311F2);
            printf("f311F6: %d\n", this->f311F6);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CFrontEndComponent) == 0x311FA);

#pragma pack(push, 1)
    class CButton : public CGadget {
    public:
        struct vtbl_t /*: public CGadget::vtbl_t */{
            /*   0*/ void *(__thiscall *CButton___scalar_deleting_destructor_uint)(CButton *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__stdcall *render)(int, int);  // int (__stdcall *)(int a1, int a2)
            /*   8*/ int(__thiscall *handleClick)(CButton *self, CDefaultPlayerInterface *);  // int (__thiscall *)(CButton *, CDefaultPlayerInterface *)
            /*   C*/ int(__thiscall *configure)(CButton *self, int);  // int (__thiscall *)(int this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x10);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  24*/ uint32_t field_20;
        /*  28*/ uint32_t f24_renderFun;
        /*  2C*/ uint32_t field_28;
        /*  30*/ uint32_t f2C_textId;
        /*  34*/ uint32_t f30_idxLow;
        /*  38*/ uint32_t *f34_idxHigh;
        /*  3C*/ uint32_t f38_unkIdx;
        /*  40*/ uint8_t field_3C;
        /*  41*/ uint32_t f3D__isPressed;
        /*  45*/ uint32_t field_41;
        /*  49*/ uint32_t f45_containsCursor;
        /*  4D*/ void *f49_pressFun;
        /*  51*/ void *f4D_releaseFun;
        /*  55*/ CWindow *f51_pWindow;
        /*  59*/ uint32_t f55__nextWindowIdOnClick;
        /*  5D*/ uint32_t f59__isExitOnClick;
        /*  61*/ uint32_t f5D_isVisible;
        /*  65*/ uint16_t f61_posFlags;
        /*  67*/ uint32_t field_63;
        /*  6B*/ uint32_t f67__textId;
        /*  6F*/ uint32_t field_6B;
        /*  73*/ uint8_t f6F_kind;
        /*  74*/ uint32_t f70_;
        /*  78*/ uint32_t f74_prev;
        /*  7C*/ CButton *f78_next;
        
        virtual ~CButton();
        void dump() {
            printf("field_20: %d\n", this->field_20);
            printf("f24_renderFun: %d\n", this->f24_renderFun);
            printf("field_28: %d\n", this->field_28);
            printf("f2C_textId: %d\n", this->f2C_textId);
            printf("f30_idxLow: %d\n", this->f30_idxLow);
            printf("f34_idxHigh: uint32_t(%p)\n", this->f34_idxHigh);
            printf("f38_unkIdx: %d\n", this->f38_unkIdx);
            printf("field_3C: %d\n", this->field_3C);
            printf("f3D__isPressed: %d\n", this->f3D__isPressed);
            printf("field_41: %d\n", this->field_41);
            printf("f45_containsCursor: %d\n", this->f45_containsCursor);
            printf("f49_pressFun: void(%p)\n", this->f49_pressFun);
            printf("f4D_releaseFun: void(%p)\n", this->f4D_releaseFun);
            printf("f51_pWindow: CWindow(%p)\n", this->f51_pWindow);
            printf("f55__nextWindowIdOnClick: %d\n", this->f55__nextWindowIdOnClick);
            printf("f59__isExitOnClick: %d\n", this->f59__isExitOnClick);
            printf("f5D_isVisible: %d\n", this->f5D_isVisible);
            printf("f61_posFlags: %d\n", this->f61_posFlags);
            printf("field_63: %d\n", this->field_63);
            printf("f67__textId: %d\n", this->f67__textId);
            printf("field_6B: %d\n", this->field_6B);
            printf("f6F_kind: %d\n", this->f6F_kind);
            printf("f70_: %d\n", this->f70_);
            printf("f74_prev: %d\n", this->f74_prev);
            printf("f78_next: CButton(%p)\n", this->f78_next);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CButton) == 0x80);

#pragma pack(push, 1)
    class Size2i {
    public:
        
        /*   0*/ int w;
        /*   4*/ int h;
        
        void dump() {
            printf("w: %d\n", this->w);
            printf("h: %d\n", this->h);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Size2i) == 0x8);

#pragma pack(push, 1)
    class CClickButton : public CButton {
    public:
        
        
        virtual ~CClickButton();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CClickButton) == 0x80);

#pragma pack(push, 1)
    class CRadioButton {
    public:
        
        /*   4*/ uint8_t gap_4[107];
        /*  6F*/ char field_6F;
        /*  70*/ int field_70;
        /*  74*/ int field_74;
        /*  78*/ int field_78;
        /*  7C*/ int field_7C;
        /*  80*/ int field_80;
        
        virtual ~CRadioButton();
        void dump() {
            printf("field_6F: %d\n", this->field_6F);
            printf("field_70: %d\n", this->field_70);
            printf("field_74: %d\n", this->field_74);
            printf("field_78: %d\n", this->field_78);
            printf("field_7C: %d\n", this->field_7C);
            printf("field_80: %d\n", this->field_80);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CRadioButton) == 0x84);

#pragma pack(push, 1)
    class CVerticalSlider : public CButton {
    public:
        
        /*  80*/ int field_80;
        /*  84*/ int field_84;
        /*  88*/ int field_88;
        /*  8C*/ int field_8C;
        /*  90*/ AABB field_90;
        /*  A0*/ int field_A0;
        /*  A4*/ int field_A4;
        /*  A8*/ int field_A8;
        /*  AC*/ int field_AC;
        
        virtual ~CVerticalSlider();
        void dump() {
            printf("field_80: %d\n", this->field_80);
            printf("field_84: %d\n", this->field_84);
            printf("field_88: %d\n", this->field_88);
            printf("field_8C: %d\n", this->field_8C);
            printf("field_A0: %d\n", this->field_A0);
            printf("field_A4: %d\n", this->field_A4);
            printf("field_A8: %d\n", this->field_A8);
            printf("field_AC: %d\n", this->field_AC);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CVerticalSlider) == 0xB0);

#pragma pack(push, 1)
    class CHorizontalSlider {
    public:
        
        /*   4*/ uint8_t gap_4[107];
        /*  6F*/ char field_6F;
        /*  70*/ int field_70;
        /*  74*/ int field_74;
        /*  78*/ int field_78;
        /*  7C*/ int field_7C;
        /*  80*/ int field_80;
        /*  84*/ int field_84;
        /*  88*/ int field_88;
        /*  8C*/ int field_8C;
        /*  90*/ int field_90;
        /*  94*/ int field_94;
        /*  98*/ int field_98;
        /*  9C*/ int field_9C;
        /*  A0*/ int field_A0;
        /*  A4*/ int field_A4;
        /*  A8*/ int field_A8;
        /*  AC*/ int field_AC;
        
        virtual ~CHorizontalSlider();
        void dump() {
            printf("field_6F: %d\n", this->field_6F);
            printf("field_70: %d\n", this->field_70);
            printf("field_74: %d\n", this->field_74);
            printf("field_78: %d\n", this->field_78);
            printf("field_7C: %d\n", this->field_7C);
            printf("field_80: %d\n", this->field_80);
            printf("field_84: %d\n", this->field_84);
            printf("field_88: %d\n", this->field_88);
            printf("field_8C: %d\n", this->field_8C);
            printf("field_90: %d\n", this->field_90);
            printf("field_94: %d\n", this->field_94);
            printf("field_98: %d\n", this->field_98);
            printf("field_9C: %d\n", this->field_9C);
            printf("field_A0: %d\n", this->field_A0);
            printf("field_A4: %d\n", this->field_A4);
            printf("field_A8: %d\n", this->field_A8);
            printf("field_AC: %d\n", this->field_AC);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CHorizontalSlider) == 0xB0);

#pragma pack(push, 1)
    class ButtonCfg {
    public:
        
        /*   0*/ char f0_kind;
        /*   1*/ uint32_t f1_idx;
        /*   5*/ uint8_t field_5;
        /*   6*/ void *f6_actionFun;
        /*   A*/ void *field_A;
        /*   E*/ uint32_t field_E;
        /*  12*/ uint32_t field_12;
        /*  16*/ uint32_t field_16;
        /*  1A*/ uint32_t f1A__actionId;
        /*  1E*/ uint16_t f1E_posFlags;
        /*  20*/ __int16 f20_x;
        /*  22*/ __int16 f22_y;
        /*  24*/ uint16_t f24_w;
        /*  26*/ unsigned __int16 f26_h;
        /*  28*/ uint16_t f28_x_offs;
        /*  2A*/ uint16_t f2A_y_offs;
        /*  2C*/ uint16_t f2C_width;
        /*  2E*/ unsigned __int16 f2E_height;
        /*  30*/ uint32_t field_30;
        /*  34*/ void *field_34;
        /*  38*/ void *f38_renderFun;
        /*  3C*/ void *field_3C;
        /*  40*/ uint32_t f40_textId;
        /*  44*/ uint32_t *f44_p_idxLow;
        /*  48*/ uint32_t *f48_idxHigh;
        /*  4C*/ uint32_t f4C_nameIdx;
        
        void dump() {
            printf("f0_kind: %d\n", this->f0_kind);
            printf("f1_idx: %d\n", this->f1_idx);
            printf("field_5: %d\n", this->field_5);
            printf("f6_actionFun: void(%p)\n", this->f6_actionFun);
            printf("field_A: void(%p)\n", this->field_A);
            printf("field_E: %d\n", this->field_E);
            printf("field_12: %d\n", this->field_12);
            printf("field_16: %d\n", this->field_16);
            printf("f1A__actionId: %d\n", this->f1A__actionId);
            printf("f1E_posFlags: %d\n", this->f1E_posFlags);
            printf("f20_x: %d\n", this->f20_x);
            printf("f22_y: %d\n", this->f22_y);
            printf("f24_w: %d\n", this->f24_w);
            printf("f26_h: %d\n", this->f26_h);
            printf("f28_x_offs: %d\n", this->f28_x_offs);
            printf("f2A_y_offs: %d\n", this->f2A_y_offs);
            printf("f2C_width: %d\n", this->f2C_width);
            printf("f2E_height: %d\n", this->f2E_height);
            printf("field_30: %d\n", this->field_30);
            printf("field_34: void(%p)\n", this->field_34);
            printf("f38_renderFun: void(%p)\n", this->f38_renderFun);
            printf("field_3C: void(%p)\n", this->field_3C);
            printf("f40_textId: %d\n", this->f40_textId);
            printf("f44_p_idxLow: uint32_t(%p)\n", this->f44_p_idxLow);
            printf("f48_idxHigh: uint32_t(%p)\n", this->f48_idxHigh);
            printf("f4C_nameIdx: %d\n", this->f4C_nameIdx);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(ButtonCfg) == 0x50);

#pragma pack(push, 1)
    class WindowCfg {
    public:
        
        /*   0*/ int f0_idx;
        /*   4*/ uint32_t f4_isCurrent;
        /*   8*/ uint16_t field_8;
        /*   A*/ uint16_t fA_x;
        /*   C*/ uint16_t fC_y;
        /*   E*/ uint16_t fE_w;
        /*  10*/ uint16_t f10_h;
        /*  12*/ uint16_t f12_x_offs;
        /*  14*/ uint16_t f14_y_offs;
        /*  16*/ uint16_t f16_width;
        /*  18*/ uint16_t f18_height;
        /*  1A*/ uint32_t field_1A;
        /*  1E*/ void *field_1E;
        /*  22*/ void *f22_fun;
        /*  26*/ uint32_t field_26;
        /*  2A*/ uint32_t field_2A;
        /*  2E*/ uint32_t field_2E;
        /*  32*/ uint32_t field_32;
        /*  36*/ uint32_t field_36;
        /*  3A*/ uint32_t field_3A;
        /*  3E*/ ButtonCfg *f3E_pButtonCfg_list;
        /*  42*/ __int16 field_42;
        
        void dump() {
            printf("f0_idx: %d\n", this->f0_idx);
            printf("f4_isCurrent: %d\n", this->f4_isCurrent);
            printf("field_8: %d\n", this->field_8);
            printf("fA_x: %d\n", this->fA_x);
            printf("fC_y: %d\n", this->fC_y);
            printf("fE_w: %d\n", this->fE_w);
            printf("f10_h: %d\n", this->f10_h);
            printf("f12_x_offs: %d\n", this->f12_x_offs);
            printf("f14_y_offs: %d\n", this->f14_y_offs);
            printf("f16_width: %d\n", this->f16_width);
            printf("f18_height: %d\n", this->f18_height);
            printf("field_1A: %d\n", this->field_1A);
            printf("field_1E: void(%p)\n", this->field_1E);
            printf("f22_fun: void(%p)\n", this->f22_fun);
            printf("field_26: %d\n", this->field_26);
            printf("field_2A: %d\n", this->field_2A);
            printf("field_2E: %d\n", this->field_2E);
            printf("field_32: %d\n", this->field_32);
            printf("field_36: %d\n", this->field_36);
            printf("field_3A: %d\n", this->field_3A);
            printf("f3E_pButtonCfg_list: ButtonCfg(%p)\n", this->f3E_pButtonCfg_list);
            printf("field_42: %d\n", this->field_42);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WindowCfg) == 0x44);

#pragma pack(push, 1)
    class StrCfg {
    public:
        
        /*   0*/ int idx;
        /*   4*/ char f4_str[64];
        /*  44*/ char field_44;
        
        void dump() {
            printf("idx: %d\n", this->idx);
            printf("f4_str: %d\n", this->f4_str);
            printf("field_44: %d\n", this->field_44);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StrCfg) == 0x45);

#pragma pack(push, 1)
    class NameCfg {
    public:
        
        /*   0*/ int idx;
        /*   4*/ char f4_str[32];
        /*  24*/ int field_24;
        /*  28*/ int field_28;
        /*  2C*/ int field_2C;
        
        void dump() {
            printf("idx: %d\n", this->idx);
            printf("f4_str: %d\n", this->f4_str);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
            printf("field_2C: %d\n", this->field_2C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(NameCfg) == 0x30);

#pragma pack(push, 1)
    class MyUnk674058 {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *sub_60F450)(MyUnk674058 *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t field_4;
        /*   8*/ uint8_t gap_8[12];
        /*  14*/ char field_14;
        /*  15*/ char field_15;
        /*  16*/ uint8_t gap_16[2];
        /*  18*/ uint32_t field_18;
        /*  1C*/ uint8_t field_1C;
        /*  1D*/ uint8_t gap_1D[3];
        /*  20*/ uint32_t field_20;
        /*  24*/ uint8_t gap_24[4];
        /*  28*/ uint32_t f28_file_storage;
        /*  2C*/ uint8_t gap_2C[4];
        /*  30*/ char field_30;
        /*  31*/ uint8_t gap_31[3];
        /*  34*/ uint32_t field_34;
        /*  38*/ uint32_t field_38;
        /*  3C*/ int field_3C;
        /*  40*/ int field_40;
        /*  44*/ int field_44;
        /*  48*/ uint32_t field_48;
        /*  4C*/ uint32_t field_4C;
        /*  50*/ int field_50;
        /*  54*/ int field_54;
        /*  58*/ int field_58;
        /*  5C*/ uint32_t field_5C;
        /*  60*/ char field_60;
        /*  61*/ uint8_t gap_61[3];
        /*  64*/ int field_64;
        /*  68*/ int field_68;
        /*  6C*/ int field_6C;
        /*  70*/ int field_70;
        /*  74*/ int field_74;
        /*  78*/ int field_78;
        /*  7C*/ int field_7C;
        /*  80*/ int field_80;
        /*  84*/ int field_84;
        /*  88*/ int field_88;
        /*  8C*/ int field_8C;
        /*  90*/ char field_90;
        /*  91*/ uint8_t gap_91[3];
        /*  94*/ int field_94;
        /*  98*/ int field_98;
        /*  9C*/ int field_9C;
        /*  A0*/ int field_A0;
        /*  A4*/ int field_A4;
        /*  A8*/ int field_A8;
        /*  AC*/ int field_AC;
        /*  B0*/ int field_B0;
        /*  B4*/ int field_B4;
        /*  B8*/ int field_B8;
        /*  BC*/ int field_BC;
        /*  C0*/ char field_C0;
        /*  C1*/ uint8_t gap_C1[3];
        /*  C4*/ int field_C4;
        /*  C8*/ int field_C8;
        /*  CC*/ uint32_t *field_CC;
        /*  D0*/ int field_D0;
        /*  D4*/ AABB field_D4;
        /*  E4*/ int field_E4;
        /*  E8*/ int field_E8;
        /*  EC*/ int field_EC;
        /*  F0*/ int field_F0;
        /*  F4*/ int field_F4;
        
        virtual ~MyUnk674058();
        void dump() {
            printf("field_4: %d\n", this->field_4);
            printf("gap_8: %d\n", this->gap_8);
            printf("field_14: %d\n", this->field_14);
            printf("field_15: %d\n", this->field_15);
            printf("gap_16: %d\n", this->gap_16);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("gap_1D: %d\n", this->gap_1D);
            printf("field_20: %d\n", this->field_20);
            printf("gap_24: %d\n", this->gap_24);
            printf("f28_file_storage: %d\n", this->f28_file_storage);
            printf("gap_2C: %d\n", this->gap_2C);
            printf("field_30: %d\n", this->field_30);
            printf("gap_31: %d\n", this->gap_31);
            printf("field_34: %d\n", this->field_34);
            printf("field_38: %d\n", this->field_38);
            printf("field_3C: %d\n", this->field_3C);
            printf("field_40: %d\n", this->field_40);
            printf("field_44: %d\n", this->field_44);
            printf("field_48: %d\n", this->field_48);
            printf("field_4C: %d\n", this->field_4C);
            printf("field_50: %d\n", this->field_50);
            printf("field_54: %d\n", this->field_54);
            printf("field_58: %d\n", this->field_58);
            printf("field_5C: %d\n", this->field_5C);
            printf("field_60: %d\n", this->field_60);
            printf("gap_61: %d\n", this->gap_61);
            printf("field_64: %d\n", this->field_64);
            printf("field_68: %d\n", this->field_68);
            printf("field_6C: %d\n", this->field_6C);
            printf("field_70: %d\n", this->field_70);
            printf("field_74: %d\n", this->field_74);
            printf("field_78: %d\n", this->field_78);
            printf("field_7C: %d\n", this->field_7C);
            printf("field_80: %d\n", this->field_80);
            printf("field_84: %d\n", this->field_84);
            printf("field_88: %d\n", this->field_88);
            printf("field_8C: %d\n", this->field_8C);
            printf("field_90: %d\n", this->field_90);
            printf("gap_91: %d\n", this->gap_91);
            printf("field_94: %d\n", this->field_94);
            printf("field_98: %d\n", this->field_98);
            printf("field_9C: %d\n", this->field_9C);
            printf("field_A0: %d\n", this->field_A0);
            printf("field_A4: %d\n", this->field_A4);
            printf("field_A8: %d\n", this->field_A8);
            printf("field_AC: %d\n", this->field_AC);
            printf("field_B0: %d\n", this->field_B0);
            printf("field_B4: %d\n", this->field_B4);
            printf("field_B8: %d\n", this->field_B8);
            printf("field_BC: %d\n", this->field_BC);
            printf("field_C0: %d\n", this->field_C0);
            printf("gap_C1: %d\n", this->gap_C1);
            printf("field_C4: %d\n", this->field_C4);
            printf("field_C8: %d\n", this->field_C8);
            printf("field_CC: uint32_t(%p)\n", this->field_CC);
            printf("field_D0: %d\n", this->field_D0);
            printf("field_E4: %d\n", this->field_E4);
            printf("field_E8: %d\n", this->field_E8);
            printf("field_EC: %d\n", this->field_EC);
            printf("field_F0: %d\n", this->field_F0);
            printf("field_F4: %d\n", this->field_F4);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyUnk674058) == 0xF8);

#pragma pack(push, 1)
    class FontObj {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *scalar_destructor)(FontObj *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyTextFont *f4_font;
        /*   8*/ uint32_t f8_fontFlags;
        /*   C*/ uint32_t fC_hasFlag2;
        /*  10*/ uint32_t f10_hasFlag8;
        /*  14*/ MySurface f14_surf;
        /*  3C*/ int field_3C;
        /*  40*/ int field_40;
        /*  44*/ PixelMask f44_fontMask;
        /*  49*/ uint8_t gap_49[3];
        /*  4C*/ int f4C_obj;
        
        virtual ~FontObj();
        void dump() {
            printf("f4_font: MyTextFont(%p)\n", this->f4_font);
            printf("f8_fontFlags: %d\n", this->f8_fontFlags);
            printf("fC_hasFlag2: %d\n", this->fC_hasFlag2);
            printf("f10_hasFlag8: %d\n", this->f10_hasFlag8);
            printf("field_3C: %d\n", this->field_3C);
            printf("field_40: %d\n", this->field_40);
            printf("gap_49: %d\n", this->gap_49);
            printf("f4C_obj: %d\n", this->f4C_obj);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(FontObj) == 0x50);

#pragma pack(push, 1)
    class FontObjWr {
    public:
        
        /*   4*/ FontObj f4_fontObj;
        /*  54*/ MyFontRendererBase *f54_tobj;
        
        virtual ~FontObjWr();
        void dump() {
            printf("f54_tobj: MyFontRendererBase(%p)\n", this->f54_tobj);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(FontObjWr) == 0x58);

#pragma pack(push, 1)
    class MyObj67B948 {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *sub_62C990)(MyObj67B948 *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ FontObjWr f4_fontObjWr;
        /*  5C*/ MyCRBase *f5C_myCR;
        /*  60*/ MyTRBase *f60_myTR;
        /*  64*/ uint32_t field_64;
        /*  68*/ uint32_t field_68;
        /*  6C*/ MyDRBase *f6C_myDR;
        /*  70*/ uint32_t *field_70;
        /*  74*/ char f74;
        /*  75*/ char field_75;
        /*  76*/ uint8_t gap_76[2];
        /*  78*/ int field_78;
        /*  7C*/ int _end_f7C;
        
        virtual ~MyObj67B948();
        void dump() {
            printf("f5C_myCR: MyCRBase(%p)\n", this->f5C_myCR);
            printf("f60_myTR: MyTRBase(%p)\n", this->f60_myTR);
            printf("field_64: %d\n", this->field_64);
            printf("field_68: %d\n", this->field_68);
            printf("f6C_myDR: MyDRBase(%p)\n", this->f6C_myDR);
            printf("field_70: uint32_t(%p)\n", this->field_70);
            printf("f74: %d\n", this->f74);
            printf("field_75: %d\n", this->field_75);
            printf("gap_76: %d\n", this->gap_76);
            printf("field_78: %d\n", this->field_78);
            printf("_end_f7C: %d\n", this->_end_f7C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyObj67B948) == 0x80);

#pragma pack(push, 1)
    class MyTextText {
    public:
        
        /*   4*/ uint8_t gap_4[4];
        /*   8*/ int f8_numOffsets;
        /*   C*/ uint32_t *fC_offsets_and_data;
        /*  10*/ MyTextBase *f10_MBToUniText_idx1;
        /*  14*/ MyTextBase *f14_UniToMBText_idx2;
        
        virtual ~MyTextText();
        void dump() {
            printf("gap_4: %d\n", this->gap_4);
            printf("f8_numOffsets: %d\n", this->f8_numOffsets);
            printf("fC_offsets_and_data: uint32_t(%p)\n", this->fC_offsets_and_data);
            printf("f10_MBToUniText_idx1: MyTextBase(%p)\n", this->f10_MBToUniText_idx1);
            printf("f14_UniToMBText_idx2: MyTextBase(%p)\n", this->f14_UniToMBText_idx2);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTextText) == 0x18);

#pragma pack(push, 1)
    class FileStorageBase {
    public:
        struct vtbl_t {
            /*   0*/ LONG(__thiscall *releaseContent)(FileStorageBase *self);  // LONG (__thiscall *)(FileStorageBase *this)
            /*   4*/ uint32_t *(__thiscall *firstFile_5B9DD0)(FileStorageBase *self, uint32_t *, char *, MyFileInfo *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, char *, MyFileInfo *p_f8_fileInfo)
            /*   8*/ uint32_t *(__thiscall *FileStorageBase_fun_5B9E00)(FileStorageBase *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int)
            /*   C*/ uint32_t *(__thiscall *openInputStream)(FileStorageBase *self, uint32_t *, TbDiscFile *, char *, int, int);  // _DWORD *(__thiscall *)(TbDiscFileStorage *this, _DWORD *status, TbDiscFile *diskFile, char *fileName, int flags, int a6)
            /*  10*/ uint32_t *(__thiscall *FileStorageBase_fun_5B9D60)(FileStorageBase *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int, int)
            /*  14*/ uint32_t *(__thiscall *formatFilePath)(FileStorageBase *self, uint32_t *, char *, char *, int);  // _DWORD *(__thiscall *)(FileStorageBase *this, _DWORD *status, char *buf, char *fileName, int bufLimit)
            /*  18*/ int(__thiscall *TbWadFileStorage__fun_5B9E70)(FileStorageBase *self);  // int (__thiscall *)(FileStorageBase *this)
            /*  1C*/ uint32_t *(__thiscall *FileStorageBase_fun_5B9EB0)(FileStorageBase *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int, int)
            /*  20*/ uint32_t *(__thiscall *FileStorageBase_fun_5B9EE0)(FileStorageBase *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int)
            /*  24*/ uint32_t *(__thiscall *FileStorageBase_fun_5B9F10)(FileStorageBase *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int)
            /*  28*/ uint32_t *(__thiscall *FileStorageBase_fun_5B9F40)(FileStorageBase *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int, int)
            /*  2C*/ void *(__thiscall *scalar_destructor)(FileStorageBase *self, char);  // void *(__thiscall *)(void *Block, char)
        };
        static_assert(sizeof(vtbl_t) == 0x30);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyDirectory *f4_dierctory;
        
        virtual ~FileStorageBase();
        void dump() {
            printf("f4_dierctory: MyDirectory(%p)\n", this->f4_dierctory);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(FileStorageBase) == 0x8);

#pragma pack(push, 1)
    class TbDiscFileStorage : public FileStorageBase {
    public:
        struct vtbl_t /*: public FileStorageBase::vtbl_t */{
            /*   0*/ void *releaseContent;
            /*   4*/ uint32_t *(__thiscall *CFileManager__fun_5B9DD0)(TbDiscFileStorage *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int, int)
            /*   8*/ uint32_t *(__thiscall *CFileManager__fun_5B9E00)(TbDiscFileStorage *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int)
            /*   C*/ uint32_t *(__thiscall *CFileManager_openDiskFileStream)(TbDiscFileStorage *self, uint32_t *, TbDiscFile *, char *, int, int);  // _DWORD *(__thiscall *)(TbDiscFileStorage *this, _DWORD *status, TbDiscFile *diskFile, char *fileName, int flags, int a6)
            /*  10*/ uint32_t *(__thiscall *CFileManager__fun_5B9D60)(TbDiscFileStorage *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int, int)
            /*  14*/ uint32_t *(__thiscall *formatFilePath)(TbDiscFileStorage *self, uint32_t *, char *, char *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, char *, const char *, int)
            /*  18*/ void *TbWadFileStorage__fun_5B9E70;
            /*  1C*/ uint32_t *(__thiscall *CFileManager__fun_5B9EB0)(TbDiscFileStorage *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int, int)
            /*  20*/ uint32_t *(__thiscall *CFileManager__fun_5B9EE0)(TbDiscFileStorage *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int)
            /*  24*/ uint32_t *(__thiscall *CFileManager__fun_5B9F10)(TbDiscFileStorage *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int)
            /*  28*/ uint32_t *(__thiscall *CFileManager__fun_5B9F40)(TbDiscFileStorage *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *, int, int)
            /*  2C*/ int(__thiscall *TbWadFileStorage__fun_55C000)(TbDiscFileStorage *self, char);  // int (__thiscall *)(void *Block, char)
        };
        static_assert(sizeof(vtbl_t) == 0x30);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        
        virtual ~TbDiscFileStorage();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(TbDiscFileStorage) == 0x8);

#pragma pack(push, 1)
    class MyFileInfo {
    public:
        
        /*   0*/ DWORD f0_fileSizeLow;
        /*   4*/ DWORD f4_fileAttributes;
        /*   8*/ FILETIME f8_lastWriteTime;
        /*  10*/ FILETIME f10_lastAccessTime;
        /*  18*/ FILETIME f18_creationTime;
        /*  20*/ char *f20_pFileName;
        /*  24*/ char f24_str[260];
        
        void dump() {
            printf("f0_fileSizeLow: %d\n", this->f0_fileSizeLow);
            printf("f4_fileAttributes: %d\n", this->f4_fileAttributes);
            printf("f8_lastWriteTime: %d\n", this->f8_lastWriteTime);
            printf("f10_lastAccessTime: %d\n", this->f10_lastAccessTime);
            printf("f18_creationTime: %d\n", this->f18_creationTime);
            printf("f20_pFileName: %s\n", this->f20_pFileName);
            printf("f24_str: %d\n", this->f24_str);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFileInfo) == 0x128);

#pragma pack(push, 1)
    class CFileManager : public FileStorageBase {
    public:
        struct vtbl_t /*: public FileStorageBase::vtbl_t */{
            /*   0*/ void(__thiscall *CFileManager__fun_556980)(CFileManager *self);  // void (__thiscall *)(_DWORD *this)
            /*   4*/ uint32_t *(__thiscall *CFileManager__fun_5B9DD0)(CFileManager *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4)
            /*   8*/ uint32_t *(__thiscall *CFileManager__fun_5B9E00)(CFileManager *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3)
            /*   C*/ uint32_t *(__thiscall *CFileManager__fun_5B9E30)(CFileManager *self, uint32_t *, int, int, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6)
            /*  10*/ uint32_t *(__thiscall *CFileManager__fun_5B9D60)(CFileManager *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4)
            /*  14*/ uint32_t *(__thiscall *CFileManager__fun_5B9D90)(CFileManager *self, uint32_t *, int, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
            /*  18*/ int(__thiscall *CFileManager__fun_556B70)(CFileManager *self);  // int (__thiscall *)(_DWORD *this)
            /*  1C*/ uint32_t *(__thiscall *CFileManager__fun_5B9EB0)(CFileManager *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4)
            /*  20*/ uint32_t *(__thiscall *CFileManager__fun_5B9EE0)(CFileManager *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3)
            /*  24*/ uint32_t *(__thiscall *CFileManager__fun_5B9F10)(CFileManager *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3)
            /*  28*/ uint32_t *(__thiscall *CFileManager__fun_5B9F40)(CFileManager *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4)
            /*  2C*/ void *(__thiscall *CFileManager__fun_5568A0)(CFileManager *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x30);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   8*/ MyFileInfo f8_fileInfo;
        /* 130*/ CFileManager_f130 *f130_list;
        
        virtual ~CFileManager();
        void dump() {
            printf("f130_list: CFileManager_f130(%p)\n", this->f130_list);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CFileManager) == 0x134);

#pragma pack(push, 1)
    class MyKeyboard {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ uint32_t f4;
        /*   8*/ uint8_t gap_8[8];
        /*  10*/ uint32_t f10;
        /*  14*/ uint8_t gap_14[60];
        /*  50*/ uint8_t field_50;
        /*  51*/ uint8_t field_51;
        /*  52*/ uint8_t gap_52[63];
        /*  91*/ uint8_t field_91;
        /*  92*/ uint8_t gap_92[63];
        /*  D1*/ uint8_t field_D1;
        /*  D2*/ uint8_t gap_D2[31];
        /*  F1*/ int field_F1;
        /*  F5*/ int field_F5;
        /*  F9*/ int field_F9;
        /*  FD*/ uint8_t gap_FD[14];
        /* 10B*/ char f10B_layoutName[24];
        /* 123*/ uint8_t f123;
        /* 124*/ uint8_t gap_124[319];
        /* 263*/ uint8_t field_263;
        /* 264*/ uint8_t gap_264[7];
        /* 26B*/ uint32_t field_26B;
        /* 26F*/ uint8_t gap_26F[4];
        /* 273*/ int field_273;
        /* 277*/ uint8_t gap_277[4];
        /* 27B*/ int field_27B;
        /* 27F*/ uint8_t gap_27F[4];
        /* 283*/ int field_283;
        /* 287*/ uint8_t gap_287[4];
        /* 28B*/ int field_28B;
        /* 28F*/ uint8_t gap_28F[4];
        /* 293*/ uint32_t field_293;
        /* 297*/ uint8_t gap_297[4];
        /* 29B*/ uint32_t field_29B;
        /* 29F*/ uint8_t gap_29F[4];
        /* 2A3*/ int field_2A3;
        /* 2A7*/ uint8_t gap_2A7[4];
        /* 2AB*/ int field_2AB;
        /* 2AF*/ uint8_t gap_2AF[4];
        /* 2B3*/ int field_2B3;
        /* 2B7*/ uint8_t gap_2B7[4];
        /* 2BB*/ int field_2BB;
        /* 2BF*/ uint8_t gap_2BF[4];
        /* 2C3*/ int field_2C3;
        /* 2C7*/ uint8_t gap_2C7[4];
        /* 2CB*/ int field_2CB;
        /* 2CF*/ int field_2CF;
        /* 2D3*/ int field_2D3;
        /* 2D7*/ uint8_t gap_2D7[4];
        /* 2DB*/ int field_2DB;
        /* 2DF*/ uint8_t gap_2DF[4];
        /* 2E3*/ int field_2E3;
        /* 2E7*/ uint8_t gap_2E7[4];
        /* 2EB*/ int field_2EB;
        /* 2EF*/ uint8_t gap_2EF[4];
        /* 2F3*/ int field_2F3;
        /* 2F7*/ uint8_t gap_2F7[4];
        /* 2FB*/ int field_2FB;
        /* 2FF*/ uint8_t gap_2FF[4];
        /* 303*/ int field_303;
        /* 307*/ uint8_t gap_307[4];
        /* 30B*/ int field_30B;
        /* 30F*/ uint8_t gap_30F[4];
        /* 313*/ int field_313;
        /* 317*/ uint8_t gap_317[4];
        /* 31B*/ int field_31B;
        /* 31F*/ uint8_t gap_31F[4];
        /* 323*/ int field_323;
        /* 327*/ uint8_t gap_327[4];
        /* 32B*/ uint32_t field_32B;
        /* 32F*/ uint8_t gap_32F[4];
        /* 333*/ int field_333;
        /* 337*/ uint8_t gap_337[4];
        /* 33B*/ int field_33B;
        /* 33F*/ uint8_t gap_33F[4];
        /* 343*/ uint32_t field_343;
        /* 347*/ uint8_t gap_347[4];
        /* 34B*/ uint32_t field_34B;
        /* 34F*/ uint8_t gap_34F[4];
        /* 353*/ int field_353;
        /* 357*/ uint8_t gap_357[4];
        /* 35B*/ int field_35B;
        /* 35F*/ uint8_t gap_35F[4];
        /* 363*/ int field_363;
        /* 367*/ uint8_t gap_367[4];
        /* 36B*/ int field_36B;
        /* 36F*/ uint8_t gap_36F[4];
        /* 373*/ int field_373;
        /* 377*/ uint8_t gap_377[4];
        /* 37B*/ int field_37B;
        /* 37F*/ uint8_t gap_37F[4];
        /* 383*/ int field_383;
        /* 387*/ uint8_t gap_387[4];
        /* 38B*/ int field_38B;
        /* 38F*/ uint8_t gap_38F[4];
        /* 393*/ int field_393;
        /* 397*/ uint8_t gap_397[4];
        /* 39B*/ int field_39B;
        /* 39F*/ uint8_t gap_39F[4];
        /* 3A3*/ int field_3A3;
        /* 3A7*/ uint8_t gap_3A7[4];
        /* 3AB*/ int field_3AB;
        /* 3AF*/ uint8_t gap_3AF[4];
        /* 3B3*/ int field_3B3;
        /* 3B7*/ uint8_t gap_3B7[4];
        /* 3BB*/ int field_3BB;
        /* 3BF*/ uint8_t gap_3BF[4];
        /* 3C3*/ int field_3C3;
        /* 3C7*/ uint8_t gap_3C7[4];
        /* 3CB*/ int field_3CB;
        /* 3CF*/ int field_3CF;
        /* 3D3*/ int field_3D3;
        /* 3D7*/ int field_3D7;
        /* 3DB*/ int field_3DB;
        /* 3DF*/ int field_3DF;
        /* 3E3*/ int field_3E3;
        /* 3E7*/ int field_3E7;
        /* 3EB*/ int field_3EB;
        /* 3EF*/ int field_3EF;
        /* 3F3*/ int field_3F3;
        /* 3F7*/ int field_3F7;
        /* 3FB*/ int field_3FB;
        /* 3FF*/ int field_3FF;
        /* 403*/ int field_403;
        /* 407*/ int field_407;
        /* 40B*/ int field_40B;
        /* 40F*/ int field_40F;
        /* 413*/ int field_413;
        /* 417*/ int field_417;
        /* 41B*/ int field_41B;
        /* 41F*/ int field_41F;
        /* 423*/ int field_423;
        /* 427*/ int field_427;
        /* 42B*/ int field_42B;
        /* 42F*/ int field_42F;
        /* 433*/ int field_433;
        /* 437*/ int field_437;
        /* 43B*/ int field_43B;
        /* 43F*/ int field_43F;
        /* 443*/ int field_443;
        /* 447*/ int field_447;
        /* 44B*/ int field_44B;
        /* 44F*/ int field_44F;
        /* 453*/ int field_453;
        /* 457*/ int field_457;
        /* 45B*/ int field_45B;
        /* 45F*/ int field_45F;
        /* 463*/ uint32_t f463_keys[256];
        /* 863*/ uint8_t gap_863[190];
        /* 921*/ uint8_t field_921;
        /* 922*/ uint8_t gap_922[65];
        /* 963*/ uint8_t gap_963[438];
        /* B19*/ uint8_t field_B19;
        /* B1A*/ uint8_t gap_B1A[27];
        /* B35*/ uint32_t field_B35;
        /* B39*/ uint32_t field_B39;
        /* B3D*/ char field_B3D[127];
        /* BBC*/ char fBBC_end;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4: %d\n", this->f4);
            printf("gap_8: %d\n", this->gap_8);
            printf("f10: %d\n", this->f10);
            printf("gap_14: %d\n", this->gap_14);
            printf("field_50: %d\n", this->field_50);
            printf("field_51: %d\n", this->field_51);
            printf("gap_52: %d\n", this->gap_52);
            printf("field_91: %d\n", this->field_91);
            printf("gap_92: %d\n", this->gap_92);
            printf("field_D1: %d\n", this->field_D1);
            printf("field_F1: %d\n", this->field_F1);
            printf("field_F5: %d\n", this->field_F5);
            printf("field_F9: %d\n", this->field_F9);
            printf("f10B_layoutName: %d\n", this->f10B_layoutName);
            printf("f123: %d\n", this->f123);
            printf("gap_124: %d\n", this->gap_124);
            printf("field_263: %d\n", this->field_263);
            printf("gap_264: %d\n", this->gap_264);
            printf("field_26B: %d\n", this->field_26B);
            printf("gap_26F: %d\n", this->gap_26F);
            printf("field_273: %d\n", this->field_273);
            printf("gap_277: %d\n", this->gap_277);
            printf("field_27B: %d\n", this->field_27B);
            printf("gap_27F: %d\n", this->gap_27F);
            printf("field_283: %d\n", this->field_283);
            printf("gap_287: %d\n", this->gap_287);
            printf("field_28B: %d\n", this->field_28B);
            printf("gap_28F: %d\n", this->gap_28F);
            printf("field_293: %d\n", this->field_293);
            printf("gap_297: %d\n", this->gap_297);
            printf("field_29B: %d\n", this->field_29B);
            printf("gap_29F: %d\n", this->gap_29F);
            printf("field_2A3: %d\n", this->field_2A3);
            printf("gap_2A7: %d\n", this->gap_2A7);
            printf("field_2AB: %d\n", this->field_2AB);
            printf("gap_2AF: %d\n", this->gap_2AF);
            printf("field_2B3: %d\n", this->field_2B3);
            printf("gap_2B7: %d\n", this->gap_2B7);
            printf("field_2BB: %d\n", this->field_2BB);
            printf("gap_2BF: %d\n", this->gap_2BF);
            printf("field_2C3: %d\n", this->field_2C3);
            printf("gap_2C7: %d\n", this->gap_2C7);
            printf("field_2CB: %d\n", this->field_2CB);
            printf("field_2CF: %d\n", this->field_2CF);
            printf("field_2D3: %d\n", this->field_2D3);
            printf("gap_2D7: %d\n", this->gap_2D7);
            printf("field_2DB: %d\n", this->field_2DB);
            printf("gap_2DF: %d\n", this->gap_2DF);
            printf("field_2E3: %d\n", this->field_2E3);
            printf("gap_2E7: %d\n", this->gap_2E7);
            printf("field_2EB: %d\n", this->field_2EB);
            printf("gap_2EF: %d\n", this->gap_2EF);
            printf("field_2F3: %d\n", this->field_2F3);
            printf("gap_2F7: %d\n", this->gap_2F7);
            printf("field_2FB: %d\n", this->field_2FB);
            printf("gap_2FF: %d\n", this->gap_2FF);
            printf("field_303: %d\n", this->field_303);
            printf("gap_307: %d\n", this->gap_307);
            printf("field_30B: %d\n", this->field_30B);
            printf("gap_30F: %d\n", this->gap_30F);
            printf("field_313: %d\n", this->field_313);
            printf("gap_317: %d\n", this->gap_317);
            printf("field_31B: %d\n", this->field_31B);
            printf("gap_31F: %d\n", this->gap_31F);
            printf("field_323: %d\n", this->field_323);
            printf("gap_327: %d\n", this->gap_327);
            printf("field_32B: %d\n", this->field_32B);
            printf("gap_32F: %d\n", this->gap_32F);
            printf("field_333: %d\n", this->field_333);
            printf("gap_337: %d\n", this->gap_337);
            printf("field_33B: %d\n", this->field_33B);
            printf("gap_33F: %d\n", this->gap_33F);
            printf("field_343: %d\n", this->field_343);
            printf("gap_347: %d\n", this->gap_347);
            printf("field_34B: %d\n", this->field_34B);
            printf("gap_34F: %d\n", this->gap_34F);
            printf("field_353: %d\n", this->field_353);
            printf("gap_357: %d\n", this->gap_357);
            printf("field_35B: %d\n", this->field_35B);
            printf("gap_35F: %d\n", this->gap_35F);
            printf("field_363: %d\n", this->field_363);
            printf("gap_367: %d\n", this->gap_367);
            printf("field_36B: %d\n", this->field_36B);
            printf("gap_36F: %d\n", this->gap_36F);
            printf("field_373: %d\n", this->field_373);
            printf("gap_377: %d\n", this->gap_377);
            printf("field_37B: %d\n", this->field_37B);
            printf("gap_37F: %d\n", this->gap_37F);
            printf("field_383: %d\n", this->field_383);
            printf("gap_387: %d\n", this->gap_387);
            printf("field_38B: %d\n", this->field_38B);
            printf("gap_38F: %d\n", this->gap_38F);
            printf("field_393: %d\n", this->field_393);
            printf("gap_397: %d\n", this->gap_397);
            printf("field_39B: %d\n", this->field_39B);
            printf("gap_39F: %d\n", this->gap_39F);
            printf("field_3A3: %d\n", this->field_3A3);
            printf("gap_3A7: %d\n", this->gap_3A7);
            printf("field_3AB: %d\n", this->field_3AB);
            printf("gap_3AF: %d\n", this->gap_3AF);
            printf("field_3B3: %d\n", this->field_3B3);
            printf("gap_3B7: %d\n", this->gap_3B7);
            printf("field_3BB: %d\n", this->field_3BB);
            printf("gap_3BF: %d\n", this->gap_3BF);
            printf("field_3C3: %d\n", this->field_3C3);
            printf("gap_3C7: %d\n", this->gap_3C7);
            printf("field_3CB: %d\n", this->field_3CB);
            printf("field_3CF: %d\n", this->field_3CF);
            printf("field_3D3: %d\n", this->field_3D3);
            printf("field_3D7: %d\n", this->field_3D7);
            printf("field_3DB: %d\n", this->field_3DB);
            printf("field_3DF: %d\n", this->field_3DF);
            printf("field_3E3: %d\n", this->field_3E3);
            printf("field_3E7: %d\n", this->field_3E7);
            printf("field_3EB: %d\n", this->field_3EB);
            printf("field_3EF: %d\n", this->field_3EF);
            printf("field_3F3: %d\n", this->field_3F3);
            printf("field_3F7: %d\n", this->field_3F7);
            printf("field_3FB: %d\n", this->field_3FB);
            printf("field_3FF: %d\n", this->field_3FF);
            printf("field_403: %d\n", this->field_403);
            printf("field_407: %d\n", this->field_407);
            printf("field_40B: %d\n", this->field_40B);
            printf("field_40F: %d\n", this->field_40F);
            printf("field_413: %d\n", this->field_413);
            printf("field_417: %d\n", this->field_417);
            printf("field_41B: %d\n", this->field_41B);
            printf("field_41F: %d\n", this->field_41F);
            printf("field_423: %d\n", this->field_423);
            printf("field_427: %d\n", this->field_427);
            printf("field_42B: %d\n", this->field_42B);
            printf("field_42F: %d\n", this->field_42F);
            printf("field_433: %d\n", this->field_433);
            printf("field_437: %d\n", this->field_437);
            printf("field_43B: %d\n", this->field_43B);
            printf("field_43F: %d\n", this->field_43F);
            printf("field_443: %d\n", this->field_443);
            printf("field_447: %d\n", this->field_447);
            printf("field_44B: %d\n", this->field_44B);
            printf("field_44F: %d\n", this->field_44F);
            printf("field_453: %d\n", this->field_453);
            printf("field_457: %d\n", this->field_457);
            printf("field_45B: %d\n", this->field_45B);
            printf("field_45F: %d\n", this->field_45F);
            printf("f463_keys: %d\n", this->f463_keys);
            printf("gap_863: %d\n", this->gap_863);
            printf("field_921: %d\n", this->field_921);
            printf("gap_922: %d\n", this->gap_922);
            printf("gap_963: %d\n", this->gap_963);
            printf("field_B19: %d\n", this->field_B19);
            printf("gap_B1A: %d\n", this->gap_B1A);
            printf("field_B35: %d\n", this->field_B35);
            printf("field_B39: %d\n", this->field_B39);
            printf("field_B3D: %d\n", this->field_B3D);
            printf("fBBC_end: %d\n", this->fBBC_end);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyKeyboard) == 0xBBD);

#pragma pack(push, 1)
    class MyResources_f29CB {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ int f4_speechVolume;
        /*   8*/ int f8_soundEffectVolume;
        /*   C*/ int fC_musicVolume;
        /*  10*/ int f10_masterVolume;
        /*  14*/ int f14_masterBalance;
        /*  18*/ int f18_environmentslEffects;
        /*  1C*/ int f1C_soundQuality;
        /*  20*/ int f20_headphones;
        /*  24*/ int f24_flipSpeakers;
        /*  28*/ int f28_qsound;
        /*  2C*/ int f2C_musicEnabled;
        /*  30*/ int f30_speechEnabled;
        /*  34*/ int f34_sfxEnabled;
        /*  38*/ int f38_numberOfChannels;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4_speechVolume: %d\n", this->f4_speechVolume);
            printf("f8_soundEffectVolume: %d\n", this->f8_soundEffectVolume);
            printf("fC_musicVolume: %d\n", this->fC_musicVolume);
            printf("f10_masterVolume: %d\n", this->f10_masterVolume);
            printf("f14_masterBalance: %d\n", this->f14_masterBalance);
            printf("f18_environmentslEffects: %d\n", this->f18_environmentslEffects);
            printf("f1C_soundQuality: %d\n", this->f1C_soundQuality);
            printf("f20_headphones: %d\n", this->f20_headphones);
            printf("f24_flipSpeakers: %d\n", this->f24_flipSpeakers);
            printf("f28_qsound: %d\n", this->f28_qsound);
            printf("f2C_musicEnabled: %d\n", this->f2C_musicEnabled);
            printf("f30_speechEnabled: %d\n", this->f30_speechEnabled);
            printf("f34_sfxEnabled: %d\n", this->f34_sfxEnabled);
            printf("f38_numberOfChannels: %d\n", this->f38_numberOfChannels);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyResources_f29CB) == 0x3C);

#pragma pack(push, 1)
    class MyResources_f2E38Obj {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ char field_4;
        /*   5*/ uint8_t gap_5[259];
        /* 108*/ int field_108;
        /* 10C*/ int field_10C;
        /* 110*/ int field_110;
        /* 114*/ int field_114;
        /* 118*/ int field_118;
        /* 11C*/ int field_11C;
        /* 120*/ int field_120;
        /* 124*/ int field_124;
        /* 128*/ int field_128;
        /* 12C*/ int field_12C;
        /* 130*/ int field_130;
        /* 134*/ int field_134;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("gap_5: %d\n", this->gap_5);
            printf("field_108: %d\n", this->field_108);
            printf("field_10C: %d\n", this->field_10C);
            printf("field_110: %d\n", this->field_110);
            printf("field_114: %d\n", this->field_114);
            printf("field_118: %d\n", this->field_118);
            printf("field_11C: %d\n", this->field_11C);
            printf("field_120: %d\n", this->field_120);
            printf("field_124: %d\n", this->field_124);
            printf("field_128: %d\n", this->field_128);
            printf("field_12C: %d\n", this->field_12C);
            printf("field_130: %d\n", this->field_130);
            printf("field_134: %d\n", this->field_134);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyResources_f2E38Obj) == 0x138);

#pragma pack(push, 1)
    class MyResources {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ char f4_diskDrive[260];
        /* 108*/ char f108_executableDir[260];
        /* 20C*/ char f20C_settingsDir[260];
        /* 310*/ char f310_textureCacheDir[260];
        /* 414*/ char f414_savesDir[260];
        /* 518*/ char f518_globalDir[260];
        /* 61C*/ char f61C_textsDir[260];
        /* 720*/ char f720_soundSfxDir[260];
        /* 824*/ char f824_soundMusicDir[260];
        /* 928*/ char f928_editorDir[260];
        /* A2C*/ char fA2C_dataMoviesDir[260];
        /* B30*/ CFileManager fB30_meshesFileMan;
        /* C64*/ CFileManager fC64_devMeshesFileMan;
        /* D98*/ CFileManager fD98_engineTexturesFileMan;
        /* ECC*/ CFileManager fECC_textureFileMan;
        /*1000*/ CFileManager f1000_editorFileMan;
        /*1134*/ CFileManager f1134_paletteFileMan;
        /*1268*/ CFileManager f1268_spriteFileMan;
        /*139C*/ CFileManager f139C_textsFileMan;
        /*14D0*/ CFileManager f14D0_pathsFileMan;
        /*1604*/ CFileManager f1604_frontEndFileMan;
        /*1738*/ MyVideoSettings f1738_video_settings;
        /*17EC*/ MyKeyboard f17EC_myKeyboard;
        /*23A9*/ int f23A9_obj;
        /*23AD*/ char gap_23AD[1566];
        /*29CB*/ MyResources_f29CB f29CB_obj;
        /*2A07*/ int f2A07_obj;
        /*2A0B*/ int field_2A0B;
        /*2A0F*/ uint8_t gap2A0F[292];
        /*2B33*/ uint32_t f2B33;
        /*2B37*/ uint8_t gap_2B37[12];
        /*2B43*/ uint32_t f2B43;
        /*2B47*/ uint32_t f2B47;
        /*2B4B*/ uint8_t gap_2B4B[32];
        /*2B6B*/ uint32_t field_2B6B;
        /*2B6F*/ uint32_t field_2B6F;
        /*2B73*/ uint8_t gap_2B73[148];
        /*2C07*/ uint32_t field_2C07;
        /*2C0B*/ uint8_t gap_2C0B[29];
        /*2C28*/ uint32_t f2C28_heapSizeMb;
        /*2C2C*/ uint8_t gap_2C2C[516];
        /*2E30*/ uint32_t f2E30;
        /*2E34*/ uint32_t field_2E34;
        /*2E38*/ MyResources_f2E38Obj f2E38_obj;
        /*2F70*/ char field_2F70[68];
        /*2FB4*/ int field_2FB4;
        /*2FB8*/ int field_2FB8;
        /*2FBC*/ int field_2FBC;
        /*2FC0*/ int field_2FC0;
        /*2FC4*/ int field_2FC4;
        /*2FC8*/ int field_2FC8;
        /*2FCC*/ int field_2FCC;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4_diskDrive: %d\n", this->f4_diskDrive);
            printf("f108_executableDir: %d\n", this->f108_executableDir);
            printf("f20C_settingsDir: %d\n", this->f20C_settingsDir);
            printf("f310_textureCacheDir: %d\n", this->f310_textureCacheDir);
            printf("f414_savesDir: %d\n", this->f414_savesDir);
            printf("f518_globalDir: %d\n", this->f518_globalDir);
            printf("f61C_textsDir: %d\n", this->f61C_textsDir);
            printf("f720_soundSfxDir: %d\n", this->f720_soundSfxDir);
            printf("f824_soundMusicDir: %d\n", this->f824_soundMusicDir);
            printf("f928_editorDir: %d\n", this->f928_editorDir);
            printf("fA2C_dataMoviesDir: %d\n", this->fA2C_dataMoviesDir);
            printf("f23A9_obj: %d\n", this->f23A9_obj);
            printf("gap_23AD: %d\n", this->gap_23AD);
            printf("f2A07_obj: %d\n", this->f2A07_obj);
            printf("field_2A0B: %d\n", this->field_2A0B);
            printf("gap2A0F: %d\n", this->gap2A0F);
            printf("f2B33: %d\n", this->f2B33);
            printf("gap_2B37: %d\n", this->gap_2B37);
            printf("f2B43: %d\n", this->f2B43);
            printf("f2B47: %d\n", this->f2B47);
            printf("gap_2B4B: %d\n", this->gap_2B4B);
            printf("field_2B6B: %d\n", this->field_2B6B);
            printf("field_2B6F: %d\n", this->field_2B6F);
            printf("gap_2B73: %d\n", this->gap_2B73);
            printf("field_2C07: %d\n", this->field_2C07);
            printf("gap_2C0B: %d\n", this->gap_2C0B);
            printf("f2C28_heapSizeMb: %d\n", this->f2C28_heapSizeMb);
            printf("gap_2C2C: %d\n", this->gap_2C2C);
            printf("f2E30: %d\n", this->f2E30);
            printf("field_2E34: %d\n", this->field_2E34);
            printf("field_2F70: %d\n", this->field_2F70);
            printf("field_2FB4: %d\n", this->field_2FB4);
            printf("field_2FB8: %d\n", this->field_2FB8);
            printf("field_2FBC: %d\n", this->field_2FBC);
            printf("field_2FC0: %d\n", this->field_2FC0);
            printf("field_2FC4: %d\n", this->field_2FC4);
            printf("field_2FC8: %d\n", this->field_2FC8);
            printf("field_2FCC: %d\n", this->field_2FCC);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyResources) == 0x2FD0);

#pragma pack(push, 1)
    class KeyEntry {
    public:
        
        /*   0*/ int f0_idx;
        /*   4*/ int f4_key;
        
        void dump() {
            printf("f0_idx: %d\n", this->f0_idx);
            printf("f4_key: %d\n", this->f4_key);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(KeyEntry) == 0x8);

#pragma pack(push, 1)
    class MyTextFont {
    public:
        struct vtbl_t {
            /*   0*/ LONG(__thiscall *release)(MyTextFont *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *addRef)(MyTextFont *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *scalar_destructor)(MyTextFont *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ LONG(__thiscall *j_LockWrap_release)(MyTextFont *self);  // LONG (__thiscall *)(volatile LONG *this)
            /*  10*/ LONG(__thiscall *j_MyCom_addRef)(MyTextFont *self);  // LONG (__thiscall *)(volatile LONG *this)
            /*  14*/ int(__thiscall *readMBCharToFontIdx)(MyTextFont *self, uint32_t *);  // int (__thiscall *)(MyTextFont *this, char **a2)
            /*  18*/ __int16(__thiscall *sub_6335B0)(MyTextFont *self);  // __int16 (__thiscall *)(_DWORD *this)
            /*  1C*/ Pos2i *(__thiscall *getCharSize)(MyTextFont *self, Pos2i *, unsigned __int16);  // Pos2i *(__thiscall *)(_DWORD *this, Pos2i *a2, unsigned __int16 a3)
            /*  20*/ __int16(__thiscall *getMaxHeight)(MyTextFont *self);  // __int16 (__thiscall *)(_DWORD *this)
            /*  24*/ int(__thiscall *getFlags)(MyTextFont *self);  // int (__thiscall *)(_DWORD *this)
            /*  28*/ int(__thiscall *probably_getFontType)(MyTextFont *self);  // int (__thiscall *)(_DWORD *this)
        };
        static_assert(sizeof(vtbl_t) == 0x2C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint8_t gap_4[4];
        /*   8*/ MyFontHeader *f8_chrtbl;
        /*   C*/ MyFontHeader *fC_chrtbl;
        /*  10*/ uint32_t *f10_offsets;
        /*  14*/ MyTextMBToUni *f14_MBToUniText_idx1;
        
        virtual ~MyTextFont();
        void dump() {
            printf("gap_4: %d\n", this->gap_4);
            printf("f8_chrtbl: MyFontHeader(%p)\n", this->f8_chrtbl);
            printf("fC_chrtbl: MyFontHeader(%p)\n", this->fC_chrtbl);
            printf("f10_offsets: uint32_t(%p)\n", this->f10_offsets);
            printf("f14_MBToUniText_idx1: MyTextMBToUni(%p)\n", this->f14_MBToUniText_idx1);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTextFont) == 0x18);

#pragma pack(push, 1)
    class MyInputStream {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *scalar_destructor)(MyInputStream *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ size_t(__thiscall *readBytes)(MyInputStream *self, void *, size_t);  // size_t (__thiscall *)(MyInputStream *, void *, size_t)
            /*   8*/ size_t(__thiscall *writeBytes)(MyInputStream *self, void *, size_t);  // size_t (__thiscall *)(MyInputStream *, void *, size_t)
            /*   C*/ size_t(__thiscall *seek)(MyInputStream *self, size_t, int);  // size_t (__thiscall *)(MyInputStream *, size_t, int)
            /*  10*/ size_t(__thiscall *getSize)(MyInputStream *self);  // size_t (__thiscall *)(MyInputStream *)
            /*  14*/ size_t(__thiscall *getOffs)(MyInputStream *self);  // size_t (__thiscall *)(MyInputStream *)
            /*  18*/ int(__thiscall *mapFileToBuf)(MyInputStream *self, int, int);  // int (__thiscall *)(MyInputStream *, int a2, int a3)
            /*  1C*/ int(__thiscall *unmapFile)(MyInputStream *self, int);  // int (__thiscall *)(MyInputStream *this, int a2)
            /*  20*/ uint32_t *(__thiscall *flush)(MyInputStream *self, uint32_t *);  // _DWORD *(__thiscall *)(MyInputStream *this, _DWORD *status)
            /*  24*/ void(__thiscall *close)(MyInputStream *self);  // void (__thiscall *)(MyInputStream *)
            /*  28*/ MyInputStream *(__thiscall *wrapStream)(MyInputStream *self, MyInputStream *);  // MyInputStream *(__thiscall *)(MyInputStream *this, MyInputStream *a2)
            /*  2C*/ int(__thiscall *getSemaphore)(MyInputStream *self);  // int (__thiscall *)(MyInputStream *)
        };
        static_assert(sizeof(vtbl_t) == 0x30);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyInputStream *f0_wrappedStream;
        /*   8*/ int f4_refs;
        
        virtual ~MyInputStream();
        void dump() {
            printf("f0_wrappedStream: MyInputStream(%p)\n", this->f0_wrappedStream);
            printf("f4_refs: %d\n", this->f4_refs);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyInputStream) == 0xC);

#pragma pack(push, 1)
    class MyMemoryMapStream : public MyInputStream {
    public:
        struct vtbl_t /*: public MyInputStream::vtbl_t */{
            /*   0*/ void *(__thiscall *sub_6001D0)(MyMemoryMapStream *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ LONG(__thiscall *sub_600300)(MyMemoryMapStream *self, char *, LONG);  // LONG (__thiscall *)(int this, HPSTR pch, LONG cch)
            /*   8*/ LONG(__thiscall *sub_600330)(MyMemoryMapStream *self, char *, LONG);  // LONG (__thiscall *)(int this, char *pch, LONG cch)
            /*   C*/ LONG(__thiscall *sub_600360)(MyMemoryMapStream *self, LONG, int);  // LONG (__thiscall *)(int this, LONG lOffset, int iOrigin)
            /*  10*/ LONG(__thiscall *sub_600390)(MyMemoryMapStream *self);  // LONG (__thiscall *)(int this)
            /*  14*/ int(__thiscall *sub_5FFDB0)(MyMemoryMapStream *self);  // int (__thiscall *)(_DWORD *this)
            /*  18*/ int(__stdcall *CEngineInterface__fun_443150)(int, int);  // int (__stdcall *)(int a1, int a2)
            /*  1C*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int a1)
            /*  20*/ uint32_t *(__thiscall *sub_6003D0)(MyMemoryMapStream *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2)
            /*  24*/ HMMIO__ *(__thiscall *sub_6002E0)(MyMemoryMapStream *self);  // HMMIO (__thiscall *)(_DWORD *this)
            /*  28*/ void *(__stdcall *duplicate_7_1)();  // void *(__stdcall *)()
            /*  2C*/ char *(__thiscall *sub_6003C0)(MyMemoryMapStream *self);  // char *(__thiscall *)(char *this)
        };
        static_assert(sizeof(vtbl_t) == 0x30);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ void *_end_f14_semaphore;
        
        virtual ~MyMemoryMapStream();
        void dump() {
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("_end_f14_semaphore: void(%p)\n", this->_end_f14_semaphore);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyMemoryMapStream) == 0x18);

#pragma pack(push, 1)
    class MyFileStream : public MyInputStream {
    public:
        struct vtbl_t /*: public MyInputStream::vtbl_t */{
            /*   0*/ void *(__thiscall *scalar_destructor)(MyFileStream *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ DWORD(__thiscall *readBytes)(MyFileStream *self, void *, DWORD);  // DWORD (__thiscall *)(int this, LPVOID lpBuffer, DWORD nNumberOfBytesToRead)
            /*   8*/ DWORD(__thiscall *writeBytes)(MyFileStream *self, void *, DWORD);  // DWORD (__thiscall *)(int this, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite)
            /*   C*/ DWORD(__thiscall *seek)(MyFileStream *self, LONG, DWORD);  // DWORD (__thiscall *)(int this, LONG lDistanceToMove, DWORD dwMoveMethod)
            /*  10*/ DWORD(__thiscall *getSize)(MyFileStream *self);  // DWORD (__thiscall *)(HANDLE *this)
            /*  14*/ int(__thiscall *getOffs)(MyFileStream *self);  // int (__thiscall *)(_DWORD *this)
            /*  18*/ char *(__thiscall *mapFileToBuf)(MyFileStream *self, int, DWORD);  // char *(__thiscall *)(int this, int a2, DWORD dwFileOffsetHigh)
            /*  1C*/ void *(__thiscall *unmapFile)(MyFileStream *self, void *);  // LPCVOID (__thiscall *)(_DWORD *this, LPCVOID lpBaseAddress)
            /*  20*/ uint32_t *(__thiscall *flush)(MyFileStream *self, uint32_t *);  // _DWORD *(__thiscall *)(HANDLE *this, _DWORD *a2)
            /*  24*/ void *(__thiscall *close)(MyFileStream *self);  // HANDLE (__thiscall *)(HANDLE *this)
            /*  28*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int a1)
            /*  2C*/ char *(__thiscall *getSemaphore)(MyFileStream *self);  // char *(__thiscall *)(char *this)
        };
        static_assert(sizeof(vtbl_t) == 0x30);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ void *fC_hFile;
        /*  10*/ int f10_offs;
        /*  14*/ int f14_hFileMapping;
        /*  18*/ int f18_fileMapBuf;
        /*  1C*/ void *f1C_semaphore;
        
        virtual ~MyFileStream();
        void dump() {
            printf("fC_hFile: void(%p)\n", this->fC_hFile);
            printf("f10_offs: %d\n", this->f10_offs);
            printf("f14_hFileMapping: %d\n", this->f14_hFileMapping);
            printf("f18_fileMapBuf: %d\n", this->f18_fileMapBuf);
            printf("f1C_semaphore: void(%p)\n", this->f1C_semaphore);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFileStream) == 0x20);

#pragma pack(push, 1)
    class MyStr {
    public:
        struct vtbl_t {
            /*   0*/ int(__cdecl *format)(int, int, ...);  // int (*)(int a1, int a2, ...)
            /*   4*/ int(__thiscall *resize)(MyStr *self, unsigned int);  // int (__thiscall *)(MyStr *this, unsigned int a2)
            /*   8*/ uint32_t *(__thiscall *malloc)(MyStr *self, unsigned int);  // _DWORD *(__thiscall *)(_DWORD *this, unsigned int a2)
            /*   C*/ void *(__thiscall *scalar_destructor)(MyStr *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*  10*/ uint32_t *(__thiscall *assignChar)(MyStr *self, uint8_t *);  // _BYTE **(__thiscall *)(_BYTE **this, _BYTE *a2)
            /*  14*/ uint32_t *(__thiscall *assign)(MyStr *self, char *);  // char **(__thiscall *)(MyStr *this, const char *Str)
            /*  18*/ int(__thiscall *assignMyStr)(MyStr *self, uint32_t *);  // int (__thiscall *)(int *this, _DWORD *a2)
            /*  1C*/ void *(__thiscall *assignMySubStr)(MyStr *self, MySubStr *);  // void *(__thiscall *)(void *this, MySubStr *a2)
            /*  20*/ uint32_t *(__thiscall *append)(MyStr *self, char *);  // _DWORD *(__thiscall *)(_DWORD *this, char *Str)
            /*  24*/ uint32_t *(__thiscall *appendChar)(MyStr *self, uint8_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _BYTE *a2)
            /*  28*/ void *(__thiscall *appendMySubStr)(MyStr *self, int);  // void *(__thiscall *)(void *this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x2C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ size_t f4_length;
        /*   8*/ char *f8_buf;
        /*   C*/ int fC_bufSize;
        /*  10*/ int f10_bufAlign;
        
        virtual ~MyStr();
        void dump() {
            printf("f4_length: %d\n", this->f4_length);
            printf("f8_buf: %s\n", this->f8_buf);
            printf("fC_bufSize: %d\n", this->fC_bufSize);
            printf("f10_bufAlign: %d\n", this->f10_bufAlign);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyStr) == 0x14);

#pragma pack(push, 1)
    class MySubStr {
    public:
        struct vtbl_t {
            /*   0*/ void(__cdecl *ret_void_0args)();  // void (__cdecl *)()
            /*   4*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int a1)
        };
        static_assert(sizeof(vtbl_t) == 0x8);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ size_t f4_length;
        /*   8*/ char *f8_buf;
        /*   C*/ int field_C;
        
        virtual ~MySubStr();
        void dump() {
            printf("f4_length: %d\n", this->f4_length);
            printf("f8_buf: %s\n", this->f8_buf);
            printf("field_C: %d\n", this->field_C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MySubStr) == 0x10);

#pragma pack(push, 1)
    class TbDiscFileStorage_vtbl {
    public:
        
        /*   0*/ void *releaseContent;
        /*   4*/ void *CFileManager__fun_5B9DD0;
        /*   8*/ void *CFileManager__fun_5B9E00;
        /*   C*/ void *CFileManager_openDiskFileStream;
        /*  10*/ void *CFileManager__fun_5B9D60;
        /*  14*/ void *formatFilePath;
        /*  18*/ void *TbWadFileStorage__fun_5B9E70;
        /*  1C*/ void *CFileManager__fun_5B9EB0;
        /*  20*/ void *CFileManager__fun_5B9EE0;
        /*  24*/ void *CFileManager__fun_5B9F10;
        /*  28*/ void *CFileManager__fun_5B9F40;
        /*  2C*/ void *TbWadFileStorage__fun_55C000;
        
        void dump() {
            printf("releaseContent: void(%p)\n", this->releaseContent);
            printf("CFileManager__fun_5B9DD0: void(%p)\n", this->CFileManager__fun_5B9DD0);
            printf("CFileManager__fun_5B9E00: void(%p)\n", this->CFileManager__fun_5B9E00);
            printf("CFileManager_openDiskFileStream: void(%p)\n", this->CFileManager_openDiskFileStream);
            printf("CFileManager__fun_5B9D60: void(%p)\n", this->CFileManager__fun_5B9D60);
            printf("formatFilePath: void(%p)\n", this->formatFilePath);
            printf("TbWadFileStorage__fun_5B9E70: void(%p)\n", this->TbWadFileStorage__fun_5B9E70);
            printf("CFileManager__fun_5B9EB0: void(%p)\n", this->CFileManager__fun_5B9EB0);
            printf("CFileManager__fun_5B9EE0: void(%p)\n", this->CFileManager__fun_5B9EE0);
            printf("CFileManager__fun_5B9F10: void(%p)\n", this->CFileManager__fun_5B9F10);
            printf("CFileManager__fun_5B9F40: void(%p)\n", this->CFileManager__fun_5B9F40);
            printf("TbWadFileStorage__fun_55C000: void(%p)\n", this->TbWadFileStorage__fun_55C000);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(TbDiscFileStorage_vtbl) == 0x30);

#pragma pack(push, 1)
    class MyDirectory {
    public:
        
        /*   4*/ MyDirectory *f0_subStream;
        /*   8*/ int f8_hSemaphore;
        /*   C*/ int f8_refs;
        /*  10*/ MyStr f10_name;
        
        virtual ~MyDirectory();
        void dump() {
            printf("f0_subStream: MyDirectory(%p)\n", this->f0_subStream);
            printf("f8_hSemaphore: %d\n", this->f8_hSemaphore);
            printf("f8_refs: %d\n", this->f8_refs);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDirectory) == 0x24);

#pragma pack(push, 1)
    class MyFileIterator : public MyDirectory {
    public:
        struct vtbl_t /*: public MyDirectory::vtbl_t */{
            /*   0*/ void *(__thiscall *scalar_deleting_destructor)(MyFileIterator *self, char);  // stdiobuf *(__thiscall *)(stdiobuf *this, char a2)
            /*   4*/ uint32_t *(__thiscall *createStreamIfNotYet)(MyFileIterator *self, uint32_t *, uint32_t *, int, int, int);  // _DWORD *(__thiscall *)(void *this, _DWORD *a2, _DWORD *stream, int a4, int a5, int a6)
            /*   8*/ uint32_t *(__thiscall *sub_5D9290)(MyFileIterator *self, uint32_t *, char *, int);  // _DWORD *(__thiscall *)(MySubStr *this, _DWORD *a2, char *a3, int a4)
            /*   C*/ uint32_t *(__thiscall *sub_5D93E0)(MyFileIterator *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3)
            /*  10*/ uint32_t *(__thiscall *sub_5D82A0)(MyFileIterator *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(void *this, _DWORD *a2, int a3, int a4)
            /*  14*/ uint32_t *(__thiscall *formatFilePath)(MyFileIterator *self, uint32_t *, char *, int, int);  // _DWORD *(__thiscall *)(void *this, _DWORD *a2, const char *a3, int a4, int a5)
            /*  18*/ int(__thiscall *sub_5D8360)(MyFileIterator *self);  // int (__thiscall *)(_DWORD *this)
            /*  1C*/ int(__thiscall *sub_5D96C0)(MyFileIterator *self, int, int, DWORD);  // int (__thiscall *)(MySubStr *this, int a2, int a3, DWORD dwFileAttributes)
            /*  20*/ int(__thiscall *sub_5D9740)(MyFileIterator *self, int, char *);  // int (__thiscall *)(MySubStr *this, int a2, char *a3)
            /*  24*/ int(__thiscall *sub_5D97C0)(MyFileIterator *self, int, char *);  // int (__thiscall *)(MySubStr *this, int a2, char *a3)
            /*  28*/ int(__thiscall *sub_5D9860)(MyFileIterator *self, int, char *, char *);  // int (__thiscall *)(MySubStr *this, int a2, char *a3, char *a4)
            /*  2C*/ int(__thiscall *wrapFile)(MyFileIterator *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /*  30*/ void(__thiscall *nullsub_1)(MyFileIterator *self);  // void (__thiscall *)(void *this)
            /*  34*/ void *(__thiscall *close)(MyFileIterator *self);  // HANDLE (__thiscall *)(HANDLE *this)
        };
        static_assert(sizeof(vtbl_t) == 0x38);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
        /*  24*/ int _end_f24_hFind;
        
        virtual ~MyFileIterator();
        void dump() {
            printf("_end_f24_hFind: %d\n", this->_end_f24_hFind);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFileIterator) == 0x28);

#pragma pack(push, 1)
    class DiscFileBase {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *scalar_destructor)(DiscFileBase *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ LONG(__thiscall *super_destructor)(DiscFileBase *self);  // LONG (__thiscall *)(_DWORD *this)
            /*   8*/ int(__thiscall *readBytes)(DiscFileBase *self, void *, int);  // int (__thiscall *)(DiscFileBase *this, void *a2, int a3)
            /*   C*/ int(__thiscall *writeBytes)(DiscFileBase *self, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3)
            /*  10*/ int(__thiscall *seek)(DiscFileBase *self, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3)
            /*  14*/ int(__thiscall *getSize)(DiscFileBase *self);  // int (__thiscall *)(_DWORD *this)
            /*  18*/ int(__thiscall *getOffs)(DiscFileBase *self);  // int (__thiscall *)(_DWORD *this)
            /*  1C*/ int(__thiscall *mapToBuf)(DiscFileBase *self);  // int (__thiscall *)(_DWORD *this)
            /*  20*/ uint32_t *(__thiscall *flush)(DiscFileBase *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2)
        };
        static_assert(sizeof(vtbl_t) == 0x24);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyInputStream *f0_stream;
        
        virtual ~DiscFileBase();
        void dump() {
            printf("f0_stream: MyInputStream(%p)\n", this->f0_stream);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DiscFileBase) == 0x8);

#pragma pack(push, 1)
    class TbDiscFile : public DiscFileBase {
    public:
        struct vtbl_t /*: public DiscFileBase::vtbl_t */{
            /*   0*/ void *(__thiscall *scalar_destructor)(TbDiscFile *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ LONG(__thiscall *super_destructor)(TbDiscFile *self);  // LONG (__thiscall *)(_DWORD *this)
            /*   8*/ int(__thiscall *readBytes)(TbDiscFile *self, int, int);  // int (__thiscall *)(TbDiscFile *this, int a2, int a3)
            /*   C*/ int(__thiscall *writeBytes)(TbDiscFile *self, int, int);  // int (__thiscall *)(TbDiscFile *this, int a2, int a3)
            /*  10*/ int(__thiscall *seek)(TbDiscFile *self, int, int);  // int (__thiscall *)(TbDiscFile *this, int a2, int a3)
            /*  14*/ int(__thiscall *getSize)(TbDiscFile *self);  // int (__thiscall *)(TbDiscFile *this)
            /*  18*/ int(__thiscall *getOffs)(TbDiscFile *self);  // int (__thiscall *)(TbDiscFile *this)
            /*  1C*/ int(__thiscall *mapToBuf)(TbDiscFile *self);  // int (__thiscall *)(_DWORD *this)
            /*  20*/ uint32_t *(__thiscall *flush)(TbDiscFile *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2)
            /*  24*/ uint32_t *(__thiscall *openStream)(TbDiscFile *self, uint32_t *, char *, int);  // _DWORD *(__thiscall *)(void *this, _DWORD *status, char *path, int flags)
        };
        static_assert(sizeof(vtbl_t) == 0x28);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        
        virtual ~TbDiscFile();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(TbDiscFile) == 0x8);

#pragma pack(push, 1)
    class MyLangObj {
    public:
        
        /*   0*/ MyFileStorage *f0_resourceIndex;
        /*   4*/ TbDiscFileStorage f4_diskFileStor;
        /*   C*/ int fC_diskStorHasContent;
        
        void dump() {
            printf("f0_resourceIndex: MyFileStorage(%p)\n", this->f0_resourceIndex);
            printf("fC_diskStorHasContent: %d\n", this->fC_diskStorHasContent);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyLangObj) == 0x10);

#pragma pack(push, 1)
    class MyLocalStr {
    public:
        struct vtbl_t {
            /*   0*/ int(__cdecl *format)(int, char *, ...);  // int (*)(int a1, char *Format, ...)
            /*   4*/ int(__thiscall *resize)(MyLocalStr *self, unsigned int);  // int (__thiscall *)(MyLocalStr *this, unsigned int length)
            /*   8*/ void *(__thiscall *scalar_destructor)(MyLocalStr *self, char);  // std::locale::facet *(__thiscall *)(std::locale::facet *this, char a2)
            /*   C*/ uint32_t *(__thiscall *assignChar)(MyLocalStr *self, uint8_t *);  // _BYTE **(__thiscall *)(_BYTE **this, _BYTE *a2)
            /*  10*/ void *(__thiscall *assign)(MyLocalStr *self, char *);  // void *(__thiscall *)(void *this, char *Source)
            /*  14*/ uint32_t *(__thiscall *assignMyStr)(MyLocalStr *self, MyStr *);  // char **(__thiscall *)(char **this, MyStr *a2)
            /*  18*/ int(__thiscall *append)(MyLocalStr *self, char *);  // int (__thiscall *)(int this, char *Source)
            /*  1C*/ uint32_t *(__thiscall *appendChar)(MyLocalStr *self, uint8_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _BYTE *a2)
            /*  20*/ void *(__thiscall *appendMyLocalStr)(MyLocalStr *self, int);  // void *(__thiscall *)(void *this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x24);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ size_t f4_len;
        /*   8*/ char *f8_buf;
        /*   C*/ size_t fC_buf_size;
        /*  10*/ int f10_is_truncated;
        
        virtual ~MyLocalStr();
        void dump() {
            printf("f4_len: %d\n", this->f4_len);
            printf("f8_buf: %s\n", this->f8_buf);
            printf("fC_buf_size: %d\n", this->fC_buf_size);
            printf("f10_is_truncated: %d\n", this->f10_is_truncated);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyLocalStr) == 0x14);

#pragma pack(push, 1)
    class MyTextBase {
    public:
        struct vtbl_t {
            /*   0*/ LONG(__thiscall *release)(MyTextBase *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *addRef)(MyTextBase *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *scalar_destructor)(MyTextBase *self, char);  // std::locale::facet *(__thiscall *)(std::locale::facet *this, char a2)
            /*   C*/ LONG(__thiscall *j_release)(MyTextBase *self);  // LONG (__thiscall *)(volatile LONG *this)
            /*  10*/ LONG(__thiscall *j_addRef)(MyTextBase *self);  // LONG (__thiscall *)(volatile LONG *this)
        };
        static_assert(sizeof(vtbl_t) == 0x14);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int refs;
        
        virtual ~MyTextBase();
        void dump() {
            printf("refs: %d\n", this->refs);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTextBase) == 0x8);

#pragma pack(push, 1)
    class MyFileStorage : public MyTextBase {
    public:
        struct vtbl_t /*: public MyTextBase::vtbl_t */{
            /*   0*/ LONG(__thiscall *release)(MyFileStorage *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MyCom_addRef)(MyFileStorage *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *sub_62FD60)(MyFileStorage *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ LONG(__thiscall *j_LockWrap_release)(MyFileStorage *self);  // LONG (__thiscall *)(volatile LONG *this)
            /*  10*/ LONG(__thiscall *j_MyCom_addRef)(MyFileStorage *self);  // LONG (__thiscall *)(volatile LONG *this)
        };
        static_assert(sizeof(vtbl_t) == 0x14);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   8*/ ResourceIndexEntry *f8_resourceIndex_start;
        /*   C*/ ResourceIndexEntry *fC_resourceIndex_end;
        /*  10*/ TbDiscFileStorage f10_diskFileStor;
        
        virtual ~MyFileStorage();
        void dump() {
            printf("f8_resourceIndex_start: ResourceIndexEntry(%p)\n", this->f8_resourceIndex_start);
            printf("fC_resourceIndex_end: ResourceIndexEntry(%p)\n", this->fC_resourceIndex_end);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFileStorage) == 0x18);

#pragma pack(push, 1)
    class Vtable_672774 {
    public:
        
        /*   0*/ void *TbCharStringList___scalar_deleting_destructor_uint;
        
        void dump() {
            printf("TbCharStringList___scalar_deleting_destructor_uint: void(%p)\n", this->TbCharStringList___scalar_deleting_destructor_uint);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Vtable_672774) == 0x4);

#pragma pack(push, 1)
    class WadHeader {
    public:
        
        /*   0*/ int f0_signature;
        /*   4*/ uint32_t f4_version;
        /*   8*/ uint8_t gap_8[64];
        /*  48*/ uint32_t f48_filesCount;
        /*  4C*/ uint32_t f4C_namesOffset;
        /*  50*/ uint32_t f50_namesSize;
        /*  54*/ int _end_f54;
        
        void dump() {
            printf("f0_signature: %d\n", this->f0_signature);
            printf("f4_version: %d\n", this->f4_version);
            printf("gap_8: %d\n", this->gap_8);
            printf("f48_filesCount: %d\n", this->f48_filesCount);
            printf("f4C_namesOffset: %d\n", this->f4C_namesOffset);
            printf("f50_namesSize: %d\n", this->f50_namesSize);
            printf("_end_f54: %d\n", this->_end_f54);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WadHeader) == 0x58);

#pragma pack(push, 1)
    class MyALList {
    public:
        
        /*   0*/ MyALListEntry *f0_first;
        /*   4*/ int f4_count;
        
        void dump() {
            printf("f0_first: MyALListEntry(%p)\n", this->f0_first);
            printf("f4_count: %d\n", this->f4_count);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyALList) == 0x8);

#pragma pack(push, 1)
    class WadContent {
    public:
        
        /*   0*/ WadDirObj *f0_rootDir;
        /*   4*/ int f4_namesBuf;
        /*   8*/ MyWadUnkObj *f8_wadUnkObj;
        /*   C*/ MyALList fC_allDirs;
        /*  14*/ MyALList f14_allFiles;
        
        void dump() {
            printf("f0_rootDir: WadDirObj(%p)\n", this->f0_rootDir);
            printf("f4_namesBuf: %d\n", this->f4_namesBuf);
            printf("f8_wadUnkObj: MyWadUnkObj(%p)\n", this->f8_wadUnkObj);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WadContent) == 0x1C);

#pragma pack(push, 1)
    class MyWadDirectory : public MyDirectory {
    public:
        struct vtbl_t /*: public MyDirectory::vtbl_t */{
            /*   0*/ void *(__thiscall *scalar_deleting_destructor)(MyWadDirectory *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ uint32_t *(__thiscall *sub_5D8A60)(MyWadDirectory *self, uint32_t *, uint32_t *, int, int, int);  // _DWORD *(__thiscall *)(int this, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6)
            /*   8*/ uint32_t *(__thiscall *sub_5D8850)(MyWadDirectory *self, uint32_t *, char *, unsigned int);  // _DWORD *(__thiscall *)(MySubStr *this, _DWORD *a2, const char *a3, unsigned int a4)
            /*   C*/ uint32_t *(__thiscall *sub_5D8A00)(MyWadDirectory *self, uint32_t *, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3)
            /*  10*/ uint32_t *(__thiscall *MyFileSmth_sub_5D82A0)(MyWadDirectory *self, uint32_t *, int, int);  // _DWORD *(__thiscall *)(void *this, _DWORD *a2, int a3, int a4)
            /*  14*/ uint32_t *(__thiscall *MyFileSmth_formatFilePath)(MyWadDirectory *self, uint32_t *, char *, int, int);  // _DWORD *(__thiscall *)(MyDirectory *this, _DWORD *status, const char *buf, int fileName, int bufLimit)
            /*  18*/ int(__thiscall *MyFileSmth_sub_5D8360)(MyWadDirectory *self);  // int (__thiscall *)(_DWORD *this)
            /*  1C*/ uint32_t *(__stdcall *sub_61B080)(uint32_t *, int, int);  // _DWORD *(__stdcall *)(_DWORD *a1, int a2, int a3)
            /*  20*/ uint32_t *(__stdcall *sub_5D8B00)(uint32_t *, int);  // _DWORD *(__stdcall *)(_DWORD *a1, int a2)
            /*  24*/ uint32_t *(__stdcall *sub_628BA0)(uint32_t *, int);  // _DWORD *(__stdcall *)(_DWORD *a1, int a2)
            /*  28*/ void *(__stdcall *duplicate_7_1)();  // void *(__stdcall *)()
            /*  2C*/ MyDirectory *(__thiscall *MyFileSmth_sub_5D8280)(MyWadDirectory *self, int);  // MyDirectory *(__thiscall *)(MyFileIterator *this, int a2)
            /*  30*/ int(__thiscall *clearData)(MyWadDirectory *self);  // int (__thiscall *)(MyWadDirectory *this)
        };
        static_assert(sizeof(vtbl_t) == 0x34);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  24*/ MyStr f24_str1;
        /*  38*/ uint32_t field_38;
        /*  3C*/ Vtable_672774 *__vftable_3C;
        /*  40*/ int field_40;
        /*  44*/ int field_44;
        /*  48*/ int field_48;
        /*  4C*/ MyStr f4C_str2;
        /*  60*/ WadHeader f60_header;
        /*  B8*/ TbDiscFile fB8_diskFile;
        /*  C0*/ MyInputStream *fC0_stream;
        /*  C4*/ WadContent _end_fC4_uniq_obj;
        
        virtual ~MyWadDirectory();
        void dump() {
            printf("field_38: %d\n", this->field_38);
            printf("__vftable_3C: Vtable_672774(%p)\n", this->__vftable_3C);
            printf("field_40: %d\n", this->field_40);
            printf("field_44: %d\n", this->field_44);
            printf("field_48: %d\n", this->field_48);
            printf("fC0_stream: MyInputStream(%p)\n", this->fC0_stream);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyWadDirectory) == 0xE0);

#pragma pack(push, 1)
    class MyCachedOffsStream : public MyInputStream {
    public:
        struct vtbl_t /*: public MyInputStream::vtbl_t */{
            /*   0*/ void *(__thiscall *sub_5FFAF0)(MyCachedOffsStream *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ size_t(__thiscall *obj_readBytes_redirectToChild_plus)(MyCachedOffsStream *self, void *, int);  // size_t (__thiscall *)(MyInputStream *this, void *a2, int a3)
            /*   8*/ size_t(__thiscall *obj_writeBytes_redirectToChild_plus)(MyCachedOffsStream *self, void *, int);  // size_t (__thiscall *)(MyInputStream *this, void *a2, int a3)
            /*   C*/ int(__thiscall *obj_seek_redirectToChild_plus)(MyCachedOffsStream *self, int, int);  // int (__thiscall *)(MyInputStream *this, int a2, int a3)
            /*  10*/ size_t(__thiscall *obj_getSize_redirectToChild)(MyCachedOffsStream *self);  // size_t (__thiscall *)(MyInputStream *this)
            /*  14*/ int(__thiscall *obj_getOffs)(MyCachedOffsStream *self);  // int (__thiscall *)(MyInputStream *this)
            /*  18*/ int(__thiscall *MyInputStream_mapToBuf_redirectToChild)(MyCachedOffsStream *self, int, int);  // int (__thiscall *)(MyInputStream *this, int a2, int a3)
            /*  1C*/ int(__thiscall *MyInputStream_unmap_redirectToChild)(MyCachedOffsStream *self, int);  // int (__thiscall *)(MyInputStream *this, int a2)
            /*  20*/ uint32_t *(__thiscall *MyInputStream_flush_stub)(MyCachedOffsStream *self, uint32_t *);  // _DWORD *(__thiscall *)(MyInputStream *this, _DWORD *a1)
            /*  24*/ void(__thiscall *obj_close)(MyCachedOffsStream *self);  // void (__thiscall *)(MyInputStream *this)
            /*  28*/ MyInputStream *(__thiscall *MyInputStream_pushSubStream)(MyCachedOffsStream *self, MyInputStream *);  // MyInputStream *(__thiscall *)(MyInputStream *this, MyInputStream *sub)
            /*  2C*/ int(__thiscall *MyInputStream_getSemaphore_redirectToChild)(MyCachedOffsStream *self);  // int (__thiscall *)(MyInputStream *this)
        };
        static_assert(sizeof(vtbl_t) == 0x30);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ int fC_cachedOffs;
        
        virtual ~MyCachedOffsStream();
        void dump() {
            printf("fC_cachedOffs: %d\n", this->fC_cachedOffs);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCachedOffsStream) == 0x10);

#pragma pack(push, 1)
    class MySemaphore {
    public:
        
        /*   0*/ uint32_t f0_hSemaphore;
        /*   4*/ int f4_status;
        /*   8*/ int f8_semaTaken;
        
        void dump() {
            printf("f0_hSemaphore: %d\n", this->f0_hSemaphore);
            printf("f4_status: %d\n", this->f4_status);
            printf("f8_semaTaken: %d\n", this->f8_semaTaken);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MySemaphore) == 0xC);

#pragma pack(push, 1)
    class MyConcurrentStream : public MyCachedOffsStream {
    public:
        struct vtbl_t /*: public MyCachedOffsStream::vtbl_t */{
            /*   0*/ void *(__thiscall *MyCachedOffsStream_scalar_destructor)(MyConcurrentStream *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ size_t(__thiscall *MyConcurrentStream_readBytes)(MyConcurrentStream *self, int, int);  // size_t (__thiscall *)(MyInputStream *this, int a2, int a3)
            /*   8*/ size_t(__thiscall *MyConcurrentStream_writeBytes)(MyConcurrentStream *self, void *, int);  // size_t (__thiscall *)(MyCachedOffsStream *this, void *a2, int a3)
            /*   C*/ int(__thiscall *MyConcurrentStream_seek)(MyConcurrentStream *self, int, int);  // int (__thiscall *)(MyInputStream *this, int a2, int a3)
            /*  10*/ size_t(__thiscall *MyConcurrentStream_getSize)(MyConcurrentStream *self);  // size_t (__thiscall *)(Concurrency::details::EventWaitNode *this)
            /*  14*/ int(__thiscall *MyCachedOffsStream_getOffs)(MyConcurrentStream *self);  // int (__thiscall *)(MyInputStream *this)
            /*  18*/ int(__thiscall *MyInputStream_mapToBuf_redirect)(MyConcurrentStream *self, int, int);  // int (__thiscall *)(MyInputStream *this, int a2, int a3)
            /*  1C*/ int(__thiscall *MyInputStream_unmap_redirect)(MyConcurrentStream *self, int);  // int (__thiscall *)(MyInputStream *this, int a2)
            /*  20*/ uint32_t *(__thiscall *MyInputStream_flush_stub)(MyConcurrentStream *self, uint32_t *);  // _DWORD *(__thiscall *)(MyInputStream *this, _DWORD *a1)
            /*  24*/ void(__thiscall *MyCachedOffsStream_close)(MyConcurrentStream *self);  // void (__thiscall *)(MyCachedOffsStream *this)
            /*  28*/ void(__thiscall *MyConcurrentStream_wrapStream)(MyConcurrentStream *self, MyInputStream *);  // void (__thiscall *)(MyCachedOffsStream *this, MyInputStream *a2)
            /*  2C*/ int(__thiscall *MyInputStream_getSemaphore_redirect)(MyConcurrentStream *self);  // int (__thiscall *)(MyInputStream *this)
        };
        static_assert(sizeof(vtbl_t) == 0x30);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        
        virtual ~MyConcurrentStream();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyConcurrentStream) == 0x10);

#pragma pack(push, 1)
    class WadEntry_off8 {
    public:
        
        /*   0*/ uint32_t f8_nameSize;
        /*   4*/ int fC_fileOffset;
        /*   8*/ int f10_compressedSize;
        /*   C*/ int f14_compressType;
        /*  10*/ int f18_size;
        /*  14*/ int field_1C;
        /*  18*/ int field_20;
        /*  1C*/ int field_24;
        /*  20*/ int f0_idx;
        /*  24*/ int f4_nameOffset;
        
        void dump() {
            printf("f8_nameSize: %d\n", this->f8_nameSize);
            printf("fC_fileOffset: %d\n", this->fC_fileOffset);
            printf("f10_compressedSize: %d\n", this->f10_compressedSize);
            printf("f14_compressType: %d\n", this->f14_compressType);
            printf("f18_size: %d\n", this->f18_size);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("f0_idx: %d\n", this->f0_idx);
            printf("f4_nameOffset: %d\n", this->f4_nameOffset);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WadEntry_off8) == 0x28);

#pragma pack(push, 1)
    class MyALListEntry {
    public:
        
        /*   0*/ int f0_next;
        /*   4*/ void *f4_value;
        
        void dump() {
            printf("f0_next: %d\n", this->f0_next);
            printf("f4_value: void(%p)\n", this->f4_value);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyALListEntry) == 0x8);

#pragma pack(push, 1)
    class WadEntry {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ int f4_nameOffset;
        /*   8*/ uint32_t f8_nameSize;
        /*   C*/ int fC_fileOffset;
        /*  10*/ int f10_compressedSize;
        /*  14*/ int f14_compressType;
        /*  18*/ int f18_size;
        /*  1C*/ int field_1C;
        /*  20*/ int field_20;
        /*  24*/ int field_24;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4_nameOffset: %d\n", this->f4_nameOffset);
            printf("f8_nameSize: %d\n", this->f8_nameSize);
            printf("fC_fileOffset: %d\n", this->fC_fileOffset);
            printf("f10_compressedSize: %d\n", this->f10_compressedSize);
            printf("f14_compressType: %d\n", this->f14_compressType);
            printf("f18_size: %d\n", this->f18_size);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WadEntry) == 0x28);

#pragma pack(push, 1)
    class MyDirsLList {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *__sub_5FE3D0_scalar_destructor)(MyDirsLList *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
        /*   4*/ MyLListEntry *f0_first;
        /*   8*/ MyLListEntry *f4_last;
        /*   C*/ int f8_count;
        
        virtual ~MyDirsLList();
        void dump() {
            printf("f0_first: MyLListEntry(%p)\n", this->f0_first);
            printf("f4_last: MyLListEntry(%p)\n", this->f4_last);
            printf("f8_count: %d\n", this->f8_count);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDirsLList) == 0x10);

#pragma pack(push, 1)
    class MyFilesLList {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *__sub_5FE430_scalar_destructor)(MyFilesLList *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
        /*   4*/ MyLListEntry *f0_first;
        /*   8*/ MyLListEntry *f4_last;
        /*   C*/ int f8_count;
        
        virtual ~MyFilesLList();
        void dump() {
            printf("f0_first: MyLListEntry(%p)\n", this->f0_first);
            printf("f4_last: MyLListEntry(%p)\n", this->f4_last);
            printf("f8_count: %d\n", this->f8_count);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFilesLList) == 0x10);

#pragma pack(push, 1)
    class WadDirObj {
    public:
        
        /*   0*/ char *f0_name;
        /*   4*/ uint32_t f4_isPackedWadFile;
        /*   8*/ MyDirsLList f8_subdirs;
        /*  18*/ MyFilesLList f18_files;
        
        void dump() {
            printf("f0_name: %s\n", this->f0_name);
            printf("f4_isPackedWadFile: %d\n", this->f4_isPackedWadFile);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WadDirObj) == 0x28);

#pragma pack(push, 1)
    class MyLListEntry {
    public:
        
        /*   0*/ void *f0_value;
        /*   4*/ MyLListEntry *f4_next;
        /*   8*/ MyLListEntry *f8_prev;
        
        void dump() {
            printf("f0_value: void(%p)\n", this->f0_value);
            printf("f4_next: MyLListEntry(%p)\n", this->f4_next);
            printf("f8_prev: MyLListEntry(%p)\n", this->f8_prev);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyLListEntry) == 0xC);

#pragma pack(push, 1)
    class MyLList2 {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ MyLList2_entry *f4_first;
        /*   8*/ int f8_count;
        /*   C*/ MyLList2_entry *fC_it;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4_first: MyLList2_entry(%p)\n", this->f4_first);
            printf("f8_count: %d\n", this->f8_count);
            printf("fC_it: MyLList2_entry(%p)\n", this->fC_it);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyLList2) == 0x10);

#pragma pack(push, 1)
    class MyLList2_entry {
    public:
        
        /*   0*/ MyLList2_entry *f0_prev;
        /*   4*/ MyLList2_entry *f4_next;
        /*   8*/ uint32_t *f8_value;
        
        void dump() {
            printf("f0_prev: MyLList2_entry(%p)\n", this->f0_prev);
            printf("f4_next: MyLList2_entry(%p)\n", this->f4_next);
            printf("f8_value: uint32_t(%p)\n", this->f8_value);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyLList2_entry) == 0xC);

#pragma pack(push, 1)
    class WadFileObj {
    public:
        
        /*   0*/ uint32_t f0_name;
        /*   4*/ uint32_t f4_isPackedWadFile;
        /*   8*/ int f8_bufSize;
        /*   C*/ int fC_bufRelOffs;
        /*  10*/ int f10_idx;
        
        void dump() {
            printf("f0_name: %d\n", this->f0_name);
            printf("f4_isPackedWadFile: %d\n", this->f4_isPackedWadFile);
            printf("f8_bufSize: %d\n", this->f8_bufSize);
            printf("fC_bufRelOffs: %d\n", this->fC_bufRelOffs);
            printf("f10_idx: %d\n", this->f10_idx);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WadFileObj) == 0x14);

#pragma pack(push, 1)
    class TbCharStringList_vtbl {
    public:
        
        /*   0*/ void *TbCharStringList___scalar_deleting_destructor_uint;
        
        void dump() {
            printf("TbCharStringList___scalar_deleting_destructor_uint: void(%p)\n", this->TbCharStringList___scalar_deleting_destructor_uint);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(TbCharStringList_vtbl) == 0x4);

#pragma pack(push, 1)
    class MyWadUnkObj {
    public:
        
        /*   0*/ MyStr f0_str1;
        /*  14*/ WadDirObj *f14_dir;
        /*  18*/ int field_18;
        /*  1C*/ int field_1C;
        /*  20*/ MyStr f20_str2;
        /*  34*/ char field_34;
        /*  35*/ char field_35;
        /*  36*/ uint8_t gap_36[2];
        /*  38*/ uint32_t field_38;
        /*  3C*/ TbCharStringList_vtbl *__vftable_3C;
        /*  40*/ uint8_t gap_40[12];
        /*  4C*/ TbCharStringList_vtbl *__vftable_4C;
        /*  50*/ int field_50;
        /*  54*/ int field_54;
        /*  58*/ int field_58;
        /*  5C*/ int _end_f5C;
        
        void dump() {
            printf("f14_dir: WadDirObj(%p)\n", this->f14_dir);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_34: %d\n", this->field_34);
            printf("field_35: %d\n", this->field_35);
            printf("field_38: %d\n", this->field_38);
            printf("__vftable_3C: TbCharStringList_vtbl(%p)\n", this->__vftable_3C);
            printf("gap_40: %d\n", this->gap_40);
            printf("__vftable_4C: TbCharStringList_vtbl(%p)\n", this->__vftable_4C);
            printf("field_50: %d\n", this->field_50);
            printf("field_54: %d\n", this->field_54);
            printf("field_58: %d\n", this->field_58);
            printf("_end_f5C: %d\n", this->_end_f5C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyWadUnkObj) == 0x60);

#pragma pack(push, 1)
    class ResourceIndexEntry {
    public:
        
        /*   0*/ int f0_fileId;
        /*   4*/ __int16 f4_textType;
        /*   6*/ __int16 f6_offset;
        /*   8*/ MyTextBase *f8_text;
        
        void dump() {
            printf("f0_fileId: %d\n", this->f0_fileId);
            printf("f4_textType: %d\n", this->f4_textType);
            printf("f6_offset: %d\n", this->f6_offset);
            printf("f8_text: MyTextBase(%p)\n", this->f8_text);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(ResourceIndexEntry) == 0xC);

#pragma pack(push, 1)
    class MyTextMBToUni : public MyTextBase {
    public:
        struct vtbl_t /*: public MyTextBase::vtbl_t */{
            /*   0*/ LONG(__thiscall *release)(MyTextMBToUni *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MyTextMBToUni *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *sub_62E3F0)(MyTextMBToUni *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ LONG(__thiscall *j_MySharedObj_release)(MyTextMBToUni *self);  // LONG (__thiscall *)(volatile LONG *this)
            /*  10*/ LONG(__thiscall *j_MySharedObj_addRef)(MyTextMBToUni *self);  // LONG (__thiscall *)(volatile LONG *this)
        };
        static_assert(sizeof(vtbl_t) == 0x14);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   8*/ char f8_maxChr;
        /*   9*/ uint8_t gap_9[1];
        /*   A*/ __int16 field_A;
        /*   C*/ int field_C;
        
        virtual ~MyTextMBToUni();
        void dump() {
            printf("f8_maxChr: %d\n", this->f8_maxChr);
            printf("field_A: %d\n", this->field_A);
            printf("field_C: %d\n", this->field_C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTextMBToUni) == 0x10);

#pragma pack(push, 1)
    class BFMU_header {
    public:
        
        /*   0*/ int f0_signature;
        /*   4*/ char f4___maxChar;
        /*   5*/ char field_5;
        /*   6*/ char field_6;
        /*   7*/ char field_7;
        
        void dump() {
            printf("f0_signature: %d\n", this->f0_signature);
            printf("f4___maxChar: %d\n", this->f4___maxChar);
            printf("field_5: %d\n", this->field_5);
            printf("field_6: %d\n", this->field_6);
            printf("field_7: %d\n", this->field_7);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(BFMU_header) == 0x8);

#pragma pack(push, 1)
    class MyTextUniToMB : public MyTextBase {
    public:
        struct vtbl_t /*: public MyTextBase::vtbl_t */{
            /*   0*/ LONG(__thiscall *release)(MyTextUniToMB *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MyTextUniToMB *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *sub_62E090)(MyTextUniToMB *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ LONG(__thiscall *j_MySharedObj_release)(MyTextUniToMB *self);  // LONG (__thiscall *)(volatile LONG *this)
            /*  10*/ LONG(__thiscall *j_MySharedObj_addRef)(MyTextUniToMB *self);  // LONG (__thiscall *)(volatile LONG *this)
        };
        static_assert(sizeof(vtbl_t) == 0x14);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   8*/ int field_8;
        
        virtual ~MyTextUniToMB();
        void dump() {
            printf("field_8: %d\n", this->field_8);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTextUniToMB) == 0xC);

#pragma pack(push, 1)
    class MyTextMB : public MyTextBase {
    public:
        struct vtbl_t /*: public MyTextBase::vtbl_t */{
            /*   0*/ LONG(__thiscall *MySharedObj_release)(MyTextMB *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MyTextMB *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *sub_633480)(MyTextMB *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ LONG(__thiscall *j_MySharedObj_release)(MyTextMB *self);  // LONG (__thiscall *)(volatile LONG *this)
            /*  10*/ LONG(__thiscall *j_MySharedObj_addRef)(MyTextMB *self);  // LONG (__thiscall *)(volatile LONG *this)
        };
        static_assert(sizeof(vtbl_t) == 0x14);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   8*/ char field_8;
        /*   9*/ uint8_t gap_9;
        /*   A*/ __int16 field_A;
        
        virtual ~MyTextMB();
        void dump() {
            printf("field_8: %d\n", this->field_8);
            printf("gap_9: %d\n", this->gap_9);
            printf("field_A: %d\n", this->field_A);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTextMB) == 0xC);

#pragma pack(push, 1)
    class MyFontHeader {
    public:
        
        /*   0*/ int f0_magic;
        /*   4*/ char f4_maxWidth;
        /*   5*/ char f5_maxHeight;
        /*   6*/ __int16 f6_offsetCount;
        
        void dump() {
            printf("f0_magic: %d\n", this->f0_magic);
            printf("f4_maxWidth: %d\n", this->f4_maxWidth);
            printf("f5_maxHeight: %d\n", this->f5_maxHeight);
            printf("f6_offsetCount: %d\n", this->f6_offsetCount);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFontHeader) == 0x8);

#pragma pack(push, 1)
    class MyFontEntryHeader {
    public:
        
        /*   0*/ wchar_t f0_chr;
        /*   2*/ uint8_t gap_2[2];
        /*   4*/ int field_4;
        /*   8*/ int f8_dataSize;
        /*   C*/ int fC_flags;
        /*  10*/ __int16 f10_width;
        /*  12*/ __int16 f12_height;
        /*  14*/ char f14_offsX;
        /*  15*/ char f15_offsY;
        /*  16*/ __int16 f16_outerWidth;
        
        void dump() {
            printf("f0_chr: %d\n", this->f0_chr);
            printf("field_4: %d\n", this->field_4);
            printf("f8_dataSize: %d\n", this->f8_dataSize);
            printf("fC_flags: %d\n", this->fC_flags);
            printf("f10_width: %d\n", this->f10_width);
            printf("f12_height: %d\n", this->f12_height);
            printf("f14_offsX: %d\n", this->f14_offsX);
            printf("f15_offsY: %d\n", this->f15_offsY);
            printf("f16_outerWidth: %d\n", this->f16_outerWidth);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFontEntryHeader) == 0x18);

#pragma pack(push, 1)
    class MyStringTexture {
    public:
        
        /*   0*/ int f0_string_MB;
        /*   4*/ MySurface *f4_surf_360C;
        /*   8*/ MySurface *f8_surf_39A4;
        /*   C*/ AABB *fC_aabb;
        /*  10*/ AABB *f10_cur_aabb;
        /*  14*/ int f14_psmth;
        /*  18*/ int f18_0;
        /*  1C*/ char f1C_3;
        /*  1D*/ int f1D_fontObjType;
        /*  21*/ int f21_2;
        
        void dump() {
            printf("f0_string_MB: %d\n", this->f0_string_MB);
            printf("f4_surf_360C: MySurface(%p)\n", this->f4_surf_360C);
            printf("f8_surf_39A4: MySurface(%p)\n", this->f8_surf_39A4);
            printf("fC_aabb: AABB(%p)\n", this->fC_aabb);
            printf("f10_cur_aabb: AABB(%p)\n", this->f10_cur_aabb);
            printf("f14_psmth: %d\n", this->f14_psmth);
            printf("f18_0: %d\n", this->f18_0);
            printf("f1C_3: %d\n", this->f1C_3);
            printf("f1D_fontObjType: %d\n", this->f1D_fontObjType);
            printf("f21_2: %d\n", this->f21_2);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyStringTexture) == 0x25);

#pragma pack(push, 1)
    class MyTRBase_vtable {
    public:
        
        /*   0*/ void *scalar_destructor;
        /*   4*/ void *linesOneTypeEx_doCalcAabb_verticalMiddle;
        /*   8*/ void *linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle;
        /*   C*/ void *linesOneTypeEx_doDrawOrCalcAabb;
        
        void dump() {
            printf("scalar_destructor: void(%p)\n", this->scalar_destructor);
            printf("linesOneTypeEx_doCalcAabb_verticalMiddle: void(%p)\n", this->linesOneTypeEx_doCalcAabb_verticalMiddle);
            printf("linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle: void(%p)\n", this->linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle);
            printf("linesOneTypeEx_doDrawOrCalcAabb: void(%p)\n", this->linesOneTypeEx_doDrawOrCalcAabb);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTRBase_vtable) == 0x10);

#pragma pack(push, 1)
    class MyTRBase {
    public:
        
        
        virtual ~MyTRBase();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTRBase) == 0x4);

#pragma pack(push, 1)
    class MyCharRenderCtx {
    public:
        
        /*   0*/ uint16_t f0_fontChrIdx;
        /*   2*/ uint8_t gap_A[2];
        /*   4*/ uint32_t f4_chrType;
        /*   8*/ char *f8_strPos;
        /*   C*/ FontObjWr *fC_fontObjWr;
        /*  10*/ MyTextFont *f10_textFont;
        /*  14*/ int f14_obj;
        /*  18*/ char field_18;
        /*  19*/ uint8_t gap_21[3];
        /*  1C*/ int f1C_index;
        /*  20*/ int f20_arr;
        /*  24*/ Pos2i *f24_pChrStart;
        
        void dump() {
            printf("f0_fontChrIdx: %d\n", this->f0_fontChrIdx);
            printf("gap_A: %d\n", this->gap_A);
            printf("f4_chrType: %d\n", this->f4_chrType);
            printf("f8_strPos: %s\n", this->f8_strPos);
            printf("fC_fontObjWr: FontObjWr(%p)\n", this->fC_fontObjWr);
            printf("f10_textFont: MyTextFont(%p)\n", this->f10_textFont);
            printf("f14_obj: %d\n", this->f14_obj);
            printf("field_18: %d\n", this->field_18);
            printf("gap_21: %d\n", this->gap_21);
            printf("f1C_index: %d\n", this->f1C_index);
            printf("f20_arr: %d\n", this->f20_arr);
            printf("f24_pChrStart: Pos2i(%p)\n", this->f24_pChrStart);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCharRenderCtx) == 0x28);

#pragma pack(push, 1)
    class MyCRCtx {
    public:
        
        /*   0*/ MyDRBase *f0_myDR;
        /*   4*/ MyCharRenderCtx f4_saved;
        /*  2C*/ MyCharRenderCtx f2C_activeCtx;
        /*  54*/ int f54_chrType;
        /*  58*/ __int16 f58_visitedChars;
        /*  5A*/ uint8_t gap_5E[2];
        
        void dump() {
            printf("f0_myDR: MyDRBase(%p)\n", this->f0_myDR);
            printf("f54_chrType: %d\n", this->f54_chrType);
            printf("f58_visitedChars: %d\n", this->f58_visitedChars);
            printf("gap_5E: %d\n", this->gap_5E);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCRCtx) == 0x5C);

#pragma pack(push, 1)
    class MyTRCtx {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ MyCRCtx f4_renderCtx;
        /*  60*/ MyCRCtx f60_activeCtx;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTRCtx) == 0xBC);

#pragma pack(push, 1)
    class MyMultilineRenderCtx {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ MyTRCtx f4_renderCtx;
        /*  C0*/ MyTRCtx fC0_activeCtx;
        /* 17C*/ __int16 field_17C;
        /* 17E*/ __int16 f17E_linesCount;
        /* 180*/ __int16 f180_renderZero;
        /* 182*/ __int16 _end_f182;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_17C: %d\n", this->field_17C);
            printf("f17E_linesCount: %d\n", this->f17E_linesCount);
            printf("f180_renderZero: %d\n", this->f180_renderZero);
            printf("_end_f182: %d\n", this->_end_f182);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyMultilineRenderCtx) == 0x184);

#pragma pack(push, 1)
    class MyTRCtx2Sub {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ uint32_t field_4;
        /*   8*/ uint32_t field_8;
        /*   C*/ uint32_t field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ char field_18;
        /*  19*/ uint8_t gap_19[3];
        /*  1C*/ int field_1C;
        /*  20*/ int field_20;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("gap_19: %d\n", this->gap_19);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTRCtx2Sub) == 0x24);

#pragma pack(push, 1)
    class MyTRArgs {
    public:
        
        /*   0*/ MyCRBase *f0_myCR;
        /*   4*/ MyMultilineRenderCtx f4_renderCtx;
        /* 188*/ MyMultilineRenderCtx f188_activeCtx;
        /* 30C*/ __int16 f30C_linesCount;
        
        void dump() {
            printf("f0_myCR: MyCRBase(%p)\n", this->f0_myCR);
            printf("f30C_linesCount: %d\n", this->f30C_linesCount);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTRArgs) == 0x30E);

#pragma pack(push, 1)
    class MyCRBase_vtable {
    public:
        
        /*   0*/ void *scalar_destructor;
        /*   4*/ void *chars_doCalcAabbInMiddle;
        /*   8*/ void *chars_doCalcAabbAndRenderInMiddle;
        
        void dump() {
            printf("scalar_destructor: void(%p)\n", this->scalar_destructor);
            printf("chars_doCalcAabbInMiddle: void(%p)\n", this->chars_doCalcAabbInMiddle);
            printf("chars_doCalcAabbAndRenderInMiddle: void(%p)\n", this->chars_doCalcAabbAndRenderInMiddle);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCRBase_vtable) == 0xC);

#pragma pack(push, 1)
    class MyCRBase {
    public:
        
        
        virtual ~MyCRBase();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCRBase) == 0x4);

#pragma pack(push, 1)
    class MyDRBase_vtable {
    public:
        
        /*   0*/ void *scalar_destructor;
        /*   4*/ void *doCalcAabbOrRender_0;
        /*   8*/ void *doRender;
        /*   C*/ void *doCalcAabbOrRender;
        /*  10*/ void *MyDR67B9E0_sub_62E8C0;
        
        void dump() {
            printf("scalar_destructor: void(%p)\n", this->scalar_destructor);
            printf("doCalcAabbOrRender_0: void(%p)\n", this->doCalcAabbOrRender_0);
            printf("doRender: void(%p)\n", this->doRender);
            printf("doCalcAabbOrRender: void(%p)\n", this->doCalcAabbOrRender);
            printf("MyDR67B9E0_sub_62E8C0: void(%p)\n", this->MyDR67B9E0_sub_62E8C0);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDRBase_vtable) == 0x14);

#pragma pack(push, 1)
    class MyDRBase {
    public:
        
        
        virtual ~MyDRBase();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDRBase) == 0x4);

#pragma pack(push, 1)
    class MyFontRendererBase_vtable {
    public:
        
        /*   0*/ void *scalar_destructor;
        /*   4*/ void *renderChar;
        /*   8*/ void *render_r5g5b5a1;
        /*   C*/ void *render_r5g6b5;
        /*  10*/ void *render_r4g4b4a4;
        /*  14*/ void *render_6319F0;
        /*  18*/ void *render_r8g8b8a8;
        
        void dump() {
            printf("scalar_destructor: void(%p)\n", this->scalar_destructor);
            printf("renderChar: void(%p)\n", this->renderChar);
            printf("render_r5g5b5a1: void(%p)\n", this->render_r5g5b5a1);
            printf("render_r5g6b5: void(%p)\n", this->render_r5g6b5);
            printf("render_r4g4b4a4: void(%p)\n", this->render_r4g4b4a4);
            printf("render_6319F0: void(%p)\n", this->render_6319F0);
            printf("render_r8g8b8a8: void(%p)\n", this->render_r8g8b8a8);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFontRendererBase_vtable) == 0x1C);

#pragma pack(push, 1)
    class MyFontRendererBase {
    public:
        
        
        virtual ~MyFontRendererBase();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyFontRendererBase) == 0x4);

#pragma pack(push, 1)
    class CharImageReader {
    public:
        
        /*   0*/ bool f0_isLowByte;
        /*   1*/ uint8_t gap_1[3];
        /*   4*/ int f4_charBuf;
        
        void dump() {
            printf("f0_isLowByte: %d\n", this->f0_isLowByte);
            printf("gap_1: %d\n", this->gap_1);
            printf("f4_charBuf: %d\n", this->f4_charBuf);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CharImageReader) == 0x8);

#pragma pack(push, 1)
    class CharImageWriter {
    public:
        
        /*   0*/ uint32_t f0_buf;
        /*   4*/ bool f4_isLowByte;
        /*   5*/ char f5_calcOnly;
        /*   6*/ uint8_t gap_6[2];
        /*   8*/ uint32_t f8_pixCount;
        
        void dump() {
            printf("f0_buf: %d\n", this->f0_buf);
            printf("f4_isLowByte: %d\n", this->f4_isLowByte);
            printf("f5_calcOnly: %d\n", this->f5_calcOnly);
            printf("gap_6: %d\n", this->gap_6);
            printf("f8_pixCount: %d\n", this->f8_pixCount);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CharImageWriter) == 0xC);

#pragma pack(push, 1)
    class CharRenderCtx {
    public:
        
        /*   0*/ Pos2i *f0_pos;
        /*   4*/ uint32_t f4_buf;
        /*   8*/ uint32_t f8_half_width;
        /*   C*/ AABB *fC_area;
        /*  10*/ FontObj *f10_fontObj;
        /*  14*/ char f14_width;
        /*  15*/ uint8_t gap_15[3];
        
        void dump() {
            printf("f0_pos: Pos2i(%p)\n", this->f0_pos);
            printf("f4_buf: %d\n", this->f4_buf);
            printf("f8_half_width: %d\n", this->f8_half_width);
            printf("fC_area: AABB(%p)\n", this->fC_area);
            printf("f10_fontObj: FontObj(%p)\n", this->f10_fontObj);
            printf("f14_width: %d\n", this->f14_width);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CharRenderCtx) == 0x18);

#pragma pack(push, 1)
    class MySignalBase {
    public:
        struct vtbl_t {
            /*   0*/ LONG(__thiscall *MySharedObj_release)(MySignalBase *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MySignalBase *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *AsyncThing___scalar_deleting_destructor_uint)(MySignalBase *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ void(__stdcall *__purecall)();  // void (__stdcall __noreturn *)()
            /*  10*/ uint32_t *(__thiscall *MyDirectInput_recreateEvent)(MySignalBase *self, uint32_t *);  // int *(__thiscall *)(MyDxKeyboard *this, int *a2)
        };
        static_assert(sizeof(vtbl_t) == 0x14);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint8_t gap_4[4];
        /*   8*/ int f8_hEvent;
        /*   C*/ ControlKeysUpdater *f8_pcontrolkeys;
        
        virtual ~MySignalBase();
        void dump() {
            printf("gap_4: %d\n", this->gap_4);
            printf("f8_hEvent: %d\n", this->f8_hEvent);
            printf("f8_pcontrolkeys: ControlKeysUpdater(%p)\n", this->f8_pcontrolkeys);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MySignalBase) == 0x10);

#pragma pack(push, 1)
    class MyDxDevice {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *scalar_destructor)(MyDxDevice *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ GUID *(__thiscall *getGuid)(MyDxDevice *self);  // GUID *(__thiscall *)(MyDxDevice *)
            /*   8*/ const DIDATAFORMAT *(__thiscall *getDataFormat)(MyDxDevice *self);  // LPCDIDATAFORMAT (__thiscall *)(MyDxDevice *)
        };
        static_assert(sizeof(vtbl_t) == 0xC);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int f4_nextCoopLevel;
        /*   8*/ int f8_curCoopLevel;
        /*   C*/ IDirectInputDeviceA *fC_device;
        /*  10*/ int f10_isWindowActive;
        /*  14*/ int f14_hInstance;
        /*  18*/ HWND__ *f18_curHWnd;
        /*  1C*/ HWND__ *f1C_nextHWnd;
        
        virtual ~MyDxDevice();
        void dump() {
            printf("f4_nextCoopLevel: %d\n", this->f4_nextCoopLevel);
            printf("f8_curCoopLevel: %d\n", this->f8_curCoopLevel);
            printf("fC_device: IDirectInputDeviceA(%p)\n", this->fC_device);
            printf("f10_isWindowActive: %d\n", this->f10_isWindowActive);
            printf("f14_hInstance: %d\n", this->f14_hInstance);
            printf("f18_curHWnd: HWND__(%p)\n", this->f18_curHWnd);
            printf("f1C_nextHWnd: HWND__(%p)\n", this->f1C_nextHWnd);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDxDevice) == 0x20);

#pragma pack(push, 1)
    class MyDirectInput : public MySignalBase {
    public:
        struct vtbl_t /*: public MySignalBase::vtbl_t */{
            /*   0*/ LONG(__thiscall *MySharedObj_release)(MyDirectInput *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MyDirectInput *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *MyDirectInputSu1___scalar_deleting_destructor_uint)(MyDirectInput *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ uint32_t *(__thiscall *sub_6005B0)(MyDirectInput *self);  // int *(__thiscall *)(_DWORD *this)
            /*  10*/ uint32_t *(__thiscall *MyDirectInputSu1_createObject)(MyDirectInput *self, uint32_t *);  // int *(__thiscall *)(MyDxKeyboard *this, HRESULT *pResult)
            /*  14*/ int(__thiscall *handleData)(MyDirectInput *self, int);  // int (__thiscall *)(MyDirectInput *, int)
        };
        static_assert(sizeof(vtbl_t) == 0x18);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  10*/ MyDxDevice dx_device;
        /*  30*/ LPDIDEVICEOBJECTDATA_10 *f2C_pdevObjArr;
        
        virtual ~MyDirectInput();
        void dump() {
            printf("f2C_pdevObjArr: LPDIDEVICEOBJECTDATA_10(%p)\n", this->f2C_pdevObjArr);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDirectInput) == 0x34);

#pragma pack(push, 1)
    class MouseRgbDxActionList {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *Obj6728FC_scalar_destructor)(MouseRgbDxActionList *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyLList2 f4_list;
        
        virtual ~MouseRgbDxActionList();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MouseRgbDxActionList) == 0x14);

#pragma pack(push, 1)
    class MyDxKeyboard : public MyDirectInput {
    public:
        struct vtbl_t /*: public MyDirectInput::vtbl_t */{
            /*   0*/ LONG(__thiscall *MySharedObj_release)(MyDxKeyboard *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MyDxKeyboard *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *scalar_destructor)(MyDxKeyboard *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ uint32_t *(__thiscall *sub_6005B0)(MyDxKeyboard *self);  // int *(__thiscall *)(_DWORD *this)
            /*  10*/ uint32_t *(__thiscall *DirectInput_init_0)(MyDxKeyboard *self, uint32_t *);  // int *(__thiscall *)(int this, int *a2)
            /*  14*/ int(__thiscall *sub_5DE260)(MyDxKeyboard *self, int);  // int (__thiscall *)(int this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x18);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  34*/ MouseRgbDxActionList f34_listKb;
        
        virtual ~MyDxKeyboard();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDxKeyboard) == 0x48);

#pragma pack(push, 1)
    class DIDATAFORMAT {
    public:
        
        /*   0*/ DWORD dwSize;
        /*   4*/ DWORD dwObjSize;
        /*   8*/ DWORD dwFlags;
        /*   C*/ DWORD dwDataSize;
        /*  10*/ DWORD dwNumObjs;
        /*  14*/ _DIOBJECTDATAFORMAT *rgodf;
        
        void dump() {
            printf("dwSize: %d\n", this->dwSize);
            printf("dwObjSize: %d\n", this->dwObjSize);
            printf("dwFlags: %d\n", this->dwFlags);
            printf("dwDataSize: %d\n", this->dwDataSize);
            printf("dwNumObjs: %d\n", this->dwNumObjs);
            printf("rgodf: _DIOBJECTDATAFORMAT(%p)\n", this->rgodf);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DIDATAFORMAT) == 0x18);

#pragma pack(push, 1)
    class DIOBJECTDATAFORMAT {
    public:
        
        /*   0*/ const GUID *pguid;
        /*   4*/ DWORD dwOfs;
        /*   8*/ DWORD dwType;
        /*   C*/ DWORD dwFlags;
        
        void dump() {
            printf("pguid: const GUID(%p)\n", this->pguid);
            printf("dwOfs: %d\n", this->dwOfs);
            printf("dwType: %d\n", this->dwType);
            printf("dwFlags: %d\n", this->dwFlags);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DIOBJECTDATAFORMAT) == 0x10);

#pragma pack(push, 1)
    class DIPROPHEADER {
    public:
        
        /*   0*/ DWORD dwSize;
        /*   4*/ DWORD dwHeaderSize;
        /*   8*/ DWORD dwObj;
        /*   C*/ DWORD dwHow;
        
        void dump() {
            printf("dwSize: %d\n", this->dwSize);
            printf("dwHeaderSize: %d\n", this->dwHeaderSize);
            printf("dwObj: %d\n", this->dwObj);
            printf("dwHow: %d\n", this->dwHow);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DIPROPHEADER) == 0x10);

#pragma pack(push, 1)
    class DIPROPDWORD {
    public:
        
        /*   0*/ DIPROPHEADER diph;
        /*  10*/ DWORD dwData;
        
        void dump() {
            printf("dwData: %d\n", this->dwData);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DIPROPDWORD) == 0x14);

#pragma pack(push, 1)
    class MyWindowMsgs_vtable {
    public:
        
        /*   0*/ void *MySharedObj_release;
        /*   4*/ void *MySharedObj_addRef;
        /*   8*/ void *scalar_destructor;
        /*   C*/ void *sub_5DB130;
        /*  10*/ void *MySignalBase_createObject;
        
        void dump() {
            printf("MySharedObj_release: void(%p)\n", this->MySharedObj_release);
            printf("MySharedObj_addRef: void(%p)\n", this->MySharedObj_addRef);
            printf("scalar_destructor: void(%p)\n", this->scalar_destructor);
            printf("sub_5DB130: void(%p)\n", this->sub_5DB130);
            printf("MySignalBase_createObject: void(%p)\n", this->MySignalBase_createObject);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyWindowMsgs_vtable) == 0x14);

#pragma pack(push, 1)
    class Vtable_672434 {
    public:
        
        /*   0*/ void *sub_5BBE10;
        
        void dump() {
            printf("sub_5BBE10: void(%p)\n", this->sub_5BBE10);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Vtable_672434) == 0x4);

#pragma pack(push, 1)
    class WndMsgDxActionList {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *Obj672450_scalar_destructor)(WndMsgDxActionList *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyLList2 f4_list;
        
        virtual ~WndMsgDxActionList();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WndMsgDxActionList) == 0x14);

#pragma pack(push, 1)
    class MyWindowMsgs : public MySignalBase {
    public:
        
        /*  10*/ WndMsgDxActionList f10_listWm;
        /*  24*/ PtrArrList f24_handleArr;
        /*  34*/ _RTL_CRITICAL_SECTION *f34_pCritSection;
        
        virtual ~MyWindowMsgs();
        void dump() {
            printf("f34_pCritSection: _RTL_CRITICAL_SECTION(%p)\n", this->f34_pCritSection);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyWindowMsgs) == 0x38);

#pragma pack(push, 1)
    class Vtable_6728FC {
    public:
        
        /*   0*/ void *sub_5DDCB0;
        
        void dump() {
            printf("sub_5DDCB0: void(%p)\n", this->sub_5DDCB0);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Vtable_6728FC) == 0x4);

#pragma pack(push, 1)
    class MouseXyzDxActionList {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *scalar_destructor)(MouseXyzDxActionList *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyLList2 f4_list;
        
        virtual ~MouseXyzDxActionList();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MouseXyzDxActionList) == 0x14);

#pragma pack(push, 1)
    class MyDxMouse : public MyDirectInput {
    public:
        struct vtbl_t /*: public MyDirectInput::vtbl_t */{
            /*   0*/ LONG(__thiscall *MySharedObj_release)(MyDxMouse *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MyDxMouse *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *scalar_destructor)(MyDxMouse *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ uint32_t *(__thiscall *sub_6005B0)(MyDxMouse *self);  // int *(__thiscall *)(_DWORD *this)
            /*  10*/ uint32_t *(__thiscall *MyDirectInput_createObject)(MyDxMouse *self, uint32_t *);  // int *(__thiscall *)(MyDirectInput *this, HRESULT *pResult)
            /*  14*/ int(__thiscall *MyDxMouse_5DDA90)(MyDxMouse *self, int);  // int (__thiscall *)(int this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x18);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  34*/ MouseXyzDxActionList f34_listXYZ;
        /*  48*/ MouseRgbDxActionList f48_listRGB;
        
        virtual ~MyDxMouse();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDxMouse) == 0x5C);

#pragma pack(push, 1)
    class Obj672844 {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *Obj672844_scalar_destructor)(Obj672844 *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ Obj6723B8 *f4_pobj;
        /*   8*/ void *f8_hSema;
        /*   C*/ int fC_hThread;
        /*  10*/ char f10;
        /*  11*/ char f11_aBool;
        /*  12*/ char f12__doDrawCursor;
        /*  13*/ uint8_t f13;
        /*  14*/ int f14_timestamp;
        /*  18*/ int f18_timestampDelta;
        /*  1C*/ CursorDrawer *f1C_cursorDrawer;
        /*  20*/ Pos2i *f20_pMousePos;
        
        virtual ~Obj672844();
        void dump() {
            printf("f4_pobj: Obj6723B8(%p)\n", this->f4_pobj);
            printf("f8_hSema: void(%p)\n", this->f8_hSema);
            printf("fC_hThread: %d\n", this->fC_hThread);
            printf("f10: %d\n", this->f10);
            printf("f11_aBool: %d\n", this->f11_aBool);
            printf("f12__doDrawCursor: %d\n", this->f12__doDrawCursor);
            printf("f13: %d\n", this->f13);
            printf("f14_timestamp: %d\n", this->f14_timestamp);
            printf("f18_timestampDelta: %d\n", this->f18_timestampDelta);
            printf("f1C_cursorDrawer: CursorDrawer(%p)\n", this->f1C_cursorDrawer);
            printf("f20_pMousePos: Pos2i(%p)\n", this->f20_pMousePos);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj672844) == 0x24);

#pragma pack(push, 1)
    class MyCb6723D0 {
    public:
        struct vtbl_t {
            /*   0*/ int(__thiscall *call)(MyCb6723D0 *self, int, uint32_t *);  // int (__thiscall *)(MyCb6723D0 *this, int a2, int *a3)
            /*   4*/ void *(__thiscall *scalar_destructor)(MyCb6723D0 *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x8);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyCbHandle f4_cbhandle;
        /*  10*/ Obj672844 f10_obj;
        
        virtual ~MyCb6723D0();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCb6723D0) == 0x34);

#pragma pack(push, 1)
    class ControlSurf {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *sub_5F80D0)(ControlSurf *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyDdSurfaceEx f4_ddSurfEx;
        /*  54*/ int f54_isSurfCreated;
        /*  58*/ int f58__isSurfBusy;
        
        virtual ~ControlSurf();
        void dump() {
            printf("f54_isSurfCreated: %d\n", this->f54_isSurfCreated);
            printf("f58__isSurfBusy: %d\n", this->f58__isSurfBusy);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(ControlSurf) == 0x5C);

#pragma pack(push, 1)
    class CursorDrawer {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *Obj672854_scalar_destructor)(CursorDrawer *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint8_t f4_00;
        /*   5*/ char f5_isCursorsCreated;
        /*   6*/ char f6_00;
        /*   7*/ char f7_ff;
        /*   8*/ char f8_00;
        /*   9*/ char f9_ff;
        /*   A*/ char fA_00;
        /*   B*/ uint8_t fB_00;
        /*   C*/ Pos2i fC_cursorSurfSize;
        /*  14*/ Pos2i f14_cursorSize;
        /*  1C*/ uint32_t f1C_idx;
        /*  20*/ uint32_t f20_prevIdx;
        /*  24*/ uint32_t f24_bpt_forceDraw;
        /*  28*/ uint32_t f28_bpt_isCursorAabbIntersectsWithPrevPos;
        /*  2C*/ int f2C_doCursorRedraw;
        /*  30*/ AABB f30_screenAabb;
        /*  40*/ Pos2i f40_mouseToCursorOffs;
        /*  48*/ Pos2i f48_mousePos;
        /*  50*/ ControlSurf f50_cursorSurf[3];
        /* 164*/ AABB f164_ingameCursorFullSize[3];
        /* 194*/ AABB f194_cursorSizeAabb[3];
        /* 1C4*/ AABB f1C4_cursorAabbScreenCut[3];
        /* 1F4*/ AABB f1F4_bpt_cursorIntersection[3];
        /* 224*/ MyDdSurfaceEx * f224_pScreen[3];
        
        virtual ~CursorDrawer();
        void dump() {
            printf("f4_00: %d\n", this->f4_00);
            printf("f5_isCursorsCreated: %d\n", this->f5_isCursorsCreated);
            printf("f6_00: %d\n", this->f6_00);
            printf("f7_ff: %d\n", this->f7_ff);
            printf("f8_00: %d\n", this->f8_00);
            printf("f9_ff: %d\n", this->f9_ff);
            printf("fA_00: %d\n", this->fA_00);
            printf("fB_00: %d\n", this->fB_00);
            printf("f1C_idx: %d\n", this->f1C_idx);
            printf("f20_prevIdx: %d\n", this->f20_prevIdx);
            printf("f24_bpt_forceDraw: %d\n", this->f24_bpt_forceDraw);
            printf("f28_bpt_isCursorAabbIntersectsWithPrevPos: %d\n", this->f28_bpt_isCursorAabbIntersectsWithPrevPos);
            printf("f2C_doCursorRedraw: %d\n", this->f2C_doCursorRedraw);
            printf("f224_pScreen: %d\n", this->f224_pScreen);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CursorDrawer) == 0x230);

#pragma pack(push, 1)
    class MyLList_fields {
    public:
        
        /*   0*/ MyLListEntry *f0_first;
        /*   4*/ MyLListEntry *f4_last;
        /*   8*/ int f8_count;
        
        void dump() {
            printf("f0_first: MyLListEntry(%p)\n", this->f0_first);
            printf("f4_last: MyLListEntry(%p)\n", this->f4_last);
            printf("f8_count: %d\n", this->f8_count);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyLList_fields) == 0xC);

#pragma pack(push, 1)
    class SharedArr79DBD0List {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *SharedArr79DBD0List_scalar_destructor)(SharedArr79DBD0List *self, char);  // void *(__thiscall *)(void *Block, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ MyLList_fields f4_list;
        
        virtual ~SharedArr79DBD0List();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SharedArr79DBD0List) == 0x10);

#pragma pack(push, 1)
    class SharedArr79DBD0 {
    public:
        
        /*   0*/ SharedArr79DBD0List f0_arr[6];
        /*  60*/ _RTL_CRITICAL_SECTION *f60_crit_section;
        /*  64*/ int field_64;
        
        void dump() {
            printf("f60_crit_section: _RTL_CRITICAL_SECTION(%p)\n", this->f60_crit_section);
            printf("field_64: %d\n", this->field_64);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SharedArr79DBD0) == 0x68);

#pragma pack(push, 1)
    class SharedArr79DBD0Item {
    public:
        
        /*   0*/ void *f0_obj;
        /*   4*/ void *f4_fun;
        
        void dump() {
            printf("f0_obj: void(%p)\n", this->f0_obj);
            printf("f4_fun: void(%p)\n", this->f4_fun);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SharedArr79DBD0Item) == 0x8);

#pragma pack(push, 1)
    class MyCallback {
    public:
        struct vtbl_t {
            /*   0*/ int(__thiscall *call)(MyCallback *self, int, void *);  // int (__thiscall *)(MyCallback *, int, void *)
            /*   4*/ void *(__thiscall *Obj6723E0_scalar_destructor)(MyCallback *self, char);  // std::locale::facet *(__thiscall *)(std::locale::facet *this, char a2)
        };
        static_assert(sizeof(vtbl_t) == 0x8);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        
        virtual ~MyCallback();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCallback) == 0x4);

#pragma pack(push, 1)
    class ControlKeysUpdater : public MyComEx {
    public:
        struct vtbl_t : public MyComEx::vtbl_t {
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ MyCallback fC_mycb;
        /*  10*/ MyCbHandle f10_cbhandle;
        /*  1C*/ MyDirectInput *f1C_dinput;
        /*  20*/ int f20_controlKey_flags;
        
        virtual ~ControlKeysUpdater();
        void dump() {
            printf("f1C_dinput: MyDirectInput(%p)\n", this->f1C_dinput);
            printf("f20_controlKey_flags: %d\n", this->f20_controlKey_flags);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(ControlKeysUpdater) == 0x24);

#pragma pack(push, 1)
    class Event5_keyboard {
    public:
        
        /*   0*/ int f0_v11;
        /*   4*/ MyDxDevice *f4_dev;
        
        void dump() {
            printf("f0_v11: %d\n", this->f0_v11);
            printf("f4_dev: MyDxDevice(%p)\n", this->f4_dev);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Event5_keyboard) == 0x8);

#pragma pack(push, 1)
    class MyDxInputStateCb_vtbl {
    public:
        
        /*   0*/ void *sub_5DB630;
        /*   4*/ void *sub_5DB7B0;
        
        void dump() {
            printf("sub_5DB630: void(%p)\n", this->sub_5DB630);
            printf("sub_5DB7B0: void(%p)\n", this->sub_5DB7B0);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDxInputStateCb_vtbl) == 0x8);

#pragma pack(push, 1)
    class MyDxInputState : public MyComEx {
    public:
        struct vtbl_t : public MyComEx::vtbl_t {
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ MyDxInputStateCb_vtbl *fC_cb;
        /*  10*/ MyCbHandle f10_cbhandle;
        /*  1C*/ uint8_t f1C_keyboardState[240];
        /* 10C*/ int f10C_rgbButtons;
        /* 110*/ char field_110[12];
        /* 11C*/ MyDxKeyboard *f11C_dxkeyboard;
        /* 120*/ MyDxMouse *f120_dxmouse;
        
        virtual ~MyDxInputState();
        void dump() {
            printf("fC_cb: MyDxInputStateCb_vtbl(%p)\n", this->fC_cb);
            printf("f1C_keyboardState: %d\n", this->f1C_keyboardState);
            printf("f10C_rgbButtons: %d\n", this->f10C_rgbButtons);
            printf("field_110: %d\n", this->field_110);
            printf("f11C_dxkeyboard: MyDxKeyboard(%p)\n", this->f11C_dxkeyboard);
            printf("f120_dxmouse: MyDxMouse(%p)\n", this->f120_dxmouse);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDxInputState) == 0x124);

#pragma pack(push, 1)
    class LPDIDEVICEOBJECTDATA_10 {
    public:
        
        /*   0*/ int f0_dwOfs;
        /*   4*/ int f4_dwData;
        /*   8*/ int f8_dwTimeStamp;
        /*   C*/ int fC_dwSequence;
        
        void dump() {
            printf("f0_dwOfs: %d\n", this->f0_dwOfs);
            printf("f4_dwData: %d\n", this->f4_dwData);
            printf("f8_dwTimeStamp: %d\n", this->f8_dwTimeStamp);
            printf("fC_dwSequence: %d\n", this->fC_dwSequence);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(LPDIDEVICEOBJECTDATA_10) == 0x10);

#pragma pack(push, 1)
    class DIMOUSESTATE {
    public:
        
        /*   0*/ LONG lX;
        /*   4*/ LONG lY;
        /*   8*/ LONG lZ;
        /*   C*/ BYTE rgbButtons[4];
        
        void dump() {
            printf("lX: %d\n", this->lX);
            printf("lY: %d\n", this->lY);
            printf("lZ: %d\n", this->lZ);
            printf("rgbButtons: %d\n", this->rgbButtons);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DIMOUSESTATE) == 0x10);

#pragma pack(push, 1)
    class DxAction {
    public:
        struct vtbl_t {
            /*   0*/ int(__thiscall *applyToState)(DxAction *self, MyDxInputState *);  // int (__thiscall *)(DxAction *this, MyDxInputState *)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
        /*   4*/ int f4_timestamp;
        /*   8*/ int f8_isNotHandled;
        
        virtual ~DxAction();
        void dump() {
            printf("f4_timestamp: %d\n", this->f4_timestamp);
            printf("f8_isNotHandled: %d\n", this->f8_isNotHandled);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DxAction) == 0xC);

#pragma pack(push, 1)
    class WndMsgDxAction : public DxAction {
    public:
        struct vtbl_t /*: public DxAction::vtbl_t */{
            /*   0*/ int(__thiscall *Obj67244C_sub_5BBA00)(WndMsgDxAction *self, int);  // int (__thiscall *)(void *this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ int fC_uMsg;
        /*  10*/ int f10_wParam;
        
        virtual ~WndMsgDxAction();
        void dump() {
            printf("fC_uMsg: %d\n", this->fC_uMsg);
            printf("f10_wParam: %d\n", this->f10_wParam);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(WndMsgDxAction) == 0x14);

#pragma pack(push, 1)
    class MyInputListenersHolder : public MyComEx {
    public:
        struct vtbl_t /*: public MyComEx::vtbl_t */{
            /*   0*/ LONG(__thiscall *MySharedObj_release)(MyInputListenersHolder *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MyInputListenersHolder *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *Obj6723E8___scalar_deleting_destructor_uint)(MyInputListenersHolder *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int a1)
            /*  10*/ void *(__thiscall *sub_5DC9E0)(MyInputListenersHolder *self, int);  // int (__cdecl *(__thiscall *)(_DWORD *this, int a2))(int, _DWORD, _DWORD, int)
            /*  14*/ int(__thiscall *MySharedObj_fun3)(MyInputListenersHolder *self, int);  // int (__thiscall *)(MyComEx *this, int a2)
            /*  18*/ void(__thiscall *sub_5DC920)(MyInputListenersHolder *self, uint32_t *);  // void (__thiscall *)(_DWORD *this, _DWORD *a2)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ StaticListeners *fC_static_listeners;
        /*  10*/ CComponent *f10_ccomponent;
        
        virtual ~MyInputListenersHolder();
        void dump() {
            printf("fC_static_listeners: StaticListeners(%p)\n", this->fC_static_listeners);
            printf("f10_ccomponent: CComponent(%p)\n", this->f10_ccomponent);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyInputListenersHolder) == 0x14);

#pragma pack(push, 1)
    class MyCollectDxAction_Action {
    public:
        
        /*   0*/ char type;
        /*   1*/ char KeyCode;
        /*   2*/ __int16 uMsg_isPressed;
        /*   4*/ int wParam_xy;
        /*   8*/ int btnPressFlags;
        
        void dump() {
            printf("type: %d\n", this->type);
            printf("KeyCode: %d\n", this->KeyCode);
            printf("uMsg_isPressed: %d\n", this->uMsg_isPressed);
            printf("wParam_xy: %d\n", this->wParam_xy);
            printf("btnPressFlags: %d\n", this->btnPressFlags);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCollectDxAction_Action) == 0xC);

#pragma pack(push, 1)
    class MyCollectDxAction : public MyComEx {
    public:
        struct vtbl_t /*: public MyComEx::vtbl_t */{
            /*   0*/ LONG(__thiscall *MySharedObj_release)(MyCollectDxAction *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   4*/ LONG(__thiscall *MySharedObj_addRef)(MyCollectDxAction *self);  // LONG (__thiscall *)(MySharedObj *this)
            /*   8*/ void *(__thiscall *Obj672458_scalar_destructor)(MyCollectDxAction *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   C*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int a1)
            /*  10*/ int(__thiscall *sub_5DCB20)(MyCollectDxAction *self, int);  // int (__thiscall *)(int this, int a2)
            /*  14*/ int(__thiscall *MySharedObj_fun3)(MyCollectDxAction *self, int);  // int (__thiscall *)(MyComEx *this, int a2)
            /*  18*/ int(__thiscall *sub_5DCAE0)(MyCollectDxAction *self, int);  // int (__thiscall *)(int this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ MyCollectDxAction_Action fC_act;
        
        virtual ~MyCollectDxAction();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCollectDxAction) == 0x18);

#pragma pack(push, 1)
    class MouseRgbDxAction : public DxAction {
    public:
        struct vtbl_t : public DxAction::vtbl_t {
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ uint8_t gap_C[4];
        /*  10*/ uint32_t f10_KeyCode_F0toF3;
        /*  14*/ Pos2i f14_pos;
        /*  1C*/ int f1C_data;
        /*  20*/ int f20_btnPressFlags;
        
        virtual ~MouseRgbDxAction();
        void dump() {
            printf("gap_C: %d\n", this->gap_C);
            printf("f10_KeyCode_F0toF3: %d\n", this->f10_KeyCode_F0toF3);
            printf("f1C_data: %d\n", this->f1C_data);
            printf("f20_btnPressFlags: %d\n", this->f20_btnPressFlags);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MouseRgbDxAction) == 0x24);

#pragma pack(push, 1)
    class MouseXyzDxAction : public DxAction {
    public:
        struct vtbl_t : public DxAction::vtbl_t {
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ int fC_actedAxe;
        /*  10*/ int f10_value;
        
        virtual ~MouseXyzDxAction();
        void dump() {
            printf("fC_actedAxe: %d\n", this->fC_actedAxe);
            printf("f10_value: %d\n", this->f10_value);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MouseXyzDxAction) == 0x14);

#pragma pack(push, 1)
    class CNetworkComponent : public CComponent {
    public:
        struct vtbl_t /*: public CComponent::vtbl_t */{
            /*   0*/ void *(__thiscall *CNetworkComponent__fun_5274C0)(CNetworkComponent *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__thiscall *CNetworkComponent__fun_527530)(CNetworkComponent *self);  // int (__thiscall *)(_DWORD *this)
            /*   8*/ void(__thiscall *ret_void_0args_0)(CNetworkComponent *self);  // void (__thiscall *)(void *this)
            /*   C*/ int(__thiscall *CNetworkComponent__fun_527560)(CNetworkComponent *self);  // int (__thiscall *)(_DWORD *this)
            /*  10*/ int(__thiscall *CNetworkComponent__fun_527750)(CNetworkComponent *self);  // int (__thiscall *)(int *this)
            /*  14*/ int(__thiscall *CNetworkComponent__fun_527790)(CNetworkComponent *self);  // int (__thiscall *)(_DWORD *this)
        };
        static_assert(sizeof(vtbl_t) == 0x18);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ StaticListeners fC_static_listeners;
        /*  20*/ MyStaticStruct f20_obj;
        
        virtual ~CNetworkComponent();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CNetworkComponent) == 0x2C);

#pragma pack(push, 1)
    class TbWType_t_TbPalette_t__vtbl {
    public:
        
        /*   0*/ void *loc_401150;
        /*   4*/ void *TbWItemBase__fun_5B2D50;
        /*   8*/ void *TbWType__fun_5B2D10;
        /*   C*/ void *TbWType__fun_5B2C70;
        
        void dump() {
            printf("loc_401150: void(%p)\n", this->loc_401150);
            printf("TbWItemBase__fun_5B2D50: void(%p)\n", this->TbWItemBase__fun_5B2D50);
            printf("TbWType__fun_5B2D10: void(%p)\n", this->TbWType__fun_5B2D10);
            printf("TbWType__fun_5B2C70: void(%p)\n", this->TbWType__fun_5B2C70);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(TbWType_t_TbPalette_t__vtbl) == 0x10);

#pragma pack(push, 1)
    class CEntryComponent : public CComponent {
    public:
        struct vtbl_t /*: public CComponent::vtbl_t */{
            /*   0*/ void *(__thiscall *CEntryComponent___scalar_deleting_destructor_uint)(CEntryComponent *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__thiscall *CEntryComponent__fun_4011D0)(CEntryComponent *self);  // int (__thiscall *)(_DWORD *this)
            /*   8*/ void(__thiscall *ret_void_0args_0)(CEntryComponent *self);  // void (__thiscall *)(void *this)
            /*   C*/ int(__thiscall *CEntryComponent__init_console_commands)(CEntryComponent *self);  // int (__thiscall *)(_DWORD *this)
            /*  10*/ int(__thiscall *CEntryComponent__fun_4013E0)(CEntryComponent *self);  // int (__thiscall *)(int *this)
            /*  14*/ int(__thiscall *CEntryComponent__fun_401410)(CEntryComponent *self);  // int (__thiscall *)(_DWORD *this)
        };
        static_assert(sizeof(vtbl_t) == 0x18);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   C*/ StaticListeners fC_static_listeners;
        /*  20*/ TbWType_t_TbPalette_t__vtbl *f20__vftable;
        /*  24*/ int field_24;
        /*  28*/ int field_28;
        /*  2C*/ MyStaticStruct f2C_obj;
        
        virtual ~CEntryComponent();
        void dump() {
            printf("f20__vftable: TbWType_t_TbPalette_t__vtbl(%p)\n", this->f20__vftable);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEntryComponent) == 0x38);

#pragma pack(push, 1)
    class GameObj6A0B00 {
    public:
        
        /*   0*/ __int16 f0_flags;
        /*   2*/ GameObj6A0B00Item *f2_pitems;
        /*   6*/ uint32_t field_6;
        
        void dump() {
            printf("f0_flags: %d\n", this->f0_flags);
            printf("f2_pitems: GameObj6A0B00Item(%p)\n", this->f2_pitems);
            printf("field_6: %d\n", this->field_6);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(GameObj6A0B00) == 0xA);

#pragma pack(push, 1)
    class GameObj6A0B00Item {
    public:
        
        /*   0*/ uint16_t field_0;
        /*   2*/ unsigned __int16 field_2;
        /*   4*/ int field_4;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_2: %d\n", this->field_2);
            printf("field_4: %d\n", this->field_4);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(GameObj6A0B00Item) == 0x8);

#pragma pack(push, 1)
    class CvtItem {
    public:
        
        /*   0*/ int f0_code;
        /*   4*/ char f4_acode[8];
        /*   C*/ void *fC_name;
        /*  10*/ char f10_short_name[4];
        /*  14*/ void *f14_country;
        /*  18*/ char f18_short_country[4];
        /*  1C*/ char f1C_acode2[8];
        /*  24*/ char f24_acode3[8];
        
        void dump() {
            printf("f0_code: %d\n", this->f0_code);
            printf("f4_acode: %d\n", this->f4_acode);
            printf("fC_name: void(%p)\n", this->fC_name);
            printf("f10_short_name: %d\n", this->f10_short_name);
            printf("f14_country: void(%p)\n", this->f14_country);
            printf("f18_short_country: %d\n", this->f18_short_country);
            printf("f1C_acode2: %d\n", this->f1C_acode2);
            printf("f24_acode3: %d\n", this->f24_acode3);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CvtItem) == 0x2C);

#pragma pack(push, 1)
    class Item5B06D0 {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ int f4_flags;
        /*   8*/ int field_8;
        /*   C*/ int fC_bitf;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4_flags: %d\n", this->f4_flags);
            printf("field_8: %d\n", this->field_8);
            printf("fC_bitf: %d\n", this->fC_bitf);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Item5B06D0) == 0x10);

#pragma pack(push, 1)
    class StubStruc6787B8 {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        /*  1C*/ int field_1C;
        /*  20*/ int field_20;
        /*  24*/ int field_24;
        /*  28*/ int field_28;
        /*  2C*/ int field_2C;
        /*  30*/ int field_30;
        /*  34*/ int field_34;
        /*  38*/ int field_38;
        /*  3C*/ int field_3C;
        /*  40*/ int field_40;
        /*  44*/ int field_44;
        /*  48*/ int field_48;
        /*  4C*/ int field_4C;
        /*  50*/ int field_50;
        /*  54*/ int field_54;
        /*  58*/ int field_58;
        /*  5C*/ int field_5C;
        /*  60*/ int field_60;
        /*  64*/ int field_64;
        /*  68*/ int field_68;
        /*  6C*/ int field_6C;
        /*  70*/ int field_70;
        /*  74*/ int field_74;
        /*  78*/ int field_78;
        /*  7C*/ int field_7C;
        /*  80*/ int field_80;
        /*  84*/ int field_84;
        /*  88*/ int field_88;
        /*  8C*/ int field_8C;
        /*  90*/ int field_90;
        /*  94*/ int field_94;
        /*  98*/ int field_98;
        /*  9C*/ int field_9C;
        /*  A0*/ int field_A0;
        /*  A4*/ int field_A4;
        /*  A8*/ int field_A8;
        /*  AC*/ int field_AC;
        /*  B0*/ int field_B0;
        /*  B4*/ int field_B4;
        /*  B8*/ int field_B8;
        /*  BC*/ int field_BC;
        /*  C0*/ int field_C0;
        /*  C4*/ int field_C4;
        /*  C8*/ int field_C8;
        /*  CC*/ int field_CC;
        /*  D0*/ int field_D0;
        /*  D4*/ int field_D4;
        /*  D8*/ int field_D8;
        /*  DC*/ int field_DC;
        /*  E0*/ int field_E0;
        /*  E4*/ int field_E4;
        /*  E8*/ int field_E8;
        /*  EC*/ int field_EC;
        /*  F0*/ int field_F0;
        /*  F4*/ int field_F4;
        /*  F8*/ int field_F8;
        /*  FC*/ int field_FC;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
            printf("field_2C: %d\n", this->field_2C);
            printf("field_30: %d\n", this->field_30);
            printf("field_34: %d\n", this->field_34);
            printf("field_38: %d\n", this->field_38);
            printf("field_3C: %d\n", this->field_3C);
            printf("field_40: %d\n", this->field_40);
            printf("field_44: %d\n", this->field_44);
            printf("field_48: %d\n", this->field_48);
            printf("field_4C: %d\n", this->field_4C);
            printf("field_50: %d\n", this->field_50);
            printf("field_54: %d\n", this->field_54);
            printf("field_58: %d\n", this->field_58);
            printf("field_5C: %d\n", this->field_5C);
            printf("field_60: %d\n", this->field_60);
            printf("field_64: %d\n", this->field_64);
            printf("field_68: %d\n", this->field_68);
            printf("field_6C: %d\n", this->field_6C);
            printf("field_70: %d\n", this->field_70);
            printf("field_74: %d\n", this->field_74);
            printf("field_78: %d\n", this->field_78);
            printf("field_7C: %d\n", this->field_7C);
            printf("field_80: %d\n", this->field_80);
            printf("field_84: %d\n", this->field_84);
            printf("field_88: %d\n", this->field_88);
            printf("field_8C: %d\n", this->field_8C);
            printf("field_90: %d\n", this->field_90);
            printf("field_94: %d\n", this->field_94);
            printf("field_98: %d\n", this->field_98);
            printf("field_9C: %d\n", this->field_9C);
            printf("field_A0: %d\n", this->field_A0);
            printf("field_A4: %d\n", this->field_A4);
            printf("field_A8: %d\n", this->field_A8);
            printf("field_AC: %d\n", this->field_AC);
            printf("field_B0: %d\n", this->field_B0);
            printf("field_B4: %d\n", this->field_B4);
            printf("field_B8: %d\n", this->field_B8);
            printf("field_BC: %d\n", this->field_BC);
            printf("field_C0: %d\n", this->field_C0);
            printf("field_C4: %d\n", this->field_C4);
            printf("field_C8: %d\n", this->field_C8);
            printf("field_CC: %d\n", this->field_CC);
            printf("field_D0: %d\n", this->field_D0);
            printf("field_D4: %d\n", this->field_D4);
            printf("field_D8: %d\n", this->field_D8);
            printf("field_DC: %d\n", this->field_DC);
            printf("field_E0: %d\n", this->field_E0);
            printf("field_E4: %d\n", this->field_E4);
            printf("field_E8: %d\n", this->field_E8);
            printf("field_EC: %d\n", this->field_EC);
            printf("field_F0: %d\n", this->field_F0);
            printf("field_F4: %d\n", this->field_F4);
            printf("field_F8: %d\n", this->field_F8);
            printf("field_FC: %d\n", this->field_FC);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StubStruc6787B8) == 0x100);

#pragma pack(push, 1)
    class StubStruc67B320 {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StubStruc67B320) == 0x10);

#pragma pack(push, 1)
    class StubStruc68F650 {
    public:
        
        /*   0*/ char *f0_name;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        /*  1C*/ void *field_1C;
        /*  20*/ int field_20;
        /*  24*/ int field_24;
        /*  28*/ int field_28;
        /*  2C*/ int field_2C;
        /*  30*/ int field_30;
        
        void dump() {
            printf("f0_name: %s\n", this->f0_name);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: void(%p)\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
            printf("field_2C: %d\n", this->field_2C);
            printf("field_30: %d\n", this->field_30);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StubStruc68F650) == 0x34);

#pragma pack(push, 1)
    class StubStruc6A1EC8 {
    public:
        
        /*   0*/ char field_0;
        /*   1*/ void *field_1;
        /*   5*/ void *field_5;
        /*   9*/ void *field_9;
        /*   D*/ void *field_D;
        /*  11*/ void *field_11;
        /*  15*/ void *field_15;
        /*  19*/ int field_19;
        /*  1D*/ int field_1D;
        /*  21*/ int field_21;
        /*  25*/ int field_25;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_1: void(%p)\n", this->field_1);
            printf("field_5: void(%p)\n", this->field_5);
            printf("field_9: void(%p)\n", this->field_9);
            printf("field_D: void(%p)\n", this->field_D);
            printf("field_11: void(%p)\n", this->field_11);
            printf("field_15: void(%p)\n", this->field_15);
            printf("field_19: %d\n", this->field_19);
            printf("field_1D: %d\n", this->field_1D);
            printf("field_21: %d\n", this->field_21);
            printf("field_25: %d\n", this->field_25);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StubStruc6A1EC8) == 0x29);

#pragma pack(push, 1)
    class StubStruc6B84C8 {
    public:
        
        /*   0*/ char *f0_name;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        
        void dump() {
            printf("f0_name: %s\n", this->f0_name);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StubStruc6B84C8) == 0x14);

#pragma pack(push, 1)
    class StubStruc6BF280 {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        /*  1C*/ int field_1C;
        /*  20*/ int field_20;
        /*  24*/ int field_24;
        /*  28*/ int field_28;
        /*  2C*/ int field_2C;
        /*  30*/ int field_30;
        /*  34*/ int field_34;
        /*  38*/ int field_38;
        /*  3C*/ int field_3C;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
            printf("field_2C: %d\n", this->field_2C);
            printf("field_30: %d\n", this->field_30);
            printf("field_34: %d\n", this->field_34);
            printf("field_38: %d\n", this->field_38);
            printf("field_3C: %d\n", this->field_3C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StubStruc6BF280) == 0x40);

#pragma pack(push, 1)
    class StubStruc6C3DA0 {
    public:
        
        /*   0*/ char field_0[6];
        /*   6*/ unsigned __int8 field_6;
        /*   7*/ char field_7;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_6: %d\n", this->field_6);
            printf("field_7: %d\n", this->field_7);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(StubStruc6C3DA0) == 0x8);

#pragma pack(push, 1)
    class GameScoreRecord {
    public:
        
        /*   0*/ void *f0_name;
        /*   4*/ int f4_score;
        
        void dump() {
            printf("f0_name: void(%p)\n", this->f0_name);
            printf("f4_score: %d\n", this->f4_score);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(GameScoreRecord) == 0x8);

#pragma pack(push, 1)
    class arr_769A78_t {
    public:
        
        /*   0*/ int field_0[1];
        /*   4*/ int field_4[1];
        /*   8*/ float f8_sqr[1];
        /*   C*/ int fC_pCEngineDynamicMesh;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("f8_sqr: %d\n", this->f8_sqr);
            printf("fC_pCEngineDynamicMesh: %d\n", this->fC_pCEngineDynamicMesh);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(arr_769A78_t) == 0x10);

#pragma pack(push, 1)
    class arr_7793A8_t {
    public:
        
        /*   0*/ int field_0;
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(arr_7793A8_t) == 0xC);

#pragma pack(push, 1)
    class VLCtable {
    public:
        
        /*   0*/ char code;
        /*   1*/ char len;
        
        void dump() {
            printf("code: %d\n", this->code);
            printf("len: %d\n", this->len);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(VLCtable) == 0x2);

#pragma pack(push, 1)
    class arr_6BEA7E_t1 {
    public:
        
        /*   0*/ VLCtable field_0[5];
        
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(arr_6BEA7E_t1) == 0xA);

#pragma pack(push, 1)
    class arr_66C780_t {
    public:
        
        /*   0*/ int f0_idx;
        /*   4*/ void *f8_name;
        /*   8*/ __int16 field_8;
        /*   A*/ __int16 field_A;
        /*   C*/ int field_C;
        
        void dump() {
            printf("f0_idx: %d\n", this->f0_idx);
            printf("f8_name: void(%p)\n", this->f8_name);
            printf("field_8: %d\n", this->field_8);
            printf("field_A: %d\n", this->field_A);
            printf("field_C: %d\n", this->field_C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(arr_66C780_t) == 0x10);

#pragma pack(push, 1)
    class EXCEPTION_RECORD {
    public:
        
        /*   0*/ DWORD ExceptionCode;
        /*   4*/ DWORD ExceptionFlags;
        /*   8*/ _EXCEPTION_RECORD *ExceptionRecord;
        /*   C*/ void *ExceptionAddress;
        /*  10*/ DWORD NumberParameters;
        /*  14*/ ULONG_PTR ExceptionInformation[15];
        
        void dump() {
            printf("ExceptionCode: %d\n", this->ExceptionCode);
            printf("ExceptionFlags: %d\n", this->ExceptionFlags);
            printf("ExceptionRecord: _EXCEPTION_RECORD(%p)\n", this->ExceptionRecord);
            printf("ExceptionAddress: void(%p)\n", this->ExceptionAddress);
            printf("NumberParameters: %d\n", this->NumberParameters);
            printf("ExceptionInformation: %d\n", this->ExceptionInformation);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(EXCEPTION_RECORD) == 0x50);

#pragma pack(push, 1)
    class MyDblNamedSurface {
    public:
        
        /*   0*/ uint32_t f0_blWidth;
        /*   4*/ uint32_t f4_blHeight;
        /*   8*/ char *f8_curName;
        /*   C*/ uint32_t fC_prevName;
        /*  10*/ char *f10_name;
        /*  14*/ uint32_t *f14_pNames;
        /*  18*/ int f18_init1__height;
        /*  1C*/ MySurface f1C_surf;
        /*  44*/ int f44_flags;
        /*  48*/ int f48_init1__width;
        /*  4C*/ int f4C_init0;
        /*  50*/ int f50_initx;
        /*  54*/ int f54_inity;
        /*  58*/ int f58_initz;
        
        void dump() {
            printf("f0_blWidth: %d\n", this->f0_blWidth);
            printf("f4_blHeight: %d\n", this->f4_blHeight);
            printf("f8_curName: %s\n", this->f8_curName);
            printf("fC_prevName: %d\n", this->fC_prevName);
            printf("f10_name: %s\n", this->f10_name);
            printf("f14_pNames: uint32_t(%p)\n", this->f14_pNames);
            printf("f18_init1__height: %d\n", this->f18_init1__height);
            printf("f44_flags: %d\n", this->f44_flags);
            printf("f48_init1__width: %d\n", this->f48_init1__width);
            printf("f4C_init0: %d\n", this->f4C_init0);
            printf("f50_initx: %d\n", this->f50_initx);
            printf("f54_inity: %d\n", this->f54_inity);
            printf("f58_initz: %d\n", this->f58_initz);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyDblNamedSurface) == 0x5C);

#pragma pack(push, 1)
    class BufCx400 {
    public:
        
        /*   0*/ int f0_count_to_add;
        /*   4*/ uint32_t f4_max_count;
        /*   8*/ BufCx400Item *f8_buf;
        
        void dump() {
            printf("f0_count_to_add: %d\n", this->f0_count_to_add);
            printf("f4_max_count: %d\n", this->f4_max_count);
            printf("f8_buf: BufCx400Item(%p)\n", this->f8_buf);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(BufCx400) == 0xC);

#pragma pack(push, 1)
    class MyNameObjMap {
    public:
        
        /*   0*/ uint32_t f0_hashTable[256];
        /* 400*/ uint32_t f400_idx;
        /* 404*/ BufCx400 f404_buf;
        
        void dump() {
            printf("f0_hashTable: %d\n", this->f0_hashTable);
            printf("f400_idx: %d\n", this->f400_idx);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyNameObjMap) == 0x410);

#pragma pack(push, 1)
    class BufCx400Item {
    public:
        
        /*   0*/ int f0_name;
        /*   4*/ void *f4_value;
        /*   8*/ int f8_prev_idx_for_same_hash;
        
        void dump() {
            printf("f0_name: %d\n", this->f0_name);
            printf("f4_value: void(%p)\n", this->f4_value);
            printf("f8_prev_idx_for_same_hash: %d\n", this->f8_prev_idx_for_same_hash);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(BufCx400Item) == 0xC);

#pragma pack(push, 1)
    class Arrp31x400 {
    public:
        
        /*   0*/ uint32_t f0_count_to_add;
        /*   4*/ int f4_max_count;
        /*   8*/ uint32_t *f8_buf;
        /*   C*/ int fC_count;
        
        void dump() {
            printf("f0_count_to_add: %d\n", this->f0_count_to_add);
            printf("f4_max_count: %d\n", this->f4_max_count);
            printf("f8_buf: uint32_t(%p)\n", this->f8_buf);
            printf("fC_count: %d\n", this->fC_count);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Arrp31x400) == 0x10);

#pragma pack(push, 1)
    class Arrp31x400Item {
    public:
        
        /*   0*/ uint32_t f0_idx;
        /*   4*/ MyCESurfScale *f4_scaledSurfArr;
        /*   8*/ MyCESurfHandle *f8_surfh;
        /*   C*/ uint32_t fC_flags;
        /*  10*/ uint32_t f10_flags;
        /*  14*/ uint8_t gap_14;
        /*  15*/ uint32_t f15_prob_height;
        /*  19*/ uint32_t f19_prob_width;
        /*  1D*/ int field_1D;
        /*  21*/ float field_21;
        /*  25*/ float field_25;
        /*  29*/ float field_29;
        /*  2D*/ Arrp31x400Item *f2D_nextPrescaledItem;
        
        void dump() {
            printf("f0_idx: %d\n", this->f0_idx);
            printf("f4_scaledSurfArr: MyCESurfScale(%p)\n", this->f4_scaledSurfArr);
            printf("f8_surfh: MyCESurfHandle(%p)\n", this->f8_surfh);
            printf("fC_flags: %d\n", this->fC_flags);
            printf("f10_flags: %d\n", this->f10_flags);
            printf("gap_14: %d\n", this->gap_14);
            printf("f15_prob_height: %d\n", this->f15_prob_height);
            printf("f19_prob_width: %d\n", this->f19_prob_width);
            printf("field_1D: %d\n", this->field_1D);
            printf("field_21: %d\n", this->field_21);
            printf("field_25: %d\n", this->field_25);
            printf("field_29: %d\n", this->field_29);
            printf("f2D_nextPrescaledItem: Arrp31x400Item(%p)\n", this->f2D_nextPrescaledItem);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Arrp31x400Item) == 0x31);

#pragma pack(push, 1)
    class MyCESurfHandle {
    public:
        
        /*   0*/ CEngineSurface *f0_cesurf;
        /*   4*/ SurfaceHolder *f4_holder_parent;
        /*   8*/ MyCESurfHandle *f8_gnext;
        /*   C*/ MyCESurfHandle *fC_gprev;
        /*  10*/ MyCESurfHandle *f10_nextByHashList;
        /*  14*/ MyCESurfHandle *f14_nextByHolder;
        /*  18*/ MyCESurfHandle *f18_nextByReduction;
        /*  1C*/ MyCESurfHandle *f1C_curReduction;
        /*  20*/ int field_20;
        /*  24*/ uint32_t f24_mapIdx;
        /*  28*/ float f28_padNorm_width;
        /*  2C*/ float f2C_padNorm_height;
        /*  30*/ float f30_padNorm_x8;
        /*  34*/ float f34_padNorm_y8;
        /*  38*/ int f38_flags;
        /*  3C*/ unsigned int f3C_reductionLevel_andFlags;
        /*  40*/ unsigned __int8 f40_surfWidth8;
        /*  41*/ unsigned __int8 f41_surfHeight8;
        /*  42*/ char f42_x8;
        /*  43*/ char f43_y8;
        /*  44*/ int field_44;
        /*  48*/ int f48_sortTick;
        
        void dump() {
            printf("f0_cesurf: CEngineSurface(%p)\n", this->f0_cesurf);
            printf("f4_holder_parent: SurfaceHolder(%p)\n", this->f4_holder_parent);
            printf("f8_gnext: MyCESurfHandle(%p)\n", this->f8_gnext);
            printf("fC_gprev: MyCESurfHandle(%p)\n", this->fC_gprev);
            printf("f10_nextByHashList: MyCESurfHandle(%p)\n", this->f10_nextByHashList);
            printf("f14_nextByHolder: MyCESurfHandle(%p)\n", this->f14_nextByHolder);
            printf("f18_nextByReduction: MyCESurfHandle(%p)\n", this->f18_nextByReduction);
            printf("f1C_curReduction: MyCESurfHandle(%p)\n", this->f1C_curReduction);
            printf("field_20: %d\n", this->field_20);
            printf("f24_mapIdx: %d\n", this->f24_mapIdx);
            printf("f28_padNorm_width: %d\n", this->f28_padNorm_width);
            printf("f2C_padNorm_height: %d\n", this->f2C_padNorm_height);
            printf("f30_padNorm_x8: %d\n", this->f30_padNorm_x8);
            printf("f34_padNorm_y8: %d\n", this->f34_padNorm_y8);
            printf("f38_flags: %d\n", this->f38_flags);
            printf("f3C_reductionLevel_andFlags: %d\n", this->f3C_reductionLevel_andFlags);
            printf("f40_surfWidth8: %d\n", this->f40_surfWidth8);
            printf("f41_surfHeight8: %d\n", this->f41_surfHeight8);
            printf("f42_x8: %d\n", this->f42_x8);
            printf("f43_y8: %d\n", this->f43_y8);
            printf("field_44: %d\n", this->field_44);
            printf("f48_sortTick: %d\n", this->f48_sortTick);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCESurfHandle) == 0x4C);

#pragma pack(push, 1)
    class CEngineSurfaceBase {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *scalar_destructor)(CEngineSurfaceBase *self, unsigned int);  // void *(__thiscall *)(void *this, unsigned int a2)
            /*   4*/ int(__thiscall *fill)(CEngineSurfaceBase *self, __int16);  // int (__thiscall *)(_DWORD *this, __int16 pix)
            /*   8*/ int(__thiscall *copySurf)(CEngineSurfaceBase *self, CEngineSurfaceBase *, int, int);  // int (__thiscall *)(_DWORD *this, CEngineSurfaceBase *, int a3, int a4)
            /*   C*/ int(__thiscall *paintSurf)(CEngineSurfaceBase *self, CEngineSurfaceBase *, int, int);  // int (__thiscall *)(_DWORD *this, CEngineSurfaceBase *, int a3, int a4)
            /*  10*/ void(__stdcall *f10_unk)();  // void (__stdcall __noreturn *)()
            /*  14*/ int(__thiscall *hasBuf)(CEngineSurfaceBase *self);  // int (__thiscall *)(_DWORD *this)
            /*  18*/ void *(__thiscall *lockBuf)(CEngineSurfaceBase *self);  // void *(__thiscall *)(_DWORD *this)
            /*  1C*/ int(__thiscall *unlockBuf)(CEngineSurfaceBase *self, int);  // int (__thiscall *)(_DWORD **this, int a2)
            /*  20*/ void *(__thiscall *getBufWithSize)(CEngineSurfaceBase *self, uint32_t *);  // void *(__thiscall *)(void *this, _DWORD *pSize)
        };
        static_assert(sizeof(vtbl_t) == 0x24);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int f4_width;
        /*   8*/ int f8_height;
        /*   C*/ int fC_lineWidth;
        /*  10*/ MyCEngineSurfDesc *fC_desc;
        
        virtual ~CEngineSurfaceBase();
        void dump() {
            printf("f4_width: %d\n", this->f4_width);
            printf("f8_height: %d\n", this->f8_height);
            printf("fC_lineWidth: %d\n", this->fC_lineWidth);
            printf("fC_desc: MyCEngineSurfDesc(%p)\n", this->fC_desc);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineSurfaceBase) == 0x14);

#pragma pack(push, 1)
    class CEngineSurface : public CEngineSurfaceBase {
    public:
        struct vtbl_t : public CEngineSurfaceBase::vtbl_t {
        };
        static_assert(sizeof(vtbl_t) == 0x24);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  14*/ void *f14_pixels;
        
        virtual ~CEngineSurface();
        void dump() {
            printf("f14_pixels: void(%p)\n", this->f14_pixels);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineSurface) == 0x18);

#pragma pack(push, 1)
    class MySurfaceWrapper {
    public:
        
        /*   0*/ uint32_t f0_flags;
        /*   4*/ uint32_t f4_prescaleWigth;
        /*   8*/ uint32_t f8_prescaleHeight;
        /*   C*/ char *fC_name;
        /*  10*/ MySurface f10_surf;
        /*  38*/ int field_38;
        
        void dump() {
            printf("f0_flags: %d\n", this->f0_flags);
            printf("f4_prescaleWigth: %d\n", this->f4_prescaleWigth);
            printf("f8_prescaleHeight: %d\n", this->f8_prescaleHeight);
            printf("fC_name: %s\n", this->fC_name);
            printf("field_38: %d\n", this->field_38);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MySurfaceWrapper) == 0x3C);

#pragma pack(push, 1)
    class MyCESurfScale {
    public:
        
        /*   0*/ MyCESurfHandle * f0_surfScaledArr[4];
        
        void dump() {
            printf("f0_surfScaledArr: %d\n", this->f0_surfScaledArr);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCESurfScale) == 0x10);

#pragma pack(push, 1)
    class Obj792D48 {
    public:
        
        /*   0*/ char f0_aBool;
        /*   1*/ CEngineSurface *f1_cEngineSurf;
        /*   5*/ uint32_t *f5_cEngineSurf;
        /*   9*/ int f9_prescaleWigth;
        /*   D*/ int fD_prescaleHeight;
        
        void dump() {
            printf("f0_aBool: %d\n", this->f0_aBool);
            printf("f1_cEngineSurf: CEngineSurface(%p)\n", this->f1_cEngineSurf);
            printf("f5_cEngineSurf: uint32_t(%p)\n", this->f5_cEngineSurf);
            printf("f9_prescaleWigth: %d\n", this->f9_prescaleWigth);
            printf("fD_prescaleHeight: %d\n", this->fD_prescaleHeight);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj792D48) == 0x11);

#pragma pack(push, 1)
    class Obj79DC68 {
    public:
        
        /*   0*/ Obj672520Interface *f0_Obj672520Interface;
        /*   4*/ uint32_t f4_s1_dwRGBBitCount_aligned8;
        /*   8*/ uint32_t f8_s2_dwRGBBitCount_aligned8;
        /*   C*/ int fC_objKind;
        
        void dump() {
            printf("f0_Obj672520Interface: Obj672520Interface(%p)\n", this->f0_Obj672520Interface);
            printf("f4_s1_dwRGBBitCount_aligned8: %d\n", this->f4_s1_dwRGBBitCount_aligned8);
            printf("f8_s2_dwRGBBitCount_aligned8: %d\n", this->f8_s2_dwRGBBitCount_aligned8);
            printf("fC_objKind: %d\n", this->fC_objKind);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj79DC68) == 0x10);

#pragma pack(push, 1)
    class Obj672520Interface {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *scalar_destructor)(Obj672520Interface *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__thiscall *convertPixel)(Obj672520Interface *self, uint8_t *, uint32_t *, int);  // int (__thiscall *)(_DWORD *this, _BYTE *a2, _DWORD *a3, int a4)
            /*   8*/ int(__thiscall *selfConvertPixel)(Obj672520Interface *self, int, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3, int a4)
        };
        static_assert(sizeof(vtbl_t) == 0xC);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        
        virtual ~Obj672520Interface();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj672520Interface) == 0x4);

#pragma pack(push, 1)
    class Obj672510 {
    public:
        
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int f14_s1_dwRBitMask;
        /*  18*/ int f18_s1_dwGBitMask;
        /*  1C*/ int f1C_s1_dwBBitMask;
        /*  20*/ int f20_s2_dwRGBAlphaBitMask;
        /*  24*/ int f24_s2_dwRBitMask;
        /*  28*/ int f28_s2_dwGBitMask;
        /*  2C*/ int f2C_s2_dwBBitMask;
        /*  30*/ int f30_s2_dwRGBAlphaBitMask;
        /*  34*/ int field_34;
        /*  38*/ int field_38;
        /*  3C*/ int field_3C;
        /*  40*/ int field_40;
        /*  44*/ int f44_s2_dwRGBBitCount_align8;
        /*  48*/ int f48_s1_dwRGBBitCount_align8;
        /*  4C*/ int field_4C;
        /*  50*/ int field_50;
        
        virtual ~Obj672510();
        void dump() {
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("f14_s1_dwRBitMask: %d\n", this->f14_s1_dwRBitMask);
            printf("f18_s1_dwGBitMask: %d\n", this->f18_s1_dwGBitMask);
            printf("f1C_s1_dwBBitMask: %d\n", this->f1C_s1_dwBBitMask);
            printf("f20_s2_dwRGBAlphaBitMask: %d\n", this->f20_s2_dwRGBAlphaBitMask);
            printf("f24_s2_dwRBitMask: %d\n", this->f24_s2_dwRBitMask);
            printf("f28_s2_dwGBitMask: %d\n", this->f28_s2_dwGBitMask);
            printf("f2C_s2_dwBBitMask: %d\n", this->f2C_s2_dwBBitMask);
            printf("f30_s2_dwRGBAlphaBitMask: %d\n", this->f30_s2_dwRGBAlphaBitMask);
            printf("field_34: %d\n", this->field_34);
            printf("field_38: %d\n", this->field_38);
            printf("field_3C: %d\n", this->field_3C);
            printf("field_40: %d\n", this->field_40);
            printf("f44_s2_dwRGBBitCount_align8: %d\n", this->f44_s2_dwRGBBitCount_align8);
            printf("f48_s1_dwRGBBitCount_align8: %d\n", this->f48_s1_dwRGBBitCount_align8);
            printf("field_4C: %d\n", this->field_4C);
            printf("field_50: %d\n", this->field_50);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj672510) == 0x54);

#pragma pack(push, 1)
    class Obj672E70 {
    public:
        
        /*   4*/ uint8_t f4_arr[1024];
        /* 404*/ int field_404;
        /* 408*/ int field_408;
        /* 40C*/ int field_40C;
        /* 410*/ int field_410;
        /* 414*/ int f414_s_dwRBitMask;
        /* 418*/ int f418_s_dwGBitMask;
        /* 41C*/ int f41C_dwBBitMask;
        /* 420*/ int field_420;
        /* 424*/ int field_424;
        /* 428*/ int field_428;
        /* 42C*/ int field_42C;
        /* 430*/ int field_430;
        /* 434*/ int field_434;
        /* 438*/ int field_438;
        
        virtual ~Obj672E70();
        void dump() {
            printf("f4_arr: %d\n", this->f4_arr);
            printf("field_404: %d\n", this->field_404);
            printf("field_408: %d\n", this->field_408);
            printf("field_40C: %d\n", this->field_40C);
            printf("field_410: %d\n", this->field_410);
            printf("f414_s_dwRBitMask: %d\n", this->f414_s_dwRBitMask);
            printf("f418_s_dwGBitMask: %d\n", this->f418_s_dwGBitMask);
            printf("f41C_dwBBitMask: %d\n", this->f41C_dwBBitMask);
            printf("field_420: %d\n", this->field_420);
            printf("field_424: %d\n", this->field_424);
            printf("field_428: %d\n", this->field_428);
            printf("field_42C: %d\n", this->field_42C);
            printf("field_430: %d\n", this->field_430);
            printf("field_434: %d\n", this->field_434);
            printf("field_438: %d\n", this->field_438);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj672E70) == 0x43C);

#pragma pack(push, 1)
    class Obj672500 {
    public:
        
        /*   4*/ int f4__rMask;
        /*   8*/ int f8__gMask;
        /*   C*/ int fC__bMask;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        /*  1C*/ int field_1C;
        /*  20*/ int field_20;
        /*  24*/ int field_24;
        /*  28*/ int field_28;
        /*  2C*/ int f2C;
        /*  30*/ int field_30[256];
        
        virtual ~Obj672500();
        void dump() {
            printf("f4__rMask: %d\n", this->f4__rMask);
            printf("f8__gMask: %d\n", this->f8__gMask);
            printf("fC__bMask: %d\n", this->fC__bMask);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
            printf("f2C: %d\n", this->f2C);
            printf("field_30: %d\n", this->field_30);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj672500) == 0x430);

#pragma pack(push, 1)
    class Obj672E80 {
    public:
        
        /*   4*/ int field_4;
        /*   8*/ int f8_dst_dwRGBAlphaBitMask;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        /*  1C*/ int field_1C;
        /*  20*/ int field_20;
        /*  24*/ int field_24;
        /*  28*/ int field_28;
        
        virtual ~Obj672E80();
        void dump() {
            printf("field_4: %d\n", this->field_4);
            printf("f8_dst_dwRGBAlphaBitMask: %d\n", this->f8_dst_dwRGBAlphaBitMask);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(Obj672E80) == 0x2C);

#pragma pack(push, 1)
    class CDirectIFFFile {
    public:
        struct vtbl_t {
            /*   0*/ FILE *(__thiscall *read)(CDirectIFFFile *self, void *, size_t);  // FILE *(__thiscall *)(_DWORD *this, void *Buffer, size_t ElementSize)
            /*   4*/ FILE *(__thiscall *write)(CDirectIFFFile *self, void *, size_t);  // FILE *(__thiscall *)(_DWORD *this, void *Buffer, size_t ElementSize)
            /*   8*/ int(__thiscall *seek)(CDirectIFFFile *self, int);  // int (__thiscall *)(FILE **this, int Offset)
        };
        static_assert(sizeof(vtbl_t) == 0xC);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ uint32_t f4_offset;
        /*   8*/ int f8_aBool;
        /*   C*/ uint8_t gap_C[4];
        /*  10*/ int f10_count;
        /*  14*/ int f14_arr1[128];
        /* 214*/ int f214_arr2[128];
        /* 414*/ int field_414;
        /* 418*/ uint8_t gap_418[8];
        /* 420*/ FILE *f420_stdFileHandle;
        
        virtual ~CDirectIFFFile();
        void dump() {
            printf("f4_offset: %d\n", this->f4_offset);
            printf("f8_aBool: %d\n", this->f8_aBool);
            printf("gap_C: %d\n", this->gap_C);
            printf("f10_count: %d\n", this->f10_count);
            printf("f14_arr1: %d\n", this->f14_arr1);
            printf("f214_arr2: %d\n", this->f214_arr2);
            printf("field_414: %d\n", this->field_414);
            printf("gap_418: %d\n", this->gap_418);
            printf("f420_stdFileHandle: FILE(%p)\n", this->f420_stdFileHandle);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CDirectIFFFile) == 0x424);

#pragma pack(push, 1)
    class MyTextures {
    public:
        
        /*   0*/ char *f0_textureCacheFile_dir;
        /*   4*/ char *f4_textureCacheFile_dat;
        /*   8*/ FILE *f8_fileHandle;
        /*   C*/ CDirectIFFFile fC_rwfile;
        /* 430*/ uint32_t field_430;
        /* 434*/ MyNameObjMap f434_texNameToFileOffsetMap;
        
        void dump() {
            printf("f0_textureCacheFile_dir: %s\n", this->f0_textureCacheFile_dir);
            printf("f4_textureCacheFile_dat: %s\n", this->f4_textureCacheFile_dat);
            printf("f8_fileHandle: FILE(%p)\n", this->f8_fileHandle);
            printf("field_430: %d\n", this->field_430);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTextures) == 0x844);

#pragma pack(push, 1)
    class CEngineCompressedSurface : public CEngineSurfaceBase {
    public:
        struct vtbl_t : public CEngineSurfaceBase::vtbl_t {
        };
        static_assert(sizeof(vtbl_t) == 0x24);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  14*/ int f14_pixelBuf;
        /*  18*/ int f18_bufSize;
        
        virtual ~CEngineCompressedSurface();
        void dump() {
            printf("f14_pixelBuf: %d\n", this->f14_pixelBuf);
            printf("f18_bufSize: %d\n", this->f18_bufSize);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineCompressedSurface) == 0x1C);

#pragma pack(push, 1)
    class CEngineDDSurface : public CEngineSurfaceBase {
    public:
        struct vtbl_t : public CEngineSurfaceBase::vtbl_t {
        };
        static_assert(sizeof(vtbl_t) == 0x24);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  14*/ uint32_t field_14;
        /*  18*/ IDirectDrawSurface4 *f18_ddSurf;
        /*  1C*/ IDirect3DTexture2 *f1C_d3dTex;
        /*  20*/ int field_20;
        
        virtual ~CEngineDDSurface();
        void dump() {
            printf("field_14: %d\n", this->field_14);
            printf("f18_ddSurf: IDirectDrawSurface4(%p)\n", this->f18_ddSurf);
            printf("f1C_d3dTex: IDirect3DTexture2(%p)\n", this->f1C_d3dTex);
            printf("field_20: %d\n", this->field_20);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineDDSurface) == 0x24);

#pragma pack(push, 1)
    class MyCEngineSurfDesc {
    public:
        
        /*   0*/ uint32_t field_0;
        /*   4*/ int f4__bitsiz;
        /*   8*/ int f8_bytesize;
        /*   C*/ int fC_rbitcount;
        /*  10*/ int f10_gbitcount;
        /*  14*/ int f14_bbitcount;
        /*  18*/ int f18_abitcount;
        /*  1C*/ unsigned int f1C__rmask;
        /*  20*/ unsigned int f20__gmask;
        /*  24*/ unsigned int f24__bmask;
        /*  28*/ unsigned int f28__amask;
        /*  2C*/ char field_2C;
        /*  2D*/ MySurfDesc f2D_desc;
        /*  45*/ DDPIXELFORMAT f45_ddPixFmt;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4__bitsiz: %d\n", this->f4__bitsiz);
            printf("f8_bytesize: %d\n", this->f8_bytesize);
            printf("fC_rbitcount: %d\n", this->fC_rbitcount);
            printf("f10_gbitcount: %d\n", this->f10_gbitcount);
            printf("f14_bbitcount: %d\n", this->f14_bbitcount);
            printf("f18_abitcount: %d\n", this->f18_abitcount);
            printf("f1C__rmask: %d\n", this->f1C__rmask);
            printf("f20__gmask: %d\n", this->f20__gmask);
            printf("f24__bmask: %d\n", this->f24__bmask);
            printf("f28__amask: %d\n", this->f28__amask);
            printf("field_2C: %d\n", this->field_2C);
            printf("f45_ddPixFmt: %d\n", this->f45_ddPixFmt);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyCEngineSurfDesc) == 0x65);

#pragma pack(push, 1)
    class sVLCtable {
    public:
        
        /*   0*/ __int16 code;
        /*   2*/ uint8_t len;
        
        void dump() {
            printf("code: %d\n", this->code);
            printf("len: %d\n", this->len);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(sVLCtable) == 0x3);

#pragma pack(push, 1)
    class VLCtable_tab2 {
    public:
        
        /*   0*/ VLCtable arr[5];
        
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(VLCtable_tab2) == 0xA);

#pragma pack(push, 1)
    class CLocalCommunication : public CCommunicationInterface {
    public:
        struct vtbl_t /*: public CCommunicationInterface::vtbl_t */{
            /*   0*/ void *(__thiscall *CLocalCommunication___scalar_deleting_destructor_uint)(CLocalCommunication *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__thiscall *CLocalCommunication__fun_522740)(CLocalCommunication *self);  // int (__thiscall *)(_DWORD *this)
            /*   8*/ void(__thiscall *ret_void_0args_0)(CLocalCommunication *self);  // void (__thiscall *)(void *this)
            /*   C*/ int(__stdcall *ret_0_2args)(int, int);  // int (__stdcall *)(int a1, int a2)
            /*  10*/ int(__thiscall *CLocalCommunication__fun_522750)(CLocalCommunication *self, GameAction *);  // int (__thiscall *)(int this, GameAction *a2)
            /*  14*/ int(__thiscall *CLocalCommunication__fun_522760)(CLocalCommunication *self, int);  // int (__thiscall *)(CCommunicationInterface *this, int a2)
            /*  18*/ int(__stdcall *ret_1_0args_0)();  // int (__stdcall *)()
            /*  1C*/ void(__stdcall *ret_void_2args)(int, int);  // void (__stdcall *)(int a1, int a2)
            /*  20*/ void *(__stdcall *duplicate_7_1)();  // void *(__stdcall *)()
            /*  24*/ void *(__stdcall *duplicate_7_2)();  // void *(__stdcall *)()
            /*  28*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int a1)
            /*  2C*/ void(__cdecl *ret_void_0args)();  // void (__cdecl *)()
            /*  30*/ int(__stdcall *ret_1_0args)();  // int (__stdcall *)()
            /*  34*/ void *(__stdcall *duplicate_12_1)();  // void *(__stdcall *)()
            /*  38*/ int(__stdcall *ret_0_0args_0)();  // int (__stdcall *)()
            /*  3C*/ int(__stdcall *CCommunicationInterface__fun_521B40)(int);  // int (__stdcall *)(int a1)
            /*  40*/ void *(__stdcall *duplicate_7_3)();  // void *(__stdcall *)()
            /*  44*/ int(__stdcall *CCommunicationInterface__fun_52B700)(int);  // int (__stdcall *)(int a1)
            /*  48*/ void(__stdcall *ret_void_1args_0)(int);  // void (__stdcall *)(int a1)
        };
        static_assert(sizeof(vtbl_t) == 0x4C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  14*/ GameActionArray f14_clickList;
        
        virtual ~CLocalCommunication();
        void dump() {
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CLocalCommunication) == 0x260);

#pragma pack(push, 1)
    class GameActionCtx {
    public:
        
        /*   0*/ unsigned __int8 f0_nextIdx;
        /*   1*/ int field_1;
        /*   5*/ int field_5;
        /*   9*/ int field_9;
        /*   D*/ char field_D;
        /*   E*/ char field_E;
        /*   F*/ char field_F;
        /*  10*/ uint8_t field_10;
        /*  11*/ GameAction f11_actionArr[16];
        
        void dump() {
            printf("f0_nextIdx: %d\n", this->f0_nextIdx);
            printf("field_1: %d\n", this->field_1);
            printf("field_5: %d\n", this->field_5);
            printf("field_9: %d\n", this->field_9);
            printf("field_D: %d\n", this->field_D);
            printf("field_E: %d\n", this->field_E);
            printf("field_F: %d\n", this->field_F);
            printf("field_10: %d\n", this->field_10);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(GameActionCtx) == 0x131);

#pragma pack(push, 1)
    class GameActionRecord {
    public:
        
        /*   0*/ int f0_actionKind;
        /*   4*/ GameActionHandler f4_handler;
        
        void dump() {
            printf("f0_actionKind: %d\n", this->f0_actionKind);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(GameActionRecord) == 0x14);

#pragma pack(push, 1)
    class CListBox : public CButton {
    public:
        struct vtbl_t /*: public CButton::vtbl_t */{
            /*   0*/ void *(__thiscall *CClickButton__fun_52CAA0)(CListBox *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ int(__thiscall *CListBox__fun_52AFB0)(CListBox *self, int, int);  // int (__thiscall *)(int this, int a2, int a3)
            /*   8*/ int(__thiscall *CListBox__fun_52B160)(CListBox *self, int);  // int (__thiscall *)(int this, int a2)
            /*   C*/ int(__thiscall *CListBox__add_CVerticalSlider)(CListBox *self, int);  // int (__thiscall *)(int this, int a2)
        };
        static_assert(sizeof(vtbl_t) == 0x10);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  80*/ int field_80;
        /*  84*/ int field_84;
        /*  88*/ int field_88;
        /*  8C*/ int field_8C;
        
        virtual ~CListBox();
        void dump() {
            printf("field_80: %d\n", this->field_80);
            printf("field_84: %d\n", this->field_84);
            printf("field_88: %d\n", this->field_88);
            printf("field_8C: %d\n", this->field_8C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CListBox) == 0x90);

#pragma pack(push, 1)
    class TbAudioSystem {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *TbAudioSystem___scalar_deleting_destructor_uint)(TbAudioSystem *self, char);  // std::locale::facet *(__thiscall *)(std::locale::facet *this, char a2)
            /*   4*/ uint32_t *(__thiscall *TbAudioSystem__fun_608A50)(TbAudioSystem *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2)
            /*   8*/ uint32_t *(__thiscall *TbAudioSystem__fun_608B70)(TbAudioSystem *self, uint32_t *, int, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
            /*   C*/ int(__thiscall *TbAudioSystem__fun_608DA0)(TbAudioSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  10*/ int(__thiscall *TbAudioSystem__fun_608C20)(TbAudioSystem *self, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int a2, _DWORD *a3)
            /*  14*/ int(__stdcall *TbAudioSystem__fun_608FB0)(int);  // int (__stdcall *)(int a1)
            /*  18*/ int(__thiscall *TbAudioSystem__fun_608870)(TbAudioSystem *self);  // int (__thiscall *)(_DWORD *this)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int field_0;
        /*   8*/ int field_4;
        /*   C*/ int field_8;
        /*  10*/ int field_C;
        /*  14*/ int field_10;
        /*  18*/ int f14_numberOfChannels;
        
        virtual ~TbAudioSystem();
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("f14_numberOfChannels: %d\n", this->f14_numberOfChannels);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(TbAudioSystem) == 0x1C);

#pragma pack(push, 1)
    class MyTbAudioSystem : public TbAudioSystem {
    public:
        struct vtbl_t /*: public TbAudioSystem::vtbl_t */{
            /*   0*/ void *(__thiscall *MyTbAudioSystem___scalar_deleting_destructor_uint)(MyTbAudioSystem *self, char);  // void *(__thiscall *)(void *Block, char a2)
            /*   4*/ uint32_t *(__thiscall *sub_6086F0)(MyTbAudioSystem *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2)
            /*   8*/ uint32_t *(__thiscall *TbAudioSystem__fun_608B70)(MyTbAudioSystem *self, uint32_t *, int, int, int);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
            /*   C*/ int(__thiscall *TbAudioSystem__fun_608DA0)(MyTbAudioSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  10*/ int(__thiscall *TbAudioSystem__fun_608C20)(MyTbAudioSystem *self, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int a2, _DWORD *a3)
            /*  14*/ uint32_t *(__thiscall *sub_608800)(MyTbAudioSystem *self, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2)
            /*  18*/ int(__thiscall *sub_608720)(MyTbAudioSystem *self);  // int (__thiscall *)(_DWORD *this)
        };
        static_assert(sizeof(vtbl_t) == 0x1C);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*  1C*/ void *f1C_obj_MyUnk673EB0;
        
        virtual ~MyTbAudioSystem();
        void dump() {
            printf("f1C_obj_MyUnk673EB0: void(%p)\n", this->f1C_obj_MyUnk673EB0);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(MyTbAudioSystem) == 0x20);

#pragma pack(push, 1)
    class CSoundSystem {
    public:
        struct vtbl_t {
            /*   0*/ uint32_t *(__thiscall *CSoundSystem___scalar_deleting_destructor_uint)(CSoundSystem *self, char);  // _DWORD *(__thiscall *)(_DWORD *Block, char a2)
            /*   4*/ int(__thiscall *sub_567210)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*   8*/ int(__thiscall *CSoundSystem__set_number_of_channels)(CSoundSystem *self, int);  // int (__thiscall *)(int *this, int a2)
            /*   C*/ BOOL(__thiscall *CSoundSystem__fun_5677E0)(CSoundSystem *self);  // BOOL (__thiscall *)(_DWORD *this)
            /*  10*/ int(__thiscall *CSoundSystem__fun_567410)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  14*/ int(__thiscall *CSoundSystem__fun_5677D0)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  18*/ int(__thiscall *CSoundSystem__fun_5674F0)(CSoundSystem *self);  // int (__thiscall *)(int *this)
            /*  1C*/ int(__thiscall *CSoundSystem__fun_567790)(CSoundSystem *self, int, char *);  // int (__thiscall *)(_DWORD *this, int a2, const char *a3)
            /*  20*/ int(__thiscall *CSoundSystem__fun_5678F0)(CSoundSystem *self, int, int, int, uint32_t *);  // int (__thiscall *)(int *this, int a2, int a3, int a4, _DWORD *a5)
            /*  24*/ int(__thiscall *CSoundSystem__fun_567810)(CSoundSystem *self, int, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3, int a4)
            /*  28*/ int(__thiscall *CSoundSystem__fun_567730)(CSoundSystem *self, int, int);  // int (__thiscall *)(int *this, int a2, int a3)
            /*  2C*/ int(__thiscall *CSoundSystem__fun_567AF0)(CSoundSystem *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /*  30*/ int(__thiscall *CSoundSystem__fun_567A70)(CSoundSystem *self, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int a2, _DWORD *a3)
            /*  34*/ int(__thiscall *CSoundSystem__fun_567A10)(CSoundSystem *self, int, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3, int a4)
            /*  38*/ uint32_t *(__thiscall *CSoundSystem__fun_567A40)(CSoundSystem *self, uint32_t *, uint32_t *);  // _DWORD *(__thiscall *)(_DWORD *this, _DWORD *a2, void (__thiscall ***a3)(_DWORD, int, void *))
            /*  3C*/ int(__thiscall *CSoundSystem__update_room_ambience)(CSoundSystem *self, uint32_t *, uint32_t *, uint32_t *, int);  // int (__thiscall *)(_DWORD *this, void (__thiscall **a2)(_DWORD, int, void *), void (__thiscall **a3)(_DWORD, int, void *), void (__thiscall **a4)(_DWORD, int, void *), int a5)
            /*  40*/ int(__thiscall *sub_567220)(CSoundSystem *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /*  44*/ void(__thiscall *sub_567230)(CSoundSystem *self);  // void (__thiscall *)(_DWORD *this)
            /*  48*/ int(__thiscall *CSoundSystem__set_listener_direction)(CSoundSystem *self, uint16_t *);  // int (__thiscall *)(_DWORD *this, unsigned __int16 *a2)
            /*  4C*/ unsigned int(__thiscall *CSoundSystem__fun_567BC0)(CSoundSystem *self, unsigned int);  // unsigned int (__thiscall *)(_DWORD *this, unsigned int a2)
            /*  50*/ int(__thiscall *CSoundSystem__fun_567BE0)(CSoundSystem *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /*  54*/ int(__thiscall *CSoundSystem__setProperty)(CSoundSystem *self, int, uint32_t *);  // int (__thiscall *)(_DWORD *this, int a2, void (__thiscall **a3)(_DWORD, int, void *))
            /*  58*/ int(__thiscall *sub_567240)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  5C*/ int(__thiscall *CSoundSystem__set_view)(CSoundSystem *self, uint32_t *);  // int (__thiscall *)(_DWORD *this, void (__thiscall **a2)(_DWORD, int, void *))
            /*  60*/ int(__thiscall *CSoundSystem__fun_567440)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  64*/ int(__thiscall *CSoundSystem__destroy_sound)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  68*/ int(__thiscall *sub_567250)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  6C*/ int(__thiscall *sub_567260)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  70*/ int(__thiscall *sub_567270)(CSoundSystem *self, int);  // int (__thiscall *)(_DWORD *this, int a2)
            /*  74*/ int(__thiscall *sub_567280)(CSoundSystem *self);  // int (__thiscall *)(_DWORD *this)
            /*  78*/ uint32_t *(__thiscall *CSoundSystem__init_sound)(CSoundSystem *self, uint32_t *);  // void **(__thiscall *)(_DWORD *this, void **a2)
            /*  7C*/ int(__thiscall *sub_567290)(CSoundSystem *self, uint32_t *);  // int (__thiscall *)(_DWORD *this, _DWORD *a2)
        };
        static_assert(sizeof(vtbl_t) == 0x80);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ MyTbAudioSystem fC_audio;
        /*  2C*/ int field_2C;
        /*  30*/ int field_30;
        /*  34*/ int field_34;
        /*  38*/ int field_38;
        /*  3C*/ int field_3C;
        /*  40*/ int field_40;
        /*  44*/ uint8_t gap_44[4];
        /*  48*/ int field_48;
        /*  4C*/ int field_4C;
        /*  50*/ int field_50;
        /*  54*/ int field_54;
        /*  58*/ int field_58;
        /*  5C*/ int field_5C;
        
        virtual ~CSoundSystem();
        void dump() {
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_2C: %d\n", this->field_2C);
            printf("field_30: %d\n", this->field_30);
            printf("field_34: %d\n", this->field_34);
            printf("field_38: %d\n", this->field_38);
            printf("field_3C: %d\n", this->field_3C);
            printf("field_40: %d\n", this->field_40);
            printf("gap_44: %d\n", this->gap_44);
            printf("field_48: %d\n", this->field_48);
            printf("field_4C: %d\n", this->field_4C);
            printf("field_50: %d\n", this->field_50);
            printf("field_54: %d\n", this->field_54);
            printf("field_58: %d\n", this->field_58);
            printf("field_5C: %d\n", this->field_5C);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CSoundSystem) == 0x60);

#pragma pack(push, 1)
    class TbSysCommand_SetNumberOfChannels {
    public:
        struct vtbl_t {
            /*   0*/ void(__thiscall *TbSysCommand__SetNumberOfChannels__fun_608360)(TbSysCommand_SetNumberOfChannels *self, int, MyTbAudioSystem *);  // void (__thiscall *)(TbSysCommand_SetNumberOfChannels *, int, MyTbAudioSystem *)
        };
        static_assert(sizeof(vtbl_t) == 0x4);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
        /*   4*/ int f4_value;
        
        virtual ~TbSysCommand_SetNumberOfChannels();
        void dump() {
            printf("f4_value: %d\n", this->f4_value);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(TbSysCommand_SetNumberOfChannels) == 0x8);

#pragma pack(push, 1)
    class SurfHashList {
    public:
        
        /*   0*/ SurfHashListItem * f0_arr5x5[5][5];
        /*  64*/ MyCEngineSurfDesc *f64_pSurfDesc;
        /*  68*/ MyCESurfHandle *f68_surfh_first;
        /*  6C*/ int field_6C;
        /*  70*/ SurfaceHolder *f70_holder_first;
        /*  74*/ int f74_holders_count;
        /*  78*/ int f78_squareSide_size;
        
        void dump() {
            printf("f0_arr5x5: %d\n", this->f0_arr5x5);
            printf("f64_pSurfDesc: MyCEngineSurfDesc(%p)\n", this->f64_pSurfDesc);
            printf("f68_surfh_first: MyCESurfHandle(%p)\n", this->f68_surfh_first);
            printf("field_6C: %d\n", this->field_6C);
            printf("f70_holder_first: SurfaceHolder(%p)\n", this->f70_holder_first);
            printf("f74_holders_count: %d\n", this->f74_holders_count);
            printf("f78_squareSide_size: %d\n", this->f78_squareSide_size);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SurfHashList) == 0x7C);

#pragma pack(push, 1)
    class SurfaceHolder {
    public:
        
        /*   0*/ SceneObject30 *f0_SceneObject30;
        /*   4*/ MyCESurfHandle *f4_surfh_first;
        /*   8*/ int f8_a3;
        /*   C*/ CEngineDDSurface *fC_ddsurf;
        /*  10*/ SurfaceHolder *f10_prev;
        /*  14*/ SurfaceHolder *f14_next;
        /*  18*/ SurfHashListItem *f18_hashItem_link;
        /*  1C*/ float f1C_1divSize;
        
        void dump() {
            printf("f0_SceneObject30: SceneObject30(%p)\n", this->f0_SceneObject30);
            printf("f4_surfh_first: MyCESurfHandle(%p)\n", this->f4_surfh_first);
            printf("f8_a3: %d\n", this->f8_a3);
            printf("fC_ddsurf: CEngineDDSurface(%p)\n", this->fC_ddsurf);
            printf("f10_prev: SurfaceHolder(%p)\n", this->f10_prev);
            printf("f14_next: SurfaceHolder(%p)\n", this->f14_next);
            printf("f18_hashItem_link: SurfHashListItem(%p)\n", this->f18_hashItem_link);
            printf("f1C_1divSize: %d\n", this->f1C_1divSize);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SurfaceHolder) == 0x20);

#pragma pack(push, 1)
    class SurfHashListItem {
    public:
        
        /*   0*/ SurfaceHolder *f0_holder_link;
        /*   4*/ SurfHashListItem *f4_next;
        /*   8*/ SurfHashListItem *f8_prev;
        /*   C*/ SurfHashListItem * fC_quadtree2x2[2][2];
        /*  1C*/ unsigned __int16 f1C_width_257;
        /*  1E*/ unsigned __int16 f1E_height_257;
        /*  20*/ char f20_x;
        /*  21*/ char f21_y;
        /*  22*/ char f22__aBool;
        /*  23*/ char field_23;
        
        void dump() {
            printf("f0_holder_link: SurfaceHolder(%p)\n", this->f0_holder_link);
            printf("f4_next: SurfHashListItem(%p)\n", this->f4_next);
            printf("f8_prev: SurfHashListItem(%p)\n", this->f8_prev);
            printf("fC_quadtree2x2: %d\n", this->fC_quadtree2x2);
            printf("f1C_width_257: %d\n", this->f1C_width_257);
            printf("f1E_height_257: %d\n", this->f1E_height_257);
            printf("f20_x: %d\n", this->f20_x);
            printf("f21_y: %d\n", this->f21_y);
            printf("f22__aBool: %d\n", this->f22__aBool);
            printf("field_23: %d\n", this->field_23);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SurfHashListItem) == 0x24);

#pragma pack(push, 1)
    class CEngineSprite {
    public:
        struct vtbl_t {
            /*   0*/ uint32_t *(__thiscall *CEngine2DPrimitive__fun_5769D0)(CEngineSprite *self, char);  // _DWORD *(__thiscall *)(_DWORD *this, char a2)
            /*   4*/ int(__thiscall *CEngineSprite__fun_57F3D0)(CEngineSprite *self, int, int);  // int (__thiscall *)(int this, int a2, int a3)
            /*   8*/ void(__thiscall *CEngineSprite__fun_57F7E0)(CEngineSprite *self, int);  // void (__thiscall *)(int this, int a2)
            /*   C*/ int(__stdcall *CEngineWorldPrimitive__fun_57F1C0)(int, int, int, uint32_t *, int);  // int (__stdcall *)(int a1, int a2, int a3, _DWORD *a4, int a5)
            /*  10*/ uint32_t *(__stdcall *CEngineVirtualPerspective2DAnimMesh__fun_5785E0)(uint32_t *, int);  // _DWORD *(__stdcall *)(_DWORD *a1, int a2)
            /*  14*/ int(__stdcall *ret_0_0args)();  // int (__stdcall *)()
            /*  18*/ int(__stdcall *ret_0_1args)(int);  // int (__stdcall *)(int a1)
            /*  1C*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int a1)
        };
        static_assert(sizeof(vtbl_t) == 0x20);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int field_4;
        /*   8*/ int field_8;
        /*   C*/ int field_C;
        /*  10*/ int field_10;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        /*  1C*/ float f1C_float;
        /*  20*/ float f20_float;
        /*  24*/ float f24_float;
        /*  28*/ uint8_t gap_28[12];
        /*  34*/ float f34_float;
        /*  38*/ float f38_float;
        /*  3C*/ float f3C_float;
        /*  40*/ uint32_t field_40;
        /*  44*/ int field_44;
        /*  48*/ int field_48;
        /*  4C*/ int field_4C;
        /*  50*/ int field_50;
        
        virtual ~CEngineSprite();
        void dump() {
            printf("field_4: %d\n", this->field_4);
            printf("field_8: %d\n", this->field_8);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %d\n", this->field_10);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
            printf("f1C_float: %d\n", this->f1C_float);
            printf("f20_float: %d\n", this->f20_float);
            printf("f24_float: %d\n", this->f24_float);
            printf("gap_28: %d\n", this->gap_28);
            printf("f34_float: %d\n", this->f34_float);
            printf("f38_float: %d\n", this->f38_float);
            printf("f3C_float: %d\n", this->f3C_float);
            printf("field_40: %d\n", this->field_40);
            printf("field_44: %d\n", this->field_44);
            printf("field_48: %d\n", this->field_48);
            printf("field_4C: %d\n", this->field_4C);
            printf("field_50: %d\n", this->field_50);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineSprite) == 0x54);

#pragma pack(push, 1)
    class SceneObject2EList {
    public:
        
        /*   0*/ int f0_unk;
        /*   4*/ int f4_maxCount;
        /*   8*/ SceneObject2E *f8_arr;
        
        void dump() {
            printf("f0_unk: %d\n", this->f0_unk);
            printf("f4_maxCount: %d\n", this->f4_maxCount);
            printf("f8_arr: SceneObject2E(%p)\n", this->f8_arr);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SceneObject2EList) == 0xC);

#pragma pack(push, 1)
    class SceneObject30List {
    public:
        
        /*   0*/ int f0_blockSize;
        /*   4*/ int f4_maxCount;
        /*   8*/ SceneObject30 *f8_arr;
        
        void dump() {
            printf("f0_blockSize: %d\n", this->f0_blockSize);
            printf("f4_maxCount: %d\n", this->f4_maxCount);
            printf("f8_arr: SceneObject30(%p)\n", this->f8_arr);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SceneObject30List) == 0xC);

#pragma pack(push, 1)
    class SceneObject2E {
    public:
        
        /*   0*/ MyCESurfHandle * f0_surfh[4];
        /*  10*/ uint32_t f10_props_flags;
        /*  14*/ int f14_props_reductionLevel_andFlags;
        /*  18*/ uint16_t f18_props_surfWidth8;
        /*  1A*/ uint16_t f1A_props_surfHeight8;
        /*  1C*/ char field_1C;
        /*  1D*/ char f1D_surfhCount;
        /*  1E*/ char f1E_propsCount;
        /*  1F*/ char f1F_trgObj;
        /*  20*/ char field_20;
        /*  21*/ char field_21;
        /*  22*/ uint8_t gap_22[2];
        /*  24*/ int f24_onj__meshSprite;
        /*  28*/ SceneObject2E *f28_next;
        /*  2C*/ __int16 f2C_;
        
        void dump() {
            printf("f0_surfh: %d\n", this->f0_surfh);
            printf("f10_props_flags: %d\n", this->f10_props_flags);
            printf("f14_props_reductionLevel_andFlags: %d\n", this->f14_props_reductionLevel_andFlags);
            printf("f18_props_surfWidth8: %d\n", this->f18_props_surfWidth8);
            printf("f1A_props_surfHeight8: %d\n", this->f1A_props_surfHeight8);
            printf("field_1C: %d\n", this->field_1C);
            printf("f1D_surfhCount: %d\n", this->f1D_surfhCount);
            printf("f1E_propsCount: %d\n", this->f1E_propsCount);
            printf("f1F_trgObj: %d\n", this->f1F_trgObj);
            printf("field_20: %d\n", this->field_20);
            printf("field_21: %d\n", this->field_21);
            printf("f24_onj__meshSprite: %d\n", this->f24_onj__meshSprite);
            printf("f28_next: SceneObject2E(%p)\n", this->f28_next);
            printf("f2C_: %d\n", this->f2C_);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SceneObject2E) == 0x2E);

#pragma pack(push, 1)
    class CEngine2DMeshSurface {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CEngine2DMeshSurface_scalar_destructor)(CEngine2DMeshSurface *self, unsigned int);  // std::ios_base *(__thiscall *)(std::ios_base *this, unsigned int a2)
            /*   4*/ int(__thiscall *CEngine2DMeshSurface__fun_578C00)(CEngine2DMeshSurface *self, int, int);  // int (__thiscall *)(int this, int a2, int a3)
        };
        static_assert(sizeof(vtbl_t) == 0x8);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int f4_zeroinit;
        /*   8*/ void *f8_16xbuf;
        /*   C*/ void *fC_6xbuf;
        /*  10*/ int f10_buf16_maxCount;
        /*  14*/ int f14_buf6_maxCount;
        /*  18*/ int field_18;
        /*  1C*/ float f1C_f0;
        /*  20*/ float f20_f1;
        /*  24*/ float f24_f2;
        /*  28*/ int field_28;
        
        virtual ~CEngine2DMeshSurface();
        void dump() {
            printf("f4_zeroinit: %d\n", this->f4_zeroinit);
            printf("f8_16xbuf: void(%p)\n", this->f8_16xbuf);
            printf("fC_6xbuf: void(%p)\n", this->fC_6xbuf);
            printf("f10_buf16_maxCount: %d\n", this->f10_buf16_maxCount);
            printf("f14_buf6_maxCount: %d\n", this->f14_buf6_maxCount);
            printf("field_18: %d\n", this->field_18);
            printf("f1C_f0: %d\n", this->f1C_f0);
            printf("f20_f1: %d\n", this->f20_f1);
            printf("f24_f2: %d\n", this->f24_f2);
            printf("field_28: %d\n", this->field_28);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngine2DMeshSurface) == 0x2C);

#pragma pack(push, 1)
    class CEngineStaticMesh {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CEngineStaticMesh_scalar_destructor)(CEngineStaticMesh *self, char);  // std::ios_base *(__thiscall *)(std::ios_base *this, char a2)
            /*   4*/ int(__thiscall *CEngineStaticMesh__fun_586150)(CEngineStaticMesh *self, int, int);  // int (__thiscall *)(int this, int a2, int a3)
            /*   8*/ int(__thiscall *CEngineStaticMesh_appendToSceneObject2EList)(CEngineStaticMesh *self, int);  // int (__thiscall *)(int this, int a2)
            /*   C*/ int(__stdcall *CEngineWorldPrimitive__fun_57F1C0)(int, int, int, uint32_t *, int);  // int (__stdcall *)(int a1, int a2, int a3, _DWORD *a4, int a5)
            /*  10*/ uint32_t *(__stdcall *CEngineWorldPrimitive__fun_5785E0)(uint32_t *, int);  // _DWORD *(__stdcall *)(_DWORD *a1, int a2)
            /*  14*/ int(__stdcall *ret_0_0args)();  // int (__stdcall *)()
            /*  18*/ int(__stdcall *ret_0_1args)(int);  // int (__stdcall *)(int a1)
            /*  1C*/ int(__stdcall *CEngineStaticMesh__fun_586130)(int);  // int (__stdcall *)(int a1)
        };
        static_assert(sizeof(vtbl_t) == 0x20);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int f4_zeroinit;
        /*   8*/ uint32_t *f8_v14;
        /*   C*/ uint8_t gap_C[4];
        /*  10*/ int f10_a5;
        /*  14*/ uint8_t gap_14[8];
        /*  1C*/ int field_1C;
        /*  20*/ uint32_t field_20;
        /*  24*/ uint32_t field_24;
        /*  28*/ uint32_t field_28;
        /*  2C*/ uint8_t gap_2C[5];
        /*  31*/ char field_31;
        
        virtual ~CEngineStaticMesh();
        void dump() {
            printf("f4_zeroinit: %d\n", this->f4_zeroinit);
            printf("f8_v14: uint32_t(%p)\n", this->f8_v14);
            printf("gap_C: %d\n", this->gap_C);
            printf("f10_a5: %d\n", this->f10_a5);
            printf("gap_14: %d\n", this->gap_14);
            printf("field_1C: %d\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("field_24: %d\n", this->field_24);
            printf("field_28: %d\n", this->field_28);
            printf("gap_2C: %d\n", this->gap_2C);
            printf("field_31: %d\n", this->field_31);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineStaticMesh) == 0x32);

#pragma pack(push, 1)
    class CEngineStaticHeightField {
    public:
        struct vtbl_t {
            /*   0*/ void *(__thiscall *CEngineStaticHeightField__fun_586F70)(CEngineStaticHeightField *self, char);  // std::ios_base *(__thiscall *)(std::ios_base *this, char a2)
            /*   4*/ int(__thiscall *CEngineStaticHeightField__fun_587010)(CEngineStaticHeightField *self, int, int);  // int (__thiscall *)(int this, int a2, int a3)
            /*   8*/ int(__thiscall *CEngineStaticHeightField_appendToSceneObject2EList)(CEngineStaticHeightField *self, int);  // int (__thiscall *)(int this, int a2)
            /*   C*/ int(__stdcall *CEngineWorldPrimitive__fun_57F1C0)(int, int, int, uint32_t *, int);  // int (__stdcall *)(int a1, int a2, int a3, _DWORD *a4, int a5)
            /*  10*/ uint32_t *(__stdcall *CEngineWorldPrimitive__fun_5785E0)(uint32_t *, int);  // _DWORD *(__stdcall *)(_DWORD *a1, int a2)
            /*  14*/ int(__stdcall *ret_0_0args)();  // int (__stdcall *)()
            /*  18*/ int(__stdcall *ret_0_1args)(int);  // int (__stdcall *)(int a1)
            /*  1C*/ int(__stdcall *CEngineStaticHeightField__fun_586FF0)(int);  // int (__stdcall *)(int a1)
        };
        static_assert(sizeof(vtbl_t) == 0x20);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int f4_zeroinit;
        /*   8*/ int f8_a8;
        /*   C*/ uint8_t gap_C[4];
        /*  10*/ uint32_t f10_buf;
        /*  14*/ int field_14;
        /*  18*/ int field_18;
        
        virtual ~CEngineStaticHeightField();
        void dump() {
            printf("f4_zeroinit: %d\n", this->f4_zeroinit);
            printf("f8_a8: %d\n", this->f8_a8);
            printf("gap_C: %d\n", this->gap_C);
            printf("f10_buf: %d\n", this->f10_buf);
            printf("field_14: %d\n", this->field_14);
            printf("field_18: %d\n", this->field_18);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineStaticHeightField) == 0x1C);

#pragma pack(push, 1)
    class CEngineUnlitProceduralMesh {
    public:
        struct vtbl_t {
            /*   0*/ uint32_t *(__thiscall *CEngineUnlitProceduralMesh__fun_588480)(CEngineUnlitProceduralMesh *self, char);  // _DWORD *(__thiscall *)(_DWORD *this, char a2)
            /*   4*/ int(__thiscall *CEngineUnlitProceduralMesh__fun_5884F0)(CEngineUnlitProceduralMesh *self, int, int);  // int (__thiscall *)(_DWORD *this, int a2, int a3)
            /*   8*/ unsigned int(__thiscall *CEngineUnlitProceduralMesh_appendToSceneObject2EList)(CEngineUnlitProceduralMesh *self, int);  // unsigned int (__thiscall *)(_DWORD *this, int a2)
            /*   C*/ int(__stdcall *CEngineWorldPrimitive__fun_57F1C0)(int, int, int, uint32_t *, int);  // int (__stdcall *)(int a1, int a2, int a3, _DWORD *a4, int a5)
            /*  10*/ uint32_t *(__stdcall *CEngineWorldPrimitive__fun_5785E0)(uint32_t *, int);  // _DWORD *(__stdcall *)(_DWORD *a1, int a2)
            /*  14*/ int(__stdcall *ret_0_0args)();  // int (__stdcall *)()
            /*  18*/ int(__stdcall *ret_0_1args)(int);  // int (__stdcall *)(int a1)
            /*  1C*/ void(__stdcall *ret_void_1args)(int);  // void (__stdcall *)(int a1)
        };
        static_assert(sizeof(vtbl_t) == 0x20);
        inline vtbl_t *&vtbl() { return *(vtbl_t **) this; }
        
    private:
        static vtbl_t vtbl_instance;
    public:
        inline static vtbl_t *class_vtbl() { return (vtbl_t *) funptr<&vtbl_instance>(); };
        template<typename T>
        bool isa() { return (*(uint32_t *) this) == T::class_vtbl(); }
        
        /*   4*/ int f4_zeroinit;
        /*   8*/ int f8_a2;
        /*   C*/ uint32_t field_C;
        /*  10*/ char *field_10;
        /*  14*/ char *f14_compBuf;
        /*  18*/ char *field_18;
        /*  1C*/ char *field_1C;
        /*  20*/ uint32_t field_20;
        /*  24*/ char *f24_bufPos;
        /*  28*/ char *field_28;
        /*  2C*/ uint8_t gap_2C[36];
        /*  50*/ int field_50;
        /*  54*/ unsigned __int16 field_54;
        /*  56*/ uint8_t gap_56[2];
        /*  58*/ int field_58;
        
        virtual ~CEngineUnlitProceduralMesh();
        void dump() {
            printf("f4_zeroinit: %d\n", this->f4_zeroinit);
            printf("f8_a2: %d\n", this->f8_a2);
            printf("field_C: %d\n", this->field_C);
            printf("field_10: %s\n", this->field_10);
            printf("f14_compBuf: %s\n", this->f14_compBuf);
            printf("field_18: %s\n", this->field_18);
            printf("field_1C: %s\n", this->field_1C);
            printf("field_20: %d\n", this->field_20);
            printf("f24_bufPos: %s\n", this->f24_bufPos);
            printf("field_28: %s\n", this->field_28);
            printf("gap_2C: %d\n", this->gap_2C);
            printf("field_50: %d\n", this->field_50);
            printf("field_54: %d\n", this->field_54);
            printf("gap_56: %d\n", this->gap_56);
            printf("field_58: %d\n", this->field_58);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CEngineUnlitProceduralMesh) == 0x5C);

#pragma pack(push, 1)
    class SceneObject30 {
    public:
        
        /*   0*/ SurfaceHolder * f0_holders[4];
        /*  10*/ uint32_t f10_props_flags;
        /*  14*/ int f14_props_reductionLevel_andFlags;
        /*  18*/ uint16_t f18_props_surfWidth8;
        /*  1A*/ uint16_t f1A_props_surfHeight8;
        /*  1C*/ char f1C_surfhCount;
        /*  1D*/ char f1D_texStageCountArrSize;
        /*  1E*/ unsigned __int8 f1E_d3dtexStageCount[2];
        /*  20*/ char f20_sceneObj2E_f21;
        /*  21*/ uint8_t gap_21[3];
        /*  24*/ SceneObject2E *f24_pobj2E;
        /*  28*/ SceneObject30 *f28_prev;
        /*  2C*/ SceneObject30 *f2C_next;
        
        void dump() {
            printf("f0_holders: %d\n", this->f0_holders);
            printf("f10_props_flags: %d\n", this->f10_props_flags);
            printf("f14_props_reductionLevel_andFlags: %d\n", this->f14_props_reductionLevel_andFlags);
            printf("f18_props_surfWidth8: %d\n", this->f18_props_surfWidth8);
            printf("f1A_props_surfHeight8: %d\n", this->f1A_props_surfHeight8);
            printf("f1C_surfhCount: %d\n", this->f1C_surfhCount);
            printf("f1D_texStageCountArrSize: %d\n", this->f1D_texStageCountArrSize);
            printf("f1E_d3dtexStageCount: %d\n", this->f1E_d3dtexStageCount);
            printf("f20_sceneObj2E_f21: %d\n", this->f20_sceneObj2E_f21);
            printf("f24_pobj2E: SceneObject2E(%p)\n", this->f24_pobj2E);
            printf("f28_prev: SceneObject30(%p)\n", this->f28_prev);
            printf("f2C_next: SceneObject30(%p)\n", this->f2C_next);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SceneObject30) == 0x30);

#pragma pack(push, 1)
    class SurfHashList2 {
    public:
        
        /*   0*/ MyCEngineSurfDesc *f0_surfDesc;
        /*   4*/ MyCESurfHandle *f4_surfh_first;
        /*   8*/ MyCESurfHandle * f8_arr5x5_surfh[5][5];
        /*  6C*/ uint32_t * f6C_arr5x5[5][5];
        /*  D0*/ CEngineDDSurface *fD0_ddsurf;
        /*  D4*/ int fD4_f8count;
        /*  D8*/ SurfaceHolder *fD8_holder_first;
        /*  DC*/ uint32_t fDC_holder_count;
        /*  E0*/ int fE0_holder_size;
        
        void dump() {
            printf("f0_surfDesc: MyCEngineSurfDesc(%p)\n", this->f0_surfDesc);
            printf("f4_surfh_first: MyCESurfHandle(%p)\n", this->f4_surfh_first);
            printf("f8_arr5x5_surfh: %d\n", this->f8_arr5x5_surfh);
            printf("f6C_arr5x5: %d\n", this->f6C_arr5x5);
            printf("fD0_ddsurf: CEngineDDSurface(%p)\n", this->fD0_ddsurf);
            printf("fD4_f8count: %d\n", this->fD4_f8count);
            printf("fD8_holder_first: SurfaceHolder(%p)\n", this->fD8_holder_first);
            printf("fDC_holder_count: %d\n", this->fDC_holder_count);
            printf("fE0_holder_size: %d\n", this->fE0_holder_size);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(SurfHashList2) == 0xE4);

#pragma pack(push, 1)
    class DxDeviceInfo {
    public:
        
        /*   0*/ char f0_name[30];
        /*  1E*/ char f1E_desc[80];
        /*  6E*/ int f6E_pGuid;
        /*  72*/ GUID f72_guid;
        /*  82*/ DDCAPS f82_ddcaps;
        /* 1FE*/ int f1FE_modeListCount;
        /* 202*/ int f202_infoListCount;
        /* 206*/ DxModeInfo *f206_modeList;
        /* 20A*/ DxD3dInfo *f20A_infoList;
        /* 20E*/ int f20E_dwVendorId;
        /* 212*/ int f212_dwDeviceId;
        /* 216*/ int f216_isVendor121A;
        
        void dump() {
            printf("f0_name: %d\n", this->f0_name);
            printf("f1E_desc: %d\n", this->f1E_desc);
            printf("f6E_pGuid: %d\n", this->f6E_pGuid);
            printf("f72_guid: %d\n", this->f72_guid);
            printf("f82_ddcaps: %d\n", this->f82_ddcaps);
            printf("f1FE_modeListCount: %d\n", this->f1FE_modeListCount);
            printf("f202_infoListCount: %d\n", this->f202_infoListCount);
            printf("f206_modeList: DxModeInfo(%p)\n", this->f206_modeList);
            printf("f20A_infoList: DxD3dInfo(%p)\n", this->f20A_infoList);
            printf("f20E_dwVendorId: %d\n", this->f20E_dwVendorId);
            printf("f212_dwDeviceId: %d\n", this->f212_dwDeviceId);
            printf("f216_isVendor121A: %d\n", this->f216_isVendor121A);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DxDeviceInfo) == 0x21A);

#pragma pack(push, 1)
    class DxD3dInfo {
    public:
        
        /*   0*/ char f0_name[30];
        /*  1E*/ char f1E_desc[80];
        /*  6E*/ GUID *f6E_pGuid;
        /*  72*/ GUID f72_guid;
        /*  82*/ int field_82;
        /*  86*/ D3DDEVICEDESC f86_devDesc;
        /* 182*/ uint32_t f182_hasDesc;
        /* 186*/ uint32_t f186_texCapsAnd1;
        /* 18A*/ uint32_t f18A_hasZbuffer;
        /* 18E*/ int field_18E;
        /* 192*/ int field_192;
        /* 196*/ int field_196;
        
        void dump() {
            printf("f0_name: %d\n", this->f0_name);
            printf("f1E_desc: %d\n", this->f1E_desc);
            printf("f6E_pGuid: GUID(%p)\n", this->f6E_pGuid);
            printf("f72_guid: %d\n", this->f72_guid);
            printf("field_82: %d\n", this->field_82);
            printf("f86_devDesc: %d\n", this->f86_devDesc);
            printf("f182_hasDesc: %d\n", this->f182_hasDesc);
            printf("f186_texCapsAnd1: %d\n", this->f186_texCapsAnd1);
            printf("f18A_hasZbuffer: %d\n", this->f18A_hasZbuffer);
            printf("field_18E: %d\n", this->field_18E);
            printf("field_192: %d\n", this->field_192);
            printf("field_196: %d\n", this->field_196);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DxD3dInfo) == 0x19A);

#pragma pack(push, 1)
    class DxModeInfo {
    public:
        
        /*   0*/ uint32_t f0_dwWidth;
        /*   4*/ uint32_t f4_dwHeight;
        /*   8*/ uint32_t f8_dwRGBBitCount;
        /*   C*/ uint32_t fC_hasFlag_shr5and1;
        /*  10*/ uint8_t gap_10[107];
        /*  7B*/ char field_7B;
        
        void dump() {
            printf("f0_dwWidth: %d\n", this->f0_dwWidth);
            printf("f4_dwHeight: %d\n", this->f4_dwHeight);
            printf("f8_dwRGBBitCount: %d\n", this->f8_dwRGBBitCount);
            printf("fC_hasFlag_shr5and1: %d\n", this->fC_hasFlag_shr5and1);
            printf("gap_10: %d\n", this->gap_10);
            printf("field_7B: %d\n", this->field_7B);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(DxModeInfo) == 0x7C);

#pragma pack(push, 1)
    class CFileManager_f130 {
    public:
        
        /*   0*/ char field_0;
        /*   1*/ uint8_t gap_1[3];
        /*   4*/ CFileManager_f130Item *f4_first;
        /*   8*/ uint32_t f8_size;
        
        void dump() {
            printf("field_0: %d\n", this->field_0);
            printf("f4_first: CFileManager_f130Item(%p)\n", this->f4_first);
            printf("f8_size: %d\n", this->f8_size);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CFileManager_f130) == 0xC);

#pragma pack(push, 1)
    class CFileManager_f130Item {
    public:
        
        /*   0*/ CFileManager_f130Item *f0_prev;
        /*   4*/ CFileManager_f130Item *f4_next;
        /*   8*/ FileStorageBase f8_stor;
        
        void dump() {
            printf("f0_prev: CFileManager_f130Item(%p)\n", this->f0_prev);
            printf("f4_next: CFileManager_f130Item(%p)\n", this->f4_next);
        }
    };
#pragma pack(pop)
    static_assert(sizeof(CFileManager_f130Item) == 0x10);

}  // namespace dk2

