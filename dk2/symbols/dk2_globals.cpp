// --  warning: file is managed by gen_globals_cpp.py  ---  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2_globals.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
using namespace dk2;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// put all globals in a separate section
#pragma section(".stub")
#define relink_glob __declspec(allocate(".stub"))

// ---------------  end_of_block  ------------------------  /* auto */
/*--------*/ relink_glob DIOBJECTDATAFORMAT _c_dfDIMouseFormat;  /* auto */
/*00647830*/ DIOBJECTDATAFORMAT &dk2::c_dfDIMouseFormat = _c_dfDIMouseFormat;  /* auto */
/*--------*/ relink_glob DIOBJECTDATAFORMAT _c_dfDIKeyboardFormat;  /* auto */
/*006478A0*/ DIOBJECTDATAFORMAT &dk2::c_dfDIKeyboardFormat = _c_dfDIKeyboardFormat;  /* auto */
/*--------*/ relink_glob int32_t (__stdcall *_mgsr_drawFuns[60])();  /* auto */
/*006551C0*/ int32_t (__stdcall *(&dk2::mgsr_drawFuns)[60])() = _mgsr_drawFuns;  /* auto */
/*--------*/ relink_glob __int16 _asm_update_wordArr[32];   /* auto */
/*0065FB14*/ __int16 (&dk2::asm_update_wordArr)[32] = _asm_update_wordArr;  /* auto */
/*--------*/ relink_glob __int16 _asm_update2_wordArr[257];  /* auto */
/*0065FC94*/ __int16 (&dk2::asm_update2_wordArr)[257] = _asm_update2_wordArr;  /* auto */
/*--------*/ relink_glob void *_CEntryComponent_vftable[6];  /* auto */
/*0066C424*/ void *(&dk2::CEntryComponent_vftable)[6] = _CEntryComponent_vftable;  /* auto */
/*--------*/ relink_glob void *_CComponent_vftable[6];      /* auto */
/*0066C45C*/ void *(&dk2::CComponent_vftable)[6] = _CComponent_vftable;  /* auto */
/*--------*/ relink_glob void *_CDefaultPlayerInterface_vftable[23];  /* auto */
/*0066C4A4*/ void *(&dk2::CDefaultPlayerInterface_vftable)[23] = _CDefaultPlayerInterface_vftable;  /* auto */
/*--------*/ relink_glob arr_66C780_t _arr_66C780[53];      /* auto */
/*0066C780*/ arr_66C780_t (&dk2::arr_66C780)[53] = _arr_66C780;  /* auto */
/*--------*/ relink_glob void *_CBridge_vftable[101];       /* auto */
/*0066CC94*/ void *(&dk2::CBridge_vftable)[101] = _CBridge_vftable;  /* auto */
/*--------*/ relink_glob void *_CBridgeInterface_vftable[80];  /* auto */
/*0066CF7C*/ void *(&dk2::CBridgeInterface_vftable)[80] = _CBridgeInterface_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineInterface_vftable[68];  /* auto */
/*0066D1D4*/ void *(&dk2::CEngineInterface_vftable)[68] = _CEngineInterface_vftable;  /* auto */
/*--------*/ relink_glob void *_CMap_vftable[4];  // -----  /* auto */
/*0066D3E4*/ void *(&dk2::CMap_vftable)[4] = _CMap_vftable;  /* auto */
/*--------*/ relink_glob void *_TbUniStringVTag_vftable[1];  /* auto */
/*0066D3FC*/ void *(&dk2::TbUniStringVTag_vftable)[1] = _TbUniStringVTag_vftable;  /* auto */
/*--------*/ relink_glob void *_CState_vftable[4];  // ---  /* auto */
/*0066D404*/ void *(&dk2::CState_vftable)[4] = _CState_vftable;  /* auto */
/*--------*/ relink_glob void *_CRenderInfo_vftable[2];     /* auto */
/*0066D454*/ void *(&dk2::CRenderInfo_vftable)[2] = _CRenderInfo_vftable;  /* auto */
/*--------*/ relink_glob void *_CThing_vftable[21];  // --  /* auto */
/*0066D464*/ void *(&dk2::CThing_vftable)[21] = _CThing_vftable;  /* auto */
/*--------*/ relink_glob void *_CPhysicalThing_vftable[24];  /* auto */
/*0066D4BC*/ void *(&dk2::CPhysicalThing_vftable)[24] = _CPhysicalThing_vftable;  /* auto */
/*--------*/ relink_glob void *_CCreature_vftable[37];      /* auto */
/*0066D524*/ void *(&dk2::CCreature_vftable)[37] = _CCreature_vftable;  /* auto */
/*--------*/ relink_glob void *_CMovingThing_vftable[37];   /* auto */
/*0066D5BC*/ void *(&dk2::CMovingThing_vftable)[37] = _CMovingThing_vftable;  /* auto */
/*--------*/ relink_glob void *_CObject_vftable[37];  // -  /* auto */
/*0066D654*/ void *(&dk2::CObject_vftable)[37] = _CObject_vftable;  /* auto */
/*--------*/ relink_glob void *_CDoor_vftable[24];  // ---  /* auto */
/*0066D6EC*/ void *(&dk2::CDoor_vftable)[24] = _CDoor_vftable;  /* auto */
/*--------*/ relink_glob void *_CTrap_vftable[24];  // ---  /* auto */
/*0066D754*/ void *(&dk2::CTrap_vftable)[24] = _CTrap_vftable;  /* auto */
/*--------*/ relink_glob void *_CShot_vftable[37];  // ---  /* auto */
/*0066D86C*/ void *(&dk2::CShot_vftable)[37] = _CShot_vftable;  /* auto */
/*--------*/ relink_glob void *_CDeadBody_vftable[37];      /* auto */
/*0066D904*/ void *(&dk2::CDeadBody_vftable)[37] = _CDeadBody_vftable;  /* auto */
/*--------*/ relink_glob void *_CPlayer_vftable[2];  // --  /* auto */
/*0066D99C*/ void *(&dk2::CPlayer_vftable)[2] = _CPlayer_vftable;  /* auto */
/*--------*/ relink_glob void *_CRoom_vftable[3];  // ----  /* auto */
/*0066DB7C*/ void *(&dk2::CRoom_vftable)[3] = _CRoom_vftable;  /* auto */
/*--------*/ relink_glob void *_CCreaturePool_vftable[4];   /* auto */
/*0066E3AC*/ void *(&dk2::CCreaturePool_vftable)[4] = _CCreaturePool_vftable;  /* auto */
/*--------*/ relink_glob void *_CResearchOrder_vftable[4];  /* auto */
/*0066E3C4*/ void *(&dk2::CResearchOrder_vftable)[4] = _CResearchOrder_vftable;  /* auto */
/*--------*/ relink_glob void *_CTag_vftable[2];  // -----  /* auto */
/*0066E3DC*/ void *(&dk2::CTag_vftable)[2] = _CTag_vftable;  /* auto */
/*--------*/ relink_glob void *_CWorld_vftable[230];  // -  /* auto */
/*0066E3EC*/ void *(&dk2::CWorld_vftable)[230] = _CWorld_vftable;  /* auto */
/*--------*/ relink_glob void *_CWorldInterface_vftable[223];  /* auto */
/*0066E7A4*/ void *(&dk2::CWorldInterface_vftable)[223] = _CWorldInterface_vftable;  /* auto */
/*--------*/ relink_glob void *_CCommunicationInterface_vftable[19];  /* auto */
/*0066EB3C*/ void *(&dk2::CCommunicationInterface_vftable)[19] = _CCommunicationInterface_vftable;  /* auto */
/*--------*/ relink_glob void *_CLocalCommunication_vftable[19];  /* auto */
/*0066EB8C*/ void *(&dk2::CLocalCommunication_vftable)[19] = _CLocalCommunication_vftable;  /* auto */
/*--------*/ relink_glob void *_CGameComponent_vftable[6];  /* auto */
/*0066EC4C*/ void *(&dk2::CGameComponent_vftable)[6] = _CGameComponent_vftable;  /* auto */
/*--------*/ relink_glob void *_CNetworkComponent_vftable[6];  /* auto */
/*0066EC84*/ void *(&dk2::CNetworkComponent_vftable)[6] = _CNetworkComponent_vftable;  /* auto */
/*--------*/ relink_glob void *_CButton_vftable[4];  // --  /* auto */
/*0066ECA4*/ void *(&dk2::CButton_vftable)[4] = _CButton_vftable;  /* auto */
/*--------*/ relink_glob void *_CVerticalSlider_vftable[21];  /* auto */
/*0066ECBC*/ void *(&dk2::CVerticalSlider_vftable)[21] = _CVerticalSlider_vftable;  /* auto */
/*--------*/ relink_glob void *_CGadget_vftable[1];  // --  /* auto */
/*0066ED14*/ void *(&dk2::CGadget_vftable)[1] = _CGadget_vftable;  /* auto */
/*--------*/ relink_glob void *_CGuiManager_vftable[1];     /* auto */
/*0066ED1C*/ void *(&dk2::CGuiManager_vftable)[1] = _CGuiManager_vftable;  /* auto */
/*--------*/ relink_glob void *_CClickTextButton_vftable[4];  /* auto */
/*0066ED24*/ void *(&dk2::CClickTextButton_vftable)[4] = _CClickTextButton_vftable;  /* auto */
/*--------*/ relink_glob void *_CProgressBar_vftable[4];    /* auto */
/*0066ED3C*/ void *(&dk2::CProgressBar_vftable)[4] = _CProgressBar_vftable;  /* auto */
/*--------*/ relink_glob void *_CListBox_vftable[4];  // -  /* auto */
/*0066ED54*/ void *(&dk2::CListBox_vftable)[4] = _CListBox_vftable;  /* auto */
/*--------*/ relink_glob void *_CSpinButton_vftable[6];     /* auto */
/*0066ED6C*/ void *(&dk2::CSpinButton_vftable)[6] = _CSpinButton_vftable;  /* auto */
/*--------*/ relink_glob void *_CTextInput_vftable[6];      /* auto */
/*0066ED8C*/ void *(&dk2::CTextInput_vftable)[6] = _CTextInput_vftable;  /* auto */
/*--------*/ relink_glob void *_CTextBox_vftable[4];  // -  /* auto */
/*0066EDAC*/ void *(&dk2::CTextBox_vftable)[4] = _CTextBox_vftable;  /* auto */
/*--------*/ relink_glob void *_CCheckBoxButton_vftable[4];  /* auto */
/*0066EDC4*/ void *(&dk2::CCheckBoxButton_vftable)[4] = _CCheckBoxButton_vftable;  /* auto */
/*--------*/ relink_glob void *_CHoldButton_vftable[4];     /* auto */
/*0066EDDC*/ void *(&dk2::CHoldButton_vftable)[4] = _CHoldButton_vftable;  /* auto */
/*--------*/ relink_glob void *_CDragButton_vftable[4];     /* auto */
/*0066EDF4*/ void *(&dk2::CDragButton_vftable)[4] = _CDragButton_vftable;  /* auto */
/*--------*/ relink_glob void *_CHorizontalSlider_vftable[21];  /* auto */
/*0066EE0C*/ void *(&dk2::CHorizontalSlider_vftable)[21] = _CHorizontalSlider_vftable;  /* auto */
/*--------*/ relink_glob void *_CRadioButton_vftable[4];    /* auto */
/*0066EE64*/ void *(&dk2::CRadioButton_vftable)[4] = _CRadioButton_vftable;  /* auto */
/*--------*/ relink_glob void *_CClickButton_vftable[4];    /* auto */
/*0066EE7C*/ void *(&dk2::CClickButton_vftable)[4] = _CClickButton_vftable;  /* auto */
/*--------*/ relink_glob void *_CWindow_vftable[2];  // --  /* auto */
/*0066EE94*/ void *(&dk2::CWindow_vftable)[2] = _CWindow_vftable;  /* auto */
/*--------*/ relink_glob void *_CFrontEndComponent_vftable[6];  /* auto */
/*0066EF3C*/ void *(&dk2::CFrontEndComponent_vftable)[6] = _CFrontEndComponent_vftable;  /* auto */
/*--------*/ relink_glob void *_CWindowTest_vftable[1];     /* auto */
/*0066F20C*/ void *(&dk2::CWindowTest_vftable)[1] = _CWindowTest_vftable;  /* auto */
/*--------*/ relink_glob void *_CFileManager_vftable[12];   /* auto */
/*0066F214*/ void *(&dk2::CFileManager_vftable)[12] = _CFileManager_vftable;  /* auto */
/*--------*/ relink_glob void *_TbDiscFile_vftable[10];     /* auto */
/*0066F24C*/ void *(&dk2::TbDiscFile_vftable)[10] = _TbDiscFile_vftable;  /* auto */
/*--------*/ relink_glob const char *_Drive;  // ---------  /* auto */
/*0066F338*/ const char *&dk2::Drive = _Drive;  // -------  /* auto */
/*--------*/ relink_glob const char *_lpSubKey;  // ------  /* auto */
/*0066F34C*/ const char *&dk2::lpSubKey = _lpSubKey;  // -  /* auto */
/*--------*/ relink_glob void *_TbDiscFileStorage_vftable[12];  /* auto */
/*0066F3AC*/ void *(&dk2::TbDiscFileStorage_vftable)[12] = _TbDiscFileStorage_vftable;  /* auto */
/*--------*/ relink_glob const char *_lpValueName;  // ---  /* auto */
/*0066F46C*/ const char *&dk2::lpValueName = _lpValueName;  /* auto */
/*--------*/ relink_glob void *_CSoundSystem_vftable[32];   /* auto */
/*0066F7FC*/ void *(&dk2::CSoundSystem_vftable)[32] = _CSoundSystem_vftable;  /* auto */
/*--------*/ relink_glob void *_TbAudioSystem_vftable[7];   /* auto */
/*0066F90C*/ void *(&dk2::TbAudioSystem_vftable)[7] = _TbAudioSystem_vftable;  /* auto */
/*--------*/ relink_glob void *_TbSysCommand_SetNumberOfChannels_vftable[1];  /* auto */
/*0066F92C*/ void *(&dk2::TbSysCommand_SetNumberOfChannels_vftable)[1] = _TbSysCommand_SetNumberOfChannels_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngine2DSprite_vftable[2];  /* auto */
/*0066FA8C*/ void *(&dk2::CEngine2DSprite_vftable)[2] = _CEngine2DSprite_vftable;  /* auto */
/*--------*/ relink_glob void *_CEnginePrimitiveBase_vftable[2];  /* auto */
/*0066FA9C*/ void *(&dk2::CEnginePrimitiveBase_vftable)[2] = _CEnginePrimitiveBase_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngine2DRotatableSprite_vftable[2];  /* auto */
/*0066FAAC*/ void *(&dk2::CEngine2DRotatableSprite_vftable)[2] = _CEngine2DRotatableSprite_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngine2DStaticMesh_vftable[5];  /* auto */
/*0066FABC*/ void *(&dk2::CEngine2DStaticMesh_vftable)[5] = _CEngine2DStaticMesh_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngine2DAnimMesh_vftable[5];  /* auto */
/*0066FAD4*/ void *(&dk2::CEngine2DAnimMesh_vftable)[5] = _CEngine2DAnimMesh_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineVirtualPerspective2DAnimMesh_vftable[5];  /* auto */
/*0066FAEC*/ void *(&dk2::CEngineVirtualPerspective2DAnimMesh_vftable)[5] = _CEngineVirtualPerspective2DAnimMesh_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngine2DMeshSurface_vftable[2];  /* auto */
/*0066FB04*/ void *(&dk2::CEngine2DMeshSurface_vftable)[2] = _CEngine2DMeshSurface_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngine2DPrimitive_vftable[2];  /* auto */
/*0066FB14*/ void *(&dk2::CEngine2DPrimitive_vftable)[2] = _CEngine2DPrimitive_vftable;  /* auto */
/*--------*/ relink_glob void *_CIFFFile_vftable[3];  // -  /* auto */
/*0066FB24*/ void *(&dk2::CIFFFile_vftable)[3] = _CIFFFile_vftable;  /* auto */
/*--------*/ relink_glob void *_CDirectIFFFile_vftable[3];  /* auto */
/*0066FB34*/ void *(&dk2::CDirectIFFFile_vftable)[3] = _CDirectIFFFile_vftable;  /* auto */
/*--------*/ relink_glob void *_CMemLoadIFFFile_vftable[3];  /* auto */
/*0066FB9C*/ void *(&dk2::CMemLoadIFFFile_vftable)[3] = _CMemLoadIFFFile_vftable;  /* auto */
/*--------*/ relink_glob void *_CAnimMeshResource_vftable[3];  /* auto */
/*0066FBBC*/ void *(&dk2::CAnimMeshResource_vftable)[3] = _CAnimMeshResource_vftable;  /* auto */
/*--------*/ relink_glob void *_CMeshResourceBase_vftable[3];  /* auto */
/*0066FBCC*/ void *(&dk2::CMeshResourceBase_vftable)[3] = _CMeshResourceBase_vftable;  /* auto */
/*--------*/ relink_glob void *_CPolyMeshResource_vftable[3];  /* auto */
/*0066FBDC*/ void *(&dk2::CPolyMeshResource_vftable)[3] = _CPolyMeshResource_vftable;  /* auto */
/*--------*/ relink_glob void *_CMeshGroup_vftable[3];      /* auto */
/*0066FBEC*/ void *(&dk2::CMeshGroup_vftable)[3] = _CMeshGroup_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineSprite_vftable[8];   /* auto */
/*0066FCCC*/ void *(&dk2::CEngineSprite_vftable)[8] = _CEngineSprite_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineQuadPlane_vftable[8];  /* auto */
/*0066FCF4*/ void *(&dk2::CEngineQuadPlane_vftable)[8] = _CEngineQuadPlane_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineDynamicMesh_vftable[8];  /* auto */
/*0066FD1C*/ void *(&dk2::CEngineDynamicMesh_vftable)[8] = _CEngineDynamicMesh_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineWorldPrimitive_vftable[7];  /* auto */
/*0066FD44*/ void *(&dk2::CEngineWorldPrimitive_vftable)[7] = _CEngineWorldPrimitive_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineAnimMesh_vftable[8];  /* auto */
/*0066FD64*/ void *(&dk2::CEngineAnimMesh_vftable)[8] = _CEngineAnimMesh_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineStaticMesh_vftable[8];  /* auto */
/*0066FD8C*/ void *(&dk2::CEngineStaticMesh_vftable)[8] = _CEngineStaticMesh_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineStaticHeightField_vftable[8];  /* auto */
/*0066FDB4*/ void *(&dk2::CEngineStaticHeightField_vftable)[8] = _CEngineStaticHeightField_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineDynamicHeightField_vftable[8];  /* auto */
/*0066FDDC*/ void *(&dk2::CEngineDynamicHeightField_vftable)[8] = _CEngineDynamicHeightField_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineUnlitProceduralMesh_vftable[8];  /* auto */
/*0066FE04*/ void *(&dk2::CEngineUnlitProceduralMesh_vftable)[8] = _CEngineUnlitProceduralMesh_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineSurface_vftable[9];  /* auto */
/*0067034C*/ void *(&dk2::CEngineSurface_vftable)[9] = _CEngineSurface_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineSurfaceBase_vftable[9];  /* auto */
/*00670374*/ void *(&dk2::CEngineSurfaceBase_vftable)[9] = _CEngineSurfaceBase_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineCompressedSurface_vftable[9];  /* auto */
/*0067039C*/ void *(&dk2::CEngineCompressedSurface_vftable)[9] = _CEngineCompressedSurface_vftable;  /* auto */
/*--------*/ relink_glob void *_CEngineDDSurface_vftable[9];  /* auto */
/*006703C4*/ void *(&dk2::CEngineDDSurface_vftable)[9] = _CEngineDDSurface_vftable;  /* auto */
/*--------*/ relink_glob void *_CPCEngineInterface_vftable[70];  /* auto */
/*00670574*/ void *(&dk2::CPCEngineInterface_vftable)[70] = _CPCEngineInterface_vftable;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IKsPropertySet;  // -  /* auto */
/*00671C90*/ GUID &dk2::CLSID_IKsPropertySet = _CLSID_IKsPropertySet;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirectSound3DBuffer;  /* auto */
/*00671CA0*/ GUID &dk2::CLSID_IDirectSound3DBuffer = _CLSID_IDirectSound3DBuffer;  /* auto */
/*--------*/ relink_glob GUID _CLSID_GUID_SysKeyboard;      /* auto */
/*00671D40*/ GUID &dk2::CLSID_GUID_SysKeyboard = _CLSID_GUID_SysKeyboard;  /* auto */
/*--------*/ relink_glob GUID _CLSID_GUID_SysMouse;  // --  /* auto */
/*00671D50*/ GUID &dk2::CLSID_GUID_SysMouse = _CLSID_GUID_SysMouse;  /* auto */
/*--------*/ relink_glob GUID _CLSID_GUID_Key;  // -------  /* auto */
/*00671D60*/ GUID &dk2::CLSID_GUID_Key = _CLSID_GUID_Key;   /* auto */
/*--------*/ relink_glob GUID _CLSID_GUID_ZAxis;  // -----  /* auto */
/*00671D70*/ GUID &dk2::CLSID_GUID_ZAxis = _CLSID_GUID_ZAxis;  /* auto */
/*--------*/ relink_glob GUID _CLSID_GUID_YAxis;  // -----  /* auto */
/*00671D80*/ GUID &dk2::CLSID_GUID_YAxis = _CLSID_GUID_YAxis;  /* auto */
/*--------*/ relink_glob GUID _CLSID_GUID_XAxis;  // -----  /* auto */
/*00671D90*/ GUID &dk2::CLSID_GUID_XAxis = _CLSID_GUID_XAxis;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirect3DTexture2;     /* auto */
/*00671DA0*/ GUID &dk2::CLSID_IDirect3DTexture2 = _CLSID_IDirect3DTexture2;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirect3DHALDevice;    /* auto */
/*00671DB0*/ GUID &dk2::CLSID_IDirect3DHALDevice = _CLSID_IDirect3DHALDevice;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirect3D3;  // -----  /* auto */
/*00671DC0*/ GUID &dk2::CLSID_IDirect3D3 = _CLSID_IDirect3D3;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirect3D2;  // -----  /* auto */
/*00671DD0*/ GUID &dk2::CLSID_IDirect3D2 = _CLSID_IDirect3D2;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirect3D;  // ------  /* auto */
/*00671DE0*/ GUID &dk2::CLSID_IDirect3D = _CLSID_IDirect3D;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirectDrawGammaControl;  /* auto */
/*00671DF0*/ GUID &dk2::CLSID_IDirectDrawGammaControl = _CLSID_IDirectDrawGammaControl;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirectDrawSurface4;   /* auto */
/*00671E00*/ GUID &dk2::CLSID_IDirectDrawSurface4 = _CLSID_IDirectDrawSurface4;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirectDrawSurface2;   /* auto */
/*00671E10*/ GUID &dk2::CLSID_IDirectDrawSurface2 = _CLSID_IDirectDrawSurface2;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirectDraw4;  // ---  /* auto */
/*00671E20*/ GUID &dk2::CLSID_IDirectDraw4 = _CLSID_IDirectDraw4;  /* auto */
/*--------*/ relink_glob GUID _CLSID_IDirectDraw2;  // ---  /* auto */
/*00671E30*/ GUID &dk2::CLSID_IDirectDraw2 = _CLSID_IDirectDraw2;  /* auto */
/*--------*/ relink_glob void *_My8BitTexture_vftable[16];  /* auto */
/*00671E40*/ void *(&dk2::My8BitTexture_vftable)[16] = _My8BitTexture_vftable;  /* auto */
/*--------*/ relink_glob void *_My16BitTexture_vftable[16];  /* auto */
/*00671E80*/ void *(&dk2::My16BitTexture_vftable)[16] = _My16BitTexture_vftable;  /* auto */
/*--------*/ relink_glob void *_My24BitTexture_vftable[16];  /* auto */
/*00671EC0*/ void *(&dk2::My24BitTexture_vftable)[16] = _My24BitTexture_vftable;  /* auto */
/*--------*/ relink_glob void *_My32BitTexture_vftable[16];  /* auto */
/*00671F00*/ void *(&dk2::My32BitTexture_vftable)[16] = _My32BitTexture_vftable;  /* auto */
/*--------*/ relink_glob void *_FPUControlWord_vftable[1];  /* auto */
/*00671F40*/ void *(&dk2::FPUControlWord_vftable)[1] = _FPUControlWord_vftable;  /* auto */
/*--------*/ relink_glob void *_DiscFileBaseEx_vftable[9];  /* auto */
/*00671F48*/ void *(&dk2::DiscFileBaseEx_vftable)[9] = _DiscFileBaseEx_vftable;  /* auto */
/*--------*/ relink_glob void *_DiscFileBase_vftable[9];    /* auto */
/*00671F80*/ void *(&dk2::DiscFileBase_vftable)[9] = _DiscFileBase_vftable;  /* auto */
/*--------*/ relink_glob void *_MyStr_vftable[11];  // ---  /* auto */
/*006722D0*/ void *(&dk2::MyStr_vftable)[11] = _MyStr_vftable;  /* auto */
/*--------*/ relink_glob void *_MySubStr_vftable[2];  // -  /* auto */
/*00672300*/ void *(&dk2::MySubStr_vftable)[2] = _MySubStr_vftable;  /* auto */
/*--------*/ relink_glob void *_MyLList_WinEventCb_vftable[1];  /* auto */
/*00672340*/ void *(&dk2::MyLList_WinEventCb_vftable)[1] = _MyLList_WinEventCb_vftable;  /* auto */
/*--------*/ relink_glob void *_FileStorageBase_vftable[12];  /* auto */
/*00672348*/ void *(&dk2::FileStorageBase_vftable)[12] = _FileStorageBase_vftable;  /* auto */
/*--------*/ relink_glob void *_MyInputManagerCb_vftable[7];  /* auto */
/*00672380*/ void *(&dk2::MyInputManagerCb_vftable)[7] = _MyInputManagerCb_vftable;  /* auto */
/*--------*/ relink_glob void *_Obj6723A0_vftable[5];       /* auto */
/*006723A0*/ void *(&dk2::Obj6723A0_vftable)[5] = _Obj6723A0_vftable;  /* auto */
/*--------*/ relink_glob void *_Obj6723B8_vftable[5];       /* auto */
/*006723B8*/ void *(&dk2::Obj6723B8_vftable)[5] = _Obj6723B8_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCb6723D0_vftable[2];      /* auto */
/*006723D0*/ void *(&dk2::MyCb6723D0_vftable)[2] = _MyCb6723D0_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCbHandle_vftable[1];      /* auto */
/*006723D8*/ void *(&dk2::MyCbHandle_vftable)[1] = _MyCbHandle_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCallback_vftable[2];      /* auto */
/*006723E0*/ void *(&dk2::MyCallback_vftable)[2] = _MyCallback_vftable;  /* auto */
/*--------*/ relink_glob void *_MyInputListenersHolder_vftable[7];  /* auto */
/*006723E8*/ void *(&dk2::MyInputListenersHolder_vftable)[7] = _MyInputListenersHolder_vftable;  /* auto */
/*--------*/ relink_glob void *_MySharedObj_vftable[3];     /* auto */
/*00672408*/ void *(&dk2::MySharedObj_vftable)[3] = _MySharedObj_vftable;  /* auto */
/*--------*/ relink_glob void *_MyComEx_vftable[7];  // --  /* auto */
/*00672418*/ void *(&dk2::MyComEx_vftable)[7] = _MyComEx_vftable;  /* auto */
/*--------*/ relink_glob void *_MyWindowMsgs_vftable[5];    /* auto */
/*00672438*/ void *(&dk2::MyWindowMsgs_vftable)[5] = _MyWindowMsgs_vftable;  /* auto */
/*--------*/ relink_glob void *_WndMsgDxAction_vftable[1];  /* auto */
/*0067244C*/ void *(&dk2::WndMsgDxAction_vftable)[1] = _WndMsgDxAction_vftable;  /* auto */
/*--------*/ relink_glob void *_WndMsgDxActionList_vftable[1];  /* auto */
/*00672450*/ void *(&dk2::WndMsgDxActionList_vftable)[1] = _WndMsgDxActionList_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCollectDxAction_vftable[7];  /* auto */
/*00672458*/ void *(&dk2::MyCollectDxAction_vftable)[7] = _MyCollectDxAction_vftable;  /* auto */
/*--------*/ relink_glob uint32_t _MyDxInputManagerCb_idxs[2];  /* auto */
/*00672478*/ uint32_t (&dk2::MyDxInputManagerCb_idxs)[2] = _MyDxInputManagerCb_idxs;  /* auto */
/*--------*/ relink_glob void *_MyDxInputManagerCb_vftable[7];  /* auto */
/*00672480*/ void *(&dk2::MyDxInputManagerCb_vftable)[7] = _MyDxInputManagerCb_vftable;  /* auto */
/*--------*/ relink_glob void *_MyMouseUpdater_vftable[7];  /* auto */
/*006724A8*/ void *(&dk2::MyMouseUpdater_vftable)[7] = _MyMouseUpdater_vftable;  /* auto */
/*--------*/ relink_glob void *_Obj672500_vftable[3];       /* auto */
/*00672500*/ void *(&dk2::Obj672500_vftable)[3] = _Obj672500_vftable;  /* auto */
/*--------*/ relink_glob void *_Obj672510_vftable[3];       /* auto */
/*00672510*/ void *(&dk2::Obj672510_vftable)[3] = _Obj672510_vftable;  /* auto */
/*--------*/ relink_glob void *_Obj672520Interface_vftable[3];  /* auto */
/*00672520*/ void *(&dk2::Obj672520Interface_vftable)[3] = _Obj672520Interface_vftable;  /* auto */
/*--------*/ relink_glob void *_MyStream_vftable[12];       /* auto */
/*006725D8*/ void *(&dk2::MyStream_vftable)[12] = _MyStream_vftable;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_672608[64];     /* auto */
/*00672608*/ int32_t (&dk2::tqi_dword_672608)[64] = _tqi_dword_672608;  /* auto */
/*--------*/ relink_glob void *_MyDirectory_vftable[13];    /* auto */
/*00672708*/ void *(&dk2::MyDirectory_vftable)[13] = _MyDirectory_vftable;  /* auto */
/*--------*/ relink_glob void *_MyWadDirectory_vftable[13];  /* auto */
/*00672740*/ void *(&dk2::MyWadDirectory_vftable)[13] = _MyWadDirectory_vftable;  /* auto */
/*--------*/ relink_glob void *_MyDiskDirectory_vftable[14];  /* auto */
/*00672778*/ void *(&dk2::MyDiskDirectory_vftable)[14] = _MyDiskDirectory_vftable;  /* auto */
/*--------*/ relink_glob void *_DxActionQueue_vftable[9];   /* auto */
/*006727B0*/ void *(&dk2::DxActionQueue_vftable)[9] = _DxActionQueue_vftable;  /* auto */
/*--------*/ relink_glob void *_LockBase_vftable[9];  // -  /* auto */
/*006727D8*/ void *(&dk2::LockBase_vftable)[9] = _LockBase_vftable;  /* auto */
/*--------*/ relink_glob void *_AsyncThing_vftable[1];      /* auto */
/*006727FC*/ void *(&dk2::AsyncThing_vftable)[1] = _AsyncThing_vftable;  /* auto */
/*--------*/ relink_glob void *_MySignalBase_vftable[5];    /* auto */
/*00672800*/ void *(&dk2::MySignalBase_vftable)[5] = _MySignalBase_vftable;  /* auto */
/*--------*/ relink_glob void *_MyDxInputState_vftable[7];  /* auto */
/*00672828*/ void *(&dk2::MyDxInputState_vftable)[7] = _MyDxInputState_vftable;  /* auto */
/*--------*/ relink_glob void *_Obj672844_vftable[1];       /* auto */
/*00672844*/ void *(&dk2::Obj672844_vftable)[1] = _Obj672844_vftable;  /* auto */
/*--------*/ relink_glob uint32_t _MyCb6723D0_idxs[3];      /* auto */
/*00672848*/ uint32_t (&dk2::MyCb6723D0_idxs)[3] = _MyCb6723D0_idxs;  /* auto */
/*--------*/ relink_glob void *_CursorDrawer_vftable[1];    /* auto */
/*00672854*/ void *(&dk2::CursorDrawer_vftable)[1] = _CursorDrawer_vftable;  /* auto */
/*--------*/ relink_glob void *_MyDxDevice_vftable[3];      /* auto */
/*00672868*/ void *(&dk2::MyDxDevice_vftable)[3] = _MyDxDevice_vftable;  /* auto */
/*--------*/ relink_glob uint32_t _MyControlKeysCb_idxs[2];  /* auto */
/*00672878*/ uint32_t (&dk2::MyControlKeysCb_idxs)[2] = _MyControlKeysCb_idxs;  /* auto */
/*--------*/ relink_glob void *_ControlKeysUpdater_vftable[7];  /* auto */
/*00672888*/ void *(&dk2::ControlKeysUpdater_vftable)[7] = _ControlKeysUpdater_vftable;  /* auto */
/*--------*/ relink_glob uint32_t _MyMouseCb_idxs[2];       /* auto */
/*006728A8*/ uint32_t (&dk2::MyMouseCb_idxs)[2] = _MyMouseCb_idxs;  /* auto */
/*--------*/ relink_glob void *_MyMouse_vftable[7];  // --  /* auto */
/*006728B0*/ void *(&dk2::MyMouse_vftable)[7] = _MyMouse_vftable;  /* auto */
/*--------*/ relink_glob void *_MyDxMouse_vftable[6];       /* auto */
/*006728E0*/ void *(&dk2::MyDxMouse_vftable)[6] = _MyDxMouse_vftable;  /* auto */
/*--------*/ relink_glob void *_MouseRgbDxAction_vftable[1];  /* auto */
/*006728F8*/ void *(&dk2::MouseRgbDxAction_vftable)[1] = _MouseRgbDxAction_vftable;  /* auto */
/*--------*/ relink_glob void *_MouseRgbDxActionList_vftable[1];  /* auto */
/*006728FC*/ void *(&dk2::MouseRgbDxActionList_vftable)[1] = _MouseRgbDxActionList_vftable;  /* auto */
/*--------*/ relink_glob void *_MouseXyzDxAction_vftable[1];  /* auto */
/*00672900*/ void *(&dk2::MouseXyzDxAction_vftable)[1] = _MouseXyzDxAction_vftable;  /* auto */
/*--------*/ relink_glob void *_MouseXyzDxActionList_vftable[1];  /* auto */
/*00672904*/ void *(&dk2::MouseXyzDxActionList_vftable)[1] = _MouseXyzDxActionList_vftable;  /* auto */
/*--------*/ relink_glob void *_MyDxKeyboard_vftable[6];    /* auto */
/*00672920*/ void *(&dk2::MyDxKeyboard_vftable)[6] = _MyDxKeyboard_vftable;  /* auto */
/*--------*/ relink_glob void *_ControlSurf_vftable[1];     /* auto */
/*006729F8*/ void *(&dk2::ControlSurf_vftable)[1] = _ControlSurf_vftable;  /* auto */
/*--------*/ relink_glob char _libpng_png_digit[16];  // -  /* auto */
/*00672A00*/ char (&dk2::libpng_png_digit)[16] = _libpng_png_digit;  /* auto */
/*--------*/ relink_glob int32_t _zlib_crc_table[256];      /* auto */
/*00672A10*/ int32_t (&dk2::zlib_crc_table)[256] = _zlib_crc_table;  /* auto */
/*--------*/ relink_glob void *_Obj672E70_vftable[3];       /* auto */
/*00672E70*/ void *(&dk2::Obj672E70_vftable)[3] = _Obj672E70_vftable;  /* auto */
/*--------*/ relink_glob void *_Obj672E80_vftable[3];       /* auto */
/*00672E80*/ void *(&dk2::Obj672E80_vftable)[3] = _Obj672E80_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCachedDataStream_vftable[12];  /* auto */
/*00672E90*/ void *(&dk2::MyCachedDataStream_vftable)[12] = _MyCachedDataStream_vftable;  /* auto */
/*--------*/ relink_glob void *_MyLocalStr_vftable[9];      /* auto */
/*00672EC0*/ void *(&dk2::MyLocalStr_vftable)[9] = _MyLocalStr_vftable;  /* auto */
/*--------*/ relink_glob void *_MyLList_WadFileObj_vftable[1];  /* auto */
/*00672EE4*/ void *(&dk2::MyLList_WadFileObj_vftable)[1] = _MyLList_WadFileObj_vftable;  /* auto */
/*--------*/ relink_glob void *_MyLList_WadDirObj_vftable[1];  /* auto */
/*00672EE8*/ void *(&dk2::MyLList_WadDirObj_vftable)[1] = _MyLList_WadDirObj_vftable;  /* auto */
/*--------*/ relink_glob void *_MyConcurrentStream_vftable[12];  /* auto */
/*00672EF8*/ void *(&dk2::MyConcurrentStream_vftable)[12] = _MyConcurrentStream_vftable;  /* auto */
/*--------*/ relink_glob void *_My10FBFileStream_vftable[12];  /* auto */
/*00672F28*/ void *(&dk2::My10FBFileStream_vftable)[12] = _My10FBFileStream_vftable;  /* auto */
/*--------*/ relink_glob void *_MyZlibFileStream_vftable[12];  /* auto */
/*00672F88*/ void *(&dk2::MyZlibFileStream_vftable)[12] = _MyZlibFileStream_vftable;  /* auto */
/*--------*/ relink_glob void *_MyWadFileStream_vftable[12];  /* auto */
/*00672FB8*/ void *(&dk2::MyWadFileStream_vftable)[12] = _MyWadFileStream_vftable;  /* auto */
/*--------*/ relink_glob void *_MyFileStream_vftable[12];   /* auto */
/*00672FE8*/ void *(&dk2::MyFileStream_vftable)[12] = _MyFileStream_vftable;  /* auto */
/*--------*/ relink_glob void *_MyMemoryMapStream_vftable[12];  /* auto */
/*00673018*/ void *(&dk2::MyMemoryMapStream_vftable)[12] = _MyMemoryMapStream_vftable;  /* auto */
/*--------*/ relink_glob void *_MyDirectInput_vftable[6];   /* auto */
/*00673048*/ void *(&dk2::MyDirectInput_vftable)[6] = _MyDirectInput_vftable;  /* auto */
/*--------*/ relink_glob int32_t _zlib_border[19];  // ---  /* auto */
/*00673070*/ int32_t (&dk2::zlib_border)[19] = _zlib_border;  /* auto */
/*--------*/ relink_glob void *_MyCachedOffsStream_vftable[12];  /* auto */
/*006730C0*/ void *(&dk2::MyCachedOffsStream_vftable)[12] = _MyCachedOffsStream_vftable;  /* auto */
/*--------*/ relink_glob zlib_config _zlib_configuration_table[10];  /* auto */
/*00673388*/ zlib_config (&dk2::zlib_configuration_table)[10] = _zlib_configuration_table;  /* auto */
/*--------*/ relink_glob void *_MyTbAudioSystem_vftable[7];  /* auto */
/*00673E48*/ void *(&dk2::MyTbAudioSystem_vftable)[7] = _MyTbAudioSystem_vftable;  /* auto */
/*--------*/ relink_glob void *_MySoundLoader_vftable[1];   /* auto */
/*00674058*/ void *(&dk2::MySoundLoader_vftable)[1] = _MySoundLoader_vftable;  /* auto */
/*--------*/ relink_glob IID _rclsid;  // ----------------  /* auto */
/*00674430*/ IID &dk2::rclsid = _rclsid;  // -------------  /* auto */
/*--------*/ relink_glob IID _riid;  // ------------------  /* auto */
/*00674470*/ IID &dk2::riid = _riid;  // -----------------  /* auto */
/*--------*/ relink_glob uint16_t _wordArr_00676378[32];    /* auto */
/*00676378*/ uint16_t (&dk2::wordArr_00676378)[32] = _wordArr_00676378;  /* auto */
/*--------*/ relink_glob void *_FontObj_vftable[1];  // --  /* auto */
/*0067B8C0*/ void *(&dk2::FontObj_vftable)[1] = _FontObj_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCR0_vftable[3];  // ----  /* auto */
/*0067B8C8*/ void *(&dk2::MyCR0_vftable)[3] = _MyCR0_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCR1_vftable[3];  // ----  /* auto */
/*0067B8D8*/ void *(&dk2::MyCR1_vftable)[3] = _MyCR1_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCR2_vftable[3];  // ----  /* auto */
/*0067B8E8*/ void *(&dk2::MyCR2_vftable)[3] = _MyCR2_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCR3_vftable[3];  // ----  /* auto */
/*0067B8F8*/ void *(&dk2::MyCR3_vftable)[3] = _MyCR3_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTR4_vftable[4];  // ----  /* auto */
/*0067B908*/ void *(&dk2::MyTR4_vftable)[4] = _MyTR4_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTR5_vftable[4];  // ----  /* auto */
/*0067B918*/ void *(&dk2::MyTR5_vftable)[4] = _MyTR5_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTR2_vftable[4];  // ----  /* auto */
/*0067B928*/ void *(&dk2::MyTR2_vftable)[4] = _MyTR2_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTR6_vftable[4];  // ----  /* auto */
/*0067B938*/ void *(&dk2::MyTR6_vftable)[4] = _MyTR6_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTextRenderer_vftable[1];  /* auto */
/*0067B948*/ void *(&dk2::MyTextRenderer_vftable)[1] = _MyTextRenderer_vftable;  /* auto */
/*--------*/ relink_glob void *_MyMbStringList_vftable[5];  /* auto */
/*0067B950*/ void *(&dk2::MyMbStringList_vftable)[5] = _MyMbStringList_vftable;  /* auto */
/*--------*/ relink_glob void *_MySharedText_vftable[5];    /* auto */
/*0067B968*/ void *(&dk2::MySharedText_vftable)[5] = _MySharedText_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTextFormatMB_vftable[6];  /* auto */
/*0067B980*/ void *(&dk2::MyTextFormatMB_vftable)[6] = _MyTextFormatMB_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTextFormatWChar_vftable[6];  /* auto */
/*0067B998*/ void *(&dk2::MyTextFormatWChar_vftable)[6] = _MyTextFormatWChar_vftable;  /* auto */
/*--------*/ relink_glob void *_MyUniToMbMap_vftable[5];    /* auto */
/*0067B9B0*/ void *(&dk2::MyUniToMbMap_vftable)[5] = _MyUniToMbMap_vftable;  /* auto */
/*--------*/ relink_glob void *_MyMbToUniMap_vftable[5];    /* auto */
/*0067B9C8*/ void *(&dk2::MyMbToUniMap_vftable)[5] = _MyMbToUniMap_vftable;  /* auto */
/*--------*/ relink_glob void *_MyDR0_vftable[5];  // ----  /* auto */
/*0067B9E0*/ void *(&dk2::MyDR0_vftable)[5] = _MyDR0_vftable;  /* auto */
/*--------*/ relink_glob void *_MyCRBase_vftable[3];  // -  /* auto */
/*0067B9F8*/ void *(&dk2::MyCRBase_vftable)[3] = _MyCRBase_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTRBase_vftable[4];  // -  /* auto */
/*0067BA08*/ void *(&dk2::MyTRBase_vftable)[4] = _MyTRBase_vftable;  /* auto */
/*--------*/ relink_glob void *_FontObjWr_vftable[1];       /* auto */
/*0067BA18*/ void *(&dk2::FontObjWr_vftable)[1] = _FontObjWr_vftable;  /* auto */
/*--------*/ relink_glob void *_MyFileStorage_vftable[5];   /* auto */
/*0067BA30*/ void *(&dk2::MyFileStorage_vftable)[5] = _MyFileStorage_vftable;  /* auto */
/*--------*/ relink_glob void *_MyDRBase_vftable[5];  // -  /* auto */
/*0067BA48*/ void *(&dk2::MyDRBase_vftable)[5] = _MyDRBase_vftable;  /* auto */
/*--------*/ relink_glob void *_MyFontRenderer4_vftable[7];  /* auto */
/*0067BA60*/ void *(&dk2::MyFontRenderer4_vftable)[7] = _MyFontRenderer4_vftable;  /* auto */
/*--------*/ relink_glob void *_MyFontRenderer0_vftable[7];  /* auto */
/*0067BA80*/ void *(&dk2::MyFontRenderer0_vftable)[7] = _MyFontRenderer0_vftable;  /* auto */
/*--------*/ relink_glob void *_MyFontRenderer2_vftable[7];  /* auto */
/*0067BAA0*/ void *(&dk2::MyFontRenderer2_vftable)[7] = _MyFontRenderer2_vftable;  /* auto */
/*--------*/ relink_glob void *_MyFontRenderer3_vftable[7];  /* auto */
/*0067BAC0*/ void *(&dk2::MyFontRenderer3_vftable)[7] = _MyFontRenderer3_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTextMB_vftable[5];  // -  /* auto */
/*0067BAE0*/ void *(&dk2::MyTextMB_vftable)[5] = _MyTextMB_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTextFont_vftable[11];     /* auto */
/*0067BAF8*/ void *(&dk2::MyTextFont_vftable)[11] = _MyTextFont_vftable;  /* auto */
/*--------*/ relink_glob void *_MyFontRendererBase_vftable[7];  /* auto */
/*0067BB28*/ void *(&dk2::MyFontRendererBase_vftable)[7] = _MyFontRendererBase_vftable;  /* auto */
/*--------*/ relink_glob void *_MyTextFontBase_vftable[11];  /* auto */
/*0067BB50*/ void *(&dk2::MyTextFontBase_vftable)[11] = _MyTextFontBase_vftable;  /* auto */
/*--------*/ relink_glob char _String1[22];  // ----------  /* auto */
/*0067BEE0*/ char (&dk2::String1)[22] = _String1;  // ----  /* auto */
/*--------*/ relink_glob DIDATAFORMAT _c_dfDIMouse;  // --  /* auto */
/*0067CB48*/ DIDATAFORMAT &dk2::c_dfDIMouse = _c_dfDIMouse;  /* auto */
/*--------*/ relink_glob DIDATAFORMAT _c_dfDIKeyboard;      /* auto */
/*0067CB60*/ DIDATAFORMAT &dk2::c_dfDIKeyboard = _c_dfDIKeyboard;  /* auto */
/*--------*/ relink_glob void (__cdecl *___xc_a_1)();       /* auto */
/*0068E000*/ void (__cdecl *&dk2::__xc_a_1)() = ___xc_a_1;  /* auto */
/*--------*/ relink_glob void (__cdecl *___xc_z_1)();       /* auto */
/*0068E348*/ void (__cdecl *&dk2::__xc_z_1)() = ___xc_z_1;  /* auto */
/*--------*/ relink_glob void (__cdecl *_First)();  // ---  /* auto */
/*0068E34C*/ void (__cdecl *&dk2::First)() = _First;  // -  /* auto */
/*--------*/ relink_glob void (__cdecl *_Last)();  // ----  /* auto */
/*0068E35C*/ void (__cdecl *&dk2::Last)() = _Last;  // ---  /* auto */
/*--------*/ relink_glob void (__cdecl *___xt_a_0)();       /* auto */
/*0068E360*/ void (__cdecl *&dk2::__xt_a_0)() = ___xt_a_0;  /* auto */
/*--------*/ relink_glob void (__cdecl *___xt_z_0)();       /* auto */
/*0068E368*/ void (__cdecl *&dk2::__xt_z_0)() = ___xt_z_0;  /* auto */
/*--------*/ relink_glob void (__cdecl *___xt_a_1)();       /* auto */
/*0068E36C*/ void (__cdecl *&dk2::__xt_a_1)() = ___xt_a_1;  /* auto */
/*--------*/ relink_glob void (__cdecl *___xt_z_1)();       /* auto */
/*0068E374*/ void (__cdecl *&dk2::__xt_z_1)() = ___xt_z_1;  /* auto */
/*--------*/ relink_glob WindowCfg *_gameView[53];  // ---  /* auto */
/*00693EF8*/ WindowCfg *(&dk2::gameView)[53] = _gameView;   /* auto */
/*--------*/ relink_glob ButtonCfg _Game_EscMenu_BtnArr;    /* auto */
/*006945C8*/ ButtonCfg &dk2::Game_EscMenu_BtnArr = _Game_EscMenu_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Game_Load_BtnArr;       /* auto */
/*00694898*/ ButtonCfg &dk2::Game_Load_BtnArr = _Game_Load_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Game_Save_BtnArr;       /* auto */
/*00694A28*/ ButtonCfg &dk2::Game_Save_BtnArr = _Game_Save_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Game_Options_BtnArr;    /* auto */
/*00694C08*/ ButtonCfg &dk2::Game_Options_BtnArr = _Game_Options_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Game_GraphicsOptions_BtnArr;  /* auto */
/*00694E88*/ ButtonCfg &dk2::Game_GraphicsOptions_BtnArr = _Game_GraphicsOptions_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Game_SoundOptions_BtnArr;  /* auto */
/*006952E8*/ ButtonCfg &dk2::Game_SoundOptions_BtnArr = _Game_SoundOptions_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Game_AdvancedSoundOptions_BtnArr;  /* auto */
/*00695A18*/ ButtonCfg &dk2::Game_AdvancedSoundOptions_BtnArr = _Game_AdvancedSoundOptions_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Game_EndGame_BtnArr;    /* auto */
/*00696828*/ ButtonCfg &dk2::Game_EndGame_BtnArr = _Game_EndGame_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Game_Confirm_BtnArr;    /* auto */
/*00696A08*/ ButtonCfg &dk2::Game_Confirm_BtnArr = _Game_Confirm_BtnArr;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_EscMenu_WinCfg;    /* auto */
/*00696BE8*/ WindowCfg &dk2::Game_EscMenu_WinCfg = _Game_EscMenu_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_Load_WinCfg;       /* auto */
/*00696C30*/ WindowCfg &dk2::Game_Load_WinCfg = _Game_Load_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_Save_WinCfg;       /* auto */
/*00696C78*/ WindowCfg &dk2::Game_Save_WinCfg = _Game_Save_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_Options_WinCfg;    /* auto */
/*00696CC0*/ WindowCfg &dk2::Game_Options_WinCfg = _Game_Options_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_GraphicsOptions_WinCfg;  /* auto */
/*00696D08*/ WindowCfg &dk2::Game_GraphicsOptions_WinCfg = _Game_GraphicsOptions_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_SoundOptions_WinCfg;  /* auto */
/*00696D50*/ WindowCfg &dk2::Game_SoundOptions_WinCfg = _Game_SoundOptions_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_AdvancedSoundOptions_WinCfg;  /* auto */
/*00696D98*/ WindowCfg &dk2::Game_AdvancedSoundOptions_WinCfg = _Game_AdvancedSoundOptions_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_EndGame_WinCfg;    /* auto */
/*00696F48*/ WindowCfg &dk2::Game_EndGame_WinCfg = _Game_EndGame_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Game_Confirm_WinCfg;    /* auto */
/*00696F90*/ WindowCfg &dk2::Game_Confirm_WinCfg = _Game_Confirm_WinCfg;  /* auto */
/*--------*/ relink_glob MyStateEntry _g_stateEntries[32];  /* auto */
/*00699688*/ MyStateEntry (&dk2::g_stateEntries)[32] = _g_stateEntries;  /* auto */
/*--------*/ relink_glob GameActionRecord _actionRecords[87];  /* auto */
/*006A54B8*/ GameActionRecord (&dk2::actionRecords)[87] = _actionRecords;  /* auto */
/*--------*/ relink_glob NameCfg _nameList[1];  // -------  /* auto */
/*006AC8A0*/ NameCfg (&dk2::nameList)[1] = _nameList;       /* auto */
/*--------*/ relink_glob FontObj *_g_curFontObj;  // -----  /* auto */
/*006AD170*/ FontObj *&dk2::g_curFontObj = _g_curFontObj;   /* auto */
/*--------*/ relink_glob WindowCfg _Main_Main_WinCfg;       /* auto */
/*006AD610*/ WindowCfg &dk2::Main_Main_WinCfg = _Main_Main_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_SinglePlayer_WinCfg;  /* auto */
/*006AD658*/ WindowCfg &dk2::Main_SinglePlayer_WinCfg = _Main_SinglePlayer_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_Scrimish_WinCfg;   /* auto */
/*006AD6A0*/ WindowCfg &dk2::Main_Scrimish_WinCfg = _Main_Scrimish_WinCfg;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_Main_BtnArr;       /* auto */
/*006AD7C0*/ ButtonCfg &dk2::Main_Main_BtnArr = _Main_Main_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_SinglePlayer_BtnArr;  /* auto */
/*006ADAE0*/ ButtonCfg &dk2::Main_SinglePlayer_BtnArr = _Main_SinglePlayer_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_Scrimish_BtnArr;   /* auto */
/*006ADD10*/ ButtonCfg &dk2::Main_Scrimish_BtnArr = _Main_Scrimish_BtnArr;  /* auto */
/*--------*/ relink_glob WindowCfg *_mainView[33];  // ---  /* auto */
/*006AE4E0*/ WindowCfg *(&dk2::mainView)[33] = _mainView;   /* auto */
/*--------*/ relink_glob GameScoreRecord _bundledScoreList[194];  /* auto */
/*006AF430*/ GameScoreRecord (&dk2::bundledScoreList)[194] = _bundledScoreList;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_Extras_WinCfg;     /* auto */
/*006B1FE8*/ WindowCfg &dk2::Main_Extras_WinCfg = _Main_Extras_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_TodaysTopKeepers_WinCfg;  /* auto */
/*006B2030*/ WindowCfg &dk2::Main_TodaysTopKeepers_WinCfg = _Main_TodaysTopKeepers_WinCfg;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_Extras_BtnArr;     /* auto */
/*006B2078*/ ButtonCfg &dk2::Main_Extras_BtnArr = _Main_Extras_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_TodaysTopKeepers_BtnArr;  /* auto */
/*006B22A8*/ ButtonCfg &dk2::Main_TodaysTopKeepers_BtnArr = _Main_TodaysTopKeepers_BtnArr;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_GraphicsOptions_WinCfg;  /* auto */
/*006B5AD0*/ WindowCfg &dk2::Main_GraphicsOptions_WinCfg = _Main_GraphicsOptions_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_SoundOptions_WinCfg;  /* auto */
/*006B5B18*/ WindowCfg &dk2::Main_SoundOptions_WinCfg = _Main_SoundOptions_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_ControlOptions_WinCfg;  /* auto */
/*006B5B60*/ WindowCfg &dk2::Main_ControlOptions_WinCfg = _Main_ControlOptions_WinCfg;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_GraphicsOptions_BtnArr;  /* auto */
/*006B5D88*/ ButtonCfg &dk2::Main_GraphicsOptions_BtnArr = _Main_GraphicsOptions_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_SoundOptions_BtnArr;  /* auto */
/*006B63C8*/ ButtonCfg &dk2::Main_SoundOptions_BtnArr = _Main_SoundOptions_BtnArr;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_ControlOptions_BtnArr;  /* auto */
/*006B6AF8*/ ButtonCfg &dk2::Main_ControlOptions_BtnArr = _Main_ControlOptions_BtnArr;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_Multiplayer_WinCfg;  /* auto */
/*006B7060*/ WindowCfg &dk2::Main_Multiplayer_WinCfg = _Main_Multiplayer_WinCfg;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_MultiplayerWinsock_WinCfg;  /* auto */
/*006B70A8*/ WindowCfg &dk2::Main_MultiplayerWinsock_WinCfg = _Main_MultiplayerWinsock_WinCfg;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_MultiplayerWinsock_BtnArr;  /* auto */
/*006B7310*/ ButtonCfg &dk2::Main_MultiplayerWinsock_BtnArr = _Main_MultiplayerWinsock_BtnArr;  /* auto */
/*--------*/ relink_glob WindowCfg _Main_LoadGame_WinCfg;   /* auto */
/*006BB1C8*/ WindowCfg &dk2::Main_LoadGame_WinCfg = _Main_LoadGame_WinCfg;  /* auto */
/*--------*/ relink_glob ButtonCfg _Main_LoadGame_BtnArr[8];  /* auto */
/*006BB210*/ ButtonCfg (&dk2::Main_LoadGame_BtnArr)[8] = _Main_LoadGame_BtnArr;  /* auto */
/*--------*/ relink_glob KeyEntry _g_keyMap[120];  // ----  /* auto */
/*006BD048*/ KeyEntry (&dk2::g_keyMap)[120] = _g_keyMap;    /* auto */
/*--------*/ relink_glob sVLCtable _mpeg2_DClumtab[12];     /* auto */
/*006BEA30*/ sVLCtable (&dk2::mpeg2_DClumtab)[12] = _mpeg2_DClumtab;  /* auto */
/*--------*/ relink_glob VLCtable _mpeg2_dct_code_tab1;     /* auto */
/*006BEA80*/ VLCtable &dk2::mpeg2_dct_code_tab1 = _mpeg2_dct_code_tab1;  /* auto */
/*--------*/ relink_glob VLCtable_tab2 _mpeg2_dct_code_tab2[30];  /* auto */
/*006BEB20*/ VLCtable_tab2 (&dk2::mpeg2_dct_code_tab2)[30] = _mpeg2_dct_code_tab2;  /* auto */
/*--------*/ relink_glob VLCtable _mpeg2_dct_code_tab1a[2][40];  /* auto */
/*006BEC50*/ VLCtable (&dk2::mpeg2_dct_code_tab1a)[2][40] = _mpeg2_dct_code_tab1a;  /* auto */
/*--------*/ relink_glob VLCtable _mpeg2_dct_code_tab2a[30][5];  /* auto */
/*006BECF0*/ VLCtable (&dk2::mpeg2_dct_code_tab2a)[30][5] = _mpeg2_dct_code_tab2a;  /* auto */
/*--------*/ relink_glob StubStruc6C3DA0 _libpng_png_sig;   /* auto */
/*006C40F8*/ StubStruc6C3DA0 &dk2::libpng_png_sig = _libpng_png_sig;  /* auto */
/*--------*/ relink_glob int32_t _libpng_png_pass_start[7];  /* auto */
/*006C4188*/ int32_t (&dk2::libpng_png_pass_start)[7] = _libpng_png_pass_start;  /* auto */
/*--------*/ relink_glob int32_t _libpng_png_pass_inc[7];   /* auto */
/*006C41A8*/ int32_t (&dk2::libpng_png_pass_inc)[7] = _libpng_png_pass_inc;  /* auto */
/*--------*/ relink_glob int32_t _libpng_png_pass_ystart[7];  /* auto */
/*006C41C8*/ int32_t (&dk2::libpng_png_pass_ystart)[7] = _libpng_png_pass_ystart;  /* auto */
/*--------*/ relink_glob int32_t _libpng_png_pass_yinc[7];  /* auto */
/*006C41E8*/ int32_t (&dk2::libpng_png_pass_yinc)[7] = _libpng_png_pass_yinc;  /* auto */
/*--------*/ relink_glob int32_t _libpng_png_pass_mask[7];  /* auto */
/*006C4208*/ int32_t (&dk2::libpng_png_pass_mask)[7] = _libpng_png_pass_mask;  /* auto */
/*--------*/ relink_glob int32_t _libpng_png_pass_dsp_mask[7];  /* auto */
/*006C4228*/ int32_t (&dk2::libpng_png_pass_dsp_mask)[7] = _libpng_png_pass_dsp_mask;  /* auto */
/*--------*/ relink_glob int32_t _libpng_png_gamma_shift[8];  /* auto */
/*006C43D8*/ int32_t (&dk2::libpng_png_gamma_shift)[8] = _libpng_png_gamma_shift;  /* auto */
/*--------*/ relink_glob StubStruc6C3DA0 _arr_6C5408[105];  /* auto */
/*006C5408*/ StubStruc6C3DA0 (&dk2::arr_6C5408)[105] = _arr_6C5408;  /* auto */
/*--------*/ relink_glob int32_t _zlib_fixed_mem___[256];   /* auto */
/*006C58A0*/ int32_t (&dk2::zlib_fixed_mem___)[256] = _zlib_fixed_mem___;  /* auto */
/*--------*/ relink_glob int32_t _g_renderers[30];  // ---  /* auto */
/*006C8E30*/ int32_t (&dk2::g_renderers)[30] = _g_renderers;  /* auto */
/*--------*/ relink_glob uint32_t *_g_MyText_constructors[5];  /* auto */
/*006C8EA8*/ uint32_t *(&dk2::g_MyText_constructors)[5] = _g_MyText_constructors;  /* auto */
/*--------*/ relink_glob FILE _File;  // -----------------  /* auto */
/*006C8FD8*/ FILE &dk2::File = _File;  // ----------------  /* auto */
/*--------*/ relink_glob FILE _crt_stderr;  // -----------  /* auto */
/*006C8FF8*/ FILE &dk2::crt_stderr = _crt_stderr;  // ----  /* auto */
/*--------*/ relink_glob uint32_t _dwTlsIndex_ThreadCtx;    /* auto */
/*006C9300*/ uint32_t &dk2::dwTlsIndex_ThreadCtx = _dwTlsIndex_ThreadCtx;  /* auto */
/*--------*/ relink_glob uint16_t ___ctype;  // ----------  /* auto */
/*006C9490*/ uint16_t &dk2::__ctype = ___ctype;  // ------  /* auto */
/*--------*/ relink_glob size_t _SrcSizeInBytes;  // -----  /* auto */
/*006C9694*/ size_t &dk2::SrcSizeInBytes = _SrcSizeInBytes;  /* auto */
/*--------*/ relink_glob void *_lpMem;  // ---------------  /* auto */
/*006C9AB4*/ void *&dk2::lpMem = _lpMem;  // -------------  /* auto */
/*--------*/ relink_glob const void *_lpBuffer[35];  // --  /* auto */
/*006CBC0C*/ const void *(&dk2::lpBuffer)[35] = _lpBuffer;  /* auto */
/*--------*/ relink_glob char *_Dest;  // ----------------  /* auto */
/*006CC648*/ char *&dk2::Dest = _Dest;  // ---------------  /* auto */
/*--------*/ relink_glob CEntryComponent _CEntryComponent_instance;  /* auto */
/*006CCA20*/ CEntryComponent &dk2::CEntryComponent_instance = _CEntryComponent_instance;  /* auto */
/*--------*/ relink_glob MyDdSurfaceEx _myDdSurfaceArr_x15[21];  /* auto */
/*006CCA60*/ MyDdSurfaceEx (&dk2::myDdSurfaceArr_x15)[21] = _myDdSurfaceArr_x15;  /* auto */
/*--------*/ relink_glob int32_t _myDdSurface_end;  // ---  /* auto */
/*006CD0F0*/ int32_t &dk2::myDdSurface_end = _myDdSurface_end;  /* auto */
/*--------*/ relink_glob MyDdSurfaceEx _my_surf;  // -----  /* auto */
/*006CE850*/ MyDdSurfaceEx &dk2::my_surf = _my_surf;  // -  /* auto */
/*--------*/ relink_glob int32_t _idx;  // ---------------  /* auto */
/*006CE8A0*/ int32_t &dk2::idx = _idx;  // ---------------  /* auto */
/*--------*/ relink_glob CDefaultPlayerInterface _CDefaultPlayerInterface_instance;  /* auto */
/*006CEA10*/ CDefaultPlayerInterface &dk2::CDefaultPlayerInterface_instance = _CDefaultPlayerInterface_instance;  /* auto */
/*--------*/ relink_glob wchar_t _S2;  // ----------------  /* auto */
/*006D3954*/ wchar_t &dk2::S2 = _S2;  // -----------------  /* auto */
/*--------*/ relink_glob CBridge _CBridge_instance;  // --  /* auto */
/*006D3CC8*/ CBridge &dk2::CBridge_instance = _CBridge_instance;  /* auto */
/*--------*/ relink_glob int32_t _sceneLightningObjects[4096];  /* auto */
/*006D6458*/ int32_t (&dk2::sceneLightningObjects)[4096] = _sceneLightningObjects;  /* auto */
/*--------*/ relink_glob CBridge *_g_pCBridge_0;  // -----  /* auto */
/*006DA458*/ CBridge *&dk2::g_pCBridge_0 = _g_pCBridge_0;   /* auto */
/*--------*/ relink_glob CWorld *_g_CWorld_ptr_0;  // ----  /* auto */
/*006DA4A4*/ CWorld *&dk2::g_CWorld_ptr_0 = _g_CWorld_ptr_0;  /* auto */
/*--------*/ relink_glob char _g_empty_string[8];  // ----  /* auto */
/*006DA8A8*/ char (&dk2::g_empty_string)[8] = _g_empty_string;  /* auto */
/*--------*/ relink_glob MyStateEntry2 _g_stateEntries2[281];  /* auto */
/*006DA8B0*/ MyStateEntry2 (&dk2::g_stateEntries2)[281] = _g_stateEntries2;  /* auto */
/*--------*/ relink_glob CWorld *_g_pWorld2;  // ---------  /* auto */
/*006DC424*/ CWorld *&dk2::g_pWorld2 = _g_pWorld2;  // ---  /* auto */
/*--------*/ relink_glob int32_t _funcs_4A8BE5[4];  // ---  /* auto */
/*006E4FD8*/ int32_t (&dk2::funcs_4A8BE5)[4] = _funcs_4A8BE5;  /* auto */
/*--------*/ relink_glob CShotFun1 _g_CShotFuns[5];  // --  /* auto */
/*006E4FF0*/ CShotFun1 (&dk2::g_CShotFuns)[5] = _g_CShotFuns;  /* auto */
/*--------*/ relink_glob MyCreatureCollection *_g_MyCreatureCollection_ptr;  /* auto */
/*006E504C*/ MyCreatureCollection *&dk2::g_MyCreatureCollection_ptr = _g_MyCreatureCollection_ptr;  /* auto */
/*--------*/ relink_glob CWorld *_g_pWorld;  // ----------  /* auto */
/*006E5050*/ CWorld *&dk2::g_pWorld = _g_pWorld;  // -----  /* auto */
/*--------*/ relink_glob CWorld *_g_pCWorld;  // ---------  /* auto */
/*006E5054*/ CWorld *&dk2::g_pCWorld = _g_pCWorld;  // ---  /* auto */
/*--------*/ relink_glob char _g_charMB_buf[512];  // ----  /* auto */
/*006E5238*/ char (&dk2::g_charMB_buf)[512] = _g_charMB_buf;  /* auto */
/*--------*/ relink_glob FILE *_Stream;  // --------------  /* auto */
/*006EB988*/ FILE *&dk2::Stream = _Stream;  // -----------  /* auto */
/*--------*/ relink_glob int32_t _Obj6ECA60_instance;       /* auto */
/*006ECA60*/ int32_t &dk2::Obj6ECA60_instance = _Obj6ECA60_instance;  /* auto */
/*--------*/ relink_glob void *_Obj6ECAE0_instance;  // --  /* auto */
/*006ECAE0*/ void *&dk2::Obj6ECAE0_instance = _Obj6ECAE0_instance;  /* auto */
/*--------*/ relink_glob CWorld *_g_CWorld_ptr;  // ------  /* auto */
/*006ED484*/ CWorld *&dk2::g_CWorld_ptr = _g_CWorld_ptr;    /* auto */
/*--------*/ relink_glob uint8_t _g_jobRooms;  // --------  /* auto */
/*006ED490*/ uint8_t &dk2::g_jobRooms = _g_jobRooms;  // -  /* auto */
/*--------*/ relink_glob char _sceneObjectsPresent[4096];   /* auto */
/*006ED540*/ char (&dk2::sceneObjectsPresent)[4096] = _sceneObjectsPresent;  /* auto */
/*--------*/ relink_glob CTag *_sceneObjects[1];  // -----  /* auto */
/*006EE540*/ CTag *(&dk2::sceneObjects)[1] = _sceneObjects;  /* auto */
/*--------*/ relink_glob uint16_t _g_neutralPlayerId;       /* auto */
/*006F2548*/ uint16_t &dk2::g_neutralPlayerId = _g_neutralPlayerId;  /* auto */
/*--------*/ relink_glob uint16_t _g_goodPlayerId;  // ---  /* auto */
/*006F254C*/ uint16_t &dk2::g_goodPlayerId = _g_goodPlayerId;  /* auto */
/*--------*/ relink_glob CWorld _CWorld_instance;  // ----  /* auto */
/*006F2A08*/ CWorld &dk2::CWorld_instance = _CWorld_instance;  /* auto */
/*--------*/ relink_glob uint32_t _CLocalCommunication_instance[152];  /* auto */
/*006FCEC0*/ uint32_t (&dk2::CLocalCommunication_instance)[152] = _CLocalCommunication_instance;  /* auto */
/*--------*/ relink_glob int32_t _CNetworkCommunication_instance;  /* auto */
/*006FD120*/ int32_t &dk2::CNetworkCommunication_instance = _CNetworkCommunication_instance;  /* auto */
/*--------*/ relink_glob CGameComponent _CGameComponent_instance;  /* auto */
/*0070D138*/ CGameComponent &dk2::CGameComponent_instance = _CGameComponent_instance;  /* auto */
/*--------*/ relink_glob uint32_t _CNetworkComponent_instance[14];  /* auto */
/*0070D468*/ uint32_t (&dk2::CNetworkComponent_instance)[14] = _CNetworkComponent_instance;  /* auto */
/*--------*/ relink_glob MySurface _g_mySurface_0;  // ---  /* auto */
/*0070D4A8*/ MySurface &dk2::g_mySurface_0 = _g_mySurface_0;  /* auto */
/*--------*/ relink_glob MySurface _a3;  // --------------  /* auto */
/*0070D4D0*/ MySurface &dk2::a3 = _a3;  // ---------------  /* auto */
/*--------*/ relink_glob uint32_t _d70D578_x30[30];  // --  /* auto */
/*0070D578*/ uint32_t (&dk2::d70D578_x30)[30] = _d70D578_x30;  /* auto */
/*--------*/ relink_glob uint32_t _g_lazy_off_70D608[32];   /* auto */
/*0070D608*/ uint32_t (&dk2::g_lazy_off_70D608)[32] = _g_lazy_off_70D608;  /* auto */
/*--------*/ relink_glob char _buttonHighlight_x30[30];     /* auto */
/*0070D688*/ char (&dk2::buttonHighlight_x30)[30] = _buttonHighlight_x30;  /* auto */
/*--------*/ relink_glob CFrontEndComponent _CFrontEndComponent_instance;  /* auto */
/*0070D6D8*/ CFrontEndComponent &dk2::CFrontEndComponent_instance = _CFrontEndComponent_instance;  /* auto */
/*--------*/ relink_glob char _b73E9A0_x30;  // ----------  /* auto */
/*0073E9A0*/ char &dk2::b73E9A0_x30 = _b73E9A0_x30;  // --  /* auto */
/*--------*/ relink_glob FontObj *_g_pFontObj_73E9D0;       /* auto */
/*0073E9D0*/ FontObj *&dk2::g_pFontObj_73E9D0 = _g_pFontObj_73E9D0;  /* auto */
/*--------*/ relink_glob MySurface *_g_mySurface_p2;  // -  /* auto */
/*0073E9D8*/ MySurface *&dk2::g_mySurface_p2 = _g_mySurface_p2;  /* auto */
/*--------*/ relink_glob MovieRenderer _MovieRenderer_instance;  /* auto */
/*0073EDC8*/ MovieRenderer &dk2::MovieRenderer_instance = _MovieRenderer_instance;  /* auto */
/*--------*/ relink_glob StaticListeners _CFrontEndComponent_MovieRenderer_static_listeners;  /* auto */
/*0073F580*/ StaticListeners &dk2::CFrontEndComponent_MovieRenderer_static_listeners = _CFrontEndComponent_MovieRenderer_static_listeners;  /* auto */
/*--------*/ relink_glob MovieRenderer *_g_pMovieRenderer;  /* auto */
/*0073F594*/ MovieRenderer *&dk2::g_pMovieRenderer = _g_pMovieRenderer;  /* auto */
/*--------*/ relink_glob wchar_t _SrcStr;  // ------------  /* auto */
/*0073FC24*/ wchar_t &dk2::SrcStr = _SrcStr;  // ---------  /* auto */
/*--------*/ relink_glob wchar_t _Destination;  // -------  /* auto */
/*0073FC58*/ wchar_t &dk2::Destination = _Destination;      /* auto */
/*--------*/ relink_glob void *_Block;  // ---------------  /* auto */
/*0073FE78*/ void *&dk2::Block = _Block;  // -------------  /* auto */
/*--------*/ relink_glob MyTextRenderer _MyTextRenderer_instance;  /* auto */
/*0073FE90*/ MyTextRenderer &dk2::MyTextRenderer_instance = _MyTextRenderer_instance;  /* auto */
/*--------*/ relink_glob MySurface _g_surfArr[24];  // ---  /* auto */
/*0073FF70*/ MySurface (&dk2::g_surfArr)[24] = _g_surfArr;  /* auto */
/*--------*/ relink_glob const char *_lpMultiByteStr;       /* auto */
/*0074033C*/ const char *&dk2::lpMultiByteStr = _lpMultiByteStr;  /* auto */
/*--------*/ relink_glob size_t _BtnSize;  // ------------  /* auto */
/*00740340*/ size_t &dk2::BtnSize = _BtnSize;  // --------  /* auto */
/*--------*/ relink_glob wchar_t _g_wchar_buf[512];  // --  /* auto */
/*00740780*/ wchar_t (&dk2::g_wchar_buf)[512] = _g_wchar_buf;  /* auto */
/*--------*/ relink_glob FontObj _g_FontObj6_instance;      /* auto */
/*00740B80*/ FontObj &dk2::g_FontObj6_instance = _g_FontObj6_instance;  /* auto */
/*--------*/ relink_glob FontObj _g_FontObj3_instance;      /* auto */
/*00740BD0*/ FontObj &dk2::g_FontObj3_instance = _g_FontObj3_instance;  /* auto */
/*--------*/ relink_glob wchar_t _temp_string;  // -------  /* auto */
/*00740C20*/ wchar_t &dk2::temp_string = _temp_string;      /* auto */
/*--------*/ relink_glob uint32_t _g_FontObj9_instance[20];  /* auto */
/*00740E20*/ uint32_t (&dk2::g_FontObj9_instance)[20] = _g_FontObj9_instance;  /* auto */
/*--------*/ relink_glob FontObj _g_FontObj1_instance;      /* auto */
/*00740E70*/ FontObj &dk2::g_FontObj1_instance = _g_FontObj1_instance;  /* auto */
/*--------*/ relink_glob MyLangObj _MyLangObj_lang_instance;  /* auto */
/*007410C0*/ MyLangObj &dk2::MyLangObj_lang_instance = _MyLangObj_lang_instance;  /* auto */
/*--------*/ relink_glob FontObj _FontObj_1_instance;       /* auto */
/*007410D0*/ FontObj &dk2::FontObj_1_instance = _FontObj_1_instance;  /* auto */
/*--------*/ relink_glob uint8_t _MBStr_741120[512];  // -  /* auto */
/*00741120*/ uint8_t (&dk2::MBStr_741120)[512] = _MBStr_741120;  /* auto */
/*--------*/ relink_glob FontObj _FontObj_3_instance;       /* auto */
/*00741320*/ FontObj &dk2::FontObj_3_instance = _FontObj_3_instance;  /* auto */
/*--------*/ relink_glob FontObj _FontObj_2_instance;       /* auto */
/*00741370*/ FontObj &dk2::FontObj_2_instance = _FontObj_2_instance;  /* auto */
/*--------*/ relink_glob FontObj _g_FontObj2_instance;      /* auto */
/*007413C0*/ FontObj &dk2::g_FontObj2_instance = _g_FontObj2_instance;  /* auto */
/*--------*/ relink_glob FontObj _g_FontObj8_instance;      /* auto */
/*00741410*/ FontObj &dk2::g_FontObj8_instance = _g_FontObj8_instance;  /* auto */
/*--------*/ relink_glob FontObj _g_FontObj4_instance;      /* auto */
/*00741460*/ FontObj &dk2::g_FontObj4_instance = _g_FontObj4_instance;  /* auto */
/*--------*/ relink_glob FontObj _g_FontObj7_instance;      /* auto */
/*007414B0*/ FontObj &dk2::g_FontObj7_instance = _g_FontObj7_instance;  /* auto */
/*--------*/ relink_glob FontObj _g_FontObj5_instance;      /* auto */
/*00741500*/ FontObj &dk2::g_FontObj5_instance = _g_FontObj5_instance;  /* auto */
/*--------*/ relink_glob MyMbStringList *_g_pMyMbStringList_idx1091;  /* auto */
/*00741550*/ MyMbStringList *&dk2::g_pMyMbStringList_idx1091 = _g_pMyMbStringList_idx1091;  /* auto */
/*--------*/ relink_glob MyMbStringList *_g_pMyMbStringList_idx1056_1081;  /* auto */
/*00741554*/ MyMbStringList *&dk2::g_pMyMbStringList_idx1056_1081 = _g_pMyMbStringList_idx1056_1081;  /* auto */
/*--------*/ relink_glob MyMbStringList *_g_pMyMbStringList_idx1000_1023;  /* auto */
/*00741558*/ MyMbStringList *&dk2::g_pMyMbStringList_idx1000_1023 = _g_pMyMbStringList_idx1000_1023;  /* auto */
/*--------*/ relink_glob MyMbStringList *_g_pMyMbStringList_idx1090;  /* auto */
/*0074155C*/ MyMbStringList *&dk2::g_pMyMbStringList_idx1090 = _g_pMyMbStringList_idx1090;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText1;       /* auto */
/*0074156C*/ MyTextFont *&dk2::g_pMyFontText1 = _g_pMyFontText1;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText2;       /* auto */
/*00741570*/ MyTextFont *&dk2::g_pMyFontText2 = _g_pMyFontText2;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText3;       /* auto */
/*00741574*/ MyTextFont *&dk2::g_pMyFontText3 = _g_pMyFontText3;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText4;       /* auto */
/*00741578*/ MyTextFont *&dk2::g_pMyFontText4 = _g_pMyFontText4;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText5;       /* auto */
/*0074157C*/ MyTextFont *&dk2::g_pMyFontText5 = _g_pMyFontText5;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText6;       /* auto */
/*00741580*/ MyTextFont *&dk2::g_pMyFontText6 = _g_pMyFontText6;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText7;       /* auto */
/*00741584*/ MyTextFont *&dk2::g_pMyFontText7 = _g_pMyFontText7;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText8;       /* auto */
/*00741588*/ MyTextFont *&dk2::g_pMyFontText8 = _g_pMyFontText8;  /* auto */
/*--------*/ relink_glob MyTextFont *_g_pMyFontText9;       /* auto */
/*0074158C*/ MyTextFont *&dk2::g_pMyFontText9 = _g_pMyFontText9;  /* auto */
/*--------*/ relink_glob uint32_t *_g_pMyMbStringList_idx1024;  /* auto */
/*00741594*/ uint32_t *&dk2::g_pMyMbStringList_idx1024 = _g_pMyMbStringList_idx1024;  /* auto */
/*--------*/ relink_glob uint32_t *_g_pMyMbStringList_idx1025;  /* auto */
/*00741598*/ uint32_t *&dk2::g_pMyMbStringList_idx1025 = _g_pMyMbStringList_idx1025;  /* auto */
/*--------*/ relink_glob uint32_t *_g_pMyMbStringList_idx1026;  /* auto */
/*0074159C*/ uint32_t *&dk2::g_pMyMbStringList_idx1026 = _g_pMyMbStringList_idx1026;  /* auto */
/*--------*/ relink_glob uint32_t *_g_pMyMbStringList_idx1027;  /* auto */
/*007415A0*/ uint32_t *&dk2::g_pMyMbStringList_idx1027 = _g_pMyMbStringList_idx1027;  /* auto */
/*--------*/ relink_glob uint32_t *_g_pMyMbStringList_idx1028;  /* auto */
/*007415A4*/ uint32_t *&dk2::g_pMyMbStringList_idx1028 = _g_pMyMbStringList_idx1028;  /* auto */
/*--------*/ relink_glob uint32_t *_g_pMyMbStringList_idx1029;  /* auto */
/*007415A8*/ uint32_t *&dk2::g_pMyMbStringList_idx1029 = _g_pMyMbStringList_idx1029;  /* auto */
/*--------*/ relink_glob char _Buffer[264];  // ----------  /* auto */
/*007415C0*/ char (&dk2::Buffer)[264] = _Buffer;  // -----  /* auto */
/*--------*/ relink_glob uint32_t _TbBMPLoader_instance[344];  /* auto */
/*007416C8*/ uint32_t (&dk2::TbBMPLoader_instance)[344] = _TbBMPLoader_instance;  /* auto */
/*--------*/ relink_glob uint32_t _TbPNGLoader_instance[270];  /* auto */
/*00741C28*/ uint32_t (&dk2::TbPNGLoader_instance)[270] = _TbPNGLoader_instance;  /* auto */
/*--------*/ relink_glob uint32_t _TbTQILoader_instance[268];  /* auto */
/*00742070*/ uint32_t (&dk2::TbTQILoader_instance)[268] = _TbTQILoader_instance;  /* auto */
/*--------*/ relink_glob ProbablyConsole _ProbablyConsole_instance;  /* auto */
/*007428A0*/ ProbablyConsole &dk2::ProbablyConsole_instance = _ProbablyConsole_instance;  /* auto */
/*--------*/ relink_glob tagRECT _client_rect;  // -------  /* auto */
/*00756EC8*/ tagRECT &dk2::client_rect = _client_rect;      /* auto */
/*--------*/ relink_glob MyGame _MyGame_instance;  // ----  /* auto */
/*00756EE8*/ MyGame &dk2::MyGame_instance = _MyGame_instance;  /* auto */
/*--------*/ relink_glob uint32_t _ddraw_device_count;      /* auto */
/*00758048*/ uint32_t &dk2::ddraw_device_count = _ddraw_device_count;  /* auto */
/*--------*/ relink_glob int32_t _dd_index;  // ----------  /* auto */
/*0075804C*/ int32_t &dk2::dd_index = _dd_index;  // -----  /* auto */
/*--------*/ relink_glob DxDeviceInfo *_ddraw_devices;      /* auto */
/*00758050*/ DxDeviceInfo *&dk2::ddraw_devices = _ddraw_devices;  /* auto */
/*--------*/ relink_glob int32_t _pMldPlay_instance[3];     /* auto */
/*00758160*/ int32_t (&dk2::pMldPlay_instance)[3] = _pMldPlay_instance;  /* auto */
/*--------*/ relink_glob MyResources _MyResources_instance;  /* auto */
/*00758340*/ MyResources &dk2::MyResources_instance = _MyResources_instance;  /* auto */
/*--------*/ relink_glob char _formattedString[264];  // -  /* auto */
/*0075B310*/ char (&dk2::formattedString)[264] = _formattedString;  /* auto */
/*--------*/ relink_glob uint8_t _Data;  // --------------  /* auto */
/*0075B418*/ uint8_t &dk2::Data = _Data;  // -------------  /* auto */
/*--------*/ relink_glob CSoundSystem *_MySound_ptr;  // -  /* auto */
/*0075B468*/ CSoundSystem *&dk2::MySound_ptr = _MySound_ptr;  /* auto */
/*--------*/ relink_glob CSoundSystem _CSoundSystem_instance;  /* auto */
/*0075B880*/ CSoundSystem &dk2::CSoundSystem_instance = _CSoundSystem_instance;  /* auto */
/*--------*/ relink_glob int32_t _g2_sceneWidth;  // -----  /* auto */
/*0075CA68*/ int32_t &dk2::g2_sceneWidth = _g2_sceneWidth;  /* auto */
/*--------*/ relink_glob Vec3f _g_vec_760A98;  // --------  /* auto */
/*00760A98*/ Vec3f &dk2::g_vec_760A98 = _g_vec_760A98;      /* auto */
/*--------*/ relink_glob float _g_cullFrom;  // ----------  /* auto */
/*00760AA8*/ float &dk2::g_cullFrom = _g_cullFrom;  // ---  /* auto */
/*--------*/ relink_glob MyCameraState _g_camState;  // --  /* auto */
/*00760AB8*/ MyCameraState &dk2::g_camState = _g_camState;  /* auto */
/*--------*/ relink_glob IDirectDrawGammaControl *_dd_gamma_control;  /* auto */
/*00760B0C*/ IDirectDrawGammaControl *&dk2::dd_gamma_control = _dd_gamma_control;  /* auto */
/*--------*/ relink_glob NewObj571B3B *_g_pNewObj571B3B_root;  /* auto */
/*00760B14*/ NewObj571B3B *&dk2::g_pNewObj571B3B_root = _g_pNewObj571B3B_root;  /* auto */
/*--------*/ relink_glob Vec3f _g_vec_760B18;  // --------  /* auto */
/*00760B18*/ Vec3f &dk2::g_vec_760B18 = _g_vec_760B18;      /* auto */
/*--------*/ relink_glob Vec3f _g_vec_760B28;  // --------  /* auto */
/*00760B28*/ Vec3f &dk2::g_vec_760B28 = _g_vec_760B28;      /* auto */
/*--------*/ relink_glob Vec3f _g_vec_760B38;  // --------  /* auto */
/*00760B38*/ Vec3f &dk2::g_vec_760B38 = _g_vec_760B38;      /* auto */
/*--------*/ relink_glob int32_t _g2_sceneHeight;  // ----  /* auto */
/*00760B44*/ int32_t &dk2::g2_sceneHeight = _g2_sceneHeight;  /* auto */
/*--------*/ relink_glob float _g_cullTo;  // ------------  /* auto */
/*00760B4C*/ float &dk2::g_cullTo = _g_cullTo;  // -------  /* auto */
/*--------*/ relink_glob int32_t _g_sceneWidth;  // ------  /* auto */
/*00760B54*/ int32_t &dk2::g_sceneWidth = _g_sceneWidth;    /* auto */
/*--------*/ relink_glob int32_t _g2_sceneLeft;  // ------  /* auto */
/*00760B5C*/ int32_t &dk2::g2_sceneLeft = _g2_sceneLeft;    /* auto */
/*--------*/ relink_glob NewObj571B3B *_g_pNewObj571B3B;    /* auto */
/*00760B6C*/ NewObj571B3B *&dk2::g_pNewObj571B3B = _g_pNewObj571B3B;  /* auto */
/*--------*/ relink_glob Vec3f _g_vec_760B70;  // --------  /* auto */
/*00760B70*/ Vec3f &dk2::g_vec_760B70 = _g_vec_760B70;      /* auto */
/*--------*/ relink_glob int32_t _g_sceneHeight;  // -----  /* auto */
/*00760B88*/ int32_t &dk2::g_sceneHeight = _g_sceneHeight;  /* auto */
/*--------*/ relink_glob NewObj571B3B *_g_NewObj571B3B_hashTable[64][64];  /* auto */
/*00760B90*/ NewObj571B3B *(&dk2::g_NewObj571B3B_hashTable)[64][64] = _g_NewObj571B3B_hashTable;  /* auto */
/*--------*/ relink_glob MyDirectDraw _mydd_scene;  // ---  /* auto */
/*00764B90*/ MyDirectDraw &dk2::mydd_scene = _mydd_scene;   /* auto */
/*--------*/ relink_glob int32_t _g2_sceneTop;  // -------  /* auto */
/*00764BBC*/ int32_t &dk2::g2_sceneTop = _g2_sceneTop;      /* auto */
/*--------*/ relink_glob int32_t _EngineTestCross_a31x400_idx;  /* auto */
/*00764BC0*/ int32_t &dk2::EngineTestCross_a31x400_idx = _EngineTestCross_a31x400_idx;  /* auto */
/*--------*/ relink_glob int32_t _EngineTestLight_a31x400_idx;  /* auto */
/*00764BC4*/ int32_t &dk2::EngineTestLight_a31x400_idx = _EngineTestLight_a31x400_idx;  /* auto */
/*--------*/ relink_glob int32_t _EngineTextureWhite_a31x400_idx;  /* auto */
/*00764BC8*/ int32_t &dk2::EngineTextureWhite_a31x400_idx = _EngineTextureWhite_a31x400_idx;  /* auto */
/*--------*/ relink_glob NewObj571B3B *_g_pNewObj571B3B_end;  /* auto */
/*00764BD8*/ NewObj571B3B *&dk2::g_pNewObj571B3B_end = _g_pNewObj571B3B_end;  /* auto */
/*--------*/ relink_glob DDGAMMARAMP _gamma_ramp;  // ----  /* auto */
/*00764BE8*/ DDGAMMARAMP &dk2::gamma_ramp = _gamma_ramp;    /* auto */
/*--------*/ relink_glob char _g_isCurDdSurfLost;  // ----  /* auto */
/*007651F4*/ char &dk2::g_isCurDdSurfLost = _g_isCurDdSurfLost;  /* auto */
/*--------*/ relink_glob int32_t _is3dInitialized;  // ---  /* auto */
/*007651FC*/ int32_t &dk2::is3dInitialized = _is3dInitialized;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_initialized;  // --  /* auto */
/*00765200*/ int32_t &dk2::mgsr_initialized = _mgsr_initialized;  /* auto */
/*--------*/ relink_glob Pos2i _g_viewPos_765218;  // ----  /* auto */
/*00765218*/ Pos2i &dk2::g_viewPos_765218 = _g_viewPos_765218;  /* auto */
/*--------*/ relink_glob CEnginePrimitiveBase *_g_pCEngine2DPrimitive;  /* auto */
/*00765224*/ CEnginePrimitiveBase *&dk2::g_pCEngine2DPrimitive = _g_pCEngine2DPrimitive;  /* auto */
/*--------*/ relink_glob Size2i _g_viewSize_765228;  // --  /* auto */
/*00765228*/ Size2i &dk2::g_viewSize_765228 = _g_viewSize_765228;  /* auto */
/*--------*/ relink_glob MyStringHashMap_MyScaledSurface _MyStringHashMap_MyScaledSurface_instance;  /* auto */
/*007656E8*/ MyStringHashMap_MyScaledSurface &dk2::MyStringHashMap_MyScaledSurface_instance = _MyStringHashMap_MyScaledSurface_instance;  /* auto */
/*--------*/ relink_glob MyEntryBuf_MyScaledSurface _MyEntryBuf_MyScaledSurface_instance;  /* auto */
/*00765AF8*/ MyEntryBuf_MyScaledSurface &dk2::MyEntryBuf_MyScaledSurface_instance = _MyEntryBuf_MyScaledSurface_instance;  /* auto */
/*--------*/ relink_glob void *_MyHeap_increaseBlocks[32];  /* auto */
/*00765B18*/ void *(&dk2::MyHeap_increaseBlocks)[32] = _MyHeap_increaseBlocks;  /* auto */
/*--------*/ relink_glob void *_MyHeap_bufArr[32];  // ---  /* auto */
/*00765DA0*/ void *(&dk2::MyHeap_bufArr)[32] = _MyHeap_bufArr;  /* auto */
/*--------*/ relink_glob uint32_t *_SPRS_MyScaledSurface_indices[256];  /* auto */
/*00765E28*/ uint32_t *(&dk2::SPRS_MyScaledSurface_indices)[256] = _SPRS_MyScaledSurface_indices;  /* auto */
/*--------*/ relink_glob CMemLoadIFFFile _CMemLoadIFFFile_instance;  /* auto */
/*00766228*/ CMemLoadIFFFile &dk2::CMemLoadIFFFile_instance = _CMemLoadIFFFile_instance;  /* auto */
/*--------*/ relink_glob MyMeshResourceHolder *_g_meshHolderList_first;  /* auto */
/*00766658*/ MyMeshResourceHolder *&dk2::g_meshHolderList_first = _g_meshHolderList_first;  /* auto */
/*--------*/ relink_glob MyStringHashMap_MyMeshResourceHolder _MyStringHashMap_MyMeshResourceHolder_instance;  /* auto */
/*00766660*/ MyStringHashMap_MyMeshResourceHolder &dk2::MyStringHashMap_MyMeshResourceHolder_instance = _MyStringHashMap_MyMeshResourceHolder_instance;  /* auto */
/*--------*/ relink_glob MyMeshResourceHolder *_g_meshHolderList_last;  /* auto */
/*00766A70*/ MyMeshResourceHolder *&dk2::g_meshHolderList_last = _g_meshHolderList_last;  /* auto */
/*--------*/ relink_glob Vec3f _g_vec_766A78;  // --------  /* auto */
/*00766A78*/ Vec3f &dk2::g_vec_766A78 = _g_vec_766A78;      /* auto */
/*--------*/ relink_glob ScreenObjectArr _ScreenObjectArr_instance;  /* auto */
/*00769A78*/ ScreenObjectArr &dk2::ScreenObjectArr_instance = _ScreenObjectArr_instance;  /* auto */
/*--------*/ relink_glob Vec3s _DrawTriangleList_lpwIndices[1024];  /* auto */
/*0076AA80*/ Vec3s (&dk2::DrawTriangleList_lpwIndices)[1024] = _DrawTriangleList_lpwIndices;  /* auto */
/*--------*/ relink_glob MyEntryBuf_Triangle24 _MyEntryBuf_Triangle24_instance;  /* auto */
/*0076C280*/ MyEntryBuf_Triangle24 &dk2::MyEntryBuf_Triangle24_instance = _MyEntryBuf_Triangle24_instance;  /* auto */
/*--------*/ relink_glob int32_t _g_flexibleVertices;       /* auto */
/*0076C28C*/ int32_t &dk2::g_flexibleVertices = _g_flexibleVertices;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_currentDrawFlags;    /* auto */
/*0076C294*/ int32_t &dk2::mgsr_currentDrawFlags = _mgsr_currentDrawFlags;  /* auto */
/*--------*/ relink_glob VerticesData _g_vertices[2];       /* auto */
/*0076C298*/ VerticesData (&dk2::g_vertices)[2] = _g_vertices;  /* auto */
/*--------*/ relink_glob MyDirectDraw _mydd_triangles;      /* auto */
/*0076C2B8*/ MyDirectDraw &dk2::mydd_triangles = _mydd_triangles;  /* auto */
/*--------*/ relink_glob Idx3s *_g_lpwTrianglesIndices;     /* auto */
/*0076C2E8*/ Idx3s *&dk2::g_lpwTrianglesIndices = _g_lpwTrianglesIndices;  /* auto */
/*--------*/ relink_glob SceneObject30 *_lastSceneObject;   /* auto */
/*0076C2F0*/ SceneObject30 *&dk2::lastSceneObject = _lastSceneObject;  /* auto */
/*--------*/ relink_glob int32_t _sceneObj2E_f21_to_triangleIndices[1023];  /* auto */
/*0076C2F8*/ int32_t (&dk2::sceneObj2E_f21_to_triangleIndices)[1023] = _sceneObj2E_f21_to_triangleIndices;  /* auto */
/*--------*/ relink_glob MyEntryBuf_uint16 _MyEntryBuf_uint16_indices_instance;  /* auto */
/*0076D300*/ MyEntryBuf_uint16 &dk2::MyEntryBuf_uint16_indices_instance = _MyEntryBuf_uint16_indices_instance;  /* auto */
/*--------*/ relink_glob Triangle24 *_drawnTrianglesArr[2048];  /* auto */
/*0076D310*/ Triangle24 *(&dk2::drawnTrianglesArr)[2048] = _drawnTrianglesArr;  /* auto */
/*--------*/ relink_glob MyEntryBuf_Tiangle34 _MyEntryBuf_Triangle34_instance;  /* auto */
/*0076F318*/ MyEntryBuf_Tiangle34 &dk2::MyEntryBuf_Triangle34_instance = _MyEntryBuf_Triangle34_instance;  /* auto */
/*--------*/ relink_glob MyEntryBuf_Vertex18 _MyEntryBuf_Vertex18_instance;  /* auto */
/*0076F328*/ MyEntryBuf_Vertex18 &dk2::MyEntryBuf_Vertex18_instance = _MyEntryBuf_Vertex18_instance;  /* auto */
/*--------*/ relink_glob int32_t _Triangle34_count;  // --  /* auto */
/*0076F33C*/ int32_t &dk2::Triangle34_count = _Triangle34_count;  /* auto */
/*--------*/ relink_glob float _g_zMulArr_76F350[2];  // -  /* auto */
/*0076F350*/ float (&dk2::g_zMulArr_76F350)[2] = _g_zMulArr_76F350;  /* auto */
/*--------*/ relink_glob RenderData _RenderData_instance_arr[1024];  /* auto */
/*0076F358*/ RenderData (&dk2::RenderData_instance_arr)[1024] = _RenderData_instance_arr;  /* auto */
/*--------*/ relink_glob int32_t (__cdecl *___renderFun)(uint32_t, Vec3f *, Uv2f *);  /* auto */
/*00779358*/ int32_t (__cdecl *&dk2::__renderFun)(uint32_t, Vec3f *, Uv2f *) = ___renderFun;  /* auto */
/*--------*/ relink_glob float _g_zAddArr_779360[2];  // -  /* auto */
/*00779360*/ float (&dk2::g_zAddArr_779360)[2] = _g_zAddArr_779360;  /* auto */
/*--------*/ relink_glob float _g_bottom_77937C;  // -----  /* auto */
/*0077937C*/ float &dk2::g_bottom_77937C = _g_bottom_77937C;  /* auto */
/*--------*/ relink_glob float _g_zAdd2Arr_779388[2];       /* auto */
/*00779388*/ float (&dk2::g_zAdd2Arr_779388)[2] = _g_zAdd2Arr_779388;  /* auto */
/*--------*/ relink_glob int32_t (__cdecl *_g_fun_779394)(uint32_t, Vec3f *);  /* auto */
/*00779394*/ int32_t (__cdecl *&dk2::g_fun_779394)(uint32_t, Vec3f *) = _g_fun_779394;  /* auto */
/*--------*/ relink_glob int32_t (__cdecl *_g_fun_779398)(uint32_t, Vec3f *);  /* auto */
/*00779398*/ int32_t (__cdecl *&dk2::g_fun_779398)(uint32_t, Vec3f *) = _g_fun_779398;  /* auto */
/*--------*/ relink_glob Vec3f_arr1024 _g_vectors[2];       /* auto */
/*007793A8*/ Vec3f_arr1024 (&dk2::g_vectors)[2] = _g_vectors;  /* auto */
/*--------*/ relink_glob Mat3x3f _g_mat_77F3A8;  // ------  /* auto */
/*0077F3A8*/ Mat3x3f &dk2::g_mat_77F3A8 = _g_mat_77F3A8;    /* auto */
/*--------*/ relink_glob float _g_zMul2Arr_77F3D0[2];       /* auto */
/*0077F3D0*/ float (&dk2::g_zMul2Arr_77F3D0)[2] = _g_zMul2Arr_77F3D0;  /* auto */
/*--------*/ relink_glob SceneObject2E *_g_pSceneObject2E;  /* auto */
/*0077F3EC*/ SceneObject2E *&dk2::g_pSceneObject2E = _g_pSceneObject2E;  /* auto */
/*--------*/ relink_glob Uv2f_arr1024 *_Uv2f_arr_instance;  /* auto */
/*0077F3F0*/ Uv2f_arr1024 *&dk2::Uv2f_arr_instance = _Uv2f_arr_instance;  /* auto */
/*--------*/ relink_glob float _g_left_77F3F4;  // -------  /* auto */
/*0077F3F4*/ float &dk2::g_left_77F3F4 = _g_left_77F3F4;    /* auto */
/*--------*/ relink_glob float _g_zMul3Arr_77F3F8[2];       /* auto */
/*0077F3F8*/ float (&dk2::g_zMul3Arr_77F3F8)[2] = _g_zMul3Arr_77F3F8;  /* auto */
/*--------*/ relink_glob MyCameraState _g_vecCol2;  // ---  /* auto */
/*0077F400*/ MyCameraState &dk2::g_vecCol2 = _g_vecCol2;    /* auto */
/*--------*/ relink_glob Mat3x3f _g_mat_77F458;  // ------  /* auto */
/*0077F458*/ Mat3x3f &dk2::g_mat_77F458 = _g_mat_77F458;    /* auto */
/*--------*/ relink_glob float _g_padNorm_x8[4];  // -----  /* auto */
/*0077F480*/ float (&dk2::g_padNorm_x8)[4] = _g_padNorm_x8;  /* auto */
/*--------*/ relink_glob Mat3x3f _g_mat_77F498;  // ------  /* auto */
/*0077F498*/ Mat3x3f &dk2::g_mat_77F498 = _g_mat_77F498;    /* auto */
/*--------*/ relink_glob Vec3f _g_vec_77F4C0;  // --------  /* auto */
/*0077F4C0*/ Vec3f &dk2::g_vec_77F4C0 = _g_vec_77F4C0;      /* auto */
/*--------*/ relink_glob float _g_zAdd3Arr_77F4D8[2];       /* auto */
/*0077F4D8*/ float (&dk2::g_zAdd3Arr_77F4D8)[2] = _g_zAdd3Arr_77F4D8;  /* auto */
/*--------*/ relink_glob int32_t (__cdecl *___addTriangleFun)(uint32_t, uint32_t, uint32_t);  /* auto */
/*0077F4E4*/ int32_t (__cdecl *&dk2::__addTriangleFun)(uint32_t, uint32_t, uint32_t) = ___addTriangleFun;  /* auto */
/*--------*/ relink_glob float _g_right_77F4EC;  // ------  /* auto */
/*0077F4EC*/ float &dk2::g_right_77F4EC = _g_right_77F4EC;  /* auto */
/*--------*/ relink_glob uint8_t _g_idxFlags[1024];  // --  /* auto */
/*0077F4F8*/ uint8_t (&dk2::g_idxFlags)[1024] = _g_idxFlags;  /* auto */
/*--------*/ relink_glob MyDirectDraw _mydd_uvs;  // -----  /* auto */
/*0077F8F8*/ MyDirectDraw &dk2::mydd_uvs = _mydd_uvs;       /* auto */
/*--------*/ relink_glob Idx3b _g_Idx3b_arr_instance[1024];  /* auto */
/*0077F938*/ Idx3b (&dk2::g_Idx3b_arr_instance)[1024] = _g_Idx3b_arr_instance;  /* auto */
/*--------*/ relink_glob float _g_top_780938;  // --------  /* auto */
/*00780938*/ float &dk2::g_top_780938 = _g_top_780938;      /* auto */
/*--------*/ relink_glob void *_shadows_lpSurface;  // ---  /* auto */
/*0078095C*/ void *&dk2::shadows_lpSurface = _shadows_lpSurface;  /* auto */
/*--------*/ relink_glob int32_t _g_MyEntryBuf_MyScaledSurface_idxs[64];  /* auto */
/*00780960*/ int32_t (&dk2::g_MyEntryBuf_MyScaledSurface_idxs)[64] = _g_MyEntryBuf_MyScaledSurface_idxs;  /* auto */
/*--------*/ relink_glob SceneObject2EList _SceneObject2EList_instance;  /* auto */
/*007820A8*/ SceneObject2EList &dk2::SceneObject2EList_instance = _SceneObject2EList_instance;  /* auto */
/*--------*/ relink_glob SceneObject30List _SceneObject30List_instance;  /* auto */
/*007820B8*/ SceneObject30List &dk2::SceneObject30List_instance = _SceneObject30List_instance;  /* auto */
/*--------*/ relink_glob uint32_t _objectsToDraw_count;     /* auto */
/*007820C4*/ uint32_t &dk2::objectsToDraw_count = _objectsToDraw_count;  /* auto */
/*--------*/ relink_glob uint8_t _mpeg2__image_buf[65536];  /* auto */
/*007820D0*/ uint8_t (&dk2::mpeg2__image_buf)[65536] = _mpeg2__image_buf;  /* auto */
/*--------*/ relink_glob SurfHashList2 *_pSurfHashList2_2;  /* auto */
/*007920D0*/ SurfHashList2 *&dk2::pSurfHashList2_2 = _pSurfHashList2_2;  /* auto */
/*--------*/ relink_glob SurfHashList2 *_pSurfHashList2;    /* auto */
/*007920D4*/ SurfHashList2 *&dk2::pSurfHashList2 = _pSurfHashList2;  /* auto */
/*--------*/ relink_glob MyTextures _MyTextures_instance;   /* auto */
/*007920D8*/ MyTextures &dk2::MyTextures_instance = _MyTextures_instance;  /* auto */
/*--------*/ relink_glob MyCESurfHandle *_g_surfh_first;    /* auto */
/*0079291C*/ MyCESurfHandle *&dk2::g_surfh_first = _g_surfh_first;  /* auto */
/*--------*/ relink_glob MySurfDesc _g_surfDesc_8a8r8g8b;   /* auto */
/*00792920*/ MySurfDesc &dk2::g_surfDesc_8a8r8g8b = _g_surfDesc_8a8r8g8b;  /* auto */
/*--------*/ relink_glob MyStringHashMap_MyCESurfHandle _MyStringHashMap_MyCESurfHandle_instance;  /* auto */
/*00792938*/ MyStringHashMap_MyCESurfHandle &dk2::MyStringHashMap_MyCESurfHandle_instance = _MyStringHashMap_MyCESurfHandle_instance;  /* auto */
/*--------*/ relink_glob CEngineSurfaceScaler _CEngineSurfaceScaler_instance;  /* auto */
/*00792D48*/ CEngineSurfaceScaler &dk2::CEngineSurfaceScaler_instance = _CEngineSurfaceScaler_instance;  /* auto */
/*--------*/ relink_glob SurfHashList *_pSurfHashList;      /* auto */
/*00792D60*/ SurfHashList *&dk2::pSurfHashList = _pSurfHashList;  /* auto */
/*--------*/ relink_glob MyDirectDraw _mydd_devTexture;     /* auto */
/*00792D68*/ MyDirectDraw &dk2::mydd_devTexture = _mydd_devTexture;  /* auto */
/*--------*/ relink_glob MyCEngineSurfDesc _MyCEngineSurfDesc_argb32_instance;  /* auto */
/*00792D98*/ MyCEngineSurfDesc &dk2::MyCEngineSurfDesc_argb32_instance = _MyCEngineSurfDesc_argb32_instance;  /* auto */
/*--------*/ relink_glob MyCEngineSurfDesc _g_surfDesc_8a8r8g8b_0;  /* auto */
/*00792DFD*/ MyCEngineSurfDesc &dk2::g_surfDesc_8a8r8g8b_0 = _g_surfDesc_8a8r8g8b_0;  /* auto */
/*--------*/ relink_glob MyCEngineSurfDesc _MyCEngineSurfDesc_unk16_instance;  /* auto */
/*00792E62*/ MyCEngineSurfDesc &dk2::MyCEngineSurfDesc_unk16_instance = _MyCEngineSurfDesc_unk16_instance;  /* auto */
/*--------*/ relink_glob int32_t _sizeHashTable_257[257];   /* auto */
/*00792EC8*/ int32_t (&dk2::sizeHashTable_257)[257] = _sizeHashTable_257;  /* auto */
/*--------*/ relink_glob MyCESurfHandle *_g_surfh_last;     /* auto */
/*007932CC*/ MyCESurfHandle *&dk2::g_surfh_last = _g_surfh_last;  /* auto */
/*--------*/ relink_glob char *_g_ppaths_7932F0[32];  // -  /* auto */
/*007932F0*/ char *(&dk2::g_ppaths_7932F0)[32] = _g_ppaths_7932F0;  /* auto */
/*--------*/ relink_glob CPCEngineInterface _CPCEngineInterface_instance_start;  /* auto */
/*00793388*/ CPCEngineInterface &dk2::CPCEngineInterface_instance_start = _CPCEngineInterface_instance_start;  /* auto */
/*--------*/ relink_glob PathStr _g_paths_7935C0;  // ----  /* auto */
/*007935C0*/ PathStr &dk2::g_paths_7935C0 = _g_paths_7935C0;  /* auto */
/*--------*/ relink_glob Mat3x3f _g_mat_arr_795640[4];      /* auto */
/*00795640*/ Mat3x3f (&dk2::g_mat_arr_795640)[4] = _g_mat_arr_795640;  /* auto */
/*--------*/ relink_glob Vec3f _g_vec_arr_7956D0[4];  // -  /* auto */
/*007956D0*/ Vec3f (&dk2::g_vec_arr_7956D0)[4] = _g_vec_arr_7956D0;  /* auto */
/*--------*/ relink_glob CBridge *_g_pCBridge;  // -------  /* auto */
/*00795700*/ CBridge *&dk2::g_pCBridge = _g_pCBridge;       /* auto */
/*--------*/ relink_glob int32_t _mpeg2_dc_dct_pred[3];     /* auto */
/*00796170*/ int32_t (&dk2::mpeg2_dc_dct_pred)[3] = _mpeg2_dc_dct_pred;  /* auto */
/*--------*/ relink_glob int32_t _cmd_flag_DDD;  // ------  /* auto */
/*007962AC*/ int32_t &dk2::cmd_flag_DDD = _cmd_flag_DDD;    /* auto */
/*--------*/ relink_glob int32_t _cmd_flag_DDD_value;       /* auto */
/*007962B0*/ int32_t &dk2::cmd_flag_DDD_value = _cmd_flag_DDD_value;  /* auto */
/*--------*/ relink_glob void *_mgsr_buf_25635;  // ------  /* auto */
/*00797B74*/ void *&dk2::mgsr_buf_25635 = _mgsr_buf_25635;  /* auto */
/*--------*/ relink_glob void *_mgsr_buf2_12835;  // -----  /* auto */
/*00797B7C*/ void *&dk2::mgsr_buf2_12835 = _mgsr_buf2_12835;  /* auto */
/*--------*/ relink_glob MyInputManagerCb _MyInputManagerCb_instance;  /* auto */
/*0079CF90*/ MyInputManagerCb &dk2::MyInputManagerCb_instance = _MyInputManagerCb_instance;  /* auto */
/*--------*/ relink_glob HWND__ *_dd_hWnd;  // -----------  /* auto */
/*0079D020*/ HWND__ *&dk2::dd_hWnd = _dd_hWnd;  // -------  /* auto */
/*--------*/ relink_glob AABB _g_renderSurfAabb;  // -----  /* auto */
/*0079D038*/ AABB &dk2::g_renderSurfAabb = _g_renderSurfAabb;  /* auto */
/*--------*/ relink_glob MyNBitTexture *_pMyNBitTexture;    /* auto */
/*0079D048*/ MyNBitTexture *&dk2::pMyNBitTexture = _pMyNBitTexture;  /* auto */
/*--------*/ relink_glob AABB _g_surfAabb;  // -----------  /* auto */
/*0079D050*/ AABB &dk2::g_surfAabb = _g_surfAabb;  // ----  /* auto */
/*--------*/ relink_glob MySurface *_g_myRenderSurface;     /* auto */
/*0079D060*/ MySurface *&dk2::g_myRenderSurface = _g_myRenderSurface;  /* auto */
/*--------*/ relink_glob My8BitTexture _My8BitTexture_instance;  /* auto */
/*0079D068*/ My8BitTexture &dk2::My8BitTexture_instance = _My8BitTexture_instance;  /* auto */
/*--------*/ relink_glob My16BitTexture _My16BitTexture_instance;  /* auto */
/*0079D070*/ My16BitTexture &dk2::My16BitTexture_instance = _My16BitTexture_instance;  /* auto */
/*--------*/ relink_glob My24BitTexture _My24BitTexture_instance;  /* auto */
/*0079D074*/ My24BitTexture &dk2::My24BitTexture_instance = _My24BitTexture_instance;  /* auto */
/*--------*/ relink_glob My32BitTexture _My32BitTexture_instance;  /* auto */
/*0079D078*/ My32BitTexture &dk2::My32BitTexture_instance = _My32BitTexture_instance;  /* auto */
/*--------*/ relink_glob char _PathName[300];  // --------  /* auto */
/*0079D0A8*/ char (&dk2::PathName)[300] = _PathName;  // -  /* auto */
/*--------*/ relink_glob IDirectDrawSurface *_g_dd_primaryAttachedSurf;  /* auto */
/*0079D1D4*/ IDirectDrawSurface *&dk2::g_dd_primaryAttachedSurf = _g_dd_primaryAttachedSurf;  /* auto */
/*--------*/ relink_glob MySurface _g_mySurf_unused;  // -  /* auto */
/*0079D1D8*/ MySurface &dk2::g_mySurf_unused = _g_mySurf_unused;  /* auto */
/*--------*/ relink_glob MyDdSurfaceEx _g_primarySurf;      /* auto */
/*0079D200*/ MyDdSurfaceEx &dk2::g_primarySurf = _g_primarySurf;  /* auto */
/*--------*/ relink_glob DdModeList _DdModeList_instance;   /* auto */
/*0079D250*/ DdModeList &dk2::DdModeList_instance = _DdModeList_instance;  /* auto */
/*--------*/ relink_glob char _bullfrogClassName[260];      /* auto */
/*0079D260*/ char (&dk2::bullfrogClassName)[260] = _bullfrogClassName;  /* auto */
/*--------*/ relink_glob MyDdSurfaceEx *_g_pCurOffScreen;   /* auto */
/*0079D364*/ MyDdSurfaceEx *&dk2::g_pCurOffScreen = _g_pCurOffScreen;  /* auto */
/*--------*/ relink_glob FPUControlWordWithState _FPUControlWordWithState_instance;  /* auto */
/*0079D368*/ FPUControlWordWithState &dk2::FPUControlWordWithState_instance = _FPUControlWordWithState_instance;  /* auto */
/*--------*/ relink_glob MyDdSurfaceEx _g_offScreen;  // -  /* auto */
/*0079D378*/ MyDdSurfaceEx &dk2::g_offScreen = _g_offScreen;  /* auto */
/*--------*/ relink_glob HWND__ *_hWnd;  // --------------  /* auto */
/*0079D3C8*/ HWND__ *&dk2::hWnd = _hWnd;  // -------------  /* auto */
/*--------*/ relink_glob HWND__ *_hBullfrogWindow;  // ---  /* auto */
/*0079D3CC*/ HWND__ *&dk2::hBullfrogWindow = _hBullfrogWindow;  /* auto */
/*--------*/ relink_glob IDirectDraw *_dk2dd;  // --------  /* auto */
/*0079D3D0*/ IDirectDraw *&dk2::dk2dd = _dk2dd;  // ------  /* auto */
/*--------*/ relink_glob IDirectDrawPalette *_lpDDPalette;  /* auto */
/*0079D3D4*/ IDirectDrawPalette *&dk2::lpDDPalette = _lpDDPalette;  /* auto */
/*--------*/ relink_glob IDirectDrawClipper *_lpDDClipper;  /* auto */
/*0079D3D8*/ IDirectDrawClipper *&dk2::lpDDClipper = _lpDDClipper;  /* auto */
/*--------*/ relink_glob int32_t _g_isNeedBlt;  // -------  /* auto */
/*0079D3DC*/ int32_t &dk2::g_isNeedBlt = _g_isNeedBlt;      /* auto */
/*--------*/ relink_glob int32_t _g_ignore_79D3E0;  // ---  /* auto */
/*0079D3E0*/ int32_t &dk2::g_ignore_79D3E0 = _g_ignore_79D3E0;  /* auto */
/*--------*/ relink_glob GUID *_selectedDDGuid;  // ------  /* auto */
/*0079D3E4*/ GUID *&dk2::selectedDDGuid = _selectedDDGuid;  /* auto */
/*--------*/ relink_glob int32_t _isSurfModeX;  // -------  /* auto */
/*0079D3E8*/ int32_t &dk2::isSurfModeX = _isSurfModeX;      /* auto */
/*--------*/ relink_glob IDirectDraw *_lpSurfaceDD;  // --  /* auto */
/*0079D3F0*/ IDirectDraw *&dk2::lpSurfaceDD = _lpSurfaceDD;  /* auto */
/*--------*/ relink_glob PALETTEENTRY _palleteEntries[256];  /* auto */
/*0079D418*/ PALETTEENTRY (&dk2::palleteEntries)[256] = _palleteEntries;  /* auto */
/*--------*/ relink_glob MySurfDesc _g_confSurfDesc2;       /* auto */
/*0079D818*/ MySurfDesc &dk2::g_confSurfDesc2 = _g_confSurfDesc2;  /* auto */
/*--------*/ relink_glob MySurfDesc _g_confSurfDesc;  // -  /* auto */
/*0079D830*/ MySurfDesc &dk2::g_confSurfDesc = _g_confSurfDesc;  /* auto */
/*--------*/ relink_glob MySurfDesc _g_confSurfDesc3;       /* auto */
/*0079D848*/ MySurfDesc &dk2::g_confSurfDesc3 = _g_confSurfDesc3;  /* auto */
/*--------*/ relink_glob MySurfDesc _g_confSurfDesc4;       /* auto */
/*0079D860*/ MySurfDesc &dk2::g_confSurfDesc4 = _g_confSurfDesc4;  /* auto */
/*--------*/ relink_glob char _pathBuf[256];  // ---------  /* auto */
/*0079D980*/ char (&dk2::pathBuf)[256] = _pathBuf;  // ---  /* auto */
/*--------*/ relink_glob char _dk2HomeDir[260];  // ------  /* auto */
/*0079DA88*/ char (&dk2::dk2HomeDir)[260] = _dk2HomeDir;    /* auto */
/*--------*/ relink_glob WinEventHandlers _WinEventHandlers_instance;  /* auto */
/*0079DBD0*/ WinEventHandlers &dk2::WinEventHandlers_instance = _WinEventHandlers_instance;  /* auto */
/*--------*/ relink_glob MySurfDesc _g_confSurfDesc6;       /* auto */
/*0079DC38*/ MySurfDesc &dk2::g_confSurfDesc6 = _g_confSurfDesc6;  /* auto */
/*--------*/ relink_glob MySurfDesc _g_confSurfDesc5;       /* auto */
/*0079DC50*/ MySurfDesc &dk2::g_confSurfDesc5 = _g_confSurfDesc5;  /* auto */
/*--------*/ relink_glob Obj79DC68 _Obj79DC68_instance;     /* auto */
/*0079DC68*/ Obj79DC68 &dk2::Obj79DC68_instance = _Obj79DC68_instance;  /* auto */
/*--------*/ relink_glob char _tqi_byte_79F4F0[264];  // -  /* auto */
/*0079F4F0*/ char (&dk2::tqi_byte_79F4F0)[264] = _tqi_byte_79F4F0;  /* auto */
/*--------*/ relink_glob CursorDrawer _CursorDrawer_instance;  /* auto */
/*0079F638*/ CursorDrawer &dk2::CursorDrawer_instance = _CursorDrawer_instance;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79F8A0[64];     /* auto */
/*0079F8A0*/ int32_t (&dk2::tqi_dword_79F8A0)[64] = _tqi_dword_79F8A0;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79F9A0[64];     /* auto */
/*0079F9A0*/ int32_t (&dk2::tqi_dword_79F9A0)[64] = _tqi_dword_79F9A0;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79FAA0;  // --  /* auto */
/*0079FAA0*/ int32_t &dk2::tqi_dword_79FAA0 = _tqi_dword_79FAA0;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79FAC4[9];      /* auto */
/*0079FAC4*/ int32_t (&dk2::tqi_dword_79FAC4)[9] = _tqi_dword_79FAC4;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79FAE8[9];      /* auto */
/*0079FAE8*/ int32_t (&dk2::tqi_dword_79FAE8)[9] = _tqi_dword_79FAE8;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79FB0C[9];      /* auto */
/*0079FB0C*/ int32_t (&dk2::tqi_dword_79FB0C)[9] = _tqi_dword_79FB0C;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79FB30[9];      /* auto */
/*0079FB30*/ int32_t (&dk2::tqi_dword_79FB30)[9] = _tqi_dword_79FB30;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79FB54[9];      /* auto */
/*0079FB54*/ int32_t (&dk2::tqi_dword_79FB54)[9] = _tqi_dword_79FB54;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79FB78[9];      /* auto */
/*0079FB78*/ int32_t (&dk2::tqi_dword_79FB78)[9] = _tqi_dword_79FB78;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_79FB9C[9];      /* auto */
/*0079FB9C*/ int32_t (&dk2::tqi_dword_79FB9C)[9] = _tqi_dword_79FB9C;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_7A043C[385];    /* auto */
/*007A043C*/ int32_t (&dk2::tqi_dword_7A043C)[385] = _tqi_dword_7A043C;  /* auto */
/*--------*/ relink_glob int32_t _tqi_dword_7A143C[385];    /* auto */
/*007A143C*/ int32_t (&dk2::tqi_dword_7A143C)[385] = _tqi_dword_7A143C;  /* auto */
/*--------*/ relink_glob int32_t _tqi_unk_7A2440[384];      /* auto */
/*007A2440*/ int32_t (&dk2::tqi_unk_7A2440)[384] = _tqi_unk_7A2440;  /* auto */
/*--------*/ relink_glob int32_t _tqi_unk_7A3440[384];      /* auto */
/*007A3440*/ int32_t (&dk2::tqi_unk_7A3440)[384] = _tqi_unk_7A3440;  /* auto */
/*--------*/ relink_glob char _g_filePath[264];  // ------  /* auto */
/*007A4440*/ char (&dk2::g_filePath)[264] = _g_filePath;    /* auto */
/*--------*/ relink_glob char _pszFileName[288];  // -----  /* auto */
/*007A4548*/ char (&dk2::pszFileName)[288] = _pszFileName;  /* auto */
/*--------*/ relink_glob uint32_t _MyZlibArchive_instance[3];  /* auto */
/*007A4790*/ uint32_t (&dk2::MyZlibArchive_instance)[3] = _MyZlibArchive_instance;  /* auto */
/*--------*/ relink_glob uint8_t _MySoundLoader_instance[248];  /* auto */
/*007A53B8*/ uint8_t (&dk2::MySoundLoader_instance)[248] = _MySoundLoader_instance;  /* auto */
/*--------*/ relink_glob _RTL_CRITICAL_SECTION *_lpCriticalSection;  /* auto */
/*007A5570*/ _RTL_CRITICAL_SECTION *&dk2::lpCriticalSection = _lpCriticalSection;  /* auto */
/*--------*/ relink_glob MyTR2 _MyTR2_instance;  // ------  /* auto */
/*007A5610*/ MyTR2 &dk2::MyTR2_instance = _MyTR2_instance;  /* auto */
/*--------*/ relink_glob MyTR5 _MyTR5_instance;  // ------  /* auto */
/*007A5614*/ MyTR5 &dk2::MyTR5_instance = _MyTR5_instance;  /* auto */
/*--------*/ relink_glob MyTR6 _MyTR6_instance;  // ------  /* auto */
/*007A5618*/ MyTR6 &dk2::MyTR6_instance = _MyTR6_instance;  /* auto */
/*--------*/ relink_glob MyCR3 _MyCR3_instnce;  // -------  /* auto */
/*007A561C*/ MyCR3 &dk2::MyCR3_instnce = _MyCR3_instnce;    /* auto */
/*--------*/ relink_glob MyCR1 _MyCR1_instance;  // ------  /* auto */
/*007A5620*/ MyCR1 &dk2::MyCR1_instance = _MyCR1_instance;  /* auto */
/*--------*/ relink_glob MyCR0 _MyCR0_instance;  // ------  /* auto */
/*007A5624*/ MyCR0 &dk2::MyCR0_instance = _MyCR0_instance;  /* auto */
/*--------*/ relink_glob MyTR4 _MyTR4_instance;  // ------  /* auto */
/*007A5628*/ MyTR4 &dk2::MyTR4_instance = _MyTR4_instance;  /* auto */
/*--------*/ relink_glob MyDR0 _MyDR0_instance;  // ------  /* auto */
/*007A562C*/ MyDR0 &dk2::MyDR0_instance = _MyDR0_instance;  /* auto */
/*--------*/ relink_glob MyCR2 _MyCR2_instance;  // ------  /* auto */
/*007A5634*/ MyCR2 &dk2::MyCR2_instance = _MyCR2_instance;  /* auto */
/*--------*/ relink_glob MyFontRenderer0 _MyFontRenderer0_instance;  /* auto */
/*007A5638*/ MyFontRenderer0 &dk2::MyFontRenderer0_instance = _MyFontRenderer0_instance;  /* auto */
/*--------*/ relink_glob MyFontRenderer2 _MyFontRenderer2_instance;  /* auto */
/*007A563C*/ MyFontRenderer2 &dk2::MyFontRenderer2_instance = _MyFontRenderer2_instance;  /* auto */
/*--------*/ relink_glob MyFontRenderer3 _MyFontRenderer3_instance;  /* auto */
/*007A5640*/ MyFontRenderer3 &dk2::MyFontRenderer3_instance = _MyFontRenderer3_instance;  /* auto */
/*--------*/ relink_glob MyFontRenderer4 _MyFontRenderer4_instance;  /* auto */
/*007A5644*/ MyFontRenderer4 &dk2::MyFontRenderer4_instance = _MyFontRenderer4_instance;  /* auto */
/*--------*/ relink_glob _RTL_CRITICAL_SECTION _CriticalSection;  /* auto */
/*007A5660*/ _RTL_CRITICAL_SECTION &dk2::CriticalSection = _CriticalSection;  /* auto */
/*--------*/ relink_glob int32_t _Target;  // ------------  /* auto */
/*007A5678*/ int32_t &dk2::Target = _Target;  // ---------  /* auto */
/*--------*/ relink_glob ThreadCtx *_g_environmentStrings;  /* auto */
/*007A5708*/ ThreadCtx *&dk2::g_environmentStrings = _g_environmentStrings;  /* auto */
/*--------*/ relink_glob char _Filename[264];  // --------  /* auto */
/*007A57C8*/ char (&dk2::Filename)[264] = _Filename;  // -  /* auto */
/*--------*/ relink_glob uint32_t _CodePage;  // ---------  /* auto */
/*007A5AE0*/ uint32_t &dk2::CodePage = _CodePage;  // ----  /* auto */
/*--------*/ relink_glob LCID _Locale;  // ---------------  /* auto */
/*007A5AE4*/ LCID &dk2::Locale = _Locale;  // ------------  /* auto */
/*--------*/ relink_glob int32_t (__stdcall *_lpTopLevelExceptionFilter)(_EXCEPTION_POINTERS *);  /* auto */
/*007A5B04*/ int32_t (__stdcall *&dk2::lpTopLevelExceptionFilter)(_EXCEPTION_POINTERS *) = _lpTopLevelExceptionFilter;  /* auto */
/*--------*/ relink_glob _TIME_ZONE_INFORMATION _TimeZoneInformation;  /* auto */
/*007A5B80*/ _TIME_ZONE_INFORMATION &dk2::TimeZoneInformation = _TimeZoneInformation;  /* auto */
/*--------*/ relink_glob int32_t (__stdcall *_MessageBoxA_0)(HWND__ *, const char *, const char *, uint32_t);  /* auto */
/*007A5C34*/ int32_t (__stdcall *&dk2::MessageBoxA_0)(HWND__ *, const char *, const char *, uint32_t) = _MessageBoxA_0;  /* auto */
/*--------*/ relink_glob HWND__ * (__stdcall *_GetActiveWindow)();  /* auto */
/*007A5C38*/ HWND__ * (__stdcall *&dk2::GetActiveWindow)() = _GetActiveWindow;  /* auto */
/*--------*/ relink_glob HWND__ * (__stdcall *_GetLastActivePopup)(HWND__ *);  /* auto */
/*007A5C3C*/ HWND__ * (__stdcall *&dk2::GetLastActivePopup)(HWND__ *) = _GetLastActivePopup;  /* auto */
/*--------*/ relink_glob wchar_t _LCData;  // ------------  /* auto */
/*007A5C60*/ wchar_t &dk2::LCData = _LCData;  // ---------  /* auto */
/*--------*/ relink_glob size_t _g_charBufferSize;  // ---  /* auto */
/*007A5C88*/ size_t &dk2::g_charBufferSize = _g_charBufferSize;  /* auto */
/*--------*/ relink_glob void *_g_charBuffer;  // --------  /* auto */
/*007A5C8C*/ void *&dk2::g_charBuffer = _g_charBuffer;      /* auto */
/*--------*/ relink_glob uint32_t _uNumber;  // ----------  /* auto */
/*007A5DA0*/ uint32_t &dk2::uNumber = _uNumber;  // ------  /* auto */
/*--------*/ relink_glob void *_hHeap;  // ---------------  /* auto */
/*007A5DA8*/ void *&dk2::hHeap = _hHeap;  // -------------  /* auto */
/*--------*/ relink_glob int32_t _Addend;  // ------------  /* auto */
/*007A5DB0*/ int32_t &dk2::Addend = _Addend;  // ---------  /* auto */
/*--------*/ relink_glob size_t _Count;  // --------------  /* auto */
/*007A6DC0*/ size_t &dk2::Count = _Count;  // ------------  /* auto */
/*--------*/ relink_glob uint32_t *_grpoly_mydd_buf;  // -  /* auto */
/*007A7020*/ uint32_t *&dk2::grpoly_mydd_buf = _grpoly_mydd_buf;  /* auto */
/*--------*/ relink_glob uint16_t *_grpoly_mydd_buf2;       /* auto */
/*007A7024*/ uint16_t *&dk2::grpoly_mydd_buf2 = _grpoly_mydd_buf2;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_buf_width;  // ----  /* auto */
/*007A7028*/ int32_t &dk2::mgsr_buf_width = _mgsr_buf_width;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_buf2_width;  // ---  /* auto */
/*007A702C*/ int32_t &dk2::mgsr_buf2_width = _mgsr_buf2_width;  /* auto */
/*--------*/ relink_glob uint32_t *_mgsr_lockedBuf_dw256x256;  /* auto */
/*007A7034*/ uint32_t *&dk2::mgsr_lockedBuf_dw256x256 = _mgsr_lockedBuf_dw256x256;  /* auto */
/*--------*/ relink_glob int32_t (__stdcall *_mgsr_pDrawFun)();  /* auto */
/*007A7040*/ int32_t (__stdcall *&dk2::mgsr_pDrawFun)() = _mgsr_pDrawFun;  /* auto */
/*--------*/ relink_glob Pos2p _mgsr_pos_dst;  // --------  /* auto */
/*007A7208*/ Pos2p &dk2::mgsr_pos_dst = _mgsr_pos_dst;      /* auto */
/*--------*/ relink_glob Pos2p _mgsr_qword_src;  // ------  /* auto */
/*007A7210*/ Pos2p &dk2::mgsr_qword_src = _mgsr_qword_src;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_dword_7A72D8;  // -  /* auto */
/*007A72D8*/ int32_t &dk2::mgsr_dword_7A72D8 = _mgsr_dword_7A72D8;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_dword_7A72DC;  // -  /* auto */
/*007A72DC*/ int32_t &dk2::mgsr_dword_7A72DC = _mgsr_dword_7A72DC;  /* auto */
/*--------*/ relink_glob __m64 _mgsr_qword_7A72E0[63];      /* auto */
/*007A72E0*/ __m64 (&dk2::mgsr_qword_7A72E0)[63] = _mgsr_qword_7A72E0;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_dword_7A74D8;  // -  /* auto */
/*007A74D8*/ int32_t &dk2::mgsr_dword_7A74D8 = _mgsr_dword_7A74D8;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_dword_7A74DC;  // -  /* auto */
/*007A74DC*/ int32_t &dk2::mgsr_dword_7A74DC = _mgsr_dword_7A74DC;  /* auto */
/*--------*/ relink_glob __m64 _mgsr_qword_7A74E0[70];      /* auto */
/*007A74E0*/ __m64 (&dk2::mgsr_qword_7A74E0)[70] = _mgsr_qword_7A74E0;  /* auto */
/*--------*/ relink_glob int32_t _mgsr_dword_7A7710[60];    /* auto */
/*007A7710*/ int32_t (&dk2::mgsr_dword_7A7710)[60] = _mgsr_dword_7A7710;  /* auto */
/*--------*/ relink_glob double _tqi_dbl_7AF048;  // -----  /* auto */
/*007AF048*/ double &dk2::tqi_dbl_7AF048 = _tqi_dbl_7AF048;  /* auto */
/*--------*/ relink_glob char _tqi_byte_7AF4E0[256];  // -  /* auto */
/*007AF4E0*/ char (&dk2::tqi_byte_7AF4E0)[256] = _tqi_byte_7AF4E0;  /* auto */
/*--------*/ relink_glob int32_t _jpeg_zigzag2[64];  // --  /* auto */
/*007AF680*/ int32_t (&dk2::jpeg_zigzag2)[64] = _jpeg_zigzag2;  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
