// ---  warning: file is managed by gen_globals_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef DK2_GLOBALS_H  // --------------------------------  /* auto */
#define DK2_GLOBALS_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <xmmintrin.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <dk2/AABB.h>  // --------------------------------  /* auto */
#include <dk2/ButtonCfg.h>  // ---------------------------  /* auto */
#include <dk2/CBridge.h>  // -----------------------------  /* auto */
#include <dk2/CDefaultPlayerInterface.h>  // -------------  /* auto */
#include <dk2/CEngineSurfaceScaler.h>  // ----------------  /* auto */
#include <dk2/CEntryComponent.h>  // ---------------------  /* auto */
#include <dk2/CFrontEndComponent.h>  // ------------------  /* auto */
#include <dk2/CGameComponent.h>  // ----------------------  /* auto */
#include <dk2/CMemLoadIFFFile.h>  // ---------------------  /* auto */
#include <dk2/CPCEngineInterface.h>  // ------------------  /* auto */
#include <dk2/CSoundSystem.h>  // ------------------------  /* auto */
#include <dk2/CursorDrawer.h>  // ------------------------  /* auto */
#include <dk2/DdModeList.h>  // --------------------------  /* auto */
#include <dk2/FPUControlWordWithState.h>  // -------------  /* auto */
#include <dk2/FontObj.h>  // -----------------------------  /* auto */
#include <dk2/GameActionRecord.h>  // --------------------  /* auto */
#include <dk2/GameScoreRecord.h>  // ---------------------  /* auto */
#include <dk2/Idx3b.h>  // -------------------------------  /* auto */
#include <dk2/KeyEntry.h>  // ----------------------------  /* auto */
#include <dk2/Mat3x3f.h>  // -----------------------------  /* auto */
#include <dk2/MovieRenderer.h>  // -----------------------  /* auto */
#include <dk2/My16BitTexture.h>  // ----------------------  /* auto */
#include <dk2/My24BitTexture.h>  // ----------------------  /* auto */
#include <dk2/My32BitTexture.h>  // ----------------------  /* auto */
#include <dk2/My8BitTexture.h>  // -----------------------  /* auto */
#include <dk2/MyCEngineSurfDesc.h>  // -------------------  /* auto */
#include <dk2/MyDdSurfaceEx.h>  // -----------------------  /* auto */
#include <dk2/MyDirectDraw.h>  // ------------------------  /* auto */
#include <dk2/MyEntryBuf_MyScaledSurface.h>  // ----------  /* auto */
#include <dk2/MyEntryBuf_Tiangle34.h>  // ----------------  /* auto */
#include <dk2/MyEntryBuf_Triangle24.h>  // ---------------  /* auto */
#include <dk2/MyEntryBuf_Vertex18.h>  // -----------------  /* auto */
#include <dk2/MyEntryBuf_uint16.h>  // -------------------  /* auto */
#include <dk2/MyGame.h>  // ------------------------------  /* auto */
#include <dk2/MyInputManagerCb.h>  // --------------------  /* auto */
#include <dk2/MyLangObj.h>  // ---------------------------  /* auto */
#include <dk2/MyResources.h>  // -------------------------  /* auto */
#include <dk2/MyStringHashMap_MyCESurfHandle.h>  // ------  /* auto */
#include <dk2/MyStringHashMap_MyMeshResourceHolder.h>       /* auto */
#include <dk2/MyStringHashMap_MyScaledSurface.h>  // -----  /* auto */
#include <dk2/MySurfDesc.h>  // --------------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
#include <dk2/MyTextures.h>  // --------------------------  /* auto */
#include <dk2/NameCfg.h>  // -----------------------------  /* auto */
#include <dk2/Obj79DC68.h>  // ---------------------------  /* auto */
#include <dk2/PathStr.h>  // -----------------------------  /* auto */
#include <dk2/Pos2p.h>  // -------------------------------  /* auto */
#include <dk2/RenderData.h>  // --------------------------  /* auto */
#include <dk2/SceneObject2EList.h>  // -------------------  /* auto */
#include <dk2/SceneObject30List.h>  // -------------------  /* auto */
#include <dk2/ScreenObjectArr.h>  // ---------------------  /* auto */
#include <dk2/StaticListeners.h>  // ---------------------  /* auto */
#include <dk2/StubStruc6C3DA0.h>  // ---------------------  /* auto */
#include <dk2/Vec3f.h>  // -------------------------------  /* auto */
#include <dk2/Vec3f_arr1024.h>  // -----------------------  /* auto */
#include <dk2/Vec3s.h>  // -------------------------------  /* auto */
#include <dk2/VerticesData.h>  // ------------------------  /* auto */
#include <dk2/WinEventHandlers.h>  // --------------------  /* auto */
#include <dk2/WindowCfg.h>  // ---------------------------  /* auto */
#include <dk2/arr_66C780_t.h>  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEnginePrimitiveBase;  // -----------------------  /* auto */
  struct CTag;  // ---------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct DxDeviceInfo;  // -------------------------------  /* auto */
  struct Idx3s;  // --------------------------------------  /* auto */
  struct MyCESurfHandle;  // -----------------------------  /* auto */
  struct MyMeshResourceHolder;  // -----------------------  /* auto */
  struct MyNBitTexture;  // ------------------------------  /* auto */
  struct MyTextFont;  // ---------------------------------  /* auto */
  struct MyTextText;  // ---------------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
  struct SceneObject30;  // ------------------------------  /* auto */
  struct SurfHashList;  // -------------------------------  /* auto */
  struct SurfHashList2;  // ------------------------------  /* auto */
  struct ThreadCtx;  // ----------------------------------  /* auto */
  struct Triangle24;  // ---------------------------------  /* auto */
  struct Uv2f;  // ---------------------------------------  /* auto */
  struct Uv2f_arr1024;  // -------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

#pragma pack(push, 1)
class VLCtable {
public:

    /*   0*/ char code;
    /*   1*/ char len;

};
#pragma pack(pop)
static_assert(sizeof(VLCtable) == 0x2);

#pragma pack(push, 1)
class sVLCtable {
public:

    /*   0*/ __int16 code;
    /*   2*/ uint8_t len;

};
#pragma pack(pop)
static_assert(sizeof(sVLCtable) == 0x3);

#pragma pack(push, 1)
class VLCtable_tab2 {
public:

    /*   0*/ VLCtable arr[5];

};
#pragma pack(pop)
static_assert(sizeof(VLCtable_tab2) == 0xA);

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
/*00647830*/ extern DIOBJECTDATAFORMAT &c_dfDIMouseFormat;  /* auto */
/*006478A0*/ extern DIOBJECTDATAFORMAT &c_dfDIKeyboardFormat;  /* auto */
/*006551C0*/ extern int32_t (__stdcall *(&mgsr_drawFuns)[60])();  /* auto */
/*0065FB14*/ extern __int16 (&asm_update_wordArr)[32];      /* auto */
/*0065FC94*/ extern __int16 (&asm_update2_wordArr)[257];    /* auto */
/*0066C424*/ extern void *(&CEntryComponent_vftable)[6];    /* auto */
/*0066C45C*/ extern void *(&CComponent_vftable)[6];  // --  /* auto */
/*0066C4A4*/ extern void *(&CDefaultPlayerInterface_vftable)[23];  /* auto */
/*0066C780*/ extern arr_66C780_t (&arr_66C780)[53];  // --  /* auto */
/*0066CC94*/ extern void *(&CBridge_vftable)[101];  // ---  /* auto */
/*0066CF7C*/ extern void *(&CBridgeInterface_vftable)[80];  /* auto */
/*0066D1D4*/ extern void *(&CEngineInterface_vftable)[68];  /* auto */
/*0066D3E4*/ extern void *(&CMap_vftable)[4];  // --------  /* auto */
/*0066D404*/ extern void *(&CState_vftable)[4];  // ------  /* auto */
/*0066D454*/ extern void *(&CRenderInfo_vftable)[2];  // -  /* auto */
/*0066D464*/ extern void *(&CThing_vftable)[21];  // -----  /* auto */
/*0066D4BC*/ extern void *(&CPhysicalThing_vftable)[24];    /* auto */
/*0066D524*/ extern void *(&CCreature_vftable)[37];  // --  /* auto */
/*0066D5BC*/ extern void *(&CMovingThing_vftable)[37];      /* auto */
/*0066D654*/ extern void *(&CObject_vftable)[37];  // ----  /* auto */
/*0066D6EC*/ extern void *(&CDoor_vftable)[24];  // ------  /* auto */
/*0066D754*/ extern void *(&CTrap_vftable)[24];  // ------  /* auto */
/*0066D86C*/ extern void *(&CShot_vftable)[37];  // ------  /* auto */
/*0066D904*/ extern void *(&CDeadBody_vftable)[37];  // --  /* auto */
/*0066D99C*/ extern void *(&CPlayer_vftable)[2];  // -----  /* auto */
/*0066DB7C*/ extern void *(&CRoom_vftable)[3];  // -------  /* auto */
/*0066E3AC*/ extern void *(&CCreaturePool_vftable)[4];      /* auto */
/*0066E3C4*/ extern void *(&CResearchOrder_vftable)[4];     /* auto */
/*0066E3DC*/ extern void *(&CTag_vftable)[2];  // --------  /* auto */
/*0066E3EC*/ extern void *(&CWorld_vftable)[230];  // ----  /* auto */
/*0066E7A4*/ extern void *(&CWorldInterface_vftable)[223];  /* auto */
/*0066EB3C*/ extern void *(&CCommunicationInterface_vftable)[19];  /* auto */
/*0066EB8C*/ extern void *(&CLocalCommunication_vftable)[19];  /* auto */
/*0066EC4C*/ extern void *(&CGameComponent_vftable)[6];     /* auto */
/*0066EC84*/ extern void *(&CNetworkComponent_vftable)[6];  /* auto */
/*0066ECA4*/ extern void *(&CButton_vftable)[4];  // -----  /* auto */
/*0066ECBC*/ extern void *(&CVerticalSlider_vftable)[21];   /* auto */
/*0066ED14*/ extern void *(&CGadget_vftable)[1];  // -----  /* auto */
/*0066ED1C*/ extern void *(&CGuiManager_vftable)[1];  // -  /* auto */
/*0066ED54*/ extern void *(&CListBox_vftable)[4];  // ----  /* auto */
/*0066EE0C*/ extern void *(&CHorizontalSlider_vftable)[21];  /* auto */
/*0066EE64*/ extern void *(&CRadioButton_vftable)[4];       /* auto */
/*0066EE7C*/ extern void *(&CClickButton_vftable)[4];       /* auto */
/*0066EE94*/ extern void *(&CWindow_vftable)[2];  // -----  /* auto */
/*0066EF3C*/ extern void *(&CFrontEndComponent_vftable)[6];  /* auto */
/*0066F20C*/ extern void *(&CWindowTest_vftable)[1];  // -  /* auto */
/*0066F214*/ extern void *(&CFileManager_vftable)[12];      /* auto */
/*0066F24C*/ extern void *(&TbDiscFile_vftable)[10];  // -  /* auto */
/*0066F338*/ extern const char *&Drive;  // --------------  /* auto */
/*0066F34C*/ extern const char *&lpSubKey;  // -----------  /* auto */
/*0066F3AC*/ extern void *(&TbDiscFileStorage_vftable)[12];  /* auto */
/*0066F46C*/ extern const char *&lpValueName;  // --------  /* auto */
/*0066F7FC*/ extern void *(&CSoundSystem_vftable)[32];      /* auto */
/*0066F90C*/ extern void *(&TbAudioSystem_vftable)[7];      /* auto */
/*0066F92C*/ extern void *(&TbSysCommand_SetNumberOfChannels_vftable)[1];  /* auto */
/*0066FA8C*/ extern void *(&CEngine2DSprite_vftable)[2];    /* auto */
/*0066FA9C*/ extern void *(&CEnginePrimitiveBase_vftable)[2];  /* auto */
/*0066FAAC*/ extern void *(&CEngine2DRotatableSprite_vftable)[2];  /* auto */
/*0066FABC*/ extern void *(&CEngine2DStaticMesh_vftable)[5];  /* auto */
/*0066FAD4*/ extern void *(&CEngine2DAnimMesh_vftable)[5];  /* auto */
/*0066FAEC*/ extern void *(&CEngineVirtualPerspective2DAnimMesh_vftable)[5];  /* auto */
/*0066FB04*/ extern void *(&CEngine2DMeshSurface_vftable)[2];  /* auto */
/*0066FB14*/ extern void *(&CEngine2DPrimitive_vftable)[2];  /* auto */
/*0066FB24*/ extern void *(&CIFFFile_vftable)[3];  // ----  /* auto */
/*0066FB34*/ extern void *(&CDirectIFFFile_vftable)[3];     /* auto */
/*0066FB9C*/ extern void *(&CMemLoadIFFFile_vftable)[3];    /* auto */
/*0066FBBC*/ extern void *(&CAnimMeshResource_vftable)[3];  /* auto */
/*0066FBCC*/ extern void *(&CMeshResourceBase_vftable)[3];  /* auto */
/*0066FBDC*/ extern void *(&CPolyMeshResource_vftable)[3];  /* auto */
/*0066FBEC*/ extern void *(&CMeshGroup_vftable)[3];  // --  /* auto */
/*0066FCCC*/ extern void *(&CEngineSprite_vftable)[8];      /* auto */
/*0066FCF4*/ extern void *(&CEngineQuadPlane_vftable)[8];   /* auto */
/*0066FD1C*/ extern void *(&CEngineDynamicMesh_vftable)[8];  /* auto */
/*0066FD44*/ extern void *(&CEngineWorldPrimitive_vftable)[7];  /* auto */
/*0066FD64*/ extern void *(&CEngineAnimMesh_vftable)[8];    /* auto */
/*0066FD8C*/ extern void *(&CEngineStaticMesh_vftable)[8];  /* auto */
/*0066FDB4*/ extern void *(&CEngineStaticHeightField_vftable)[8];  /* auto */
/*0066FDDC*/ extern void *(&CEngineDynamicHeightField_vftable)[8];  /* auto */
/*0066FE04*/ extern void *(&CEngineUnlitProceduralMesh_vftable)[8];  /* auto */
/*0067034C*/ extern void *(&CEngineSurface_vftable)[9];     /* auto */
/*00670374*/ extern void *(&CEngineSurfaceBase_vftable)[9];  /* auto */
/*0067039C*/ extern void *(&CEngineCompressedSurface_vftable)[9];  /* auto */
/*006703C4*/ extern void *(&CEngineDDSurface_vftable)[9];   /* auto */
/*00670574*/ extern void *(&CPCEngineInterface_vftable)[70];  /* auto */
/*00671C90*/ extern GUID &CLSID_IKsPropertySet;  // ------  /* auto */
/*00671CA0*/ extern GUID &CLSID_IDirectSound3DBuffer;       /* auto */
/*00671D40*/ extern GUID &CLSID_GUID_SysKeyboard;  // ----  /* auto */
/*00671D50*/ extern GUID &CLSID_GUID_SysMouse;  // -------  /* auto */
/*00671D60*/ extern GUID &CLSID_GUID_Key;  // ------------  /* auto */
/*00671D70*/ extern GUID &CLSID_GUID_ZAxis;  // ----------  /* auto */
/*00671D80*/ extern GUID &CLSID_GUID_YAxis;  // ----------  /* auto */
/*00671D90*/ extern GUID &CLSID_GUID_XAxis;  // ----------  /* auto */
/*00671DA0*/ extern GUID &CLSID_IDirect3DTexture2;  // ---  /* auto */
/*00671DB0*/ extern GUID &CLSID_IDirect3DHALDevice;  // --  /* auto */
/*00671DC0*/ extern GUID &CLSID_IDirect3D3;  // ----------  /* auto */
/*00671DD0*/ extern GUID &CLSID_IDirect3D2;  // ----------  /* auto */
/*00671DE0*/ extern GUID &CLSID_IDirect3D;  // -----------  /* auto */
/*00671DF0*/ extern GUID &CLSID_IDirectDrawGammaControl;    /* auto */
/*00671E00*/ extern GUID &CLSID_IDirectDrawSurface4;  // -  /* auto */
/*00671E10*/ extern GUID &CLSID_IDirectDrawSurface2;  // -  /* auto */
/*00671E20*/ extern GUID &CLSID_IDirectDraw4;  // --------  /* auto */
/*00671E30*/ extern GUID &CLSID_IDirectDraw2;  // --------  /* auto */
/*00671E40*/ extern void *(&My8BitTexture_vftable)[16];     /* auto */
/*00671E80*/ extern void *(&My16BitTexture_vftable)[16];    /* auto */
/*00671EC0*/ extern void *(&My24BitTexture_vftable)[16];    /* auto */
/*00671F00*/ extern void *(&My32BitTexture_vftable)[16];    /* auto */
/*00671F40*/ extern void *(&FPUControlWord_vftable)[1];     /* auto */
/*00671F80*/ extern void *(&DiscFileBase_vftable)[9];       /* auto */
/*006722D0*/ extern void *(&MyStr_vftable)[11];  // ------  /* auto */
/*00672300*/ extern void *(&MySubStr_vftable)[2];  // ----  /* auto */
/*00672340*/ extern void *(&MyLList_WinEventCb_vftable)[1];  /* auto */
/*00672348*/ extern void *(&FileStorageBase_vftable)[12];   /* auto */
/*00672380*/ extern void *(&MyInputManagerCb_vftable)[7];   /* auto */
/*006723B8*/ extern void *(&Obj6723B8_vftable)[5];  // ---  /* auto */
/*006723D0*/ extern void *(&MyCb6723D0_vftable)[2];  // --  /* auto */
/*006723D8*/ extern void *(&MyCbHandle_vftable)[1];  // --  /* auto */
/*006723E0*/ extern void *(&MyCallback_vftable)[2];  // --  /* auto */
/*006723E8*/ extern void *(&MyInputListenersHolder_vftable)[7];  /* auto */
/*00672408*/ extern void *(&MySharedObj_vftable)[3];  // -  /* auto */
/*00672418*/ extern void *(&MyComEx_vftable)[7];  // -----  /* auto */
/*00672438*/ extern void *(&MyWindowMsgs_vftable)[5];       /* auto */
/*0067244C*/ extern void *(&WndMsgDxAction_vftable)[1];     /* auto */
/*00672450*/ extern void *(&WndMsgDxActionList_vftable)[1];  /* auto */
/*00672458*/ extern void *(&MyCollectDxAction_vftable)[7];  /* auto */
/*00672478*/ extern int32_t (&MyDxInputManagerCb_idxs)[2];  /* auto */
/*00672480*/ extern void *(&MyDxInputManagerCb_vftable)[7];  /* auto */
/*006724A8*/ extern void *(&MyMouseUpdater_vftable)[7];     /* auto */
/*00672500*/ extern void *(&Obj672500_vftable)[3];  // ---  /* auto */
/*00672510*/ extern void *(&Obj672510_vftable)[3];  // ---  /* auto */
/*00672520*/ extern void *(&Obj672520Interface_vftable)[3];  /* auto */
/*006725D8*/ extern void *(&MyInputStream_vftable)[12];     /* auto */
/*00672608*/ extern int32_t (&tqi_dword_672608)[64];  // -  /* auto */
/*00672708*/ extern void *(&MyDirectory_vftable)[13];       /* auto */
/*00672740*/ extern void *(&MyWadDirectory_vftable)[13];    /* auto */
/*00672778*/ extern void *(&MyDiskDirectory_vftable)[14];   /* auto */
/*006727B0*/ extern void *(&DxActionQueue_vftable)[9];      /* auto */
/*006727D8*/ extern void *(&LockBase_vftable)[9];  // ----  /* auto */
/*006727FC*/ extern void *(&AsyncThing_vftable)[1];  // --  /* auto */
/*00672800*/ extern void *(&MySignalBase_vftable)[5];       /* auto */
/*00672828*/ extern void *(&MyDxInputState_vftable)[7];     /* auto */
/*00672844*/ extern void *(&Obj672844_vftable)[1];  // ---  /* auto */
/*00672848*/ extern int32_t (&MyCb6723D0_idxs)[3];  // ---  /* auto */
/*00672854*/ extern void *(&CursorDrawer_vftable)[1];       /* auto */
/*00672868*/ extern void *(&MyDxDevice_vftable)[3];  // --  /* auto */
/*00672878*/ extern int32_t (&MyControlKeysCb_idxs)[2];     /* auto */
/*00672888*/ extern void *(&ControlKeysUpdater_vftable)[7];  /* auto */
/*006728A8*/ extern int32_t (&MyMouseCb_idxs)[2];  // ----  /* auto */
/*006728B0*/ extern void *(&MyMouse_vftable)[7];  // -----  /* auto */
/*006728E0*/ extern void *(&MyDxMouse_vftable)[6];  // ---  /* auto */
/*006728F8*/ extern void *(&MouseRgbDxAction_vftable)[1];   /* auto */
/*006728FC*/ extern void *(&MouseRgbDxActionList_vftable)[1];  /* auto */
/*00672900*/ extern void *(&MouseXyzDxAction_vftable)[1];   /* auto */
/*00672904*/ extern void *(&MouseXyzDxActionList_vftable)[1];  /* auto */
/*00672920*/ extern void *(&MyDxKeyboard_vftable)[6];       /* auto */
/*006729F8*/ extern void *(&ControlSurf_vftable)[1];  // -  /* auto */
/*00672A00*/ extern char (&libpng_png_digit)[16];  // ----  /* auto */
/*00672A10*/ extern int32_t (&zlib_crc_table)[256];  // --  /* auto */
/*00672E70*/ extern void *(&Obj672E70_vftable)[3];  // ---  /* auto */
/*00672E80*/ extern void *(&Obj672E80_vftable)[3];  // ---  /* auto */
/*00672EC0*/ extern void *(&MyLocalStr_vftable)[9];  // --  /* auto */
/*00672EE4*/ extern void *(&MyLList_WadFileObj_vftable)[1];  /* auto */
/*00672EE8*/ extern void *(&MyLList_WadDirObj_vftable)[1];  /* auto */
/*00672EF8*/ extern void *(&MyConcurrentStream_vftable)[12];  /* auto */
/*00672FE8*/ extern void *(&MyFileStream_vftable)[12];      /* auto */
/*00673018*/ extern void *(&MyMemoryMapStream_vftable)[12];  /* auto */
/*00673048*/ extern void *(&MyDirectInput_vftable)[6];      /* auto */
/*00673070*/ extern int32_t (&zlib_border)[19];  // ------  /* auto */
/*006730C0*/ extern void *(&MyCachedOffsStream_vftable)[12];  /* auto */
/*00673390*/ extern int32_t (__cdecl *(&funcs_6057F7)[3])(int32_t, int32_t);  /* auto */
/*00673E48*/ extern void *(&MyTbAudioSystem_vftable)[7];    /* auto */
/*00674058*/ extern void *(&MyUnk674058_vftable)[1];  // -  /* auto */
/*00674430*/ extern IID &rclsid;  // ---------------------  /* auto */
/*00674470*/ extern IID &riid;  // -----------------------  /* auto */
/*00676378*/ extern int16_t (&wordArr_00676378)[32];  // -  /* auto */
/*0067B8C0*/ extern void *(&FontObj_vftable)[1];  // -----  /* auto */
/*0067B948*/ extern void *(&MyObj67B948_vftable)[1];  // -  /* auto */
/*0067B950*/ extern void *(&MyTextText_vftable)[5];  // --  /* auto */
/*0067B968*/ extern void *(&MyTextBase_vftable)[5];  // --  /* auto */
/*0067B9B0*/ extern void *(&MyTextUniToMB_vftable)[5];      /* auto */
/*0067B9C8*/ extern void *(&MyTextMBToUni_vftable)[5];      /* auto */
/*0067B9F8*/ extern void *(&MyCRBase_vftable)[3];  // ----  /* auto */
/*0067BA08*/ extern void *(&MyTRBase_vftable)[4];  // ----  /* auto */
/*0067BA18*/ extern void *(&FontObjWr_vftable)[1];  // ---  /* auto */
/*0067BA30*/ extern void *(&MyFileStorage_vftable)[5];      /* auto */
/*0067BA48*/ extern void *(&MyDRBase_vftable)[5];  // ----  /* auto */
/*0067BAE0*/ extern void *(&MyTextMB_vftable)[5];  // ----  /* auto */
/*0067BAF8*/ extern void *(&MyTextFont_vftable)[11];  // -  /* auto */
/*0067BB28*/ extern void *(&MyFontRendererBase_vftable)[7];  /* auto */
/*0067BEE0*/ extern char (&String1)[22];  // -------------  /* auto */
/*0067CB48*/ extern DIDATAFORMAT &c_dfDIMouse;  // -------  /* auto */
/*0067CB60*/ extern DIDATAFORMAT &c_dfDIKeyboard;  // ----  /* auto */
/*0068E000*/ extern void (__cdecl *&__xc_a_1)();  // -----  /* auto */
/*0068E348*/ extern void (__cdecl *&__xc_z_1)();  // -----  /* auto */
/*0068E34C*/ extern void (__cdecl *&First)();  // --------  /* auto */
/*0068E35C*/ extern void (__cdecl *&Last)();  // ---------  /* auto */
/*0068E360*/ extern void (__cdecl *&__xt_a_0)();  // -----  /* auto */
/*0068E368*/ extern void (__cdecl *&__xt_z_0)();  // -----  /* auto */
/*0068E36C*/ extern void (__cdecl *&__xt_a_1)();  // -----  /* auto */
/*0068E374*/ extern void (__cdecl *&__xt_z_1)();  // -----  /* auto */
/*00693EF8*/ extern WindowCfg *(&gameView)[53];  // ------  /* auto */
/*006945C8*/ extern ButtonCfg &Game_EscMenu_BtnArr;  // --  /* auto */
/*00694898*/ extern ButtonCfg &Game_Load_BtnArr;  // -----  /* auto */
/*00694A28*/ extern ButtonCfg &Game_Save_BtnArr;  // -----  /* auto */
/*00694C08*/ extern ButtonCfg &Game_Options_BtnArr;  // --  /* auto */
/*00694E88*/ extern ButtonCfg &Game_GraphicsOptions_BtnArr;  /* auto */
/*006952E8*/ extern ButtonCfg &Game_SoundOptions_BtnArr;    /* auto */
/*00695A18*/ extern ButtonCfg &Game_AdvancedSoundOptions_BtnArr;  /* auto */
/*00696828*/ extern ButtonCfg &Game_EndGame_BtnArr;  // --  /* auto */
/*00696A08*/ extern ButtonCfg &Game_Confirm_BtnArr;  // --  /* auto */
/*00696BE8*/ extern WindowCfg &Game_EscMenu_WinCfg;  // --  /* auto */
/*00696C30*/ extern WindowCfg &Game_Load_WinCfg;  // -----  /* auto */
/*00696C78*/ extern WindowCfg &Game_Save_WinCfg;  // -----  /* auto */
/*00696CC0*/ extern WindowCfg &Game_Options_WinCfg;  // --  /* auto */
/*00696D08*/ extern WindowCfg &Game_GraphicsOptions_WinCfg;  /* auto */
/*00696D50*/ extern WindowCfg &Game_SoundOptions_WinCfg;    /* auto */
/*00696D98*/ extern WindowCfg &Game_AdvancedSoundOptions_WinCfg;  /* auto */
/*00696F48*/ extern WindowCfg &Game_EndGame_WinCfg;  // --  /* auto */
/*00696F90*/ extern WindowCfg &Game_Confirm_WinCfg;  // --  /* auto */
/*006A54B8*/ extern GameActionRecord (&actionRecords)[87];  /* auto */
/*006AC8A0*/ extern NameCfg (&nameList)[1];  // ----------  /* auto */
/*006AD170*/ extern FontObj *&g_curFontObj;  // ----------  /* auto */
/*006AD610*/ extern WindowCfg &Main_Main_WinCfg;  // -----  /* auto */
/*006AD658*/ extern WindowCfg &Main_SinglePlayer_WinCfg;    /* auto */
/*006AD6A0*/ extern WindowCfg &Main_Scrimish_WinCfg;  // -  /* auto */
/*006AD7C0*/ extern ButtonCfg &Main_Main_BtnArr;  // -----  /* auto */
/*006ADAE0*/ extern ButtonCfg &Main_SinglePlayer_BtnArr;    /* auto */
/*006ADD10*/ extern ButtonCfg &Main_Scrimish_BtnArr;  // -  /* auto */
/*006AE4E0*/ extern WindowCfg *(&mainView)[33];  // ------  /* auto */
/*006AF430*/ extern GameScoreRecord (&bundledScoreList)[194];  /* auto */
/*006B1FE8*/ extern WindowCfg &Main_Extras_WinCfg;  // ---  /* auto */
/*006B2030*/ extern WindowCfg &Main_TodaysTopKeepers_WinCfg;  /* auto */
/*006B2078*/ extern ButtonCfg &Main_Extras_BtnArr;  // ---  /* auto */
/*006B22A8*/ extern ButtonCfg &Main_TodaysTopKeepers_BtnArr;  /* auto */
/*006B5AD0*/ extern WindowCfg &Main_GraphicsOptions_WinCfg;  /* auto */
/*006B5B18*/ extern WindowCfg &Main_SoundOptions_WinCfg;    /* auto */
/*006B5B60*/ extern WindowCfg &Main_ControlOptions_WinCfg;  /* auto */
/*006B5D88*/ extern ButtonCfg &Main_GraphicsOptions_BtnArr;  /* auto */
/*006B63C8*/ extern ButtonCfg &Main_SoundOptions_BtnArr;    /* auto */
/*006B6AF8*/ extern ButtonCfg &Main_ControlOptions_BtnArr;  /* auto */
/*006B7060*/ extern WindowCfg &Main_Multiplayer_WinCfg;     /* auto */
/*006B70A8*/ extern WindowCfg &Main_MultiplayerWinsock_WinCfg;  /* auto */
/*006B7310*/ extern ButtonCfg &Main_MultiplayerWinsock_BtnArr;  /* auto */
/*006BB1C8*/ extern WindowCfg &Main_LoadGame_WinCfg;  // -  /* auto */
/*006BB210*/ extern ButtonCfg (&Main_LoadGame_BtnArr)[8];   /* auto */
/*006BD048*/ extern KeyEntry (&g_keyMap)[120];  // -------  /* auto */
/*006BEA30*/ extern sVLCtable (&mpeg2_DClumtab)[12];  // -  /* auto */
/*006BEA80*/ extern VLCtable &mpeg2_dct_code_tab1;  // ---  /* auto */
/*006BEB20*/ extern VLCtable_tab2 (&mpeg2_dct_code_tab2)[30];  /* auto */
/*006BEC50*/ extern VLCtable (&mpeg2_dct_code_tab1a)[2][40];  /* auto */
/*006BECF0*/ extern VLCtable (&mpeg2_dct_code_tab2a)[30][5];  /* auto */
/*006C40F8*/ extern StubStruc6C3DA0 &libpng_png_sig;  // -  /* auto */
/*006C4188*/ extern int32_t (&libpng_png_pass_start)[7];    /* auto */
/*006C41A8*/ extern int32_t (&libpng_png_pass_inc)[7];      /* auto */
/*006C41C8*/ extern int32_t (&libpng_png_pass_ystart)[7];   /* auto */
/*006C41E8*/ extern int32_t (&libpng_png_pass_yinc)[7];     /* auto */
/*006C4208*/ extern int32_t (&libpng_png_pass_mask)[7];     /* auto */
/*006C4228*/ extern int32_t (&libpng_png_pass_dsp_mask)[7];  /* auto */
/*006C43D8*/ extern int32_t (&libpng_png_gamma_shift)[8];   /* auto */
/*006C5408*/ extern StubStruc6C3DA0 (&arr_6C5408)[105];     /* auto */
/*006C8E30*/ extern int32_t (&g_renderers)[30];  // ------  /* auto */
/*006C8EA8*/ extern int32_t *(&g_MyText_constructors)[5];   /* auto */
/*006C8FD8*/ extern FILE &File;  // ----------------------  /* auto */
/*006C8FF8*/ extern FILE &crt_stderr;  // ----------------  /* auto */
/*006C9300*/ extern int32_t &dwTlsIndex_ThreadCtx;  // ---  /* auto */
/*006C9490*/ extern int16_t &__ctype;  // ----------------  /* auto */
/*006C9694*/ extern size_t &SrcSizeInBytes;  // ----------  /* auto */
/*006C9AB4*/ extern const void *&lpMem;  // --------------  /* auto */
/*006CBC0C*/ extern const void *(&lpBuffer)[35];  // -----  /* auto */
/*006CC648*/ extern const char *&Dest;  // ---------------  /* auto */
/*006CCA20*/ extern CEntryComponent &CEntryComponent_instance;  /* auto */
/*006CCA60*/ extern MyDdSurfaceEx (&myDdSurfaceArr_x15)[21];  /* auto */
/*006CD0F0*/ extern int32_t &myDdSurface_end;  // --------  /* auto */
/*006CE850*/ extern MyDdSurfaceEx &my_surf;  // ----------  /* auto */
/*006CE8A0*/ extern int32_t &idx;  // --------------------  /* auto */
/*006CEA10*/ extern CDefaultPlayerInterface &CDefaultPlayerInterface_instance;  /* auto */
/*006D3954*/ extern wchar_t &S2;  // ---------------------  /* auto */
/*006D3CC8*/ extern CBridge &CBridge_instance;  // -------  /* auto */
/*006D6458*/ extern int32_t (&sceneLightningObjects)[4096];  /* auto */
/*006DA458*/ extern CBridge *&g_pCBridge_0;  // ----------  /* auto */
/*006DA8A8*/ extern char (&g_empty_string)[8];  // -------  /* auto */
/*006E4FD8*/ extern int32_t (&funcs_4A8BE5)[4];  // ------  /* auto */
/*006E5054*/ extern CWorld *&g_pCWorld;  // --------------  /* auto */
/*006EB988*/ extern FILE *&Stream;  // -------------------  /* auto */
/*006ECA60*/ extern int32_t &Obj6ECA60_instance;  // -----  /* auto */
/*006ECAE0*/ extern const void *&Obj6ECAE0_instance;  // -  /* auto */
/*006ED540*/ extern char (&sceneObjectsPresent)[4096];      /* auto */
/*006EE540*/ extern CTag *(&sceneObjects)[1];  // --------  /* auto */
/*006F2548*/ extern int32_t &status;  // -----------------  /* auto */
/*006F2A08*/ extern int32_t &CWorld_instance_start;  // --  /* auto */
/*006FCDCB*/ extern int32_t &strId;  // ------------------  /* auto */
/*006FCEC0*/ extern int32_t (&CLocalCommunication_instance)[152];  /* auto */
/*006FD120*/ extern int32_t &CNetworkCommunication_instance;  /* auto */
/*0070D138*/ extern CGameComponent &CGameComponent_instance;  /* auto */
/*0070D468*/ extern int32_t (&CNetworkComponent_instance)[14];  /* auto */
/*0070D4A8*/ extern MySurface &g_mySurface_0;  // --------  /* auto */
/*0070D4D0*/ extern MySurface &a3;  // -------------------  /* auto */
/*0070D578*/ extern int32_t (&d70D578_x30)[30];  // ------  /* auto */
/*0070D608*/ extern int32_t (&g_lazy_off_70D608)[32];       /* auto */
/*0070D688*/ extern char (&buttonHighlight_x30)[30];  // -  /* auto */
/*0070D6D8*/ extern CFrontEndComponent &CFrontEndComponent_instance;  /* auto */
/*0073E9A0*/ extern char &b73E9A0_x30;  // ---------------  /* auto */
/*0073E9D8*/ extern MySurface *&g_mySurface_p2;  // ------  /* auto */
/*0073EDC8*/ extern MovieRenderer &MovieRenderer_instance;  /* auto */
/*0073F580*/ extern StaticListeners &CFrontEndComponent_MovieRenderer_static_listeners;  /* auto */
/*0073F594*/ extern MovieRenderer *&g_pMovieRenderer;       /* auto */
/*0073FC24*/ extern wchar_t &SrcStr;  // -----------------  /* auto */
/*0073FE78*/ extern const void *&Block;  // --------------  /* auto */
/*0074033C*/ extern const char *&lpMultiByteStr;  // -----  /* auto */
/*00740340*/ extern size_t &BtnSize;  // -----------------  /* auto */
/*00740B80*/ extern int32_t (&g_FontObj6_instance)[20];     /* auto */
/*00740BD0*/ extern int32_t (&g_FontObj3_instance)[20];     /* auto */
/*00740C20*/ extern wchar_t &temp_string;  // ------------  /* auto */
/*00740E20*/ extern int32_t (&g_FontObj9_instance)[20];     /* auto */
/*00740E70*/ extern int32_t (&g_FontObj1_instance)[20];     /* auto */
/*007410C0*/ extern MyLangObj &MyLangObj_lang_instance;     /* auto */
/*007410D0*/ extern FontObj &FontObj_1_instance;  // -----  /* auto */
/*00741120*/ extern int8_t (&MBStr_741120)[512];  // -----  /* auto */
/*00741320*/ extern FontObj &FontObj_3_instance;  // -----  /* auto */
/*00741370*/ extern FontObj &FontObj_2_instance;  // -----  /* auto */
/*007413C0*/ extern FontObj &g_FontObj2_instance;  // ----  /* auto */
/*00741410*/ extern FontObj &g_FontObj8_instance;  // ----  /* auto */
/*00741460*/ extern FontObj &g_FontObj4_instance;  // ----  /* auto */
/*007414B0*/ extern FontObj &g_FontObj7_instance;  // ----  /* auto */
/*00741500*/ extern FontObj &g_FontObj5_instance;  // ----  /* auto */
/*00741550*/ extern MyTextText *&g_pMyTextText_idx1091;     /* auto */
/*00741554*/ extern int32_t *&g_pMyTextText_idx1056_1081;   /* auto */
/*00741558*/ extern int32_t *&g_pMyTextText_idx1000_1023;   /* auto */
/*0074155C*/ extern MyTextText *&g_pMyTextText_idx1090;     /* auto */
/*0074156C*/ extern MyTextFont *&g_pMyFontText1;  // -----  /* auto */
/*00741570*/ extern MyTextFont *&g_pMyFontText2;  // -----  /* auto */
/*00741574*/ extern MyTextFont *&g_pMyFontText3;  // -----  /* auto */
/*00741578*/ extern MyTextFont *&g_pMyFontText4;  // -----  /* auto */
/*0074157C*/ extern MyTextFont *&g_pMyFontText5;  // -----  /* auto */
/*00741580*/ extern MyTextFont *&g_pMyFontText6;  // -----  /* auto */
/*00741584*/ extern MyTextFont *&g_pMyFontText7;  // -----  /* auto */
/*00741588*/ extern MyTextFont *&g_pMyFontText8;  // -----  /* auto */
/*0074158C*/ extern MyTextFont *&g_pMyFontText9;  // -----  /* auto */
/*00741594*/ extern int32_t *&g_pMyTextText_idx1024;  // -  /* auto */
/*00741598*/ extern int32_t *&g_pMyTextText_idx1025;  // -  /* auto */
/*0074159C*/ extern int32_t *&g_pMyTextText_idx1026;  // -  /* auto */
/*007415A0*/ extern int32_t *&g_pMyTextText_idx1027;  // -  /* auto */
/*007415A4*/ extern int32_t *&g_pMyTextText_idx1028;  // -  /* auto */
/*007415A8*/ extern int32_t *&g_pMyTextText_idx1029;  // -  /* auto */
/*007415C0*/ extern char (&Buffer)[264];  // -------------  /* auto */
/*007416C8*/ extern int32_t (&TbBMPLoader_instance)[344];   /* auto */
/*00741C28*/ extern int32_t (&TbPNGLoader_instance)[270];   /* auto */
/*00742070*/ extern int32_t (&TbTQILoader_instance)[268];   /* auto */
/*00756EC8*/ extern tagRECT &client_rect;  // ------------  /* auto */
/*00756EE8*/ extern MyGame &MyGame_instance;  // ---------  /* auto */
/*00758048*/ extern int32_t &ddraw_device_count;  // -----  /* auto */
/*0075804C*/ extern int32_t &dd_index;  // ---------------  /* auto */
/*00758050*/ extern DxDeviceInfo *&ddraw_devices;  // ----  /* auto */
/*00758160*/ extern int32_t (&pMldPlay_instance)[3];  // -  /* auto */
/*00758340*/ extern MyResources &MyResources_instance;      /* auto */
/*0075B310*/ extern char (&formattedString)[264];  // ----  /* auto */
/*0075B418*/ extern int8_t &Data;  // --------------------  /* auto */
/*0075B468*/ extern CSoundSystem *&MySound_ptr;  // ------  /* auto */
/*0075B880*/ extern CSoundSystem &CSoundSystem_instance;    /* auto */
/*0075CA68*/ extern int32_t &g2_sceneWidth;  // ----------  /* auto */
/*00760A98*/ extern Vec3f &g_vec_760A98;  // -------------  /* auto */
/*00760AA8*/ extern float &g_cullFrom;  // ---------------  /* auto */
/*00760AB8*/ extern Vec3f &g_vec_760AB8;  // -------------  /* auto */
/*00760AC4*/ extern Mat3x3f &g_mat_760AC4;  // -----------  /* auto */
/*00760B0C*/ extern IDirectDrawGammaControl *&dd_gamma_control;  /* auto */
/*00760B18*/ extern Vec3f &g_vec_760B18;  // -------------  /* auto */
/*00760B28*/ extern Vec3f &g_vec_760B28;  // -------------  /* auto */
/*00760B38*/ extern Vec3f &g_vec_760B38;  // -------------  /* auto */
/*00760B44*/ extern int32_t &g2_sceneHeight;  // ---------  /* auto */
/*00760B4C*/ extern float &g_cullTo;  // -----------------  /* auto */
/*00760B54*/ extern int32_t &g_sceneWidth;  // -----------  /* auto */
/*00760B5C*/ extern int32_t &g2_sceneLeft;  // -----------  /* auto */
/*00760B70*/ extern Vec3f &g_vec_760B70;  // -------------  /* auto */
/*00760B88*/ extern int32_t &g_sceneHeight;  // ----------  /* auto */
/*00764B90*/ extern MyDirectDraw &mydd_scene;  // --------  /* auto */
/*00764BBC*/ extern int32_t &g2_sceneTop;  // ------------  /* auto */
/*00764BC0*/ extern int32_t &EngineTestCross_a31x400_idx;   /* auto */
/*00764BC4*/ extern int32_t &EngineTestLight_a31x400_idx;   /* auto */
/*00764BC8*/ extern int32_t &EngineTextureWhite_a31x400_idx;  /* auto */
/*00764BE8*/ extern DDGAMMARAMP &gamma_ramp;  // ---------  /* auto */
/*007651F4*/ extern char &g_isCurDdSurfLost;  // ---------  /* auto */
/*007651FC*/ extern int32_t &is3dInitialized;  // --------  /* auto */
/*00765200*/ extern int32_t &mgsr_initialized;  // -------  /* auto */
/*00765224*/ extern CEnginePrimitiveBase *&g_pCEngine2DPrimitive;  /* auto */
/*007656E8*/ extern MyStringHashMap_MyScaledSurface &MyStringHashMap_MyScaledSurface_instance;  /* auto */
/*00765AF8*/ extern MyEntryBuf_MyScaledSurface &MyEntryBuf_MyScaledSurface_instance;  /* auto */
/*00765B18*/ extern const void *(&MyHeap_increaseBlocks)[32];  /* auto */
/*00765DA0*/ extern const void *(&MyHeap_bufArr)[32];       /* auto */
/*00765E28*/ extern int32_t *(&SPRS_MyScaledSurface_indices)[256];  /* auto */
/*00766228*/ extern CMemLoadIFFFile &CMemLoadIFFFile_instance;  /* auto */
/*00766658*/ extern MyMeshResourceHolder *&g_meshHolderList_first;  /* auto */
/*00766660*/ extern MyStringHashMap_MyMeshResourceHolder &MyStringHashMap_MyMeshResourceHolder_instance;  /* auto */
/*00766A70*/ extern MyMeshResourceHolder *&g_meshHolderList_last;  /* auto */
/*00766A78*/ extern Vec3f &g_vec_766A78;  // -------------  /* auto */
/*00769A78*/ extern ScreenObjectArr &ScreenObjectArr_instance;  /* auto */
/*0076AA80*/ extern Vec3s (&DrawTriangleList_lpwIndices)[1024];  /* auto */
/*0076C280*/ extern MyEntryBuf_Triangle24 &MyEntryBuf_Triangle24_instance;  /* auto */
/*0076C28C*/ extern int32_t &g_flexibleVertices;  // -----  /* auto */
/*0076C294*/ extern int32_t &mgsr_currentDrawFlags;  // --  /* auto */
/*0076C298*/ extern VerticesData (&g_vertices)[2];  // ---  /* auto */
/*0076C2B8*/ extern MyDirectDraw &mydd_triangles;  // ----  /* auto */
/*0076C2E8*/ extern Idx3s *&g_lpwTrianglesIndices;  // ---  /* auto */
/*0076C2F0*/ extern SceneObject30 *&lastSceneObject;  // -  /* auto */
/*0076C2F8*/ extern int32_t (&sceneObj2E_f21_to_triangleIndices)[1023];  /* auto */
/*0076D300*/ extern MyEntryBuf_uint16 &MyEntryBuf_uint16_indices_instance;  /* auto */
/*0076D310*/ extern Triangle24 *(&drawnTrianglesArr)[2048];  /* auto */
/*0076F318*/ extern MyEntryBuf_Tiangle34 &MyEntryBuf_Triangle34_instance;  /* auto */
/*0076F328*/ extern MyEntryBuf_Vertex18 &MyEntryBuf_Vertex18_instance;  /* auto */
/*0076F33C*/ extern int32_t &Triangle34_count;  // -------  /* auto */
/*0076F358*/ extern RenderData (&RenderData_instance_arr)[1024];  /* auto */
/*00779358*/ extern int32_t (__cdecl *&__renderFun)(int32_t, Vec3f *, Uv2f *);  /* auto */
/*00779394*/ extern int32_t (__cdecl *&g_fun_779394)(int32_t, Vec3f *);  /* auto */
/*00779398*/ extern int32_t (__cdecl *&g_fun_779398)(int32_t, Vec3f *);  /* auto */
/*007793A8*/ extern Vec3f_arr1024 (&g_vectors)[2];  // ---  /* auto */
/*0077F3A8*/ extern Mat3x3f &g_mat_77F3A8;  // -----------  /* auto */
/*0077F3EC*/ extern SceneObject2E *&g_pSceneObject2E;       /* auto */
/*0077F3F0*/ extern Uv2f_arr1024 *&Uv2f_arr_instance;       /* auto */
/*0077F40C*/ extern Mat3x3f &g_mat_77F40C;  // -----------  /* auto */
/*0077F458*/ extern Mat3x3f &g_mat_77F458;  // -----------  /* auto */
/*0077F480*/ extern float (&g_padNorm_x8)[4];  // --------  /* auto */
/*0077F498*/ extern Mat3x3f &g_mat_77F498;  // -----------  /* auto */
/*0077F4C0*/ extern Vec3f &g_vec_77F4C0;  // -------------  /* auto */
/*0077F4E4*/ extern int32_t (__cdecl *&__addTriangleFun)(int32_t, int32_t, int32_t);  /* auto */
/*0077F4F8*/ extern int8_t (&g_idxFlags)[1024];  // ------  /* auto */
/*0077F8F8*/ extern MyDirectDraw &mydd_uvs;  // ----------  /* auto */
/*0077F938*/ extern Idx3b (&g_Idx3b_arr_instance)[1024];    /* auto */
/*0078095C*/ extern const void *&shadows_lpSurface;  // --  /* auto */
/*00780960*/ extern int32_t (&g_MyEntryBuf_MyScaledSurface_idxs)[64];  /* auto */
/*007820A8*/ extern SceneObject2EList &SceneObject2EList_instance;  /* auto */
/*007820B8*/ extern SceneObject30List &SceneObject30List_instance;  /* auto */
/*007820C4*/ extern int32_t &objectsToDraw_count;  // ----  /* auto */
/*007820D0*/ extern int8_t (&mpeg2__image_buf)[65536];      /* auto */
/*007920D0*/ extern SurfHashList2 *&pSurfHashList2_2;       /* auto */
/*007920D4*/ extern SurfHashList2 *&pSurfHashList2;  // --  /* auto */
/*007920D8*/ extern MyTextures &MyTextures_instance;  // -  /* auto */
/*0079291C*/ extern MyCESurfHandle *&g_surfh_first;  // --  /* auto */
/*00792920*/ extern MySurfDesc &g_surfDesc_8a8r8g8b;  // -  /* auto */
/*00792938*/ extern MyStringHashMap_MyCESurfHandle &MyStringHashMap_MyCESurfHandle_instance;  /* auto */
/*00792D48*/ extern CEngineSurfaceScaler &CEngineSurfaceScaler_instance;  /* auto */
/*00792D60*/ extern SurfHashList *&pSurfHashList;  // ----  /* auto */
/*00792D68*/ extern MyDirectDraw &mydd_devTexture;  // ---  /* auto */
/*00792D98*/ extern MyCEngineSurfDesc &MyCEngineSurfDesc_argb32_instance;  /* auto */
/*00792DFD*/ extern MyCEngineSurfDesc &g_surfDesc_8a8r8g8b_0;  /* auto */
/*00792E62*/ extern MyCEngineSurfDesc &MyCEngineSurfDesc_unk16_instance;  /* auto */
/*00792EC8*/ extern int32_t (&sizeHashTable_257)[257];      /* auto */
/*007932CC*/ extern MyCESurfHandle *&g_surfh_last;  // ---  /* auto */
/*007932F0*/ extern const char *(&g_ppaths_7932F0)[32];     /* auto */
/*00793388*/ extern CPCEngineInterface &CPCEngineInterface_instance_start;  /* auto */
/*007935C0*/ extern PathStr &g_paths_7935C0;  // ---------  /* auto */
/*00795640*/ extern Mat3x3f (&g_mat_arr_795640)[4];  // --  /* auto */
/*007956D0*/ extern Vec3f (&g_vec_arr_7956D0)[4];  // ----  /* auto */
/*00795700*/ extern CBridge *&g_pCBridge;  // ------------  /* auto */
/*00796170*/ extern int32_t (&mpeg2_dc_dct_pred)[3];  // -  /* auto */
/*007962AC*/ extern int32_t &cmd_flag_DDD;  // -----------  /* auto */
/*007962B0*/ extern int32_t &cmd_flag_DDD_value;  // -----  /* auto */
/*00797B74*/ extern const void *&mgsr_buf_25635;  // -----  /* auto */
/*00797B7C*/ extern const void *&mgsr_buf2_12835;  // ----  /* auto */
/*0079CF90*/ extern MyInputManagerCb &MyInputManagerCb_instance;  /* auto */
/*0079D020*/ extern HWND__ *&dd_hWnd;  // ----------------  /* auto */
/*0079D038*/ extern AABB &g_renderSurfAabb;  // ----------  /* auto */
/*0079D048*/ extern MyNBitTexture *&pMyNBitTexture;  // --  /* auto */
/*0079D050*/ extern AABB &g_surfAabb;  // ----------------  /* auto */
/*0079D060*/ extern MySurface *&g_myRenderSurface;  // ---  /* auto */
/*0079D068*/ extern My8BitTexture &My8BitTexture_instance;  /* auto */
/*0079D070*/ extern My16BitTexture &My16BitTexture_instance;  /* auto */
/*0079D074*/ extern My24BitTexture &My24BitTexture_instance;  /* auto */
/*0079D078*/ extern My32BitTexture &My32BitTexture_instance;  /* auto */
/*0079D0A8*/ extern char (&PathName)[300];  // -----------  /* auto */
/*0079D1D4*/ extern IDirectDrawSurface *&g_dd_primaryAttachedSurf;  /* auto */
/*0079D1D8*/ extern MySurface &g_mySurf_unused;  // ------  /* auto */
/*0079D200*/ extern MyDdSurfaceEx &g_primarySurf;  // ----  /* auto */
/*0079D250*/ extern DdModeList &DdModeList_instance;  // -  /* auto */
/*0079D260*/ extern char (&bullfrogClassName)[260];  // --  /* auto */
/*0079D364*/ extern MyDdSurfaceEx *&g_pCurOffScreen;  // -  /* auto */
/*0079D368*/ extern FPUControlWordWithState &FPUControlWordWithState_instance;  /* auto */
/*0079D378*/ extern MyDdSurfaceEx &g_offScreen;  // ------  /* auto */
/*0079D3C8*/ extern HWND__ *&hWnd;  // -------------------  /* auto */
/*0079D3CC*/ extern HWND__ *&hBullfrogWindow;  // --------  /* auto */
/*0079D3D0*/ extern IDirectDraw *&dk2dd;  // -------------  /* auto */
/*0079D3D4*/ extern IDirectDrawPalette *&lpDDPalette;       /* auto */
/*0079D3D8*/ extern IDirectDrawClipper *&lpDDClipper;       /* auto */
/*0079D3DC*/ extern int32_t &g_isNeedBlt;  // ------------  /* auto */
/*0079D3E0*/ extern int32_t &g_ignore_79D3E0;  // --------  /* auto */
/*0079D3E4*/ extern GUID *&selectedDDGuid;  // -----------  /* auto */
/*0079D3E8*/ extern int32_t &isSurfModeX;  // ------------  /* auto */
/*0079D3F0*/ extern IDirectDraw *&lpSurfaceDD;  // -------  /* auto */
/*0079D418*/ extern PALETTEENTRY (&palleteEntries)[256];    /* auto */
/*0079D818*/ extern MySurfDesc &g_confSurfDesc2;  // -----  /* auto */
/*0079D830*/ extern MySurfDesc &g_confSurfDesc;  // ------  /* auto */
/*0079D848*/ extern MySurfDesc &g_confSurfDesc3;  // -----  /* auto */
/*0079D860*/ extern MySurfDesc &g_confSurfDesc4;  // -----  /* auto */
/*0079D980*/ extern char (&pathBuf)[256];  // ------------  /* auto */
/*0079DA88*/ extern char (&dk2HomeDir)[260];  // ---------  /* auto */
/*0079DBD0*/ extern WinEventHandlers &WinEventHandlers_instance;  /* auto */
/*0079DC38*/ extern MySurfDesc &g_confSurfDesc6;  // -----  /* auto */
/*0079DC50*/ extern MySurfDesc &g_confSurfDesc5;  // -----  /* auto */
/*0079DC68*/ extern Obj79DC68 &Obj79DC68_instance;  // ---  /* auto */
/*0079F4F0*/ extern char (&tqi_byte_79F4F0)[264];  // ----  /* auto */
/*0079F638*/ extern CursorDrawer &CursorDrawer_instance;    /* auto */
/*0079F8A0*/ extern int32_t (&tqi_dword_79F8A0)[64];  // -  /* auto */
/*0079F9A0*/ extern int32_t (&tqi_dword_79F9A0)[64];  // -  /* auto */
/*0079FAA0*/ extern int32_t &tqi_dword_79FAA0;  // -------  /* auto */
/*0079FAC4*/ extern int32_t (&tqi_dword_79FAC4)[9];  // --  /* auto */
/*0079FAE8*/ extern int32_t (&tqi_dword_79FAE8)[9];  // --  /* auto */
/*0079FB0C*/ extern int32_t (&tqi_dword_79FB0C)[9];  // --  /* auto */
/*0079FB30*/ extern int32_t (&tqi_dword_79FB30)[9];  // --  /* auto */
/*0079FB54*/ extern int32_t (&tqi_dword_79FB54)[9];  // --  /* auto */
/*0079FB78*/ extern int32_t (&tqi_dword_79FB78)[9];  // --  /* auto */
/*0079FB9C*/ extern int32_t (&tqi_dword_79FB9C)[9];  // --  /* auto */
/*007A043C*/ extern int32_t (&tqi_dword_7A043C)[385];       /* auto */
/*007A143C*/ extern int32_t (&tqi_dword_7A143C)[385];       /* auto */
/*007A2440*/ extern int32_t (&tqi_unk_7A2440)[384];  // --  /* auto */
/*007A3440*/ extern int32_t (&tqi_unk_7A3440)[384];  // --  /* auto */
/*007A4440*/ extern char (&g_filePath)[264];  // ---------  /* auto */
/*007A4548*/ extern char (&pszFileName)[288];  // --------  /* auto */
/*007A53B8*/ extern int8_t (&MyUnk674058_instance_start)[248];  /* auto */
/*007A5570*/ extern _RTL_CRITICAL_SECTION *&lpCriticalSection;  /* auto */
/*007A5610*/ extern int32_t &MyTR2_instance;  // ---------  /* auto */
/*007A5614*/ extern int32_t &MyTR5_instance;  // ---------  /* auto */
/*007A5618*/ extern int32_t &MyTR67B938_instance;  // ----  /* auto */
/*007A5628*/ extern int32_t &MyTR4_instance;  // ---------  /* auto */
/*007A5660*/ extern _RTL_CRITICAL_SECTION &CriticalSection;  /* auto */
/*007A5678*/ extern int32_t &Target;  // -----------------  /* auto */
/*007A5708*/ extern ThreadCtx *&g_environmentStrings;       /* auto */
/*007A57C8*/ extern char (&Filename)[264];  // -----------  /* auto */
/*007A5AE0*/ extern int32_t &CodePage;  // ---------------  /* auto */
/*007A5AE4*/ extern LCID &Locale;  // --------------------  /* auto */
/*007A5B04*/ extern int32_t (__stdcall *&lpTopLevelExceptionFilter)(_EXCEPTION_POINTERS *);  /* auto */
/*007A5B80*/ extern _TIME_ZONE_INFORMATION &TimeZoneInformation;  /* auto */
/*007A5C34*/ extern int32_t (__stdcall *&MessageBoxA_0)(HWND__ *, const char *, const char *, int32_t);  /* auto */
/*007A5C38*/ extern HWND__ * (__stdcall *&GetActiveWindow)();  /* auto */
/*007A5C3C*/ extern HWND__ * (__stdcall *&GetLastActivePopup)(HWND__ *);  /* auto */
/*007A5C60*/ extern wchar_t &LCData;  // -----------------  /* auto */
/*007A5C88*/ extern size_t &g_charBufferSize;  // --------  /* auto */
/*007A5C8C*/ extern const void *&g_charBuffer;  // -------  /* auto */
/*007A5DA0*/ extern int32_t &uNumber;  // ----------------  /* auto */
/*007A5DA8*/ extern const void *&hHeap;  // --------------  /* auto */
/*007A5DB0*/ extern int32_t &Addend;  // -----------------  /* auto */
/*007A6DC0*/ extern size_t &Count;  // -------------------  /* auto */
/*007A7020*/ extern int32_t *&grpoly_mydd_buf;  // -------  /* auto */
/*007A7024*/ extern int16_t *&grpoly_mydd_buf2;  // ------  /* auto */
/*007A7028*/ extern int32_t &mgsr_buf_width;  // ---------  /* auto */
/*007A702C*/ extern int32_t &mgsr_buf2_width;  // --------  /* auto */
/*007A7034*/ extern int32_t *&mgsr_lockedBuf_dw256x256;     /* auto */
/*007A7040*/ extern int32_t (__stdcall *&mgsr_pDrawFun)();  /* auto */
/*007A7208*/ extern Pos2p &mgsr_pos_dst;  // -------------  /* auto */
/*007A7210*/ extern Pos2p &mgsr_qword_src;  // -----------  /* auto */
/*007A72D8*/ extern int32_t &mgsr_dword_7A72D8;  // ------  /* auto */
/*007A72DC*/ extern int32_t &mgsr_dword_7A72DC;  // ------  /* auto */
/*007A72E0*/ extern __m64 (&mgsr_qword_7A72E0)[63];  // --  /* auto */
/*007A74D8*/ extern int32_t &mgsr_dword_7A74D8;  // ------  /* auto */
/*007A74DC*/ extern int32_t &mgsr_dword_7A74DC;  // ------  /* auto */
/*007A74E0*/ extern __m64 (&mgsr_qword_7A74E0)[70];  // --  /* auto */
/*007A7710*/ extern int32_t (&mgsr_dword_7A7710)[60];       /* auto */
/*007AF048*/ extern double &tqi_dbl_7AF048;  // ----------  /* auto */
/*007AF4E0*/ extern char (&tqi_byte_7AF4E0)[256];  // ----  /* auto */
/*007AF680*/ extern int32_t (&jpeg_zigzag2)[64];  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //DK2_GLOBALS_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
