//   warning: file is managed by gen_relink_refs_cpp.py  -  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2_relink_refs.h>  // -------------------------  /* auto */
#include <dk2_globals.h>  // -----------------------------  /* auto */
#include <dk2_functions.h>  // ---------------------------  /* auto */
#include <dk2/AABB.h>  // --------------------------------  /* auto */
#include <dk2/AsyncThing.h>  // --------------------------  /* auto */
#include <dk2/Buf1000.h>  // -----------------------------  /* auto */
#include <dk2/CBridge.h>  // -----------------------------  /* auto */
#include <dk2/CBridgeInterface.h>  // --------------------  /* auto */
#include <dk2/CButton.h>  // -----------------------------  /* auto */
#include <dk2/CCamera.h>  // -----------------------------  /* auto */
#include <dk2/CClickButton.h>  // ------------------------  /* auto */
#include <dk2/CCommunicationInterface.h>  // -------------  /* auto */
#include <dk2/CComponent.h>  // --------------------------  /* auto */
#include <dk2/CCreature.h>  // ---------------------------  /* auto */
#include <dk2/CCreaturePool.h>  // -----------------------  /* auto */
#include <dk2/CDeadBody.h>  // ---------------------------  /* auto */
#include <dk2/CDefaultPlayerInterface.h>  // -------------  /* auto */
#include <dk2/CDirectIFFFile.h>  // ----------------------  /* auto */
#include <dk2/CDoor.h>  // -------------------------------  /* auto */
#include <dk2/CEngine2DAnimMesh.h>  // -------------------  /* auto */
#include <dk2/CEngine2DMeshSurface.h>  // ----------------  /* auto */
#include <dk2/CEngine2DPrimitive.h>  // ------------------  /* auto */
#include <dk2/CEngine2DRotatableSprite.h>  // ------------  /* auto */
#include <dk2/CEngine2DSprite.h>  // ---------------------  /* auto */
#include <dk2/CEngine2DStaticMesh.h>  // -----------------  /* auto */
#include <dk2/CEngineAnimMesh.h>  // ---------------------  /* auto */
#include <dk2/CEngineCompressedSurface.h>  // ------------  /* auto */
#include <dk2/CEngineDDSurface.h>  // --------------------  /* auto */
#include <dk2/CEngineDynamicHeightField.h>  // -----------  /* auto */
#include <dk2/CEngineDynamicMesh.h>  // ------------------  /* auto */
#include <dk2/CEngineInterface.h>  // --------------------  /* auto */
#include <dk2/CEngineQuadPlane.h>  // --------------------  /* auto */
#include <dk2/CEngineSprite.h>  // -----------------------  /* auto */
#include <dk2/CEngineStaticHeightField.h>  // ------------  /* auto */
#include <dk2/CEngineStaticMesh.h>  // -------------------  /* auto */
#include <dk2/CEngineSurface.h>  // ----------------------  /* auto */
#include <dk2/CEngineSurfaceBase.h>  // ------------------  /* auto */
#include <dk2/CEngineUnlitProceduralMesh.h>  // ----------  /* auto */
#include <dk2/CEngineVirtualPerspective2DAnimMesh.h>  // -  /* auto */
#include <dk2/CEngineWorldPrimitive.h>  // ---------------  /* auto */
#include <dk2/CEntryComponent.h>  // ---------------------  /* auto */
#include <dk2/CFileManager.h>  // ------------------------  /* auto */
#include <dk2/CFrontEndComponent.h>  // ------------------  /* auto */
#include <dk2/CGadget.h>  // -----------------------------  /* auto */
#include <dk2/CGameComponent.h>  // ----------------------  /* auto */
#include <dk2/CGuiManager.h>  // -------------------------  /* auto */
#include <dk2/CLocalCommunication.h>  // -----------------  /* auto */
#include <dk2/CMap.h>  // --------------------------------  /* auto */
#include <dk2/CMovingThing.h>  // ------------------------  /* auto */
#include <dk2/CNetworkComponent.h>  // -------------------  /* auto */
#include <dk2/CObject.h>  // -----------------------------  /* auto */
#include <dk2/CPCEngineInterface.h>  // ------------------  /* auto */
#include <dk2/CPhysicalThing.h>  // ----------------------  /* auto */
#include <dk2/CPlayer.h>  // -----------------------------  /* auto */
#include <dk2/CRenderInfo.h>  // -------------------------  /* auto */
#include <dk2/CResearchOrder.h>  // ----------------------  /* auto */
#include <dk2/CRoom.h>  // -------------------------------  /* auto */
#include <dk2/CShot.h>  // -------------------------------  /* auto */
#include <dk2/CSoundSystem.h>  // ------------------------  /* auto */
#include <dk2/CState.h>  // ------------------------------  /* auto */
#include <dk2/CTag.h>  // --------------------------------  /* auto */
#include <dk2/CThing.h>  // ------------------------------  /* auto */
#include <dk2/CTrap.h>  // -------------------------------  /* auto */
#include <dk2/CVerticalSlider.h>  // ---------------------  /* auto */
#include <dk2/CWindow.h>  // -----------------------------  /* auto */
#include <dk2/CWindowTest.h>  // -------------------------  /* auto */
#include <dk2/CWorld.h>  // ------------------------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
#include <dk2/CWorldShortEntry2.h>  // -------------------  /* auto */
#include <dk2/CharImageReader.h>  // ---------------------  /* auto */
#include <dk2/CharImageWriter.h>  // ---------------------  /* auto */
#include <dk2/ControlKeysUpdater.h>  // ------------------  /* auto */
#include <dk2/ControlSurf.h>  // -------------------------  /* auto */
#include <dk2/CursorDrawer.h>  // ------------------------  /* auto */
#include <dk2/DiscFileBase.h>  // ------------------------  /* auto */
#include <dk2/DxActionQueue.h>  // -----------------------  /* auto */
#include <dk2/FileStorageBase.h>  // ---------------------  /* auto */
#include <dk2/FloatObjThing.h>  // -----------------------  /* auto */
#include <dk2/FontObj.h>  // -----------------------------  /* auto */
#include <dk2/FontObjWr.h>  // ---------------------------  /* auto */
#include <dk2/GameAction.h>  // --------------------------  /* auto */
#include <dk2/GameActionArray.h>  // ---------------------  /* auto */
#include <dk2/GameActionCtx.h>  // -----------------------  /* auto */
#include <dk2/GameActionHandler.h>  // -------------------  /* auto */
#include <dk2/LockBase.h>  // ----------------------------  /* auto */
#include <dk2/MouseRgbDxAction.h>  // --------------------  /* auto */
#include <dk2/MouseRgbDxActionList.h>  // ----------------  /* auto */
#include <dk2/MouseXyzDxAction.h>  // --------------------  /* auto */
#include <dk2/MouseXyzDxActionList.h>  // ----------------  /* auto */
#include <dk2/MyALList_WadFileObj.h>  // -----------------  /* auto */
#include <dk2/MyCESurfHandle.h>  // ----------------------  /* auto */
#include <dk2/MyCEngineSurfDesc.h>  // -------------------  /* auto */
#include <dk2/MyCRBase.h>  // ----------------------------  /* auto */
#include <dk2/MyCachedOffsStream.h>  // ------------------  /* auto */
#include <dk2/MyCallback.h>  // --------------------------  /* auto */
#include <dk2/MyCb6723D0.h>  // --------------------------  /* auto */
#include <dk2/MyCbHandle.h>  // --------------------------  /* auto */
#include <dk2/MyCollectDxAction.h>  // -------------------  /* auto */
#include <dk2/MyComEx.h>  // -----------------------------  /* auto */
#include <dk2/MyConcurrentStream.h>  // ------------------  /* auto */
#include <dk2/MyCreatureCollection.h>  // ----------------  /* auto */
#include <dk2/MyDRBase.h>  // ----------------------------  /* auto */
#include <dk2/MyDblNamedSurface.h>  // -------------------  /* auto */
#include <dk2/MyDdSurfaceEx.h>  // -----------------------  /* auto */
#include <dk2/MyDirectInput.h>  // -----------------------  /* auto */
#include <dk2/MyDirectory.h>  // -------------------------  /* auto */
#include <dk2/MyDiskDirectory.h>  // ---------------------  /* auto */
#include <dk2/MyDxDevice.h>  // --------------------------  /* auto */
#include <dk2/MyDxInputManagerCb.h>  // ------------------  /* auto */
#include <dk2/MyDxInputState.h>  // ----------------------  /* auto */
#include <dk2/MyDxKeyboard.h>  // ------------------------  /* auto */
#include <dk2/MyDxMouse.h>  // ---------------------------  /* auto */
#include <dk2/MyEntryBuf_MyScaledSurface.h>  // ----------  /* auto */
#include <dk2/MyEntryBuf_MyStringHashMap_entry.h>  // ----  /* auto */
#include <dk2/MyEntryBuf_Triangle24.h>  // ---------------  /* auto */
#include <dk2/MyEntryBuf_Vertex18.h>  // -----------------  /* auto */
#include <dk2/MyFileStorage.h>  // -----------------------  /* auto */
#include <dk2/MyFileStream.h>  // ------------------------  /* auto */
#include <dk2/MyFontRendererBase.h>  // ------------------  /* auto */
#include <dk2/MyGame.h>  // ------------------------------  /* auto */
#include <dk2/MyGame_f4C.h>  // --------------------------  /* auto */
#include <dk2/MyInputListenersHolder.h>  // --------------  /* auto */
#include <dk2/MyInputManagerCb.h>  // --------------------  /* auto */
#include <dk2/MyInputStream.h>  // -----------------------  /* auto */
#include <dk2/MyKeyboard.h>  // --------------------------  /* auto */
#include <dk2/MyLList_WadDirObj.h>  // -------------------  /* auto */
#include <dk2/MyLList_WadFileObj.h>  // ------------------  /* auto */
#include <dk2/MyLList_WinEventCb.h>  // ------------------  /* auto */
#include <dk2/MyLangObj.h>  // ---------------------------  /* auto */
#include <dk2/MyLocalStr.h>  // --------------------------  /* auto */
#include <dk2/MyLock.h>  // ------------------------------  /* auto */
#include <dk2/MyLoopLList_DxAction.h>  // ----------------  /* auto */
#include <dk2/MyLoopLList_DxAction_entry.h>  // ----------  /* auto */
#include <dk2/MyMemoryMapStream.h>  // -------------------  /* auto */
#include <dk2/MyMouse.h>  // -----------------------------  /* auto */
#include <dk2/MyMouseUpdater.h>  // ----------------------  /* auto */
#include <dk2/MyMultilineRenderCtx.h>  // ----------------  /* auto */
#include <dk2/MyMutex.h>  // -----------------------------  /* auto */
#include <dk2/MyObj67B948.h>  // -------------------------  /* auto */
#include <dk2/MyProfiler.h>  // --------------------------  /* auto */
#include <dk2/MyResources.h>  // -------------------------  /* auto */
#include <dk2/MyResources_f29CB.h>  // -------------------  /* auto */
#include <dk2/MyResources_f2E38Obj.h>  // ----------------  /* auto */
#include <dk2/MyScaledSurface.h>  // ---------------------  /* auto */
#include <dk2/MySemaphore.h>  // -------------------------  /* auto */
#include <dk2/MySharedObj.h>  // -------------------------  /* auto */
#include <dk2/MySignalBase.h>  // ------------------------  /* auto */
#include <dk2/MyStaticStruct.h>  // ----------------------  /* auto */
#include <dk2/MyStr.h>  // -------------------------------  /* auto */
#include <dk2/MyStringHashMap.h>  // ---------------------  /* auto */
#include <dk2/MySubStr.h>  // ----------------------------  /* auto */
#include <dk2/MySurfDesc.h>  // --------------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
#include <dk2/MySurfaceWrapper.h>  // --------------------  /* auto */
#include <dk2/MyTRBase.h>  // ----------------------------  /* auto */
#include <dk2/MyTRCtx.h>  // -----------------------------  /* auto */
#include <dk2/MyTRCtx2Sub.h>  // -------------------------  /* auto */
#include <dk2/MyTbAudioSystem.h>  // ---------------------  /* auto */
#include <dk2/MyTextBase.h>  // --------------------------  /* auto */
#include <dk2/MyTextFont.h>  // --------------------------  /* auto */
#include <dk2/MyTextMBToUni.h>  // -----------------------  /* auto */
#include <dk2/MyTextText.h>  // --------------------------  /* auto */
#include <dk2/MyTextUniToMB.h>  // -----------------------  /* auto */
#include <dk2/MyTextures.h>  // --------------------------  /* auto */
#include <dk2/MyUnk674058.h>  // -------------------------  /* auto */
#include <dk2/MyVideoSettings.h>  // ---------------------  /* auto */
#include <dk2/MyWadDirectory.h>  // ----------------------  /* auto */
#include <dk2/MyWadUnkObj.h>  // -------------------------  /* auto */
#include <dk2/MyWindowMsgs.h>  // ------------------------  /* auto */
#include <dk2/My_sub_56F850.h>  // -----------------------  /* auto */
#include <dk2/Obj6723B8.h>  // ---------------------------  /* auto */
#include <dk2/Obj672500.h>  // ---------------------------  /* auto */
#include <dk2/Obj672510.h>  // ---------------------------  /* auto */
#include <dk2/Obj672844.h>  // ---------------------------  /* auto */
#include <dk2/Obj672E70.h>  // ---------------------------  /* auto */
#include <dk2/Obj672E80.h>  // ---------------------------  /* auto */
#include <dk2/Obj792D48.h>  // ---------------------------  /* auto */
#include <dk2/Obj79DC68.h>  // ---------------------------  /* auto */
#include <dk2/PixelMask.h>  // ---------------------------  /* auto */
#include <dk2/PlayerList.h>  // --------------------------  /* auto */
#include <dk2/PtrArrList.h>  // --------------------------  /* auto */
#include <dk2/SceneObject30List.h>  // -------------------  /* auto */
#include <dk2/SurfHashList.h>  // ------------------------  /* auto */
#include <dk2/SurfHashList2.h>  // -----------------------  /* auto */
#include <dk2/SurfHashListItem.h>  // --------------------  /* auto */
#include <dk2/SurfaceHolder.h>  // -----------------------  /* auto */
#include <dk2/TbAudioSystem.h>  // -----------------------  /* auto */
#include <dk2/TbDiscFile.h>  // --------------------------  /* auto */
#include <dk2/TbDiscFileStorage.h>  // -------------------  /* auto */
#include <dk2/TbSysCommand_SetNumberOfChannels.h>  // ----  /* auto */
#include <dk2/WadContent.h>  // --------------------------  /* auto */
#include <dk2/WadDirObj.h>  // ---------------------------  /* auto */
#include <dk2/WinEventHandlers.h>  // --------------------  /* auto */
#include <dk2/WndMsgDxAction.h>  // ----------------------  /* auto */
#include <dk2/WndMsgDxActionList.h>  // ------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <xmmintrin.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
struct stub {};  // --------------------------------------  /* auto */
typedef void (stub::* funptr_t) ();  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
struct entry_t {  // -------------------------------------  /* auto */
  uint32_t rva;  // --------------------------------------  /* auto */
  union {  // --------------------------------------------  /* auto */
    funptr_t fptr;  // -----------------------------------  /* auto */
    void *ptr;  // ---------------------------------------  /* auto */
  };  // -------------------------------------------------  /* auto */
  const char *name;  // ----------------------------------  /* auto */
  entry_t(uint32_t rva, void *ptr, const char *name) : rva(rva), ptr(ptr), name(name) {}  /* auto */
  entry_t(uint32_t rva, funptr_t ptr, const char *name) : rva(rva), fptr(ptr), name(name) {}  /* auto */
};  // ---------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
entry_t global_relink_refs[] = {  // ---------------------  /* auto */
  { 0x00647830, &dk2::c_dfDIMouseFormat, "c_dfDIMouseFormat" },  /* auto */
  { 0x006478A0, &dk2::c_dfDIKeyboardFormat, "c_dfDIKeyboardFormat" },  /* auto */
  { 0x006551C0, &dk2::mgsr_drawFuns, "mgsr_drawFuns" },     /* auto */
  { 0x0065FB14, &dk2::asm_update_wordArr, "asm_update_wordArr" },  /* auto */
  { 0x0065FC94, &dk2::asm_update2_wordArr, "asm_update2_wordArr" },  /* auto */
  { 0x0066C424, &dk2::CEntryComponent_vftable, "CEntryComponent_vftable" },  /* auto */
  { 0x0066C45C, &dk2::CComponent_vftable, "CComponent_vftable" },  /* auto */
  { 0x0066C4A4, &dk2::CDefaultPlayerInterface_vftable, "CDefaultPlayerInterface_vftable" },  /* auto */
  { 0x0066C780, &dk2::arr_66C780, "arr_66C780" },  // ----  /* auto */
  { 0x0066CC94, &dk2::CBridge_vftable, "CBridge_vftable" },  /* auto */
  { 0x0066CF7C, &dk2::CBridgeInterface_vftable, "CBridgeInterface_vftable" },  /* auto */
  { 0x0066D1D4, &dk2::CEngineInterface_vftable, "CEngineInterface_vftable" },  /* auto */
  { 0x0066D3E4, &dk2::CMap_vftable, "CMap_vftable" },       /* auto */
  { 0x0066D404, &dk2::CState_vftable, "CState_vftable" },   /* auto */
  { 0x0066D454, &dk2::CRenderInfo_vftable, "CRenderInfo_vftable" },  /* auto */
  { 0x0066D464, &dk2::CThing_vftable, "CThing_vftable" },   /* auto */
  { 0x0066D4BC, &dk2::CPhysicalThing_vftable, "CPhysicalThing_vftable" },  /* auto */
  { 0x0066D524, &dk2::CCreature_vftable, "CCreature_vftable" },  /* auto */
  { 0x0066D5BC, &dk2::CMovingThing_vftable, "CMovingThing_vftable" },  /* auto */
  { 0x0066D654, &dk2::CObject_vftable, "CObject_vftable" },  /* auto */
  { 0x0066D6EC, &dk2::CDoor_vftable, "CDoor_vftable" },     /* auto */
  { 0x0066D754, &dk2::CTrap_vftable, "CTrap_vftable" },     /* auto */
  { 0x0066D86C, &dk2::CShot_vftable, "CShot_vftable" },     /* auto */
  { 0x0066D904, &dk2::CDeadBody_vftable, "CDeadBody_vftable" },  /* auto */
  { 0x0066D99C, &dk2::CPlayer_vftable, "CPlayer_vftable" },  /* auto */
  { 0x0066DB7C, &dk2::CRoom_vftable, "CRoom_vftable" },     /* auto */
  { 0x0066E3AC, &dk2::CCreaturePool_vftable, "CCreaturePool_vftable" },  /* auto */
  { 0x0066E3C4, &dk2::CResearchOrder_vftable, "CResearchOrder_vftable" },  /* auto */
  { 0x0066E3DC, &dk2::CTag_vftable, "CTag_vftable" },       /* auto */
  { 0x0066E3EC, &dk2::CWorld_vftable, "CWorld_vftable" },   /* auto */
  { 0x0066E7A4, &dk2::CWorldInterface_vftable, "CWorldInterface_vftable" },  /* auto */
  { 0x0066EB3C, &dk2::CCommunicationInterface_vftable, "CCommunicationInterface_vftable" },  /* auto */
  { 0x0066EB8C, &dk2::CLocalCommunication_vftable, "CLocalCommunication_vftable" },  /* auto */
  { 0x0066EC4C, &dk2::CGameComponent_vftable, "CGameComponent_vftable" },  /* auto */
  { 0x0066EC84, &dk2::CNetworkComponent_vftable, "CNetworkComponent_vftable" },  /* auto */
  { 0x0066ECA4, &dk2::CButton_vftable, "CButton_vftable" },  /* auto */
  { 0x0066ECBC, &dk2::CVerticalSlider_vftable, "CVerticalSlider_vftable" },  /* auto */
  { 0x0066ED14, &dk2::CGadget_vftable, "CGadget_vftable" },  /* auto */
  { 0x0066ED1C, &dk2::CGuiManager_vftable, "CGuiManager_vftable" },  /* auto */
  { 0x0066ED54, &dk2::CListBox_vftable, "CListBox_vftable" },  /* auto */
  { 0x0066EE0C, &dk2::CHorizontalSlider_vftable, "CHorizontalSlider_vftable" },  /* auto */
  { 0x0066EE64, &dk2::CRadioButton_vftable, "CRadioButton_vftable" },  /* auto */
  { 0x0066EE7C, &dk2::CClickButton_vftable, "CClickButton_vftable" },  /* auto */
  { 0x0066EE94, &dk2::CWindow_vftable, "CWindow_vftable" },  /* auto */
  { 0x0066EF3C, &dk2::CFrontEndComponent_vftable, "CFrontEndComponent_vftable" },  /* auto */
  { 0x0066F20C, &dk2::CWindowTest_vftable, "CWindowTest_vftable" },  /* auto */
  { 0x0066F214, &dk2::CFileManager_vftable, "CFileManager_vftable" },  /* auto */
  { 0x0066F24C, &dk2::TbDiscFile_vftable, "TbDiscFile_vftable" },  /* auto */
  { 0x0066F338, &dk2::Drive, "Drive" },  // --------------  /* auto */
  { 0x0066F34C, &dk2::lpSubKey, "lpSubKey" },  // --------  /* auto */
  { 0x0066F3AC, &dk2::TbDiscFileStorage_vftable, "TbDiscFileStorage_vftable" },  /* auto */
  { 0x0066F46C, &dk2::lpValueName, "lpValueName" },  // --  /* auto */
  { 0x0066F7FC, &dk2::CSoundSystem_vftable, "CSoundSystem_vftable" },  /* auto */
  { 0x0066F90C, &dk2::TbAudioSystem_vftable, "TbAudioSystem_vftable" },  /* auto */
  { 0x0066F92C, &dk2::TbSysCommand_SetNumberOfChannels_vftable, "TbSysCommand_SetNumberOfChannels_vftable" },  /* auto */
  { 0x0066FA8C, &dk2::CEngine2DSprite_vftable, "CEngine2DSprite_vftable" },  /* auto */
  { 0x0066FA9C, &dk2::CEnginePrimitiveBase_vftable, "CEnginePrimitiveBase_vftable" },  /* auto */
  { 0x0066FAAC, &dk2::CEngine2DRotatableSprite_vftable, "CEngine2DRotatableSprite_vftable" },  /* auto */
  { 0x0066FABC, &dk2::CEngine2DStaticMesh_vftable, "CEngine2DStaticMesh_vftable" },  /* auto */
  { 0x0066FAD4, &dk2::CEngine2DAnimMesh_vftable, "CEngine2DAnimMesh_vftable" },  /* auto */
  { 0x0066FAEC, &dk2::CEngineVirtualPerspective2DAnimMesh_vftable, "CEngineVirtualPerspective2DAnimMesh_vftable" },  /* auto */
  { 0x0066FB04, &dk2::CEngine2DMeshSurface_vftable, "CEngine2DMeshSurface_vftable" },  /* auto */
  { 0x0066FB14, &dk2::CEngine2DPrimitive_vftable, "CEngine2DPrimitive_vftable" },  /* auto */
  { 0x0066FB34, &dk2::CDirectIFFFile_vftable, "CDirectIFFFile_vftable" },  /* auto */
  { 0x0066FCCC, &dk2::CEngineSprite_vftable, "CEngineSprite_vftable" },  /* auto */
  { 0x0066FCF4, &dk2::CEngineQuadPlane_vftable, "CEngineQuadPlane_vftable" },  /* auto */
  { 0x0066FD1C, &dk2::CEngineDynamicMesh_vftable, "CEngineDynamicMesh_vftable" },  /* auto */
  { 0x0066FD44, &dk2::CEngineWorldPrimitive_vftable, "CEngineWorldPrimitive_vftable" },  /* auto */
  { 0x0066FD64, &dk2::CEngineAnimMesh_vftable, "CEngineAnimMesh_vftable" },  /* auto */
  { 0x0066FD8C, &dk2::CEngineStaticMesh_vftable, "CEngineStaticMesh_vftable" },  /* auto */
  { 0x0066FDB4, &dk2::CEngineStaticHeightField_vftable, "CEngineStaticHeightField_vftable" },  /* auto */
  { 0x0066FDDC, &dk2::CEngineDynamicHeightField_vftable, "CEngineDynamicHeightField_vftable" },  /* auto */
  { 0x0066FE04, &dk2::CEngineUnlitProceduralMesh_vftable, "CEngineUnlitProceduralMesh_vftable" },  /* auto */
  { 0x0067034C, &dk2::CEngineSurface_vftable, "CEngineSurface_vftable" },  /* auto */
  { 0x00670374, &dk2::CEngineSurfaceBase_vftable, "CEngineSurfaceBase_vftable" },  /* auto */
  { 0x0067039C, &dk2::CEngineCompressedSurface_vftable, "CEngineCompressedSurface_vftable" },  /* auto */
  { 0x006703C4, &dk2::CEngineDDSurface_vftable, "CEngineDDSurface_vftable" },  /* auto */
  { 0x00670574, &dk2::CPCEngineInterface_vftable, "CPCEngineInterface_vftable" },  /* auto */
  { 0x00671C90, &dk2::CLSID_IKsPropertySet, "CLSID_IKsPropertySet" },  /* auto */
  { 0x00671CA0, &dk2::CLSID_IDirectSound3DBuffer, "CLSID_IDirectSound3DBuffer" },  /* auto */
  { 0x00671D40, &dk2::CLSID_GUID_SysKeyboard, "CLSID_GUID_SysKeyboard" },  /* auto */
  { 0x00671D50, &dk2::CLSID_GUID_SysMouse, "CLSID_GUID_SysMouse" },  /* auto */
  { 0x00671D60, &dk2::CLSID_GUID_Key, "CLSID_GUID_Key" },   /* auto */
  { 0x00671D70, &dk2::CLSID_GUID_ZAxis, "CLSID_GUID_ZAxis" },  /* auto */
  { 0x00671D80, &dk2::CLSID_GUID_YAxis, "CLSID_GUID_YAxis" },  /* auto */
  { 0x00671D90, &dk2::CLSID_GUID_XAxis, "CLSID_GUID_XAxis" },  /* auto */
  { 0x00671DA0, &dk2::CLSID_IDirect3DTexture2, "CLSID_IDirect3DTexture2" },  /* auto */
  { 0x00671DB0, &dk2::CLSID_IDirect3DHALDevice, "CLSID_IDirect3DHALDevice" },  /* auto */
  { 0x00671DC0, &dk2::CLSID_IDirect3D3, "CLSID_IDirect3D3" },  /* auto */
  { 0x00671DD0, &dk2::CLSID_IDirect3D2, "CLSID_IDirect3D2" },  /* auto */
  { 0x00671DE0, &dk2::CLSID_IDirect3D, "CLSID_IDirect3D" },  /* auto */
  { 0x00671DF0, &dk2::CLSID_IDirectDrawGammaControl, "CLSID_IDirectDrawGammaControl" },  /* auto */
  { 0x00671E00, &dk2::CLSID_IDirectDrawSurface4, "CLSID_IDirectDrawSurface4" },  /* auto */
  { 0x00671E10, &dk2::CLSID_IDirectDrawSurface2, "CLSID_IDirectDrawSurface2" },  /* auto */
  { 0x00671E20, &dk2::CLSID_IDirectDraw4, "CLSID_IDirectDraw4" },  /* auto */
  { 0x00671E30, &dk2::CLSID_IDirectDraw2, "CLSID_IDirectDraw2" },  /* auto */
  { 0x00671F80, &dk2::DiscFileBase_vftable, "DiscFileBase_vftable" },  /* auto */
  { 0x006722D0, &dk2::MyStr_vftable, "MyStr_vftable" },     /* auto */
  { 0x00672300, &dk2::MySubStr_vftable, "MySubStr_vftable" },  /* auto */
  { 0x00672340, &dk2::MyLList_WinEventCb_vftable, "MyLList_WinEventCb_vftable" },  /* auto */
  { 0x00672348, &dk2::FileStorageBase_vftable, "FileStorageBase_vftable" },  /* auto */
  { 0x00672380, &dk2::MyInputManagerCb_vftable, "MyInputManagerCb_vftable" },  /* auto */
  { 0x006723B8, &dk2::Obj6723B8_vftable, "Obj6723B8_vftable" },  /* auto */
  { 0x006723D0, &dk2::MyCb6723D0_vftable, "MyCb6723D0_vftable" },  /* auto */
  { 0x006723D8, &dk2::MyCbHandle_vftable, "MyCbHandle_vftable" },  /* auto */
  { 0x006723E0, &dk2::MyCallback_vftable, "MyCallback_vftable" },  /* auto */
  { 0x006723E8, &dk2::MyInputListenersHolder_vftable, "MyInputListenersHolder_vftable" },  /* auto */
  { 0x00672408, &dk2::MySharedObj_vftable, "MySharedObj_vftable" },  /* auto */
  { 0x00672418, &dk2::MyComEx_vftable, "MyComEx_vftable" },  /* auto */
  { 0x00672438, &dk2::MyWindowMsgs_vftable, "MyWindowMsgs_vftable" },  /* auto */
  { 0x0067244C, &dk2::WndMsgDxAction_vftable, "WndMsgDxAction_vftable" },  /* auto */
  { 0x00672450, &dk2::WndMsgDxActionList_vftable, "WndMsgDxActionList_vftable" },  /* auto */
  { 0x00672458, &dk2::MyCollectDxAction_vftable, "MyCollectDxAction_vftable" },  /* auto */
  { 0x00672478, &dk2::MyDxInputManagerCb_idxs, "MyDxInputManagerCb_idxs" },  /* auto */
  { 0x00672480, &dk2::MyDxInputManagerCb_vftable, "MyDxInputManagerCb_vftable" },  /* auto */
  { 0x006724A8, &dk2::MyMouseUpdater_vftable, "MyMouseUpdater_vftable" },  /* auto */
  { 0x00672500, &dk2::Obj672500_vftable, "Obj672500_vftable" },  /* auto */
  { 0x00672510, &dk2::Obj672510_vftable, "Obj672510_vftable" },  /* auto */
  { 0x00672520, &dk2::Obj672520Interface_vftable, "Obj672520Interface_vftable" },  /* auto */
  { 0x006725D8, &dk2::MyInputStream_vftable, "MyInputStream_vftable" },  /* auto */
  { 0x00672608, &dk2::tqi_dword_672608, "tqi_dword_672608" },  /* auto */
  { 0x00672708, &dk2::MyDirectory_vftable, "MyDirectory_vftable" },  /* auto */
  { 0x00672740, &dk2::MyWadDirectory_vftable, "MyWadDirectory_vftable" },  /* auto */
  { 0x00672778, &dk2::MyDiskDirectory_vftable, "MyDiskDirectory_vftable" },  /* auto */
  { 0x006727B0, &dk2::DxActionQueue_vftable, "DxActionQueue_vftable" },  /* auto */
  { 0x006727D8, &dk2::LockBase_vftable, "LockBase_vftable" },  /* auto */
  { 0x006727FC, &dk2::AsyncThing_vftable, "AsyncThing_vftable" },  /* auto */
  { 0x00672800, &dk2::MySignalBase_vftable, "MySignalBase_vftable" },  /* auto */
  { 0x00672828, &dk2::MyDxInputState_vftable, "MyDxInputState_vftable" },  /* auto */
  { 0x00672844, &dk2::Obj672844_vftable, "Obj672844_vftable" },  /* auto */
  { 0x00672848, &dk2::MyCb6723D0_idxs, "MyCb6723D0_idxs" },  /* auto */
  { 0x00672854, &dk2::CursorDrawer_vftable, "CursorDrawer_vftable" },  /* auto */
  { 0x00672868, &dk2::MyDxDevice_vftable, "MyDxDevice_vftable" },  /* auto */
  { 0x00672878, &dk2::MyControlKeysCb_idxs, "MyControlKeysCb_idxs" },  /* auto */
  { 0x00672888, &dk2::ControlKeysUpdater_vftable, "ControlKeysUpdater_vftable" },  /* auto */
  { 0x006728A8, &dk2::MyMouseCb_idxs, "MyMouseCb_idxs" },   /* auto */
  { 0x006728B0, &dk2::MyMouse_vftable, "MyMouse_vftable" },  /* auto */
  { 0x006728E0, &dk2::MyDxMouse_vftable, "MyDxMouse_vftable" },  /* auto */
  { 0x006728F8, &dk2::MouseRgbDxAction_vftable, "MouseRgbDxAction_vftable" },  /* auto */
  { 0x006728FC, &dk2::MouseRgbDxActionList_vftable, "MouseRgbDxActionList_vftable" },  /* auto */
  { 0x00672900, &dk2::MouseXyzDxAction_vftable, "MouseXyzDxAction_vftable" },  /* auto */
  { 0x00672904, &dk2::MouseXyzDxActionList_vftable, "MouseXyzDxActionList_vftable" },  /* auto */
  { 0x00672920, &dk2::MyDxKeyboard_vftable, "MyDxKeyboard_vftable" },  /* auto */
  { 0x006729F8, &dk2::ControlSurf_vftable, "ControlSurf_vftable" },  /* auto */
  { 0x00672A00, &dk2::libpng_png_digit, "libpng_png_digit" },  /* auto */
  { 0x00672A10, &dk2::zlib_crc_table, "zlib_crc_table" },   /* auto */
  { 0x00672E70, &dk2::Obj672E70_vftable, "Obj672E70_vftable" },  /* auto */
  { 0x00672E80, &dk2::Obj672E80_vftable, "Obj672E80_vftable" },  /* auto */
  { 0x00672EC0, &dk2::MyLocalStr_vftable, "MyLocalStr_vftable" },  /* auto */
  { 0x00672EE4, &dk2::MyLList_WadFileObj_vftable, "MyLList_WadFileObj_vftable" },  /* auto */
  { 0x00672EE8, &dk2::MyLList_WadDirObj_vftable, "MyLList_WadDirObj_vftable" },  /* auto */
  { 0x00672EF8, &dk2::MyConcurrentStream_vftable, "MyConcurrentStream_vftable" },  /* auto */
  { 0x00672FE8, &dk2::MyFileStream_vftable, "MyFileStream_vftable" },  /* auto */
  { 0x00673018, &dk2::MyMemoryMapStream_vftable, "MyMemoryMapStream_vftable" },  /* auto */
  { 0x00673048, &dk2::MyDirectInput_vftable, "MyDirectInput_vftable" },  /* auto */
  { 0x00673070, &dk2::zlib_border, "zlib_border" },  // --  /* auto */
  { 0x006730C0, &dk2::MyCachedOffsStream_vftable, "MyCachedOffsStream_vftable" },  /* auto */
  { 0x00673390, &dk2::funcs_6057F7, "funcs_6057F7" },       /* auto */
  { 0x00673E48, &dk2::MyTbAudioSystem_vftable, "MyTbAudioSystem_vftable" },  /* auto */
  { 0x00674058, &dk2::MyUnk674058_vftable, "MyUnk674058_vftable" },  /* auto */
  { 0x00674430, &dk2::rclsid, "rclsid" },  // ------------  /* auto */
  { 0x00674470, &dk2::riid, "riid" },  // ----------------  /* auto */
  { 0x00676378, &dk2::wordArr_00676378, "wordArr_00676378" },  /* auto */
  { 0x0067B8C0, &dk2::FontObj_vftable, "FontObj_vftable" },  /* auto */
  { 0x0067B948, &dk2::MyObj67B948_vftable, "MyObj67B948_vftable" },  /* auto */
  { 0x0067B950, &dk2::MyTextText_vftable, "MyTextText_vftable" },  /* auto */
  { 0x0067B968, &dk2::MyTextBase_vftable, "MyTextBase_vftable" },  /* auto */
  { 0x0067B9B0, &dk2::MyTextUniToMB_vftable, "MyTextUniToMB_vftable" },  /* auto */
  { 0x0067B9C8, &dk2::MyTextMBToUni_vftable, "MyTextMBToUni_vftable" },  /* auto */
  { 0x0067B9F8, &dk2::MyCRBase_vftable, "MyCRBase_vftable" },  /* auto */
  { 0x0067BA08, &dk2::MyTRBase_vftable, "MyTRBase_vftable" },  /* auto */
  { 0x0067BA18, &dk2::FontObjWr_vftable, "FontObjWr_vftable" },  /* auto */
  { 0x0067BA30, &dk2::MyFileStorage_vftable, "MyFileStorage_vftable" },  /* auto */
  { 0x0067BA48, &dk2::MyDRBase_vftable, "MyDRBase_vftable" },  /* auto */
  { 0x0067BAE0, &dk2::MyTextMB_vftable, "MyTextMB_vftable" },  /* auto */
  { 0x0067BAF8, &dk2::MyTextFont_vftable, "MyTextFont_vftable" },  /* auto */
  { 0x0067BB28, &dk2::MyFontRendererBase_vftable, "MyFontRendererBase_vftable" },  /* auto */
  { 0x0067BEE0, &dk2::String1, "String1" },  // ----------  /* auto */
  { 0x0067CB48, &dk2::c_dfDIMouse, "c_dfDIMouse" },  // --  /* auto */
  { 0x0067CB60, &dk2::c_dfDIKeyboard, "c_dfDIKeyboard" },   /* auto */
  { 0x0068E000, &dk2::__xc_a_1, "__xc_a_1" },  // --------  /* auto */
  { 0x0068E348, &dk2::__xc_z_1, "__xc_z_1" },  // --------  /* auto */
  { 0x0068E34C, &dk2::First, "First" },  // --------------  /* auto */
  { 0x0068E35C, &dk2::Last, "Last" },  // ----------------  /* auto */
  { 0x0068E360, &dk2::__xt_a_0, "__xt_a_0" },  // --------  /* auto */
  { 0x0068E368, &dk2::__xt_z_0, "__xt_z_0" },  // --------  /* auto */
  { 0x0068E36C, &dk2::__xt_a_1, "__xt_a_1" },  // --------  /* auto */
  { 0x0068E374, &dk2::__xt_z_1, "__xt_z_1" },  // --------  /* auto */
  { 0x00693EF8, &dk2::gameView, "gameView" },  // --------  /* auto */
  { 0x006945C8, &dk2::Game_EscMenu_BtnArr, "Game_EscMenu_BtnArr" },  /* auto */
  { 0x00694898, &dk2::Game_Load_BtnArr, "Game_Load_BtnArr" },  /* auto */
  { 0x00694A28, &dk2::Game_Save_BtnArr, "Game_Save_BtnArr" },  /* auto */
  { 0x00694C08, &dk2::Game_Options_BtnArr, "Game_Options_BtnArr" },  /* auto */
  { 0x00694E88, &dk2::Game_GraphicsOptions_BtnArr, "Game_GraphicsOptions_BtnArr" },  /* auto */
  { 0x006952E8, &dk2::Game_SoundOptions_BtnArr, "Game_SoundOptions_BtnArr" },  /* auto */
  { 0x00695A18, &dk2::Game_AdvancedSoundOptions_BtnArr, "Game_AdvancedSoundOptions_BtnArr" },  /* auto */
  { 0x00696828, &dk2::Game_EndGame_BtnArr, "Game_EndGame_BtnArr" },  /* auto */
  { 0x00696A08, &dk2::Game_Confirm_BtnArr, "Game_Confirm_BtnArr" },  /* auto */
  { 0x00696BE8, &dk2::Game_EscMenu_WinCfg, "Game_EscMenu_WinCfg" },  /* auto */
  { 0x00696C30, &dk2::Game_Load_WinCfg, "Game_Load_WinCfg" },  /* auto */
  { 0x00696C78, &dk2::Game_Save_WinCfg, "Game_Save_WinCfg" },  /* auto */
  { 0x00696CC0, &dk2::Game_Options_WinCfg, "Game_Options_WinCfg" },  /* auto */
  { 0x00696D08, &dk2::Game_GraphicsOptions_WinCfg, "Game_GraphicsOptions_WinCfg" },  /* auto */
  { 0x00696D50, &dk2::Game_SoundOptions_WinCfg, "Game_SoundOptions_WinCfg" },  /* auto */
  { 0x00696D98, &dk2::Game_AdvancedSoundOptions_WinCfg, "Game_AdvancedSoundOptions_WinCfg" },  /* auto */
  { 0x00696F48, &dk2::Game_EndGame_WinCfg, "Game_EndGame_WinCfg" },  /* auto */
  { 0x00696F90, &dk2::Game_Confirm_WinCfg, "Game_Confirm_WinCfg" },  /* auto */
  { 0x006A54B8, &dk2::actionRecords, "actionRecords" },     /* auto */
  { 0x006AC8A0, &dk2::nameList, "nameList" },  // --------  /* auto */
  { 0x006AD170, &dk2::g_curFontObj, "g_curFontObj" },       /* auto */
  { 0x006AD610, &dk2::Main_Main_WinCfg, "Main_Main_WinCfg" },  /* auto */
  { 0x006AD658, &dk2::Main_SinglePlayer_WinCfg, "Main_SinglePlayer_WinCfg" },  /* auto */
  { 0x006AD6A0, &dk2::Main_Scrimish_WinCfg, "Main_Scrimish_WinCfg" },  /* auto */
  { 0x006AD7C0, &dk2::Main_Main_BtnArr, "Main_Main_BtnArr" },  /* auto */
  { 0x006ADAE0, &dk2::Main_SinglePlayer_BtnArr, "Main_SinglePlayer_BtnArr" },  /* auto */
  { 0x006ADD10, &dk2::Main_Scrimish_BtnArr, "Main_Scrimish_BtnArr" },  /* auto */
  { 0x006AE4E0, &dk2::mainView, "mainView" },  // --------  /* auto */
  { 0x006AF430, &dk2::bundledScoreList, "bundledScoreList" },  /* auto */
  { 0x006B1FE8, &dk2::Main_Extras_WinCfg, "Main_Extras_WinCfg" },  /* auto */
  { 0x006B2030, &dk2::Main_TodaysTopKeepers_WinCfg, "Main_TodaysTopKeepers_WinCfg" },  /* auto */
  { 0x006B2078, &dk2::Main_Extras_BtnArr, "Main_Extras_BtnArr" },  /* auto */
  { 0x006B22A8, &dk2::Main_TodaysTopKeepers_BtnArr, "Main_TodaysTopKeepers_BtnArr" },  /* auto */
  { 0x006B5AD0, &dk2::Main_GraphicsOptions_WinCfg, "Main_GraphicsOptions_WinCfg" },  /* auto */
  { 0x006B5B18, &dk2::Main_SoundOptions_WinCfg, "Main_SoundOptions_WinCfg" },  /* auto */
  { 0x006B5B60, &dk2::Main_ControlOptions_WinCfg, "Main_ControlOptions_WinCfg" },  /* auto */
  { 0x006B5D88, &dk2::Main_GraphicsOptions_BtnArr, "Main_GraphicsOptions_BtnArr" },  /* auto */
  { 0x006B63C8, &dk2::Main_SoundOptions_BtnArr, "Main_SoundOptions_BtnArr" },  /* auto */
  { 0x006B6AF8, &dk2::Main_ControlOptions_BtnArr, "Main_ControlOptions_BtnArr" },  /* auto */
  { 0x006B7060, &dk2::Main_Multiplayer_WinCfg, "Main_Multiplayer_WinCfg" },  /* auto */
  { 0x006B70A8, &dk2::Main_MultiplayerWinsock_WinCfg, "Main_MultiplayerWinsock_WinCfg" },  /* auto */
  { 0x006B7310, &dk2::Main_MultiplayerWinsock_BtnArr, "Main_MultiplayerWinsock_BtnArr" },  /* auto */
  { 0x006BB1C8, &dk2::Main_LoadGame_WinCfg, "Main_LoadGame_WinCfg" },  /* auto */
  { 0x006BB210, &dk2::Main_LoadGame_BtnArr, "Main_LoadGame_BtnArr" },  /* auto */
  { 0x006BD048, &dk2::g_keyMap, "g_keyMap" },  // --------  /* auto */
  { 0x006BEA30, &dk2::mpeg2_DClumtab, "mpeg2_DClumtab" },   /* auto */
  { 0x006BEA80, &dk2::mpeg2_dct_code_tab1, "mpeg2_dct_code_tab1" },  /* auto */
  { 0x006BEB20, &dk2::mpeg2_dct_code_tab2, "mpeg2_dct_code_tab2" },  /* auto */
  { 0x006BEC50, &dk2::mpeg2_dct_code_tab1a, "mpeg2_dct_code_tab1a" },  /* auto */
  { 0x006BECF0, &dk2::mpeg2_dct_code_tab2a, "mpeg2_dct_code_tab2a" },  /* auto */
  { 0x006C40F8, &dk2::libpng_png_sig, "libpng_png_sig" },   /* auto */
  { 0x006C4188, &dk2::libpng_png_pass_start, "libpng_png_pass_start" },  /* auto */
  { 0x006C41A8, &dk2::libpng_png_pass_inc, "libpng_png_pass_inc" },  /* auto */
  { 0x006C41C8, &dk2::libpng_png_pass_ystart, "libpng_png_pass_ystart" },  /* auto */
  { 0x006C41E8, &dk2::libpng_png_pass_yinc, "libpng_png_pass_yinc" },  /* auto */
  { 0x006C4208, &dk2::libpng_png_pass_mask, "libpng_png_pass_mask" },  /* auto */
  { 0x006C4228, &dk2::libpng_png_pass_dsp_mask, "libpng_png_pass_dsp_mask" },  /* auto */
  { 0x006C43D8, &dk2::libpng_png_gamma_shift, "libpng_png_gamma_shift" },  /* auto */
  { 0x006C5408, &dk2::arr_6C5408, "arr_6C5408" },  // ----  /* auto */
  { 0x006C8E30, &dk2::g_renderers, "g_renderers" },  // --  /* auto */
  { 0x006C8EA8, &dk2::g_MyText_constructors, "g_MyText_constructors" },  /* auto */
  { 0x006C8FD8, &dk2::File, "File" },  // ----------------  /* auto */
  { 0x006C8FF8, &dk2::crt_stderr, "crt_stderr" },  // ----  /* auto */
  { 0x006C9300, &dk2::dwTlsIndex_ThreadCtx, "dwTlsIndex_ThreadCtx" },  /* auto */
  { 0x006C9490, &dk2::__ctype, "__ctype" },  // ----------  /* auto */
  { 0x006C9694, &dk2::SrcSizeInBytes, "SrcSizeInBytes" },   /* auto */
  { 0x006C9AB4, &dk2::lpMem, "lpMem" },  // --------------  /* auto */
  { 0x006CBC0C, &dk2::lpBuffer, "lpBuffer" },  // --------  /* auto */
  { 0x006CC648, &dk2::Dest, "Dest" },  // ----------------  /* auto */
  { 0x006CCA20, &dk2::CEntryComponent_instance, "CEntryComponent_instance" },  /* auto */
  { 0x006CCA60, &dk2::myDdSurfaceArr_x15, "myDdSurfaceArr_x15" },  /* auto */
  { 0x006CD0F0, &dk2::myDdSurface_end, "myDdSurface_end" },  /* auto */
  { 0x006CE850, &dk2::my_surf, "my_surf" },  // ----------  /* auto */
  { 0x006CEA10, &dk2::CDefaultPlayerInterface_instance, "CDefaultPlayerInterface_instance" },  /* auto */
  { 0x006D3954, &dk2::S2, "S2" },  // --------------------  /* auto */
  { 0x006D3CC8, &dk2::CBridge_instance, "CBridge_instance" },  /* auto */
  { 0x006D6458, &dk2::sceneLightningObjects, "sceneLightningObjects" },  /* auto */
  { 0x006DA458, &dk2::g_pCBridge_0, "g_pCBridge_0" },       /* auto */
  { 0x006DA8A8, &dk2::g_empty_string, "g_empty_string" },   /* auto */
  { 0x006E4FD8, &dk2::funcs_4A8BE5, "funcs_4A8BE5" },       /* auto */
  { 0x006E5054, &dk2::g_pCWorld, "g_pCWorld" },  // ------  /* auto */
  { 0x006EB988, &dk2::Stream, "Stream" },  // ------------  /* auto */
  { 0x006ECA60, &dk2::Obj6ECA60_instance, "Obj6ECA60_instance" },  /* auto */
  { 0x006ECAE0, &dk2::Obj6ECAE0_instance, "Obj6ECAE0_instance" },  /* auto */
  { 0x006ED540, &dk2::sceneObjectsPresent, "sceneObjectsPresent" },  /* auto */
  { 0x006EE540, &dk2::sceneObjects, "sceneObjects" },       /* auto */
  { 0x006F2548, &dk2::status, "status" },  // ------------  /* auto */
  { 0x006F2A08, &dk2::CWorld_instance_start, "CWorld_instance_start" },  /* auto */
  { 0x006FCDCB, &dk2::strId, "strId" },  // --------------  /* auto */
  { 0x006FCEC0, &dk2::CLocalCommunication_instance, "CLocalCommunication_instance" },  /* auto */
  { 0x006FD120, &dk2::CNetworkCommunication_instance, "CNetworkCommunication_instance" },  /* auto */
  { 0x0070D138, &dk2::CGameComponent_instance, "CGameComponent_instance" },  /* auto */
  { 0x0070D468, &dk2::CNetworkComponent_instance, "CNetworkComponent_instance" },  /* auto */
  { 0x0070D4A8, &dk2::g_mySurface_0, "g_mySurface_0" },     /* auto */
  { 0x0070D4D0, &dk2::a3, "a3" },  // --------------------  /* auto */
  { 0x0070D578, &dk2::d70D578_x30, "d70D578_x30" },  // --  /* auto */
  { 0x0070D608, &dk2::g_lazy_off_70D608, "g_lazy_off_70D608" },  /* auto */
  { 0x0070D688, &dk2::buttonHighlight_x30, "buttonHighlight_x30" },  /* auto */
  { 0x0070D6D8, &dk2::CFrontEndComponent_instance, "CFrontEndComponent_instance" },  /* auto */
  { 0x0073E9A0, &dk2::b73E9A0_x30, "b73E9A0_x30" },  // --  /* auto */
  { 0x0073E9D8, &dk2::g_mySurface_p2, "g_mySurface_p2" },   /* auto */
  { 0x0073EDD4, &dk2::lpDD_ref1, "lpDD_ref1" },  // ------  /* auto */
  { 0x0073EDDC, &dk2::p_IDirectDrawSurface2, "p_IDirectDrawSurface2" },  /* auto */
  { 0x0073EDE0, &dk2::p_IDirectDrawSurface2_2, "p_IDirectDrawSurface2_2" },  /* auto */
  { 0x0073F580, &dk2::CFrontEndComponent_ShowMovie_static_listeners, "CFrontEndComponent_ShowMovie_static_listeners" },  /* auto */
  { 0x0073FC24, &dk2::SrcStr, "SrcStr" },  // ------------  /* auto */
  { 0x0073FE78, &dk2::Block, "Block" },  // --------------  /* auto */
  { 0x0074033C, &dk2::lpMultiByteStr, "lpMultiByteStr" },   /* auto */
  { 0x00740340, &dk2::BtnSize, "BtnSize" },  // ----------  /* auto */
  { 0x00740B80, &dk2::g_FontObj6_instance, "g_FontObj6_instance" },  /* auto */
  { 0x00740BD0, &dk2::g_FontObj3_instance, "g_FontObj3_instance" },  /* auto */
  { 0x00740C20, &dk2::temp_string, "temp_string" },  // --  /* auto */
  { 0x00740E20, &dk2::g_FontObj9_instance, "g_FontObj9_instance" },  /* auto */
  { 0x00740E70, &dk2::g_FontObj1_instance, "g_FontObj1_instance" },  /* auto */
  { 0x007410C0, &dk2::MyLangObj_lang_instance, "MyLangObj_lang_instance" },  /* auto */
  { 0x007410D0, &dk2::FontObj_1_instance, "FontObj_1_instance" },  /* auto */
  { 0x00741120, &dk2::MBStr_741120, "MBStr_741120" },       /* auto */
  { 0x00741320, &dk2::FontObj_3_instance, "FontObj_3_instance" },  /* auto */
  { 0x00741370, &dk2::FontObj_2_instance, "FontObj_2_instance" },  /* auto */
  { 0x007413C0, &dk2::g_FontObj2_instance, "g_FontObj2_instance" },  /* auto */
  { 0x00741410, &dk2::g_FontObj8_instance, "g_FontObj8_instance" },  /* auto */
  { 0x00741460, &dk2::g_FontObj4_instance, "g_FontObj4_instance" },  /* auto */
  { 0x007414B0, &dk2::g_FontObj7_instance, "g_FontObj7_instance" },  /* auto */
  { 0x00741500, &dk2::g_FontObj5_instance, "g_FontObj5_instance" },  /* auto */
  { 0x00741550, &dk2::g_pMyTextText_idx1091, "g_pMyTextText_idx1091" },  /* auto */
  { 0x00741554, &dk2::g_pMyTextText_idx1056_1081, "g_pMyTextText_idx1056_1081" },  /* auto */
  { 0x00741558, &dk2::g_pMyTextText_idx1000_1023, "g_pMyTextText_idx1000_1023" },  /* auto */
  { 0x0074155C, &dk2::g_pMyTextText_idx1090, "g_pMyTextText_idx1090" },  /* auto */
  { 0x0074156C, &dk2::g_pMyFontText1, "g_pMyFontText1" },   /* auto */
  { 0x00741570, &dk2::g_pMyFontText2, "g_pMyFontText2" },   /* auto */
  { 0x00741574, &dk2::g_pMyFontText3, "g_pMyFontText3" },   /* auto */
  { 0x00741578, &dk2::g_pMyFontText4, "g_pMyFontText4" },   /* auto */
  { 0x0074157C, &dk2::g_pMyFontText5, "g_pMyFontText5" },   /* auto */
  { 0x00741580, &dk2::g_pMyFontText6, "g_pMyFontText6" },   /* auto */
  { 0x00741584, &dk2::g_pMyFontText7, "g_pMyFontText7" },   /* auto */
  { 0x00741588, &dk2::g_pMyFontText8, "g_pMyFontText8" },   /* auto */
  { 0x0074158C, &dk2::g_pMyFontText9, "g_pMyFontText9" },   /* auto */
  { 0x00741594, &dk2::g_pMyTextText_idx1024, "g_pMyTextText_idx1024" },  /* auto */
  { 0x00741598, &dk2::g_pMyTextText_idx1025, "g_pMyTextText_idx1025" },  /* auto */
  { 0x0074159C, &dk2::g_pMyTextText_idx1026, "g_pMyTextText_idx1026" },  /* auto */
  { 0x007415A0, &dk2::g_pMyTextText_idx1027, "g_pMyTextText_idx1027" },  /* auto */
  { 0x007415A4, &dk2::g_pMyTextText_idx1028, "g_pMyTextText_idx1028" },  /* auto */
  { 0x007415A8, &dk2::g_pMyTextText_idx1029, "g_pMyTextText_idx1029" },  /* auto */
  { 0x007415C0, &dk2::Buffer, "Buffer" },  // ------------  /* auto */
  { 0x007416C8, &dk2::TbBMPLoader_instance, "TbBMPLoader_instance" },  /* auto */
  { 0x00741C28, &dk2::TbPNGLoader_instance, "TbPNGLoader_instance" },  /* auto */
  { 0x00742070, &dk2::TbTQILoader_instance, "TbTQILoader_instance" },  /* auto */
  { 0x00756EC8, &dk2::client_rect, "client_rect" },  // --  /* auto */
  { 0x00756EE8, &dk2::MyGame_instance, "MyGame_instance" },  /* auto */
  { 0x00758048, &dk2::ddraw_device_count, "ddraw_device_count" },  /* auto */
  { 0x00758050, &dk2::ddraw_devices, "ddraw_devices" },     /* auto */
  { 0x00758160, &dk2::pMldPlay_instance, "pMldPlay_instance" },  /* auto */
  { 0x00758340, &dk2::MyResources_instance, "MyResources_instance" },  /* auto */
  { 0x0075B310, &dk2::formattedString, "formattedString" },  /* auto */
  { 0x0075B418, &dk2::Data, "Data" },  // ----------------  /* auto */
  { 0x0075B468, &dk2::MySound_ptr, "MySound_ptr" },  // --  /* auto */
  { 0x0075B880, &dk2::CSoundSystem_instance, "CSoundSystem_instance" },  /* auto */
  { 0x0075BA60, &dk2::String, "String" },  // ------------  /* auto */
  { 0x0075CA68, &dk2::g2_sceneWidth, "g2_sceneWidth" },     /* auto */
  { 0x00760B0C, &dk2::dd_gamma_control, "dd_gamma_control" },  /* auto */
  { 0x00760B44, &dk2::g2_sceneHeight, "g2_sceneHeight" },   /* auto */
  { 0x00764B90, &dk2::mydd, "mydd" },  // ----------------  /* auto */
  { 0x00764BE8, &dk2::gamma_ramp, "gamma_ramp" },  // ----  /* auto */
  { 0x00765224, &dk2::g_pCEngine2DPrimitive, "g_pCEngine2DPrimitive" },  /* auto */
  { 0x007656E8, &dk2::MyStringHashMap_MyScaledSurface_instance, "MyStringHashMap_MyScaledSurface_instance" },  /* auto */
  { 0x00765AF8, &dk2::MyEntryBuf_MyScaledSurface_instance, "MyEntryBuf_MyScaledSurface_instance" },  /* auto */
  { 0x00765B18, &dk2::MyHeap_increaseBlocks, "MyHeap_increaseBlocks" },  /* auto */
  { 0x00765DA0, &dk2::MyHeap_bufArr, "MyHeap_bufArr" },     /* auto */
  { 0x00766228, &dk2::CMemLoadIFFFile_instance, "CMemLoadIFFFile_instance" },  /* auto */
  { 0x00766660, &dk2::MyStringHashMap_unkh18_instance, "MyStringHashMap_unkh18_instance" },  /* auto */
  { 0x00769A78, &dk2::arr_769A78, "arr_769A78" },  // ----  /* auto */
  { 0x0076AA80, &dk2::DrawTriangleList_lpwIndices, "DrawTriangleList_lpwIndices" },  /* auto */
  { 0x0076C280, &dk2::MyEntryBuf_Triangle24_instance, "MyEntryBuf_Triangle24_instance" },  /* auto */
  { 0x0076C28C, &dk2::g_flexibleVertices, "g_flexibleVertices" },  /* auto */
  { 0x0076C294, &dk2::mgsr_currentDrawFlags, "mgsr_currentDrawFlags" },  /* auto */
  { 0x0076C298, &dk2::g_vertices, "g_vertices" },  // ----  /* auto */
  { 0x0076C2B8, &dk2::mydd_cpy, "mydd_cpy" },  // --------  /* auto */
  { 0x0076C2F0, &dk2::lastSceneObject, "lastSceneObject" },  /* auto */
  { 0x0076C2F8, &dk2::sceneObj2E_f21_to_triangleIndices, "sceneObj2E_f21_to_triangleIndices" },  /* auto */
  { 0x0076D300, &dk2::MyEntryBuf_uint16_indices_instance, "MyEntryBuf_uint16_indices_instance" },  /* auto */
  { 0x0076D310, &dk2::drawnTrianglesArr, "drawnTrianglesArr" },  /* auto */
  { 0x0076F318, &dk2::MyEntryBuf_Triangle34_instance, "MyEntryBuf_Triangle34_instance" },  /* auto */
  { 0x0076F328, &dk2::MyEntryBuf_Vertex18_instance, "MyEntryBuf_Vertex18_instance" },  /* auto */
  { 0x0076F33C, &dk2::Triangle34_count, "Triangle34_count" },  /* auto */
  { 0x00779358, &dk2::__renderFun, "__renderFun" },  // --  /* auto */
  { 0x007793A8, &dk2::arr_7793A8, "arr_7793A8" },  // ----  /* auto */
  { 0x0077F3F0, &dk2::mydd_cpy2_buf, "mydd_cpy2_buf" },     /* auto */
  { 0x007820A8, &dk2::SceneObject2EList_instance, "SceneObject2EList_instance" },  /* auto */
  { 0x007820B8, &dk2::SceneObject30List_instance, "SceneObject30List_instance" },  /* auto */
  { 0x007820C4, &dk2::objectsToDraw_count, "objectsToDraw_count" },  /* auto */
  { 0x007820D0, &dk2::mpeg2__image_buf, "mpeg2__image_buf" },  /* auto */
  { 0x007920D0, &dk2::pSurfHashList2_2, "pSurfHashList2_2" },  /* auto */
  { 0x007920D4, &dk2::pSurfHashList2, "pSurfHashList2" },   /* auto */
  { 0x007920D8, &dk2::MyTextures_instance, "MyTextures_instance" },  /* auto */
  { 0x0079291C, &dk2::g_surfh_first, "g_surfh_first" },     /* auto */
  { 0x00792920, &dk2::MySurfDesc_792920, "MySurfDesc_792920" },  /* auto */
  { 0x00792938, &dk2::MyStringHashMap_MyCESurfHandle_instance, "MyStringHashMap_MyCESurfHandle_instance" },  /* auto */
  { 0x00792D48, &dk2::Obj792D48_instance, "Obj792D48_instance" },  /* auto */
  { 0x00792D60, &dk2::pSurfHashList, "pSurfHashList" },     /* auto */
  { 0x00792D68, &dk2::mydd_cpy3, "mydd_cpy3" },  // ------  /* auto */
  { 0x00792D98, &dk2::MyCEngineSurfDesc_argb32_instance, "MyCEngineSurfDesc_argb32_instance" },  /* auto */
  { 0x00792E62, &dk2::MyCEngineSurfDesc_unk16_instance, "MyCEngineSurfDesc_unk16_instance" },  /* auto */
  { 0x00792EC8, &dk2::sizeHashTable_257, "sizeHashTable_257" },  /* auto */
  { 0x007932CC, &dk2::g_surfh_last, "g_surfh_last" },       /* auto */
  { 0x00793388, &dk2::CPCEngineInterface_instance_start, "CPCEngineInterface_instance_start" },  /* auto */
  { 0x00795700, &dk2::g_pCBridge, "g_pCBridge" },  // ----  /* auto */
  { 0x00796170, &dk2::mpeg2_dc_dct_pred, "mpeg2_dc_dct_pred" },  /* auto */
  { 0x00797B74, &dk2::mgsr_buf_25635, "mgsr_buf_25635" },   /* auto */
  { 0x00797B7C, &dk2::mgsr_buf2_12835, "mgsr_buf2_12835" },  /* auto */
  { 0x0079CF90, &dk2::MyInputManagerCb_instance, "MyInputManagerCb_instance" },  /* auto */
  { 0x0079D020, &dk2::dd_hWnd, "dd_hWnd" },  // ----------  /* auto */
  { 0x0079D038, &dk2::g_renderSurfAabb, "g_renderSurfAabb" },  /* auto */
  { 0x0079D050, &dk2::g_surfAabb, "g_surfAabb" },  // ----  /* auto */
  { 0x0079D060, &dk2::g_myRenderSurface, "g_myRenderSurface" },  /* auto */
  { 0x0079D0A8, &dk2::PathName, "PathName" },  // --------  /* auto */
  { 0x0079D1D4, &dk2::lpDDAttachedSurface, "lpDDAttachedSurface" },  /* auto */
  { 0x0079D200, &dk2::g_fullscreen_ddSurf, "g_fullscreen_ddSurf" },  /* auto */
  { 0x0079D250, &dk2::DdModeList_instance, "DdModeList_instance" },  /* auto */
  { 0x0079D260, &dk2::bullfrogClassName, "bullfrogClassName" },  /* auto */
  { 0x0079D364, &dk2::g_pDdSurface_windowed, "g_pDdSurface_windowed" },  /* auto */
  { 0x0079D378, &dk2::g_dd_surface2, "g_dd_surface2" },     /* auto */
  { 0x0079D3C8, &dk2::hWnd, "hWnd" },  // ----------------  /* auto */
  { 0x0079D3CC, &dk2::hBullfrogWindow, "hBullfrogWindow" },  /* auto */
  { 0x0079D3D0, &dk2::lpDD, "lpDD" },  // ----------------  /* auto */
  { 0x0079D3D4, &dk2::lpDDPalette, "lpDDPalette" },  // --  /* auto */
  { 0x0079D3D8, &dk2::lpDDClipper, "lpDDClipper" },  // --  /* auto */
  { 0x0079D3E4, &dk2::selectedDDGuid, "selectedDDGuid" },   /* auto */
  { 0x0079D3F0, &dk2::lpSurfaceDD, "lpSurfaceDD" },  // --  /* auto */
  { 0x0079D830, &dk2::g_confSurfDesc, "g_confSurfDesc" },   /* auto */
  { 0x0079D980, &dk2::pathBuf, "pathBuf" },  // ----------  /* auto */
  { 0x0079DA88, &dk2::dk2HomeDir, "dk2HomeDir" },  // ----  /* auto */
  { 0x0079DBD0, &dk2::WinEventHandlers_instance, "WinEventHandlers_instance" },  /* auto */
  { 0x0079DC68, &dk2::Obj79DC68_instance, "Obj79DC68_instance" },  /* auto */
  { 0x0079F4F0, &dk2::tqi_byte_79F4F0, "tqi_byte_79F4F0" },  /* auto */
  { 0x0079F638, &dk2::CursorDrawer_instance, "CursorDrawer_instance" },  /* auto */
  { 0x0079F8A0, &dk2::tqi_dword_79F8A0, "tqi_dword_79F8A0" },  /* auto */
  { 0x0079F9A0, &dk2::tqi_dword_79F9A0, "tqi_dword_79F9A0" },  /* auto */
  { 0x0079FAA0, &dk2::tqi_dword_79FAA0, "tqi_dword_79FAA0" },  /* auto */
  { 0x0079FAC4, &dk2::tqi_dword_79FAC4, "tqi_dword_79FAC4" },  /* auto */
  { 0x0079FAE8, &dk2::tqi_dword_79FAE8, "tqi_dword_79FAE8" },  /* auto */
  { 0x0079FB0C, &dk2::tqi_dword_79FB0C, "tqi_dword_79FB0C" },  /* auto */
  { 0x0079FB30, &dk2::tqi_dword_79FB30, "tqi_dword_79FB30" },  /* auto */
  { 0x0079FB54, &dk2::tqi_dword_79FB54, "tqi_dword_79FB54" },  /* auto */
  { 0x0079FB78, &dk2::tqi_dword_79FB78, "tqi_dword_79FB78" },  /* auto */
  { 0x0079FB9C, &dk2::tqi_dword_79FB9C, "tqi_dword_79FB9C" },  /* auto */
  { 0x007A043C, &dk2::tqi_dword_7A043C, "tqi_dword_7A043C" },  /* auto */
  { 0x007A143C, &dk2::tqi_dword_7A143C, "tqi_dword_7A143C" },  /* auto */
  { 0x007A2440, &dk2::tqi_unk_7A2440, "tqi_unk_7A2440" },   /* auto */
  { 0x007A3440, &dk2::tqi_unk_7A3440, "tqi_unk_7A3440" },   /* auto */
  { 0x007A4440, &dk2::g_filePath, "g_filePath" },  // ----  /* auto */
  { 0x007A4548, &dk2::pszFileName, "pszFileName" },  // --  /* auto */
  { 0x007A53B8, &dk2::MyUnk674058_instance_start, "MyUnk674058_instance_start" },  /* auto */
  { 0x007A5570, &dk2::lpCriticalSection, "lpCriticalSection" },  /* auto */
  { 0x007A5610, &dk2::MyTR2_instance, "MyTR2_instance" },   /* auto */
  { 0x007A5614, &dk2::MyTR5_instance, "MyTR5_instance" },   /* auto */
  { 0x007A5618, &dk2::MyTR67B938_instance, "MyTR67B938_instance" },  /* auto */
  { 0x007A5628, &dk2::MyTR4_instance, "MyTR4_instance" },   /* auto */
  { 0x007A5660, &dk2::CriticalSection, "CriticalSection" },  /* auto */
  { 0x007A5678, &dk2::Target, "Target" },  // ------------  /* auto */
  { 0x007A5708, &dk2::g_environmentStrings, "g_environmentStrings" },  /* auto */
  { 0x007A57C8, &dk2::Filename, "Filename" },  // --------  /* auto */
  { 0x007A5AE0, &dk2::CodePage, "CodePage" },  // --------  /* auto */
  { 0x007A5AE4, &dk2::Locale, "Locale" },  // ------------  /* auto */
  { 0x007A5B04, &dk2::lpTopLevelExceptionFilter, "lpTopLevelExceptionFilter" },  /* auto */
  { 0x007A5B80, &dk2::TimeZoneInformation, "TimeZoneInformation" },  /* auto */
  { 0x007A5C34, &dk2::MessageBoxA_0, "MessageBoxA_0" },     /* auto */
  { 0x007A5C38, &dk2::GetActiveWindow, "GetActiveWindow" },  /* auto */
  { 0x007A5C3C, &dk2::GetLastActivePopup, "GetLastActivePopup" },  /* auto */
  { 0x007A5C60, &dk2::LCData, "LCData" },  // ------------  /* auto */
  { 0x007A5C88, &dk2::g_charBufferSize, "g_charBufferSize" },  /* auto */
  { 0x007A5C8C, &dk2::g_charBuffer, "g_charBuffer" },       /* auto */
  { 0x007A5DA0, &dk2::uNumber, "uNumber" },  // ----------  /* auto */
  { 0x007A5DA8, &dk2::hHeap, "hHeap" },  // --------------  /* auto */
  { 0x007A5DB0, &dk2::Addend, "Addend" },  // ------------  /* auto */
  { 0x007A6DC0, &dk2::Count, "Count" },  // --------------  /* auto */
  { 0x007A7020, &dk2::grpoly_mydd_buf, "grpoly_mydd_buf" },  /* auto */
  { 0x007A7024, &dk2::grpoly_mydd_buf2, "grpoly_mydd_buf2" },  /* auto */
  { 0x007A7040, &dk2::mgsr_pDrawFun, "mgsr_pDrawFun" },     /* auto */
  { 0x007A7208, &dk2::mgsr_pos_dst, "mgsr_pos_dst" },       /* auto */
  { 0x007A7210, &dk2::mgsr_qword_src, "mgsr_qword_src" },   /* auto */
  { 0x007A72D8, &dk2::mgsr_dword_7A72D8, "mgsr_dword_7A72D8" },  /* auto */
  { 0x007A72DC, &dk2::mgsr_dword_7A72DC, "mgsr_dword_7A72DC" },  /* auto */
  { 0x007A72E0, &dk2::mgsr_qword_7A72E0, "mgsr_qword_7A72E0" },  /* auto */
  { 0x007A74D8, &dk2::mgsr_dword_7A74D8, "mgsr_dword_7A74D8" },  /* auto */
  { 0x007A74DC, &dk2::mgsr_dword_7A74DC, "mgsr_dword_7A74DC" },  /* auto */
  { 0x007A74E0, &dk2::mgsr_qword_7A74E0, "mgsr_qword_7A74E0" },  /* auto */
  { 0x007A7710, &dk2::mgsr_dword_7A7710, "mgsr_dword_7A7710" },  /* auto */
  { 0x007AF048, &dk2::tqi_dbl_7AF048, "tqi_dbl_7AF048" },   /* auto */
  { 0x007AF4E0, &dk2::tqi_byte_7AF4E0, "tqi_byte_7AF4E0" },  /* auto */
  { 0x007AF680, &dk2::jpeg_zigzag2, "jpeg_zigzag2" },       /* auto */
};  // global_relink_refs[]  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
entry_t function_relink_refs[] = {  // -------------------  /* auto */
  { 0x00401000, (void *) &dk2::sub_401000, "sub_401000" },  /* auto */
  { 0x00401030, (void *) &dk2::CEntryComponent_static_init, "CEntryComponent_static_init" },  /* auto */
  { 0x00401050, (void *) &dk2::CEntryComponent_static_destroy, "CEntryComponent_static_destroy" },  /* auto */
  { 0x00401510, (void *) &dk2::sub_401510, "sub_401510" },  /* auto */
  { 0x00401570, (void *) &dk2::sub_401570, "sub_401570" },  /* auto */
  { 0x004015A0, (void *) &dk2::cmd_Game_setup, "cmd_Game_setup" },  /* auto */
  { 0x004015D0, (void *) &dk2::cmd_Gamepad_Setup, "cmd_Gamepad_Setup" },  /* auto */
  { 0x00401600, (void *) &dk2::cmd_FrontEnd_setup, "cmd_FrontEnd_setup" },  /* auto */
  { 0x00401660, (void *) &dk2::cmd_FrontEnd3D_setup, "cmd_FrontEnd3D_setup" },  /* auto */
  { 0x004016C0, (void *) &dk2::cmd_Network_setup, "cmd_Network_setup" },  /* auto */
  { 0x004016E0, (void *) &dk2::cmd_PacketLoad_setup, "cmd_PacketLoad_setup" },  /* auto */
  { 0x00401740, (void *) &dk2::cmd_PacketFreq_setup, "cmd_PacketFreq_setup" },  /* auto */
  { 0x00401770, (void *) &dk2::cmd_PacketSave_setup, "cmd_PacketSave_setup" },  /* auto */
  { 0x004017D0, (void *) &dk2::cmd_PacketRecording_setup, "cmd_PacketRecording_setup" },  /* auto */
  { 0x004017F0, (void *) &dk2::cmd_PacketList_setup, "cmd_PacketList_setup" },  /* auto */
  { 0x004018A0, (void *) &dk2::cmd_getVideoMode, "cmd_getVideoMode" },  /* auto */
  { 0x00401BF0, (void *) &dk2::cmd_VideoMode_set, "cmd_VideoMode_set" },  /* auto */
  { 0x004020B0, (void *) &dk2::cmd_Test_run, "cmd_Test_run" },  /* auto */
  { 0x004020E0, (void *) &dk2::cmd_D3D_list, "cmd_D3D_list" },  /* auto */
  { 0x00402180, (void *) &dk2::cmd_D3D_select, "cmd_D3D_select" },  /* auto */
  { 0x00402220, (void *) &dk2::cmd_3DEngines_list, "cmd_3DEngines_list" },  /* auto */
  { 0x004022E0, (void *) &dk2::cmd_3DEngines_set, "cmd_3DEngines_set" },  /* auto */
  { 0x004023B0, (void *) &dk2::cmd_getZBuffer, "cmd_getZBuffer" },  /* auto */
  { 0x004023F0, (void *) &dk2::cmd_selectLevel, "cmd_selectLevel" },  /* auto */
  { 0x00402470, (void *) &dk2::cmd_D3DDevices_list, "cmd_D3DDevices_list" },  /* auto */
  { 0x004024C0, (void *) &dk2::cmd_Spec_set, "cmd_Spec_set" },  /* auto */
  { 0x004024E0, (void *) &dk2::sub_4024E0, "sub_4024E0" },  /* auto */
  { 0x00402510, (void *) &dk2::sub_402510, "sub_402510" },  /* auto */
  { 0x00402540, (void *) &dk2::sub_402540, "sub_402540" },  /* auto */
  { 0x00402570, (void *) &dk2::sub_402570, "sub_402570" },  /* auto */
  { 0x004025B0, (void *) &dk2::sub_4025B0, "sub_4025B0" },  /* auto */
  { 0x004025F0, (void *) &dk2::sub_4025F0, "sub_4025F0" },  /* auto */
  { 0x00402630, (void *) &dk2::sub_402630, "sub_402630" },  /* auto */
  { 0x00402AD0, (void *) &dk2::ret_0_0args, "ret_0_0args" },  /* auto */
  { 0x00402BD0, (void *) &dk2::TbFontRenderCallback_destructor, "TbFontRenderCallback_destructor" },  /* auto */
  { 0x00403060, (void *) &dk2::sub_403060, "sub_403060" },  /* auto */
  { 0x00404E50, (void *) &dk2::sub_404E50, "sub_404E50" },  /* auto */
  { 0x00404EB0, (void *) &dk2::sub_404EB0, "sub_404EB0" },  /* auto */
  { 0x00405010, (void *) &dk2::CDefaultPlayerInterface_onKeyboardAction, "CDefaultPlayerInterface_onKeyboardAction" },  /* auto */
  { 0x00406530, (void *) &dk2::CDefaultPlayerInterface_onMouseAction, "CDefaultPlayerInterface_onMouseAction" },  /* auto */
  { 0x00409640, (void *) &dk2::CDefaultPlayerInterface_onWindowMsg, "CDefaultPlayerInterface_onWindowMsg" },  /* auto */
  { 0x00409740, (void *) &dk2::isGameKeyPressed, "isGameKeyPressed" },  /* auto */
  { 0x004097E0, (void *) &dk2::isActionKeyPressed, "isActionKeyPressed" },  /* auto */
  { 0x00409B10, (void *) &dk2::CDefaultPlayerInterface_WM_ACTIVATE_cb, "CDefaultPlayerInterface_WM_ACTIVATE_cb" },  /* auto */
  { 0x00409E30, (void *) &dk2::CDefaultPlayerInterface_chatCallback, "CDefaultPlayerInterface_chatCallback" },  /* auto */
  { 0x0040A9F0, (void *) &dk2::cmd_toggleGui, "cmd_toggleGui" },  /* auto */
  { 0x0040AA40, (void *) &dk2::sub_40AA40, "sub_40AA40" },  /* auto */
  { 0x0040B7F0, (void *) &dk2::CDefaultPlayerInterface_sub_40B7F0, "CDefaultPlayerInterface_sub_40B7F0" },  /* auto */
  { 0x0040C120, (void *) &dk2::sub_40C120, "sub_40C120" },  /* auto */
  { 0x0040C290, (void *) &dk2::sub_40C290, "sub_40C290" },  /* auto */
  { 0x0040D440, (void *) &dk2::ret_void_0args, "ret_void_0args" },  /* auto */
  { 0x0040D8F0, (void *) &dk2::CDefaultPlayerInterface_sub_40D8F0, "CDefaultPlayerInterface_sub_40D8F0" },  /* auto */
  { 0x0040E300, (void *) &dk2::sub_40E300, "sub_40E300" },  /* auto */
  { 0x0040E3C0, (void *) &dk2::sub_40E3C0, "sub_40E3C0" },  /* auto */
  { 0x0040E3F0, (void *) &dk2::sub_40E3F0, "sub_40E3F0" },  /* auto */
  { 0x0040E520, (void *) &dk2::sub_40E520, "sub_40E520" },  /* auto */
  { 0x0040E5E0, (void *) &dk2::sub_40E5E0, "sub_40E5E0" },  /* auto */
  { 0x0040E910, (void *) &dk2::CDefaultPlayerInterface_sub_40E910, "CDefaultPlayerInterface_sub_40E910" },  /* auto */
  { 0x00410710, (void *) &dk2::CDefaultPlayerInterface_static_init, "CDefaultPlayerInterface_static_init" },  /* auto */
  { 0x00410730, (void *) &dk2::CDefaultPlayerInterface_static_destroy, "CDefaultPlayerInterface_static_destroy" },  /* auto */
  { 0x00410740, (void *) &dk2::sub_410740, "sub_410740" },  /* auto */
  { 0x00410760, (void *) &dk2::sub_410760, "sub_410760" },  /* auto */
  { 0x00410780, (void *) &dk2::ObjCIME6CE998_static_init, "ObjCIME6CE998_static_init" },  /* auto */
  { 0x004107D0, (void *) &dk2::ObjCIME6CE998_static_destroy, "ObjCIME6CE998_static_destroy" },  /* auto */
  { 0x00410860, (void *) &dk2::BtnHandler_sub_410860, "BtnHandler_sub_410860" },  /* auto */
  { 0x00410990, (void *) &dk2::sub_410990, "sub_410990" },  /* auto */
  { 0x00410A60, (void *) &dk2::sub_410A60, "sub_410A60" },  /* auto */
  { 0x00410AE0, (void *) &dk2::sub_410AE0, "sub_410AE0" },  /* auto */
  { 0x00410BC0, (void *) &dk2::BtnHandler_sub_410BC0, "BtnHandler_sub_410BC0" },  /* auto */
  { 0x00410DE0, (void *) &dk2::sub_410DE0, "sub_410DE0" },  /* auto */
  { 0x00410FE0, (void *) &dk2::sub_410FE0, "sub_410FE0" },  /* auto */
  { 0x00411080, (void *) &dk2::sub_411080, "sub_411080" },  /* auto */
  { 0x00411140, (void *) &dk2::BtnHandler_sub_411140, "BtnHandler_sub_411140" },  /* auto */
  { 0x004113B0, (void *) &dk2::sub_4113B0, "sub_4113B0" },  /* auto */
  { 0x004115E0, (void *) &dk2::sub_4115E0, "sub_4115E0" },  /* auto */
  { 0x00411690, (void *) &dk2::sub_411690, "sub_411690" },  /* auto */
  { 0x004118B0, (void *) &dk2::BtnHandler_sub_4118B0, "BtnHandler_sub_4118B0" },  /* auto */
  { 0x00411900, (void *) &dk2::sub_411900, "sub_411900" },  /* auto */
  { 0x00411A80, (void *) &dk2::sub_411A80, "sub_411A80" },  /* auto */
  { 0x00412260, (void *) &dk2::sub_412260, "sub_412260" },  /* auto */
  { 0x004129A0, (void *) &dk2::sub_4129A0, "sub_4129A0" },  /* auto */
  { 0x004129E0, (void *) &dk2::sub_4129E0, "sub_4129E0" },  /* auto */
  { 0x00412FC0, (void *) &dk2::sub_412FC0, "sub_412FC0" },  /* auto */
  { 0x00414210, (void *) &dk2::sub_414210, "sub_414210" },  /* auto */
  { 0x00414400, (void *) &dk2::sub_414400, "sub_414400" },  /* auto */
  { 0x00414750, (void *) &dk2::sub_414750, "sub_414750" },  /* auto */
  { 0x00414850, (void *) &dk2::sub_414850, "sub_414850" },  /* auto */
  { 0x00414BC0, (void *) &dk2::sub_414BC0, "sub_414BC0" },  /* auto */
  { 0x00415880, (void *) &dk2::sub_415880, "sub_415880" },  /* auto */
  { 0x00416070, (void *) &dk2::BtnHandler_sub_416070, "BtnHandler_sub_416070" },  /* auto */
  { 0x004163F0, (void *) &dk2::BtnHandler_sub_4163F0, "BtnHandler_sub_4163F0" },  /* auto */
  { 0x00416480, (void *) &dk2::BtnHandler_sub_416480, "BtnHandler_sub_416480" },  /* auto */
  { 0x00416580, (void *) &dk2::BtnHandler_sub_416580, "BtnHandler_sub_416580" },  /* auto */
  { 0x00416680, (void *) &dk2::BtnHandler_sub_416680, "BtnHandler_sub_416680" },  /* auto */
  { 0x00416730, (void *) &dk2::BtnHandler_sub_416730, "BtnHandler_sub_416730" },  /* auto */
  { 0x004167D0, (void *) &dk2::BtnHandler_sub_4167D0, "BtnHandler_sub_4167D0" },  /* auto */
  { 0x00416980, (void *) &dk2::sub_416980, "sub_416980" },  /* auto */
  { 0x00416BB0, (void *) &dk2::sub_416BB0, "sub_416BB0" },  /* auto */
  { 0x00416C20, (void *) &dk2::BtnHandler_sub_416C20, "BtnHandler_sub_416C20" },  /* auto */
  { 0x00416E20, (void *) &dk2::sub_416E20, "sub_416E20" },  /* auto */
  { 0x00417730, (void *) &dk2::sub_417730, "sub_417730" },  /* auto */
  { 0x004177B0, (void *) &dk2::sub_4177B0, "sub_4177B0" },  /* auto */
  { 0x004177D0, (void *) &dk2::sub_4177D0, "sub_4177D0" },  /* auto */
  { 0x00417850, (void *) &dk2::sub_417850, "sub_417850" },  /* auto */
  { 0x00417B40, (void *) &dk2::sub_417B40, "sub_417B40" },  /* auto */
  { 0x00417EA0, (void *) &dk2::sub_417EA0, "sub_417EA0" },  /* auto */
  { 0x00417F60, (void *) &dk2::sub_417F60, "sub_417F60" },  /* auto */
  { 0x00418080, (void *) &dk2::sub_418080, "sub_418080" },  /* auto */
  { 0x00418360, (void *) &dk2::sub_418360, "sub_418360" },  /* auto */
  { 0x00418A90, (void *) &dk2::sub_418A90, "sub_418A90" },  /* auto */
  { 0x00418DD0, (void *) &dk2::sub_418DD0, "sub_418DD0" },  /* auto */
  { 0x00418EE0, (void *) &dk2::sub_418EE0, "sub_418EE0" },  /* auto */
  { 0x0041A2B0, (void *) &dk2::BtnHanler_sub_41A2B0, "BtnHanler_sub_41A2B0" },  /* auto */
  { 0x0041A2D0, (void *) &dk2::BtnHandler_sub_41A2D0, "BtnHandler_sub_41A2D0" },  /* auto */
  { 0x0041A410, (void *) &dk2::CDefaultPlayerInterface_sub_41A410, "CDefaultPlayerInterface_sub_41A410" },  /* auto */
  { 0x0041A7D0, (void *) &dk2::BtnHandler_sub_41A7D0, "BtnHandler_sub_41A7D0" },  /* auto */
  { 0x0041EF70, (void *) &dk2::sub_41EF70, "sub_41EF70" },  /* auto */
  { 0x0041F920, (void *) &dk2::sub_41F920, "sub_41F920" },  /* auto */
  { 0x0041FFA0, (void *) &dk2::TbPNGLoader_load, "TbPNGLoader_load" },  /* auto */
  { 0x004201B0, (void *) &dk2::sub_4201B0, "sub_4201B0" },  /* auto */
  { 0x00420570, (void *) &dk2::ButtonCfg_ExitGameAction, "ButtonCfg_ExitGameAction" },  /* auto */
  { 0x004205B0, (void *) &dk2::ButtonCfg_ConfirmYesAction, "ButtonCfg_ConfirmYesAction" },  /* auto */
  { 0x00420770, (void *) &dk2::sub_420770, "sub_420770" },  /* auto */
  { 0x004207E0, (void *) &dk2::sub_4207E0, "sub_4207E0" },  /* auto */
  { 0x00422660, (void *) &dk2::sub_422660, "sub_422660" },  /* auto */
  { 0x00422820, (void *) &dk2::sub_422820, "sub_422820" },  /* auto */
  { 0x004229E0, (void *) &dk2::sub_4229E0, "sub_4229E0" },  /* auto */
  { 0x00422B70, (void *) &dk2::sub_422B70, "sub_422B70" },  /* auto */
  { 0x00423360, (void *) &dk2::sub_423360, "sub_423360" },  /* auto */
  { 0x00423450, (void *) &dk2::sub_423450, "sub_423450" },  /* auto */
  { 0x00423F50, (void *) &dk2::sub_423F50, "sub_423F50" },  /* auto */
  { 0x00424220, (void *) &dk2::sub_424220, "sub_424220" },  /* auto */
  { 0x004242F0, (void *) &dk2::sub_4242F0, "sub_4242F0" },  /* auto */
  { 0x00424660, (void *) &dk2::sub_424660, "sub_424660" },  /* auto */
  { 0x004246B0, (void *) &dk2::sub_4246B0, "sub_4246B0" },  /* auto */
  { 0x004246E0, (void *) &dk2::sub_4246E0, "sub_4246E0" },  /* auto */
  { 0x00424710, (void *) &dk2::sub_424710, "sub_424710" },  /* auto */
  { 0x00424720, (void *) &dk2::sub_424720, "sub_424720" },  /* auto */
  { 0x00424790, (void *) &dk2::sub_424790, "sub_424790" },  /* auto */
  { 0x004247F0, (void *) &dk2::sub_4247F0, "sub_4247F0" },  /* auto */
  { 0x00424810, (void *) &dk2::sub_424810, "sub_424810" },  /* auto */
  { 0x00424840, (void *) &dk2::sub_424840, "sub_424840" },  /* auto */
  { 0x00424EC0, (void *) &dk2::sub_424EC0, "sub_424EC0" },  /* auto */
  { 0x00424F50, (void *) &dk2::sub_424F50, "sub_424F50" },  /* auto */
  { 0x00424FB0, (void *) &dk2::sub_424FB0, "sub_424FB0" },  /* auto */
  { 0x00424FD0, (void *) &dk2::sub_424FD0, "sub_424FD0" },  /* auto */
  { 0x00425070, (void *) &dk2::sub_425070, "sub_425070" },  /* auto */
  { 0x004250F0, (void *) &dk2::sub_4250F0, "sub_4250F0" },  /* auto */
  { 0x004255F0, (void *) &dk2::sub_4255F0, "sub_4255F0" },  /* auto */
  { 0x004256B0, (void *) &dk2::sub_4256B0, "sub_4256B0" },  /* auto */
  { 0x00425AB0, (void *) &dk2::sub_425AB0, "sub_425AB0" },  /* auto */
  { 0x00425B50, (void *) &dk2::BtnHandler_sub_425B50, "BtnHandler_sub_425B50" },  /* auto */
  { 0x00425D40, (void *) &dk2::sub_425D40, "sub_425D40" },  /* auto */
  { 0x00425DF0, (void *) &dk2::sub_425DF0, "sub_425DF0" },  /* auto */
  { 0x00426000, (void *) &dk2::sub_426000, "sub_426000" },  /* auto */
  { 0x00426070, (void *) &dk2::sub_426070, "sub_426070" },  /* auto */
  { 0x004260F0, (void *) &dk2::sub_4260F0, "sub_4260F0" },  /* auto */
  { 0x004263E0, (void *) &dk2::sub_4263E0, "sub_4263E0" },  /* auto */
  { 0x00426650, (void *) &dk2::sub_426650, "sub_426650" },  /* auto */
  { 0x00426680, (void *) &dk2::BtnHandler_sub_426680, "BtnHandler_sub_426680" },  /* auto */
  { 0x00426730, (void *) &dk2::BtnHandler_sub_426730, "BtnHandler_sub_426730" },  /* auto */
  { 0x004267D0, (void *) &dk2::BtnHandler_sub_4267D0, "BtnHandler_sub_4267D0" },  /* auto */
  { 0x00426830, (void *) &dk2::sub_426830, "sub_426830" },  /* auto */
  { 0x004268A0, (void *) &dk2::BtnHandler_sub_4268A0, "BtnHandler_sub_4268A0" },  /* auto */
  { 0x00426920, (void *) &dk2::sub_426920, "sub_426920" },  /* auto */
  { 0x00426960, (void *) &dk2::sub_426960, "sub_426960" },  /* auto */
  { 0x004269D0, (void *) &dk2::sub_4269D0, "sub_4269D0" },  /* auto */
  { 0x00426A00, (void *) &dk2::sub_426A00, "sub_426A00" },  /* auto */
  { 0x00426B90, (void *) &dk2::sub_426B90, "sub_426B90" },  /* auto */
  { 0x00426C10, (void *) &dk2::BtnHandler_sub_426C10, "BtnHandler_sub_426C10" },  /* auto */
  { 0x00426CA0, (void *) &dk2::BtnHandler_sub_426CA0, "BtnHandler_sub_426CA0" },  /* auto */
  { 0x00427010, (void *) &dk2::sub_427010, "sub_427010" },  /* auto */
  { 0x00427230, (void *) &dk2::sub_427230, "sub_427230" },  /* auto */
  { 0x004273D0, (void *) &dk2::sub_4273D0, "sub_4273D0" },  /* auto */
  { 0x004274C0, (void *) &dk2::sub_4274C0, "sub_4274C0" },  /* auto */
  { 0x00427770, (void *) &dk2::sub_427770, "sub_427770" },  /* auto */
  { 0x00427870, (void *) &dk2::sub_427870, "sub_427870" },  /* auto */
  { 0x00427980, (void *) &dk2::sub_427980, "sub_427980" },  /* auto */
  { 0x004281D0, (void *) &dk2::BtnHandler_sub_4281D0, "BtnHandler_sub_4281D0" },  /* auto */
  { 0x00428230, (void *) &dk2::sub_428230, "sub_428230" },  /* auto */
  { 0x00428250, (void *) &dk2::sub_428250, "sub_428250" },  /* auto */
  { 0x00428360, (void *) &dk2::sub_428360, "sub_428360" },  /* auto */
  { 0x00428450, (void *) &dk2::sub_428450, "sub_428450" },  /* auto */
  { 0x004286E0, (void *) &dk2::sub_4286E0, "sub_4286E0" },  /* auto */
  { 0x00428710, (void *) &dk2::BtnHandler_sub_428710, "BtnHandler_sub_428710" },  /* auto */
  { 0x004288C0, (void *) &dk2::sub_4288C0, "sub_4288C0" },  /* auto */
  { 0x004289D0, (void *) &dk2::sub_4289D0, "sub_4289D0" },  /* auto */
  { 0x00428A30, (void *) &dk2::sub_428A30, "sub_428A30" },  /* auto */
  { 0x00428C30, (void *) &dk2::sub_428C30, "sub_428C30" },  /* auto */
  { 0x00428C60, (void *) &dk2::sub_428C60, "sub_428C60" },  /* auto */
  { 0x00428CD0, (void *) &dk2::sub_428CD0, "sub_428CD0" },  /* auto */
  { 0x00428E90, (void *) &dk2::sub_428E90, "sub_428E90" },  /* auto */
  { 0x00428F00, (void *) &dk2::sub_428F00, "sub_428F00" },  /* auto */
  { 0x00428F40, (void *) &dk2::sub_428F40, "sub_428F40" },  /* auto */
  { 0x00428F80, (void *) &dk2::sub_428F80, "sub_428F80" },  /* auto */
  { 0x00428FC0, (void *) &dk2::sub_428FC0, "sub_428FC0" },  /* auto */
  { 0x00428FF0, (void *) &dk2::sub_428FF0, "sub_428FF0" },  /* auto */
  { 0x00429160, (void *) &dk2::sub_429160, "sub_429160" },  /* auto */
  { 0x00429180, (void *) &dk2::sub_429180, "sub_429180" },  /* auto */
  { 0x004291E0, (void *) &dk2::sub_4291E0, "sub_4291E0" },  /* auto */
  { 0x00429350, (void *) &dk2::sub_429350, "sub_429350" },  /* auto */
  { 0x004293B0, (void *) &dk2::sub_4293B0, "sub_4293B0" },  /* auto */
  { 0x00429520, (void *) &dk2::sub_429520, "sub_429520" },  /* auto */
  { 0x00429570, (void *) &dk2::sub_429570, "sub_429570" },  /* auto */
  { 0x004296E0, (void *) &dk2::sub_4296E0, "sub_4296E0" },  /* auto */
  { 0x00429700, (void *) &dk2::sub_429700, "sub_429700" },  /* auto */
  { 0x00429870, (void *) &dk2::sub_429870, "sub_429870" },  /* auto */
  { 0x00429890, (void *) &dk2::sub_429890, "sub_429890" },  /* auto */
  { 0x00429A70, (void *) &dk2::sub_429A70, "sub_429A70" },  /* auto */
  { 0x00429AA0, (void *) &dk2::sub_429AA0, "sub_429AA0" },  /* auto */
  { 0x00429C10, (void *) &dk2::sub_429C10, "sub_429C10" },  /* auto */
  { 0x00429C30, (void *) &dk2::sub_429C30, "sub_429C30" },  /* auto */
  { 0x00429C90, (void *) &dk2::sub_429C90, "sub_429C90" },  /* auto */
  { 0x00429CD0, (void *) &dk2::sub_429CD0, "sub_429CD0" },  /* auto */
  { 0x00429D90, (void *) &dk2::sub_429D90, "sub_429D90" },  /* auto */
  { 0x00429F00, (void *) &dk2::BtnHandler_sub_429F00, "BtnHandler_sub_429F00" },  /* auto */
  { 0x00429F80, (void *) &dk2::sub_429F80, "sub_429F80" },  /* auto */
  { 0x0042A0F0, (void *) &dk2::sub_42A0F0, "sub_42A0F0" },  /* auto */
  { 0x0042A130, (void *) &dk2::sub_42A130, "sub_42A130" },  /* auto */
  { 0x0042A160, (void *) &dk2::sub_42A160, "sub_42A160" },  /* auto */
  { 0x0042A330, (void *) &dk2::sub_42A330, "sub_42A330" },  /* auto */
  { 0x0042A360, (void *) &dk2::sub_42A360, "sub_42A360" },  /* auto */
  { 0x0042A3B0, (void *) &dk2::sub_42A3B0, "sub_42A3B0" },  /* auto */
  { 0x0042A760, (void *) &dk2::sub_42A760, "sub_42A760" },  /* auto */
  { 0x0042A780, (void *) &dk2::sub_42A780, "sub_42A780" },  /* auto */
  { 0x0042A790, (void *) &dk2::sub_42A790, "sub_42A790" },  /* auto */
  { 0x0042A7D0, (void *) &dk2::sub_42A7D0, "sub_42A7D0" },  /* auto */
  { 0x0042A850, (void *) &dk2::sub_42A850, "sub_42A850" },  /* auto */
  { 0x0042A920, (void *) &dk2::sub_42A920, "sub_42A920" },  /* auto */
  { 0x0042A9F0, (void *) &dk2::sub_42A9F0, "sub_42A9F0" },  /* auto */
  { 0x0042AE40, (void *) &dk2::sub_42AE40, "sub_42AE40" },  /* auto */
  { 0x0042AE90, (void *) &dk2::sub_42AE90, "sub_42AE90" },  /* auto */
  { 0x0042AF20, (void *) &dk2::sub_42AF20, "sub_42AF20" },  /* auto */
  { 0x0042AF50, (void *) &dk2::sub_42AF50, "sub_42AF50" },  /* auto */
  { 0x0042AF80, (void *) &dk2::sub_42AF80, "sub_42AF80" },  /* auto */
  { 0x0042B0F0, (void *) &dk2::sub_42B0F0, "sub_42B0F0" },  /* auto */
  { 0x0042B110, (void *) &dk2::sub_42B110, "sub_42B110" },  /* auto */
  { 0x0042B280, (void *) &dk2::sub_42B280, "sub_42B280" },  /* auto */
  { 0x0042B2A0, (void *) &dk2::sub_42B2A0, "sub_42B2A0" },  /* auto */
  { 0x0042B410, (void *) &dk2::sub_42B410, "sub_42B410" },  /* auto */
  { 0x0042B440, (void *) &dk2::sub_42B440, "sub_42B440" },  /* auto */
  { 0x0042B5B0, (void *) &dk2::sub_42B5B0, "sub_42B5B0" },  /* auto */
  { 0x0042B5D0, (void *) &dk2::BtnHandler_sub_42B5D0, "BtnHandler_sub_42B5D0" },  /* auto */
  { 0x0042B660, (void *) &dk2::sub_42B660, "sub_42B660" },  /* auto */
  { 0x0042B6B0, (void *) &dk2::BtnHandler_sub_42B6B0, "BtnHandler_sub_42B6B0" },  /* auto */
  { 0x0042B710, (void *) &dk2::sub_42B710, "sub_42B710" },  /* auto */
  { 0x0042B750, (void *) &dk2::sub_42B750, "sub_42B750" },  /* auto */
  { 0x0042B770, (void *) &dk2::sub_42B770, "sub_42B770" },  /* auto */
  { 0x0042B7C0, (void *) &dk2::sub_42B7C0, "sub_42B7C0" },  /* auto */
  { 0x0042B950, (void *) &dk2::sub_42B950, "sub_42B950" },  /* auto */
  { 0x0042B9F0, (void *) &dk2::sub_42B9F0, "sub_42B9F0" },  /* auto */
  { 0x0042BA90, (void *) &dk2::sub_42BA90, "sub_42BA90" },  /* auto */
  { 0x0042C980, (void *) &dk2::sub_42C980, "sub_42C980" },  /* auto */
  { 0x0042C9B0, (void *) &dk2::RtGuiView_42C9B0, "RtGuiView_42C9B0" },  /* auto */
  { 0x0042CA70, (void *) &dk2::sub_42CA70, "sub_42CA70" },  /* auto */
  { 0x0042D1C0, (void *) &dk2::CDefaultPlayerInterface_CTextIconDraw_fun_42D1C0, "CDefaultPlayerInterface_CTextIconDraw_fun_42D1C0" },  /* auto */
  { 0x0042E140, (void *) &dk2::sub_42E140, "sub_42E140" },  /* auto */
  { 0x0042EA10, (void *) &dk2::sub_42EA10, "sub_42EA10" },  /* auto */
  { 0x0042F5E0, (void *) &dk2::sub_42F5E0, "sub_42F5E0" },  /* auto */
  { 0x0042F710, (void *) &dk2::sub_42F710, "sub_42F710" },  /* auto */
  { 0x0042F800, (void *) &dk2::sub_42F800, "sub_42F800" },  /* auto */
  { 0x0042FCE0, (void *) &dk2::_wmemset, "_wmemset" },      /* auto */
  { 0x004300A0, (void *) &dk2::_wmemmove, "_wmemmove" },    /* auto */
  { 0x00430110, (void *) &dk2::_wmemcpy, "_wmemcpy" },      /* auto */
  { 0x00430250, (void *) &dk2::sub_430250, "sub_430250" },  /* auto */
  { 0x00430F40, (void *) &dk2::sub_430F40, "sub_430F40" },  /* auto */
  { 0x00431400, (void *) &dk2::sub_431400, "sub_431400" },  /* auto */
  { 0x00431B70, (void *) &dk2::sub_431B70, "sub_431B70" },  /* auto */
  { 0x00432410, (void *) &dk2::sub_432410, "sub_432410" },  /* auto */
  { 0x004333F0, (void *) &dk2::sub_4333F0, "sub_4333F0" },  /* auto */
  { 0x00433BF0, (void *) &dk2::sub_433BF0, "sub_433BF0" },  /* auto */
  { 0x00433D50, (void *) &dk2::sub_433D50, "sub_433D50" },  /* auto */
  { 0x00433FC0, (void *) &dk2::sub_433FC0, "sub_433FC0" },  /* auto */
  { 0x00434110, (void *) &dk2::sub_434110, "sub_434110" },  /* auto */
  { 0x00435660, (void *) &dk2::Effect_cpp_435660, "Effect_cpp_435660" },  /* auto */
  { 0x00435720, (void *) &dk2::Effect_cpp_435720, "Effect_cpp_435720" },  /* auto */
  { 0x004384D0, (void *) &dk2::sub_4384D0, "sub_4384D0" },  /* auto */
  { 0x00439790, (void *) &dk2::sub_439790, "sub_439790" },  /* auto */
  { 0x0043A5E0, (void *) &dk2::CBridge_static_init, "CBridge_static_init" },  /* auto */
  { 0x0043A600, (void *) &dk2::CBridge_static_destroy, "CBridge_static_destroy" },  /* auto */
  { 0x0043A610, (void *) &dk2::Obj6D39B8_static_init, "Obj6D39B8_static_init" },  /* auto */
  { 0x0043A630, (void *) &dk2::Obj6D39B8_static_destroy, "Obj6D39B8_static_destroy" },  /* auto */
  { 0x0043A880, (void *) &dk2::sub_43A880, "sub_43A880" },  /* auto */
  { 0x0043A890, (void *) &dk2::sub_43A890, "sub_43A890" },  /* auto */
  { 0x0043A8A0, (void *) &dk2::ret_0_8args, "ret_0_8args" },  /* auto */
  { 0x0043E000, (void *) &dk2::sub_43E000, "sub_43E000" },  /* auto */
  { 0x0043E020, (void *) &dk2::unknown_libname_7, "unknown_libname_7" },  /* auto */
  { 0x0043E440, (void *) &dk2::sub_43E440, "sub_43E440" },  /* auto */
  { 0x004405A0, (void *) &dk2::sub_4405A0, "sub_4405A0" },  /* auto */
  { 0x00440640, (void *) &dk2::sub_440640, "sub_440640" },  /* auto */
  { 0x00440720, (void *) &dk2::sub_440720, "sub_440720" },  /* auto */
  { 0x004407D0, (void *) &dk2::sub_4407D0, "sub_4407D0" },  /* auto */
  { 0x00441870, (void *) &dk2::Bridge_cpp_441870, "Bridge_cpp_441870" },  /* auto */
  { 0x004419D0, (void *) &dk2::sub_4419D0, "sub_4419D0" },  /* auto */
  { 0x00443070, (void *) &dk2::CEngineInterface_fun_443070, "CEngineInterface_fun_443070" },  /* auto */
  { 0x00443090, (void *) &dk2::CEngineInterface_fun_443090, "CEngineInterface_fun_443090" },  /* auto */
  { 0x004430B0, (void *) &dk2::nullsub_21, "nullsub_21" },  /* auto */
  { 0x004430C0, (void *) &dk2::ret_0_5args, "ret_0_5args" },  /* auto */
  { 0x004430D0, (void *) &dk2::CEngineInterface_fun_4430D0, "CEngineInterface_fun_4430D0" },  /* auto */
  { 0x00443120, (void *) &dk2::CEngineInterface_fun_443120, "CEngineInterface_fun_443120" },  /* auto */
  { 0x00443150, (void *) &dk2::ret_0_2args, "ret_0_2args" },  /* auto */
  { 0x00443190, (void *) &dk2::sub_443190, "sub_443190" },  /* auto */
  { 0x00446800, (void *) &dk2::sub_446800, "sub_446800" },  /* auto */
  { 0x004472F0, (void *) &dk2::sub_4472F0, "sub_4472F0" },  /* auto */
  { 0x00447A70, (void *) &dk2::sub_447A70, "sub_447A70" },  /* auto */
  { 0x00447AB0, (void *) &dk2::CBridgeThing_fun_447AB0, "CBridgeThing_fun_447AB0" },  /* auto */
  { 0x0044D290, (void *) &dk2::unknown_libname_8, "unknown_libname_8" },  /* auto */
  { 0x0044D870, (void *) &dk2::sub_44D870, "sub_44D870" },  /* auto */
  { 0x0044DB70, (void *) &dk2::sub_44DB70, "sub_44DB70" },  /* auto */
  { 0x0044F800, (void *) &dk2::sub_44F800, "sub_44F800" },  /* auto */
  { 0x00450470, (void *) &dk2::sub_450470, "sub_450470" },  /* auto */
  { 0x004526C0, (void *) &dk2::sub_4526C0, "sub_4526C0" },  /* auto */
  { 0x00452970, (void *) &dk2::sub_452970, "sub_452970" },  /* auto */
  { 0x00452AB0, (void *) &dk2::sub_452AB0, "sub_452AB0" },  /* auto */
  { 0x00452B20, (void *) &dk2::sub_452B20, "sub_452B20" },  /* auto */
  { 0x00452F20, (void *) &dk2::sub_452F20, "sub_452F20" },  /* auto */
  { 0x00454FD0, (void *) &dk2::sub_454FD0, "sub_454FD0" },  /* auto */
  { 0x00455000, (void *) &dk2::sub_455000, "sub_455000" },  /* auto */
  { 0x004558F0, (void *) &dk2::sub_4558F0, "sub_4558F0" },  /* auto */
  { 0x00455D40, (void *) &dk2::sub_455D40, "sub_455D40" },  /* auto */
  { 0x004560F0, (void *) &dk2::sub_4560F0, "sub_4560F0" },  /* auto */
  { 0x00459C20, (void *) &dk2::sub_459C20, "sub_459C20" },  /* auto */
  { 0x0045AFC0, (void *) &dk2::sub_45AFC0, "sub_45AFC0" },  /* auto */
  { 0x00462850, (void *) &dk2::sub_462850, "sub_462850" },  /* auto */
  { 0x00463760, (void *) &dk2::sub_463760, "sub_463760" },  /* auto */
  { 0x00476060, (void *) &dk2::sub_476060, "sub_476060" },  /* auto */
  { 0x004762D0, (void *) &dk2::sub_4762D0, "sub_4762D0" },  /* auto */
  { 0x00477850, (void *) &dk2::sub_477850, "sub_477850" },  /* auto */
  { 0x004778E0, (void *) &dk2::sub_4778E0, "sub_4778E0" },  /* auto */
  { 0x004780C0, (void *) &dk2::CompareFunction, "CompareFunction" },  /* auto */
  { 0x00478680, (void *) &dk2::State_cpp_478680, "State_cpp_478680" },  /* auto */
  { 0x004787F0, (void *) &dk2::sub_4787F0, "sub_4787F0" },  /* auto */
  { 0x00478800, (void *) &dk2::sub_478800, "sub_478800" },  /* auto */
  { 0x00478B40, (void *) &dk2::__RTC_NumErrors, "__RTC_NumErrors" },  /* auto */
  { 0x00478F00, (void *) &dk2::sub_478F00, "sub_478F00" },  /* auto */
  { 0x004798E0, (void *) &dk2::sub_4798E0, "sub_4798E0" },  /* auto */
  { 0x004798F0, (void *) &dk2::sub_4798F0, "sub_4798F0" },  /* auto */
  { 0x0047BBD0, (void *) &dk2::sub_47BBD0, "sub_47BBD0" },  /* auto */
  { 0x0047BBE0, (void *) &dk2::sub_47BBE0, "sub_47BBE0" },  /* auto */
  { 0x004805F0, (void *) &dk2::sub_4805F0, "sub_4805F0" },  /* auto */
  { 0x00484940, (void *) &dk2::ret_0_0args_0, "ret_0_0args_0" },  /* auto */
  { 0x004859E0, (void *) &dk2::sub_4859E0, "sub_4859E0" },  /* auto */
  { 0x0048AB20, (void *) &dk2::sub_48AB20, "sub_48AB20" },  /* auto */
  { 0x0048CAD0, (void *) &dk2::sub_48CAD0, "sub_48CAD0" },  /* auto */
  { 0x0048F0F0, (void *) &dk2::sub_48F0F0, "sub_48F0F0" },  /* auto */
  { 0x00491C20, (void *) &dk2::sub_491C20, "sub_491C20" },  /* auto */
  { 0x004943E0, (void *) &dk2::nullsub_3, "nullsub_3" },    /* auto */
  { 0x00494470, (void *) &dk2::nullsub_4, "nullsub_4" },    /* auto */
  { 0x00494540, (void *) &dk2::nullsub_5, "nullsub_5" },    /* auto */
  { 0x004945C0, (void *) &dk2::nullsub_6, "nullsub_6" },    /* auto */
  { 0x00494640, (void *) &dk2::nullsub_7, "nullsub_7" },    /* auto */
  { 0x004946B0, (void *) &dk2::nullsub_13, "nullsub_13" },  /* auto */
  { 0x00495080, (void *) &dk2::sub_495080, "sub_495080" },  /* auto */
  { 0x004950B0, (void *) &dk2::sub_4950B0, "sub_4950B0" },  /* auto */
  { 0x004950C0, (void *) &dk2::sub_4950C0, "sub_4950C0" },  /* auto */
  { 0x00496DC0, (void *) &dk2::sub_496DC0, "sub_496DC0" },  /* auto */
  { 0x00499800, (void *) &dk2::sub_499800, "sub_499800" },  /* auto */
  { 0x0049A6C0, (void *) &dk2::sub_49A6C0, "sub_49A6C0" },  /* auto */
  { 0x0049A7A0, (void *) &dk2::Ctl3dAutoSubclass, "Ctl3dAutoSubclass" },  /* auto */
  { 0x0049D0B0, (void *) &dk2::sub_49D0B0, "sub_49D0B0" },  /* auto */
  { 0x0049E5F0, (void *) &dk2::sub_49E5F0, "sub_49E5F0" },  /* auto */
  { 0x0049E600, (void *) &dk2::sub_49E600, "sub_49E600" },  /* auto */
  { 0x004A3400, (void *) &dk2::sub_4A3400, "sub_4A3400" },  /* auto */
  { 0x004A3450, (void *) &dk2::sub_4A3450, "sub_4A3450" },  /* auto */
  { 0x004A3E90, (void *) &dk2::sub_4A3E90, "sub_4A3E90" },  /* auto */
  { 0x004A68A0, (void *) &dk2::CDoor_fun_4A68A0, "CDoor_fun_4A68A0" },  /* auto */
  { 0x004A7810, (void *) &dk2::sub_4A7810, "sub_4A7810" },  /* auto */
  { 0x004A7910, (void *) &dk2::sub_4A7910, "sub_4A7910" },  /* auto */
  { 0x004A7920, (void *) &dk2::sub_4A7920, "sub_4A7920" },  /* auto */
  { 0x004A8E70, (void *) &dk2::sub_4A8E70, "sub_4A8E70" },  /* auto */
  { 0x004A93A0, (void *) &dk2::sub_4A93A0, "sub_4A93A0" },  /* auto */
  { 0x004AB170, (void *) &dk2::CShot_sub_4AB170, "CShot_sub_4AB170" },  /* auto */
  { 0x004ABCA0, (void *) &dk2::sub_4ABCA0, "sub_4ABCA0" },  /* auto */
  { 0x004AD1A0, (void *) &dk2::sub_4AD1A0, "sub_4AD1A0" },  /* auto */
  { 0x004AD1B0, (void *) &dk2::sub_4AD1B0, "sub_4AD1B0" },  /* auto */
  { 0x004AE000, (void *) &dk2::sub_4AE000, "sub_4AE000" },  /* auto */
  { 0x004AEE50, (void *) &dk2::sub_4AEE50, "sub_4AEE50" },  /* auto */
  { 0x004B0A80, (void *) &dk2::sub_4B0A80, "sub_4B0A80" },  /* auto */
  { 0x004B1980, (void *) &dk2::sub_4B1980, "sub_4B1980" },  /* auto */
  { 0x004B1B50, (void *) &dk2::CActionPoint_sub_4B1B50, "CActionPoint_sub_4B1B50" },  /* auto */
  { 0x004B1F10, (void *) &dk2::j_j_CMap_fun_4B4C20, "j_j_CMap_fun_4B4C20" },  /* auto */
  { 0x004B2AC0, (void *) &dk2::j_CMap_fun_4B4C20, "j_CMap_fun_4B4C20" },  /* auto */
  { 0x004B35C0, (void *) &dk2::sub_4B35C0, "sub_4B35C0" },  /* auto */
  { 0x004B4C20, (void *) &dk2::ret_1_0args_0, "ret_1_0args_0" },  /* auto */
  { 0x004B5980, (void *) &dk2::sub_4B5980, "sub_4B5980" },  /* auto */
  { 0x004B59B0, (void *) &dk2::sub_4B59B0, "sub_4B59B0" },  /* auto */
  { 0x004B5C50, (void *) &dk2::CPhysicalThing_fun_4B5C50, "CPhysicalThing_fun_4B5C50" },  /* auto */
  { 0x004BB130, (void *) &dk2::Player_cpp_4BB130, "Player_cpp_4BB130" },  /* auto */
  { 0x004BFF60, (void *) &dk2::sub_4BFF60, "sub_4BFF60" },  /* auto */
  { 0x004C04C0, (void *) &dk2::sub_4C04C0, "sub_4C04C0" },  /* auto */
  { 0x004C06F0, (void *) &dk2::sub_4C06F0, "sub_4C06F0" },  /* auto */
  { 0x004C2C30, (void *) &dk2::sub_4C2C30, "sub_4C2C30" },  /* auto */
  { 0x004C3000, (void *) &dk2::sub_4C3000, "sub_4C3000" },  /* auto */
  { 0x004C3670, (void *) &dk2::sub_4C3670, "sub_4C3670" },  /* auto */
  { 0x004C3A20, (void *) &dk2::sub_4C3A20, "sub_4C3A20" },  /* auto */
  { 0x004C3B50, (void *) &dk2::sub_4C3B50, "sub_4C3B50" },  /* auto */
  { 0x004C4B90, (void *) &dk2::sub_4C4B90, "sub_4C4B90" },  /* auto */
  { 0x004C6510, (void *) &dk2::sub_4C6510, "sub_4C6510" },  /* auto */
  { 0x004C6610, (void *) &dk2::sub_4C6610, "sub_4C6610" },  /* auto */
  { 0x004C6AE0, (void *) &dk2::sub_4C6AE0, "sub_4C6AE0" },  /* auto */
  { 0x004C8AD0, (void *) &dk2::sub_4C8AD0, "sub_4C8AD0" },  /* auto */
  { 0x004C8B10, (void *) &dk2::sub_4C8B10, "sub_4C8B10" },  /* auto */
  { 0x004C8B50, (void *) &dk2::sub_4C8B50, "sub_4C8B50" },  /* auto */
  { 0x004C8BD0, (void *) &dk2::sub_4C8BD0, "sub_4C8BD0" },  /* auto */
  { 0x004C8D00, (void *) &dk2::sub_4C8D00, "sub_4C8D00" },  /* auto */
  { 0x004C8D10, (void *) &dk2::sub_4C8D10, "sub_4C8D10" },  /* auto */
  { 0x004C8F30, (void *) &dk2::sub_4C8F30, "sub_4C8F30" },  /* auto */
  { 0x004C8F50, (void *) &dk2::sub_4C8F50, "sub_4C8F50" },  /* auto */
  { 0x004C9080, (void *) &dk2::sub_4C9080, "sub_4C9080" },  /* auto */
  { 0x004C91A0, (void *) &dk2::sub_4C91A0, "sub_4C91A0" },  /* auto */
  { 0x004C9400, (void *) &dk2::sub_4C9400, "sub_4C9400" },  /* auto */
  { 0x004C9540, (void *) &dk2::sub_4C9540, "sub_4C9540" },  /* auto */
  { 0x004C9710, (void *) &dk2::sub_4C9710, "sub_4C9710" },  /* auto */
  { 0x004C97B0, (void *) &dk2::sub_4C97B0, "sub_4C97B0" },  /* auto */
  { 0x004C98B0, (void *) &dk2::sub_4C98B0, "sub_4C98B0" },  /* auto */
  { 0x004C9B50, (void *) &dk2::sub_4C9B50, "sub_4C9B50" },  /* auto */
  { 0x004C9C30, (void *) &dk2::sub_4C9C30, "sub_4C9C30" },  /* auto */
  { 0x004C9DF0, (void *) &dk2::sub_4C9DF0, "sub_4C9DF0" },  /* auto */
  { 0x004C9FC0, (void *) &dk2::sub_4C9FC0, "sub_4C9FC0" },  /* auto */
  { 0x004CA500, (void *) &dk2::sub_4CA500, "sub_4CA500" },  /* auto */
  { 0x004CA820, (void *) &dk2::sub_4CA820, "sub_4CA820" },  /* auto */
  { 0x004CAA50, (void *) &dk2::sub_4CAA50, "sub_4CAA50" },  /* auto */
  { 0x004CAF40, (void *) &dk2::sub_4CAF40, "sub_4CAF40" },  /* auto */
  { 0x004CB170, (void *) &dk2::sub_4CB170, "sub_4CB170" },  /* auto */
  { 0x004CB8C0, (void *) &dk2::sub_4CB8C0, "sub_4CB8C0" },  /* auto */
  { 0x004CBBD0, (void *) &dk2::sub_4CBBD0, "sub_4CBBD0" },  /* auto */
  { 0x004CBD10, (void *) &dk2::sub_4CBD10, "sub_4CBD10" },  /* auto */
  { 0x004CC120, (void *) &dk2::sub_4CC120, "sub_4CC120" },  /* auto */
  { 0x004CC190, (void *) &dk2::sub_4CC190, "sub_4CC190" },  /* auto */
  { 0x004CC3D0, (void *) &dk2::sub_4CC3D0, "sub_4CC3D0" },  /* auto */
  { 0x004CC650, (void *) &dk2::sub_4CC650, "sub_4CC650" },  /* auto */
  { 0x004CC850, (void *) &dk2::sub_4CC850, "sub_4CC850" },  /* auto */
  { 0x004CC9B0, (void *) &dk2::sub_4CC9B0, "sub_4CC9B0" },  /* auto */
  { 0x004CCB30, (void *) &dk2::sub_4CCB30, "sub_4CCB30" },  /* auto */
  { 0x004CCCB0, (void *) &dk2::sub_4CCCB0, "sub_4CCCB0" },  /* auto */
  { 0x004CCD50, (void *) &dk2::sub_4CCD50, "sub_4CCD50" },  /* auto */
  { 0x004CCF00, (void *) &dk2::sub_4CCF00, "sub_4CCF00" },  /* auto */
  { 0x004CCF70, (void *) &dk2::sub_4CCF70, "sub_4CCF70" },  /* auto */
  { 0x004CD000, (void *) &dk2::sub_4CD000, "sub_4CD000" },  /* auto */
  { 0x004CD490, (void *) &dk2::__workWithTriangles, "__workWithTriangles" },  /* auto */
  { 0x004CD920, (void *) &dk2::sub_4CD920, "sub_4CD920" },  /* auto */
  { 0x004CDF20, (void *) &dk2::sub_4CDF20, "sub_4CDF20" },  /* auto */
  { 0x004CDFE0, (void *) &dk2::sub_4CDFE0, "sub_4CDFE0" },  /* auto */
  { 0x004CE0C0, (void *) &dk2::sub_4CE0C0, "sub_4CE0C0" },  /* auto */
  { 0x004CE380, (void *) &dk2::sub_4CE380, "sub_4CE380" },  /* auto */
  { 0x004CE410, (void *) &dk2::sub_4CE410, "sub_4CE410" },  /* auto */
  { 0x004CE4E0, (void *) &dk2::sub_4CE4E0, "sub_4CE4E0" },  /* auto */
  { 0x004CE570, (void *) &dk2::sub_4CE570, "sub_4CE570" },  /* auto */
  { 0x004CE680, (void *) &dk2::sub_4CE680, "sub_4CE680" },  /* auto */
  { 0x004CE690, (void *) &dk2::sub_4CE690, "sub_4CE690" },  /* auto */
  { 0x004CE740, (void *) &dk2::sub_4CE740, "sub_4CE740" },  /* auto */
  { 0x004CE770, (void *) &dk2::sub_4CE770, "sub_4CE770" },  /* auto */
  { 0x004CEF20, (void *) &dk2::sub_4CEF20, "sub_4CEF20" },  /* auto */
  { 0x004CEF40, (void *) &dk2::sub_4CEF40, "sub_4CEF40" },  /* auto */
  { 0x004CF490, (void *) &dk2::sub_4CF490, "sub_4CF490" },  /* auto */
  { 0x004CFC50, (void *) &dk2::sub_4CFC50, "sub_4CFC50" },  /* auto */
  { 0x004CFDA0, (void *) &dk2::sub_4CFDA0, "sub_4CFDA0" },  /* auto */
  { 0x004CFFD0, (void *) &dk2::sub_4CFFD0, "sub_4CFFD0" },  /* auto */
  { 0x004D0150, (void *) &dk2::sub_4D0150, "sub_4D0150" },  /* auto */
  { 0x004D0240, (void *) &dk2::sub_4D0240, "sub_4D0240" },  /* auto */
  { 0x004D0320, (void *) &dk2::sub_4D0320, "sub_4D0320" },  /* auto */
  { 0x004D0E10, (void *) &dk2::sub_4D0E10, "sub_4D0E10" },  /* auto */
  { 0x004D0E60, (void *) &dk2::sub_4D0E60, "sub_4D0E60" },  /* auto */
  { 0x004D1170, (void *) &dk2::sub_4D1170, "sub_4D1170" },  /* auto */
  { 0x004D12B0, (void *) &dk2::sub_4D12B0, "sub_4D12B0" },  /* auto */
  { 0x004D15E0, (void *) &dk2::sub_4D15E0, "sub_4D15E0" },  /* auto */
  { 0x004D16B0, (void *) &dk2::sub_4D16B0, "sub_4D16B0" },  /* auto */
  { 0x004D1700, (void *) &dk2::sub_4D1700, "sub_4D1700" },  /* auto */
  { 0x004D1A40, (void *) &dk2::Obj6ECA70_static_init, "Obj6ECA70_static_init" },  /* auto */
  { 0x004D1A60, (void *) &dk2::Obj6ECA70_static_destroy, "Obj6ECA70_static_destroy" },  /* auto */
  { 0x004D1A70, (void *) &dk2::Obj6ECA60_static_init, "Obj6ECA60_static_init" },  /* auto */
  { 0x004D1AA0, (void *) &dk2::Obj6ECA60_static_destroy, "Obj6ECA60_static_destroy" },  /* auto */
  { 0x004D1AB0, (void *) &dk2::sub_4D1AB0, "sub_4D1AB0" },  /* auto */
  { 0x004D1B40, (void *) &dk2::sub_4D1B40, "sub_4D1B40" },  /* auto */
  { 0x004D1BC0, (void *) &dk2::sub_4D1BC0, "sub_4D1BC0" },  /* auto */
  { 0x004D1F10, (void *) &dk2::sub_4D1F10, "sub_4D1F10" },  /* auto */
  { 0x004D2070, (void *) &dk2::sub_4D2070, "sub_4D2070" },  /* auto */
  { 0x004D20F0, (void *) &dk2::sub_4D20F0, "sub_4D20F0" },  /* auto */
  { 0x004D2230, (void *) &dk2::sub_4D2230, "sub_4D2230" },  /* auto */
  { 0x004D2360, (void *) &dk2::Obj6ECAE0_static_init, "Obj6ECAE0_static_init" },  /* auto */
  { 0x004D2380, (void *) &dk2::Obj6ECAE0_static_destroy, "Obj6ECAE0_static_destroy" },  /* auto */
  { 0x004D23B0, (void *) &dk2::Obj6ECAD8_static_init, "Obj6ECAD8_static_init" },  /* auto */
  { 0x004D23D0, (void *) &dk2::Obj6ECAD8_static_destroy, "Obj6ECAD8_static_destroy" },  /* auto */
  { 0x004D23E0, (void *) &dk2::Seek_static_init, "Seek_static_init" },  /* auto */
  { 0x004D2440, (void *) &dk2::Seek_static_destroy, "Seek_static_destroy" },  /* auto */
  { 0x004D2450, (void *) &dk2::Arrival_static_init, "Arrival_static_init" },  /* auto */
  { 0x004D24B0, (void *) &dk2::Arrival_static_destroy, "Arrival_static_destroy" },  /* auto */
  { 0x004D24C0, (void *) &dk2::Separation_static_init, "Separation_static_init" },  /* auto */
  { 0x004D2520, (void *) &dk2::Separation_static_destroy, "Separation_static_destroy" },  /* auto */
  { 0x004D2530, (void *) &dk2::Avoid_Obstacle_static_init, "Avoid_Obstacle_static_init" },  /* auto */
  { 0x004D2590, (void *) &dk2::Avoid_Obstacle_static_destroy, "Avoid_Obstacle_static_destroy" },  /* auto */
  { 0x004D25A0, (void *) &dk2::Repel_Obstacle_static_init, "Repel_Obstacle_static_init" },  /* auto */
  { 0x004D2600, (void *) &dk2::Repel_Obstacle_static_destroy, "Repel_Obstacle_static_destroy" },  /* auto */
  { 0x004D2610, (void *) &dk2::Formation_static_init, "Formation_static_init" },  /* auto */
  { 0x004D2670, (void *) &dk2::Formation_static_destroy, "Formation_static_destroy" },  /* auto */
  { 0x004D2680, (void *) &dk2::Avoid_Walls_static_init, "Avoid_Walls_static_init" },  /* auto */
  { 0x004D26E0, (void *) &dk2::Avoid_Walls_static_destroy, "Avoid_Walls_static_destroy" },  /* auto */
  { 0x004D26F0, (void *) &dk2::Follow_Path_static_init, "Follow_Path_static_init" },  /* auto */
  { 0x004D2750, (void *) &dk2::Follow_Path_static_destroy, "Follow_Path_static_destroy" },  /* auto */
  { 0x004D2770, (void *) &dk2::sub_4D2770, "sub_4D2770" },  /* auto */
  { 0x004D2790, (void *) &dk2::sub_4D2790, "sub_4D2790" },  /* auto */
  { 0x004D27B0, (void *) &dk2::sub_4D27B0, "sub_4D27B0" },  /* auto */
  { 0x004D27D0, (void *) &dk2::sub_4D27D0, "sub_4D27D0" },  /* auto */
  { 0x004D27F0, (void *) &dk2::sub_4D27F0, "sub_4D27F0" },  /* auto */
  { 0x004D2850, (void *) &dk2::sub_4D2850, "sub_4D2850" },  /* auto */
  { 0x004D2A40, (void *) &dk2::Seek_fun_4D2A40, "Seek_fun_4D2A40" },  /* auto */
  { 0x004D2A60, (void *) &dk2::sub_4D2A60, "sub_4D2A60" },  /* auto */
  { 0x004D2B80, (void *) &dk2::sub_4D2B80, "sub_4D2B80" },  /* auto */
  { 0x004D2DF0, (void *) &dk2::Separation_fun_4D2DF0, "Separation_fun_4D2DF0" },  /* auto */
  { 0x004D3020, (void *) &dk2::sub_4D3020, "sub_4D3020" },  /* auto */
  { 0x004D31D0, (void *) &dk2::Repel_Obstacle_fun_4D31D0, "Repel_Obstacle_fun_4D31D0" },  /* auto */
  { 0x004D32E0, (void *) &dk2::sub_4D32E0, "sub_4D32E0" },  /* auto */
  { 0x004D33A0, (void *) &dk2::Avoid_Obstacle_fun_4D33A0, "Avoid_Obstacle_fun_4D33A0" },  /* auto */
  { 0x004D35C0, (void *) &dk2::Avoid_Walls_fun_4D35C0, "Avoid_Walls_fun_4D35C0" },  /* auto */
  { 0x004D3BE0, (void *) &dk2::sub_4D3BE0, "sub_4D3BE0" },  /* auto */
  { 0x004D3C10, (void *) &dk2::sub_4D3C10, "sub_4D3C10" },  /* auto */
  { 0x004D3C40, (void *) &dk2::Follow_Path_fun_4D3C40, "Follow_Path_fun_4D3C40" },  /* auto */
  { 0x004D4F60, (void *) &dk2::sub_4D4F60, "sub_4D4F60" },  /* auto */
  { 0x004D5060, (void *) &dk2::sub_4D5060, "sub_4D5060" },  /* auto */
  { 0x004D54F0, (void *) &dk2::sub_4D54F0, "sub_4D54F0" },  /* auto */
  { 0x004D56E0, (void *) &dk2::sub_4D56E0, "sub_4D56E0" },  /* auto */
  { 0x004D6A40, (void *) &dk2::sub_4D6A40, "sub_4D6A40" },  /* auto */
  { 0x004D7180, (void *) &dk2::sub_4D7180, "sub_4D7180" },  /* auto */
  { 0x004D72D0, (void *) &dk2::sub_4D72D0, "sub_4D72D0" },  /* auto */
  { 0x004D7460, (void *) &dk2::sub_4D7460, "sub_4D7460" },  /* auto */
  { 0x004D75F0, (void *) &dk2::sub_4D75F0, "sub_4D75F0" },  /* auto */
  { 0x004D9690, (void *) &dk2::sub_4D9690, "sub_4D9690" },  /* auto */
  { 0x004DAE40, (void *) &dk2::DungeonHeart_cpp_4DAE40, "DungeonHeart_cpp_4DAE40" },  /* auto */
  { 0x004DCE70, (void *) &dk2::sub_4DCE70, "sub_4DCE70" },  /* auto */
  { 0x004DDCA0, (void *) &dk2::sub_4DDCA0, "sub_4DDCA0" },  /* auto */
  { 0x004DE1CD, (void *) &dk2::def_4DE112, "def_4DE112" },  /* auto */
  { 0x004DEC40, (void *) &dk2::sub_4DEC40, "sub_4DEC40" },  /* auto */
  { 0x004DFF00, (void *) &dk2::sub_4DFF00, "sub_4DFF00" },  /* auto */
  { 0x004E0370, (void *) &dk2::sub_4E0370, "sub_4E0370" },  /* auto */
  { 0x004E53B0, (void *) &dk2::sub_4E53B0, "sub_4E53B0" },  /* auto */
  { 0x004E5480, (void *) &dk2::sub_4E5480, "sub_4E5480" },  /* auto */
  { 0x004E69B0, (void *) &dk2::sub_4E69B0, "sub_4E69B0" },  /* auto */
  { 0x004EC2A0, (void *) &dk2::sub_4EC2A0, "sub_4EC2A0" },  /* auto */
  { 0x004EDF20, (void *) &dk2::sub_4EDF20, "sub_4EDF20" },  /* auto */
  { 0x004EDFC0, (void *) &dk2::RoomManager_cpp_4EDFC0, "RoomManager_cpp_4EDFC0" },  /* auto */
  { 0x004F2910, (void *) &dk2::sub_4F2910, "sub_4F2910" },  /* auto */
  { 0x004F2930, (void *) &dk2::sub_4F2930, "sub_4F2930" },  /* auto */
  { 0x004F2950, (void *) &dk2::sub_4F2950, "sub_4F2950" },  /* auto */
  { 0x004F2F50, (void *) &dk2::sub_4F2F50, "sub_4F2F50" },  /* auto */
  { 0x004F6140, (void *) &dk2::sub_4F6140, "sub_4F6140" },  /* auto */
  { 0x004F8180, (void *) &dk2::sub_4F8180, "sub_4F8180" },  /* auto */
  { 0x004FAC40, (void *) &dk2::sub_4FAC40, "sub_4FAC40" },  /* auto */
  { 0x00505310, (void *) &dk2::sub_505310, "sub_505310" },  /* auto */
  { 0x005056E0, (void *) &dk2::sub_5056E0, "sub_5056E0" },  /* auto */
  { 0x00505A10, (void *) &dk2::GameActionHandler_N43, "GameActionHandler_N43" },  /* auto */
  { 0x00505AA0, (void *) &dk2::GameActionHandler_N44, "GameActionHandler_N44" },  /* auto */
  { 0x00505C90, (void *) &dk2::GameActionHandler_N49, "GameActionHandler_N49" },  /* auto */
  { 0x00505D00, (void *) &dk2::GameActionHandler_N4A, "GameActionHandler_N4A" },  /* auto */
  { 0x00505DA0, (void *) &dk2::GameActionHandler_N4C, "GameActionHandler_N4C" },  /* auto */
  { 0x00505DD0, (void *) &dk2::GameActionHandler_N4D, "GameActionHandler_N4D" },  /* auto */
  { 0x00505E20, (void *) &dk2::GameActionHandler_N4E, "GameActionHandler_N4E" },  /* auto */
  { 0x005060E0, (void *) &dk2::GameActionHandler_N54, "GameActionHandler_N54" },  /* auto */
  { 0x00506100, (void *) &dk2::GameActionHandler_N55, "GameActionHandler_N55" },  /* auto */
  { 0x005079B0, (void *) &dk2::sub_5079B0, "sub_5079B0" },  /* auto */
  { 0x00507A30, (void *) &dk2::sub_507A30, "sub_507A30" },  /* auto */
  { 0x00507A40, (void *) &dk2::sub_507A40, "sub_507A40" },  /* auto */
  { 0x005089D0, (void *) &dk2::CWorld_static_init, "CWorld_static_init" },  /* auto */
  { 0x005089F0, (void *) &dk2::CWorld_static_destroy, "CWorld_static_destroy" },  /* auto */
  { 0x00508C40, (void *) &dk2::CWorld_getCTag, "CWorld_getCTag" },  /* auto */
  { 0x005091C0, (void *) &dk2::CWorld_5091C0, "CWorld_5091C0" },  /* auto */
  { 0x005095D0, (void *) &dk2::CWorld_5095D0, "CWorld_5095D0" },  /* auto */
  { 0x0050E530, (void *) &dk2::CWorld_fun_50E530, "CWorld_fun_50E530" },  /* auto */
  { 0x0050E560, (void *) &dk2::CWorld_fun_50E560, "CWorld_fun_50E560" },  /* auto */
  { 0x0050E590, (void *) &dk2::CWorld_fun_50E590, "CWorld_fun_50E590" },  /* auto */
  { 0x0050F830, (void *) &dk2::CWorld_fun_50F830, "CWorld_fun_50F830" },  /* auto */
  { 0x0050F880, (void *) &dk2::CWorld_fun_50F880, "CWorld_fun_50F880" },  /* auto */
  { 0x00510790, (void *) &dk2::sub_510790, "sub_510790" },  /* auto */
  { 0x005108F0, (void *) &dk2::TbSysCommand_WM_ACTIVATE_cb_PauseOrRestart, "TbSysCommand_WM_ACTIVATE_cb_PauseOrRestart" },  /* auto */
  { 0x00510950, (void *) &dk2::sub_510950, "sub_510950" },  /* auto */
  { 0x00510E60, (void *) &dk2::nullsub_23, "nullsub_23" },  /* auto */
  { 0x005113C0, (void *) &dk2::sub_5113C0, "sub_5113C0" },  /* auto */
  { 0x00511A30, (void *) &dk2::sub_511A30, "sub_511A30" },  /* auto */
  { 0x00511A70, (void *) &dk2::GameActionRecord_arr_static_init, "GameActionRecord_arr_static_init" },  /* auto */
  { 0x00511A80, (void *) &dk2::GameActionRecord_arr_init, "GameActionRecord_arr_init" },  /* auto */
  { 0x00512850, (void *) &dk2::GameActionHandler_N2F, "GameActionHandler_N2F" },  /* auto */
  { 0x005128F0, (void *) &dk2::GameActionHandler_N31, "GameActionHandler_N31" },  /* auto */
  { 0x00513210, (void *) &dk2::GameActionHandler_N32, "GameActionHandler_N32" },  /* auto */
  { 0x00513240, (void *) &dk2::GameActionHandler_N33, "GameActionHandler_N33" },  /* auto */
  { 0x00513270, (void *) &dk2::GameActionHandler_N34, "GameActionHandler_N34" },  /* auto */
  { 0x005132A0, (void *) &dk2::GameActionHandler_N35, "GameActionHandler_N35" },  /* auto */
  { 0x00513340, (void *) &dk2::GameActionHandler_N37, "GameActionHandler_N37" },  /* auto */
  { 0x00513370, (void *) &dk2::GameActionHandler_N38, "GameActionHandler_N38" },  /* auto */
  { 0x00513480, (void *) &dk2::GameActionHandler_N39, "GameActionHandler_N39" },  /* auto */
  { 0x005134E0, (void *) &dk2::GameActionHandler_N3A, "GameActionHandler_N3A" },  /* auto */
  { 0x005135B0, (void *) &dk2::GameActionHandler_N3B, "GameActionHandler_N3B" },  /* auto */
  { 0x00513600, (void *) &dk2::GameActionHandler_N3C, "GameActionHandler_N3C" },  /* auto */
  { 0x00513650, (void *) &dk2::GameActionHandler_N3D, "GameActionHandler_N3D" },  /* auto */
  { 0x00513690, (void *) &dk2::GameActionHandler_N3E, "GameActionHandler_N3E" },  /* auto */
  { 0x005136E0, (void *) &dk2::GameActionHandler_N3F, "GameActionHandler_N3F" },  /* auto */
  { 0x00513730, (void *) &dk2::GameActionHandler_N40, "GameActionHandler_N40" },  /* auto */
  { 0x00513800, (void *) &dk2::GameActionHandler_N5D, "GameActionHandler_N5D" },  /* auto */
  { 0x00513DC0, (void *) &dk2::GameActionHandler_N6A, "GameActionHandler_N6A" },  /* auto */
  { 0x00513E50, (void *) &dk2::GameActionHandler_N71, "GameActionHandler_N71" },  /* auto */
  { 0x00513EB0, (void *) &dk2::GameActionHandler_N72, "GameActionHandler_N72" },  /* auto */
  { 0x00514280, (void *) &dk2::GameActionHandler_N7C, "GameActionHandler_N7C" },  /* auto */
  { 0x005142E0, (void *) &dk2::GameActionHandler_N81, "GameActionHandler_N81" },  /* auto */
  { 0x00514420, (void *) &dk2::GameActionHandler_N88, "GameActionHandler_N88" },  /* auto */
  { 0x00514560, (void *) &dk2::GameActionHandler_N14, "GameActionHandler_N14" },  /* auto */
  { 0x00514590, (void *) &dk2::GameActionHandler_N15, "GameActionHandler_N15" },  /* auto */
  { 0x005146B0, (void *) &dk2::GameActionHandler_N19, "GameActionHandler_N19" },  /* auto */
  { 0x00516050, (void *) &dk2::sub_516050, "sub_516050" },  /* auto */
  { 0x005162E0, (void *) &dk2::sub_5162E0, "sub_5162E0" },  /* auto */
  { 0x00516670, (void *) &dk2::sub_516670, "sub_516670" },  /* auto */
  { 0x00516950, (void *) &dk2::sub_516950, "sub_516950" },  /* auto */
  { 0x005169E0, (void *) &dk2::GameActionHandler_N24, "GameActionHandler_N24" },  /* auto */
  { 0x00516E40, (void *) &dk2::GameActionHandler_N26, "GameActionHandler_N26" },  /* auto */
  { 0x00517190, (void *) &dk2::GameActionHandler_N1E, "GameActionHandler_N1E" },  /* auto */
  { 0x005171D0, (void *) &dk2::GameActionHandler_N27, "GameActionHandler_N27" },  /* auto */
  { 0x00517220, (void *) &dk2::GameActionHandler_N1F, "GameActionHandler_N1F" },  /* auto */
  { 0x00517270, (void *) &dk2::GameActionHandler_N1D, "GameActionHandler_N1D" },  /* auto */
  { 0x005172B0, (void *) &dk2::GameActionHandler_N20_N2C__TbTQILoader_fun_5172B0, "GameActionHandler_N20_N2C__TbTQILoader_fun_5172B0" },  /* auto */
  { 0x005172C0, (void *) &dk2::GameActionHandler_N21, "GameActionHandler_N21" },  /* auto */
  { 0x00517310, (void *) &dk2::GameActionHandler_N22, "GameActionHandler_N22" },  /* auto */
  { 0x00517370, (void *) &dk2::CWorldInterface_fun_517370, "CWorldInterface_fun_517370" },  /* auto */
  { 0x00517380, (void *) &dk2::nullsub_24, "nullsub_24" },  /* auto */
  { 0x00517390, (void *) &dk2::CWorldInterface_fun_517390, "CWorldInterface_fun_517390" },  /* auto */
  { 0x005173B0, (void *) &dk2::CEngineInterface_fun_5173B0, "CEngineInterface_fun_5173B0" },  /* auto */
  { 0x005173C0, (void *) &dk2::CWorldInterface_fun_5173C0, "CWorldInterface_fun_5173C0" },  /* auto */
  { 0x005173E0, (void *) &dk2::CWorldInterface_fun_5173E0, "CWorldInterface_fun_5173E0" },  /* auto */
  { 0x00517400, (void *) &dk2::ret_0_3args, "ret_0_3args" },  /* auto */
  { 0x00517410, (void *) &dk2::CWorldInterface_fun_517410, "CWorldInterface_fun_517410" },  /* auto */
  { 0x00517420, (void *) &dk2::CWorldInterface_fun_517420, "CWorldInterface_fun_517420" },  /* auto */
  { 0x00517430, (void *) &dk2::CWorldInterface_fun_517430, "CWorldInterface_fun_517430" },  /* auto */
  { 0x00517440, (void *) &dk2::CWorldInterface_517440, "CWorldInterface_517440" },  /* auto */
  { 0x00517450, (void *) &dk2::CWorldInterface_fun_517450, "CWorldInterface_fun_517450" },  /* auto */
  { 0x00517460, (void *) &dk2::CWorldInterface_fun_517460, "CWorldInterface_fun_517460" },  /* auto */
  { 0x005174A0, (void *) &dk2::sub_5174A0, "sub_5174A0" },  /* auto */
  { 0x00517580, (void *) &dk2::sub_517580, "sub_517580" },  /* auto */
  { 0x00517990, (void *) &dk2::sub_517990, "sub_517990" },  /* auto */
  { 0x00517AB0, (void *) &dk2::sub_517AB0, "sub_517AB0" },  /* auto */
  { 0x00517F60, (void *) &dk2::DllMain, "DllMain" },  // -  /* auto */
  { 0x00519980, (void *) &dk2::sub_519980, "sub_519980" },  /* auto */
  { 0x0051AA80, (void *) &dk2::sub_51AA80, "sub_51AA80" },  /* auto */
  { 0x0051AA90, (void *) &dk2::sub_51AA90, "sub_51AA90" },  /* auto */
  { 0x0051CAE0, (void *) &dk2::sub_51CAE0, "sub_51CAE0" },  /* auto */
  { 0x0051CB80, (void *) &dk2::sub_51CB80, "sub_51CB80" },  /* auto */
  { 0x0051CD90, (void *) &dk2::sub_51CD90, "sub_51CD90" },  /* auto */
  { 0x0051DC20, (void *) &dk2::sub_51DC20, "sub_51DC20" },  /* auto */
  { 0x0051DC40, (void *) &dk2::sub_51DC40, "sub_51DC40" },  /* auto */
  { 0x0051DC70, (void *) &dk2::sub_51DC70, "sub_51DC70" },  /* auto */
  { 0x0051DE10, (void *) &dk2::sub_51DE10, "sub_51DE10" },  /* auto */
  { 0x0051E6D0, (void *) &dk2::sub_51E6D0, "sub_51E6D0" },  /* auto */
  { 0x0051EA40, (void *) &dk2::sub_51EA40, "sub_51EA40" },  /* auto */
  { 0x0051EB00, (void *) &dk2::sub_51EB00, "sub_51EB00" },  /* auto */
  { 0x0051EB30, (void *) &dk2::sub_51EB30, "sub_51EB30" },  /* auto */
  { 0x0051EB50, (void *) &dk2::sub_51EB50, "sub_51EB50" },  /* auto */
  { 0x0051EC30, (void *) &dk2::sub_51EC30, "sub_51EC30" },  /* auto */
  { 0x0051EC60, (void *) &dk2::sub_51EC60, "sub_51EC60" },  /* auto */
  { 0x0051EE40, (void *) &dk2::sub_51EE40, "sub_51EE40" },  /* auto */
  { 0x0051EE60, (void *) &dk2::sub_51EE60, "sub_51EE60" },  /* auto */
  { 0x0051EF80, (void *) &dk2::sub_51EF80, "sub_51EF80" },  /* auto */
  { 0x0051F0B0, (void *) &dk2::sub_51F0B0, "sub_51F0B0" },  /* auto */
  { 0x0051F220, (void *) &dk2::sub_51F220, "sub_51F220" },  /* auto */
  { 0x0051F240, (void *) &dk2::sub_51F240, "sub_51F240" },  /* auto */
  { 0x0051FCB0, (void *) &dk2::sub_51FCB0, "sub_51FCB0" },  /* auto */
  { 0x0051FCD0, (void *) &dk2::sub_51FCD0, "sub_51FCD0" },  /* auto */
  { 0x0051FDE0, (void *) &dk2::sub_51FDE0, "sub_51FDE0" },  /* auto */
  { 0x0051FE00, (void *) &dk2::sub_51FE00, "sub_51FE00" },  /* auto */
  { 0x0051FF10, (void *) &dk2::sub_51FF10, "sub_51FF10" },  /* auto */
  { 0x0051FF30, (void *) &dk2::sub_51FF30, "sub_51FF30" },  /* auto */
  { 0x00520040, (void *) &dk2::sub_520040, "sub_520040" },  /* auto */
  { 0x00520060, (void *) &dk2::sub_520060, "sub_520060" },  /* auto */
  { 0x00520180, (void *) &dk2::sub_520180, "sub_520180" },  /* auto */
  { 0x00520460, (void *) &dk2::sub_520460, "sub_520460" },  /* auto */
  { 0x005208B0, (void *) &dk2::sub_5208B0, "sub_5208B0" },  /* auto */
  { 0x00520BB0, (void *) &dk2::sub_520BB0, "sub_520BB0" },  /* auto */
  { 0x00520E50, (void *) &dk2::sub_520E50, "sub_520E50" },  /* auto */
  { 0x00520F40, (void *) &dk2::sub_520F40, "sub_520F40" },  /* auto */
  { 0x005211A0, (void *) &dk2::sub_5211A0, "sub_5211A0" },  /* auto */
  { 0x005212A0, (void *) &dk2::sub_5212A0, "sub_5212A0" },  /* auto */
  { 0x005212D0, (void *) &dk2::WorldWDL_cpp_5212D0, "WorldWDL_cpp_5212D0" },  /* auto */
  { 0x00521380, (void *) &dk2::sub_521380, "sub_521380" },  /* auto */
  { 0x00521420, (void *) &dk2::sub_521420, "sub_521420" },  /* auto */
  { 0x005215F0, (void *) &dk2::sub_5215F0, "sub_5215F0" },  /* auto */
  { 0x00521630, (void *) &dk2::sub_521630, "sub_521630" },  /* auto */
  { 0x00521650, (void *) &dk2::sub_521650, "sub_521650" },  /* auto */
  { 0x00521770, (void *) &dk2::sub_521770, "sub_521770" },  /* auto */
  { 0x00521790, (void *) &dk2::sub_521790, "sub_521790" },  /* auto */
  { 0x005217F0, (void *) &dk2::sub_5217F0, "sub_5217F0" },  /* auto */
  { 0x00521810, (void *) &dk2::sub_521810, "sub_521810" },  /* auto */
  { 0x00521930, (void *) &dk2::sub_521930, "sub_521930" },  /* auto */
  { 0x00521A60, (void *) &dk2::sub_521A60, "sub_521A60" },  /* auto */
  { 0x00521AB0, (void *) &dk2::sub_521AB0, "sub_521AB0" },  /* auto */
  { 0x00521B00, (void *) &dk2::sub_521B00, "sub_521B00" },  /* auto */
  { 0x00521B40, (void *) &dk2::CCommunicationInterface_fun_521B40, "CCommunicationInterface_fun_521B40" },  /* auto */
  { 0x00522650, (void *) &dk2::CLocalCommunication_static_init, "CLocalCommunication_static_init" },  /* auto */
  { 0x00522670, (void *) &dk2::CLocalCommunication_static_destroy, "CLocalCommunication_static_destroy" },  /* auto */
  { 0x00522870, (void *) &dk2::sub_522870, "sub_522870" },  /* auto */
  { 0x00522990, (void *) &dk2::CNetworkCommunication_static_init, "CNetworkCommunication_static_init" },  /* auto */
  { 0x005229B0, (void *) &dk2::CNetworkCommunication_static_destroy, "CNetworkCommunication_static_destroy" },  /* auto */
  { 0x005240C0, (void *) &dk2::sub_5240C0, "sub_5240C0" },  /* auto */
  { 0x00524240, (void *) &dk2::sub_524240, "sub_524240" },  /* auto */
  { 0x00525170, (void *) &dk2::CGameComponent_static_init, "CGameComponent_static_init" },  /* auto */
  { 0x00525190, (void *) &dk2::CGameComponent_static_destroy, "CGameComponent_static_destroy" },  /* auto */
  { 0x00525D30, (void *) &dk2::sub_525D30, "sub_525D30" },  /* auto */
  { 0x00527440, (void *) &dk2::CNetworkComponent_static_init, "CNetworkComponent_static_init" },  /* auto */
  { 0x00527460, (void *) &dk2::CNetworkComponent_static_destroy, "CNetworkComponent_static_destroy" },  /* auto */
  { 0x00527890, (void *) &dk2::sub_527890, "sub_527890" },  /* auto */
  { 0x005278C0, (void *) &dk2::cmd_Game, "cmd_Game" },      /* auto */
  { 0x00527920, (void *) &dk2::cmd_Quit, "cmd_Quit" },      /* auto */
  { 0x00527960, (void *) &dk2::cmd_getNetworkServices, "cmd_getNetworkServices" },  /* auto */
  { 0x005279F0, (void *) &dk2::cmd_selectNetworkServiceWithName, "cmd_selectNetworkServiceWithName" },  /* auto */
  { 0x00527A90, (void *) &dk2::cmd_selectNetworkService, "cmd_selectNetworkService" },  /* auto */
  { 0x00527B10, (void *) &dk2::cmd_getNetworkSessions, "cmd_getNetworkSessions" },  /* auto */
  { 0x00527BD0, (void *) &dk2::cmd_getMyMachineNetworkInfo, "cmd_getMyMachineNetworkInfo" },  /* auto */
  { 0x00527C50, (void *) &dk2::cmd_createSession, "cmd_createSession" },  /* auto */
  { 0x00527D00, (void *) &dk2::cmd_selectNetworkSession, "cmd_selectNetworkSession" },  /* auto */
  { 0x00527D90, (void *) &dk2::cmd_Leave, "cmd_Leave" },    /* auto */
  { 0x00527DD0, (void *) &dk2::cmd_PlayerList_sub, "cmd_PlayerList_sub" },  /* auto */
  { 0x00527EB0, (void *) &dk2::cmd_sendChatMessage, "cmd_sendChatMessage" },  /* auto */
  { 0x00527F40, (void *) &dk2::cmd_sendDataMessage, "cmd_sendDataMessage" },  /* auto */
  { 0x00527FE0, (void *) &dk2::cmd_GetNews, "cmd_GetNews" },  /* auto */
  { 0x00528000, (void *) &dk2::cmd_GetGameNews, "cmd_GetGameNews" },  /* auto */
  { 0x00528020, (void *) &dk2::cmd_Login, "cmd_Login" },    /* auto */
  { 0x00528040, (void *) &dk2::cmd_Logout, "cmd_Logout" },  /* auto */
  { 0x00528060, (void *) &dk2::cmd_PlayerList, "cmd_PlayerList" },  /* auto */
  { 0x00528080, (void *) &dk2::cmd_dumpPlayer, "cmd_dumpPlayer" },  /* auto */
  { 0x005280F0, (void *) &dk2::systemCallbackStub, "systemCallbackStub" },  /* auto */
  { 0x00528100, (void *) &dk2::probably_chatCallback, "probably_chatCallback" },  /* auto */
  { 0x00528110, (void *) &dk2::dataCallbackStub, "dataCallbackStub" },  /* auto */
  { 0x00528120, (void *) &dk2::guaranteedDataCallback, "guaranteedDataCallback" },  /* auto */
  { 0x005282F0, (void *) &dk2::CButton_fun_5282F0, "CButton_fun_5282F0" },  /* auto */
  { 0x0052B700, (void *) &dk2::CCommunicationInterface_fun_52B700, "CCommunicationInterface_fun_52B700" },  /* auto */
  { 0x0052BB30, (void *) &dk2::CButton_createEx, "CButton_createEx" },  /* auto */
  { 0x0052C6D0, (void *) &dk2::CButton_create, "CButton_create" },  /* auto */
  { 0x0052CA70, (void *) &dk2::CTextInput_fun_52CA70, "CTextInput_fun_52CA70" },  /* auto */
  { 0x0052CAD0, (void *) &dk2::sub_52CAD0, "sub_52CAD0" },  /* auto */
  { 0x0052CB40, (void *) &dk2::CWorldEntry_createArr277, "CWorldEntry_createArr277" },  /* auto */
  { 0x0052CF90, (void *) &dk2::MySurface_static_copy, "MySurface_static_copy" },  /* auto */
  { 0x0052D410, (void *) &dk2::probably_copySurface_16bpp_noAlpha, "probably_copySurface_16bpp_noAlpha" },  /* auto */
  { 0x0052D8B0, (void *) &dk2::probably_copySurface_16bpp_alphaMask, "probably_copySurface_16bpp_alphaMask" },  /* auto */
  { 0x0052DCE0, (void *) &dk2::probably_copySurface_32bpp, "probably_copySurface_32bpp" },  /* auto */
  { 0x0052DEC0, (void *) &dk2::probably_copySurface_16bpp, "probably_copySurface_16bpp" },  /* auto */
  { 0x0052E0A0, (void *) &dk2::probably_copySurface_8bpp, "probably_copySurface_8bpp" },  /* auto */
  { 0x0052E490, (void *) &dk2::CFrontEndComponent_static_init, "CFrontEndComponent_static_init" },  /* auto */
  { 0x0052E4B0, (void *) &dk2::CFrontEndComponent_static_destroy, "CFrontEndComponent_static_destroy" },  /* auto */
  { 0x0052E4C0, (void *) &dk2::CFrontEndComponent3D_static_init, "CFrontEndComponent3D_static_init" },  /* auto */
  { 0x0052E4E0, (void *) &dk2::CFrontEndComponent3D_static_destroy, "CFrontEndComponent3D_static_destroy" },  /* auto */
  { 0x0052FAF0, (void *) &dk2::CFrontEndComponent_onKeyboardActionWithCtrl, "CFrontEndComponent_onKeyboardActionWithCtrl" },  /* auto */
  { 0x0052FBF0, (void *) &dk2::CFrontEndComponent_onMouseAction, "CFrontEndComponent_onMouseAction" },  /* auto */
  { 0x0052FE40, (void *) &dk2::nullsub_8, "nullsub_8" },    /* auto */
  { 0x0052FE50, (void *) &dk2::CFrontEndComponent_onWindowMsg, "CFrontEndComponent_onWindowMsg" },  /* auto */
  { 0x0052FE90, (void *) &dk2::sub_52FE90, "sub_52FE90" },  /* auto */
  { 0x0052FED0, (void *) &dk2::sub_52FED0, "sub_52FED0" },  /* auto */
  { 0x0052FF10, (void *) &dk2::sub_52FF10, "sub_52FF10" },  /* auto */
  { 0x00530430, (void *) &dk2::sub_530430, "sub_530430" },  /* auto */
  { 0x00530440, (void *) &dk2::CListBox_sub_530440, "CListBox_sub_530440" },  /* auto */
  { 0x005306F0, (void *) &dk2::CFrontEndComponent_execute, "CFrontEndComponent_execute" },  /* auto */
  { 0x00531F00, (void *) &dk2::sub_531F00, "sub_531F00" },  /* auto */
  { 0x00531F20, (void *) &dk2::sub_531F20, "sub_531F20" },  /* auto */
  { 0x00531F50, (void *) &dk2::sub_531F50, "sub_531F50" },  /* auto */
  { 0x00531F80, (void *) &dk2::sub_531F80, "sub_531F80" },  /* auto */
  { 0x00531FF0, (void *) &dk2::sub_531FF0, "sub_531FF0" },  /* auto */
  { 0x00532040, (void *) &dk2::sub_532040, "sub_532040" },  /* auto */
  { 0x00532060, (void *) &dk2::sub_532060, "sub_532060" },  /* auto */
  { 0x005322F0, (void *) &dk2::sub_5322F0, "sub_5322F0" },  /* auto */
  { 0x00532310, (void *) &dk2::sub_532310, "sub_532310" },  /* auto */
  { 0x00532330, (void *) &dk2::sub_532330, "sub_532330" },  /* auto */
  { 0x00532350, (void *) &dk2::sub_532350, "sub_532350" },  /* auto */
  { 0x00532370, (void *) &dk2::sub_532370, "sub_532370" },  /* auto */
  { 0x00532390, (void *) &dk2::sub_532390, "sub_532390" },  /* auto */
  { 0x005323B0, (void *) &dk2::sub_5323B0, "sub_5323B0" },  /* auto */
  { 0x00532660, (void *) &dk2::unknown_libname_16, "unknown_libname_16" },  /* auto */
  { 0x00532670, (void *) &dk2::CButton_render, "CButton_render" },  /* auto */
  { 0x00533380, (void *) &dk2::sub_533380, "sub_533380" },  /* auto */
  { 0x00533450, (void *) &dk2::sub_533450, "sub_533450" },  /* auto */
  { 0x00533D30, (void *) &dk2::CFrontEndComponent_do_special_gui, "CFrontEndComponent_do_special_gui" },  /* auto */
  { 0x00535BE0, (void *) &dk2::sub_535BE0, "sub_535BE0" },  /* auto */
  { 0x00535E10, (void *) &dk2::sub_535E10, "sub_535E10" },  /* auto */
  { 0x00535F50, (void *) &dk2::CClickButton_renderApplyBtn, "CClickButton_renderApplyBtn" },  /* auto */
  { 0x00536070, (void *) &dk2::CClickButton_renderExitBtn, "CClickButton_renderExitBtn" },  /* auto */
  { 0x00536190, (void *) &dk2::sub_536190, "sub_536190" },  /* auto */
  { 0x005366D0, (void *) &dk2::nullsub_16, "nullsub_16" },  /* auto */
  { 0x005366E0, (void *) &dk2::nullsub_17, "nullsub_17" },  /* auto */
  { 0x005366F0, (void *) &dk2::unknown_libname_17, "unknown_libname_17" },  /* auto */
  { 0x00536700, (void *) &dk2::sub_536700, "sub_536700" },  /* auto */
  { 0x005367D0, (void *) &dk2::sub_5367D0, "sub_5367D0" },  /* auto */
  { 0x00536DD0, (void *) &dk2::sub_536DD0, "sub_536DD0" },  /* auto */
  { 0x00536DF0, (void *) &dk2::sub_536DF0, "sub_536DF0" },  /* auto */
  { 0x00536F90, (void *) &dk2::sub_536F90, "sub_536F90" },  /* auto */
  { 0x00536FA0, (void *) &dk2::sub_536FA0, "sub_536FA0" },  /* auto */
  { 0x005372F0, (void *) &dk2::sub_5372F0, "sub_5372F0" },  /* auto */
  { 0x005379B0, (void *) &dk2::sub_5379B0, "sub_5379B0" },  /* auto */
  { 0x00537C30, (void *) &dk2::sub_537C30, "sub_537C30" },  /* auto */
  { 0x00537CA0, (void *) &dk2::sub_537CA0, "sub_537CA0" },  /* auto */
  { 0x00537E10, (void *) &dk2::sub_537E10, "sub_537E10" },  /* auto */
  { 0x00537F30, (void *) &dk2::sub_537F30, "sub_537F30" },  /* auto */
  { 0x00537F50, (void *) &dk2::sub_537F50, "sub_537F50" },  /* auto */
  { 0x00537F70, (void *) &dk2::sub_537F70, "sub_537F70" },  /* auto */
  { 0x00538000, (void *) &dk2::sub_538000, "sub_538000" },  /* auto */
  { 0x005384F0, (void *) &dk2::do_special_gui_sub, "do_special_gui_sub" },  /* auto */
  { 0x00538AC0, (void *) &dk2::sub_538AC0, "sub_538AC0" },  /* auto */
  { 0x00538B90, (void *) &dk2::sub_538B90, "sub_538B90" },  /* auto */
  { 0x00538D00, (void *) &dk2::sub_538D00, "sub_538D00" },  /* auto */
  { 0x005391F0, (void *) &dk2::__unk_before_action, "__unk_before_action" },  /* auto */
  { 0x005392E0, (void *) &dk2::sub_5392E0, "sub_5392E0" },  /* auto */
  { 0x005393B0, (void *) &dk2::sub_5393B0, "sub_5393B0" },  /* auto */
  { 0x00539490, (void *) &dk2::sub_539490, "sub_539490" },  /* auto */
  { 0x005394E0, (void *) &dk2::sub_5394E0, "sub_5394E0" },  /* auto */
  { 0x00539500, (void *) &dk2::sub_539500, "sub_539500" },  /* auto */
  { 0x005395A0, (void *) &dk2::sub_5395A0, "sub_5395A0" },  /* auto */
  { 0x005396B0, (void *) &dk2::sub_5396B0, "sub_5396B0" },  /* auto */
  { 0x00539710, (void *) &dk2::sub_539710, "sub_539710" },  /* auto */
  { 0x0053A010, (void *) &dk2::sub_53A010, "sub_53A010" },  /* auto */
  { 0x0053A280, (void *) &dk2::sub_53A280, "sub_53A280" },  /* auto */
  { 0x0053AC60, (void *) &dk2::sub_53AC60, "sub_53AC60" },  /* auto */
  { 0x0053AF80, (void *) &dk2::sub_53AF80, "sub_53AF80" },  /* auto */
  { 0x0053B5F0, (void *) &dk2::sub_53B5F0, "sub_53B5F0" },  /* auto */
  { 0x0053B810, (void *) &dk2::sub_53B810, "sub_53B810" },  /* auto */
  { 0x0053B840, (void *) &dk2::show_cond_movie, "show_cond_movie" },  /* auto */
  { 0x0053BCD0, (void *) &dk2::CFrontEndComponent_showMovie, "CFrontEndComponent_showMovie" },  /* auto */
  { 0x0053C070, (void *) &dk2::sub_53C070, "sub_53C070" },  /* auto */
  { 0x0053C120, (void *) &dk2::sub_53C120, "sub_53C120" },  /* auto */
  { 0x0053C270, (void *) &dk2::CFrontEndComponent_ShowMovie_onKeyboardAction, "CFrontEndComponent_ShowMovie_onKeyboardAction" },  /* auto */
  { 0x0053C2A0, (void *) &dk2::CFrontEndComponent_ShowMovie_onMouseAction, "CFrontEndComponent_ShowMovie_onMouseAction" },  /* auto */
  { 0x0053C2C0, (void *) &dk2::sub_53C2C0, "sub_53C2C0" },  /* auto */
  { 0x0053C2E0, (void *) &dk2::CFrontEndComponent_WM_ACTIVATE_cb, "CFrontEndComponent_WM_ACTIVATE_cb" },  /* auto */
  { 0x0053C320, (void *) &dk2::sub_53C320, "sub_53C320" },  /* auto */
  { 0x0053C3C0, (void *) &dk2::sub_53C3C0, "sub_53C3C0" },  /* auto */
  { 0x0053CAF0, (void *) &dk2::sub_53CAF0, "sub_53CAF0" },  /* auto */
  { 0x0053D270, (void *) &dk2::sub_53D270, "sub_53D270" },  /* auto */
  { 0x0053D550, (void *) &dk2::sub_53D550, "sub_53D550" },  /* auto */
  { 0x0053DBD0, (void *) &dk2::sub_53DBD0, "sub_53DBD0" },  /* auto */
  { 0x0053E720, (void *) &dk2::sub_53E720, "sub_53E720" },  /* auto */
  { 0x0053E740, (void *) &dk2::sub_53E740, "sub_53E740" },  /* auto */
  { 0x0053F280, (void *) &dk2::sub_53F280, "sub_53F280" },  /* auto */
  { 0x0053F530, (void *) &dk2::sub_53F530, "sub_53F530" },  /* auto */
  { 0x0053F590, (void *) &dk2::sub_53F590, "sub_53F590" },  /* auto */
  { 0x0053F600, (void *) &dk2::sub_53F600, "sub_53F600" },  /* auto */
  { 0x0053F8B0, (void *) &dk2::sub_53F8B0, "sub_53F8B0" },  /* auto */
  { 0x0053FDF0, (void *) &dk2::sub_53FDF0, "sub_53FDF0" },  /* auto */
  { 0x00540220, (void *) &dk2::sub_540220, "sub_540220" },  /* auto */
  { 0x00540600, (void *) &dk2::sub_540600, "sub_540600" },  /* auto */
  { 0x005409E0, (void *) &dk2::sub_5409E0, "sub_5409E0" },  /* auto */
  { 0x00540A30, (void *) &dk2::sub_540A30, "sub_540A30" },  /* auto */
  { 0x00540A80, (void *) &dk2::sub_540A80, "sub_540A80" },  /* auto */
  { 0x00540AD0, (void *) &dk2::sub_540AD0, "sub_540AD0" },  /* auto */
  { 0x00540B20, (void *) &dk2::sub_540B20, "sub_540B20" },  /* auto */
  { 0x00540B70, (void *) &dk2::sub_540B70, "sub_540B70" },  /* auto */
  { 0x00540BC0, (void *) &dk2::sub_540BC0, "sub_540BC0" },  /* auto */
  { 0x005410C0, (void *) &dk2::sub_5410C0, "sub_5410C0" },  /* auto */
  { 0x005415D0, (void *) &dk2::sub_5415D0, "sub_5415D0" },  /* auto */
  { 0x005416E0, (void *) &dk2::sub_5416E0, "sub_5416E0" },  /* auto */
  { 0x005417F0, (void *) &dk2::sub_5417F0, "sub_5417F0" },  /* auto */
  { 0x00541940, (void *) &dk2::sub_541940, "sub_541940" },  /* auto */
  { 0x00541980, (void *) &dk2::sub_541980, "sub_541980" },  /* auto */
  { 0x005419F0, (void *) &dk2::sub_5419F0, "sub_5419F0" },  /* auto */
  { 0x00541DF0, (void *) &dk2::sub_541DF0, "sub_541DF0" },  /* auto */
  { 0x00541F50, (void *) &dk2::sub_541F50, "sub_541F50" },  /* auto */
  { 0x00542070, (void *) &dk2::sub_542070, "sub_542070" },  /* auto */
  { 0x00542110, (void *) &dk2::sub_542110, "sub_542110" },  /* auto */
  { 0x005424D0, (void *) &dk2::do_smth_and_execute_action_91, "do_smth_and_execute_action_91" },  /* auto */
  { 0x00542500, (void *) &dk2::sub_542500, "sub_542500" },  /* auto */
  { 0x00542520, (void *) &dk2::sub_542520, "sub_542520" },  /* auto */
  { 0x00542540, (void *) &dk2::do_smth_and_execute_action_8, "do_smth_and_execute_action_8" },  /* auto */
  { 0x005427B0, (void *) &dk2::_malloc, "_malloc" },  // -  /* auto */
  { 0x005427E0, (void *) &dk2::sub_5427E0, "sub_5427E0" },  /* auto */
  { 0x00542BD0, (void *) &dk2::sub_542BD0, "sub_542BD0" },  /* auto */
  { 0x00542BF0, (void *) &dk2::CFrontEndComponent_chatCallback, "CFrontEndComponent_chatCallback" },  /* auto */
  { 0x00542F40, (void *) &dk2::CFrontEndComponent_guaranteedDataCallback, "CFrontEndComponent_guaranteedDataCallback" },  /* auto */
  { 0x00543820, (void *) &dk2::sub_543820, "sub_543820" },  /* auto */
  { 0x00543840, (void *) &dk2::probably_session_destructor, "probably_session_destructor" },  /* auto */
  { 0x00544060, (void *) &dk2::CFrontEndComponent_dataCallback, "CFrontEndComponent_dataCallback" },  /* auto */
  { 0x005445C0, (void *) &dk2::sub_5445C0, "sub_5445C0" },  /* auto */
  { 0x005445D0, (void *) &dk2::sub_5445D0, "sub_5445D0" },  /* auto */
  { 0x005445F0, (void *) &dk2::sub_5445F0, "sub_5445F0" },  /* auto */
  { 0x00544DF0, (void *) &dk2::sub_544DF0, "sub_544DF0" },  /* auto */
  { 0x00544E90, (void *) &dk2::sub_544E90, "sub_544E90" },  /* auto */
  { 0x00544FA0, (void *) &dk2::sub_544FA0, "sub_544FA0" },  /* auto */
  { 0x00545610, (void *) &dk2::sub_545610, "sub_545610" },  /* auto */
  { 0x005457A0, (void *) &dk2::CFrontEndComponent_static_sub_5457A0, "CFrontEndComponent_static_sub_5457A0" },  /* auto */
  { 0x00545970, (void *) &dk2::sub_545970, "sub_545970" },  /* auto */
  { 0x00545B10, (void *) &dk2::sub_545B10, "sub_545B10" },  /* auto */
  { 0x00545C80, (void *) &dk2::sub_545C80, "sub_545C80" },  /* auto */
  { 0x00545E10, (void *) &dk2::sub_545E10, "sub_545E10" },  /* auto */
  { 0x00545F20, (void *) &dk2::sub_545F20, "sub_545F20" },  /* auto */
  { 0x00545FC0, (void *) &dk2::sub_545FC0, "sub_545FC0" },  /* auto */
  { 0x00546150, (void *) &dk2::sub_546150, "sub_546150" },  /* auto */
  { 0x00546360, (void *) &dk2::sub_546360, "sub_546360" },  /* auto */
  { 0x005463B0, (void *) &dk2::sub_5463B0, "sub_5463B0" },  /* auto */
  { 0x00546400, (void *) &dk2::sub_546400, "sub_546400" },  /* auto */
  { 0x00546830, (void *) &dk2::sub_546830, "sub_546830" },  /* auto */
  { 0x005475A0, (void *) &dk2::sub_5475A0, "sub_5475A0" },  /* auto */
  { 0x00547720, (void *) &dk2::sub_547720, "sub_547720" },  /* auto */
  { 0x00547AE0, (void *) &dk2::CFrontEndComponent_systemCallback, "CFrontEndComponent_systemCallback" },  /* auto */
  { 0x00547B40, (void *) &dk2::sub_547B40, "sub_547B40" },  /* auto */
  { 0x00547C20, (void *) &dk2::CButton_sub_547C20, "CButton_sub_547C20" },  /* auto */
  { 0x00547EA0, (void *) &dk2::sub_547EA0, "sub_547EA0" },  /* auto */
  { 0x00547EB0, (void *) &dk2::sub_547EB0, "sub_547EB0" },  /* auto */
  { 0x005482D0, (void *) &dk2::sub_5482D0, "sub_5482D0" },  /* auto */
  { 0x00548A30, (void *) &dk2::sub_548A30, "sub_548A30" },  /* auto */
  { 0x00548A70, (void *) &dk2::sub_548A70, "sub_548A70" },  /* auto */
  { 0x00548AB0, (void *) &dk2::sub_548AB0, "sub_548AB0" },  /* auto */
  { 0x00548AF0, (void *) &dk2::sub_548AF0, "sub_548AF0" },  /* auto */
  { 0x00548B30, (void *) &dk2::sub_548B30, "sub_548B30" },  /* auto */
  { 0x00548B70, (void *) &dk2::sub_548B70, "sub_548B70" },  /* auto */
  { 0x00548BE0, (void *) &dk2::sub_548BE0, "sub_548BE0" },  /* auto */
  { 0x00548C40, (void *) &dk2::sub_548C40, "sub_548C40" },  /* auto */
  { 0x00548CA0, (void *) &dk2::sub_548CA0, "sub_548CA0" },  /* auto */
  { 0x00548D00, (void *) &dk2::sub_548D00, "sub_548D00" },  /* auto */
  { 0x00549220, (void *) &dk2::sub_549220, "sub_549220" },  /* auto */
  { 0x00549420, (void *) &dk2::sub_549420, "sub_549420" },  /* auto */
  { 0x00549620, (void *) &dk2::sub_549620, "sub_549620" },  /* auto */
  { 0x005496B0, (void *) &dk2::sub_5496B0, "sub_5496B0" },  /* auto */
  { 0x00549770, (void *) &dk2::sub_549770, "sub_549770" },  /* auto */
  { 0x00549830, (void *) &dk2::sub_549830, "sub_549830" },  /* auto */
  { 0x00549900, (void *) &dk2::sub_549900, "sub_549900" },  /* auto */
  { 0x005499D0, (void *) &dk2::sub_5499D0, "sub_5499D0" },  /* auto */
  { 0x00549AA0, (void *) &dk2::sub_549AA0, "sub_549AA0" },  /* auto */
  { 0x00549B70, (void *) &dk2::sub_549B70, "sub_549B70" },  /* auto */
  { 0x00549C40, (void *) &dk2::sub_549C40, "sub_549C40" },  /* auto */
  { 0x0054A4D0, (void *) &dk2::sub_54A4D0, "sub_54A4D0" },  /* auto */
  { 0x0054A710, (void *) &dk2::sub_54A710, "sub_54A710" },  /* auto */
  { 0x0054A8A0, (void *) &dk2::sub_54A8A0, "sub_54A8A0" },  /* auto */
  { 0x0054AA50, (void *) &dk2::sub_54AA50, "sub_54AA50" },  /* auto */
  { 0x0054ABB0, (void *) &dk2::sub_54ABB0, "sub_54ABB0" },  /* auto */
  { 0x0054AC90, (void *) &dk2::sub_54AC90, "sub_54AC90" },  /* auto */
  { 0x0054AD40, (void *) &dk2::sub_54AD40, "sub_54AD40" },  /* auto */
  { 0x0054ADD0, (void *) &dk2::sub_54ADD0, "sub_54ADD0" },  /* auto */
  { 0x0054AE50, (void *) &dk2::sub_54AE50, "sub_54AE50" },  /* auto */
  { 0x0054AEE0, (void *) &dk2::sub_54AEE0, "sub_54AEE0" },  /* auto */
  { 0x0054AF70, (void *) &dk2::sub_54AF70, "sub_54AF70" },  /* auto */
  { 0x0054AFA0, (void *) &dk2::sub_54AFA0, "sub_54AFA0" },  /* auto */
  { 0x0054AFD0, (void *) &dk2::sub_54AFD0, "sub_54AFD0" },  /* auto */
  { 0x0054B820, (void *) &dk2::sub_54B820, "sub_54B820" },  /* auto */
  { 0x0054B860, (void *) &dk2::sub_54B860, "sub_54B860" },  /* auto */
  { 0x0054B8A0, (void *) &dk2::sub_54B8A0, "sub_54B8A0" },  /* auto */
  { 0x0054B8E0, (void *) &dk2::sub_54B8E0, "sub_54B8E0" },  /* auto */
  { 0x0054B910, (void *) &dk2::sub_54B910, "sub_54B910" },  /* auto */
  { 0x0054B940, (void *) &dk2::sub_54B940, "sub_54B940" },  /* auto */
  { 0x0054B980, (void *) &dk2::sub_54B980, "sub_54B980" },  /* auto */
  { 0x0054B9B0, (void *) &dk2::sub_54B9B0, "sub_54B9B0" },  /* auto */
  { 0x0054BA30, (void *) &dk2::sub_54BA30, "sub_54BA30" },  /* auto */
  { 0x0054BA50, (void *) &dk2::sub_54BA50, "sub_54BA50" },  /* auto */
  { 0x0054BA70, (void *) &dk2::sub_54BA70, "sub_54BA70" },  /* auto */
  { 0x0054BA90, (void *) &dk2::sub_54BA90, "sub_54BA90" },  /* auto */
  { 0x0054BAC0, (void *) &dk2::sub_54BAC0, "sub_54BAC0" },  /* auto */
  { 0x0054BAF0, (void *) &dk2::sub_54BAF0, "sub_54BAF0" },  /* auto */
  { 0x0054BB20, (void *) &dk2::sub_54BB20, "sub_54BB20" },  /* auto */
  { 0x0054BD70, (void *) &dk2::sub_54BD70, "sub_54BD70" },  /* auto */
  { 0x0054BD90, (void *) &dk2::sub_54BD90, "sub_54BD90" },  /* auto */
  { 0x0054BDE0, (void *) &dk2::sub_54BDE0, "sub_54BDE0" },  /* auto */
  { 0x0054BDF0, (void *) &dk2::sub_54BDF0, "sub_54BDF0" },  /* auto */
  { 0x0054BE30, (void *) &dk2::sub_54BE30, "sub_54BE30" },  /* auto */
  { 0x0054C2A0, (void *) &dk2::ResolutionBtn_pressFun_54C2A0, "ResolutionBtn_pressFun_54C2A0" },  /* auto */
  { 0x0054C3F0, (void *) &dk2::ResolutionBtn_releaseFun_54C3F0, "ResolutionBtn_releaseFun_54C3F0" },  /* auto */
  { 0x0054C540, (void *) &dk2::sub_54C540, "sub_54C540" },  /* auto */
  { 0x0054C6B0, (void *) &dk2::sub_54C6B0, "sub_54C6B0" },  /* auto */
  { 0x0054C810, (void *) &dk2::sub_54C810, "sub_54C810" },  /* auto */
  { 0x0054C8C0, (void *) &dk2::sub_54C8C0, "sub_54C8C0" },  /* auto */
  { 0x0054C970, (void *) &dk2::sub_54C970, "sub_54C970" },  /* auto */
  { 0x0054C9F0, (void *) &dk2::sub_54C9F0, "sub_54C9F0" },  /* auto */
  { 0x0054CE00, (void *) &dk2::sub_54CE00, "sub_54CE00" },  /* auto */
  { 0x0054CEC0, (void *) &dk2::sub_54CEC0, "sub_54CEC0" },  /* auto */
  { 0x0054D040, (void *) &dk2::sub_54D040, "sub_54D040" },  /* auto */
  { 0x0054D0E0, (void *) &dk2::sub_54D0E0, "sub_54D0E0" },  /* auto */
  { 0x0054D180, (void *) &dk2::sub_54D180, "sub_54D180" },  /* auto */
  { 0x0054D240, (void *) &dk2::sub_54D240, "sub_54D240" },  /* auto */
  { 0x0054DFF0, (void *) &dk2::sub_54DFF0, "sub_54DFF0" },  /* auto */
  { 0x0054E4D0, (void *) &dk2::sub_54E4D0, "sub_54E4D0" },  /* auto */
  { 0x0054E670, (void *) &dk2::sub_54E670, "sub_54E670" },  /* auto */
  { 0x0054E720, (void *) &dk2::sub_54E720, "sub_54E720" },  /* auto */
  { 0x0054E740, (void *) &dk2::sub_54E740, "sub_54E740" },  /* auto */
  { 0x0054E8E0, (void *) &dk2::sub_54E8E0, "sub_54E8E0" },  /* auto */
  { 0x0054EA90, (void *) &dk2::sub_54EA90, "sub_54EA90" },  /* auto */
  { 0x0054EDF0, (void *) &dk2::sub_54EDF0, "sub_54EDF0" },  /* auto */
  { 0x0054EE10, (void *) &dk2::sub_54EE10, "sub_54EE10" },  /* auto */
  { 0x0054EE30, (void *) &dk2::_malloc_0, "_malloc_0" },    /* auto */
  { 0x0054F050, (void *) &dk2::sub_54F050, "sub_54F050" },  /* auto */
  { 0x0054F070, (void *) &dk2::sub_54F070, "sub_54F070" },  /* auto */
  { 0x0054F090, (void *) &dk2::sub_54F090, "sub_54F090" },  /* auto */
  { 0x0054F160, (void *) &dk2::CListBox_LoadGame_SaveList_render, "CListBox_LoadGame_SaveList_render" },  /* auto */
  { 0x0054FA60, (void *) &dk2::sub_54FA60, "sub_54FA60" },  /* auto */
  { 0x0054FC40, (void *) &dk2::sub_54FC40, "sub_54FC40" },  /* auto */
  { 0x0054FCE0, (void *) &dk2::sub_54FCE0, "sub_54FCE0" },  /* auto */
  { 0x0054FF00, (void *) &dk2::sub_54FF00, "sub_54FF00" },  /* auto */
  { 0x005501F0, (void *) &dk2::sub_5501F0, "sub_5501F0" },  /* auto */
  { 0x00550420, (void *) &dk2::sub_550420, "sub_550420" },  /* auto */
  { 0x005507E0, (void *) &dk2::sub_5507E0, "sub_5507E0" },  /* auto */
  { 0x00550A10, (void *) &dk2::sub_550A10, "sub_550A10" },  /* auto */
  { 0x00550D90, (void *) &dk2::sub_550D90, "sub_550D90" },  /* auto */
  { 0x00551490, (void *) &dk2::sub_551490, "sub_551490" },  /* auto */
  { 0x00551820, (void *) &dk2::sub_551820, "sub_551820" },  /* auto */
  { 0x00551BA0, (void *) &dk2::sub_551BA0, "sub_551BA0" },  /* auto */
  { 0x00551F20, (void *) &dk2::sub_551F20, "sub_551F20" },  /* auto */
  { 0x00551FE0, (void *) &dk2::sub_551FE0, "sub_551FE0" },  /* auto */
  { 0x005520A0, (void *) &dk2::sub_5520A0, "sub_5520A0" },  /* auto */
  { 0x005524F0, (void *) &dk2::sub_5524F0, "sub_5524F0" },  /* auto */
  { 0x00552620, (void *) &dk2::sub_552620, "sub_552620" },  /* auto */
  { 0x00552770, (void *) &dk2::sub_552770, "sub_552770" },  /* auto */
  { 0x00552990, (void *) &dk2::sub_552990, "sub_552990" },  /* auto */
  { 0x00552BE0, (void *) &dk2::sub_552BE0, "sub_552BE0" },  /* auto */
  { 0x00552C30, (void *) &dk2::sub_552C30, "sub_552C30" },  /* auto */
  { 0x00552CA0, (void *) &dk2::MyLangObj_static_init, "MyLangObj_static_init" },  /* auto */
  { 0x00552CC0, (void *) &dk2::MyLangObj_static_destroy, "MyLangObj_static_destroy" },  /* auto */
  { 0x00552CD0, (void *) &dk2::FontObj_3_static_constructor, "FontObj_3_static_constructor" },  /* auto */
  { 0x00552CF0, (void *) &dk2::FontObj_3_static_destructor, "FontObj_3_static_destructor" },  /* auto */
  { 0x00552D00, (void *) &dk2::FontObj_2_static_constructor, "FontObj_2_static_constructor" },  /* auto */
  { 0x00552D20, (void *) &dk2::FontObj_2_static_destructor, "FontObj_2_static_destructor" },  /* auto */
  { 0x00552D30, (void *) &dk2::FontObj_1_static_constructor, "FontObj_1_static_constructor" },  /* auto */
  { 0x00552D50, (void *) &dk2::FontObj_1_static_destructor, "FontObj_1_static_destructor" },  /* auto */
  { 0x00552D60, (void *) &dk2::FontObj1_static_init, "FontObj1_static_init" },  /* auto */
  { 0x00552D80, (void *) &dk2::FontObj1_static_destructor, "FontObj1_static_destructor" },  /* auto */
  { 0x00552D90, (void *) &dk2::FontObj2_static_init, "FontObj2_static_init" },  /* auto */
  { 0x00552DB0, (void *) &dk2::FontObj2_static_destructor, "FontObj2_static_destructor" },  /* auto */
  { 0x00552DC0, (void *) &dk2::FontObj3_static_init, "FontObj3_static_init" },  /* auto */
  { 0x00552DE0, (void *) &dk2::FontObj3_static_destructor, "FontObj3_static_destructor" },  /* auto */
  { 0x00552DF0, (void *) &dk2::FontObj4_static_init, "FontObj4_static_init" },  /* auto */
  { 0x00552E10, (void *) &dk2::FontObj4_static_destructor, "FontObj4_static_destructor" },  /* auto */
  { 0x00552E20, (void *) &dk2::FontObj5_static_init, "FontObj5_static_init" },  /* auto */
  { 0x00552E40, (void *) &dk2::FontObj5_static_destructor, "FontObj5_static_destructor" },  /* auto */
  { 0x00552E50, (void *) &dk2::FontObj6_static_init, "FontObj6_static_init" },  /* auto */
  { 0x00552E70, (void *) &dk2::FontObj6_static_destructor, "FontObj6_static_destructor" },  /* auto */
  { 0x00552E80, (void *) &dk2::FontObj7_static_init, "FontObj7_static_init" },  /* auto */
  { 0x00552EA0, (void *) &dk2::FontObj7_static_destructor, "FontObj7_static_destructor" },  /* auto */
  { 0x00552EB0, (void *) &dk2::FontObj8_static_init, "FontObj8_static_init" },  /* auto */
  { 0x00552ED0, (void *) &dk2::FontObj8_static_destructor, "FontObj8_static_destructor" },  /* auto */
  { 0x00552EE0, (void *) &dk2::FontObj9_static_init, "FontObj9_static_init" },  /* auto */
  { 0x00552F00, (void *) &dk2::FontObj9_static_destructor, "FontObj9_static_destructor" },  /* auto */
  { 0x00552F10, (void *) &dk2::loadResources, "loadResources" },  /* auto */
  { 0x005534D0, (void *) &dk2::sub_5534D0, "sub_5534D0" },  /* auto */
  { 0x00553690, (void *) &dk2::sub_553690, "sub_553690" },  /* auto */
  { 0x00553780, (void *) &dk2::sub_553780, "sub_553780" },  /* auto */
  { 0x00553800, (void *) &dk2::sub_553800, "sub_553800" },  /* auto */
  { 0x00553880, (void *) &dk2::sub_553880, "sub_553880" },  /* auto */
  { 0x00553A60, (void *) &dk2::MyTextText_idx1091_getMbString, "MyTextText_idx1091_getMbString" },  /* auto */
  { 0x00553A80, (void *) &dk2::MyTextText_getinstance_idx1091, "MyTextText_getinstance_idx1091" },  /* auto */
  { 0x00553A90, (void *) &dk2::MyTextText_getMbString_idx1056_1081, "MyTextText_getMbString_idx1056_1081" },  /* auto */
  { 0x00553AC0, (void *) &dk2::MyTextText_getMbString_idx1000_1023, "MyTextText_getMbString_idx1000_1023" },  /* auto */
  { 0x00553AF0, (void *) &dk2::MyTextText_idx1090_getMbString, "MyTextText_idx1090_getMbString" },  /* auto */
  { 0x00553B10, (void *) &dk2::sub_553B10, "sub_553B10" },  /* auto */
  { 0x00553B20, (void *) &dk2::MyLangObj_static_toUniToMB_2, "MyLangObj_static_toUniToMB_2" },  /* auto */
  { 0x00553B90, (void *) &dk2::MBToUni_convert, "MBToUni_convert" },  /* auto */
  { 0x00553C00, (void *) &dk2::sub_553C00, "sub_553C00" },  /* auto */
  { 0x00553DD0, (void *) &dk2::MyTextText_getMbString_idx1024_1029, "MyTextText_getMbString_idx1024_1029" },  /* auto */
  { 0x00553E80, (void *) &dk2::sub_553E80, "sub_553E80" },  /* auto */
  { 0x00553EE0, (void *) &dk2::sub_553EE0, "sub_553EE0" },  /* auto */
  { 0x00553F00, (void *) &dk2::unknown_libname_32, "unknown_libname_32" },  /* auto */
  { 0x00553F10, (void *) &dk2::TbPNGLoader_static_init, "TbPNGLoader_static_init" },  /* auto */
  { 0x00553F30, (void *) &dk2::TbPNGLoader_static_destroy, "TbPNGLoader_static_destroy" },  /* auto */
  { 0x00553F40, (void *) &dk2::TbTQILoader_static_init, "TbTQILoader_static_init" },  /* auto */
  { 0x00553F60, (void *) &dk2::TbTQILoader_static_destroy, "TbTQILoader_static_destroy" },  /* auto */
  { 0x00553F90, (void *) &dk2::TbBMPLoader_static_init, "TbBMPLoader_static_init" },  /* auto */
  { 0x00553FB0, (void *) &dk2::TbBMPLoader_static_destroy, "TbBMPLoader_static_destroy" },  /* auto */
  { 0x00554000, (void *) &dk2::DiscFileBase_554000, "DiscFileBase_554000" },  /* auto */
  { 0x005540B0, (void *) &dk2::loadArtToSurface, "loadArtToSurface" },  /* auto */
  { 0x00554240, (void *) &dk2::sub_554240, "sub_554240" },  /* auto */
  { 0x00554380, (void *) &dk2::probably_Console_static_init, "probably_Console_static_init" },  /* auto */
  { 0x005543E0, (void *) &dk2::probably_Console_static_destroy, "probably_Console_static_destroy" },  /* auto */
  { 0x00554560, (void *) &dk2::format_string, "format_string" },  /* auto */
  { 0x00554A40, (void *) &dk2::MyGame_static_release, "MyGame_static_release" },  /* auto */
  { 0x005557E0, (void *) &dk2::unicodeToUtf8, "unicodeToUtf8" },  /* auto */
  { 0x00555850, (void *) &dk2::utf8_to_unicode, "utf8_to_unicode" },  /* auto */
  { 0x005558B0, (void *) &dk2::sub_5558B0, "sub_5558B0" },  /* auto */
  { 0x005558D0, (void *) &dk2::badRandomCall, "badRandomCall" },  /* auto */
  { 0x00556170, (void *) &dk2::nullsub_9, "nullsub_9" },    /* auto */
  { 0x00556330, (void *) &dk2::CWindowTest__probably_do_show_window_ev0_7, "CWindowTest__probably_do_show_window_ev0_7" },  /* auto */
  { 0x00556650, (void *) &dk2::CWindowTest_proc, "CWindowTest_proc" },  /* auto */
  { 0x00556EF0, (void *) &dk2::sub_556EF0, "sub_556EF0" },  /* auto */
  { 0x00557090, (void *) &dk2::sub_557090, "sub_557090" },  /* auto */
  { 0x00557230, (void *) &dk2::calc_moon_age, "calc_moon_age" },  /* auto */
  { 0x00557390, (void *) &dk2::MyGame_static_init, "MyGame_static_init" },  /* auto */
  { 0x005573B0, (void *) &dk2::MyGame_static_destroy, "MyGame_static_destroy" },  /* auto */
  { 0x005573C0, (void *) &dk2::collect_devices_DDEnumCB, "collect_devices_DDEnumCB" },  /* auto */
  { 0x005575F0, (void *) &dk2::Direct3DEnumCallback, "Direct3DEnumCallback" },  /* auto */
  { 0x00557820, (void *) &dk2::sub_557820, "sub_557820" },  /* auto */
  { 0x005578E0, (void *) &dk2::collect_ddraw_devices, "collect_ddraw_devices" },  /* auto */
  { 0x00557980, (void *) &dk2::hWindow_enum_DDEnumCB, "hWindow_enum_DDEnumCB" },  /* auto */
  { 0x00557A10, (void *) &dk2::___DDEnumModesCB, "___DDEnumModesCB" },  /* auto */
  { 0x00557AF0, (void *) &dk2::sub_557AF0, "sub_557AF0" },  /* auto */
  { 0x00557EE0, (void *) &dk2::MyGame_enum_DDEnumCB, "MyGame_enum_DDEnumCB" },  /* auto */
  { 0x00557FD0, (void *) &dk2::isOsVersionGE, "isOsVersionGE" },  /* auto */
  { 0x005587E0, (void *) &dk2::Obj6723A0_getDdSurface1, "Obj6723A0_getDdSurface1" },  /* auto */
  { 0x00558A00, (void *) &dk2::MyInputManagerCb_static_setMousePos_, "MyInputManagerCb_static_setMousePos_" },  /* auto */
  { 0x00558C70, (void *) &dk2::myCustomDefWindowProcA, "myCustomDefWindowProcA" },  /* auto */
  { 0x00558DD0, (void *) &dk2::MyGame_D3DENUMDEVICESCALLBACK, "MyGame_D3DENUMDEVICESCALLBACK" },  /* auto */
  { 0x00559050, (void *) &dk2::MyGame_static_559050_parse, "MyGame_static_559050_parse" },  /* auto */
  { 0x005594E0, (void *) &dk2::sub_5594E0, "sub_5594E0" },  /* auto */
  { 0x005595C0, (void *) &dk2::MyGame_debugMsg, "MyGame_debugMsg" },  /* auto */
  { 0x00559710, (void *) &dk2::MyGame_static_callback, "MyGame_static_callback" },  /* auto */
  { 0x00559770, (void *) &dk2::MyGame_sub_559770, "MyGame_sub_559770" },  /* auto */
  { 0x00559B90, (void *) &dk2::sub_559B90, "sub_559B90" },  /* auto */
  { 0x00559BB0, (void *) &dk2::unknown_libname_38, "unknown_libname_38" },  /* auto */
  { 0x00559D70, (void *) &dk2::sub_559D70, "sub_559D70" },  /* auto */
  { 0x00559ED0, (void *) &dk2::sub_559ED0, "sub_559ED0" },  /* auto */
  { 0x0055A4D0, (void *) &dk2::sub_55A4D0, "sub_55A4D0" },  /* auto */
  { 0x0055A850, (void *) &dk2::MLDPlay_error_to_string, "MLDPlay_error_to_string" },  /* auto */
  { 0x0055AF10, (void *) &dk2::MyResources_static_init, "MyResources_static_init" },  /* auto */
  { 0x0055AF30, (void *) &dk2::MyResources_static_destroy, "MyResources_static_destroy" },  /* auto */
  { 0x0055B370, (void *) &dk2::sub_55B370, "sub_55B370" },  /* auto */
  { 0x0055BE80, (void *) &dk2::CFileManager_readAndParseWad, "CFileManager_readAndParseWad" },  /* auto */
  { 0x0055BF40, (void *) &dk2::CFileManager_setPathFormat, "CFileManager_setPathFormat" },  /* auto */
  { 0x0055C940, (void *) &dk2::sub_55C940, "sub_55C940" },  /* auto */
  { 0x0055CE80, (void *) &dk2::sub_55CE80, "sub_55CE80" },  /* auto */
  { 0x0055D530, (void *) &dk2::sub_55D530, "sub_55D530" },  /* auto */
  { 0x0055DD70, (void *) &dk2::___sub_55DD70_newCampagin, "___sub_55DD70_newCampagin" },  /* auto */
  { 0x0055DDF0, (void *) &dk2::sub_55DDF0, "sub_55DDF0" },  /* auto */
  { 0x0055E1B0, (void *) &dk2::sub_55E1B0, "sub_55E1B0" },  /* auto */
  { 0x0055EBE0, (void *) &dk2::sub_55EBE0, "sub_55EBE0" },  /* auto */
  { 0x0055EC10, (void *) &dk2::sub_55EC10, "sub_55EC10" },  /* auto */
  { 0x0055EEC0, (void *) &dk2::settings_openPlayerRegKey, "settings_openPlayerRegKey" },  /* auto */
  { 0x00560FD0, (void *) &dk2::sub_560FD0, "sub_560FD0" },  /* auto */
  { 0x00560FE0, (void *) &dk2::sub_560FE0, "sub_560FE0" },  /* auto */
  { 0x00562A30, (void *) &dk2::sub_562A30, "sub_562A30" },  /* auto */
  { 0x00563E30, (void *) &dk2::RegKey_static_checkDk2Keys_563E30, "RegKey_static_checkDk2Keys_563E30" },  /* auto */
  { 0x00567080, (void *) &dk2::sub_567080, "sub_567080" },  /* auto */
  { 0x005670D0, (void *) &dk2::sub_5670D0, "sub_5670D0" },  /* auto */
  { 0x005670F0, (void *) &dk2::sub_5670F0, "sub_5670F0" },  /* auto */
  { 0x00567100, (void *) &dk2::CSoundSystem_static_init, "CSoundSystem_static_init" },  /* auto */
  { 0x00567120, (void *) &dk2::CSoundSystem_static_destroy, "CSoundSystem_static_destroy" },  /* auto */
  { 0x00567130, (void *) &dk2::MySound_static_init, "MySound_static_init" },  /* auto */
  { 0x005671D0, (void *) &dk2::ret_void_4args, "ret_void_4args" },  /* auto */
  { 0x005671E0, (void *) &dk2::ret_void_1args, "ret_void_1args" },  /* auto */
  { 0x00567DE0, (void *) &dk2::CSoundSystem_init_sound, "CSoundSystem_init_sound" },  /* auto */
  { 0x00567F10, (void *) &dk2::CSpeechSystem_static_init, "CSpeechSystem_static_init" },  /* auto */
  { 0x00567F80, (void *) &dk2::CSpeechSystem_static_destroy, "CSpeechSystem_static_destroy" },  /* auto */
  { 0x0056A250, (void *) &dk2::sub_56A250, "sub_56A250" },  /* auto */
  { 0x0056A6D0, (void *) &dk2::sub_56A6D0, "sub_56A6D0" },  /* auto */
  { 0x0056AC80, (void *) &dk2::sub_56AC80, "sub_56AC80" },  /* auto */
  { 0x0056B210, (void *) &dk2::sub_56B210, "sub_56B210" },  /* auto */
  { 0x0056B740, (void *) &dk2::sub_56B740, "sub_56B740" },  /* auto */
  { 0x0056BCF0, (void *) &dk2::sub_56BCF0, "sub_56BCF0" },  /* auto */
  { 0x0056C4E0, (void *) &dk2::sub_56C4E0, "sub_56C4E0" },  /* auto */
  { 0x0056CBD0, (void *) &dk2::sub_56CBD0, "sub_56CBD0" },  /* auto */
  { 0x0056D2D0, (void *) &dk2::sub_56D2D0, "sub_56D2D0" },  /* auto */
  { 0x0056D880, (void *) &dk2::sub_56D880, "sub_56D880" },  /* auto */
  { 0x0056DAD0, (void *) &dk2::sub_56DAD0, "sub_56DAD0" },  /* auto */
  { 0x0056E300, (void *) &dk2::sub_56E300, "sub_56E300" },  /* auto */
  { 0x0056E900, (void *) &dk2::sub_56E900, "sub_56E900" },  /* auto */
  { 0x0056F090, (void *) &dk2::sub_56F090, "sub_56F090" },  /* auto */
  { 0x0056FA00, (void *) &dk2::sub_56FA00, "sub_56FA00" },  /* auto */
  { 0x005700A0, (void *) &dk2::sub_5700A0, "sub_5700A0" },  /* auto */
  { 0x00570210, (void *) &dk2::sub_570210, "sub_570210" },  /* auto */
  { 0x00570500, (void *) &dk2::sub_570500, "sub_570500" },  /* auto */
  { 0x00570630, (void *) &dk2::sub_570630, "sub_570630" },  /* auto */
  { 0x005707C0, (void *) &dk2::sub_5707C0, "sub_5707C0" },  /* auto */
  { 0x005708A0, (void *) &dk2::sub_5708A0, "sub_5708A0" },  /* auto */
  { 0x00570A20, (void *) &dk2::sub_570A20, "sub_570A20" },  /* auto */
  { 0x00571040, (void *) &dk2::sub_571040, "sub_571040" },  /* auto */
  { 0x00571290, (void *) &dk2::sub_571290, "sub_571290" },  /* auto */
  { 0x005716E0, (void *) &dk2::sub_5716E0, "sub_5716E0" },  /* auto */
  { 0x00571910, (void *) &dk2::set_g2_screenArea, "set_g2_screenArea" },  /* auto */
  { 0x00571990, (void *) &dk2::sub_571990, "sub_571990" },  /* auto */
  { 0x00571A70, (void *) &dk2::sub_571A70, "sub_571A70" },  /* auto */
  { 0x00571A90, (void *) &dk2::sub_571A90, "sub_571A90" },  /* auto */
  { 0x00571AB0, (void *) &dk2::sub_571AB0, "sub_571AB0" },  /* auto */
  { 0x00571AD0, (void *) &dk2::sub_571AD0, "sub_571AD0" },  /* auto */
  { 0x00571AE0, (void *) &dk2::sub_571AE0, "sub_571AE0" },  /* auto */
  { 0x00571B00, (void *) &dk2::sub_571B00, "sub_571B00" },  /* auto */
  { 0x00571C50, (void *) &dk2::sub_571C50, "sub_571C50" },  /* auto */
  { 0x00571DA0, (void *) &dk2::sub_571DA0, "sub_571DA0" },  /* auto */
  { 0x00571E00, (void *) &dk2::sub_571E00, "sub_571E00" },  /* auto */
  { 0x00571E60, (void *) &dk2::sub_571E60, "sub_571E60" },  /* auto */
  { 0x00571F00, (void *) &dk2::sub_571F00, "sub_571F00" },  /* auto */
  { 0x00572060, (void *) &dk2::sub_572060, "sub_572060" },  /* auto */
  { 0x005722A0, (void *) &dk2::sub_5722A0, "sub_5722A0" },  /* auto */
  { 0x005723D0, (void *) &dk2::sub_5723D0, "sub_5723D0" },  /* auto */
  { 0x005725D0, (void *) &dk2::sub_5725D0, "sub_5725D0" },  /* auto */
  { 0x00572820, (void *) &dk2::sub_572820, "sub_572820" },  /* auto */
  { 0x00572920, (void *) &dk2::sub_572920, "sub_572920" },  /* auto */
  { 0x00572A70, (void *) &dk2::sub_572A70, "sub_572A70" },  /* auto */
  { 0x00572CF0, (void *) &dk2::sub_572CF0, "sub_572CF0" },  /* auto */
  { 0x00572E00, (void *) &dk2::sub_572E00, "sub_572E00" },  /* auto */
  { 0x00572F60, (void *) &dk2::sub_572F60, "sub_572F60" },  /* auto */
  { 0x005735A0, (void *) &dk2::sub_5735A0, "sub_5735A0" },  /* auto */
  { 0x005737E0, (void *) &dk2::sub_5737E0, "sub_5737E0" },  /* auto */
  { 0x00573CF0, (void *) &dk2::configureFlagsAndTexturesCount, "configureFlagsAndTexturesCount" },  /* auto */
  { 0x00573ED0, (void *) &dk2::settupDirectDraw, "settupDirectDraw" },  /* auto */
  { 0x005741D0, (void *) &dk2::sub_5741D0, "sub_5741D0" },  /* auto */
  { 0x00574200, (void *) &dk2::setGammaRamp, "setGammaRamp" },  /* auto */
  { 0x00574240, (void *) &dk2::sub_574240, "sub_574240" },  /* auto */
  { 0x005742F0, (void *) &dk2::MyHeap_autoremoveObjects, "MyHeap_autoremoveObjects" },  /* auto */
  { 0x00574310, (void *) &dk2::LoadCachedTextures, "LoadCachedTextures" },  /* auto */
  { 0x005747B0, (void *) &dk2::sub_5747B0, "sub_5747B0" },  /* auto */
  { 0x005747C0, (void *) &dk2::setPmeshReductionLevel, "setPmeshReductionLevel" },  /* auto */
  { 0x005747D0, (void *) &dk2::sub_5747D0, "sub_5747D0" },  /* auto */
  { 0x005747E0, (void *) &dk2::sub_5747E0, "sub_5747E0" },  /* auto */
  { 0x00574820, (void *) &dk2::sub_574820, "sub_574820" },  /* auto */
  { 0x00575700, (void *) &dk2::sub_575700, "sub_575700" },  /* auto */
  { 0x00575780, (void *) &dk2::drawScene, "drawScene" },    /* auto */
  { 0x00575A00, (void *) &dk2::sub_575A00, "sub_575A00" },  /* auto */
  { 0x00575D70, (void *) &dk2::sub_575D70, "sub_575D70" },  /* auto */
  { 0x00575F10, (void *) &dk2::sub_575F10, "sub_575F10" },  /* auto */
  { 0x00575FA0, (void *) &dk2::sub_575FA0, "sub_575FA0" },  /* auto */
  { 0x00575FD0, (void *) &dk2::sub_575FD0, "sub_575FD0" },  /* auto */
  { 0x00576010, (void *) &dk2::sub_576010, "sub_576010" },  /* auto */
  { 0x00576230, (void *) &dk2::sub_576230, "sub_576230" },  /* auto */
  { 0x005767C0, (void *) &dk2::sub_5767C0, "sub_5767C0" },  /* auto */
  { 0x005767E0, (void *) &dk2::sub_5767E0, "sub_5767E0" },  /* auto */
  { 0x005785E0, (void *) &dk2::CEngineWorldPrimitive_fun_5785E0, "CEngineWorldPrimitive_fun_5785E0" },  /* auto */
  { 0x00578DE0, (void *) &dk2::sub_578DE0, "sub_578DE0" },  /* auto */
  { 0x00578E40, (void *) &dk2::sub_578E40, "sub_578E40" },  /* auto */
  { 0x00578E50, (void *) &dk2::sub_578E50, "sub_578E50" },  /* auto */
  { 0x00578E80, (void *) &dk2::sub_578E80, "sub_578E80" },  /* auto */
  { 0x00578EC0, (void *) &dk2::CEngine2DRotatableSprite_create, "CEngine2DRotatableSprite_create" },  /* auto */
  { 0x00579180, (void *) &dk2::CEngine2DSprite_create, "CEngine2DSprite_create" },  /* auto */
  { 0x005794B0, (void *) &dk2::CEngine2DMeshSurface_create, "CEngine2DMeshSurface_create" },  /* auto */
  { 0x00579730, (void *) &dk2::CEngine2DStaticMesh_create, "CEngine2DStaticMesh_create" },  /* auto */
  { 0x00579A10, (void *) &dk2::CEngine2DAnimMesh_create, "CEngine2DAnimMesh_create" },  /* auto */
  { 0x00579CF0, (void *) &dk2::CEngineVirtualPerspective2DAnimMesh_create, "CEngineVirtualPerspective2DAnimMesh_create" },  /* auto */
  { 0x0057BBE0, (void *) &dk2::sub_57BBE0, "sub_57BBE0" },  /* auto */
  { 0x0057C270, (void *) &dk2::MyEntryBuf_MyScaledSurface_static_init, "MyEntryBuf_MyScaledSurface_static_init" },  /* auto */
  { 0x0057C290, (void *) &dk2::MyStringHashMap_MyScaledSurface_static_constructor, "MyStringHashMap_MyScaledSurface_static_constructor" },  /* auto */
  { 0x0057C2B0, (void *) &dk2::MyStringHashMap_MyScaledSurface_static_destructor, "MyStringHashMap_MyScaledSurface_static_destructor" },  /* auto */
  { 0x0057C780, (void *) &dk2::MyEntryBuf_MyScaledSurface_getByIdx, "MyEntryBuf_MyScaledSurface_getByIdx" },  /* auto */
  { 0x0057C7B0, (void *) &dk2::MyEntryBuf_MyScaledSurface_static_alloc, "MyEntryBuf_MyScaledSurface_static_alloc" },  /* auto */
  { 0x0057C7E0, (void *) &dk2::sub_57C7E0, "sub_57C7E0" },  /* auto */
  { 0x0057C850, (void *) &dk2::MyEntryBuf_MyScaledSurface_create, "MyEntryBuf_MyScaledSurface_create" },  /* auto */
  { 0x0057C920, (void *) &dk2::CPCEngineInterface_57C920, "CPCEngineInterface_57C920" },  /* auto */
  { 0x0057C950, (void *) &dk2::sub_57C950, "sub_57C950" },  /* auto */
  { 0x0057C970, (void *) &dk2::MyDblNamedSurface_createPrescaled, "MyDblNamedSurface_createPrescaled" },  /* auto */
  { 0x0057CBE0, (void *) &dk2::MyHeap_static_init, "MyHeap_static_init" },  /* auto */
  { 0x0057CCF0, (void *) &dk2::MyHeap_static_destroy, "MyHeap_static_destroy" },  /* auto */
  { 0x0057CD30, (void *) &dk2::MyHeap_alloc_impl, "MyHeap_alloc_impl" },  /* auto */
  { 0x0057CEB0, (void *) &dk2::MyHeap_alloc, "MyHeap_alloc" },  /* auto */
  { 0x0057D0B0, (void *) &dk2::MyHeap_free, "MyHeap_free" },  /* auto */
  { 0x0057D270, (void *) &dk2::sub_57D270, "sub_57D270" },  /* auto */
  { 0x0057D390, (void *) &dk2::sub_57D390, "sub_57D390" },  /* auto */
  { 0x0057D5B0, (void *) &dk2::sub_57D5B0, "sub_57D5B0" },  /* auto */
  { 0x0057DAC0, (void *) &dk2::sub_57DAC0, "sub_57DAC0" },  /* auto */
  { 0x0057DAD0, (void *) &dk2::sub_57DAD0, "sub_57DAD0" },  /* auto */
  { 0x0057E110, (void *) &dk2::sub_57E110, "sub_57E110" },  /* auto */
  { 0x0057EB60, (void *) &dk2::ret_2_0args, "ret_2_0args" },  /* auto */
  { 0x0057ECF0, (void *) &dk2::sub_57ECF0, "sub_57ECF0" },  /* auto */
  { 0x0057ED10, (void *) &dk2::sub_57ED10, "sub_57ED10" },  /* auto */
  { 0x0057ED30, (void *) &dk2::sub_57ED30, "sub_57ED30" },  /* auto */
  { 0x0057EDE0, (void *) &dk2::cleanup_57EDE0, "cleanup_57EDE0" },  /* auto */
  { 0x0057EED0, (void *) &dk2::sub_57EED0, "sub_57EED0" },  /* auto */
  { 0x0057EEF0, (void *) &dk2::sub_57EEF0, "sub_57EEF0" },  /* auto */
  { 0x0057EF30, (void *) &dk2::unkh18_getOrCreate, "unkh18_getOrCreate" },  /* auto */
  { 0x0057F010, (void *) &dk2::sub_57F010, "sub_57F010" },  /* auto */
  { 0x0057F030, (void *) &dk2::sub_57F030, "sub_57F030" },  /* auto */
  { 0x0057F090, (void *) &dk2::transformFlags, "transformFlags" },  /* auto */
  { 0x0057F1C0, (void *) &dk2::CEngineWorldPrimitive_fun_57F1C0, "CEngineWorldPrimitive_fun_57F1C0" },  /* auto */
  { 0x00580470, (void *) &dk2::ret_void_2args, "ret_void_2args" },  /* auto */
  { 0x00586A70, (void *) &dk2::static_appendToSceneObject2EList, "static_appendToSceneObject2EList" },  /* auto */
  { 0x00588AE0, (void *) &dk2::mymgsr_vertices_Static_destructor, "mymgsr_vertices_Static_destructor" },  /* auto */
  { 0x00588B00, (void *) &dk2::my_indicies_static_destroy, "my_indicies_static_destroy" },  /* auto */
  { 0x00588B20, (void *) &dk2::sub_588B20, "sub_588B20" },  /* auto */
  { 0x00588B40, (void *) &dk2::MyEntryBuf_Triangle34_static_destroy, "MyEntryBuf_Triangle34_static_destroy" },  /* auto */
  { 0x00588B60, (void *) &dk2::Triangle34_add, "Triangle34_add" },  /* auto */
  { 0x00588C40, (void *) &dk2::MyEntryBuf_Triangle24_add, "MyEntryBuf_Triangle24_add" },  /* auto */
  { 0x00588D00, (void *) &dk2::draw_tex_to_buf_impl2, "draw_tex_to_buf_impl2" },  /* auto */
  { 0x00588F90, (void *) &dk2::draw_tex_to_buf_impl1, "draw_tex_to_buf_impl1" },  /* auto */
  { 0x00589140, (void *) &dk2::MyCESurfHandle_static_addToHashList_flagsOr400, "MyCESurfHandle_static_addToHashList_flagsOr400" },  /* auto */
  { 0x00589160, (void *) &dk2::mgsr_setDrawFun, "mgsr_setDrawFun" },  /* auto */
  { 0x00589250, (void *) &dk2::DirectDraw_prepareTexture, "DirectDraw_prepareTexture" },  /* auto */
  { 0x005898F0, (void *) &dk2::draw_tex_to_buf, "draw_tex_to_buf" },  /* auto */
  { 0x00589910, (void *) &dk2::mydd_cpy_destroy, "mydd_cpy_destroy" },  /* auto */
  { 0x005899F0, (void *) &dk2::mydd_cpy_init, "mydd_cpy_init" },  /* auto */
  { 0x00589C90, (void *) &dk2::sub_589C90, "sub_589C90" },  /* auto */
  { 0x00589D70, (void *) &dk2::sub_589D70, "sub_589D70" },  /* auto */
  { 0x00589D90, (void *) &dk2::addObjectToScene, "addObjectToScene" },  /* auto */
  { 0x0058A000, (void *) &dk2::DrawTriangleList, "DrawTriangleList" },  /* auto */
  { 0x0058A150, (void *) &dk2::drawTexToSurfTriangles, "drawTexToSurfTriangles" },  /* auto */
  { 0x0058A3B0, (void *) &dk2::sub_58A3B0, "sub_58A3B0" },  /* auto */
  { 0x0058A4F0, (void *) &dk2::sub_58A4F0, "sub_58A4F0" },  /* auto */
  { 0x0058A520, (void *) &dk2::mydd_cpy2_init, "mydd_cpy2_init" },  /* auto */
  { 0x0058A550, (void *) &dk2::sub_58A550, "sub_58A550" },  /* auto */
  { 0x0058A570, (void *) &dk2::sub_58A570, "sub_58A570" },  /* auto */
  { 0x0058A6F0, (void *) &dk2::sub_58A6F0, "sub_58A6F0" },  /* auto */
  { 0x0058A970, (void *) &dk2::__renderFun_setSceneObject2E, "__renderFun_setSceneObject2E" },  /* auto */
  { 0x0058AC20, (void *) &dk2::sub_58AC20, "sub_58AC20" },  /* auto */
  { 0x0058ACB0, (void *) &dk2::sub_58ACB0, "sub_58ACB0" },  /* auto */
  { 0x0058AD10, (void *) &dk2::sub_58AD10, "sub_58AD10" },  /* auto */
  { 0x0058AD70, (void *) &dk2::sub_58AD70, "sub_58AD70" },  /* auto */
  { 0x0058ADC0, (void *) &dk2::sub_58ADC0, "sub_58ADC0" },  /* auto */
  { 0x0058AF70, (void *) &dk2::sub_58AF70, "sub_58AF70" },  /* auto */
  { 0x0058B190, (void *) &dk2::sub_58B190, "sub_58B190" },  /* auto */
  { 0x0058B2A0, (void *) &dk2::sub_58B2A0, "sub_58B2A0" },  /* auto */
  { 0x0058B370, (void *) &dk2::sub_58B370, "sub_58B370" },  /* auto */
  { 0x0058B440, (void *) &dk2::sub_58B440, "sub_58B440" },  /* auto */
  { 0x0058B680, (void *) &dk2::sub_58B680, "sub_58B680" },  /* auto */
  { 0x0058B940, (void *) &dk2::sub_58B940, "sub_58B940" },  /* auto */
  { 0x0058B9D0, (void *) &dk2::sub_58B9D0, "sub_58B9D0" },  /* auto */
  { 0x0058BB60, (void *) &dk2::sub_58BB60, "sub_58BB60" },  /* auto */
  { 0x0058C450, (void *) &dk2::sub_58C450, "sub_58C450" },  /* auto */
  { 0x0058C680, (void *) &dk2::sub_58C680, "sub_58C680" },  /* auto */
  { 0x0058C890, (void *) &dk2::sub_58C890, "sub_58C890" },  /* auto */
  { 0x0058CA80, (void *) &dk2::sub_58CA80, "sub_58CA80" },  /* auto */
  { 0x0058CC40, (void *) &dk2::sub_58CC40, "sub_58CC40" },  /* auto */
  { 0x0058D580, (void *) &dk2::sub_58D580, "sub_58D580" },  /* auto */
  { 0x0058D790, (void *) &dk2::sub_58D790, "sub_58D790" },  /* auto */
  { 0x0058D990, (void *) &dk2::sub_58D990, "sub_58D990" },  /* auto */
  { 0x0058DB70, (void *) &dk2::sub_58DB70, "sub_58DB70" },  /* auto */
  { 0x0058DD40, (void *) &dk2::sub_58DD40, "sub_58DD40" },  /* auto */
  { 0x0058E080, (void *) &dk2::sub_58E080, "sub_58E080" },  /* auto */
  { 0x0058E2C0, (void *) &dk2::sub_58E2C0, "sub_58E2C0" },  /* auto */
  { 0x0058E330, (void *) &dk2::shadows_init, "shadows_init" },  /* auto */
  { 0x0058E3E0, (void *) &dk2::sub_58E3E0, "sub_58E3E0" },  /* auto */
  { 0x0058E440, (void *) &dk2::sub_58E440, "sub_58E440" },  /* auto */
  { 0x0058E470, (void *) &dk2::sub_58E470, "sub_58E470" },  /* auto */
  { 0x0058E580, (void *) &dk2::sub_58E580, "sub_58E580" },  /* auto */
  { 0x0058E640, (void *) &dk2::sub_58E640, "sub_58E640" },  /* auto */
  { 0x0058EE60, (void *) &dk2::sub_58EE60, "sub_58EE60" },  /* auto */
  { 0x0058F480, (void *) &dk2::sub_58F480, "sub_58F480" },  /* auto */
  { 0x0058F510, (void *) &dk2::SceneObject2EList_static_destructor, "SceneObject2EList_static_destructor" },  /* auto */
  { 0x0058F530, (void *) &dk2::objects30ToDraw_static_destructor, "objects30ToDraw_static_destructor" },  /* auto */
  { 0x0058F550, (void *) &dk2::SceneObject2EList_SceneObject30List_static_init, "SceneObject2EList_SceneObject30List_static_init" },  /* auto */
  { 0x0058F5F0, (void *) &dk2::SceneObject2EList_SceneObject30List_static_destroy, "SceneObject2EList_SceneObject30List_static_destroy" },  /* auto */
  { 0x0058F640, (void *) &dk2::draw3dScene, "draw3dScene" },  /* auto */
  { 0x0058F980, (void *) &dk2::sub_58F980, "sub_58F980" },  /* auto */
  { 0x0058F9E0, (void *) &dk2::MyStringHashMap_MyCESurfHandle_static_constructor, "MyStringHashMap_MyCESurfHandle_static_constructor" },  /* auto */
  { 0x0058FA00, (void *) &dk2::MyStringHashMap_MyCESurfHandle_static_destructor, "MyStringHashMap_MyCESurfHandle_static_destructor" },  /* auto */
  { 0x0058FA20, (void *) &dk2::MyTextures_static_constructor, "MyTextures_static_constructor" },  /* auto */
  { 0x0058FA40, (void *) &dk2::MyTextures_static_destructor, "MyTextures_static_destructor" },  /* auto */
  { 0x0058FB00, (void *) &dk2::MySurface_58FB00, "MySurface_58FB00" },  /* auto */
  { 0x0058FCB0, (void *) &dk2::MySurface_58FCB0, "MySurface_58FCB0" },  /* auto */
  { 0x0058FE80, (void *) &dk2::MySurface_58FE80, "MySurface_58FE80" },  /* auto */
  { 0x0058FF70, (void *) &dk2::MySurface_58FF70, "MySurface_58FF70" },  /* auto */
  { 0x00590000, (void *) &dk2::MySurface_590000, "MySurface_590000" },  /* auto */
  { 0x00590240, (void *) &dk2::sub_590240, "sub_590240" },  /* auto */
  { 0x005915A0, (void *) &dk2::sub_5915A0, "sub_5915A0" },  /* auto */
  { 0x00591DA0, (void *) &dk2::SurfaceHolder_create, "SurfaceHolder_create" },  /* auto */
  { 0x00591FF0, (void *) &dk2::SurfaceHolder_draw, "SurfaceHolder_draw" },  /* auto */
  { 0x005924A0, (void *) &dk2::MySurfaceWrapper_createPrescaled, "MySurfaceWrapper_createPrescaled" },  /* auto */
  { 0x00592720, (void *) &dk2::MyTextures_resetCacheDir, "MyTextures_resetCacheDir" },  /* auto */
  { 0x00592950, (void *) &dk2::destroySurfHashLists, "destroySurfHashLists" },  /* auto */
  { 0x00592B80, (void *) &dk2::SurfaceHolder_setTexture, "SurfaceHolder_setTexture" },  /* auto */
  { 0x00592EA0, (void *) &dk2::mydd_cpy3_initSurfHashLists, "mydd_cpy3_initSurfHashLists" },  /* auto */
  { 0x00593280, (void *) &dk2::surfaces_cleanup, "surfaces_cleanup" },  /* auto */
  { 0x00593350, (void *) &dk2::D3DENUMPIXELFORMATSCALLBACK_proc, "D3DENUMPIXELFORMATSCALLBACK_proc" },  /* auto */
  { 0x005934C0, (void *) &dk2::MyCESurfHandle_cleanup, "MyCESurfHandle_cleanup" },  /* auto */
  { 0x00593640, (void *) &dk2::sub_593640, "sub_593640" },  /* auto */
  { 0x00593720, (void *) &dk2::MyCESurfHandle_static_addToHashList, "MyCESurfHandle_static_addToHashList" },  /* auto */
  { 0x00593F20, (void *) &dk2::__probablySortSurfListX3_593F20, "__probablySortSurfListX3_593F20" },  /* auto */
  { 0x00594BA0, (void *) &dk2::MyCESurfHandle_getName, "MyCESurfHandle_getName" },  /* auto */
  { 0x00594C70, (void *) &dk2::MyTextures_hasTexture, "MyTextures_hasTexture" },  /* auto */
  { 0x00595990, (void *) &dk2::sub_595990, "sub_595990" },  /* auto */
  { 0x005974A0, (void *) &dk2::FloatObjThing_init_retGammaRampRes, "FloatObjThing_init_retGammaRampRes" },  /* auto */
  { 0x00598270, (void *) &dk2::sub_598270, "sub_598270" },  /* auto */
  { 0x00598290, (void *) &dk2::CPCEngineInterface_destructor2, "CPCEngineInterface_destructor2" },  /* auto */
  { 0x005986D0, (void *) &dk2::CPCEngineInterface_fun_5986D0, "CPCEngineInterface_fun_5986D0" },  /* auto */
  { 0x00598800, (void *) &dk2::CPCEngineInterface_fun_598800, "CPCEngineInterface_fun_598800" },  /* auto */
  { 0x005998C0, (void *) &dk2::CPCEngineInterface_fun_5998C0, "CPCEngineInterface_fun_5998C0" },  /* auto */
  { 0x00599C00, (void *) &dk2::sub_599C00, "sub_599C00" },  /* auto */
  { 0x0059A3C0, (void *) &dk2::hasTexture, "hasTexture" },  /* auto */
  { 0x0059A4B0, (void *) &dk2::MyResources_loadPng, "MyResources_loadPng" },  /* auto */
  { 0x0059A500, (void *) &dk2::sub_59A500, "sub_59A500" },  /* auto */
  { 0x0059A570, (void *) &dk2::sub_59A570, "sub_59A570" },  /* auto */
  { 0x0059A5C0, (void *) &dk2::sub_59A5C0, "sub_59A5C0" },  /* auto */
  { 0x0059A5E0, (void *) &dk2::sub_59A5E0, "sub_59A5E0" },  /* auto */
  { 0x0059A600, (void *) &dk2::sub_59A600, "sub_59A600" },  /* auto */
  { 0x0059A630, (void *) &dk2::sub_59A630, "sub_59A630" },  /* auto */
  { 0x0059ACA0, (void *) &dk2::sub_59ACA0, "sub_59ACA0" },  /* auto */
  { 0x0059AD80, (void *) &dk2::sub_59AD80, "sub_59AD80" },  /* auto */
  { 0x0059B0B0, (void *) &dk2::nullsub_19, "nullsub_19" },  /* auto */
  { 0x0059BB80, (void *) &dk2::sub_59BB80, "sub_59BB80" },  /* auto */
  { 0x0059C010, (void *) &dk2::ret_void_6args, "ret_void_6args" },  /* auto */
  { 0x0059C020, (void *) &dk2::sub_59C020, "sub_59C020" },  /* auto */
  { 0x0059C0D0, (void *) &dk2::CPCEngineInterface_fun_59C0D0, "CPCEngineInterface_fun_59C0D0" },  /* auto */
  { 0x0059C2A0, (void *) &dk2::sub_59C2A0, "sub_59C2A0" },  /* auto */
  { 0x0059C360, (void *) &dk2::sub_59C360, "sub_59C360" },  /* auto */
  { 0x0059C720, (void *) &dk2::sub_59C720, "sub_59C720" },  /* auto */
  { 0x0059D010, (void *) &dk2::sub_59D010, "sub_59D010" },  /* auto */
  { 0x0059D4B0, (void *) &dk2::sub_59D4B0, "sub_59D4B0" },  /* auto */
  { 0x0059D5F0, (void *) &dk2::sub_59D5F0, "sub_59D5F0" },  /* auto */
  { 0x0059D8D0, (void *) &dk2::CPCEngineInterface_WM_ACTIVATE_cb, "CPCEngineInterface_WM_ACTIVATE_cb" },  /* auto */
  { 0x0059DAD0, (void *) &dk2::sub_59DAD0, "sub_59DAD0" },  /* auto */
  { 0x0059DB70, (void *) &dk2::sub_59DB70, "sub_59DB70" },  /* auto */
  { 0x0059DBD0, (void *) &dk2::sub_59DBD0, "sub_59DBD0" },  /* auto */
  { 0x0059DCA0, (void *) &dk2::sub_59DCA0, "sub_59DCA0" },  /* auto */
  { 0x0059DD30, (void *) &dk2::sub_59DD30, "sub_59DD30" },  /* auto */
  { 0x0059E210, (void *) &dk2::sub_59E210, "sub_59E210" },  /* auto */
  { 0x0059E3A0, (void *) &dk2::sub_59E3A0, "sub_59E3A0" },  /* auto */
  { 0x0059E400, (void *) &dk2::sub_59E400, "sub_59E400" },  /* auto */
  { 0x0059E480, (void *) &dk2::sub_59E480, "sub_59E480" },  /* auto */
  { 0x0059E670, (void *) &dk2::sub_59E670, "sub_59E670" },  /* auto */
  { 0x0059E700, (void *) &dk2::sub_59E700, "sub_59E700" },  /* auto */
  { 0x0059E750, (void *) &dk2::ProceduralMesh_cpp_59E750, "ProceduralMesh_cpp_59E750" },  /* auto */
  { 0x0059EC90, (void *) &dk2::sub_59EC90, "sub_59EC90" },  /* auto */
  { 0x0059ECF0, (void *) &dk2::sub_59ECF0, "sub_59ECF0" },  /* auto */
  { 0x0059ED80, (void *) &dk2::ProceduralMesh_cpp_59ED80, "ProceduralMesh_cpp_59ED80" },  /* auto */
  { 0x0059F2F0, (void *) &dk2::sub_59F2F0, "sub_59F2F0" },  /* auto */
  { 0x0059F3C0, (void *) &dk2::sub_59F3C0, "sub_59F3C0" },  /* auto */
  { 0x0059F4B0, (void *) &dk2::sub_59F4B0, "sub_59F4B0" },  /* auto */
  { 0x0059F760, (void *) &dk2::sub_59F760, "sub_59F760" },  /* auto */
  { 0x0059F940, (void *) &dk2::sub_59F940, "sub_59F940" },  /* auto */
  { 0x0059FBE0, (void *) &dk2::sub_59FBE0, "sub_59FBE0" },  /* auto */
  { 0x0059FDD0, (void *) &dk2::sub_59FDD0, "sub_59FDD0" },  /* auto */
  { 0x005A0030, (void *) &dk2::sub_5A0030, "sub_5A0030" },  /* auto */
  { 0x005A1070, (void *) &dk2::sub_5A1070, "sub_5A1070" },  /* auto */
  { 0x005A18A0, (void *) &dk2::sub_5A18A0, "sub_5A18A0" },  /* auto */
  { 0x005A3220, (void *) &dk2::sub_5A3220, "sub_5A3220" },  /* auto */
  { 0x005A37F0, (void *) &dk2::sub_5A37F0, "sub_5A37F0" },  /* auto */
  { 0x005A4730, (void *) &dk2::mpeg2__putpict, "mpeg2__putpict" },  /* auto */
  { 0x005A4E20, (void *) &dk2::sub_5A4E20, "sub_5A4E20" },  /* auto */
  { 0x005A53F0, (void *) &dk2::sub_5A53F0, "sub_5A53F0" },  /* auto */
  { 0x005A55A0, (void *) &dk2::sub_5A55A0, "sub_5A55A0" },  /* auto */
  { 0x005A5730, (void *) &dk2::sub_5A5730, "sub_5A5730" },  /* auto */
  { 0x005A58A0, (void *) &dk2::mpeg2_putbits, "mpeg2_putbits" },  /* auto */
  { 0x005A5980, (void *) &dk2::mpeg2_putintrablk, "mpeg2_putintrablk" },  /* auto */
  { 0x005A5DA0, (void *) &dk2::dk2_main, "dk2_main" },      /* auto */
  { 0x005A63B0, (void *) &dk2::parse_command_line, "parse_command_line" },  /* auto */
  { 0x005A6CD0, (void *) &dk2::drawToSurface_mgsr, "drawToSurface_mgsr" },  /* auto */
  { 0x005A7100, (void *) &dk2::drawToSurface32bit, "drawToSurface32bit" },  /* auto */
  { 0x005A7210, (void *) &dk2::render_clearBuffers, "render_clearBuffers" },  /* auto */
  { 0x005A7270, (void *) &dk2::drawTriangle34_impl4, "drawTriangle34_impl4" },  /* auto */
  { 0x005A73F0, (void *) &dk2::drawTriangle34_impl2, "drawTriangle34_impl2" },  /* auto */
  { 0x005A74B0, (void *) &dk2::drawTriangle34_impl1, "drawTriangle34_impl1" },  /* auto */
  { 0x005A7550, (void *) &dk2::drawTriangle34_impl3, "drawTriangle34_impl3" },  /* auto */
  { 0x005A7600, (void *) &dk2::init_mgsr, "init_mgsr" },    /* auto */
  { 0x005A78E0, (void *) &dk2::sub_5A78E0, "sub_5A78E0" },  /* auto */
  { 0x005A7900, (void *) &dk2::sub_5A7900, "sub_5A7900" },  /* auto */
  { 0x005A7920, (void *) &dk2::mgsr_initBuffers, "mgsr_initBuffers" },  /* auto */
  { 0x005A7980, (void *) &dk2::mgsr_alloc_buf, "mgsr_alloc_buf" },  /* auto */
  { 0x005A79C0, (void *) &dk2::mgsr_alloc_buf2, "mgsr_alloc_buf2" },  /* auto */
  { 0x005A7A00, (void *) &dk2::release_mgsr, "release_mgsr" },  /* auto */
  { 0x005A7A20, (void *) &dk2::mgsr_free_buf, "mgsr_free_buf" },  /* auto */
  { 0x005A7A50, (void *) &dk2::mgsr_free_buf2, "mgsr_free_buf2" },  /* auto */
  { 0x005A7A80, (void *) &dk2::sub_5A7A80, "sub_5A7A80" },  /* auto */
  { 0x005A7B10, (void *) &dk2::sub_5A7B10, "sub_5A7B10" },  /* auto */
  { 0x005A82D0, (void *) &dk2::sub_5A82D0, "sub_5A82D0" },  /* auto */
  { 0x005A83B0, (void *) &dk2::sub_5A83B0, "sub_5A83B0" },  /* auto */
  { 0x005A8430, (void *) &dk2::sub_5A8430, "sub_5A8430" },  /* auto */
  { 0x005A87F0, (void *) &dk2::sub_5A87F0, "sub_5A87F0" },  /* auto */
  { 0x005A8980, (void *) &dk2::sub_5A8980, "sub_5A8980" },  /* auto */
  { 0x005A8A60, (void *) &dk2::sub_5A8A60, "sub_5A8A60" },  /* auto */
  { 0x005A8AE0, (void *) &dk2::StartAddress, "StartAddress" },  /* auto */
  { 0x005A8F60, (void *) &dk2::sub_5A8F60, "sub_5A8F60" },  /* auto */
  { 0x005A8F70, (void *) &dk2::sub_5A8F70, "sub_5A8F70" },  /* auto */
  { 0x005A8FB0, (void *) &dk2::sub_5A8FB0, "sub_5A8FB0" },  /* auto */
  { 0x005A8FF0, (void *) &dk2::sub_5A8FF0, "sub_5A8FF0" },  /* auto */
  { 0x005A94C0, (void *) &dk2::sub_5A94C0, "sub_5A94C0" },  /* auto */
  { 0x005A95B0, (void *) &dk2::sub_5A95B0, "sub_5A95B0" },  /* auto */
  { 0x005A9660, (void *) &dk2::sub_5A9660, "sub_5A9660" },  /* auto */
  { 0x005A97C0, (void *) &dk2::sub_5A97C0, "sub_5A97C0" },  /* auto */
  { 0x005A9AE0, (void *) &dk2::sub_5A9AE0, "sub_5A9AE0" },  /* auto */
  { 0x005A9C60, (void *) &dk2::sub_5A9C60, "sub_5A9C60" },  /* auto */
  { 0x005A9D20, (void *) &dk2::sub_5A9D20, "sub_5A9D20" },  /* auto */
  { 0x005A9D40, (void *) &dk2::sub_5A9D40, "sub_5A9D40" },  /* auto */
  { 0x005A9DA0, (void *) &dk2::sub_5A9DA0, "sub_5A9DA0" },  /* auto */
  { 0x005AA2E0, (void *) &dk2::sub_5AA2E0, "sub_5AA2E0" },  /* auto */
  { 0x005AA520, (void *) &dk2::sub_5AA520, "sub_5AA520" },  /* auto */
  { 0x005AA670, (void *) &dk2::sub_5AA670, "sub_5AA670" },  /* auto */
  { 0x005AAA50, (void *) &dk2::sub_5AAA50, "sub_5AAA50" },  /* auto */
  { 0x005AAB10, (void *) &dk2::sub_5AAB10, "sub_5AAB10" },  /* auto */
  { 0x005AAC80, (void *) &dk2::sub_5AAC80, "sub_5AAC80" },  /* auto */
  { 0x005AAD90, (void *) &dk2::sub_5AAD90, "sub_5AAD90" },  /* auto */
  { 0x005AAF90, (void *) &dk2::sub_5AAF90, "sub_5AAF90" },  /* auto */
  { 0x005AB0A0, (void *) &dk2::sub_5AB0A0, "sub_5AB0A0" },  /* auto */
  { 0x005AB250, (void *) &dk2::sub_5AB250, "sub_5AB250" },  /* auto */
  { 0x005AB2F0, (void *) &dk2::sub_5AB2F0, "sub_5AB2F0" },  /* auto */
  { 0x005AB390, (void *) &dk2::sub_5AB390, "sub_5AB390" },  /* auto */
  { 0x005AB700, (void *) &dk2::sub_5AB700, "sub_5AB700" },  /* auto */
  { 0x005AB8F0, (void *) &dk2::sub_5AB8F0, "sub_5AB8F0" },  /* auto */
  { 0x005ABAE0, (void *) &dk2::sub_5ABAE0, "sub_5ABAE0" },  /* auto */
  { 0x005ABC60, (void *) &dk2::sub_5ABC60, "sub_5ABC60" },  /* auto */
  { 0x005ABEF0, (void *) &dk2::sub_5ABEF0, "sub_5ABEF0" },  /* auto */
  { 0x005ABF70, (void *) &dk2::sub_5ABF70, "sub_5ABF70" },  /* auto */
  { 0x005AC360, (void *) &dk2::sub_5AC360, "sub_5AC360" },  /* auto */
  { 0x005AC660, (void *) &dk2::sub_5AC660, "sub_5AC660" },  /* auto */
  { 0x005AC703, (void *) &dk2::sub_5AC703, "sub_5AC703" },  /* auto */
  { 0x005AC8B0, (void *) &dk2::sub_5AC8B0, "sub_5AC8B0" },  /* auto */
  { 0x005ACA50, (void *) &dk2::sub_5ACA50, "sub_5ACA50" },  /* auto */
  { 0x005ACD39, (void *) &dk2::sub_5ACD39, "sub_5ACD39" },  /* auto */
  { 0x005ACFC4, (void *) &dk2::sub_5ACFC4, "sub_5ACFC4" },  /* auto */
  { 0x005AD25F, (void *) &dk2::sub_5AD25F, "sub_5AD25F" },  /* auto */
  { 0x005ADA3E, (void *) &dk2::sub_5ADA3E, "sub_5ADA3E" },  /* auto */
  { 0x005AE220, (void *) &dk2::fun_5AE220_no_stack_no_return, "fun_5AE220_no_stack_no_return" },  /* auto */
  { 0x005AE509, (void *) &dk2::sub_5AE509, "sub_5AE509" },  /* auto */
  { 0x005AE9FF, (void *) &dk2::sub_5AE9FF, "sub_5AE9FF" },  /* auto */
  { 0x005AEBED, (void *) &dk2::sub_5AEBED, "sub_5AEBED" },  /* auto */
  { 0x005AEDDB, (void *) &dk2::sub_5AEDDB, "sub_5AEDDB" },  /* auto */
  { 0x005AEFC9, (void *) &dk2::sub_5AEFC9, "sub_5AEFC9" },  /* auto */
  { 0x005AF310, (void *) &dk2::sub_5AF310, "sub_5AF310" },  /* auto */
  { 0x005AF7E0, (void *) &dk2::sub_5AF7E0, "sub_5AF7E0" },  /* auto */
  { 0x005AFCE0, (void *) &dk2::sub_5AFCE0, "sub_5AFCE0" },  /* auto */
  { 0x005AFEC8, (void *) &dk2::sub_5AFEC8, "sub_5AFEC8" },  /* auto */
  { 0x005AFF0C, (void *) &dk2::sub_5AFF0C, "sub_5AFF0C" },  /* auto */
  { 0x005B0020, (void *) &dk2::sub_5B0020, "sub_5B0020" },  /* auto */
  { 0x005B00AC, (void *) &dk2::sub_5B00AC, "sub_5B00AC" },  /* auto */
  { 0x005B018C, (void *) &dk2::sub_5B018C, "sub_5B018C" },  /* auto */
  { 0x005B02CB, (void *) &dk2::sub_5B02CB, "sub_5B02CB" },  /* auto */
  { 0x005B03B5, (void *) &dk2::sub_5B03B5, "sub_5B03B5" },  /* auto */
  { 0x005B04C0, (void *) &dk2::sub_5B04C0, "sub_5B04C0" },  /* auto */
  { 0x005B05A0, (void *) &dk2::sub_5B05A0, "sub_5B05A0" },  /* auto */
  { 0x005B0610, (void *) &dk2::sub_5B0610, "sub_5B0610" },  /* auto */
  { 0x005B06D0, (void *) &dk2::sub_5B06D0, "sub_5B06D0" },  /* auto */
  { 0x005B0890, (void *) &dk2::sub_5B0890, "sub_5B0890" },  /* auto */
  { 0x005B0B00, (void *) &dk2::sub_5B0B00, "sub_5B0B00" },  /* auto */
  { 0x005B0B60, (void *) &dk2::sub_5B0B60, "sub_5B0B60" },  /* auto */
  { 0x005B0B90, (void *) &dk2::sub_5B0B90, "sub_5B0B90" },  /* auto */
  { 0x005B0BF0, (void *) &dk2::sub_5B0BF0, "sub_5B0BF0" },  /* auto */
  { 0x005B0D60, (void *) &dk2::sub_5B0D60, "sub_5B0D60" },  /* auto */
  { 0x005B1090, (void *) &dk2::sub_5B1090, "sub_5B1090" },  /* auto */
  { 0x005B1110, (void *) &dk2::sub_5B1110, "sub_5B1110" },  /* auto */
  { 0x005B1220, (void *) &dk2::sub_5B1220, "sub_5B1220" },  /* auto */
  { 0x005B1380, (void *) &dk2::sub_5B1380, "sub_5B1380" },  /* auto */
  { 0x005B1430, (void *) &dk2::sub_5B1430, "sub_5B1430" },  /* auto */
  { 0x005B1650, (void *) &dk2::sub_5B1650, "sub_5B1650" },  /* auto */
  { 0x005B17FD, (void *) &dk2::sub_5B17FD, "sub_5B17FD" },  /* auto */
  { 0x005B1906, (void *) &dk2::sub_5B1906, "sub_5B1906" },  /* auto */
  { 0x005B1B11, (void *) &dk2::sub_5B1B11, "sub_5B1B11" },  /* auto */
  { 0x005B1C74, (void *) &dk2::sub_5B1C74, "sub_5B1C74" },  /* auto */
  { 0x005B1D7E, (void *) &dk2::sub_5B1D7E, "sub_5B1D7E" },  /* auto */
  { 0x005B1F5C, (void *) &dk2::sub_5B1F5C, "sub_5B1F5C" },  /* auto */
  { 0x005B207F, (void *) &dk2::sub_5B207F, "sub_5B207F" },  /* auto */
  { 0x005B2128, (void *) &dk2::sub_5B2128, "sub_5B2128" },  /* auto */
  { 0x005B21E0, (void *) &dk2::tqi_5B21E0, "tqi_5B21E0" },  /* auto */
  { 0x005B2450, (void *) &dk2::tqia_init, "tqia_init" },    /* auto */
  { 0x005B26F0, (void *) &dk2::tqia_decompressJpeg, "tqia_decompressJpeg" },  /* auto */
  { 0x005B29F0, (void *) &dk2::DirectDrawEnumerateA, "DirectDrawEnumerateA" },  /* auto */
  { 0x005B29F6, (void *) &dk2::DirectDrawCreate, "DirectDrawCreate" },  /* auto */
  { 0x005B2A00, (void *) &dk2::MyInputManagerCb_static_init, "MyInputManagerCb_static_init" },  /* auto */
  { 0x005B2A10, (void *) &dk2::MyInputManagerCb_static_constructor, "MyInputManagerCb_static_constructor" },  /* auto */
  { 0x005B2A30, (void *) &dk2::MyInputManagerCb_static_destroy, "MyInputManagerCb_static_destroy" },  /* auto */
  { 0x005B2A40, (void *) &dk2::MyInputManager_static_getKeyState, "MyInputManager_static_getKeyState" },  /* auto */
  { 0x005B2A50, (void *) &dk2::MyInputManagerCb_static_buildControlFlags, "MyInputManagerCb_static_buildControlFlags" },  /* auto */
  { 0x005B2AE0, (void *) &dk2::MyInputManagerCb_static_processInputs_setStaticListenersAndHandleDxActions, "MyInputManagerCb_static_processInputs_setStaticListenersAndHandleDxActions" },  /* auto */
  { 0x005B2B10, (void *) &dk2::unknown_libname_42, "unknown_libname_42" },  /* auto */
  { 0x005B2B20, (void *) &dk2::MyInputManagerCb_static_initKeyInputs, "MyInputManagerCb_static_initKeyInputs" },  /* auto */
  { 0x005B2B60, (void *) &dk2::MyInputManagerCb_static_initCursorInputs, "MyInputManagerCb_static_initCursorInputs" },  /* auto */
  { 0x005B2BA0, (void *) &dk2::MyMouse_static_getPos, "MyMouse_static_getPos" },  /* auto */
  { 0x005B2BB0, (void *) &dk2::MyInputManagerCb_static_getMouseF14, "MyInputManagerCb_static_getMouseF14" },  /* auto */
  { 0x005B2BC0, (void *) &dk2::MyInputManagerCb_static_setMousePos, "MyInputManagerCb_static_setMousePos" },  /* auto */
  { 0x005B2BD0, (void *) &dk2::sub_5B2BD0, "sub_5B2BD0" },  /* auto */
  { 0x005B2C00, (void *) &dk2::MyInputManagerCb_static_updateMouse, "MyInputManagerCb_static_updateMouse" },  /* auto */
  { 0x005B2C10, (void *) &dk2::MyInputManagerCb_static_windowMsgW, "MyInputManagerCb_static_windowMsgW" },  /* auto */
  { 0x005B2C30, (void *) &dk2::MyInputManagerCb_static_popDxAction, "MyInputManagerCb_static_popDxAction" },  /* auto */
  { 0x005B2C40, (void *) &dk2::MyInputManagerCb_static__, "MyInputManagerCb_static__" },  /* auto */
  { 0x005B2C50, (void *) &dk2::MyInputManagerCb_static_setEnabled, "MyInputManagerCb_static_setEnabled" },  /* auto */
  { 0x005B2C60, (void *) &dk2::sub_5B2C60, "sub_5B2C60" },  /* auto */
  { 0x005B2D10, (void *) &dk2::TbWType_fun_5B2D10, "TbWType_fun_5B2D10" },  /* auto */
  { 0x005B2D80, (void *) &dk2::sub_5B2D80, "sub_5B2D80" },  /* auto */
  { 0x005B2D90, (void *) &dk2::getHInstance, "getHInstance" },  /* auto */
  { 0x005B2DA0, (void *) &dk2::setHInstance, "setHInstance" },  /* auto */
  { 0x005B2DB0, (void *) &dk2::getHWindow, "getHWindow" },  /* auto */
  { 0x005B2DC0, (void *) &dk2::setHWindow, "setHWindow" },  /* auto */
  { 0x005B2DD0, (void *) &dk2::process_win_inputs, "process_win_inputs" },  /* auto */
  { 0x005B2E40, (void *) &dk2::isAppExitStatusSet, "isAppExitStatusSet" },  /* auto */
  { 0x005B2E50, (void *) &dk2::setAppExitStatus, "setAppExitStatus" },  /* auto */
  { 0x005B2E60, (void *) &dk2::setCustomDefWindowProcA, "setCustomDefWindowProcA" },  /* auto */
  { 0x005B2E70, (void *) &dk2::getCustomDefWindowProcA, "getCustomDefWindowProcA" },  /* auto */
  { 0x005B2E80, (void *) &dk2::sub_5B2E80, "sub_5B2E80" },  /* auto */
  { 0x005B2EA0, (void *) &dk2::sub_5B2EA0, "sub_5B2EA0" },  /* auto */
  { 0x005B2ED0, (void *) &dk2::getLibIconName, "getLibIconName" },  /* auto */
  { 0x005B2EE0, (void *) &dk2::get_Bullgrog_str, "get_Bullgrog_str" },  /* auto */
  { 0x005B2EF0, (void *) &dk2::sub_5B2EF0, "sub_5B2EF0" },  /* auto */
  { 0x005B2F40, (void *) &dk2::sub_5B2F40, "sub_5B2F40" },  /* auto */
  { 0x005B2F50, (void *) &dk2::sub_5B2F50, "sub_5B2F50" },  /* auto */
  { 0x005B2F70, (void *) &dk2::sub_5B2F70, "sub_5B2F70" },  /* auto */
  { 0x005B2F80, (void *) &dk2::sub_5B2F80, "sub_5B2F80" },  /* auto */
  { 0x005B2FA0, (void *) &dk2::sub_5B2FA0, "sub_5B2FA0" },  /* auto */
  { 0x005B2FB0, (void *) &dk2::sub_5B2FB0, "sub_5B2FB0" },  /* auto */
  { 0x005B3000, (void *) &dk2::sub_5B3000, "sub_5B3000" },  /* auto */
  { 0x005B3010, (void *) &dk2::sub_5B3010, "sub_5B3010" },  /* auto */
  { 0x005B3020, (void *) &dk2::sub_5B3020, "sub_5B3020" },  /* auto */
  { 0x005B3030, (void *) &dk2::sub_5B3030, "sub_5B3030" },  /* auto */
  { 0x005B3050, (void *) &dk2::sub_5B3050, "sub_5B3050" },  /* auto */
  { 0x005B3060, (void *) &dk2::sub_5B3060, "sub_5B3060" },  /* auto */
  { 0x005B3070, (void *) &dk2::sub_5B3070, "sub_5B3070" },  /* auto */
  { 0x005B3080, (void *) &dk2::sub_5B3080, "sub_5B3080" },  /* auto */
  { 0x005B30C0, (void *) &dk2::sub_5B30C0, "sub_5B30C0" },  /* auto */
  { 0x005B30F0, (void *) &dk2::sub_5B30F0, "sub_5B30F0" },  /* auto */
  { 0x005B3130, (void *) &dk2::sub_5B3130, "sub_5B3130" },  /* auto */
  { 0x005B3170, (void *) &dk2::sub_5B3170, "sub_5B3170" },  /* auto */
  { 0x005B31E0, (void *) &dk2::sub_5B31E0, "sub_5B31E0" },  /* auto */
  { 0x005B3250, (void *) &dk2::sub_5B3250, "sub_5B3250" },  /* auto */
  { 0x005B32C0, (void *) &dk2::sub_5B32C0, "sub_5B32C0" },  /* auto */
  { 0x005B3340, (void *) &dk2::sub_5B3340, "sub_5B3340" },  /* auto */
  { 0x005B33C0, (void *) &dk2::sub_5B33C0, "sub_5B33C0" },  /* auto */
  { 0x005B3440, (void *) &dk2::sub_5B3440, "sub_5B3440" },  /* auto */
  { 0x005B3490, (void *) &dk2::sub_5B3490, "sub_5B3490" },  /* auto */
  { 0x005B34D0, (void *) &dk2::sub_5B34D0, "sub_5B34D0" },  /* auto */
  { 0x005B3510, (void *) &dk2::MySurface_AABB_sub_5B3510, "MySurface_AABB_sub_5B3510" },  /* auto */
  { 0x005B35B0, (void *) &dk2::MySurface_AABB_sub_5B35B0, "MySurface_AABB_sub_5B35B0" },  /* auto */
  { 0x005B36F0, (void *) &dk2::sub_5B36F0, "sub_5B36F0" },  /* auto */
  { 0x005B3700, (void *) &dk2::getCharRenderSurfAabb, "getCharRenderSurfAabb" },  /* auto */
  { 0x005B3710, (void *) &dk2::MySurface_probably_set_global_bitnes, "MySurface_probably_set_global_bitnes" },  /* auto */
  { 0x005B37F0, (void *) &dk2::sub_5B37F0, "sub_5B37F0" },  /* auto */
  { 0x005B3900, (void *) &dk2::sub_5B3900, "sub_5B3900" },  /* auto */
  { 0x005B3940, (void *) &dk2::sub_5B3940, "sub_5B3940" },  /* auto */
  { 0x005B3980, (void *) &dk2::MyDiscFile_create, "MyDiscFile_create" },  /* auto */
  { 0x005B3A30, (void *) &dk2::sub_5B3A30, "sub_5B3A30" },  /* auto */
  { 0x005B3A60, (void *) &dk2::sub_5B3A60, "sub_5B3A60" },  /* auto */
  { 0x005B3A80, (void *) &dk2::sub_5B3A80, "sub_5B3A80" },  /* auto */
  { 0x005B3A90, (void *) &dk2::sub_5B3A90, "sub_5B3A90" },  /* auto */
  { 0x005B3AB0, (void *) &dk2::sub_5B3AB0, "sub_5B3AB0" },  /* auto */
  { 0x005B3B20, (void *) &dk2::sub_5B3B20, "sub_5B3B20" },  /* auto */
  { 0x005B3B80, (void *) &dk2::sub_5B3B80, "sub_5B3B80" },  /* auto */
  { 0x005B3B90, (void *) &dk2::sub_5B3B90, "sub_5B3B90" },  /* auto */
  { 0x005B3BF0, (void *) &dk2::fileExists, "fileExists" },  /* auto */
  { 0x005B3C30, (void *) &dk2::sub_5B3C30, "sub_5B3C30" },  /* auto */
  { 0x005B3C80, (void *) &dk2::sub_5B3C80, "sub_5B3C80" },  /* auto */
  { 0x005B3CE0, (void *) &dk2::findFile, "findFile" },      /* auto */
  { 0x005B3DD0, (void *) &dk2::findNextFile, "findNextFile" },  /* auto */
  { 0x005B3E60, (void *) &dk2::closeFindFile, "closeFindFile" },  /* auto */
  { 0x005B3E80, (void *) &dk2::sub_5B3E80, "sub_5B3E80" },  /* auto */
  { 0x005B3EB0, (void *) &dk2::obj_read_file_0, "obj_read_file_0" },  /* auto */
  { 0x005B3EE0, (void *) &dk2::sub_5B3EE0, "sub_5B3EE0" },  /* auto */
  { 0x005B3F10, (void *) &dk2::sub_5B3F10, "sub_5B3F10" },  /* auto */
  { 0x005B3F20, (void *) &dk2::sub_5B3F20, "sub_5B3F20" },  /* auto */
  { 0x005B3F50, (void *) &dk2::j_g_dd_surface1_init, "j_g_dd_surface1_init" },  /* auto */
  { 0x005B3F60, (void *) &dk2::g_dd_surface1_static_init, "g_dd_surface1_static_init" },  /* auto */
  { 0x005B3F90, (void *) &dk2::sub_5B3F90, "sub_5B3F90" },  /* auto */
  { 0x005B3FA0, (void *) &dk2::sub_5B3FA0, "sub_5B3FA0" },  /* auto */
  { 0x005B3FD0, (void *) &dk2::sub_5B3FD0, "sub_5B3FD0" },  /* auto */
  { 0x005B3FE0, (void *) &dk2::sub_5B3FE0, "sub_5B3FE0" },  /* auto */
  { 0x005B4020, (void *) &dk2::sub_5B4020, "sub_5B4020" },  /* auto */
  { 0x005B4040, (void *) &dk2::setSelectedDDGuid, "setSelectedDDGuid" },  /* auto */
  { 0x005B4050, (void *) &dk2::lpDD_addRef, "lpDD_addRef" },  /* auto */
  { 0x005B4070, (void *) &dk2::showMessageBox, "showMessageBox" },  /* auto */
  { 0x005B40E0, (void *) &dk2::BullfrogWindow_destroy, "BullfrogWindow_destroy" },  /* auto */
  { 0x005B4160, (void *) &dk2::__sub_5B4160_ev0_5, "__sub_5B4160_ev0_5" },  /* auto */
  { 0x005B4230, (void *) &dk2::dk2_destroy, "dk2_destroy" },  /* auto */
  { 0x005B4260, (void *) &dk2::BullfrogWindow_create, "BullfrogWindow_create" },  /* auto */
  { 0x005B4330, (void *) &dk2::static_isNeedBlt, "static_isNeedBlt" },  /* auto */
  { 0x005B4340, (void *) &dk2::showTodoMessageBox, "showTodoMessageBox" },  /* auto */
  { 0x005B4390, (void *) &dk2::dk2_init, "dk2_init" },      /* auto */
  { 0x005B4AE0, (void *) &dk2::sub_5B4AE0, "sub_5B4AE0" },  /* auto */
  { 0x005B4B00, (void *) &dk2::__sub_5B4B00_ev1, "__sub_5B4B00_ev1" },  /* auto */
  { 0x005B4D40, (void *) &dk2::sub_5B4D40, "sub_5B4D40" },  /* auto */
  { 0x005B4D80, (void *) &dk2::sub_5B4D80, "sub_5B4D80" },  /* auto */
  { 0x005B4DE0, (void *) &dk2::createDirectDrawObject, "createDirectDrawObject" },  /* auto */
  { 0x005B4E20, (void *) &dk2::BullfrogWindow_create2, "BullfrogWindow_create2" },  /* auto */
  { 0x005B4F70, (void *) &dk2::enumDDModesCallback, "enumDDModesCallback" },  /* auto */
  { 0x005B4FC0, (void *) &dk2::BullfrogWindow_registerClass, "BullfrogWindow_registerClass" },  /* auto */
  { 0x005B5070, (void *) &dk2::BullfrogWindow_proc, "BullfrogWindow_proc" },  /* auto */
  { 0x005B5160, (void *) &dk2::setAppActivatedStatus, "setAppActivatedStatus" },  /* auto */
  { 0x005B5180, (void *) &dk2::MyDdSurfaceEx_setInstance, "MyDdSurfaceEx_setInstance" },  /* auto */
  { 0x005B5410, (void *) &dk2::setSurfaceDD, "setSurfaceDD" },  /* auto */
  { 0x005B5420, (void *) &dk2::MyDdSurface_constructor, "MyDdSurface_constructor" },  /* auto */
  { 0x005B5460, (void *) &dk2::MyDdSurfaceEx_restoreSurf_if_unk, "MyDdSurfaceEx_restoreSurf_if_unk" },  /* auto */
  { 0x005B5490, (void *) &dk2::__surface_init_blt, "__surface_init_blt" },  /* auto */
  { 0x005B5700, (void *) &dk2::createSurface, "createSurface" },  /* auto */
  { 0x005B57C0, (void *) &dk2::MyDdSurface_release, "MyDdSurface_release" },  /* auto */
  { 0x005B57F0, (void *) &dk2::static_MyDdSurfaceEx_BltWait, "static_MyDdSurfaceEx_BltWait" },  /* auto */
  { 0x005B5970, (void *) &dk2::sub_5B5970, "sub_5B5970" },  /* auto */
  { 0x005B5BE0, (void *) &dk2::MyDdSurfaceEx_resolveDesc, "MyDdSurfaceEx_resolveDesc" },  /* auto */
  { 0x005B5C90, (void *) &dk2::sub_5B5C90, "sub_5B5C90" },  /* auto */
  { 0x005B5CB0, (void *) &dk2::MyDdSurface_addRef, "MyDdSurface_addRef" },  /* auto */
  { 0x005B5CD0, (void *) &dk2::sub_5B5CD0, "sub_5B5CD0" },  /* auto */
  { 0x005B5D20, (void *) &dk2::sub_5B5D20, "sub_5B5D20" },  /* auto */
  { 0x005B5E90, (void *) &dk2::getTimeMs, "getTimeMs" },    /* auto */
  { 0x005B5EA0, (void *) &dk2::sub_5B5EA0, "sub_5B5EA0" },  /* auto */
  { 0x005B5EE0, (void *) &dk2::TbPNGLoader_fun_5B5EE0, "TbPNGLoader_fun_5B5EE0" },  /* auto */
  { 0x005B6030, (void *) &dk2::TbPNGLoader_fun_5B6030, "TbPNGLoader_fun_5B6030" },  /* auto */
  { 0x005B6740, (void *) &dk2::sub_5B6740, "sub_5B6740" },  /* auto */
  { 0x005B6750, (void *) &dk2::TbPNGLoader_fun_5B6750, "TbPNGLoader_fun_5B6750" },  /* auto */
  { 0x005B6790, (void *) &dk2::sub_5B6790, "sub_5B6790" },  /* auto */
  { 0x005B6AC0, (void *) &dk2::sub_5B6AC0, "sub_5B6AC0" },  /* auto */
  { 0x005B6B00, (void *) &dk2::sub_5B6B00, "sub_5B6B00" },  /* auto */
  { 0x005B6B50, (void *) &dk2::sub_5B6B50, "sub_5B6B50" },  /* auto */
  { 0x005B6E00, (void *) &dk2::TbBMPLoader_fun_5B6E00, "TbBMPLoader_fun_5B6E00" },  /* auto */
  { 0x005B6FA0, (void *) &dk2::MyGetLastError, "MyGetLastError" },  /* auto */
  { 0x005B7140, (void *) &dk2::setExeDirPath, "setExeDirPath" },  /* auto */
  { 0x005B71A0, (void *) &dk2::getExeDir, "getExeDir" },    /* auto */
  { 0x005B71C0, (void *) &dk2::buildExeBasedPath, "buildExeBasedPath" },  /* auto */
  { 0x005B72E0, (void *) &dk2::loadFile, "loadFile" },      /* auto */
  { 0x005B7400, (void *) &dk2::__saveFile, "__saveFile" },  /* auto */
  { 0x005B74A0, (void *) &dk2::resolveDk2HomeDir, "resolveDk2HomeDir" },  /* auto */
  { 0x005B7570, (void *) &dk2::sub_5B7570, "sub_5B7570" },  /* auto */
  { 0x005B75A0, (void *) &dk2::sub_5B75A0, "sub_5B75A0" },  /* auto */
  { 0x005B75F0, (void *) &dk2::malloc_2, "malloc_2" },      /* auto */
  { 0x005B76F0, (void *) &dk2::_TbWickedSpriteBank_fun_5B76F0, "_TbWickedSpriteBank_fun_5B76F0" },  /* auto */
  { 0x005B7880, (void *) &dk2::sub_5B7880, "sub_5B7880" },  /* auto */
  { 0x005B78F0, (void *) &dk2::sub_5B78F0, "sub_5B78F0" },  /* auto */
  { 0x005B7D40, (void *) &dk2::sub_5B7D40, "sub_5B7D40" },  /* auto */
  { 0x005B7D70, (void *) &dk2::sub_5B7D70, "sub_5B7D70" },  /* auto */
  { 0x005B7DA0, (void *) &dk2::sub_5B7DA0, "sub_5B7DA0" },  /* auto */
  { 0x005B7DE0, (void *) &dk2::sub_5B7DE0, "sub_5B7DE0" },  /* auto */
  { 0x005B7E20, (void *) &dk2::sub_5B7E20, "sub_5B7E20" },  /* auto */
  { 0x005B7E60, (void *) &dk2::sub_5B7E60, "sub_5B7E60" },  /* auto */
  { 0x005B81A0, (void *) &dk2::MySurface_copyFromMyDdSurf, "MySurface_copyFromMyDdSurf" },  /* auto */
  { 0x005B81E0, (void *) &dk2::sub_5B81E0, "sub_5B81E0" },  /* auto */
  { 0x005B8210, (void *) &dk2::getTotalPhysMemory, "getTotalPhysMemory" },  /* auto */
  { 0x005B8230, (void *) &dk2::enum_drives, "enum_drives" },  /* auto */
  { 0x005B83C0, (void *) &dk2::TbCharStringList_sub_5B83C0, "TbCharStringList_sub_5B83C0" },  /* auto */
  { 0x005B8450, (void *) &dk2::sub_5B8450, "sub_5B8450" },  /* auto */
  { 0x005B8470, (void *) &dk2::sub_5B8470, "sub_5B8470" },  /* auto */
  { 0x005B84D0, (void *) &dk2::unknown_libname_48, "unknown_libname_48" },  /* auto */
  { 0x005B8500, (void *) &dk2::TbTQILoader_fun_5B8500, "TbTQILoader_fun_5B8500" },  /* auto */
  { 0x005B8AB0, (void *) &dk2::MyStr_format, "MyStr_format" },  /* auto */
  { 0x005B9270, (void *) &dk2::sub_5B9270, "sub_5B9270" },  /* auto */
  { 0x005B97A0, (void *) &dk2::WinEventHandlers_static_init, "WinEventHandlers_static_init" },  /* auto */
  { 0x005B97B0, (void *) &dk2::WinEventHandlers_constructor, "WinEventHandlers_constructor" },  /* auto */
  { 0x005B97C0, (void *) &dk2::sub_5B97C0, "sub_5B97C0" },  /* auto */
  { 0x005B97D0, (void *) &dk2::WinEventHandlers_static_destructor, "WinEventHandlers_static_destructor" },  /* auto */
  { 0x005BA0F0, (void *) &dk2::sub_5BA0F0, "sub_5BA0F0" },  /* auto */
  { 0x005BA200, (void *) &dk2::sub_5BA200, "sub_5BA200" },  /* auto */
  { 0x005BA420, (void *) &dk2::sub_5BA420, "sub_5BA420" },  /* auto */
  { 0x005BA450, (void *) &dk2::sub_5BA450, "sub_5BA450" },  /* auto */
  { 0x005BA460, (void *) &dk2::debugMsgBox, "debugMsgBox" },  /* auto */
  { 0x005BA4E0, (void *) &dk2::setDebugStringFun, "setDebugStringFun" },  /* auto */
  { 0x005BA4F0, (void *) &dk2::sub_5BA4F0, "sub_5BA4F0" },  /* auto */
  { 0x005BA500, (void *) &dk2::sub_5BA500, "sub_5BA500" },  /* auto */
  { 0x005BA540, (void *) &dk2::sub_5BA540, "sub_5BA540" },  /* auto */
  { 0x005BA550, (void *) &dk2::sub_5BA550, "sub_5BA550" },  /* auto */
  { 0x005BAC60, (void *) &dk2::sub_5BAC60, "sub_5BAC60" },  /* auto */
  { 0x005BAC70, (void *) &dk2::Obj79DC68_static_constructor, "Obj79DC68_static_constructor" },  /* auto */
  { 0x005BAC90, (void *) &dk2::Obj79DC68_static_destructor, "Obj79DC68_static_destructor" },  /* auto */
  { 0x005BACA0, (void *) &dk2::MySurface_static_convertPixelType, "MySurface_static_convertPixelType" },  /* auto */
  { 0x005BB5A0, (void *) &dk2::MyInputListenersHolder_create, "MyInputListenersHolder_create" },  /* auto */
  { 0x005BB800, (void *) &dk2::MyDxInputState_create, "MyDxInputState_create" },  /* auto */
  { 0x005BB8A0, (void *) &dk2::MyWindowMsgs_create, "MyWindowMsgs_create" },  /* auto */
  { 0x005BBA30, (void *) &dk2::MyWindowMsgs_destructor, "MyWindowMsgs_destructor" },  /* auto */
  { 0x005BBC40, (void *) &dk2::MyCollectDxAction_create, "MyCollectDxAction_create" },  /* auto */
  { 0x005BC3F0, (void *) &dk2::DxDevice_updateCoopLevelAndSignal_ev5, "DxDevice_updateCoopLevelAndSignal_ev5" },  /* auto */
  { 0x005BC470, (void *) &dk2::ControlKeysUpdater_create, "ControlKeysUpdater_create" },  /* auto */
  { 0x005BC540, (void *) &dk2::MyMouseUpdater_create, "MyMouseUpdater_create" },  /* auto */
  { 0x005BC650, (void *) &dk2::MyMouseUpdater_destructor, "MyMouseUpdater_destructor" },  /* auto */
  { 0x005BC6C0, (void *) &dk2::DxActionQueue_create, "DxActionQueue_create" },  /* auto */
  { 0x005BC760, (void *) &dk2::MyDxMouse_create, "MyDxMouse_create" },  /* auto */
  { 0x005BC830, (void *) &dk2::MyDxKeyboard_create, "MyDxKeyboard_create" },  /* auto */
  { 0x005BC910, (void *) &dk2::sub_5BC910, "sub_5BC910" },  /* auto */
  { 0x005BC920, (void *) &dk2::unknown_libname_51, "unknown_libname_51" },  /* auto */
  { 0x005BC940, (void *) &dk2::unknown_libname_52, "unknown_libname_52" },  /* auto */
  { 0x005BC950, (void *) &dk2::My8BitTexture_5BC950, "My8BitTexture_5BC950" },  /* auto */
  { 0x005BC9E0, (void *) &dk2::My8BitTexture_5BC9E0, "My8BitTexture_5BC9E0" },  /* auto */
  { 0x005BD260, (void *) &dk2::My8BitTexture_5BD260, "My8BitTexture_5BD260" },  /* auto */
  { 0x005BDA00, (void *) &dk2::My8BitTexture_5BDA00, "My8BitTexture_5BDA00" },  /* auto */
  { 0x005BDBB0, (void *) &dk2::My8BitTexture_5BDBB0, "My8BitTexture_5BDBB0" },  /* auto */
  { 0x005BDD50, (void *) &dk2::My8BitTexture_5BDD50, "My8BitTexture_5BDD50" },  /* auto */
  { 0x005C01D0, (void *) &dk2::My8BitTexture_5C01D0, "My8BitTexture_5C01D0" },  /* auto */
  { 0x005C0270, (void *) &dk2::My8BitTexture_5C0270, "My8BitTexture_5C0270" },  /* auto */
  { 0x005C0440, (void *) &dk2::My8BitTexture_5C0440, "My8BitTexture_5C0440" },  /* auto */
  { 0x005C05C0, (void *) &dk2::My8BitTexture_5C05C0, "My8BitTexture_5C05C0" },  /* auto */
  { 0x005C0740, (void *) &dk2::My24BitTexture_5C0740, "My24BitTexture_5C0740" },  /* auto */
  { 0x005C1080, (void *) &dk2::My24BitTexture_5C1080, "My24BitTexture_5C1080" },  /* auto */
  { 0x005C1230, (void *) &dk2::My24BitTexture_5C1230, "My24BitTexture_5C1230" },  /* auto */
  { 0x005C1460, (void *) &dk2::My24BitTexture_5C1460, "My24BitTexture_5C1460" },  /* auto */
  { 0x005C35D0, (void *) &dk2::My24BitTexture_5C35D0, "My24BitTexture_5C35D0" },  /* auto */
  { 0x005C3650, (void *) &dk2::My24BitTexture_5C3650, "My24BitTexture_5C3650" },  /* auto */
  { 0x005C3800, (void *) &dk2::My24BitTexture_5C3800, "My24BitTexture_5C3800" },  /* auto */
  { 0x005C3A00, (void *) &dk2::My24BitTexture_5C3A00, "My24BitTexture_5C3A00" },  /* auto */
  { 0x005C3C00, (void *) &dk2::My24BitTexture_5C3C00, "My24BitTexture_5C3C00" },  /* auto */
  { 0x005C4490, (void *) &dk2::My24BitTexture_5C4490, "My24BitTexture_5C4490" },  /* auto */
  { 0x005C4B50, (void *) &dk2::My32BitTexture_5C4B50, "My32BitTexture_5C4B50" },  /* auto */
  { 0x005C53E0, (void *) &dk2::My32BitTexture_5C53E0, "My32BitTexture_5C53E0" },  /* auto */
  { 0x005C55E0, (void *) &dk2::My32BitTexture_5C55E0, "My32BitTexture_5C55E0" },  /* auto */
  { 0x005C57F0, (void *) &dk2::My32BitTexture_5C57F0, "My32BitTexture_5C57F0" },  /* auto */
  { 0x005C8770, (void *) &dk2::My32BitTexture_5C8770, "My32BitTexture_5C8770" },  /* auto */
  { 0x005C8810, (void *) &dk2::My32BitTexture_5C8810, "My32BitTexture_5C8810" },  /* auto */
  { 0x005C8A40, (void *) &dk2::My32BitTexture_5C8A40, "My32BitTexture_5C8A40" },  /* auto */
  { 0x005C8D10, (void *) &dk2::My32BitTexture_5C8D10, "My32BitTexture_5C8D10" },  /* auto */
  { 0x005C8FC0, (void *) &dk2::My32BitTexture_5C8FC0, "My32BitTexture_5C8FC0" },  /* auto */
  { 0x005C9930, (void *) &dk2::My32BitTexture_5C9930, "My32BitTexture_5C9930" },  /* auto */
  { 0x005CA100, (void *) &dk2::My16BitTexture_5CA100, "My16BitTexture_5CA100" },  /* auto */
  { 0x005CAE20, (void *) &dk2::My16BitTexture_5CAE20, "My16BitTexture_5CAE20" },  /* auto */
  { 0x005CB0E0, (void *) &dk2::My16BitTexture_5CB0E0, "My16BitTexture_5CB0E0" },  /* auto */
  { 0x005CB3C0, (void *) &dk2::My16BitTexture_5CB3C0, "My16BitTexture_5CB3C0" },  /* auto */
  { 0x005CEBB0, (void *) &dk2::My16BitTexture_5CEBB0, "My16BitTexture_5CEBB0" },  /* auto */
  { 0x005CECB0, (void *) &dk2::My16BitTexture_5CECB0, "My16BitTexture_5CECB0" },  /* auto */
  { 0x005CEFB0, (void *) &dk2::My16BitTexture_5CEFB0, "My16BitTexture_5CEFB0" },  /* auto */
  { 0x005CF380, (void *) &dk2::My16BitTexture_5CF380, "My16BitTexture_5CF380" },  /* auto */
  { 0x005CF760, (void *) &dk2::My16BitTexture_5CF760, "My16BitTexture_5CF760" },  /* auto */
  { 0x005D0470, (void *) &dk2::My16BitTexture_5D0470, "My16BitTexture_5D0470" },  /* auto */
  { 0x005D0F80, (void *) &dk2::sub_5D0F80, "sub_5D0F80" },  /* auto */
  { 0x005D0FA0, (void *) &dk2::AABB_getWidth, "AABB_getWidth" },  /* auto */
  { 0x005D0FB0, (void *) &dk2::AABB_getHeight, "AABB_getHeight" },  /* auto */
  { 0x005D0FC0, (void *) &dk2::AABB_intersect, "AABB_intersect" },  /* auto */
  { 0x005D1040, (void *) &dk2::AABB_collapseToMax, "AABB_collapseToMax" },  /* auto */
  { 0x005D1050, (void *) &dk2::AABB_normalize, "AABB_normalize" },  /* auto */
  { 0x005D1180, (void *) &dk2::sub_5D1180, "sub_5D1180" },  /* auto */
  { 0x005D11E0, (void *) &dk2::sub_5D11E0, "sub_5D11E0" },  /* auto */
  { 0x005D1230, (void *) &dk2::DdModeList_constructor, "DdModeList_constructor" },  /* auto */
  { 0x005D1250, (void *) &dk2::llist_insert, "llist_insert" },  /* auto */
  { 0x005D1270, (void *) &dk2::sub_5D1270, "sub_5D1270" },  /* auto */
  { 0x005D1290, (void *) &dk2::libpng_png_set_sig_bytes, "libpng_png_set_sig_bytes" },  /* auto */
  { 0x005D12C0, (void *) &dk2::libpng_png_sig_cmp, "libpng_png_sig_cmp" },  /* auto */
  { 0x005D1320, (void *) &dk2::libpng_png_check_sig, "libpng_png_check_sig" },  /* auto */
  { 0x005D1340, (void *) &dk2::libpng_png_zalloc, "libpng_png_zalloc" },  /* auto */
  { 0x005D13B0, (void *) &dk2::libpng_png_zfree, "libpng_png_zfree" },  /* auto */
  { 0x005D13D0, (void *) &dk2::libpng_png_reset_crc, "libpng_png_reset_crc" },  /* auto */
  { 0x005D13F0, (void *) &dk2::libpng_png_calculate_crc, "libpng_png_calculate_crc" },  /* auto */
  { 0x005D1450, (void *) &dk2::libpng_png_create_info_struct, "libpng_png_create_info_struct" },  /* auto */
  { 0x005D1480, (void *) &dk2::libpng_png_destroy_info_struct, "libpng_png_destroy_info_struct" },  /* auto */
  { 0x005D14C0, (void *) &dk2::libpng_png_info_init, "libpng_png_info_init" },  /* auto */
  { 0x005D14D0, (void *) &dk2::libpng_png_info_destroy, "libpng_png_info_destroy" },  /* auto */
  { 0x005D1590, (void *) &dk2::libpng_png_get_io_ptr, "libpng_png_get_io_ptr" },  /* auto */
  { 0x005D15A0, (void *) &dk2::libpng_png_create_read_struct, "libpng_png_create_read_struct" },  /* auto */
  { 0x005D16F0, (void *) &dk2::libpng_png_read_info, "libpng_png_read_info" },  /* auto */
  { 0x005D1A70, (void *) &dk2::libpng_png_read_update_info, "libpng_png_read_update_info" },  /* auto */
  { 0x005D1AA0, (void *) &dk2::libpng_png_read_row, "libpng_png_read_row" },  /* auto */
  { 0x005D1F00, (void *) &dk2::libpng_png_read_image, "libpng_png_read_image" },  /* auto */
  { 0x005D1F60, (void *) &dk2::libpng_png_read_end, "libpng_png_read_end" },  /* auto */
  { 0x005D2230, (void *) &dk2::libpng_png_destroy_read_struct, "libpng_png_destroy_read_struct" },  /* auto */
  { 0x005D22D0, (void *) &dk2::libpng_png_read_destroy, "libpng_png_read_destroy" },  /* auto */
  { 0x005D2940, (void *) &dk2::libpng_png_set_strip_16, "libpng_png_set_strip_16" },  /* auto */
  { 0x005D2950, (void *) &dk2::libpng_png_set_expand, "libpng_png_set_expand" },  /* auto */
  { 0x005D2960, (void *) &dk2::libpng_png_set_gray_to_rgb, "libpng_png_set_gray_to_rgb" },  /* auto */
  { 0x005D2970, (void *) &dk2::libpng_png_init_read_transformations, "libpng_png_init_read_transformations" },  /* auto */
  { 0x005D33C0, (void *) &dk2::libpng_png_read_transform_info, "libpng_png_read_transform_info" },  /* auto */
  { 0x005D3510, (void *) &dk2::libpng_png_do_read_transformations, "libpng_png_do_read_transformations" },  /* auto */
  { 0x005D38C0, (void *) &dk2::libpng_png_do_unpack, "libpng_png_do_unpack" },  /* auto */
  { 0x005D39D0, (void *) &dk2::libpng_png_do_unshift, "libpng_png_do_unshift" },  /* auto */
  { 0x005D3BC0, (void *) &dk2::libpng_png_do_chop, "libpng_png_do_chop" },  /* auto */
  { 0x005D3C10, (void *) &dk2::libpng_png_do_read_swap_alpha, "libpng_png_do_read_swap_alpha" },  /* auto */
  { 0x005D3D10, (void *) &dk2::libpng_png_do_read_invert_alpha, "libpng_png_do_read_invert_alpha" },  /* auto */
  { 0x005D3E20, (void *) &dk2::libpng_png_do_read_filler, "libpng_png_do_read_filler" },  /* auto */
  { 0x005D4070, (void *) &dk2::libpng_png_do_gray_to_rgb, "libpng_png_do_gray_to_rgb" },  /* auto */
  { 0x005D41C0, (void *) &dk2::libpng_png_do_background, "libpng_png_do_background" },  /* auto */
  { 0x005D5250, (void *) &dk2::libpng_png_do_gamma, "libpng_png_do_gamma" },  /* auto */
  { 0x005D5620, (void *) &dk2::libpng_png_do_expand_palette, "libpng_png_do_expand_palette" },  /* auto */
  { 0x005D5830, (void *) &dk2::libpng_png_do_expand, "libpng_png_do_expand" },  /* auto */
  { 0x005D5BA0, (void *) &dk2::libpng_png_do_dither, "libpng_png_do_dither" },  /* auto */
  { 0x005D5CC0, (void *) &dk2::libpng_png_build_gamma_table, "libpng_png_build_gamma_table" },  /* auto */
  { 0x005D6250, (void *) &dk2::libpng_png_get_valid, "libpng_png_get_valid" },  /* auto */
  { 0x005D6270, (void *) &dk2::libpng_png_get_IHDR, "libpng_png_get_IHDR" },  /* auto */
  { 0x005D6360, (void *) &dk2::libpng_png_get_PLTE, "libpng_png_get_PLTE" },  /* auto */
  { 0x005D63A0, (void *) &dk2::libpng_png_set_bgr, "libpng_png_set_bgr" },  /* auto */
  { 0x005D63B0, (void *) &dk2::libpng_png_set_packing, "libpng_png_set_packing" },  /* auto */
  { 0x005D63D0, (void *) &dk2::libpng_png_set_interlace_handling, "libpng_png_set_interlace_handling" },  /* auto */
  { 0x005D6400, (void *) &dk2::libpng_png_do_invert, "libpng_png_do_invert" },  /* auto */
  { 0x005D6430, (void *) &dk2::libpng_png_do_swap, "libpng_png_do_swap" },  /* auto */
  { 0x005D6460, (void *) &dk2::libpng_png_do_packswap, "libpng_png_do_packswap" },  /* auto */
  { 0x005D64B0, (void *) &dk2::libpng_png_do_strip_filler, "libpng_png_do_strip_filler" },  /* auto */
  { 0x005D66C0, (void *) &dk2::libpng_png_do_bgr, "libpng_png_do_bgr" },  /* auto */
  { 0x005D6780, (void *) &dk2::libpng_png_read_data, "libpng_png_read_data" },  /* auto */
  { 0x005D67B0, (void *) &dk2::libpng_png_set_read_fn, "libpng_png_set_read_fn" },  /* auto */
  { 0x005D6810, (void *) &dk2::libpng_png_default_read_data, "libpng_png_default_read_data" },  /* auto */
  { 0x005D6F60, (void *) &dk2::sub_5D6F60, "sub_5D6F60" },  /* auto */
  { 0x005D7000, (void *) &dk2::sub_5D7000, "sub_5D7000" },  /* auto */
  { 0x005D7300, (void *) &dk2::sub_5D7300, "sub_5D7300" },  /* auto */
  { 0x005D7320, (void *) &dk2::sub_5D7320, "sub_5D7320" },  /* auto */
  { 0x005D7360, (void *) &dk2::__tqi_5D7360, "__tqi_5D7360" },  /* auto */
  { 0x005D77A0, (void *) &dk2::__tqi_5D77A0, "__tqi_5D77A0" },  /* auto */
  { 0x005D7A50, (void *) &dk2::sub_5D7A50, "sub_5D7A50" },  /* auto */
  { 0x005D7A70, (void *) &dk2::strlen_, "strlen_" },  // -  /* auto */
  { 0x005D7A90, (void *) &dk2::fast_strcpy, "fast_strcpy" },  /* auto */
  { 0x005D7AC0, (void *) &dk2::__strncpy, "__strncpy" },    /* auto */
  { 0x005D7AE0, (void *) &dk2::strcat_, "strcat_" },  // -  /* auto */
  { 0x005D7B20, (void *) &dk2::strncat_, "strncat_" },      /* auto */
  { 0x005D7B40, (void *) &dk2::sub_5D7B40, "sub_5D7B40" },  /* auto */
  { 0x005D7B50, (void *) &dk2::sub_5D7B50, "sub_5D7B50" },  /* auto */
  { 0x005D7B70, (void *) &dk2::vsprintf_, "vsprintf_" },    /* auto */
  { 0x005D7B90, (void *) &dk2::vsnprintf, "vsnprintf" },    /* auto */
  { 0x005D7BB0, (void *) &dk2::sub_5D7BB0, "sub_5D7BB0" },  /* auto */
  { 0x005D7BC0, (void *) &dk2::sub_5D7BC0, "sub_5D7BC0" },  /* auto */
  { 0x005D7BE0, (void *) &dk2::sub_5D7BE0, "sub_5D7BE0" },  /* auto */
  { 0x005D7C00, (void *) &dk2::sub_5D7C00, "sub_5D7C00" },  /* auto */
  { 0x005D7C20, (void *) &dk2::sub_5D7C20, "sub_5D7C20" },  /* auto */
  { 0x005D7C40, (void *) &dk2::sub_5D7C40, "sub_5D7C40" },  /* auto */
  { 0x005D7C50, (void *) &dk2::sub_5D7C50, "sub_5D7C50" },  /* auto */
  { 0x005D7C70, (void *) &dk2::sub_5D7C70, "sub_5D7C70" },  /* auto */
  { 0x005D8B00, (void *) &dk2::MyWadDirectory_sub_5D8B00, "MyWadDirectory_sub_5D8B00" },  /* auto */
  { 0x005D9470, (void *) &dk2::MyFileInfo_constructor, "MyFileInfo_constructor" },  /* auto */
  { 0x005D9910, (void *) &dk2::Obj6723A0_getDdSurface2, "Obj6723A0_getDdSurface2" },  /* auto */
  { 0x005D9980, (void *) &dk2::Obj6723A0_isSurfaceFlag, "Obj6723A0_isSurfaceFlag" },  /* auto */
  { 0x005DA300, (void *) &dk2::AsyncThing_constructor, "AsyncThing_constructor" },  /* auto */
  { 0x005DA3E0, (void *) &dk2::AsyncThing_thread_proc, "AsyncThing_thread_proc" },  /* auto */
  { 0x005DA9F0, (void *) &dk2::sub_5DA9F0, "sub_5DA9F0" },  /* auto */
  { 0x005DBD40, (void *) &dk2::MyCallback_call, "MyCallback_call" },  /* auto */
  { 0x005DBE10, (void *) &dk2::CursorDrawer_getInstance, "CursorDrawer_getInstance" },  /* auto */
  { 0x005DBE50, (void *) &dk2::CursorDrawer_static_destructor, "CursorDrawer_static_destructor" },  /* auto */
  { 0x005DDA70, (void *) &dk2::MySysMouse_getGuid, "MySysMouse_getGuid" },  /* auto */
  { 0x005DDA80, (void *) &dk2::MySysMouse_getDataFormat, "MySysMouse_getDataFormat" },  /* auto */
  { 0x005DDDE0, (void *) &dk2::MyLoopLList_DxAction_entry_createBetween, "MyLoopLList_DxAction_entry_createBetween" },  /* auto */
  { 0x005DE020, (void *) &dk2::PVoid_assign, "PVoid_assign" },  /* auto */
  { 0x005DE240, (void *) &dk2::MySysKeyboard_getGuid, "MySysKeyboard_getGuid" },  /* auto */
  { 0x005DE250, (void *) &dk2::MySysKeyboard_getDataFormat, "MySysKeyboard_getDataFormat" },  /* auto */
  { 0x005DE310, (void *) &dk2::sub_5DE310, "sub_5DE310" },  /* auto */
  { 0x005E0DA0, (void *) &dk2::sub_5E0DA0, "sub_5E0DA0" },  /* auto */
  { 0x005E26E0, (void *) &dk2::sub_5E26E0, "sub_5E26E0" },  /* auto */
  { 0x005E2820, (void *) &dk2::sub_5E2820, "sub_5E2820" },  /* auto */
  { 0x005E29F0, (void *) &dk2::sub_5E29F0, "sub_5E29F0" },  /* auto */
  { 0x005E32A0, (void *) &dk2::sub_5E32A0, "sub_5E32A0" },  /* auto */
  { 0x005E3960, (void *) &dk2::sub_5E3960, "sub_5E3960" },  /* auto */
  { 0x005E3F90, (void *) &dk2::sub_5E3F90, "sub_5E3F90" },  /* auto */
  { 0x005E44D0, (void *) &dk2::sub_5E44D0, "sub_5E44D0" },  /* auto */
  { 0x005E4AE0, (void *) &dk2::sub_5E4AE0, "sub_5E4AE0" },  /* auto */
  { 0x005E72B0, (void *) &dk2::sub_5E72B0, "sub_5E72B0" },  /* auto */
  { 0x005E8D50, (void *) &dk2::sub_5E8D50, "sub_5E8D50" },  /* auto */
  { 0x005E8E80, (void *) &dk2::sub_5E8E80, "sub_5E8E80" },  /* auto */
  { 0x005E9040, (void *) &dk2::sub_5E9040, "sub_5E9040" },  /* auto */
  { 0x005E9960, (void *) &dk2::sub_5E9960, "sub_5E9960" },  /* auto */
  { 0x005EA020, (void *) &dk2::sub_5EA020, "sub_5EA020" },  /* auto */
  { 0x005EA610, (void *) &dk2::sub_5EA610, "sub_5EA610" },  /* auto */
  { 0x005EAB70, (void *) &dk2::sub_5EAB70, "sub_5EAB70" },  /* auto */
  { 0x005EB180, (void *) &dk2::sub_5EB180, "sub_5EB180" },  /* auto */
  { 0x005EE0A0, (void *) &dk2::sub_5EE0A0, "sub_5EE0A0" },  /* auto */
  { 0x005EFB60, (void *) &dk2::sub_5EFB60, "sub_5EFB60" },  /* auto */
  { 0x005EFCA0, (void *) &dk2::sub_5EFCA0, "sub_5EFCA0" },  /* auto */
  { 0x005EFE60, (void *) &dk2::sub_5EFE60, "sub_5EFE60" },  /* auto */
  { 0x005F06D0, (void *) &dk2::sub_5F06D0, "sub_5F06D0" },  /* auto */
  { 0x005F0D90, (void *) &dk2::sub_5F0D90, "sub_5F0D90" },  /* auto */
  { 0x005F1310, (void *) &dk2::sub_5F1310, "sub_5F1310" },  /* auto */
  { 0x005F1950, (void *) &dk2::sub_5F1950, "sub_5F1950" },  /* auto */
  { 0x005F1F90, (void *) &dk2::sub_5F1F90, "sub_5F1F90" },  /* auto */
  { 0x005F45D0, (void *) &dk2::sub_5F45D0, "sub_5F45D0" },  /* auto */
  { 0x005F5EB0, (void *) &dk2::sub_5F5EB0, "sub_5F5EB0" },  /* auto */
  { 0x005F5FE0, (void *) &dk2::sub_5F5FE0, "sub_5F5FE0" },  /* auto */
  { 0x005F6170, (void *) &dk2::sub_5F6170, "sub_5F6170" },  /* auto */
  { 0x005F6930, (void *) &dk2::sub_5F6930, "sub_5F6930" },  /* auto */
  { 0x005F6FA0, (void *) &dk2::sub_5F6FA0, "sub_5F6FA0" },  /* auto */
  { 0x005F74F0, (void *) &dk2::sub_5F74F0, "sub_5F74F0" },  /* auto */
  { 0x005F7A40, (void *) &dk2::sub_5F7A40, "sub_5F7A40" },  /* auto */
  { 0x005F7FD0, (void *) &dk2::sub_5F7FD0, "sub_5F7FD0" },  /* auto */
  { 0x005F7FE0, (void *) &dk2::sub_5F7FE0, "sub_5F7FE0" },  /* auto */
  { 0x005F7FF0, (void *) &dk2::sub_5F7FF0, "sub_5F7FF0" },  /* auto */
  { 0x005F8000, (void *) &dk2::sub_5F8000, "sub_5F8000" },  /* auto */
  { 0x005F8010, (void *) &dk2::sub_5F8010, "sub_5F8010" },  /* auto */
  { 0x005F8020, (void *) &dk2::sub_5F8020, "sub_5F8020" },  /* auto */
  { 0x005F8030, (void *) &dk2::sub_5F8030, "sub_5F8030" },  /* auto */
  { 0x005F8040, (void *) &dk2::sub_5F8040, "sub_5F8040" },  /* auto */
  { 0x005F8190, (void *) &dk2::libpng_png_error, "libpng_png_error" },  /* auto */
  { 0x005F81C0, (void *) &dk2::libpng_png_warning, "libpng_png_warning" },  /* auto */
  { 0x005F81F0, (void *) &dk2::libpng_png_chunk_error, "libpng_png_chunk_error" },  /* auto */
  { 0x005F8220, (void *) &dk2::libpng_png_format_buffer, "libpng_png_format_buffer" },  /* auto */
  { 0x005F82B0, (void *) &dk2::libpng_png_chunk_warning, "libpng_png_chunk_warning" },  /* auto */
  { 0x005F82E0, (void *) &dk2::libpng_png_default_error, "libpng_png_default_error" },  /* auto */
  { 0x005F8310, (void *) &dk2::libpng_png_default_warning, "libpng_png_default_warning" },  /* auto */
  { 0x005F8330, (void *) &dk2::libpng_png_set_error_fn, "libpng_png_set_error_fn" },  /* auto */
  { 0x005F8350, (void *) &dk2::libpng_png_create_struct, "libpng_png_create_struct" },  /* auto */
  { 0x005F83A0, (void *) &dk2::libpng_png_destroy_struct, "libpng_png_destroy_struct" },  /* auto */
  { 0x005F83C0, (void *) &dk2::libpng_png_malloc, "libpng_png_malloc" },  /* auto */
  { 0x005F8400, (void *) &dk2::libpng_png_free, "libpng_png_free" },  /* auto */
  { 0x005F8420, (void *) &dk2::libpng_png_memcpy_check, "libpng_png_memcpy_check" },  /* auto */
  { 0x005F8450, (void *) &dk2::libpng_png_memset_check, "libpng_png_memset_check" },  /* auto */
  { 0x005F8490, (void *) &dk2::zlib_crc32, "zlib_crc32" },  /* auto */
  { 0x005F85D0, (void *) &dk2::zlib_inflateReset, "zlib_inflateReset" },  /* auto */
  { 0x005F8620, (void *) &dk2::zlib_inflateEnd, "zlib_inflateEnd" },  /* auto */
  { 0x005F8670, (void *) &dk2::zlib_inflateInit2_, "zlib_inflateInit2_" },  /* auto */
  { 0x005F8780, (void *) &dk2::zlib_inflateInit_, "zlib_inflateInit_" },  /* auto */
  { 0x005F87A0, (void *) &dk2::zlib_inflate, "zlib_inflate" },  /* auto */
  { 0x005F8BF0, (void *) &dk2::libpng_png_get_uint_32, "libpng_png_get_uint_32" },  /* auto */
  { 0x005F8C20, (void *) &dk2::libpng_png_get_uint_16, "libpng_png_get_uint_16" },  /* auto */
  { 0x005F8C40, (void *) &dk2::libpng_png_crc_read, "libpng_png_crc_read" },  /* auto */
  { 0x005F8C70, (void *) &dk2::libpng_png_crc_finish, "libpng_png_crc_finish" },  /* auto */
  { 0x005F8D20, (void *) &dk2::libpng_png_crc_error, "libpng_png_crc_error" },  /* auto */
  { 0x005F8D90, (void *) &dk2::libpng_png_handle_IHDR, "libpng_png_handle_IHDR" },  /* auto */
  { 0x005F9000, (void *) &dk2::libpng_png_handle_PLTE, "libpng_png_handle_PLTE" },  /* auto */
  { 0x005F9170, (void *) &dk2::libpng_png_handle_IEND, "libpng_png_handle_IEND" },  /* auto */
  { 0x005F91D0, (void *) &dk2::libpng_png_handle_gAMA, "libpng_png_handle_gAMA" },  /* auto */
  { 0x005F9340, (void *) &dk2::libpng_png_handle_sBIT, "libpng_png_handle_sBIT" },  /* auto */
  { 0x005F94B0, (void *) &dk2::libpng_png_handle_cHRM, "libpng_png_handle_cHRM" },  /* auto */
  { 0x005F9B50, (void *) &dk2::libpng_png_handle_sRGB, "libpng_png_handle_sRGB" },  /* auto */
  { 0x005F9DB0, (void *) &dk2::libpng_png_handle_tRNS, "libpng_png_handle_tRNS" },  /* auto */
  { 0x005FA000, (void *) &dk2::libpng_png_handle_bKGD, "libpng_png_handle_bKGD" },  /* auto */
  { 0x005FA1E0, (void *) &dk2::libpng_png_handle_hIST, "libpng_png_handle_hIST" },  /* auto */
  { 0x005FA330, (void *) &dk2::libpng_png_handle_pHYs, "libpng_png_handle_pHYs" },  /* auto */
  { 0x005FA440, (void *) &dk2::libpng_png_handle_oFFs, "libpng_png_handle_oFFs" },  /* auto */
  { 0x005FA550, (void *) &dk2::libpng_png_handle_pCAL, "libpng_png_handle_pCAL" },  /* auto */
  { 0x005FA7A0, (void *) &dk2::libpng_png_handle_tIME, "libpng_png_handle_tIME" },  /* auto */
  { 0x005FA8A0, (void *) &dk2::libpng_png_handle_tEXt, "libpng_png_handle_tEXt" },  /* auto */
  { 0x005FA960, (void *) &dk2::libpng_png_handle_zTXt, "libpng_png_handle_zTXt" },  /* auto */
  { 0x005FACE0, (void *) &dk2::libpng_png_handle_unknown, "libpng_png_handle_unknown" },  /* auto */
  { 0x005FAD30, (void *) &dk2::libpng_png_check_chunk_name, "libpng_png_check_chunk_name" },  /* auto */
  { 0x005FADA0, (void *) &dk2::libpng_png_combine_row, "libpng_png_combine_row" },  /* auto */
  { 0x005FB0C0, (void *) &dk2::libpng_png_do_read_interlace, "libpng_png_do_read_interlace" },  /* auto */
  { 0x005FB4F0, (void *) &dk2::libpng_png_read_filter_row, "libpng_png_read_filter_row" },  /* auto */
  { 0x005FB6D0, (void *) &dk2::libpng_png_read_finish_row, "libpng_png_read_finish_row" },  /* auto */
  { 0x005FB990, (void *) &dk2::libpng_png_read_start_row, "libpng_png_read_start_row" },  /* auto */
  { 0x005FD650, (void *) &dk2::sub_5FD650, "sub_5FD650" },  /* auto */
  { 0x005FE240, (void *) &dk2::MyLocalStr_format, "MyLocalStr_format" },  /* auto */
  { 0x005FE970, (void *) &dk2::MyLocalStr_toLowerPath, "MyLocalStr_toLowerPath" },  /* auto */
  { 0x005FF9D0, (void *) &dk2::sub_5FF9D0, "sub_5FF9D0" },  /* auto */
  { 0x005FFC60, (void *) &dk2::sub_5FFC60, "sub_5FFC60" },  /* auto */
  { 0x005FFCA0, (void *) &dk2::j_MyInputStream_destructor, "j_MyInputStream_destructor" },  /* auto */
  { 0x00600480, (void *) &dk2::MyDirectInput_destructor, "MyDirectInput_destructor" },  /* auto */
  { 0x006006C0, (void *) &dk2::sub_6006C0, "sub_6006C0" },  /* auto */
  { 0x006006D0, (void *) &dk2::sub_6006D0, "sub_6006D0" },  /* auto */
  { 0x00600710, (void *) &dk2::sub_600710, "sub_600710" },  /* auto */
  { 0x00600720, (void *) &dk2::sub_600720, "sub_600720" },  /* auto */
  { 0x006007B0, (void *) &dk2::sub_6007B0, "sub_6007B0" },  /* auto */
  { 0x006007C0, (void *) &dk2::sub_6007C0, "sub_6007C0" },  /* auto */
  { 0x00600800, (void *) &dk2::sub_600800, "sub_600800" },  /* auto */
  { 0x00600810, (void *) &dk2::sub_600810, "sub_600810" },  /* auto */
  { 0x006008F0, (void *) &dk2::sub_6008F0, "sub_6008F0" },  /* auto */
  { 0x00600900, (void *) &dk2::sub_600900, "sub_600900" },  /* auto */
  { 0x00600940, (void *) &dk2::sub_600940, "sub_600940" },  /* auto */
  { 0x00600950, (void *) &dk2::sub_600950, "sub_600950" },  /* auto */
  { 0x00600F80, (void *) &dk2::zlib_inflate_blocks_reset, "zlib_inflate_blocks_reset" },  /* auto */
  { 0x00601000, (void *) &dk2::zlib_inflate_blocks_new, "zlib_inflate_blocks_new" },  /* auto */
  { 0x006010B0, (void *) &dk2::zlib_inflate_blocks, "zlib_inflate_blocks" },  /* auto */
  { 0x00601DA0, (void *) &dk2::zlib_inflate_blocks_free, "zlib_inflate_blocks_free" },  /* auto */
  { 0x00601DF0, (void *) &dk2::zlib_adler32, "zlib_adler32" },  /* auto */
  { 0x00601F20, (void *) &dk2::zlib_zcalloc, "zlib_zcalloc" },  /* auto */
  { 0x00601F40, (void *) &dk2::zlib_zcfree, "zlib_zcfree" },  /* auto */
  { 0x00601F50, (void *) &dk2::libpng_png_set_bKGD, "libpng_png_set_bKGD" },  /* auto */
  { 0x00601F90, (void *) &dk2::libpng_png_set_cHRM, "libpng_png_set_cHRM" },  /* auto */
  { 0x00602000, (void *) &dk2::libpng_png_set_gAMA, "libpng_png_set_gAMA" },  /* auto */
  { 0x00602030, (void *) &dk2::libpng_png_set_hIST, "libpng_png_set_hIST" },  /* auto */
  { 0x00602060, (void *) &dk2::libpng_png_set_IHDR, "libpng_png_set_IHDR" },  /* auto */
  { 0x00602120, (void *) &dk2::libpng_png_set_oFFs, "libpng_png_set_oFFs" },  /* auto */
  { 0x00602150, (void *) &dk2::libpng_png_set_pCAL, "libpng_png_set_pCAL" },  /* auto */
  { 0x006022A0, (void *) &dk2::libpng_png_set_pHYs, "libpng_png_set_pHYs" },  /* auto */
  { 0x006022D0, (void *) &dk2::libpng_png_set_PLTE, "libpng_png_set_PLTE" },  /* auto */
  { 0x00602300, (void *) &dk2::libpng_png_set_sBIT, "libpng_png_set_sBIT" },  /* auto */
  { 0x00602330, (void *) &dk2::libpng_png_set_sRGB, "libpng_png_set_sRGB" },  /* auto */
  { 0x00602360, (void *) &dk2::libpng_png_set_sRGB_gAMA_and_cHRM, "libpng_png_set_sRGB_gAMA_and_cHRM" },  /* auto */
  { 0x00602400, (void *) &dk2::libpng_png_set_text, "libpng_png_set_text" },  /* auto */
  { 0x00602510, (void *) &dk2::libpng_png_set_tIME, "libpng_png_set_tIME" },  /* auto */
  { 0x00602540, (void *) &dk2::libpng_png_set_tRNS, "libpng_png_set_tRNS" },  /* auto */
  { 0x00602CA0, (void *) &dk2::sub_602CA0, "sub_602CA0" },  /* auto */
  { 0x00602CC0, (void *) &dk2::sub_602CC0, "sub_602CC0" },  /* auto */
  { 0x00602CE0, (void *) &dk2::sub_602CE0, "sub_602CE0" },  /* auto */
  { 0x00602F90, (void *) &dk2::sub_602F90, "sub_602F90" },  /* auto */
  { 0x006031B0, (void *) &dk2::sub_6031B0, "sub_6031B0" },  /* auto */
  { 0x006031E0, (void *) &dk2::sub_6031E0, "sub_6031E0" },  /* auto */
  { 0x00603220, (void *) &dk2::sub_603220, "sub_603220" },  /* auto */
  { 0x00603710, (void *) &dk2::sub_603710, "sub_603710" },  /* auto */
  { 0x00603900, (void *) &dk2::sub_603900, "sub_603900" },  /* auto */
  { 0x00603910, (void *) &dk2::sub_603910, "sub_603910" },  /* auto */
  { 0x00603950, (void *) &dk2::sub_603950, "sub_603950" },  /* auto */
  { 0x00603990, (void *) &dk2::sub_603990, "sub_603990" },  /* auto */
  { 0x00603A50, (void *) &dk2::sub_603A50, "sub_603A50" },  /* auto */
  { 0x00603AC0, (void *) &dk2::zlib_inflate_codes_new, "zlib_inflate_codes_new" },  /* auto */
  { 0x00603B00, (void *) &dk2::zlib_inflate_codes, "zlib_inflate_codes" },  /* auto */
  { 0x006042B0, (void *) &dk2::zlib_inflate_codes_free, "zlib_inflate_codes_free" },  /* auto */
  { 0x006042D0, (void *) &dk2::zlib_inflate_trees_bits, "zlib_inflate_trees_bits" },  /* auto */
  { 0x00604380, (void *) &dk2::zlib_huft_build, "zlib_huft_build" },  /* auto */
  { 0x00604830, (void *) &dk2::zlib_inflate_trees_dynamic, "zlib_inflate_trees_dynamic" },  /* auto */
  { 0x006049C0, (void *) &dk2::zlib_inflate_trees_fixed, "zlib_inflate_trees_fixed" },  /* auto */
  { 0x006049F0, (void *) &dk2::zlib_inflate_flush, "zlib_inflate_flush" },  /* auto */
  { 0x00604B30, (void *) &dk2::sub_604B30, "sub_604B30" },  /* auto */
  { 0x00604D40, (void *) &dk2::sub_604D40, "sub_604D40" },  /* auto */
  { 0x00604D50, (void *) &dk2::sub_604D50, "sub_604D50" },  /* auto */
  { 0x00604D60, (void *) &dk2::sub_604D60, "sub_604D60" },  /* auto */
  { 0x00605010, (void *) &dk2::zlib_inflate_fast, "zlib_inflate_fast" },  /* auto */
  { 0x006053B0, (void *) &dk2::sub_6053B0, "sub_6053B0" },  /* auto */
  { 0x006055E0, (void *) &dk2::sub_6055E0, "sub_6055E0" },  /* auto */
  { 0x00605660, (void *) &dk2::sub_605660, "sub_605660" },  /* auto */
  { 0x00605920, (void *) &dk2::sub_605920, "sub_605920" },  /* auto */
  { 0x00605950, (void *) &dk2::sub_605950, "sub_605950" },  /* auto */
  { 0x006059D0, (void *) &dk2::sub_6059D0, "sub_6059D0" },  /* auto */
  { 0x00605A80, (void *) &dk2::sub_605A80, "sub_605A80" },  /* auto */
  { 0x00605B20, (void *) &dk2::sub_605B20, "sub_605B20" },  /* auto */
  { 0x00605C80, (void *) &dk2::sub_605C80, "sub_605C80" },  /* auto */
  { 0x00605DB0, (void *) &dk2::sub_605DB0, "sub_605DB0" },  /* auto */
  { 0x00605E30, (void *) &dk2::sub_605E30, "sub_605E30" },  /* auto */
  { 0x00606190, (void *) &dk2::sub_606190, "sub_606190" },  /* auto */
  { 0x00606310, (void *) &dk2::sub_606310, "sub_606310" },  /* auto */
  { 0x00606770, (void *) &dk2::sub_606770, "sub_606770" },  /* auto */
  { 0x006067E0, (void *) &dk2::nullsub_20, "nullsub_20" },  /* auto */
  { 0x006067F0, (void *) &dk2::sub_6067F0, "sub_6067F0" },  /* auto */
  { 0x00606860, (void *) &dk2::sub_606860, "sub_606860" },  /* auto */
  { 0x00606900, (void *) &dk2::sub_606900, "sub_606900" },  /* auto */
  { 0x00606B50, (void *) &dk2::sub_606B50, "sub_606B50" },  /* auto */
  { 0x00606D50, (void *) &dk2::sub_606D50, "sub_606D50" },  /* auto */
  { 0x00606F90, (void *) &dk2::sub_606F90, "sub_606F90" },  /* auto */
  { 0x00607050, (void *) &dk2::sub_607050, "sub_607050" },  /* auto */
  { 0x00607280, (void *) &dk2::sub_607280, "sub_607280" },  /* auto */
  { 0x00607300, (void *) &dk2::sub_607300, "sub_607300" },  /* auto */
  { 0x00607380, (void *) &dk2::sub_607380, "sub_607380" },  /* auto */
  { 0x00607470, (void *) &dk2::sub_607470, "sub_607470" },  /* auto */
  { 0x006076E0, (void *) &dk2::sub_6076E0, "sub_6076E0" },  /* auto */
  { 0x00607C60, (void *) &dk2::sub_607C60, "sub_607C60" },  /* auto */
  { 0x006080B0, (void *) &dk2::sub_6080B0, "sub_6080B0" },  /* auto */
  { 0x00608120, (void *) &dk2::sub_608120, "sub_608120" },  /* auto */
  { 0x00608140, (void *) &dk2::sub_608140, "sub_608140" },  /* auto */
  { 0x006081D0, (void *) &dk2::sub_6081D0, "sub_6081D0" },  /* auto */
  { 0x00608240, (void *) &dk2::sub_608240, "sub_608240" },  /* auto */
  { 0x006082E0, (void *) &dk2::TbSysCommand_Process_fun_6082E0, "TbSysCommand_Process_fun_6082E0" },  /* auto */
  { 0x00608300, (void *) &dk2::TbSysCommand_StopAll_fun_608300, "TbSysCommand_StopAll_fun_608300" },  /* auto */
  { 0x00608320, (void *) &dk2::TbSysCommand_PauseAll_fun_608320, "TbSysCommand_PauseAll_fun_608320" },  /* auto */
  { 0x00608340, (void *) &dk2::TbSysCommand_RestartAll_fun_608340, "TbSysCommand_RestartAll_fun_608340" },  /* auto */
  { 0x00608540, (void *) &dk2::TbSysCommand_StopSFX_fun_608540, "TbSysCommand_StopSFX_fun_608540" },  /* auto */
  { 0x00609030, (void *) &dk2::sub_609030, "sub_609030" },  /* auto */
  { 0x0060A880, (void *) &dk2::sub_60A880, "sub_60A880" },  /* auto */
  { 0x0060B270, (void *) &dk2::sub_60B270, "sub_60B270" },  /* auto */
  { 0x0060B9F0, (void *) &dk2::sub_60B9F0, "sub_60B9F0" },  /* auto */
  { 0x0060BA20, (void *) &dk2::sub_60BA20, "sub_60BA20" },  /* auto */
  { 0x0060BBC0, (void *) &dk2::sub_60BBC0, "sub_60BBC0" },  /* auto */
  { 0x0060BC10, (void *) &dk2::sub_60BC10, "sub_60BC10" },  /* auto */
  { 0x0060BCB0, (void *) &dk2::sub_60BCB0, "sub_60BCB0" },  /* auto */
  { 0x0060BEC0, (void *) &dk2::sub_60BEC0, "sub_60BEC0" },  /* auto */
  { 0x0060C5E0, (void *) &dk2::sub_60C5E0, "sub_60C5E0" },  /* auto */
  { 0x0060C5F0, (void *) &dk2::sub_60C5F0, "sub_60C5F0" },  /* auto */
  { 0x0060C630, (void *) &dk2::sub_60C630, "sub_60C630" },  /* auto */
  { 0x0060CFE0, (void *) &dk2::sub_60CFE0, "sub_60CFE0" },  /* auto */
  { 0x0060D210, (void *) &dk2::sub_60D210, "sub_60D210" },  /* auto */
  { 0x0060D350, (void *) &dk2::sub_60D350, "sub_60D350" },  /* auto */
  { 0x0060D3F0, (void *) &dk2::sub_60D3F0, "sub_60D3F0" },  /* auto */
  { 0x0060D460, (void *) &dk2::sub_60D460, "sub_60D460" },  /* auto */
  { 0x0060D4A0, (void *) &dk2::sub_60D4A0, "sub_60D4A0" },  /* auto */
  { 0x0060DE40, (void *) &dk2::sub_60DE40, "sub_60DE40" },  /* auto */
  { 0x0060E020, (void *) &dk2::sub_60E020, "sub_60E020" },  /* auto */
  { 0x0060E0B0, (void *) &dk2::sub_60E0B0, "sub_60E0B0" },  /* auto */
  { 0x0060E290, (void *) &dk2::sub_60E290, "sub_60E290" },  /* auto */
  { 0x0060E720, (void *) &dk2::sub_60E720, "sub_60E720" },  /* auto */
  { 0x0060ED30, (void *) &dk2::sub_60ED30, "sub_60ED30" },  /* auto */
  { 0x0060F1D0, (void *) &dk2::ret_void_3args, "ret_void_3args" },  /* auto */
  { 0x0060F1E0, (void *) &dk2::MyUnk674058_getInstance, "MyUnk674058_getInstance" },  /* auto */
  { 0x0060F220, (void *) &dk2::MyUnk674058_static_destructor, "MyUnk674058_static_destructor" },  /* auto */
  { 0x006123E0, (void *) &dk2::sub_6123E0, "sub_6123E0" },  /* auto */
  { 0x00612B70, (void *) &dk2::sub_612B70, "sub_612B70" },  /* auto */
  { 0x006137F0, (void *) &dk2::sub_6137F0, "sub_6137F0" },  /* auto */
  { 0x00613EB0, (void *) &dk2::sub_613EB0, "sub_613EB0" },  /* auto */
  { 0x006144D0, (void *) &dk2::sub_6144D0, "sub_6144D0" },  /* auto */
  { 0x006147D0, (void *) &dk2::sub_6147D0, "sub_6147D0" },  /* auto */
  { 0x00614860, (void *) &dk2::sub_614860, "sub_614860" },  /* auto */
  { 0x006148F0, (void *) &dk2::MyDwordsCpy, "MyDwordsCpy" },  /* auto */
  { 0x00614920, (void *) &dk2::sub_614920, "sub_614920" },  /* auto */
  { 0x00614940, (void *) &dk2::sub_614940, "sub_614940" },  /* auto */
  { 0x00614B90, (void *) &dk2::sub_614B90, "sub_614B90" },  /* auto */
  { 0x00614C50, (void *) &dk2::sub_614C50, "sub_614C50" },  /* auto */
  { 0x00614C90, (void *) &dk2::sub_614C90, "sub_614C90" },  /* auto */
  { 0x00614D10, (void *) &dk2::sub_614D10, "sub_614D10" },  /* auto */
  { 0x00614D50, (void *) &dk2::unknown_libname_57, "unknown_libname_57" },  /* auto */
  { 0x00614DC0, (void *) &dk2::sub_614DC0, "sub_614DC0" },  /* auto */
  { 0x00615380, (void *) &dk2::sub_615380, "sub_615380" },  /* auto */
  { 0x00615390, (void *) &dk2::sub_615390, "sub_615390" },  /* auto */
  { 0x006153C0, (void *) &dk2::sub_6153C0, "sub_6153C0" },  /* auto */
  { 0x006153F0, (void *) &dk2::sub_6153F0, "sub_6153F0" },  /* auto */
  { 0x00615430, (void *) &dk2::sub_615430, "sub_615430" },  /* auto */
  { 0x006154A0, (void *) &dk2::sub_6154A0, "sub_6154A0" },  /* auto */
  { 0x006154F0, (void *) &dk2::sub_6154F0, "sub_6154F0" },  /* auto */
  { 0x00615500, (void *) &dk2::sub_615500, "sub_615500" },  /* auto */
  { 0x00615530, (void *) &dk2::sub_615530, "sub_615530" },  /* auto */
  { 0x00615560, (void *) &dk2::sub_615560, "sub_615560" },  /* auto */
  { 0x006155A0, (void *) &dk2::sub_6155A0, "sub_6155A0" },  /* auto */
  { 0x00615610, (void *) &dk2::sub_615610, "sub_615610" },  /* auto */
  { 0x006157F0, (void *) &dk2::sub_6157F0, "sub_6157F0" },  /* auto */
  { 0x00615940, (void *) &dk2::sub_615940, "sub_615940" },  /* auto */
  { 0x00615EE0, (void *) &dk2::sub_615EE0, "sub_615EE0" },  /* auto */
  { 0x00615F80, (void *) &dk2::__RTC_NumErrors_0, "__RTC_NumErrors_0" },  /* auto */
  { 0x00615F90, (void *) &dk2::sub_615F90, "sub_615F90" },  /* auto */
  { 0x00616090, (void *) &dk2::sub_616090, "sub_616090" },  /* auto */
  { 0x006160E0, (void *) &dk2::sub_6160E0, "sub_6160E0" },  /* auto */
  { 0x00616150, (void *) &dk2::sub_616150, "sub_616150" },  /* auto */
  { 0x006162F0, (void *) &dk2::sub_6162F0, "sub_6162F0" },  /* auto */
  { 0x00616360, (void *) &dk2::__RTC_NumErrors_1, "__RTC_NumErrors_1" },  /* auto */
  { 0x006165E0, (void *) &dk2::sub_6165E0, "sub_6165E0" },  /* auto */
  { 0x00616630, (void *) &dk2::sub_616630, "sub_616630" },  /* auto */
  { 0x00616C90, (void *) &dk2::sub_616C90, "sub_616C90" },  /* auto */
  { 0x00618040, (void *) &dk2::sub_618040, "sub_618040" },  /* auto */
  { 0x00618160, (void *) &dk2::sub_618160, "sub_618160" },  /* auto */
  { 0x00618190, (void *) &dk2::sub_618190, "sub_618190" },  /* auto */
  { 0x00618440, (void *) &dk2::sub_618440, "sub_618440" },  /* auto */
  { 0x00618B60, (void *) &dk2::sub_618B60, "sub_618B60" },  /* auto */
  { 0x00618C20, (void *) &dk2::sub_618C20, "sub_618C20" },  /* auto */
  { 0x00618ED0, (void *) &dk2::sub_618ED0, "sub_618ED0" },  /* auto */
  { 0x006190D0, (void *) &dk2::sub_6190D0, "sub_6190D0" },  /* auto */
  { 0x006193B0, (void *) &dk2::sub_6193B0, "sub_6193B0" },  /* auto */
  { 0x006193D0, (void *) &dk2::my_memcpy, "my_memcpy" },    /* auto */
  { 0x006197A0, (void *) &dk2::sub_6197A0, "sub_6197A0" },  /* auto */
  { 0x006197E0, (void *) &dk2::sub_6197E0, "sub_6197E0" },  /* auto */
  { 0x00619CE0, (void *) &dk2::sub_619CE0, "sub_619CE0" },  /* auto */
  { 0x0061A290, (void *) &dk2::sub_61A290, "sub_61A290" },  /* auto */
  { 0x0061A8B0, (void *) &dk2::sub_61A8B0, "sub_61A8B0" },  /* auto */
  { 0x0061AC80, (void *) &dk2::sub_61AC80, "sub_61AC80" },  /* auto */
  { 0x0061AD00, (void *) &dk2::sub_61AD00, "sub_61AD00" },  /* auto */
  { 0x0061AD90, (void *) &dk2::sub_61AD90, "sub_61AD90" },  /* auto */
  { 0x0061B070, (void *) &dk2::sub_61B070, "sub_61B070" },  /* auto */
  { 0x0061B080, (void *) &dk2::sub_61B080, "sub_61B080" },  /* auto */
  { 0x0061B090, (void *) &dk2::sub_61B090, "sub_61B090" },  /* auto */
  { 0x0061B0A0, (void *) &dk2::sub_61B0A0, "sub_61B0A0" },  /* auto */
  { 0x0061B230, (void *) &dk2::sub_61B230, "sub_61B230" },  /* auto */
  { 0x0061BE80, (void *) &dk2::sub_61BE80, "sub_61BE80" },  /* auto */
  { 0x0061C0A0, (void *) &dk2::sub_61C0A0, "sub_61C0A0" },  /* auto */
  { 0x0061C0B0, (void *) &dk2::sub_61C0B0, "sub_61C0B0" },  /* auto */
  { 0x0061C0E0, (void *) &dk2::sub_61C0E0, "sub_61C0E0" },  /* auto */
  { 0x0061C110, (void *) &dk2::sub_61C110, "sub_61C110" },  /* auto */
  { 0x0061C150, (void *) &dk2::sub_61C150, "sub_61C150" },  /* auto */
  { 0x0061C1C0, (void *) &dk2::sub_61C1C0, "sub_61C1C0" },  /* auto */
  { 0x0061C510, (void *) &dk2::sub_61C510, "sub_61C510" },  /* auto */
  { 0x0061C520, (void *) &dk2::sub_61C520, "sub_61C520" },  /* auto */
  { 0x0061C550, (void *) &dk2::sub_61C550, "sub_61C550" },  /* auto */
  { 0x0061C580, (void *) &dk2::sub_61C580, "sub_61C580" },  /* auto */
  { 0x0061C5C0, (void *) &dk2::sub_61C5C0, "sub_61C5C0" },  /* auto */
  { 0x0061C630, (void *) &dk2::sub_61C630, "sub_61C630" },  /* auto */
  { 0x0061C7F0, (void *) &dk2::sub_61C7F0, "sub_61C7F0" },  /* auto */
  { 0x0061C800, (void *) &dk2::sub_61C800, "sub_61C800" },  /* auto */
  { 0x0061C830, (void *) &dk2::sub_61C830, "sub_61C830" },  /* auto */
  { 0x0061C860, (void *) &dk2::sub_61C860, "sub_61C860" },  /* auto */
  { 0x0061C8A0, (void *) &dk2::sub_61C8A0, "sub_61C8A0" },  /* auto */
  { 0x0061C910, (void *) &dk2::sub_61C910, "sub_61C910" },  /* auto */
  { 0x0061CB20, (void *) &dk2::sub_61CB20, "sub_61CB20" },  /* auto */
  { 0x0061CB30, (void *) &dk2::sub_61CB30, "sub_61CB30" },  /* auto */
  { 0x0061CB60, (void *) &dk2::sub_61CB60, "sub_61CB60" },  /* auto */
  { 0x0061CB90, (void *) &dk2::sub_61CB90, "sub_61CB90" },  /* auto */
  { 0x0061CBD0, (void *) &dk2::sub_61CBD0, "sub_61CBD0" },  /* auto */
  { 0x0061CC40, (void *) &dk2::sub_61CC40, "sub_61CC40" },  /* auto */
  { 0x0061CE30, (void *) &dk2::sub_61CE30, "sub_61CE30" },  /* auto */
  { 0x0061CE40, (void *) &dk2::sub_61CE40, "sub_61CE40" },  /* auto */
  { 0x0061CE70, (void *) &dk2::sub_61CE70, "sub_61CE70" },  /* auto */
  { 0x0061CEA0, (void *) &dk2::sub_61CEA0, "sub_61CEA0" },  /* auto */
  { 0x0061CEE0, (void *) &dk2::sub_61CEE0, "sub_61CEE0" },  /* auto */
  { 0x0061CF50, (void *) &dk2::sub_61CF50, "sub_61CF50" },  /* auto */
  { 0x0061D120, (void *) &dk2::sub_61D120, "sub_61D120" },  /* auto */
  { 0x0061D130, (void *) &dk2::sub_61D130, "sub_61D130" },  /* auto */
  { 0x0061D160, (void *) &dk2::sub_61D160, "sub_61D160" },  /* auto */
  { 0x0061D190, (void *) &dk2::sub_61D190, "sub_61D190" },  /* auto */
  { 0x0061D1D0, (void *) &dk2::sub_61D1D0, "sub_61D1D0" },  /* auto */
  { 0x0061D240, (void *) &dk2::sub_61D240, "sub_61D240" },  /* auto */
  { 0x0061D690, (void *) &dk2::sub_61D690, "sub_61D690" },  /* auto */
  { 0x0061D910, (void *) &dk2::sub_61D910, "sub_61D910" },  /* auto */
  { 0x0061D920, (void *) &dk2::sub_61D920, "sub_61D920" },  /* auto */
  { 0x0061D950, (void *) &dk2::sub_61D950, "sub_61D950" },  /* auto */
  { 0x0061D980, (void *) &dk2::sub_61D980, "sub_61D980" },  /* auto */
  { 0x0061D9C0, (void *) &dk2::sub_61D9C0, "sub_61D9C0" },  /* auto */
  { 0x0061DA30, (void *) &dk2::sub_61DA30, "sub_61DA30" },  /* auto */
  { 0x0061DC80, (void *) &dk2::sub_61DC80, "sub_61DC80" },  /* auto */
  { 0x0061DC90, (void *) &dk2::sub_61DC90, "sub_61DC90" },  /* auto */
  { 0x0061DCC0, (void *) &dk2::sub_61DCC0, "sub_61DCC0" },  /* auto */
  { 0x0061DCF0, (void *) &dk2::sub_61DCF0, "sub_61DCF0" },  /* auto */
  { 0x0061DD30, (void *) &dk2::sub_61DD30, "sub_61DD30" },  /* auto */
  { 0x0061DDA0, (void *) &dk2::sub_61DDA0, "sub_61DDA0" },  /* auto */
  { 0x0061DFD0, (void *) &dk2::sub_61DFD0, "sub_61DFD0" },  /* auto */
  { 0x0061DFE0, (void *) &dk2::sub_61DFE0, "sub_61DFE0" },  /* auto */
  { 0x0061E010, (void *) &dk2::sub_61E010, "sub_61E010" },  /* auto */
  { 0x0061E040, (void *) &dk2::sub_61E040, "sub_61E040" },  /* auto */
  { 0x0061E080, (void *) &dk2::sub_61E080, "sub_61E080" },  /* auto */
  { 0x0061E0F0, (void *) &dk2::sub_61E0F0, "sub_61E0F0" },  /* auto */
  { 0x0061E2B0, (void *) &dk2::sub_61E2B0, "sub_61E2B0" },  /* auto */
  { 0x0061E2C0, (void *) &dk2::sub_61E2C0, "sub_61E2C0" },  /* auto */
  { 0x0061E2F0, (void *) &dk2::sub_61E2F0, "sub_61E2F0" },  /* auto */
  { 0x0061E320, (void *) &dk2::sub_61E320, "sub_61E320" },  /* auto */
  { 0x0061E360, (void *) &dk2::sub_61E360, "sub_61E360" },  /* auto */
  { 0x0061E3D0, (void *) &dk2::sub_61E3D0, "sub_61E3D0" },  /* auto */
  { 0x0061E420, (void *) &dk2::sub_61E420, "sub_61E420" },  /* auto */
  { 0x0061E430, (void *) &dk2::sub_61E430, "sub_61E430" },  /* auto */
  { 0x0061E460, (void *) &dk2::sub_61E460, "sub_61E460" },  /* auto */
  { 0x0061E490, (void *) &dk2::sub_61E490, "sub_61E490" },  /* auto */
  { 0x0061E4D0, (void *) &dk2::sub_61E4D0, "sub_61E4D0" },  /* auto */
  { 0x0061E540, (void *) &dk2::sub_61E540, "sub_61E540" },  /* auto */
  { 0x0061E700, (void *) &dk2::sub_61E700, "sub_61E700" },  /* auto */
  { 0x0061E740, (void *) &dk2::sub_61E740, "sub_61E740" },  /* auto */
  { 0x0061E750, (void *) &dk2::sub_61E750, "sub_61E750" },  /* auto */
  { 0x0061E780, (void *) &dk2::sub_61E780, "sub_61E780" },  /* auto */
  { 0x0061E7B0, (void *) &dk2::sub_61E7B0, "sub_61E7B0" },  /* auto */
  { 0x0061E7F0, (void *) &dk2::sub_61E7F0, "sub_61E7F0" },  /* auto */
  { 0x0061E860, (void *) &dk2::sub_61E860, "sub_61E860" },  /* auto */
  { 0x0061EBF0, (void *) &dk2::sub_61EBF0, "sub_61EBF0" },  /* auto */
  { 0x0061EC00, (void *) &dk2::sub_61EC00, "sub_61EC00" },  /* auto */
  { 0x0061EC30, (void *) &dk2::sub_61EC30, "sub_61EC30" },  /* auto */
  { 0x0061EC60, (void *) &dk2::sub_61EC60, "sub_61EC60" },  /* auto */
  { 0x0061ECA0, (void *) &dk2::sub_61ECA0, "sub_61ECA0" },  /* auto */
  { 0x0061ED10, (void *) &dk2::sub_61ED10, "sub_61ED10" },  /* auto */
  { 0x0061EF50, (void *) &dk2::sub_61EF50, "sub_61EF50" },  /* auto */
  { 0x0061EF60, (void *) &dk2::sub_61EF60, "sub_61EF60" },  /* auto */
  { 0x0061EF90, (void *) &dk2::sub_61EF90, "sub_61EF90" },  /* auto */
  { 0x0061EFC0, (void *) &dk2::sub_61EFC0, "sub_61EFC0" },  /* auto */
  { 0x0061F000, (void *) &dk2::sub_61F000, "sub_61F000" },  /* auto */
  { 0x0061F070, (void *) &dk2::sub_61F070, "sub_61F070" },  /* auto */
  { 0x0061F3D0, (void *) &dk2::sub_61F3D0, "sub_61F3D0" },  /* auto */
  { 0x0061F3E0, (void *) &dk2::sub_61F3E0, "sub_61F3E0" },  /* auto */
  { 0x0061F410, (void *) &dk2::sub_61F410, "sub_61F410" },  /* auto */
  { 0x0061F440, (void *) &dk2::sub_61F440, "sub_61F440" },  /* auto */
  { 0x0061F480, (void *) &dk2::sub_61F480, "sub_61F480" },  /* auto */
  { 0x0061F4F0, (void *) &dk2::sub_61F4F0, "sub_61F4F0" },  /* auto */
  { 0x0061F7C0, (void *) &dk2::sub_61F7C0, "sub_61F7C0" },  /* auto */
  { 0x0061F8D0, (void *) &dk2::sub_61F8D0, "sub_61F8D0" },  /* auto */
  { 0x0061F8E0, (void *) &dk2::sub_61F8E0, "sub_61F8E0" },  /* auto */
  { 0x0061F910, (void *) &dk2::sub_61F910, "sub_61F910" },  /* auto */
  { 0x0061F940, (void *) &dk2::sub_61F940, "sub_61F940" },  /* auto */
  { 0x0061F980, (void *) &dk2::sub_61F980, "sub_61F980" },  /* auto */
  { 0x0061F9F0, (void *) &dk2::sub_61F9F0, "sub_61F9F0" },  /* auto */
  { 0x0061FB30, (void *) &dk2::sub_61FB30, "sub_61FB30" },  /* auto */
  { 0x0061FB40, (void *) &dk2::sub_61FB40, "sub_61FB40" },  /* auto */
  { 0x0061FB70, (void *) &dk2::sub_61FB70, "sub_61FB70" },  /* auto */
  { 0x0061FBA0, (void *) &dk2::sub_61FBA0, "sub_61FBA0" },  /* auto */
  { 0x0061FBF0, (void *) &dk2::sub_61FBF0, "sub_61FBF0" },  /* auto */
  { 0x0061FC70, (void *) &dk2::sub_61FC70, "sub_61FC70" },  /* auto */
  { 0x0061FCC0, (void *) &dk2::sub_61FCC0, "sub_61FCC0" },  /* auto */
  { 0x0061FCD0, (void *) &dk2::sub_61FCD0, "sub_61FCD0" },  /* auto */
  { 0x0061FD00, (void *) &dk2::sub_61FD00, "sub_61FD00" },  /* auto */
  { 0x0061FD30, (void *) &dk2::sub_61FD30, "sub_61FD30" },  /* auto */
  { 0x0061FD80, (void *) &dk2::sub_61FD80, "sub_61FD80" },  /* auto */
  { 0x0061FE00, (void *) &dk2::sub_61FE00, "sub_61FE00" },  /* auto */
  { 0x006201C0, (void *) &dk2::sub_6201C0, "sub_6201C0" },  /* auto */
  { 0x00628430, (void *) &dk2::static_mmxTest, "static_mmxTest" },  /* auto */
  { 0x00628440, (void *) &dk2::mmxTest, "mmxTest" },  // -  /* auto */
  { 0x00628450, (void *) &dk2::testMmxSupport, "testMmxSupport" },  /* auto */
  { 0x006285C0, (void *) &dk2::sub_6285C0, "sub_6285C0" },  /* auto */
  { 0x00628800, (void *) &dk2::sub_628800, "sub_628800" },  /* auto */
  { 0x00628B70, (void *) &dk2::ret_0_4args, "ret_0_4args" },  /* auto */
  { 0x00628BA0, (void *) &dk2::sub_628BA0, "sub_628BA0" },  /* auto */
  { 0x00628BC0, (void *) &dk2::ret_1_0args, "ret_1_0args" },  /* auto */
  { 0x00628E30, (void *) &dk2::ret_0_1args, "ret_0_1args" },  /* auto */
  { 0x00629150, (void *) &dk2::sub_629150, "sub_629150" },  /* auto */
  { 0x006291B0, (void *) &dk2::sub_6291B0, "sub_6291B0" },  /* auto */
  { 0x00629300, (void *) &dk2::sub_629300, "sub_629300" },  /* auto */
  { 0x00629BC0, (void *) &dk2::sub_629BC0, "sub_629BC0" },  /* auto */
  { 0x00629DD0, (void *) &dk2::sub_629DD0, "sub_629DD0" },  /* auto */
  { 0x00629E10, (void *) &dk2::unknown_libname_58, "unknown_libname_58" },  /* auto */
  { 0x0062A1F0, (void *) &dk2::sub_62A1F0, "sub_62A1F0" },  /* auto */
  { 0x0062A200, (void *) &dk2::sub_62A200, "sub_62A200" },  /* auto */
  { 0x0062A210, (void *) &dk2::ret_void_1args_0, "ret_void_1args_0" },  /* auto */
  { 0x0062A380, (void *) &dk2::sub_62A380, "sub_62A380" },  /* auto */
  { 0x0062A440, (void *) &dk2::sub_62A440, "sub_62A440" },  /* auto */
  { 0x0062A6A0, (void *) &dk2::sub_62A6A0, "sub_62A6A0" },  /* auto */
  { 0x0062AC80, (void *) &dk2::sub_62AC80, "sub_62AC80" },  /* auto */
  { 0x0062B660, (void *) &dk2::sub_62B660, "sub_62B660" },  /* auto */
  { 0x0062B760, (void *) &dk2::sub_62B760, "sub_62B760" },  /* auto */
  { 0x0062C510, (void *) &dk2::MyDR67B9E0_static_constructor, "MyDR67B9E0_static_constructor" },  /* auto */
  { 0x0062C520, (void *) &dk2::MyDR67B9E0_constructor, "MyDR67B9E0_constructor" },  /* auto */
  { 0x0062C540, (void *) &dk2::MyDR67B9E0_static_destructor, "MyDR67B9E0_static_destructor" },  /* auto */
  { 0x0062C550, (void *) &dk2::sub_62C550, "sub_62C550" },  /* auto */
  { 0x0062C560, (void *) &dk2::unknown_libname_61, "unknown_libname_61" },  /* auto */
  { 0x0062C580, (void *) &dk2::unknown_libname_62, "unknown_libname_62" },  /* auto */
  { 0x0062C590, (void *) &dk2::MyCR0_static_constructor, "MyCR0_static_constructor" },  /* auto */
  { 0x0062C5A0, (void *) &dk2::MyCR0_constructor, "MyCR0_constructor" },  /* auto */
  { 0x0062C5F0, (void *) &dk2::MyCR1_static_constructor, "MyCR1_static_constructor" },  /* auto */
  { 0x0062C600, (void *) &dk2::MyCR1_constructor, "MyCR1_constructor" },  /* auto */
  { 0x0062C620, (void *) &dk2::MyCR1_static_destructor, "MyCR1_static_destructor" },  /* auto */
  { 0x0062C650, (void *) &dk2::MyCR2_static_constructor, "MyCR2_static_constructor" },  /* auto */
  { 0x0062C660, (void *) &dk2::MyCR2_constructor, "MyCR2_constructor" },  /* auto */
  { 0x0062C680, (void *) &dk2::MyCR2_static_destructor, "MyCR2_static_destructor" },  /* auto */
  { 0x0062C6D0, (void *) &dk2::sub_62C6D0, "sub_62C6D0" },  /* auto */
  { 0x0062C6E0, (void *) &dk2::sub_62C6E0, "sub_62C6E0" },  /* auto */
  { 0x0062C700, (void *) &dk2::sub_62C700, "sub_62C700" },  /* auto */
  { 0x0062C740, (void *) &dk2::MyTR4_static_constructor, "MyTR4_static_constructor" },  /* auto */
  { 0x0062C750, (void *) &dk2::MyTR4_constructor, "MyTR4_constructor" },  /* auto */
  { 0x0062C7A0, (void *) &dk2::MyTR5_static_constructor, "MyTR5_static_constructor" },  /* auto */
  { 0x0062C7B0, (void *) &dk2::MyTR5_constructor, "MyTR5_constructor" },  /* auto */
  { 0x0062C7D0, (void *) &dk2::MyTR5_static_destructor, "MyTR5_static_destructor" },  /* auto */
  { 0x0062C800, (void *) &dk2::MyTR2_static_constructor, "MyTR2_static_constructor" },  /* auto */
  { 0x0062C810, (void *) &dk2::MyTR2_constructor, "MyTR2_constructor" },  /* auto */
  { 0x0062C830, (void *) &dk2::MyTR2_static_destructor, "MyTR2_static_destructor" },  /* auto */
  { 0x0062C880, (void *) &dk2::MyTR67B938_static_constructor, "MyTR67B938_static_constructor" },  /* auto */
  { 0x0062C890, (void *) &dk2::MyTR67B938_constructor, "MyTR67B938_constructor" },  /* auto */
  { 0x0062C8B0, (void *) &dk2::MyTR67B938_static_destructor, "MyTR67B938_static_destructor" },  /* auto */
  { 0x0062D560, (void *) &dk2::sub_62D560, "sub_62D560" },  /* auto */
  { 0x0062D820, (void *) &dk2::sub_62D820, "sub_62D820" },  /* auto */
  { 0x0062D8A0, (void *) &dk2::MyTextText_fun_62D8A0, "MyTextText_fun_62D8A0" },  /* auto */
  { 0x0062D920, (void *) &dk2::sub_62D920, "sub_62D920" },  /* auto */
  { 0x0062D9B0, (void *) &dk2::MyTextText_create, "MyTextText_create" },  /* auto */
  { 0x0062E140, (void *) &dk2::MyTextUniToMB_create, "MyTextUniToMB_create" },  /* auto */
  { 0x0062E280, (void *) &dk2::MyTextMBToUni_create, "MyTextMBToUni_create" },  /* auto */
  { 0x0062E550, (void *) &dk2::get_chr_type, "get_chr_type" },  /* auto */
  { 0x0062EBF0, (void *) &dk2::charsOneType_doCalcAabb, "charsOneType_doCalcAabb" },  /* auto */
  { 0x0062EC30, (void *) &dk2::charsOneType_doCalcAabbAndDraw, "charsOneType_doCalcAabbAndDraw" },  /* auto */
  { 0x0062EC90, (void *) &dk2::charsOneType_doDrawOrCalcAabb, "charsOneType_doDrawOrCalcAabb" },  /* auto */
  { 0x0062EF30, (void *) &dk2::chars_doDrawOrCalcAabb, "chars_doDrawOrCalcAabb" },  /* auto */
  { 0x0062F1F0, (void *) &dk2::MyCR0_sub_62F1F0, "MyCR0_sub_62F1F0" },  /* auto */
  { 0x0062F2A0, (void *) &dk2::MyCR1_sub_62F2A0, "MyCR1_sub_62F2A0" },  /* auto */
  { 0x0062F9E0, (void *) &dk2::sub_62F9E0, "sub_62F9E0" },  /* auto */
  { 0x0062F9F0, (void *) &dk2::unknown_libname_65, "unknown_libname_65" },  /* auto */
  { 0x0062FA10, (void *) &dk2::unknown_libname_66, "unknown_libname_66" },  /* auto */
  { 0x0062FA20, (void *) &dk2::MyFontRenderer_static_constructor, "MyFontRenderer_static_constructor" },  /* auto */
  { 0x0062FA30, (void *) &dk2::MyFontRenderer_constructor, "MyFontRenderer_constructor" },  /* auto */
  { 0x0062FA50, (void *) &dk2::MyFontRenderer_static_destructor, "MyFontRenderer_static_destructor" },  /* auto */
  { 0x0062FA60, (void *) &dk2::sub_62FA60, "sub_62FA60" },  /* auto */
  { 0x0062FA70, (void *) &dk2::unknown_libname_69, "unknown_libname_69" },  /* auto */
  { 0x0062FA90, (void *) &dk2::unknown_libname_70, "unknown_libname_70" },  /* auto */
  { 0x0062FAA0, (void *) &dk2::sub_62FAA0, "sub_62FAA0" },  /* auto */
  { 0x0062FAB0, (void *) &dk2::unknown_libname_71, "unknown_libname_71" },  /* auto */
  { 0x0062FAD0, (void *) &dk2::unknown_libname_72, "unknown_libname_72" },  /* auto */
  { 0x0062FC60, (void *) &dk2::TextType_MBToUni_static_init, "TextType_MBToUni_static_init" },  /* auto */
  { 0x0062FC80, (void *) &dk2::TextType_UniToMB_static_init, "TextType_UniToMB_static_init" },  /* auto */
  { 0x0062FCA0, (void *) &dk2::TextType_MB_static_init, "TextType_MB_static_init" },  /* auto */
  { 0x0062FCB0, (void *) &dk2::j_TextType_Text_static_init, "j_TextType_Text_static_init" },  /* auto */
  { 0x0062FCC0, (void *) &dk2::TextType_Text_static_init, "TextType_Text_static_init" },  /* auto */
  { 0x0062FCE0, (void *) &dk2::TextType_Font_static_init, "TextType_Font_static_init" },  /* auto */
  { 0x0062FDE0, (void *) &dk2::sub_62FDE0, "sub_62FDE0" },  /* auto */
  { 0x0062FF10, (void *) &dk2::ResourceIndexEntry_getText_addRef, "ResourceIndexEntry_getText_addRef" },  /* auto */
  { 0x00630140, (void *) &dk2::ResourceIndexEntry_getTextType, "ResourceIndexEntry_getTextType" },  /* auto */
  { 0x006305A0, (void *) &dk2::charsOneTypeEx_doCalcAabb, "charsOneTypeEx_doCalcAabb" },  /* auto */
  { 0x006305E0, (void *) &dk2::charsOneTypeEx_doCalcAabbAndDraw, "charsOneTypeEx_doCalcAabbAndDraw" },  /* auto */
  { 0x00630640, (void *) &dk2::charsOneTypeEx_doDrawOrCalcAabb, "charsOneTypeEx_doDrawOrCalcAabb" },  /* auto */
  { 0x006309D0, (void *) &dk2::sub_6309D0, "sub_6309D0" },  /* auto */
  { 0x00630C80, (void *) &dk2::sub_630C80, "sub_630C80" },  /* auto */
  { 0x00630F30, (void *) &dk2::sub_630F30, "sub_630F30" },  /* auto */
  { 0x006311E0, (void *) &dk2::sub_6311E0, "sub_6311E0" },  /* auto */
  { 0x00631A50, (void *) &dk2::sub_631A50, "sub_631A50" },  /* auto */
  { 0x00631E10, (void *) &dk2::sub_631E10, "sub_631E10" },  /* auto */
  { 0x006321D0, (void *) &dk2::sub_6321D0, "sub_6321D0" },  /* auto */
  { 0x00632530, (void *) &dk2::sub_632530, "sub_632530" },  /* auto */
  { 0x006328D0, (void *) &dk2::sub_6328D0, "sub_6328D0" },  /* auto */
  { 0x00632BC0, (void *) &dk2::sub_632BC0, "sub_632BC0" },  /* auto */
  { 0x00632DC0, (void *) &dk2::sub_632DC0, "sub_632DC0" },  /* auto */
  { 0x006330B0, (void *) &dk2::sub_6330B0, "sub_6330B0" },  /* auto */
  { 0x00633390, (void *) &dk2::MyTextMB_create, "MyTextMB_create" },  /* auto */
  { 0x006336D0, (void *) &dk2::MyTextFont_create, "MyTextFont_create" },  /* auto */
  { 0x00633F30, (void *) &dk2::AABB_probably_alignToSurface, "AABB_probably_alignToSurface" },  /* auto */
  { 0x00634150, (void *) &dk2::gCharBuffer_static_destructor, "gCharBuffer_static_destructor" },  /* auto */
  { 0x006347B0, (void *) &dk2::__onexit, "__onexit" },      /* auto */
  { 0x00634840, (void *) &dk2::_atexit, "_atexit" },  // -  /* auto */
  { 0x006349A0, (void *) &dk2::___CxxFrameHandler, "___CxxFrameHandler" },  /* auto */
  { 0x00634C70, (void *) &dk2::__global_unwind2, "__global_unwind2" },  /* auto */
  { 0x00634CB2, (void *) &dk2::__local_unwind2, "__local_unwind2" },  /* auto */
  { 0x00634D1A, (void *) &dk2::__abnormal_termination, "__abnormal_termination" },  /* auto */
  { 0x00634D70, (void *) &dk2::_wcsncpy, "_wcsncpy" },      /* auto */
  { 0x00634DB0, (void *) &dk2::_sprintf, "_sprintf" },      /* auto */
  { 0x00634E20, (void *) &dk2::__fpmath, "__fpmath" },      /* auto */
  { 0x00634E40, (void *) &dk2::__cfltcvt_init_15, "__cfltcvt_init_15" },  /* auto */
  { 0x00634E90, (void *) &dk2::_swprintf, "_swprintf" },    /* auto */
  { 0x00635000, (void *) &dk2::___RTtypeid, "___RTtypeid" },  /* auto */
  { 0x00635120, (void *) &dk2::___RTDynamicCast, "___RTDynamicCast" },  /* auto */
  { 0x00635730, (void *) &dk2::__snwprintf, "__snwprintf" },  /* auto */
  { 0x006357D0, (void *) &dk2::interlocked_or_tolower, "interlocked_or_tolower" },  /* auto */
  { 0x00635860, (void *) &dk2::sub_635860, "sub_635860" },  /* auto */
  { 0x00635960, (void *) &dk2::_wcscat, "_wcscat" },  // -  /* auto */
  { 0x006359A0, (void *) &dk2::_wcscpy, "_wcscpy" },  // -  /* auto */
  { 0x006359D0, (void *) &dk2::_wcslen, "_wcslen" },  // -  /* auto */
  { 0x006359F0, (void *) &dk2::_rand, "_rand" },  // -----  /* auto */
  { 0x00635A20, (void *) &dk2::_strncmp, "_strncmp" },      /* auto */
  { 0x00635A60, (void *) &dk2::_memcpy, "_memcpy" },  // -  /* auto */
  { 0x00635DA0, (void *) &dk2::___for_each_destruct, "___for_each_destruct" },  /* auto */
  { 0x00635EC0, (void *) &dk2::___for_each_construct, "___for_each_construct" },  /* auto */
  { 0x00635F60, (void *) &dk2::_qsort, "_qsort" },  // ---  /* auto */
  { 0x006361A0, (void *) &dk2::_strncpy, "_strncpy" },      /* auto */
  { 0x006362A0, (void *) &dk2::_fflush, "_fflush" },  // -  /* auto */
  { 0x006362E0, (void *) &dk2::__fflush_lk, "__fflush_lk" },  /* auto */
  { 0x00636320, (void *) &dk2::__flush, "__flush" },  // -  /* auto */
  { 0x00636390, (void *) &dk2::__flushall, "__flushall" },  /* auto */
  { 0x006363A0, (void *) &dk2::_flsall, "_flsall" },  // -  /* auto */
  { 0x00636460, (void *) &dk2::_fputs, "_fputs" },  // ---  /* auto */
  { 0x006364C0, (void *) &dk2::__fsopen, "__fsopen" },      /* auto */
  { 0x00636500, (void *) &dk2::_fopen, "_fopen" },  // ---  /* auto */
  { 0x00636539, (void *) &dk2::_pow, "_pow" },  // -------  /* auto */
  { 0x00636715, (void *) &dk2::sub_636715, "sub_636715" },  /* auto */
  { 0x00636740, (void *) &dk2::_strstr, "_strstr" },  // -  /* auto */
  { 0x006367C0, (void *) &dk2::_strrchr, "_strrchr" },      /* auto */
  { 0x006367F0, (void *) &dk2::ThreadCtx_create, "ThreadCtx_create" },  /* auto */
  { 0x00636920, (void *) &dk2::__endthreadex, "__endthreadex" },  /* auto */
  { 0x00636960, (void *) &dk2::deleteFile, "deleteFile" },  /* auto */
  { 0x00636990, (void *) &dk2::__wtoi, "__wtoi" },  // ---  /* auto */
  { 0x006369C0, (void *) &dk2::_iswdigit, "_iswdigit" },    /* auto */
  { 0x006369D0, (void *) &dk2::_iswspace, "_iswspace" },    /* auto */
  { 0x006369E0, (void *) &dk2::_iswprint, "_iswprint" },    /* auto */
  { 0x00636A00, (void *) &dk2::_strcpy, "_strcpy" },  // -  /* auto */
  { 0x00636AF0, (void *) &dk2::_wcsstr, "_wcsstr" },  // -  /* auto */
  { 0x00636B50, (void *) &dk2::__strcmpi, "__strcmpi" },    /* auto */
  { 0x00636C20, (void *) &dk2::__itow, "__itow" },  // ---  /* auto */
  { 0x00636C60, (void *) &dk2::_wcscmp, "_wcscmp" },  // -  /* auto */
  { 0x00636CC0, (void *) &dk2::_towupper, "_towupper" },    /* auto */
  { 0x00636D50, (void *) &dk2::_towupper_0, "_towupper_0" },  /* auto */
  { 0x00636DD0, (void *) &dk2::sub_636DD0, "sub_636DD0" },  /* auto */
  { 0x00636FD0, (void *) &dk2::_towlower, "_towlower" },    /* auto */
  { 0x00637070, (void *) &dk2::_towlower_0, "_towlower_0" },  /* auto */
  { 0x006370F0, (void *) &dk2::_wcsncat, "_wcsncat" },      /* auto */
  { 0x00637140, (void *) &dk2::_vsprintf, "_vsprintf" },    /* auto */
  { 0x006371B0, (void *) &dk2::_vswprintf, "_vswprintf" },  /* auto */
  { 0x00637250, (void *) &dk2::__cinit, "__cinit" },  // -  /* auto */
  { 0x00637280, (void *) &dk2::_exit, "_exit" },  // -----  /* auto */
  { 0x006372A0, (void *) &dk2::__exit, "__exit" },  // ---  /* auto */
  { 0x006372C0, (void *) &dk2::_doexit, "_doexit" },  // -  /* auto */
  { 0x00637380, (void *) &dk2::__lockexit, "__lockexit" },  /* auto */
  { 0x00637390, (void *) &dk2::__unlockexit, "__unlockexit" },  /* auto */
  { 0x006373A0, (void *) &dk2::__initterm, "__initterm" },  /* auto */
  { 0x006373C0, (void *) &dk2::_atol, "_atol" },  // -----  /* auto */
  { 0x00637460, (void *) &dk2::_atoi, "_atoi" },  // -----  /* auto */
  { 0x00637470, (void *) &dk2::_isdigit, "_isdigit" },      /* auto */
  { 0x006374A0, (void *) &dk2::_isspace, "_isspace" },      /* auto */
  { 0x006374D0, (void *) &dk2::_isalnum, "_isalnum" },      /* auto */
  { 0x00637500, (void *) &dk2::_ceil, "_ceil" },  // -----  /* auto */
  { 0x00637600, (void *) &dk2::_floor, "_floor" },  // ---  /* auto */
  { 0x00637700, (void *) &dk2::_printf, "_printf" },  // -  /* auto */
  { 0x00637760, (void *) &dk2::_gmtime, "_gmtime" },  // -  /* auto */
  { 0x006378D0, (void *) &dk2::_time, "_time" },  // -----  /* auto */
  { 0x00637A00, (void *) &dk2::_realloc, "_realloc" },      /* auto */
  { 0x00637BB0, (void *) &dk2::_malloc_1, "_malloc_1" },    /* auto */
  { 0x00637BD0, (void *) &dk2::__nh_malloc, "__nh_malloc" },  /* auto */
  { 0x00637C20, (void *) &dk2::__heap_alloc, "__heap_alloc" },  /* auto */
  { 0x00637C90, (void *) &dk2::_strchr, "_strchr" },  // -  /* auto */
  { 0x00637D50, (void *) &dk2::__strnicmp, "__strnicmp" },  /* auto */
  { 0x00637E60, (void *) &dk2::_sscanf, "_sscanf" },  // -  /* auto */
  { 0x00637EB0, (void *) &dk2::_fseek, "_fseek" },  // ---  /* auto */
  { 0x00637EF0, (void *) &dk2::__fseek_lk, "__fseek_lk" },  /* auto */
  { 0x00637F90, (void *) &dk2::_fclose, "_fclose" },  // -  /* auto */
  { 0x00637FD0, (void *) &dk2::__fclose_lk, "__fclose_lk" },  /* auto */
  { 0x00638040, (void *) &dk2::readFromFile, "readFromFile" },  /* auto */
  { 0x00638080, (void *) &dk2::_fread, "_fread" },  // ---  /* auto */
  { 0x006381C0, (void *) &dk2::writeFile, "writeFile" },    /* auto */
  { 0x00638200, (void *) &dk2::_fwrite, "_fwrite" },  // -  /* auto */
  { 0x00638350, (void *) &dk2::_free, "_free" },  // -----  /* auto */
  { 0x006383F0, (void *) &dk2::__strdup, "__strdup" },      /* auto */
  { 0x00638440, (void *) &dk2::dk2_start, "dk2_start" },    /* auto */
  { 0x006385F0, (void *) &dk2::__amsg_exit, "__amsg_exit" },  /* auto */
  { 0x00638650, (void *) &dk2::_calloc, "_calloc" },  // -  /* auto */
  { 0x00638700, (void *) &dk2::__beginthread, "__beginthread" },  /* auto */
  { 0x00638830, (void *) &dk2::__endthread, "__endthread" },  /* auto */
  { 0x00638880, (void *) &dk2::interlocked_or_toupper, "interlocked_or_toupper" },  /* auto */
  { 0x00638910, (void *) &dk2::sub_638910, "sub_638910" },  /* auto */
  { 0x00638A10, (void *) &dk2::__setjmp3, "__setjmp3" },    /* auto */
  { 0x00638A8C, (void *) &dk2::_longjmp, "_longjmp" },      /* auto */
  { 0x00638B10, (void *) &dk2::__splitpath, "__splitpath" },  /* auto */
  { 0x00638C90, (void *) &dk2::_memchr, "_memchr" },  // -  /* auto */
  { 0x00638D40, (void *) &dk2::_vfprintf, "_vfprintf" },    /* auto */
  { 0x00638D90, (void *) &dk2::_fprintf, "_fprintf" },      /* auto */
  { 0x00638DE0, (void *) &dk2::_strncat, "_strncat" },      /* auto */
  { 0x00638F10, (void *) &dk2::sub_638F10, "sub_638F10" },  /* auto */
  { 0x00638F80, (void *) &dk2::__vsnprintf, "__vsnprintf" },  /* auto */
  { 0x00639240, (void *) &dk2::__isnan, "__isnan" },  // -  /* auto */
  { 0x00639270, (void *) &dk2::__fpclass, "__fpclass" },    /* auto */
  { 0x00639318, (void *) &dk2::__except_handler3, "__except_handler3" },  /* auto */
  { 0x006393F0, (void *) &dk2::__msize, "__msize" },  // -  /* auto */
  { 0x00639460, (void *) &dk2::__mtinitlocks, "__mtinitlocks" },  /* auto */
  { 0x00639490, (void *) &dk2::__lock, "__lock" },  // ---  /* auto */
  { 0x00639510, (void *) &dk2::__unlock, "__unlock" },      /* auto */
  { 0x00639530, (void *) &dk2::__lock_file, "__lock_file" },  /* auto */
  { 0x00639570, (void *) &dk2::__lock_file2, "__lock_file2" },  /* auto */
  { 0x006395A0, (void *) &dk2::__unlock_file, "__unlock_file" },  /* auto */
  { 0x006395E0, (void *) &dk2::__unlock_file2, "__unlock_file2" },  /* auto */
  { 0x00639610, (void *) &dk2::sub_639610, "sub_639610" },  /* auto */
  { 0x00639B40, (void *) &dk2::sub_639B40, "sub_639B40" },  /* auto */
  { 0x0063A090, (void *) &dk2::__mtinit, "__mtinit" },      /* auto */
  { 0x0063A0F0, (void *) &dk2::__initptd, "__initptd" },    /* auto */
  { 0x0063A110, (void *) &dk2::__getptd, "__getptd" },      /* auto */
  { 0x0063A190, (void *) &dk2::sub_63A190, "sub_63A190" },  /* auto */
  { 0x0063A2D0, (void *) &dk2::sub_63A2D0, "sub_63A2D0" },  /* auto */
  { 0x0063A360, (void *) &dk2::__flsbuf, "__flsbuf" },      /* auto */
  { 0x0063A490, (void *) &dk2::__output, "__output" },      /* auto */
  { 0x0063AE20, (void *) &dk2::_write_char, "_write_char" },  /* auto */
  { 0x0063AE70, (void *) &dk2::_write_multi_char, "_write_multi_char" },  /* auto */
  { 0x0063AEB0, (void *) &dk2::_write_string, "_write_string" },  /* auto */
  { 0x0063AEF0, (void *) &dk2::_get_short_arg, "_get_short_arg" },  /* auto */
  { 0x0063AF10, (void *) &dk2::__setdefaultprecision, "__setdefaultprecision" },  /* auto */
  { 0x0063AF30, (void *) &dk2::__ms_p5_test_fdiv, "__ms_p5_test_fdiv" },  /* auto */
  { 0x0063AF80, (void *) &dk2::__ms_p5_mp_test_fdiv, "__ms_p5_mp_test_fdiv" },  /* auto */
  { 0x0063B280, (void *) &dk2::__cftof, "__cftof" },  // -  /* auto */
  { 0x0063B2F0, (void *) &dk2::__cftof2, "__cftof2" },      /* auto */
  { 0x0063B3B0, (void *) &dk2::__cftog, "__cftog" },  // -  /* auto */
  { 0x0063B470, (void *) &dk2::__cfltcvt, "__cfltcvt" },    /* auto */
  { 0x0063B4E0, (void *) &dk2::__shift, "__shift" },  // -  /* auto */
  { 0x0063B510, (void *) &dk2::__woutput, "__woutput" },    /* auto */
  { 0x0063BE70, (void *) &dk2::_write_char_0, "_write_char_0" },  /* auto */
  { 0x0063BEA0, (void *) &dk2::_write_multi_char_0, "_write_multi_char_0" },  /* auto */
  { 0x0063BEE0, (void *) &dk2::_write_string_0, "_write_string_0" },  /* auto */
  { 0x0063BF20, (void *) &dk2::_get_int_arg, "_get_int_arg" },  /* auto */
  { 0x0063BF40, (void *) &dk2::_get_int64_arg, "_get_int64_arg" },  /* auto */
  { 0x0063BF60, (void *) &dk2::___crtLCMapStringW, "___crtLCMapStringW" },  /* auto */
  { 0x0063C170, (void *) &dk2::_wcsncnt, "_wcsncnt" },      /* auto */
  { 0x0063C1B0, (void *) &dk2::sub_63C1B0, "sub_63C1B0" },  /* auto */
  { 0x0063C3E0, (void *) &dk2::_strncnt, "_strncnt" },      /* auto */
  { 0x0063C410, (void *) &dk2::__isctype, "__isctype" },    /* auto */
  { 0x0063C4B0, (void *) &dk2::__commit, "__commit" },      /* auto */
  { 0x0063C550, (void *) &dk2::__write, "__write" },  // -  /* auto */
  { 0x0063C5D0, (void *) &dk2::__write_lk, "__write_lk" },  /* auto */
  { 0x0063C7E0, (void *) &dk2::sub_63C7E0, "sub_63C7E0" },  /* auto */
  { 0x0063C8A0, (void *) &dk2::__ftbuf, "__ftbuf" },  // -  /* auto */
  { 0x0063C8E0, (void *) &dk2::__openfile, "__openfile" },  /* auto */
  { 0x0063CAB0, (void *) &dk2::__getstream, "__getstream" },  /* auto */
  { 0x0063CB90, (void *) &dk2::fFYTOX, "fFYTOX" },  // ---  /* auto */
  { 0x0063CF59, (void *) &dk2::__rttosnpopde, "__rttosnpopde" },  /* auto */
  { 0x0063D015, (void *) &dk2::__fload_withFB, "__fload_withFB" },  /* auto */
  { 0x0063D160, (void *) &dk2::__powhlp, "__powhlp" },      /* auto */
  { 0x0063D390, (void *) &dk2::__d_inttype, "__d_inttype" },  /* auto */
  { 0x0063D420, (void *) &dk2::__dosmaperr, "__dosmaperr" },  /* auto */
  { 0x0063D4A0, (void *) &dk2::__errno, "__errno" },  // -  /* auto */
  { 0x0063D4B0, (void *) &dk2::___doserrno, "___doserrno" },  /* auto */
  { 0x0063D4C0, (void *) &dk2::__XcptFilter, "__XcptFilter" },  /* auto */
  { 0x0063D710, (void *) &dk2::__itoa, "__itoa" },  // ---  /* auto */
  { 0x0063D750, (void *) &dk2::_xtoa, "_xtoa" },  // -----  /* auto */
  { 0x0063D800, (void *) &dk2::__frnd, "__frnd" },  // ---  /* auto */
  { 0x0063D820, (void *) &dk2::__handle_qnan1, "__handle_qnan1" },  /* auto */
  { 0x0063D870, (void *) &dk2::__except1, "__except1" },    /* auto */
  { 0x0063D930, (void *) &dk2::__raise_exc, "__raise_exc" },  /* auto */
  { 0x0063DC70, (void *) &dk2::__handle_exc, "__handle_exc" },  /* auto */
  { 0x0063DFA0, (void *) &dk2::__umatherr, "__umatherr" },  /* auto */
  { 0x0063E050, (void *) &dk2::__set_errno, "__set_errno" },  /* auto */
  { 0x0063E080, (void *) &dk2::__get_fname, "__get_fname" },  /* auto */
  { 0x0063E0B0, (void *) &dk2::__errcode, "__errcode" },    /* auto */
  { 0x0063E0F0, (void *) &dk2::__set_exp, "__set_exp" },    /* auto */
  { 0x0063E130, (void *) &dk2::__sptype, "__sptype" },      /* auto */
  { 0x0063E190, (void *) &dk2::__decomp, "__decomp" },      /* auto */
  { 0x0063E2A0, (void *) &dk2::__statfp, "__statfp" },      /* auto */
  { 0x0063E2B0, (void *) &dk2::__clrfp, "__clrfp" },  // -  /* auto */
  { 0x0063E2D0, (void *) &dk2::__ctrlfp, "__ctrlfp" },      /* auto */
  { 0x0063E300, (void *) &dk2::__set_statfp, "__set_statfp" },  /* auto */
  { 0x0063E360, (void *) &dk2::___loctotime_t, "___loctotime_t" },  /* auto */
  { 0x0063E450, (void *) &dk2::__callnewh, "__callnewh" },  /* auto */
  { 0x0063E470, (void *) &dk2::__heap_init, "__heap_init" },  /* auto */
  { 0x0063E4B0, (void *) &dk2::___sbh_new_region, "___sbh_new_region" },  /* auto */
  { 0x0063E620, (void *) &dk2::___sbh_release_region, "___sbh_release_region" },  /* auto */
  { 0x0063E680, (void *) &dk2::___sbh_decommit_pages, "___sbh_decommit_pages" },  /* auto */
  { 0x0063E750, (void *) &dk2::___sbh_find_block, "___sbh_find_block" },  /* auto */
  { 0x0063E7B0, (void *) &dk2::___sbh_free_block, "___sbh_free_block" },  /* auto */
  { 0x0063E810, (void *) &dk2::___sbh_alloc_block, "___sbh_alloc_block" },  /* auto */
  { 0x0063EA50, (void *) &dk2::___sbh_alloc_block_from_page, "___sbh_alloc_block_from_page" },  /* auto */
  { 0x0063EBD0, (void *) &dk2::___sbh_resize_block, "___sbh_resize_block" },  /* auto */
  { 0x0063ECA0, (void *) &dk2::__input, "__input" },  // -  /* auto */
  { 0x0063F9E0, (void *) &dk2::__hextodec, "__hextodec" },  /* auto */
  { 0x0063FA20, (void *) &dk2::_fgetc, "_fgetc" },  // ---  /* auto */
  { 0x0063FA50, (void *) &dk2::__un_inc, "__un_inc" },      /* auto */
  { 0x0063FA70, (void *) &dk2::__whiteout, "__whiteout" },  /* auto */
  { 0x0063FAC0, (void *) &dk2::__lseek, "__lseek" },  // -  /* auto */
  { 0x0063FB40, (void *) &dk2::__lseek_lk, "__lseek_lk" },  /* auto */
  { 0x0063FBC0, (void *) &dk2::__ftell_lk, "__ftell_lk" },  /* auto */
  { 0x0063FD70, (void *) &dk2::__close, "__close" },  // -  /* auto */
  { 0x0063FDE0, (void *) &dk2::__close_lk, "__close_lk" },  /* auto */
  { 0x0063FE70, (void *) &dk2::__freebuf, "__freebuf" },    /* auto */
  { 0x0063FEB0, (void *) &dk2::__filbuf, "__filbuf" },      /* auto */
  { 0x0063FFA0, (void *) &dk2::__read, "__read" },  // ---  /* auto */
  { 0x00640020, (void *) &dk2::__read_lk, "__read_lk" },    /* auto */
  { 0x00640250, (void *) &dk2::__ismbblead, "__ismbblead" },  /* auto */
  { 0x00640270, (void *) &dk2::_x_ismbbtype, "_x_ismbbtype" },  /* auto */
  { 0x006402B0, (void *) &dk2::__setenvp, "__setenvp" },    /* auto */
  { 0x006403A0, (void *) &dk2::__setargv, "__setargv" },    /* auto */
  { 0x00640650, (void *) &dk2::___crtGetEnvironmentStringsA, "___crtGetEnvironmentStringsA" },  /* auto */
  { 0x006407B0, (void *) &dk2::sub_6407B0, "sub_6407B0" },  /* auto */
  { 0x00640A90, (void *) &dk2::_setSBCS, "_setSBCS" },      /* auto */
  { 0x00640AD0, (void *) &dk2::sub_640AD0, "sub_640AD0" },  /* auto */
  { 0x00640CB0, (void *) &dk2::___initmbctable, "___initmbctable" },  /* auto */
  { 0x00640CC0, (void *) &dk2::__ioinit, "__ioinit" },      /* auto */
  { 0x00640ED0, (void *) &dk2::__FF_MSGBANNER, "__FF_MSGBANNER" },  /* auto */
  { 0x00640F10, (void *) &dk2::__NMSG_WRITE, "__NMSG_WRITE" },  /* auto */
  { 0x00641160, (void *) &dk2::__mbsnbcpy, "__mbsnbcpy" },  /* auto */
  { 0x00641210, (void *) &dk2::___crtGetStringTypeW, "___crtGetStringTypeW" },  /* auto */
  { 0x006413A0, (void *) &dk2::sub_6413A0, "sub_6413A0" },  /* auto */
  { 0x00641570, (void *) &dk2::__fcloseall, "__fcloseall" },  /* auto */
  { 0x00641630, (void *) &dk2::_ValidateWrite, "_ValidateWrite" },  /* auto */
  { 0x00641670, (void *) &dk2::_abort, "_abort" },  // ---  /* auto */
  { 0x00641690, (void *) &dk2::__getbuf, "__getbuf" },      /* auto */
  { 0x006416F0, (void *) &dk2::__isatty, "__isatty" },      /* auto */
  { 0x00641720, (void *) &dk2::_wctomb, "_wctomb" },  // -  /* auto */
  { 0x00641790, (void *) &dk2::__wctomb_lk, "__wctomb_lk" },  /* auto */
  { 0x00641900, (void *) &dk2::__control87, "__control87" },  /* auto */
  { 0x00641940, (void *) &dk2::__controlfp, "__controlfp" },  /* auto */
  { 0x00641A90, (void *) &dk2::__ZeroTail, "__ZeroTail" },  /* auto */
  { 0x00641B00, (void *) &dk2::__IncMan, "__IncMan" },      /* auto */
  { 0x00641B70, (void *) &dk2::__RoundMan, "__RoundMan" },  /* auto */
  { 0x00641C10, (void *) &dk2::__CopyMan, "__CopyMan" },    /* auto */
  { 0x00641C30, (void *) &dk2::__FillZeroMan, "__FillZeroMan" },  /* auto */
  { 0x00641C40, (void *) &dk2::__IsZeroMan, "__IsZeroMan" },  /* auto */
  { 0x00641C60, (void *) &dk2::__ShrMan, "__ShrMan" },      /* auto */
  { 0x00641D20, (void *) &dk2::__ld12cvt, "__ld12cvt" },    /* auto */
  { 0x00641EF0, (void *) &dk2::sub_641EF0, "sub_641EF0" },  /* auto */
  { 0x00641F10, (void *) &dk2::sub_641F10, "sub_641F10" },  /* auto */
  { 0x00641F30, (void *) &dk2::sub_641F30, "sub_641F30" },  /* auto */
  { 0x00641F70, (void *) &dk2::sub_641F70, "sub_641F70" },  /* auto */
  { 0x006421B0, (void *) &dk2::_mbtowc, "_mbtowc" },  // -  /* auto */
  { 0x00642230, (void *) &dk2::__mbtowc_lk, "__mbtowc_lk" },  /* auto */
  { 0x00642330, (void *) &dk2::__putwc_lk, "__putwc_lk" },  /* auto */
  { 0x00642B10, (void *) &dk2::_storeTimeFmt, "_storeTimeFmt" },  /* auto */
  { 0x00643100, (void *) &dk2::sub_643100, "sub_643100" },  /* auto */
  { 0x006433C0, (void *) &dk2::_strcspn, "_strcspn" },      /* auto */
  { 0x00643400, (void *) &dk2::_strpbrk, "_strpbrk" },      /* auto */
  { 0x00643440, (void *) &dk2::__alloc_osfhnd, "__alloc_osfhnd" },  /* auto */
  { 0x006435B0, (void *) &dk2::__set_osfhnd, "__set_osfhnd" },  /* auto */
  { 0x00643660, (void *) &dk2::__free_osfhnd, "__free_osfhnd" },  /* auto */
  { 0x00643700, (void *) &dk2::__get_osfhandle, "__get_osfhandle" },  /* auto */
  { 0x00643750, (void *) &dk2::__lock_fhandle, "__lock_fhandle" },  /* auto */
  { 0x006437C0, (void *) &dk2::__unlock_fhandle, "__unlock_fhandle" },  /* auto */
  { 0x006437F0, (void *) &dk2::__sopen, "__sopen" },  // -  /* auto */
  { 0x00643B90, (void *) &dk2::unknown_libname_74, "unknown_libname_74" },  /* auto */
  { 0x00644381, (void *) &dk2::unknown_libname_87, "unknown_libname_87" },  /* auto */
  { 0x00644A40, (void *) &dk2::___tzset, "___tzset" },      /* auto */
  { 0x00644A80, (void *) &dk2::__tzset_lk, "__tzset_lk" },  /* auto */
  { 0x00644D60, (void *) &dk2::__isindst, "__isindst" },    /* auto */
  { 0x00644D90, (void *) &dk2::sub_644D90, "sub_644D90" },  /* auto */
  { 0x00645000, (void *) &dk2::_cvtdate, "_cvtdate" },      /* auto */
  { 0x006451C0, (void *) &dk2::_ungetc, "_ungetc" },  // -  /* auto */
  { 0x00645250, (void *) &dk2::___crtMessageBoxA, "___crtMessageBoxA" },  /* auto */
  { 0x006452E0, (void *) &dk2::_raise, "_raise" },  // ---  /* auto */
  { 0x00645530, (void *) &dk2::___addl, "___addl" },  // -  /* auto */
  { 0x00646250, (void *) &dk2::__flswbuf, "__flswbuf" },    /* auto */
  { 0x006463A0, (void *) &dk2::___getlocaleinfo, "___getlocaleinfo" },  /* auto */
  { 0x00646550, (void *) &dk2::__chsize_lk, "__chsize_lk" },  /* auto */
  { 0x006466A0, (void *) &dk2::_wcstombs, "_wcstombs" },    /* auto */
  { 0x00646720, (void *) &dk2::__wcstombs_lk, "__wcstombs_lk" },  /* auto */
  { 0x00646910, (void *) &dk2::_wcsncnt_0, "_wcsncnt_0" },  /* auto */
  { 0x00646950, (void *) &dk2::__getenv_lk, "__getenv_lk" },  /* auto */
  { 0x00646D30, (void *) &dk2::___crtGetLocaleInfoW, "___crtGetLocaleInfoW" },  /* auto */
  { 0x00646E60, (void *) &dk2::sub_646E60, "sub_646E60" },  /* auto */
  { 0x00646FA0, (void *) &dk2::__setmode_lk, "__setmode_lk" },  /* auto */
  { 0x00647010, (void *) &dk2::__mbsnbicoll, "__mbsnbicoll" },  /* auto */
  { 0x00647050, (void *) &dk2::___wtomb_environ, "___wtomb_environ" },  /* auto */
  { 0x006470D0, (void *) &dk2::___crtCompareStringA, "___crtCompareStringA" },  /* auto */
  { 0x006473A0, (void *) &dk2::___crtsetenv, "___crtsetenv" },  /* auto */
  { 0x006475B0, (void *) &dk2::_findenv, "_findenv" },      /* auto */
  { 0x00647630, (void *) &dk2::_copy_environ, "_copy_environ" },  /* auto */
  { 0x006476A0, (void *) &dk2::__mbschr, "__mbschr" },      /* auto */
  { 0x00647770, (void *) &dk2::ImmGetCompositionStringA, "ImmGetCompositionStringA" },  /* auto */
  { 0x00647776, (void *) &dk2::ImmSetCompositionStringA, "ImmSetCompositionStringA" },  /* auto */
  { 0x0064777C, (void *) &dk2::ImmNotifyIME, "ImmNotifyIME" },  /* auto */
  { 0x00647782, (void *) &dk2::ImmGetOpenStatus, "ImmGetOpenStatus" },  /* auto */
  { 0x00647788, (void *) &dk2::ImmSetOpenStatus, "ImmSetOpenStatus" },  /* auto */
  { 0x0064778E, (void *) &dk2::ImmSetCompositionWindow, "ImmSetCompositionWindow" },  /* auto */
  { 0x00647794, (void *) &dk2::ImmGetCandidateListA, "ImmGetCandidateListA" },  /* auto */
  { 0x0064779A, (void *) &dk2::ImmDestroyContext, "ImmDestroyContext" },  /* auto */
  { 0x006477A0, (void *) &dk2::ImmReleaseContext, "ImmReleaseContext" },  /* auto */
  { 0x006477A6, (void *) &dk2::ImmGetContext, "ImmGetContext" },  /* auto */
  { 0x006477AC, (void *) &dk2::ImmGetDescriptionA, "ImmGetDescriptionA" },  /* auto */
  { 0x006477B2, (void *) &dk2::ImmAssociateContext, "ImmAssociateContext" },  /* auto */
  { 0x006477B8, (void *) &dk2::ImmCreateContext, "ImmCreateContext" },  /* auto */
  { 0x006477BE, (void *) &dk2::WSACleanup, "WSACleanup" },  /* auto */
  { 0x006477C4, (void *) &dk2::inet_ntoa, "inet_ntoa" },    /* auto */
  { 0x006477CA, (void *) &dk2::gethostbyname, "gethostbyname" },  /* auto */
  { 0x006477D0, (void *) &dk2::gethostname, "gethostname" },  /* auto */
  { 0x006477D6, (void *) &dk2::WSAStartup, "WSAStartup" },  /* auto */
  { 0x006477DC, (void *) &dk2::DirectSoundCreate, "DirectSoundCreate" },  /* auto */
  { 0x006477E2, (void *) &dk2::RtlUnwind, "RtlUnwind" },    /* auto */
  { 0x006477F0, (void *) &dk2::WinMain, "WinMain" },  // -  /* auto */
  { 0x00647820, (void *) &dk2::DirectInputCreateA, "DirectInputCreateA" },  /* auto */
  { 0x006488A0, (void *) &dk2::__wcsicmp, "__wcsicmp" },    /* auto */
  { 0x00650053, (void *) &dk2::j_nullsub_2, "j_nullsub_2" },  /* auto */
  { 0x00650076, (void *) &dk2::j_nullsub_2_0, "j_nullsub_2_0" },  /* auto */
  { 0x006503C0, (void *) &dk2::sub_6503C0, "sub_6503C0" },  /* auto */
  { 0x006503CB, (void *) &dk2::sub_6503CB, "sub_6503CB" },  /* auto */
  { 0x00653080, (void *) &dk2::mgsr_drawTriangle24_impl5, "mgsr_drawTriangle24_impl5" },  /* auto */
  { 0x00653B6E, (void *) &dk2::mgsr_draw_1024tex_to_buf_impl6, "mgsr_draw_1024tex_to_buf_impl6" },  /* auto */
  { 0x006542E0, (void *) &dk2::mgsr_drawTriangle24_impl7, "mgsr_drawTriangle24_impl7" },  /* auto */
  { 0x00654C10, (void *) &dk2::mgsr_draw_1024tex_to_buf_impl8, "mgsr_draw_1024tex_to_buf_impl8" },  /* auto */
  { 0x006552B0, (void *) &dk2::mgsr_6552B0, "mgsr_6552B0" },  /* auto */
  { 0x00655320, (void *) &dk2::mgsr_655320, "mgsr_655320" },  /* auto */
  { 0x006554B0, (void *) &dk2::mgsr_6554B0, "mgsr_6554B0" },  /* auto */
  { 0x006555F0, (void *) &dk2::mgsr_draw48_copy_withMode, "mgsr_draw48_copy_withMode" },  /* auto */
  { 0x00655660, (void *) &dk2::mgsr_draw48_copy_drawMode0, "mgsr_draw48_copy_drawMode0" },  /* auto */
  { 0x00655840, (void *) &dk2::mgsr_draw48_copy_drawMode1, "mgsr_draw48_copy_drawMode1" },  /* auto */
  { 0x006559C0, (void *) &dk2::mgsr_draw49, "mgsr_draw49" },  /* auto */
  { 0x00655A30, (void *) &dk2::mgsr_draw49_655A30, "mgsr_draw49_655A30" },  /* auto */
  { 0x00655C40, (void *) &dk2::mgsr_draw49_655C40, "mgsr_draw49_655C40" },  /* auto */
  { 0x00655DF0, (void *) &dk2::mgsr_draw51, "mgsr_draw51" },  /* auto */
  { 0x00655E60, (void *) &dk2::mgsr_draw51_655E60, "mgsr_draw51_655E60" },  /* auto */
  { 0x00656060, (void *) &dk2::mgsr_draw51_656060, "mgsr_draw51_656060" },  /* auto */
  { 0x00656200, (void *) &dk2::mgsr_draw50, "mgsr_draw50" },  /* auto */
  { 0x00656270, (void *) &dk2::mgsr_draw50_656270, "mgsr_draw50_656270" },  /* auto */
  { 0x00656450, (void *) &dk2::mgsr_draw50_656450, "mgsr_draw50_656450" },  /* auto */
  { 0x006565E0, (void *) &dk2::mgsr_draw53, "mgsr_draw53" },  /* auto */
  { 0x00656650, (void *) &dk2::mgsr_draw53_656650, "mgsr_draw53_656650" },  /* auto */
  { 0x006568D0, (void *) &dk2::mgsr_draw53_6568D0, "mgsr_draw53_6568D0" },  /* auto */
  { 0x00656AF0, (void *) &dk2::mgsr_draw52, "mgsr_draw52" },  /* auto */
  { 0x00656B60, (void *) &dk2::mgsr_draw52_656B60, "mgsr_draw52_656B60" },  /* auto */
  { 0x00656DE0, (void *) &dk2::mgsr_draw52_656DE0, "mgsr_draw52_656DE0" },  /* auto */
  { 0x00657000, (void *) &dk2::mgsr_draw54, "mgsr_draw54" },  /* auto */
  { 0x00657070, (void *) &dk2::mgsr_draw54_657070, "mgsr_draw54_657070" },  /* auto */
  { 0x00657310, (void *) &dk2::mgsr_draw54_657310, "mgsr_draw54_657310" },  /* auto */
  { 0x00657560, (void *) &dk2::mgsr_draw55, "mgsr_draw55" },  /* auto */
  { 0x006575D0, (void *) &dk2::mgsr_draw55_6575D0, "mgsr_draw55_6575D0" },  /* auto */
  { 0x00657870, (void *) &dk2::mgsr_draw55_657870, "mgsr_draw55_657870" },  /* auto */
  { 0x00657AB0, (void *) &dk2::mgsr_draw56, "mgsr_draw56" },  /* auto */
  { 0x00657B20, (void *) &dk2::mgsr_draw56_657B20, "mgsr_draw56_657B20" },  /* auto */
  { 0x00657CB0, (void *) &dk2::mgsr_draw56_657CB0, "mgsr_draw56_657CB0" },  /* auto */
  { 0x00657DE0, (void *) &dk2::mgsr_draw57, "mgsr_draw57" },  /* auto */
  { 0x00657E50, (void *) &dk2::mgsr_draw57_657E50, "mgsr_draw57_657E50" },  /* auto */
  { 0x00658000, (void *) &dk2::mgsr_draw57_658000, "mgsr_draw57_658000" },  /* auto */
  { 0x00658160, (void *) &dk2::mgsr_draw58, "mgsr_draw58" },  /* auto */
  { 0x006581D0, (void *) &dk2::mgsr_draw58_6581D0, "mgsr_draw58_6581D0" },  /* auto */
  { 0x00658390, (void *) &dk2::mgsr_draw58_658390, "mgsr_draw58_658390" },  /* auto */
  { 0x006584F0, (void *) &dk2::mgsr_draw59, "mgsr_draw59" },  /* auto */
  { 0x00658560, (void *) &dk2::mgsr_draw59_658560, "mgsr_draw59_658560" },  /* auto */
  { 0x00658710, (void *) &dk2::mgsr_draw59_658710, "mgsr_draw59_658710" },  /* auto */
  { 0x00658870, (void *) &dk2::mgsr_draw40, "mgsr_draw40" },  /* auto */
  { 0x006588D0, (void *) &dk2::mgsr_draw40_6588D0, "mgsr_draw40_6588D0" },  /* auto */
  { 0x006589B0, (void *) &dk2::mgsr_draw32, "mgsr_draw32" },  /* auto */
  { 0x00658A10, (void *) &dk2::mgsr_draw32_658A10, "mgsr_draw32_658A10" },  /* auto */
  { 0x00658AF0, (void *) &dk2::mgsr_draw33, "mgsr_draw33" },  /* auto */
  { 0x00658B50, (void *) &dk2::mgsr_draw33_658B50, "mgsr_draw33_658B50" },  /* auto */
  { 0x00658C60, (void *) &dk2::mgsr_draw34, "mgsr_draw34" },  /* auto */
  { 0x00658CC0, (void *) &dk2::mgsr_draw34_658CC0, "mgsr_draw34_658CC0" },  /* auto */
  { 0x00658DA0, (void *) &dk2::mgsr_draw35, "mgsr_draw35" },  /* auto */
  { 0x00658E00, (void *) &dk2::mgsr_draw35_658E00, "mgsr_draw35_658E00" },  /* auto */
  { 0x00658F10, (void *) &dk2::mgsr_draw36, "mgsr_draw36" },  /* auto */
  { 0x00658F70, (void *) &dk2::mgsr_draw36_658F70, "mgsr_draw36_658F70" },  /* auto */
  { 0x006590E0, (void *) &dk2::mgsr_draw37, "mgsr_draw37" },  /* auto */
  { 0x00659140, (void *) &dk2::mgsr_draw37_659140, "mgsr_draw37_659140" },  /* auto */
  { 0x006592B0, (void *) &dk2::mgsr_draw38, "mgsr_draw38" },  /* auto */
  { 0x00659310, (void *) &dk2::mgsr_draw38_659310, "mgsr_draw38_659310" },  /* auto */
  { 0x006594B0, (void *) &dk2::mgsr_draw39, "mgsr_draw39" },  /* auto */
  { 0x00659510, (void *) &dk2::mgsr_draw39_659510, "mgsr_draw39_659510" },  /* auto */
  { 0x00659580, (void *) &dk2::tqia_dec_659580, "tqia_dec_659580" },  /* auto */
  { 0x006595C0, (void *) &dk2::tqia_dec_6595C0, "tqia_dec_6595C0" },  /* auto */
  { 0x00659608, (void *) &dk2::tqia_reset_659608, "tqia_reset_659608" },  /* auto */
  { 0x00659930, (void *) &dk2::tqia_659930, "tqia_659930" },  /* auto */
  { 0x00659A90, (void *) &dk2::tqia_659A90, "tqia_659A90" },  /* auto */
  { 0x00659B90, (void *) &dk2::tqia_dec_659B90, "tqia_dec_659B90" },  /* auto */
  { 0x0065AEB0, (void *) &dk2::tqia_dec_65AEB0, "tqia_dec_65AEB0" },  /* auto */
  { 0x0065C120, (void *) &dk2::tqia_fill_buf_special, "tqia_fill_buf_special" },  /* auto */
  { 0x0065C290, (void *) &dk2::tqia_65C290, "tqia_65C290" },  /* auto */
  { 0x0065CA50, (void *) &dk2::tqia_dec_65CA50, "tqia_dec_65CA50" },  /* auto */
  { 0x0065E280, (void *) &dk2::tqia_dec_65E280, "tqia_dec_65E280" },  /* auto */
  { 0x0065FAE0, (void *) &dk2::asm_update_65FAE0, "asm_update_65FAE0" },  /* auto */
  { 0x0065FB54, (void *) &dk2::asm_update2_65FB54, "asm_update2_65FB54" },  /* auto */
  { 0x0065FEA0, (void *) &dk2::m8bit_asm_65FEA0, "m8bit_asm_65FEA0" },  /* auto */
  { 0x00665EB0, (void *) &dk2::tqi_asm_665EB0, "tqi_asm_665EB0" },  /* auto */
  { 0x00665EF0, (void *) &dk2::tqi_asm_reset_665EF0, "tqi_asm_reset_665EF0" },  /* auto */
  { 0x00666210, (void *) &dk2::tqi_asm_666210, "tqi_asm_666210" },  /* auto */
  { 0x00666370, (void *) &dk2::tqi_asm_666370, "tqi_asm_666370" },  /* auto */
  { 0x00666480, (void *) &dk2::tqi_asm_666480, "tqi_asm_666480" },  /* auto */
  { 0x00668810, (void *) &dk2::tqi_asm_668810, "tqi_asm_668810" },  /* auto */
  { 0x00669A80, (void *) &dk2::m8bit_asm_669A80, "m8bit_asm_669A80" },  /* auto */
  { 0x0066BAF8, (void *) &dk2::m8bit_asm_66BAF8, "m8bit_asm_66BAF8" },  /* auto */
};  // function_relink_refs[]  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
entry_t thiscall_function_relink_refs[] = {  // ----------  /* auto */
  { 0x00401060, (funptr_t) &dk2::CEntryComponent::constructor, "CEntryComponent::constructor" },  /* auto */
  { 0x00401410, (funptr_t) &dk2::CEntryComponent::fun_401410, "CEntryComponent::fun_401410" },  /* auto */
  { 0x00402670, (funptr_t) &dk2::CDefaultPlayerInterface::constructor, "CDefaultPlayerInterface::constructor" },  /* auto */
  { 0x00402C20, (funptr_t) &dk2::CDefaultPlayerInterface::destructor, "CDefaultPlayerInterface::destructor" },  /* auto */
  { 0x00402D00, (funptr_t) &dk2::CDefaultPlayerInterface::fun_402D00, "CDefaultPlayerInterface::fun_402D00" },  /* auto */
  { 0x004033F0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_4033F0, "CDefaultPlayerInterface::fun_4033F0" },  /* auto */
  { 0x004036E0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_4036E0, "CDefaultPlayerInterface::fun_4036E0" },  /* auto */
  { 0x004039A0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_4039A0, "CDefaultPlayerInterface::fun_4039A0" },  /* auto */
  { 0x00403FB0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_403FB0, "CDefaultPlayerInterface::fun_403FB0" },  /* auto */
  { 0x004066A0, (funptr_t) &dk2::CDefaultPlayerInterface::tickKeyboard, "CDefaultPlayerInterface::tickKeyboard" },  /* auto */
  { 0x00406DF0, (funptr_t) &dk2::CDefaultPlayerInterface::tickKeyboard2, "CDefaultPlayerInterface::tickKeyboard2" },  /* auto */
  { 0x00407070, (funptr_t) &dk2::CDefaultPlayerInterface::pushMoveKeyAction, "CDefaultPlayerInterface::pushMoveKeyAction" },  /* auto */
  { 0x00407380, (funptr_t) &dk2::CDefaultPlayerInterface::sub_407380, "CDefaultPlayerInterface::sub_407380" },  /* auto */
  { 0x004075E0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_4075E0, "CDefaultPlayerInterface::sub_4075E0" },  /* auto */
  { 0x00408EE0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_408EE0, "CDefaultPlayerInterface::sub_408EE0" },  /* auto */
  { 0x004094C0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_4094C0, "CDefaultPlayerInterface::sub_4094C0" },  /* auto */
  { 0x004098D0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_4098D0, "CDefaultPlayerInterface::fun_4098D0" },  /* auto */
  { 0x00409990, (funptr_t) &dk2::CDefaultPlayerInterface::sub_409990, "CDefaultPlayerInterface::sub_409990" },  /* auto */
  { 0x00409F30, (funptr_t) &dk2::CDefaultPlayerInterface::sub_409F30, "CDefaultPlayerInterface::sub_409F30" },  /* auto */
  { 0x0040A0F0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40A0F0, "CDefaultPlayerInterface::sub_40A0F0" },  /* auto */
  { 0x0040A280, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40A280, "CDefaultPlayerInterface::sub_40A280" },  /* auto */
  { 0x0040A3E0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40A3E0, "CDefaultPlayerInterface::sub_40A3E0" },  /* auto */
  { 0x0040A600, (funptr_t) &dk2::CDefaultPlayerInterface::fun_40A600, "CDefaultPlayerInterface::fun_40A600" },  /* auto */
  { 0x0040A680, (funptr_t) &dk2::CDefaultPlayerInterface::onWmChar, "CDefaultPlayerInterface::onWmChar" },  /* auto */
  { 0x0040A760, (funptr_t) &dk2::CDefaultPlayerInterface::applyCheatCode, "CDefaultPlayerInterface::applyCheatCode" },  /* auto */
  { 0x0040AE80, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40AE80, "CDefaultPlayerInterface::sub_40AE80" },  /* auto */
  { 0x0040B160, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B160, "CDefaultPlayerInterface::sub_40B160" },  /* auto */
  { 0x0040B210, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B210, "CDefaultPlayerInterface::sub_40B210" },  /* auto */
  { 0x0040B3C0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B3C0, "CDefaultPlayerInterface::sub_40B3C0" },  /* auto */
  { 0x0040B4F0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B4F0, "CDefaultPlayerInterface::sub_40B4F0" },  /* auto */
  { 0x0040B600, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B600, "CDefaultPlayerInterface::sub_40B600" },  /* auto */
  { 0x0040BB60, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40BB60, "CDefaultPlayerInterface::sub_40BB60" },  /* auto */
  { 0x0040BBE0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40BBE0, "CDefaultPlayerInterface::sub_40BBE0" },  /* auto */
  { 0x0040BFF0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40BFF0, "CDefaultPlayerInterface::sub_40BFF0" },  /* auto */
  { 0x0040CAE0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40CAE0, "CDefaultPlayerInterface::sub_40CAE0" },  /* auto */
  { 0x0040DAB0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40DAB0, "CDefaultPlayerInterface::sub_40DAB0" },  /* auto */
  { 0x0040DD20, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40DD20, "CDefaultPlayerInterface::sub_40DD20" },  /* auto */
  { 0x0040E0D0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40E0D0, "CDefaultPlayerInterface::sub_40E0D0" },  /* auto */
  { 0x0040E670, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40E670, "CDefaultPlayerInterface::sub_40E670" },  /* auto */
  { 0x0040F820, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40F820, "CDefaultPlayerInterface::sub_40F820" },  /* auto */
  { 0x0040FA90, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40FA90, "CDefaultPlayerInterface::sub_40FA90" },  /* auto */
  { 0x0040FDA0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40FDA0, "CDefaultPlayerInterface::sub_40FDA0" },  /* auto */
  { 0x0040FDF0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40FDF0, "CDefaultPlayerInterface::sub_40FDF0" },  /* auto */
  { 0x0040FFB0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40FFB0, "CDefaultPlayerInterface::sub_40FFB0" },  /* auto */
  { 0x00410020, (funptr_t) &dk2::CDefaultPlayerInterface::sub_410020, "CDefaultPlayerInterface::sub_410020" },  /* auto */
  { 0x004100F0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_4100F0, "CDefaultPlayerInterface::sub_4100F0" },  /* auto */
  { 0x004152B0, (funptr_t) &dk2::CDefaultPlayerInterface::CWorldEntry_createArr10, "CDefaultPlayerInterface::CWorldEntry_createArr10" },  /* auto */
  { 0x00415B30, (funptr_t) &dk2::CDefaultPlayerInterface::sub_415B30, "CDefaultPlayerInterface::sub_415B30" },  /* auto */
  { 0x00415BC0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_415BC0, "CDefaultPlayerInterface::sub_415BC0" },  /* auto */
  { 0x00416150, (funptr_t) &dk2::CDefaultPlayerInterface::sub_416150, "CDefaultPlayerInterface::sub_416150" },  /* auto */
  { 0x004162A0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_4162A0, "CDefaultPlayerInterface::sub_4162A0" },  /* auto */
  { 0x00419180, (funptr_t) &dk2::CDefaultPlayerInterface::sub_419180_loadSmth, "CDefaultPlayerInterface::sub_419180_loadSmth" },  /* auto */
  { 0x00419DF0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_419DF0, "CDefaultPlayerInterface::sub_419DF0" },  /* auto */
  { 0x0041A190, (funptr_t) &dk2::CDefaultPlayerInterface::sub_41A190, "CDefaultPlayerInterface::sub_41A190" },  /* auto */
  { 0x0041A9B0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_41A9B0, "CDefaultPlayerInterface::fun_41A9B0" },  /* auto */
  { 0x0041EDC0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_41EDC0, "CDefaultPlayerInterface::fun_41EDC0" },  /* auto */
  { 0x00422600, (funptr_t) &dk2::CDefaultPlayerInterface::sub_422600, "CDefaultPlayerInterface::sub_422600" },  /* auto */
  { 0x00422BC0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_422BC0, "CDefaultPlayerInterface::fun_422BC0" },  /* auto */
  { 0x00422F60, (funptr_t) &dk2::CDefaultPlayerInterface::sub_422F60, "CDefaultPlayerInterface::sub_422F60" },  /* auto */
  { 0x00423A80, (funptr_t) &dk2::CDefaultPlayerInterface::sub_423A80, "CDefaultPlayerInterface::sub_423A80" },  /* auto */
  { 0x0042C390, (funptr_t) &dk2::CDefaultPlayerInterface::sub_42C390, "CDefaultPlayerInterface::sub_42C390" },  /* auto */
  { 0x0042C7D0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_42C7D0, "CDefaultPlayerInterface::sub_42C7D0" },  /* auto */
  { 0x0042CAB0, (funptr_t) &dk2::CDefaultPlayerInterface::whatEverFont_42CAB0, "CDefaultPlayerInterface::whatEverFont_42CAB0" },  /* auto */
  { 0x0042CB60, (funptr_t) &dk2::CDefaultPlayerInterface::sub_42CB60, "CDefaultPlayerInterface::sub_42CB60" },  /* auto */
  { 0x0042CDF0, (funptr_t) &dk2::CDefaultPlayerInterface::createSurfacesForView_42CDF0, "CDefaultPlayerInterface::createSurfacesForView_42CDF0" },  /* auto */
  { 0x004346E0, (funptr_t) &dk2::CDefaultPlayerInterface::pushAction, "CDefaultPlayerInterface::pushAction" },  /* auto */
  { 0x00404DB0, (funptr_t) &dk2::AABB::constructor, "AABB::constructor" },  /* auto */
  { 0x00404DC0, (funptr_t) &dk2::AABB::constructor_0, "AABB::constructor_0" },  /* auto */
  { 0x0052D370, (funptr_t) &dk2::AABB::sub_52D370, "AABB::sub_52D370" },  /* auto */
  { 0x0052D3A0, (funptr_t) &dk2::AABB::contains, "AABB::contains" },  /* auto */
  { 0x00556590, (funptr_t) &dk2::AABB::appendPoint, "AABB::appendPoint" },  /* auto */
  { 0x005B6FD0, (funptr_t) &dk2::AABB::intersection, "AABB::intersection" },  /* auto */
  { 0x005B7050, (funptr_t) &dk2::AABB::isIntersects, "AABB::isIntersects" },  /* auto */
  { 0x005B7090, (funptr_t) &dk2::AABB::getOuter, "AABB::getOuter" },  /* auto */
  { 0x005DC2D0, (funptr_t) &dk2::AABB::move, "AABB::move" },  /* auto */
  { 0x0062EB80, (funptr_t) &dk2::AABB::charsDraw_AABB_copy, "AABB::charsDraw_AABB_copy" },  /* auto */
  { 0x00404E00, (funptr_t) &dk2::MyGame::get_f4C, "MyGame::get_f4C" },  /* auto */
  { 0x00557B70, (funptr_t) &dk2::MyGame::constructor, "MyGame::constructor" },  /* auto */
  { 0x00557CB0, (funptr_t) &dk2::MyGame::init, "MyGame::init" },  /* auto */
  { 0x00557FB0, (funptr_t) &dk2::MyGame::isOsCompatible, "MyGame::isOsCompatible" },  /* auto */
  { 0x005580E0, (funptr_t) &dk2::MyGame::release, "MyGame::release" },  /* auto */
  { 0x005581B0, (funptr_t) &dk2::MyGame::prepareScreenEx, "MyGame::prepareScreenEx" },  /* auto */
  { 0x005585C0, (funptr_t) &dk2::MyGame::fun_5585C0, "MyGame::fun_5585C0" },  /* auto */
  { 0x005586E0, (funptr_t) &dk2::MyGame::sub_5586E0, "MyGame::sub_5586E0" },  /* auto */
  { 0x00558770, (funptr_t) &dk2::MyGame::sub_558770, "MyGame::sub_558770" },  /* auto */
  { 0x005587C0, (funptr_t) &dk2::MyGame::getScreenSurf, "MyGame::getScreenSurf" },  /* auto */
  { 0x005587F0, (funptr_t) &dk2::MyGame::prepareScreen, "MyGame::prepareScreen" },  /* auto */
  { 0x005588A0, (funptr_t) &dk2::MyGame::surf_Blt, "MyGame::surf_Blt" },  /* auto */
  { 0x00558A40, (funptr_t) &dk2::MyGame::takeScreenshot, "MyGame::takeScreenshot" },  /* auto */
  { 0x00558BD0, (funptr_t) &dk2::MyGame::sub_558BD0, "MyGame::sub_558BD0" },  /* auto */
  { 0x00558E40, (funptr_t) &dk2::MyGame::sub_558E40, "MyGame::sub_558E40" },  /* auto */
  { 0x00558F70, (funptr_t) &dk2::MyGame::createSurface, "MyGame::createSurface" },  /* auto */
  { 0x00559140, (funptr_t) &dk2::MyGame::sub_559140, "MyGame::sub_559140" },  /* auto */
  { 0x00559670, (funptr_t) &dk2::MyGame::isNeedBlt, "MyGame::isNeedBlt" },  /* auto */
  { 0x00559690, (funptr_t) &dk2::MyGame::addWmActivateCallback, "MyGame::addWmActivateCallback" },  /* auto */
  { 0x005596D0, (funptr_t) &dk2::MyGame::removeWmActivateCallback, "MyGame::removeWmActivateCallback" },  /* auto */
  { 0x005597F0, (funptr_t) &dk2::MyGame::fun_5597F0, "MyGame::fun_5597F0" },  /* auto */
  { 0x0043A740, (funptr_t) &dk2::CBridge::constructor, "CBridge::constructor" },  /* auto */
  { 0x0043A960, (funptr_t) &dk2::CBridge::get_field_, "CBridge::get_field_" },  /* auto */
  { 0x0043A970, (funptr_t) &dk2::CBridge::fun_43A970, "CBridge::fun_43A970" },  /* auto */
  { 0x0043A980, (funptr_t) &dk2::CBridge::getCamera, "CBridge::getCamera" },  /* auto */
  { 0x0043AAD0, (funptr_t) &dk2::CBridge::connectEngine, "CBridge::connectEngine" },  /* auto */
  { 0x0043ACF0, (funptr_t) &dk2::CBridge::fun_43ACF0, "CBridge::fun_43ACF0" },  /* auto */
  { 0x0043AD70, (funptr_t) &dk2::CBridge::fun_43AD70, "CBridge::fun_43AD70" },  /* auto */
  { 0x0043B150, (funptr_t) &dk2::CBridge::isActionHasHandler, "CBridge::isActionHasHandler" },  /* auto */
  { 0x0043B180, (funptr_t) &dk2::CBridge::fun_43B180, "CBridge::fun_43B180" },  /* auto */
  { 0x0043B1E0, (funptr_t) &dk2::CBridge::fun_43B1E0, "CBridge::fun_43B1E0" },  /* auto */
  { 0x0043B220, (funptr_t) &dk2::CBridge::fun_43B220, "CBridge::fun_43B220" },  /* auto */
  { 0x0043E0F0, (funptr_t) &dk2::CBridge::loadPng, "CBridge::loadPng" },  /* auto */
  { 0x00440FC0, (funptr_t) &dk2::CBridge::fun_440FC0, "CBridge::fun_440FC0" },  /* auto */
  { 0x00440FF0, (funptr_t) &dk2::CBridge::fun_440FF0, "CBridge::fun_440FF0" },  /* auto */
  { 0x00441020, (funptr_t) &dk2::CBridge::fun_441020, "CBridge::fun_441020" },  /* auto */
  { 0x00441300, (funptr_t) &dk2::CBridge::createAndRegister, "CBridge::createAndRegister" },  /* auto */
  { 0x004413E0, (funptr_t) &dk2::CBridge::init_float_obj, "CBridge::init_float_obj" },  /* auto */
  { 0x00441C70, (funptr_t) &dk2::CBridge::setTexturesPath_441C70, "CBridge::setTexturesPath_441C70" },  /* auto */
  { 0x00441FB0, (funptr_t) &dk2::CBridge::idx_handler2_3_moveCam, "CBridge::idx_handler2_3_moveCam" },  /* auto */
  { 0x004422B0, (funptr_t) &dk2::CBridge::idx_handler2_7_zoom, "CBridge::idx_handler2_7_zoom" },  /* auto */
  { 0x004422F0, (funptr_t) &dk2::CBridge::idx_handler2_8, "CBridge::idx_handler2_8" },  /* auto */
  { 0x00442350, (funptr_t) &dk2::CBridge::idx_handler2_85, "CBridge::idx_handler2_85" },  /* auto */
  { 0x00442380, (funptr_t) &dk2::CBridge::idx_handler2_9, "CBridge::idx_handler2_9" },  /* auto */
  { 0x00442540, (funptr_t) &dk2::CBridge::idx_handler2_73, "CBridge::idx_handler2_73" },  /* auto */
  { 0x00442780, (funptr_t) &dk2::CBridge::idx_handler2_F, "CBridge::idx_handler2_F" },  /* auto */
  { 0x004427D0, (funptr_t) &dk2::CBridge::idx_handler2_11, "CBridge::idx_handler2_11" },  /* auto */
  { 0x00442820, (funptr_t) &dk2::CBridge::idx_handler2_15, "CBridge::idx_handler2_15" },  /* auto */
  { 0x00442920, (funptr_t) &dk2::CBridge::idx_handler2_16, "CBridge::idx_handler2_16" },  /* auto */
  { 0x00442DE0, (funptr_t) &dk2::CBridge::idx_handler2_70, "CBridge::idx_handler2_70" },  /* auto */
  { 0x00442EB0, (funptr_t) &dk2::CBridge::idx_handler2_66, "CBridge::idx_handler2_66" },  /* auto */
  { 0x00447AC0, (funptr_t) &dk2::CBridge::idx_handler_1, "CBridge::idx_handler_1" },  /* auto */
  { 0x00447D50, (funptr_t) &dk2::CBridge::idx_handler_7, "CBridge::idx_handler_7" },  /* auto */
  { 0x004483D0, (funptr_t) &dk2::CBridge::idx_handler_B, "CBridge::idx_handler_B" },  /* auto */
  { 0x00448440, (funptr_t) &dk2::CBridge::idx_handler_C, "CBridge::idx_handler_C" },  /* auto */
  { 0x00443050, (funptr_t) &dk2::CBridgeInterface::constructor, "CBridgeInterface::constructor" },  /* auto */
  { 0x00449470, (funptr_t) &dk2::CCamera::constructor, "CCamera::constructor" },  /* auto */
  { 0x00449670, (funptr_t) &dk2::CCamera::fun_449670, "CCamera::fun_449670" },  /* auto */
  { 0x004499E0, (funptr_t) &dk2::CCamera::fun_4499E0, "CCamera::fun_4499E0" },  /* auto */
  { 0x00449AC0, (funptr_t) &dk2::CCamera::sub_449AC0, "CCamera::sub_449AC0" },  /* auto */
  { 0x00449B30, (funptr_t) &dk2::CCamera::sub_449B30, "CCamera::sub_449B30" },  /* auto */
  { 0x00449BD0, (funptr_t) &dk2::CCamera::fun_449BD0, "CCamera::fun_449BD0" },  /* auto */
  { 0x00449CA0, (funptr_t) &dk2::CCamera::zoomRel_449CA0, "CCamera::zoomRel_449CA0" },  /* auto */
  { 0x00449D00, (funptr_t) &dk2::CCamera::fun_449D00, "CCamera::fun_449D00" },  /* auto */
  { 0x00449D40, (funptr_t) &dk2::CCamera::fun_449D40, "CCamera::fun_449D40" },  /* auto */
  { 0x00449F50, (funptr_t) &dk2::CCamera::fun_449F50, "CCamera::fun_449F50" },  /* auto */
  { 0x0044A370, (funptr_t) &dk2::CCamera::sub_44A370, "CCamera::sub_44A370" },  /* auto */
  { 0x0044A5D0, (funptr_t) &dk2::CCamera::sub_44A5D0, "CCamera::sub_44A5D0" },  /* auto */
  { 0x0044A9E0, (funptr_t) &dk2::CCamera::sub_44A9E0, "CCamera::sub_44A9E0" },  /* auto */
  { 0x0044ACE0, (funptr_t) &dk2::CCamera::sub_44ACE0, "CCamera::sub_44ACE0" },  /* auto */
  { 0x0044BD70, (funptr_t) &dk2::CCamera::sub_44BD70, "CCamera::sub_44BD70" },  /* auto */
  { 0x0044BED0, (funptr_t) &dk2::CCamera::sub_44BED0, "CCamera::sub_44BED0" },  /* auto */
  { 0x0044CFB0, (funptr_t) &dk2::CCamera::fun_44CFB0, "CCamera::fun_44CFB0" },  /* auto */
  { 0x0044D320, (funptr_t) &dk2::CCamera::fun_44D320, "CCamera::fun_44D320" },  /* auto */
  { 0x0044D590, (funptr_t) &dk2::CCamera::fun_44D590, "CCamera::fun_44D590" },  /* auto */
  { 0x0044D6D0, (funptr_t) &dk2::CCamera::fun_44D6D0, "CCamera::fun_44D6D0" },  /* auto */
  { 0x0044D8F0, (funptr_t) &dk2::CCamera::sub_44D8F0, "CCamera::sub_44D8F0" },  /* auto */
  { 0x0044DC70, (funptr_t) &dk2::CCamera::fun_44DC70, "CCamera::fun_44DC70" },  /* auto */
  { 0x0044DE30, (funptr_t) &dk2::CEngineInterface::constructor, "CEngineInterface::constructor" },  /* auto */
  { 0x0044E250, (funptr_t) &dk2::CMap::constructor, "CMap::constructor" },  /* auto */
  { 0x0044E290, (funptr_t) &dk2::CMap::destructor, "CMap::destructor" },  /* auto */
  { 0x0044F3F0, (funptr_t) &dk2::CMap::fun_44F3F0, "CMap::fun_44F3F0" },  /* auto */
  { 0x0044F4B0, (funptr_t) &dk2::CMap::fun_44F4B0, "CMap::fun_44F4B0" },  /* auto */
  { 0x0045CB00, (funptr_t) &dk2::CCreature::fun_45CB00, "CCreature::fun_45CB00" },  /* auto */
  { 0x0045E9F0, (funptr_t) &dk2::CCreature::fun_45E9F0, "CCreature::fun_45E9F0" },  /* auto */
  { 0x0045EDA0, (funptr_t) &dk2::CCreature::fun_45EDA0, "CCreature::fun_45EDA0" },  /* auto */
  { 0x00488930, (funptr_t) &dk2::CCreature::fun_488930, "CCreature::fun_488930" },  /* auto */
  { 0x0048F250, (funptr_t) &dk2::CCreature::fun_48F250, "CCreature::fun_48F250" },  /* auto */
  { 0x00490240, (funptr_t) &dk2::CCreature::dump, "CCreature::dump" },  /* auto */
  { 0x004B5B80, (funptr_t) &dk2::CCreature::destructor, "CCreature::destructor" },  /* auto */
  { 0x004B5E10, (funptr_t) &dk2::CCreature::constructor, "CCreature::constructor" },  /* auto */
  { 0x00476B10, (funptr_t) &dk2::CState::constructor, "CState::constructor" },  /* auto */
  { 0x00479200, (funptr_t) &dk2::CState::dump, "CState::dump" },  /* auto */
  { 0x0049C8C0, (funptr_t) &dk2::CObject::fun_49C8C0, "CObject::fun_49C8C0" },  /* auto */
  { 0x0049D310, (funptr_t) &dk2::CObject::fun_49D310, "CObject::fun_49D310" },  /* auto */
  { 0x004B7190, (funptr_t) &dk2::CObject::constructor, "CObject::constructor" },  /* auto */
  { 0x004A54D0, (funptr_t) &dk2::CThing::CDoor_fun_4A54D0, "CThing::CDoor_fun_4A54D0" },  /* auto */
  { 0x004A5560, (funptr_t) &dk2::CThing::CDoor_fun_4A5560, "CThing::CDoor_fun_4A5560" },  /* auto */
  { 0x004A7BD0, (funptr_t) &dk2::CThing::CTrap_fun_4A7BD0, "CThing::CTrap_fun_4A7BD0" },  /* auto */
  { 0x004A7C60, (funptr_t) &dk2::CThing::CTrap_fun_4A7C60, "CThing::CTrap_fun_4A7C60" },  /* auto */
  { 0x004B0550, (funptr_t) &dk2::CThing::CActionPoint_fun_4B0550, "CThing::CActionPoint_fun_4B0550" },  /* auto */
  { 0x004B1AE0, (funptr_t) &dk2::CThing::CEffectGenerator_fun_4B1AE0, "CThing::CEffectGenerator_fun_4B1AE0" },  /* auto */
  { 0x004B1E70, (funptr_t) &dk2::CThing::CMovingThing_fun_4B1E70, "CThing::CMovingThing_fun_4B1E70" },  /* auto */
  { 0x004B1EC0, (funptr_t) &dk2::CThing::CMovingThing_fun_4B1EC0, "CThing::CMovingThing_fun_4B1EC0" },  /* auto */
  { 0x004B2920, (funptr_t) &dk2::CThing::CPhysicalThing_fun_4B2920, "CThing::CPhysicalThing_fun_4B2920" },  /* auto */
  { 0x004B29F0, (funptr_t) &dk2::CThing::CPhysicalThing_fun_4B29F0, "CThing::CPhysicalThing_fun_4B29F0" },  /* auto */
  { 0x004B4B50, (funptr_t) &dk2::CThing::fun_4B4B50, "CThing::fun_4B4B50" },  /* auto */
  { 0x004B4BB0, (funptr_t) &dk2::CThing::fun_4B4BB0, "CThing::fun_4B4BB0" },  /* auto */
  { 0x004B5020, (funptr_t) &dk2::CThing::sub_4B5020, "CThing::sub_4B5020" },  /* auto */
  { 0x004B56A0, (funptr_t) &dk2::CThing::fun_4B56A0, "CThing::fun_4B56A0" },  /* auto */
  { 0x004B5700, (funptr_t) &dk2::CThing::dump, "CThing::dump" },  /* auto */
  { 0x004B5C10, (funptr_t) &dk2::CThing::fun_4B5C10, "CThing::fun_4B5C10" },  /* auto */
  { 0x004B5C20, (funptr_t) &dk2::CThing::fun_4B5C20, "CThing::fun_4B5C20" },  /* auto */
  { 0x004B5EF0, (funptr_t) &dk2::CThing::constructor, "CThing::constructor" },  /* auto */
  { 0x004B7550, (funptr_t) &dk2::CThing::destructor, "CThing::destructor" },  /* auto */
  { 0x004A6F10, (funptr_t) &dk2::CDoor::dump, "CDoor::dump" },  /* auto */
  { 0x004B7310, (funptr_t) &dk2::CDoor::constructor, "CDoor::constructor" },  /* auto */
  { 0x004B73A0, (funptr_t) &dk2::CDoor::destructor, "CDoor::destructor" },  /* auto */
  { 0x004AA130, (funptr_t) &dk2::CTrap::dump, "CTrap::dump" },  /* auto */
  { 0x004B7400, (funptr_t) &dk2::CTrap::constructor, "CTrap::constructor" },  /* auto */
  { 0x004B7490, (funptr_t) &dk2::CTrap::destructor, "CTrap::destructor" },  /* auto */
  { 0x004ABAF0, (funptr_t) &dk2::CShot::dump, "CShot::dump" },  /* auto */
  { 0x004B7D60, (funptr_t) &dk2::CShot::constructor, "CShot::constructor" },  /* auto */
  { 0x004B7E80, (funptr_t) &dk2::CShot::destructor, "CShot::destructor" },  /* auto */
  { 0x004B18B0, (funptr_t) &dk2::CDeadBody::dump, "CDeadBody::dump" },  /* auto */
  { 0x004B8050, (funptr_t) &dk2::CDeadBody::constructor, "CDeadBody::constructor" },  /* auto */
  { 0x004B8140, (funptr_t) &dk2::CDeadBody::destructor, "CDeadBody::destructor" },  /* auto */
  { 0x004B27E0, (funptr_t) &dk2::CMovingThing::dump, "CMovingThing::dump" },  /* auto */
  { 0x004B5CE0, (funptr_t) &dk2::CMovingThing::destructor, "CMovingThing::destructor" },  /* auto */
  { 0x004B3560, (funptr_t) &dk2::CPhysicalThing::dump, "CPhysicalThing::dump" },  /* auto */
  { 0x004B5C80, (funptr_t) &dk2::CPhysicalThing::destructor, "CPhysicalThing::destructor" },  /* auto */
  { 0x004B3610, (funptr_t) &dk2::CRenderInfo::constructor, "CRenderInfo::constructor" },  /* auto */
  { 0x004B3740, (funptr_t) &dk2::CRenderInfo::destructor, "CRenderInfo::destructor" },  /* auto */
  { 0x004B47C0, (funptr_t) &dk2::CRenderInfo::dump, "CRenderInfo::dump" },  /* auto */
  { 0x004B59D0, (funptr_t) &dk2::MyCreatureCollection::constructor, "MyCreatureCollection::constructor" },  /* auto */
  { 0x004B5A10, (funptr_t) &dk2::MyCreatureCollection::create_creatures, "MyCreatureCollection::create_creatures" },  /* auto */
  { 0x004B6040, (funptr_t) &dk2::MyCreatureCollection::sub_4B6040, "MyCreatureCollection::sub_4B6040" },  /* auto */
  { 0x004B8450, (funptr_t) &dk2::CPlayer::constructor, "CPlayer::constructor" },  /* auto */
  { 0x004B85A0, (funptr_t) &dk2::CPlayer::destructor, "CPlayer::destructor" },  /* auto */
  { 0x004B8C30, (funptr_t) &dk2::CPlayer::sub_4B8C30, "CPlayer::sub_4B8C30" },  /* auto */
  { 0x004B8D40, (funptr_t) &dk2::CPlayer::fun_4B8D40, "CPlayer::fun_4B8D40" },  /* auto */
  { 0x004B9740, (funptr_t) &dk2::CPlayer::Player_cpp_4B9740, "CPlayer::Player_cpp_4B9740" },  /* auto */
  { 0x004B9EC0, (funptr_t) &dk2::CPlayer::tick, "CPlayer::tick" },  /* auto */
  { 0x004BA8D0, (funptr_t) &dk2::CPlayer::setName, "CPlayer::setName" },  /* auto */
  { 0x004BFB80, (funptr_t) &dk2::CPlayer::sub_4BFB80, "CPlayer::sub_4BFB80" },  /* auto */
  { 0x004C0090, (funptr_t) &dk2::CPlayer::sub_4C0090, "CPlayer::sub_4C0090" },  /* auto */
  { 0x004C1770, (funptr_t) &dk2::CPlayer::fun_4C1770, "CPlayer::fun_4C1770" },  /* auto */
  { 0x004C17A0, (funptr_t) &dk2::CPlayer::sub_4C17A0, "CPlayer::sub_4C17A0" },  /* auto */
  { 0x004C3340, (funptr_t) &dk2::CPlayer::fun_4C3340, "CPlayer::fun_4C3340" },  /* auto */
  { 0x004C1E00, (funptr_t) &dk2::PlayerList::init, "PlayerList::init" },  /* auto */
  { 0x004C1E20, (funptr_t) &dk2::PlayerList::create_players, "PlayerList::create_players" },  /* auto */
  { 0x004C2010, (funptr_t) &dk2::PlayerList::remove_players, "PlayerList::remove_players" },  /* auto */
  { 0x004C2310, (funptr_t) &dk2::PlayerList::tick, "PlayerList::tick" },  /* auto */
  { 0x004C23B0, (funptr_t) &dk2::PlayerList::sub_4C23B0, "PlayerList::sub_4C23B0" },  /* auto */
  { 0x004C2980, (funptr_t) &dk2::PlayerList::sub_4C2980, "PlayerList::sub_4C2980" },  /* auto */
  { 0x004C2A70, (funptr_t) &dk2::PlayerList::sub_4C2A70, "PlayerList::sub_4C2A70" },  /* auto */
  { 0x004DFE90, (funptr_t) &dk2::CTag::sub_4DFE90, "CTag::sub_4DFE90" },  /* auto */
  { 0x00507850, (funptr_t) &dk2::CTag::constructor, "CTag::constructor" },  /* auto */
  { 0x00507970, (funptr_t) &dk2::CTag::destructor, "CTag::destructor" },  /* auto */
  { 0x005079F0, (funptr_t) &dk2::CTag::fun_5079F0, "CTag::fun_5079F0" },  /* auto */
  { 0x004E3790, (funptr_t) &dk2::CRoom::constructor, "CRoom::constructor" },  /* auto */
  { 0x004E37F0, (funptr_t) &dk2::CRoom::destructor, "CRoom::destructor" },  /* auto */
  { 0x00504D60, (funptr_t) &dk2::CWorldEntry::constructor, "CWorldEntry::constructor" },  /* auto */
  { 0x00504F00, (funptr_t) &dk2::CWorld::sub_504F00, "CWorld::sub_504F00" },  /* auto */
  { 0x00504FB0, (funptr_t) &dk2::CWorld::sub_504FB0, "CWorld::sub_504FB0" },  /* auto */
  { 0x00508A10, (funptr_t) &dk2::CWorld::constructor, "CWorld::constructor" },  /* auto */
  { 0x00508C10, (funptr_t) &dk2::CWorld::fun_508C10, "CWorld::fun_508C10" },  /* auto */
  { 0x00508C60, (funptr_t) &dk2::CWorld::fun_508C60, "CWorld::fun_508C60" },  /* auto */
  { 0x00509740, (funptr_t) &dk2::CWorld::fun_509740, "CWorld::fun_509740" },  /* auto */
  { 0x005099A0, (funptr_t) &dk2::CWorld::create_objects, "CWorld::create_objects" },  /* auto */
  { 0x0050A2F0, (funptr_t) &dk2::CWorld::remove_objects, "CWorld::remove_objects" },  /* auto */
  { 0x0050A450, (funptr_t) &dk2::CWorld::tick, "CWorld::tick" },  /* auto */
  { 0x0050AA60, (funptr_t) &dk2::CWorld::sub_50AA60, "CWorld::sub_50AA60" },  /* auto */
  { 0x0050ADE0, (funptr_t) &dk2::CWorld::probably_start_editor, "CWorld::probably_start_editor" },  /* auto */
  { 0x0050E920, (funptr_t) &dk2::CWorld::fun_50E920, "CWorld::fun_50E920" },  /* auto */
  { 0x0050FD10, (funptr_t) &dk2::CWorld::fun_50FD10, "CWorld::fun_50FD10" },  /* auto */
  { 0x0050FD70, (funptr_t) &dk2::CWorld::fun_50FD70, "CWorld::fun_50FD70" },  /* auto */
  { 0x00510E90, (funptr_t) &dk2::CWorld::fun_510E90, "CWorld::fun_510E90" },  /* auto */
  { 0x00510F90, (funptr_t) &dk2::CWorld::handleAction, "CWorld::handleAction" },  /* auto */
  { 0x00511280, (funptr_t) &dk2::CWorld::sub_511280, "CWorld::sub_511280" },  /* auto */
  { 0x00512940, (funptr_t) &dk2::CWorld::GameActionHandler_N7D, "CWorld::GameActionHandler_N7D" },  /* auto */
  { 0x005129A0, (funptr_t) &dk2::CWorld::GameActionHandler_N28, "CWorld::GameActionHandler_N28" },  /* auto */
  { 0x005129E0, (funptr_t) &dk2::CWorld::GameActionHandler_N29, "CWorld::GameActionHandler_N29" },  /* auto */
  { 0x00512A20, (funptr_t) &dk2::CWorld::sub_512A20, "CWorld::sub_512A20" },  /* auto */
  { 0x00512D20, (funptr_t) &dk2::CWorld::sub_512D20, "CWorld::sub_512D20" },  /* auto */
  { 0x00513870, (funptr_t) &dk2::CWorld::GameActionHandler_N66__editor_load_level, "CWorld::GameActionHandler_N66__editor_load_level" },  /* auto */
  { 0x00516EC0, (funptr_t) &dk2::CWorld::GameActionHandler_N1C, "CWorld::GameActionHandler_N1C" },  /* auto */
  { 0x00517480, (funptr_t) &dk2::CWorld::sub_517480, "CWorld::sub_517480" },  /* auto */
  { 0x00517490, (funptr_t) &dk2::CWorld::getWorldFrameIdx, "CWorld::getWorldFrameIdx" },  /* auto */
  { 0x0051A890, (funptr_t) &dk2::CWorld::sub_51A890, "CWorld::sub_51A890" },  /* auto */
  { 0x005052F0, (funptr_t) &dk2::CWorldShortEntry2::constructor, "CWorldShortEntry2::constructor" },  /* auto */
  { 0x00506120, (funptr_t) &dk2::CCreaturePool::constructor, "CCreaturePool::constructor" },  /* auto */
  { 0x00506140, (funptr_t) &dk2::CCreaturePool::destructor, "CCreaturePool::destructor" },  /* auto */
  { 0x005061F0, (funptr_t) &dk2::CCreaturePool::sub_5061F0, "CCreaturePool::sub_5061F0" },  /* auto */
  { 0x00506220, (funptr_t) &dk2::CCreaturePool::fun_506220, "CCreaturePool::fun_506220" },  /* auto */
  { 0x005062D0, (funptr_t) &dk2::CCreaturePool::fun_5062D0, "CCreaturePool::fun_5062D0" },  /* auto */
  { 0x005063D0, (funptr_t) &dk2::CCreaturePool::fun_5063D0, "CCreaturePool::fun_5063D0" },  /* auto */
  { 0x00506D30, (funptr_t) &dk2::CResearchOrder::constructor, "CResearchOrder::constructor" },  /* auto */
  { 0x005119C0, (funptr_t) &dk2::GameActionHandler::handle138, "GameActionHandler::handle138" },  /* auto */
  { 0x00521B20, (funptr_t) &dk2::CCommunicationInterface::constructor, "CCommunicationInterface::constructor" },  /* auto */
  { 0x00521BA0, (funptr_t) &dk2::CCommunicationInterface::fun_521BA0, "CCommunicationInterface::fun_521BA0" },  /* auto */
  { 0x00521CC0, (funptr_t) &dk2::CCommunicationInterface::updateTime_to__, "CCommunicationInterface::updateTime_to__" },  /* auto */
  { 0x00521F40, (funptr_t) &dk2::GameAction::constructor, "GameAction::constructor" },  /* auto */
  { 0x00522680, (funptr_t) &dk2::CLocalCommunication::constructor, "CLocalCommunication::constructor" },  /* auto */
  { 0x00522750, (funptr_t) &dk2::CLocalCommunication::pushAction, "CLocalCommunication::pushAction" },  /* auto */
  { 0x00522760, (funptr_t) &dk2::CLocalCommunication::fun_522760, "CLocalCommunication::fun_522760" },  /* auto */
  { 0x00522790, (funptr_t) &dk2::CLocalCommunication::collectGameActions, "CLocalCommunication::collectGameActions" },  /* auto */
  { 0x005251A0, (funptr_t) &dk2::CGameComponent::constructor, "CGameComponent::constructor" },  /* auto */
  { 0x00525350, (funptr_t) &dk2::CGameComponent::setExit0, "CGameComponent::setExit0" },  /* auto */
  { 0x00525370, (funptr_t) &dk2::CGameComponent::mainGuiLoop, "CGameComponent::mainGuiLoop" },  /* auto */
  { 0x00525EB0, (funptr_t) &dk2::GameActionArray::constructor, "GameActionArray::constructor" },  /* auto */
  { 0x00525F00, (funptr_t) &dk2::GameActionArray::add, "GameActionArray::add" },  /* auto */
  { 0x00525F80, (funptr_t) &dk2::GameActionArray::pop, "GameActionArray::pop" },  /* auto */
  { 0x00526020, (funptr_t) &dk2::MyProfiler::constructor, "MyProfiler::constructor" },  /* auto */
  { 0x00526090, (funptr_t) &dk2::MyProfiler::probably_Profiler_constructor, "MyProfiler::probably_Profiler_constructor" },  /* auto */
  { 0x00526280, (funptr_t) &dk2::MyProfiler::dumpStats, "MyProfiler::dumpStats" },  /* auto */
  { 0x00526590, (funptr_t) &dk2::MyProfiler::draw3dScene, "MyProfiler::draw3dScene" },  /* auto */
  { 0x00526FF0, (funptr_t) &dk2::MyProfiler::attachPlayerI, "MyProfiler::attachPlayerI" },  /* auto */
  { 0x00527020, (funptr_t) &dk2::MyProfiler::clear_pobj_C, "MyProfiler::clear_pobj_C" },  /* auto */
  { 0x00527040, (funptr_t) &dk2::MyProfiler::attachCBridge, "MyProfiler::attachCBridge" },  /* auto */
  { 0x00527070, (funptr_t) &dk2::MyProfiler::clearCBridge, "MyProfiler::clearCBridge" },  /* auto */
  { 0x00527090, (funptr_t) &dk2::MyProfiler::attachCWorld, "MyProfiler::attachCWorld" },  /* auto */
  { 0x005270C0, (funptr_t) &dk2::MyProfiler::clearCWorld, "MyProfiler::clearCWorld" },  /* auto */
  { 0x005270E0, (funptr_t) &dk2::MyProfiler::attachCommunicationInterface, "MyProfiler::attachCommunicationInterface" },  /* auto */
  { 0x00527110, (funptr_t) &dk2::MyProfiler::clearCommunicationInterface, "MyProfiler::clearCommunicationInterface" },  /* auto */
  { 0x00527130, (funptr_t) &dk2::MyProfiler::pushAction, "MyProfiler::pushAction" },  /* auto */
  { 0x00527150, (funptr_t) &dk2::MyProfiler::sub_527150, "MyProfiler::sub_527150" },  /* auto */
  { 0x00527180, (funptr_t) &dk2::MyProfiler::handleActions, "MyProfiler::handleActions" },  /* auto */
  { 0x005272C0, (funptr_t) &dk2::GameActionCtx::fun_5272C0, "GameActionCtx::fun_5272C0" },  /* auto */
  { 0x00527330, (funptr_t) &dk2::GameActionCtx::addAction, "GameActionCtx::addAction" },  /* auto */
  { 0x00527470, (funptr_t) &dk2::CNetworkComponent::constructor, "CNetworkComponent::constructor" },  /* auto */
  { 0x00527790, (funptr_t) &dk2::CNetworkComponent::fun_527790, "CNetworkComponent::fun_527790" },  /* auto */
  { 0x00528280, (funptr_t) &dk2::CButton::constructor, "CButton::constructor" },  /* auto */
  { 0x005282A0, (funptr_t) &dk2::CButton::fun_5282A0, "CButton::fun_5282A0" },  /* auto */
  { 0x00528300, (funptr_t) &dk2::CButton::configure, "CButton::configure" },  /* auto */
  { 0x00528430, (funptr_t) &dk2::CButton::visitCursor, "CButton::visitCursor" },  /* auto */
  { 0x005284B0, (funptr_t) &dk2::CButton::containsPoint, "CButton::containsPoint" },  /* auto */
  { 0x00528520, (funptr_t) &dk2::CButton::sub_528520, "CButton::sub_528520" },  /* auto */
  { 0x00528570, (funptr_t) &dk2::CButton::getScreenAABB, "CButton::getScreenAABB" },  /* auto */
  { 0x00528800, (funptr_t) &dk2::CButton::CVerticalSlider_fun_528800, "CButton::CVerticalSlider_fun_528800" },  /* auto */
  { 0x00529050, (funptr_t) &dk2::CButton::CVerticalSlider_fun_529050, "CButton::CVerticalSlider_fun_529050" },  /* auto */
  { 0x005290F0, (funptr_t) &dk2::CButton::CVerticalSlider_fun_5290F0, "CButton::CVerticalSlider_fun_5290F0" },  /* auto */
  { 0x005298E0, (funptr_t) &dk2::CButton::CHorizontalSlider_fun_5298E0, "CButton::CHorizontalSlider_fun_5298E0" },  /* auto */
  { 0x00529970, (funptr_t) &dk2::CButton::CHorizontalSlider_fun_529970, "CButton::CHorizontalSlider_fun_529970" },  /* auto */
  { 0x005299E0, (funptr_t) &dk2::CButton::CHorizontalSlider_fun_5299E0, "CButton::CHorizontalSlider_fun_5299E0" },  /* auto */
  { 0x00529A80, (funptr_t) &dk2::CButton::CDragButton_fun_529A80, "CButton::CDragButton_fun_529A80" },  /* auto */
  { 0x00529C60, (funptr_t) &dk2::CButton::CCheckBoxButton_fun_529C60, "CButton::CCheckBoxButton_fun_529C60" },  /* auto */
  { 0x00529DC0, (funptr_t) &dk2::CButton::CCheckBoxButton_fun_529DC0, "CButton::CCheckBoxButton_fun_529DC0" },  /* auto */
  { 0x00529EB0, (funptr_t) &dk2::CButton::CTextBox_fun_529EB0, "CButton::CTextBox_fun_529EB0" },  /* auto */
  { 0x0052A010, (funptr_t) &dk2::CButton::CTextBox_fun_52A010, "CButton::CTextBox_fun_52A010" },  /* auto */
  { 0x0052B6A0, (funptr_t) &dk2::CButton::CProgressBar_fun_52B6A0, "CButton::CProgressBar_fun_52B6A0" },  /* auto */
  { 0x0052B710, (funptr_t) &dk2::CButton::CClickTextButton_fun_52B710, "CButton::CClickTextButton_fun_52B710" },  /* auto */
  { 0x00528610, (funptr_t) &dk2::CClickButton::handleClick, "CClickButton::handleClick" },  /* auto */
  { 0x00528EF0, (funptr_t) &dk2::CVerticalSlider::CSlider_fun_528EF0, "CVerticalSlider::CSlider_fun_528EF0" },  /* auto */
  { 0x00529160, (funptr_t) &dk2::CVerticalSlider::fun_529160, "CVerticalSlider::fun_529160" },  /* auto */
  { 0x0052A1F0, (funptr_t) &dk2::CVerticalSlider::CSlider_fun_52A1F0, "CVerticalSlider::CSlider_fun_52A1F0" },  /* auto */
  { 0x0052B810, (funptr_t) &dk2::CGadget::constructor, "CGadget::constructor" },  /* auto */
  { 0x0052B870, (funptr_t) &dk2::CGuiManager::constructor, "CGuiManager::constructor" },  /* auto */
  { 0x0052B8E0, (funptr_t) &dk2::CGuiManager::destructor, "CGuiManager::destructor" },  /* auto */
  { 0x0052B8F0, (funptr_t) &dk2::CGuiManager::createElements, "CGuiManager::createElements" },  /* auto */
  { 0x0052BBD0, (funptr_t) &dk2::CGuiManager::doDraw2dGui, "CGuiManager::doDraw2dGui" },  /* auto */
  { 0x0052BC50, (funptr_t) &dk2::CGuiManager::sub_52BC50, "CGuiManager::sub_52BC50" },  /* auto */
  { 0x0052BFC0, (funptr_t) &dk2::CGuiManager::probably_isCursorAtButton, "CGuiManager::probably_isCursorAtButton" },  /* auto */
  { 0x0052C2F0, (funptr_t) &dk2::CGuiManager::onWmChar, "CGuiManager::onWmChar" },  /* auto */
  { 0x0052C520, (funptr_t) &dk2::CGuiManager::sub_52C520, "CGuiManager::sub_52C520" },  /* auto */
  { 0x0052C540, (funptr_t) &dk2::CGuiManager::findGameWindowById, "CGuiManager::findGameWindowById" },  /* auto */
  { 0x0052C5A0, (funptr_t) &dk2::CGuiManager::scaleSize, "CGuiManager::scaleSize" },  /* auto */
  { 0x0052C5F0, (funptr_t) &dk2::CGuiManager::sub_52C5F0, "CGuiManager::sub_52C5F0" },  /* auto */
  { 0x0052C630, (funptr_t) &dk2::CGuiManager::scaleAabb, "CGuiManager::scaleAabb" },  /* auto */
  { 0x0052CCB0, (funptr_t) &dk2::CGuiManager::sub_52CCB0, "CGuiManager::sub_52CCB0" },  /* auto */
  { 0x0052CCE0, (funptr_t) &dk2::CWindow::constructor, "CWindow::constructor" },  /* auto */
  { 0x0052CD30, (funptr_t) &dk2::CWindow::update, "CWindow::update" },  /* auto */
  { 0x0052CDC0, (funptr_t) &dk2::CWindow::sub_52CDC0, "CWindow::sub_52CDC0" },  /* auto */
  { 0x0052CE50, (funptr_t) &dk2::CWindow::getScreenPos, "CWindow::getScreenPos" },  /* auto */
  { 0x0052CED0, (funptr_t) &dk2::CWindow::configure, "CWindow::configure" },  /* auto */
  { 0x0052D3E0, (funptr_t) &dk2::MySurfDesc::constructor, "MySurfDesc::constructor" },  /* auto */
  { 0x0052E500, (funptr_t) &dk2::CFrontEndComponent::constructor, "CFrontEndComponent::constructor" },  /* auto */
  { 0x0052EF70, (funptr_t) &dk2::CFrontEndComponent::destructor, "CFrontEndComponent::destructor" },  /* auto */
  { 0x0052EFE0, (funptr_t) &dk2::CFrontEndComponent::fun_52EFE0, "CFrontEndComponent::fun_52EFE0" },  /* auto */
  { 0x0052F140, (funptr_t) &dk2::CFrontEndComponent::launchGame, "CFrontEndComponent::launchGame" },  /* auto */
  { 0x0052F9E0, (funptr_t) &dk2::CFrontEndComponent::maybe_update_textures, "CFrontEndComponent::maybe_update_textures" },  /* auto */
  { 0x0052FF00, (funptr_t) &dk2::CFrontEndComponent::draw2dGui, "CFrontEndComponent::draw2dGui" },  /* auto */
  { 0x00532170, (funptr_t) &dk2::CFrontEndComponent::findBtnBySomeId, "CFrontEndComponent::findBtnBySomeId" },  /* auto */
  { 0x005322D0, (funptr_t) &dk2::CFrontEndComponent::getCurrentWindow, "CFrontEndComponent::getCurrentWindow" },  /* auto */
  { 0x005334C0, (funptr_t) &dk2::CFrontEndComponent::draw2dGui_0, "CFrontEndComponent::draw2dGui_0" },  /* auto */
  { 0x00533570, (funptr_t) &dk2::CFrontEndComponent::bakeButton, "CFrontEndComponent::bakeButton" },  /* auto */
  { 0x00533E90, (funptr_t) &dk2::CFrontEndComponent::sub_533E90, "CFrontEndComponent::sub_533E90" },  /* auto */
  { 0x005340F0, (funptr_t) &dk2::CFrontEndComponent::showTitleScreen, "CFrontEndComponent::showTitleScreen" },  /* auto */
  { 0x00534210, (funptr_t) &dk2::CFrontEndComponent::load, "CFrontEndComponent::load" },  /* auto */
  { 0x00535950, (funptr_t) &dk2::CFrontEndComponent::sub_535950, "CFrontEndComponent::sub_535950" },  /* auto */
  { 0x00535A30, (funptr_t) &dk2::CFrontEndComponent::sub_535A30, "CFrontEndComponent::sub_535A30" },  /* auto */
  { 0x00536370, (funptr_t) &dk2::CFrontEndComponent::sub_536370, "CFrontEndComponent::sub_536370" },  /* auto */
  { 0x00536850, (funptr_t) &dk2::CFrontEndComponent::sub_536850, "CFrontEndComponent::sub_536850" },  /* auto */
  { 0x00536E20, (funptr_t) &dk2::CFrontEndComponent::sub_536E20, "CFrontEndComponent::sub_536E20" },  /* auto */
  { 0x00539E00, (funptr_t) &dk2::CFrontEndComponent::saveAddressBookWinsock, "CFrontEndComponent::saveAddressBookWinsock" },  /* auto */
  { 0x0053BFD0, (funptr_t) &dk2::CFrontEndComponent::showIntro, "CFrontEndComponent::showIntro" },  /* auto */
  { 0x005478B0, (funptr_t) &dk2::CFrontEndComponent::sub_5478B0, "CFrontEndComponent::sub_5478B0" },  /* auto */
  { 0x00547B20, (funptr_t) &dk2::CFrontEndComponent::sub_547B20, "CFrontEndComponent::sub_547B20" },  /* auto */
  { 0x0054DB20, (funptr_t) &dk2::CFrontEndComponent::fun_54DB20, "CFrontEndComponent::fun_54DB20" },  /* auto */
  { 0x00552C70, (funptr_t) &dk2::CFrontEndComponent::fun_552C70, "CFrontEndComponent::fun_552C70" },  /* auto */
  { 0x0052EF00, (funptr_t) &dk2::PixelMask::constructor, "PixelMask::constructor" },  /* auto */
  { 0x00552BC0, (funptr_t) &dk2::CComponent::constructor, "CComponent::constructor" },  /* auto */
  { 0x00552C60, (funptr_t) &dk2::CComponent::release, "CComponent::release" },  /* auto */
  { 0x00554C70, (funptr_t) &dk2::MyStaticStruct::constructor, "MyStaticStruct::constructor" },  /* auto */
  { 0x00554D60, (funptr_t) &dk2::MyStaticStruct::init_console_command, "MyStaticStruct::init_console_command" },  /* auto */
  { 0x00554D80, (funptr_t) &dk2::MyStaticStruct::sub_554D80, "MyStaticStruct::sub_554D80" },  /* auto */
  { 0x00555560, (funptr_t) &dk2::MyStaticStruct::sub_555560, "MyStaticStruct::sub_555560" },  /* auto */
  { 0x00555B90, (funptr_t) &dk2::CWindowTest::constructor, "CWindowTest::constructor" },  /* auto */
  { 0x00555CC0, (funptr_t) &dk2::CWindowTest::create, "CWindowTest::create" },  /* auto */
  { 0x00555F30, (funptr_t) &dk2::CWindowTest::recreateBullfrog, "CWindowTest::recreateBullfrog" },  /* auto */
  { 0x00555FF0, (funptr_t) &dk2::CWindowTest::getClientRect, "CWindowTest::getClientRect" },  /* auto */
  { 0x00556030, (funptr_t) &dk2::CWindowTest::createSurface, "CWindowTest::createSurface" },  /* auto */
  { 0x00556180, (funptr_t) &dk2::CWindowTest::sub_556180, "CWindowTest::sub_556180" },  /* auto */
  { 0x00556260, (funptr_t) &dk2::CWindowTest::sub_556260_ev1, "CWindowTest::sub_556260_ev1" },  /* auto */
  { 0x005565E0, (funptr_t) &dk2::CWindowTest::getSurface, "CWindowTest::getSurface" },  /* auto */
  { 0x005565F0, (funptr_t) &dk2::CWindowTest::recreate, "CWindowTest::recreate" },  /* auto */
  { 0x005567F0, (funptr_t) &dk2::CWindowTest::isNeedBlt, "CWindowTest::isNeedBlt" },  /* auto */
  { 0x00556870, (funptr_t) &dk2::CFileManager::constructor, "CFileManager::constructor" },  /* auto */
  { 0x005568C0, (funptr_t) &dk2::CFileManager::destructor, "CFileManager::destructor" },  /* auto */
  { 0x00556980, (funptr_t) &dk2::CFileManager::clearDirsList, "CFileManager::clearDirsList" },  /* auto */
  { 0x00556A20, (funptr_t) &dk2::CFileManager::sub_556A20, "CFileManager::sub_556A20" },  /* auto */
  { 0x00556B70, (funptr_t) &dk2::CFileManager::fun_556B70, "CFileManager::fun_556B70" },  /* auto */
  { 0x00556C90, (funptr_t) &dk2::CFileManager::addFileDir, "CFileManager::addFileDir" },  /* auto */
  { 0x00556D90, (funptr_t) &dk2::CFileManager::findFile, "CFileManager::findFile" },  /* auto */
  { 0x00559820, (funptr_t) &dk2::MyGame_f4C::fun_559820, "MyGame_f4C::fun_559820" },  /* auto */
  { 0x0055AF40, (funptr_t) &dk2::MyResources::constructor, "MyResources::constructor" },  /* auto */
  { 0x0055B120, (funptr_t) &dk2::MyResources::sub_55B120, "MyResources::sub_55B120" },  /* auto */
  { 0x0055B480, (funptr_t) &dk2::MyResources::sub_55B480, "MyResources::sub_55B480" },  /* auto */
  { 0x0055C020, (funptr_t) &dk2::MyResources::init_resources, "MyResources::init_resources" },  /* auto */
  { 0x0055C3C0, (funptr_t) &dk2::MyResources::resolveMovies, "MyResources::resolveMovies" },  /* auto */
  { 0x0055E5A0, (funptr_t) &dk2::MyResources_f2E38Obj::constructor, "MyResources_f2E38Obj::constructor" },  /* auto */
  { 0x0055E7D0, (funptr_t) &dk2::MyResources_f2E38Obj::load_sav_file, "MyResources_f2E38Obj::load_sav_file" },  /* auto */
  { 0x0055EA10, (funptr_t) &dk2::MyResources_f2E38Obj::sub_55EA10, "MyResources_f2E38Obj::sub_55EA10" },  /* auto */
  { 0x0055EAB0, (funptr_t) &dk2::MyResources_f2E38Obj::sub_55EAB0, "MyResources_f2E38Obj::sub_55EAB0" },  /* auto */
  { 0x0055EC20, (funptr_t) &dk2::MyKeyboard::constructor, "MyKeyboard::constructor" },  /* auto */
  { 0x0055EE50, (funptr_t) &dk2::MyKeyboard::sub_55EE50, "MyKeyboard::sub_55EE50" },  /* auto */
  { 0x0055F040, (funptr_t) &dk2::MyKeyboard::sub_55F040, "MyKeyboard::sub_55F040" },  /* auto */
  { 0x0055F6D0, (funptr_t) &dk2::MyKeyboard::sub_55F6D0, "MyKeyboard::sub_55F6D0" },  /* auto */
  { 0x005604C0, (funptr_t) &dk2::MyKeyboard::fillKeyMaps, "MyKeyboard::fillKeyMaps" },  /* auto */
  { 0x005609C0, (funptr_t) &dk2::MyKeyboard::getLayoutName, "MyKeyboard::getLayoutName" },  /* auto */
  { 0x00560D60, (funptr_t) &dk2::MyKeyboard::sub_560D60_playerLevelStatus, "MyKeyboard::sub_560D60_playerLevelStatus" },  /* auto */
  { 0x00560E30, (funptr_t) &dk2::MyKeyboard::sub_560E30_levelNumber, "MyKeyboard::sub_560E30_levelNumber" },  /* auto */
  { 0x00560EC0, (funptr_t) &dk2::MyKeyboard::sub_560EC0_mpdLevelNumber, "MyKeyboard::sub_560EC0_mpdLevelNumber" },  /* auto */
  { 0x00560F50, (funptr_t) &dk2::MyKeyboard::saveKeyTable, "MyKeyboard::saveKeyTable" },  /* auto */
  { 0x00561200, (funptr_t) &dk2::MyKeyboard::sub_561200, "MyKeyboard::sub_561200" },  /* auto */
  { 0x005614B0, (funptr_t) &dk2::MyKeyboard::sub_5614B0_secretLevels, "MyKeyboard::sub_5614B0_secretLevels" },  /* auto */
  { 0x00561540, (funptr_t) &dk2::MyKeyboard::sub_561540_secretLevelsCompleted, "MyKeyboard::sub_561540_secretLevelsCompleted" },  /* auto */
  { 0x00561A20, (funptr_t) &dk2::MyKeyboard::sub_561A20_levelAttempts, "MyKeyboard::sub_561A20_levelAttempts" },  /* auto */
  { 0x00561BF0, (funptr_t) &dk2::MyKeyboard::sub_561BF0_totalEvilRating, "MyKeyboard::sub_561BF0_totalEvilRating" },  /* auto */
  { 0x00561E40, (funptr_t) &dk2::MyKeyboard::sub_561E40, "MyKeyboard::sub_561E40" },  /* auto */
  { 0x00562960, (funptr_t) &dk2::MyResources_f29CB::constructor, "MyResources_f29CB::constructor" },  /* auto */
  { 0x005629C0, (funptr_t) &dk2::MyResources_f29CB::resolveValues, "MyResources_f29CB::resolveValues" },  /* auto */
  { 0x00562C30, (funptr_t) &dk2::MyResources_f29CB::setDefaults, "MyResources_f29CB::setDefaults" },  /* auto */
  { 0x00563170, (funptr_t) &dk2::MyResources_f29CB::loadFromSettings, "MyResources_f29CB::loadFromSettings" },  /* auto */
  { 0x00563490, (funptr_t) &dk2::MyResources_f29CB::setSpeechVolume, "MyResources_f29CB::setSpeechVolume" },  /* auto */
  { 0x00563520, (funptr_t) &dk2::MyResources_f29CB::setSoundEffectVolume, "MyResources_f29CB::setSoundEffectVolume" },  /* auto */
  { 0x005635B0, (funptr_t) &dk2::MyResources_f29CB::setMusicVolume, "MyResources_f29CB::setMusicVolume" },  /* auto */
  { 0x00563640, (funptr_t) &dk2::MyResources_f29CB::setMasterVolume, "MyResources_f29CB::setMasterVolume" },  /* auto */
  { 0x005636D0, (funptr_t) &dk2::MyResources_f29CB::setMasterBalance, "MyResources_f29CB::setMasterBalance" },  /* auto */
  { 0x00563750, (funptr_t) &dk2::MyResources_f29CB::setEnvironmentslEffects, "MyResources_f29CB::setEnvironmentslEffects" },  /* auto */
  { 0x005637E0, (funptr_t) &dk2::MyResources_f29CB::setSoundQuality, "MyResources_f29CB::setSoundQuality" },  /* auto */
  { 0x00563870, (funptr_t) &dk2::MyResources_f29CB::setHeadphones, "MyResources_f29CB::setHeadphones" },  /* auto */
  { 0x00563900, (funptr_t) &dk2::MyResources_f29CB::setFlipSpeakers, "MyResources_f29CB::setFlipSpeakers" },  /* auto */
  { 0x00563990, (funptr_t) &dk2::MyResources_f29CB::setQSound, "MyResources_f29CB::setQSound" },  /* auto */
  { 0x00563A20, (funptr_t) &dk2::MyResources_f29CB::setMusic, "MyResources_f29CB::setMusic" },  /* auto */
  { 0x00563AB0, (funptr_t) &dk2::MyResources_f29CB::setSpeech, "MyResources_f29CB::setSpeech" },  /* auto */
  { 0x00563B40, (funptr_t) &dk2::MyResources_f29CB::setSfx, "MyResources_f29CB::setSfx" },  /* auto */
  { 0x00563BD0, (funptr_t) &dk2::MyResources_f29CB::setNumberOfVoices, "MyResources_f29CB::setNumberOfVoices" },  /* auto */
  { 0x00563C50, (funptr_t) &dk2::MyVideoSettings::constructor, "MyVideoSettings::constructor" },  /* auto */
  { 0x00563DC0, (funptr_t) &dk2::MyVideoSettings::sub_563DC0, "MyVideoSettings::sub_563DC0" },  /* auto */
  { 0x00563FB0, (funptr_t) &dk2::MyVideoSettings::sub_563FB0, "MyVideoSettings::sub_563FB0" },  /* auto */
  { 0x00564B00, (funptr_t) &dk2::MyVideoSettings::sub_564B00, "MyVideoSettings::sub_564B00" },  /* auto */
  { 0x00565CF0, (funptr_t) &dk2::MyVideoSettings::set_spec, "MyVideoSettings::set_spec" },  /* auto */
  { 0x00565FD0, (funptr_t) &dk2::MyVideoSettings::sub_565FD0, "MyVideoSettings::sub_565FD0" },  /* auto */
  { 0x005661A0, (funptr_t) &dk2::MyVideoSettings::setSelected3dEngine, "MyVideoSettings::setSelected3dEngine" },  /* auto */
  { 0x005662A0, (funptr_t) &dk2::MyVideoSettings::sub_5662A0, "MyVideoSettings::sub_5662A0" },  /* auto */
  { 0x00566620, (funptr_t) &dk2::MyVideoSettings::set_texture_reduction_level, "MyVideoSettings::set_texture_reduction_level" },  /* auto */
  { 0x00566860, (funptr_t) &dk2::MyVideoSettings::set_bump_mapping_enabled, "MyVideoSettings::set_bump_mapping_enabled" },  /* auto */
  { 0x00566A70, (funptr_t) &dk2::MyVideoSettings::textIdToResolutionId, "MyVideoSettings::textIdToResolutionId" },  /* auto */
  { 0x00566B50, (funptr_t) &dk2::MyVideoSettings::sub_566B50, "MyVideoSettings::sub_566B50" },  /* auto */
  { 0x00566DA0, (funptr_t) &dk2::MyVideoSettings::sub_566DA0, "MyVideoSettings::sub_566DA0" },  /* auto */
  { 0x00566E40, (funptr_t) &dk2::MyVideoSettings::sub_566E40, "MyVideoSettings::sub_566E40" },  /* auto */
  { 0x00566EC0, (funptr_t) &dk2::MyVideoSettings::sub_566EC0, "MyVideoSettings::sub_566EC0" },  /* auto */
  { 0x00566F40, (funptr_t) &dk2::MyVideoSettings::sub_566F40, "MyVideoSettings::sub_566F40" },  /* auto */
  { 0x00567140, (funptr_t) &dk2::CSoundSystem::constructor, "CSoundSystem::constructor" },  /* auto */
  { 0x00567300, (funptr_t) &dk2::CSoundSystem::set_number_of_channels, "CSoundSystem::set_number_of_channels" },  /* auto */
  { 0x005677D0, (funptr_t) &dk2::CSoundSystem::fun_5677D0, "CSoundSystem::fun_5677D0" },  /* auto */
  { 0x00567810, (funptr_t) &dk2::CSoundSystem::fun_567810, "CSoundSystem::fun_567810" },  /* auto */
  { 0x0056F850, (funptr_t) &dk2::My_sub_56F850::constructor, "My_sub_56F850::constructor" },  /* auto */
  { 0x00576940, (funptr_t) &dk2::CEngine2DSprite::constructor, "CEngine2DSprite::constructor" },  /* auto */
  { 0x00576A10, (funptr_t) &dk2::CEngine2DSprite::addVert1CTriangle, "CEngine2DSprite::addVert1CTriangle" },  /* auto */
  { 0x00576E50, (funptr_t) &dk2::CEngine2DSprite::addVert18Triangle, "CEngine2DSprite::addVert18Triangle" },  /* auto */
  { 0x00577400, (funptr_t) &dk2::CEngine2DSprite::createTriangle34, "CEngine2DSprite::createTriangle34" },  /* auto */
  { 0x00577640, (funptr_t) &dk2::CEngine2DSprite::fun_577640, "CEngine2DSprite::fun_577640" },  /* auto */
  { 0x005776C0, (funptr_t) &dk2::CEngine2DRotatableSprite::fun_5776C0, "CEngine2DRotatableSprite::fun_5776C0" },  /* auto */
  { 0x00577960, (funptr_t) &dk2::CEngine2DStaticMesh::constructor, "CEngine2DStaticMesh::constructor" },  /* auto */
  { 0x00577A00, (funptr_t) &dk2::CEngine2DStaticMesh::fun_577A00, "CEngine2DStaticMesh::fun_577A00" },  /* auto */
  { 0x00577E60, (funptr_t) &dk2::CEngine2DAnimMesh::constructor, "CEngine2DAnimMesh::constructor" },  /* auto */
  { 0x00577F10, (funptr_t) &dk2::CEngine2DAnimMesh::fun_577F10, "CEngine2DAnimMesh::fun_577F10" },  /* auto */
  { 0x00578530, (funptr_t) &dk2::CEngineVirtualPerspective2DAnimMesh::constructor, "CEngineVirtualPerspective2DAnimMesh::constructor" },  /* auto */
  { 0x00578600, (funptr_t) &dk2::CEngineVirtualPerspective2DAnimMesh::fun_578600, "CEngineVirtualPerspective2DAnimMesh::fun_578600" },  /* auto */
  { 0x00578A80, (funptr_t) &dk2::CEngine2DMeshSurface::constructor, "CEngine2DMeshSurface::constructor" },  /* auto */
  { 0x00578C00, (funptr_t) &dk2::CEngine2DMeshSurface::fun_578C00, "CEngine2DMeshSurface::fun_578C00" },  /* auto */
  { 0x00579170, (funptr_t) &dk2::CEngine2DPrimitive::constructor, "CEngine2DPrimitive::constructor" },  /* auto */
  { 0x0057A1E0, (funptr_t) &dk2::CDirectIFFFile::sub_57A1E0, "CDirectIFFFile::sub_57A1E0" },  /* auto */
  { 0x0057A310, (funptr_t) &dk2::CDirectIFFFile::sub_57A310, "CDirectIFFFile::sub_57A310" },  /* auto */
  { 0x0057A3A0, (funptr_t) &dk2::CDirectIFFFile::writeIf2, "CDirectIFFFile::writeIf2" },  /* auto */
  { 0x0057A3C0, (funptr_t) &dk2::CDirectIFFFile::readInt, "CDirectIFFFile::readInt" },  /* auto */
  { 0x0057A3E0, (funptr_t) &dk2::CDirectIFFFile::readString, "CDirectIFFFile::readString" },  /* auto */
  { 0x0057A430, (funptr_t) &dk2::CDirectIFFFile::seekTo, "CDirectIFFFile::seekTo" },  /* auto */
  { 0x0057A450, (funptr_t) &dk2::CDirectIFFFile::constructor, "CDirectIFFFile::constructor" },  /* auto */
  { 0x0057A470, (funptr_t) &dk2::CDirectIFFFile::seek, "CDirectIFFFile::seek" },  /* auto */
  { 0x0057A560, (funptr_t) &dk2::CDirectIFFFile::open, "CDirectIFFFile::open" },  /* auto */
  { 0x0057A6F0, (funptr_t) &dk2::CDirectIFFFile::sub_57A6F0, "CDirectIFFFile::sub_57A6F0" },  /* auto */
  { 0x0057A7A0, (funptr_t) &dk2::CDirectIFFFile::readFile_57A7A0, "CDirectIFFFile::readFile_57A7A0" },  /* auto */
  { 0x0057A7D0, (funptr_t) &dk2::CDirectIFFFile::writeFile_57A7D0, "CDirectIFFFile::writeFile_57A7D0" },  /* auto */
  { 0x0057C2D0, (funptr_t) &dk2::MyDblNamedSurface::constructor, "MyDblNamedSurface::constructor" },  /* auto */
  { 0x0057C3B0, (funptr_t) &dk2::MyDblNamedSurface::fun_57C3B0, "MyDblNamedSurface::fun_57C3B0" },  /* auto */
  { 0x0057C420, (funptr_t) &dk2::MyScaledSurface::constructor, "MyScaledSurface::constructor" },  /* auto */
  { 0x0057C700, (funptr_t) &dk2::MyScaledSurface::resolve, "MyScaledSurface::resolve" },  /* auto */
  { 0x00581B80, (funptr_t) &dk2::MyScaledSurface::sub_581B80, "MyScaledSurface::sub_581B80" },  /* auto */
  { 0x0057CB70, (funptr_t) &dk2::MyEntryBuf_MyScaledSurface::resize, "MyEntryBuf_MyScaledSurface::resize" },  /* auto */
  { 0x0057F110, (funptr_t) &dk2::CEngineSprite::constructor2, "CEngineSprite::constructor2" },  /* auto */
  { 0x0057F1E0, (funptr_t) &dk2::CEngineSprite::constructor, "CEngineSprite::constructor" },  /* auto */
  { 0x0057F7E0, (funptr_t) &dk2::CEngineSprite::appendToSceneObject2EList, "CEngineSprite::appendToSceneObject2EList" },  /* auto */
  { 0x0057FAF0, (funptr_t) &dk2::CEngineQuadPlane::constructor, "CEngineQuadPlane::constructor" },  /* auto */
  { 0x0057FB80, (funptr_t) &dk2::CEngineQuadPlane::fun_57FB80, "CEngineQuadPlane::fun_57FB80" },  /* auto */
  { 0x005801E0, (funptr_t) &dk2::CEngineDynamicMesh::constructor2, "CEngineDynamicMesh::constructor2" },  /* auto */
  { 0x00580480, (funptr_t) &dk2::CEngineDynamicMesh::constructor, "CEngineDynamicMesh::constructor" },  /* auto */
  { 0x00581BE0, (funptr_t) &dk2::CEngineDynamicMesh::sub_581BE0, "CEngineDynamicMesh::sub_581BE0" },  /* auto */
  { 0x00582180, (funptr_t) &dk2::CEngineDynamicMesh::fun_582180, "CEngineDynamicMesh::fun_582180" },  /* auto */
  { 0x00582290, (funptr_t) &dk2::CEngineDynamicMesh::fun_582290, "CEngineDynamicMesh::fun_582290" },  /* auto */
  { 0x00582CE0, (funptr_t) &dk2::CEngineDynamicMesh::fun_582CE0, "CEngineDynamicMesh::fun_582CE0" },  /* auto */
  { 0x00580460, (funptr_t) &dk2::CEngineWorldPrimitive::constructor, "CEngineWorldPrimitive::constructor" },  /* auto */
  { 0x00583120, (funptr_t) &dk2::CEngineAnimMesh::constructor, "CEngineAnimMesh::constructor" },  /* auto */
  { 0x005836A0, (funptr_t) &dk2::CEngineAnimMesh::sub_5836A0, "CEngineAnimMesh::sub_5836A0" },  /* auto */
  { 0x00583CA0, (funptr_t) &dk2::CEngineAnimMesh::sub_583CA0, "CEngineAnimMesh::sub_583CA0" },  /* auto */
  { 0x00583DC0, (funptr_t) &dk2::CEngineAnimMesh::sub_583DC0, "CEngineAnimMesh::sub_583DC0" },  /* auto */
  { 0x005848B0, (funptr_t) &dk2::CEngineAnimMesh::fun_5848B0, "CEngineAnimMesh::fun_5848B0" },  /* auto */
  { 0x00585ED0, (funptr_t) &dk2::CEngineAnimMesh::sub_585ED0, "CEngineAnimMesh::sub_585ED0" },  /* auto */
  { 0x00585F90, (funptr_t) &dk2::CEngineStaticMesh::constructor, "CEngineStaticMesh::constructor" },  /* auto */
  { 0x00586150, (funptr_t) &dk2::CEngineStaticMesh::fun_586150, "CEngineStaticMesh::fun_586150" },  /* auto */
  { 0x00586190, (funptr_t) &dk2::CEngineStaticMesh::appendToSceneObject2EList, "CEngineStaticMesh::appendToSceneObject2EList" },  /* auto */
  { 0x00586BC0, (funptr_t) &dk2::CEngineStaticHeightField::constructor, "CEngineStaticHeightField::constructor" },  /* auto */
  { 0x00587010, (funptr_t) &dk2::CEngineStaticHeightField::fun_587010, "CEngineStaticHeightField::fun_587010" },  /* auto */
  { 0x005873A0, (funptr_t) &dk2::CEngineDynamicHeightField::constructor, "CEngineDynamicHeightField::constructor" },  /* auto */
  { 0x005875D0, (funptr_t) &dk2::CEngineDynamicHeightField::fun_5875D0, "CEngineDynamicHeightField::fun_5875D0" },  /* auto */
  { 0x00588190, (funptr_t) &dk2::CEngineUnlitProceduralMesh::constructor, "CEngineUnlitProceduralMesh::constructor" },  /* auto */
  { 0x005884F0, (funptr_t) &dk2::CEngineUnlitProceduralMesh::fun_5884F0, "CEngineUnlitProceduralMesh::fun_5884F0" },  /* auto */
  { 0x0058A2B0, (funptr_t) &dk2::MyEntryBuf_Triangle24::MyEntryBuf_Triangles24_resize, "MyEntryBuf_Triangle24::MyEntryBuf_Triangles24_resize" },  /* auto */
  { 0x0058A330, (funptr_t) &dk2::MyEntryBuf_Vertex18::resize, "MyEntryBuf_Vertex18::resize" },  /* auto */
  { 0x0058DD60, (funptr_t) &dk2::MyStringHashMap::constructor, "MyStringHashMap::constructor" },  /* auto */
  { 0x0058DD90, (funptr_t) &dk2::MyStringHashMap::cleanup, "MyStringHashMap::cleanup" },  /* auto */
  { 0x0058DE00, (funptr_t) &dk2::MyStringHashMap::put, "MyStringHashMap::put" },  /* auto */
  { 0x0058DF40, (funptr_t) &dk2::MyStringHashMap::getEntryIdx, "MyStringHashMap::getEntryIdx" },  /* auto */
  { 0x0058E000, (funptr_t) &dk2::MyEntryBuf_MyStringHashMap_entry::resize, "MyEntryBuf_MyStringHashMap_entry::resize" },  /* auto */
  { 0x0058F8E0, (funptr_t) &dk2::SceneObject30List::enlarge, "SceneObject30List::enlarge" },  /* auto */
  { 0x0058FAA0, (funptr_t) &dk2::MyTextures::constructor, "MyTextures::constructor" },  /* auto */
  { 0x00591070, (funptr_t) &dk2::MyTextures::loadCompressed, "MyTextures::loadCompressed" },  /* auto */
  { 0x00590260, (funptr_t) &dk2::MyCEngineSurfDesc::fun_590260, "MyCEngineSurfDesc::fun_590260" },  /* auto */
  { 0x00590360, (funptr_t) &dk2::MyCEngineSurfDesc::constructor, "MyCEngineSurfDesc::constructor" },  /* auto */
  { 0x00590450, (funptr_t) &dk2::CEngineSurfaceBase::paintSurf, "CEngineSurfaceBase::paintSurf" },  /* auto */
  { 0x00590520, (funptr_t) &dk2::CEngineSurfaceBase::fill, "CEngineSurfaceBase::fill" },  /* auto */
  { 0x00590610, (funptr_t) &dk2::CEngineSurfaceBase::scalar_destructor, "CEngineSurfaceBase::scalar_destructor" },  /* auto */
  { 0x00591BF0, (funptr_t) &dk2::CEngineSurfaceBase::constructor, "CEngineSurfaceBase::constructor" },  /* auto */
  { 0x00590580, (funptr_t) &dk2::CEngineSurface::constructor, "CEngineSurface::constructor" },  /* auto */
  { 0x00590630, (funptr_t) &dk2::CEngineSurface::getBufWithSize, "CEngineSurface::getBufWithSize" },  /* auto */
  { 0x00590670, (funptr_t) &dk2::CEngineSurface::destructor, "CEngineSurface::destructor" },  /* auto */
  { 0x00628BB0, (funptr_t) &dk2::CEngineSurface::getBuf, "CEngineSurface::getBuf" },  /* auto */
  { 0x005906C0, (funptr_t) &dk2::CEngineCompressedSurface::getBufWithSize, "CEngineCompressedSurface::getBufWithSize" },  /* auto */
  { 0x005906D0, (funptr_t) &dk2::CEngineCompressedSurface::scalar_destructor, "CEngineCompressedSurface::scalar_destructor" },  /* auto */
  { 0x005906F0, (funptr_t) &dk2::CEngineCompressedSurface::destructor, "CEngineCompressedSurface::destructor" },  /* auto */
  { 0x00590740, (funptr_t) &dk2::CEngineCompressedSurface::copySurf, "CEngineCompressedSurface::copySurf" },  /* auto */
  { 0x005907D0, (funptr_t) &dk2::CEngineCompressedSurface::paintSurf, "CEngineCompressedSurface::paintSurf" },  /* auto */
  { 0x00590880, (funptr_t) &dk2::CEngineDDSurface::constructor, "CEngineDDSurface::constructor" },  /* auto */
  { 0x00590AC0, (funptr_t) &dk2::CEngineDDSurface::lockBuf, "CEngineDDSurface::lockBuf" },  /* auto */
  { 0x00590B20, (funptr_t) &dk2::CEngineDDSurface::unlockBuf, "CEngineDDSurface::unlockBuf" },  /* auto */
  { 0x00590B40, (funptr_t) &dk2::MySurfaceWrapper::constructor, "MySurfaceWrapper::constructor" },  /* auto */
  { 0x00590B70, (funptr_t) &dk2::MySurfaceWrapper::sub_590B70, "MySurfaceWrapper::sub_590B70" },  /* auto */
  { 0x00590BC0, (funptr_t) &dk2::MySurfaceWrapper::withData, "MySurfaceWrapper::withData" },  /* auto */
  { 0x00590BF0, (funptr_t) &dk2::MyCESurfHandle::constructor, "MyCESurfHandle::constructor" },  /* auto */
  { 0x00590C30, (funptr_t) &dk2::MyCESurfHandle::fun_590C30, "MyCESurfHandle::fun_590C30" },  /* auto */
  { 0x00590DA0, (funptr_t) &dk2::MyCESurfHandle::createReduction, "MyCESurfHandle::createReduction" },  /* auto */
  { 0x00590EC0, (funptr_t) &dk2::MyCESurfHandle::resolveSurface, "MyCESurfHandle::resolveSurface" },  /* auto */
  { 0x005911E0, (funptr_t) &dk2::MyCESurfHandle::loadPrescaled, "MyCESurfHandle::loadPrescaled" },  /* auto */
  { 0x00591C20, (funptr_t) &dk2::MyCESurfHandle::CEngineSurface_create, "MyCESurfHandle::CEngineSurface_create" },  /* auto */
  { 0x00591CF0, (funptr_t) &dk2::MyCESurfHandle::setSurfaceHolder, "MyCESurfHandle::setSurfaceHolder" },  /* auto */
  { 0x005914E0, (funptr_t) &dk2::Obj792D48::convertCopyFrom, "Obj792D48::convertCopyFrom" },  /* auto */
  { 0x00591820, (funptr_t) &dk2::Obj792D48::createCEngineCompressedSurface, "Obj792D48::createCEngineCompressedSurface" },  /* auto */
  { 0x00591ED0, (funptr_t) &dk2::SurfaceHolder::calcWeight, "SurfaceHolder::calcWeight" },  /* auto */
  { 0x00592380, (funptr_t) &dk2::SurfaceHolder::draw_mgsr, "SurfaceHolder::draw_mgsr" },  /* auto */
  { 0x00591F90, (funptr_t) &dk2::SurfHashListItem::recursive_scalar_delete, "SurfHashListItem::recursive_scalar_delete" },  /* auto */
  { 0x00592890, (funptr_t) &dk2::SurfHashList::clear, "SurfHashList::clear" },  /* auto */
  { 0x00592DB0, (funptr_t) &dk2::SurfHashList::constructor, "SurfHashList::constructor" },  /* auto */
  { 0x005935C0, (funptr_t) &dk2::SurfHashList::markAndDeleteP1of4_recursive, "SurfHashList::markAndDeleteP1of4_recursive" },  /* auto */
  { 0x00594170, (funptr_t) &dk2::SurfHashList::putItem, "SurfHashList::putItem" },  /* auto */
  { 0x005941B0, (funptr_t) &dk2::SurfHashList::addSurfhAndPaint, "SurfHashList::addSurfhAndPaint" },  /* auto */
  { 0x00594790, (funptr_t) &dk2::SurfHashList::deleteItem, "SurfHashList::deleteItem" },  /* auto */
  { 0x005948D0, (funptr_t) &dk2::SurfHashList::_probablySort, "SurfHashList::_probablySort" },  /* auto */
  { 0x00592BD0, (funptr_t) &dk2::SurfHashList2::constructor, "SurfHashList2::constructor" },  /* auto */
  { 0x00593600, (funptr_t) &dk2::SurfHashList2::deleteHolders, "SurfHashList2::deleteHolders" },  /* auto */
  { 0x00593670, (funptr_t) &dk2::SurfHashList2::sub_593670, "SurfHashList2::sub_593670" },  /* auto */
  { 0x00593880, (funptr_t) &dk2::SurfHashList2::sub_593880, "SurfHashList2::sub_593880" },  /* auto */
  { 0x00593E10, (funptr_t) &dk2::SurfHashList2::calcHandleCountToFitHolder, "SurfHashList2::calcHandleCountToFitHolder" },  /* auto */
  { 0x00593E90, (funptr_t) &dk2::SurfHashList2::sub_593E90, "SurfHashList2::sub_593E90" },  /* auto */
  { 0x00593F50, (funptr_t) &dk2::SurfHashList2::_probablySort, "SurfHashList2::_probablySort" },  /* auto */
  { 0x00594BC0, (funptr_t) &dk2::SurfHashList2::deleteHolder, "SurfHashList2::deleteHolder" },  /* auto */
  { 0x00597400, (funptr_t) &dk2::FloatObjThing::constructor, "FloatObjThing::constructor" },  /* auto */
  { 0x00597450, (funptr_t) &dk2::FloatObjThing::init_retBuf3x256, "FloatObjThing::init_retBuf3x256" },  /* auto */
  { 0x00597540, (funptr_t) &dk2::FloatObjThing::probably_FloatObjThing_init4, "FloatObjThing::probably_FloatObjThing_init4" },  /* auto */
  { 0x005976D0, (funptr_t) &dk2::FloatObjThing::init5, "FloatObjThing::init5" },  /* auto */
  { 0x00597760, (funptr_t) &dk2::FloatObjThing::switch_float_math, "FloatObjThing::switch_float_math" },  /* auto */
  { 0x005982A0, (funptr_t) &dk2::CPCEngineInterface::constructor, "CPCEngineInterface::constructor" },  /* auto */
  { 0x005983C0, (funptr_t) &dk2::CPCEngineInterface::fun_5983C0, "CPCEngineInterface::fun_5983C0" },  /* auto */
  { 0x005986F0, (funptr_t) &dk2::CPCEngineInterface::fun_5986F0, "CPCEngineInterface::fun_5986F0" },  /* auto */
  { 0x00598880, (funptr_t) &dk2::CPCEngineInterface::fun_598880, "CPCEngineInterface::fun_598880" },  /* auto */
  { 0x0059A650, (funptr_t) &dk2::CPCEngineInterface::createMyScaledSurface, "CPCEngineInterface::createMyScaledSurface" },  /* auto */
  { 0x0059A6A0, (funptr_t) &dk2::CPCEngineInterface::fun_59A6A0, "CPCEngineInterface::fun_59A6A0" },  /* auto */
  { 0x0059AE10, (funptr_t) &dk2::CPCEngineInterface::sub_59AE10, "CPCEngineInterface::sub_59AE10" },  /* auto */
  { 0x0059D580, (funptr_t) &dk2::CPCEngineInterface::fun_59D580, "CPCEngineInterface::fun_59D580" },  /* auto */
  { 0x0059D5B0, (funptr_t) &dk2::CPCEngineInterface::setStr, "CPCEngineInterface::setStr" },  /* auto */
  { 0x0059D760, (funptr_t) &dk2::CPCEngineInterface::fun_59D760, "CPCEngineInterface::fun_59D760" },  /* auto */
  { 0x0059D7F0, (funptr_t) &dk2::CPCEngineInterface::drawScene, "CPCEngineInterface::drawScene" },  /* auto */
  { 0x0059D900, (funptr_t) &dk2::CPCEngineInterface::fun_59D900, "CPCEngineInterface::fun_59D900" },  /* auto */
  { 0x005B5250, (funptr_t) &dk2::MySurface::MySurface_empty, "MySurface::MySurface_empty" },  /* auto */
  { 0x005B5270, (funptr_t) &dk2::MySurface::constructor, "MySurface::constructor" },  /* auto */
  { 0x005B52C0, (funptr_t) &dk2::MySurface::allocSurfaceIfNot, "MySurface::allocSurfaceIfNot" },  /* auto */
  { 0x005B5330, (funptr_t) &dk2::MySurface::copyAreaTo, "MySurface::copyAreaTo" },  /* auto */
  { 0x005B65E0, (funptr_t) &dk2::Obj79DC68::j_Obj79DC68_destructor, "Obj79DC68::j_Obj79DC68_destructor" },  /* auto */
  { 0x005D2520, (funptr_t) &dk2::Obj79DC68::constructor, "Obj79DC68::constructor" },  /* auto */
  { 0x005D2530, (funptr_t) &dk2::Obj79DC68::sub_5D2530, "Obj79DC68::sub_5D2530" },  /* auto */
  { 0x005D2890, (funptr_t) &dk2::Obj79DC68::convertPixels, "Obj79DC68::convertPixels" },  /* auto */
  { 0x005D2920, (funptr_t) &dk2::Obj79DC68::destructor, "Obj79DC68::destructor" },  /* auto */
  { 0x005B6E40, (funptr_t) &dk2::DiscFileBase::constructor_empty, "DiscFileBase::constructor_empty" },  /* auto */
  { 0x005B6EA0, (funptr_t) &dk2::DiscFileBase::readBytes, "DiscFileBase::readBytes" },  /* auto */
  { 0x005B6EC0, (funptr_t) &dk2::DiscFileBase::writeBytes, "DiscFileBase::writeBytes" },  /* auto */
  { 0x005B6EE0, (funptr_t) &dk2::DiscFileBase::seek, "DiscFileBase::seek" },  /* auto */
  { 0x005B6F00, (funptr_t) &dk2::DiscFileBase::getOffs, "DiscFileBase::getOffs" },  /* auto */
  { 0x005B6F10, (funptr_t) &dk2::DiscFileBase::getStream, "DiscFileBase::getStream" },  /* auto */
  { 0x005B6F50, (funptr_t) &dk2::DiscFileBase::mapToBuf, "DiscFileBase::mapToBuf" },  /* auto */
  { 0x005B6F70, (funptr_t) &dk2::DiscFileBase::flush, "DiscFileBase::flush" },  /* auto */
  { 0x005B9F70, (funptr_t) &dk2::DiscFileBase::TbDiscFile_openStream, "DiscFileBase::TbDiscFile_openStream" },  /* auto */
  { 0x005D6850, (funptr_t) &dk2::DiscFileBase::DiscFileBaseEx_openStream, "DiscFileBase::DiscFileBaseEx_openStream" },  /* auto */
  { 0x005FDE70, (funptr_t) &dk2::DiscFileBase::getSize, "DiscFileBase::getSize" },  /* auto */
  { 0x005B6F20, (funptr_t) &dk2::TbDiscFile::DiskFileBase_pushStream, "TbDiscFile::DiskFileBase_pushStream" },  /* auto */
  { 0x005B7640, (funptr_t) &dk2::MySemaphore::set, "MySemaphore::set" },  /* auto */
  { 0x005B7670, (funptr_t) &dk2::MySemaphore::waitFor, "MySemaphore::waitFor" },  /* auto */
  { 0x005B76A0, (funptr_t) &dk2::MySemaphore::release, "MySemaphore::release" },  /* auto */
  { 0x005B80F0, (funptr_t) &dk2::MyDdSurfaceEx::fillDesc, "MyDdSurfaceEx::fillDesc" },  /* auto */
  { 0x005B8150, (funptr_t) &dk2::MyDdSurfaceEx::updateDesc, "MyDdSurfaceEx::updateDesc" },  /* auto */
  { 0x005B86F0, (funptr_t) &dk2::MyStr::malloc, "MyStr::malloc" },  /* auto */
  { 0x005B8730, (funptr_t) &dk2::MyStr::resize, "MyStr::resize" },  /* auto */
  { 0x005B8770, (funptr_t) &dk2::MyStr::copy_constructor, "MyStr::copy_constructor" },  /* auto */
  { 0x005B87E0, (funptr_t) &dk2::MyStr::constructor, "MyStr::constructor" },  /* auto */
  { 0x005B8880, (funptr_t) &dk2::MyStr::constructor_empty, "MyStr::constructor_empty" },  /* auto */
  { 0x005B88C0, (funptr_t) &dk2::MyStr::destructor, "MyStr::destructor" },  /* auto */
  { 0x005B88E0, (funptr_t) &dk2::MyStr::assignChar, "MyStr::assignChar" },  /* auto */
  { 0x005B8920, (funptr_t) &dk2::MyStr::assign, "MyStr::assign" },  /* auto */
  { 0x005B8970, (funptr_t) &dk2::MyStr::assignMyStr, "MyStr::assignMyStr" },  /* auto */
  { 0x005B89B0, (funptr_t) &dk2::MyStr::assignMySubStr_0, "MyStr::assignMySubStr_0" },  /* auto */
  { 0x005B8A00, (funptr_t) &dk2::MyStr::append, "MyStr::append" },  /* auto */
  { 0x005B8A40, (funptr_t) &dk2::MyStr::appendChar, "MyStr::appendChar" },  /* auto */
  { 0x005B8A70, (funptr_t) &dk2::MyStr::appendMySubStr, "MyStr::appendMySubStr" },  /* auto */
  { 0x005B9740, (funptr_t) &dk2::MyStr::scalar_destructor, "MyStr::scalar_destructor" },  /* auto */
  { 0x005D7C90, (funptr_t) &dk2::MyStr::resizeGetbuf, "MyStr::resizeGetbuf" },  /* auto */
  { 0x005D7CB0, (funptr_t) &dk2::MyStr::resize_0, "MyStr::resize_0" },  /* auto */
  { 0x005D7E80, (funptr_t) &dk2::MyStr::findSubstrOffs, "MyStr::findSubstrOffs" },  /* auto */
  { 0x005D7FE0, (funptr_t) &dk2::MyStr::getCharRIdx, "MyStr::getCharRIdx" },  /* auto */
  { 0x005D8050, (funptr_t) &dk2::MyStr::subStrTo, "MyStr::subStrTo" },  /* auto */
  { 0x005D8080, (funptr_t) &dk2::MyStr::subStrNFr, "MyStr::subStrNFr" },  /* auto */
  { 0x005D80C0, (funptr_t) &dk2::MyStr::subStrFr, "MyStr::subStrFr" },  /* auto */
  { 0x005D8100, (funptr_t) &dk2::MyStr::subStr, "MyStr::subStr" },  /* auto */
  { 0x005D91E0, (funptr_t) &dk2::MyStr::MyStrEx_scalar_destructor, "MyStr::MyStrEx_scalar_destructor" },  /* auto */
  { 0x00610E40, (funptr_t) &dk2::MyStr::MyStrEx_destructor, "MyStr::MyStrEx_destructor" },  /* auto */
  { 0x00614960, (funptr_t) &dk2::MyStr::sub_614960, "MyStr::sub_614960" },  /* auto */
  { 0x005B9840, (funptr_t) &dk2::MyLList_WinEventCb::constructor, "MyLList_WinEventCb::constructor" },  /* auto */
  { 0x005B9860, (funptr_t) &dk2::MyLList_WinEventCb::destructor, "MyLList_WinEventCb::destructor" },  /* auto */
  { 0x005B98A0, (funptr_t) &dk2::MyLList_WinEventCb::scalar_destructor, "MyLList_WinEventCb::scalar_destructor" },  /* auto */
  { 0x005B9C80, (funptr_t) &dk2::MyLList_WinEventCb::MyLList_scalar_destructor, "MyLList_WinEventCb::MyLList_scalar_destructor" },  /* auto */
  { 0x005B9930, (funptr_t) &dk2::WinEventHandlers::callList, "WinEventHandlers::callList" },  /* auto */
  { 0x005B99E0, (funptr_t) &dk2::WinEventHandlers::addHandler, "WinEventHandlers::addHandler" },  /* auto */
  { 0x005B9AB0, (funptr_t) &dk2::WinEventHandlers::removeHandler, "WinEventHandlers::removeHandler" },  /* auto */
  { 0x005B9BD0, (funptr_t) &dk2::WinEventHandlers::clear, "WinEventHandlers::clear" },  /* auto */
  { 0x005B9CD0, (funptr_t) &dk2::FileStorageBase::constructor, "FileStorageBase::constructor" },  /* auto */
  { 0x005B9D00, (funptr_t) &dk2::FileStorageBase::copy_constructor, "FileStorageBase::copy_constructor" },  /* auto */
  { 0x005B9D30, (funptr_t) &dk2::FileStorageBase::destructor, "FileStorageBase::destructor" },  /* auto */
  { 0x005B9D40, (funptr_t) &dk2::FileStorageBase::releaseContent, "FileStorageBase::releaseContent" },  /* auto */
  { 0x005B9D90, (funptr_t) &dk2::FileStorageBase::formatFilePath, "FileStorageBase::formatFilePath" },  /* auto */
  { 0x005B9DD0, (funptr_t) &dk2::FileStorageBase::firstFile, "FileStorageBase::firstFile" },  /* auto */
  { 0x005B9E70, (funptr_t) &dk2::FileStorageBase::TbWadFileStorage_fun_5B9E70, "FileStorageBase::TbWadFileStorage_fun_5B9E70" },  /* auto */
  { 0x005B9E80, (funptr_t) &dk2::FileStorageBase::pushDirectory, "FileStorageBase::pushDirectory" },  /* auto */
  { 0x005BAAD0, (funptr_t) &dk2::FileStorageBase::TbWadFileStorage_readAndParse, "FileStorageBase::TbWadFileStorage_readAndParse" },  /* auto */
  { 0x005B9E30, (funptr_t) &dk2::TbDiscFileStorage::openInputStream, "TbDiscFileStorage::openInputStream" },  /* auto */
  { 0x005BABA0, (funptr_t) &dk2::TbDiscFileStorage::openDirectory, "TbDiscFileStorage::openDirectory" },  /* auto */
  { 0x0060F7B0, (funptr_t) &dk2::TbDiscFileStorage::sub_60F7B0, "TbDiscFileStorage::sub_60F7B0" },  /* auto */
  { 0x005BAE70, (funptr_t) &dk2::MyMutex::constructor, "MyMutex::constructor" },  /* auto */
  { 0x005BAEB0, (funptr_t) &dk2::MyMutex::destroy, "MyMutex::destroy" },  /* auto */
  { 0x005BAF10, (funptr_t) &dk2::Obj6723B8::Obj6723A0_destructor, "Obj6723B8::Obj6723A0_destructor" },  /* auto */
  { 0x005D9920, (funptr_t) &dk2::Obj6723B8::Obj6723A0_getAabb, "Obj6723B8::Obj6723A0_getAabb" },  /* auto */
  { 0x005BAF60, (funptr_t) &dk2::MyInputManagerCb::destructor, "MyInputManagerCb::destructor" },  /* auto */
  { 0x005BB020, (funptr_t) &dk2::MyInputManagerCb::setStaticListenersAndHandleDxActions, "MyInputManagerCb::setStaticListenersAndHandleDxActions" },  /* auto */
  { 0x005BB0A0, (funptr_t) &dk2::MyInputManagerCb::initInputs, "MyInputManagerCb::initInputs" },  /* auto */
  { 0x005BB1A0, (funptr_t) &dk2::MyInputManagerCb::windowMsgW, "MyInputManagerCb::windowMsgW" },  /* auto */
  { 0x005BB1C0, (funptr_t) &dk2::MyInputManagerCb::initMouse, "MyInputManagerCb::initMouse" },  /* auto */
  { 0x005BB220, (funptr_t) &dk2::MyInputManagerCb::initKeyInputs, "MyInputManagerCb::initKeyInputs" },  /* auto */
  { 0x005BB280, (funptr_t) &dk2::MyInputManagerCb::MyInputManager_getKeyState, "MyInputManagerCb::MyInputManager_getKeyState" },  /* auto */
  { 0x005BB2A0, (funptr_t) &dk2::MyInputManagerCb::sub_5BB2A0, "MyInputManagerCb::sub_5BB2A0" },  /* auto */
  { 0x005BB2F0, (funptr_t) &dk2::MyInputManagerCb::resolveChildCb, "MyInputManagerCb::resolveChildCb" },  /* auto */
  { 0x005BB480, (funptr_t) &dk2::MyInputManagerCb::popDxAction, "MyInputManagerCb::popDxAction" },  /* auto */
  { 0x005BB500, (funptr_t) &dk2::MyInputManagerCb::sub_5BB500, "MyInputManagerCb::sub_5BB500" },  /* auto */
  { 0x005BB540, (funptr_t) &dk2::MyInputManagerCb::sub_5BB540, "MyInputManagerCb::sub_5BB540" },  /* auto */
  { 0x005BB570, (funptr_t) &dk2::MyInputManagerCb::setEnabled, "MyInputManagerCb::setEnabled" },  /* auto */
  { 0x005BBEC0, (funptr_t) &dk2::MyInputManagerCb::MyDxInputManagerCb_destructor, "MyInputManagerCb::MyDxInputManagerCb_destructor" },  /* auto */
  { 0x005BC0F0, (funptr_t) &dk2::MyInputManagerCb::MyDxInputManagerCb_releaseMouse, "MyInputManagerCb::MyDxInputManagerCb_releaseMouse" },  /* auto */
  { 0x005BC130, (funptr_t) &dk2::MyInputManagerCb::MyDxInputManagerCb_releaseKeyboard, "MyInputManagerCb::MyDxInputManagerCb_releaseKeyboard" },  /* auto */
  { 0x005BC270, (funptr_t) &dk2::MyInputManagerCb::updateMouse, "MyInputManagerCb::updateMouse" },  /* auto */
  { 0x005BC460, (funptr_t) &dk2::MyInputManagerCb::setMousePos, "MyInputManagerCb::setMousePos" },  /* auto */
  { 0x005BB420, (funptr_t) &dk2::MyCallback::scalar_destructor, "MyCallback::scalar_destructor" },  /* auto */
  { 0x005BB660, (funptr_t) &dk2::MyComEx::fun3, "MyComEx::fun3" },  /* auto */
  { 0x005BB730, (funptr_t) &dk2::MyComEx::fun4, "MyComEx::fun4" },  /* auto */
  { 0x005BB760, (funptr_t) &dk2::MyComEx::fun2, "MyComEx::fun2" },  /* auto */
  { 0x005BB790, (funptr_t) &dk2::MyComEx::deleting_destructor, "MyComEx::deleting_destructor" },  /* auto */
  { 0x005BB7B0, (funptr_t) &dk2::MyComEx::destructor, "MyComEx::destructor" },  /* auto */
  { 0x005DA2D0, (funptr_t) &dk2::MyComEx::setChild, "MyComEx::setChild" },  /* auto */
  { 0x005BB6B0, (funptr_t) &dk2::MyInputListenersHolder::destructor, "MyInputListenersHolder::destructor" },  /* auto */
  { 0x005DC920, (funptr_t) &dk2::MyInputListenersHolder::fun4, "MyInputListenersHolder::fun4" },  /* auto */
  { 0x005DC9E0, (funptr_t) &dk2::MyInputListenersHolder::fun2, "MyInputListenersHolder::fun2" },  /* auto */
  { 0x005BB710, (funptr_t) &dk2::MySharedObj::deleting_destructor, "MySharedObj::deleting_destructor" },  /* auto */
  { 0x005DCA30, (funptr_t) &dk2::MySharedObj::constructor, "MySharedObj::constructor" },  /* auto */
  { 0x00616700, (funptr_t) &dk2::MySharedObj::sub_616700, "MySharedObj::sub_616700" },  /* auto */
  { 0x00628980, (funptr_t) &dk2::MySharedObj::sub_628980, "MySharedObj::sub_628980" },  /* auto */
  { 0x00628BD0, (funptr_t) &dk2::MySharedObj::sub_628BD0, "MySharedObj::sub_628BD0" },  /* auto */
  { 0x00628E40, (funptr_t) &dk2::MySharedObj::sub_628E40, "MySharedObj::sub_628E40" },  /* auto */
  { 0x0062C0F0, (funptr_t) &dk2::MySharedObj::sub_62C0F0, "MySharedObj::sub_62C0F0" },  /* auto */
  { 0x0062FC00, (funptr_t) &dk2::MySharedObj::addRef, "MySharedObj::addRef" },  /* auto */
  { 0x0062FC10, (funptr_t) &dk2::MySharedObj::release, "MySharedObj::release" },  /* auto */
  { 0x005BBA00, (funptr_t) &dk2::WndMsgDxAction::applyToState, "WndMsgDxAction::applyToState" },  /* auto */
  { 0x005BBB70, (funptr_t) &dk2::WndMsgDxActionList::destructor, "WndMsgDxActionList::destructor" },  /* auto */
  { 0x005BBC20, (funptr_t) &dk2::PtrArrList::constructor, "PtrArrList::constructor" },  /* auto */
  { 0x005DB210, (funptr_t) &dk2::PtrArrList::insertArray, "PtrArrList::insertArray" },  /* auto */
  { 0x005BBD10, (funptr_t) &dk2::MyCollectDxAction::destructor, "MyCollectDxAction::destructor" },  /* auto */
  { 0x005DCAE0, (funptr_t) &dk2::MyCollectDxAction::fun4, "MyCollectDxAction::fun4" },  /* auto */
  { 0x005DCB20, (funptr_t) &dk2::MyCollectDxAction::fun2, "MyCollectDxAction::fun2" },  /* auto */
  { 0x005BBD80, (funptr_t) &dk2::MyLoopLList_DxAction::constructor, "MyLoopLList_DxAction::constructor" },  /* auto */
  { 0x005BBDB0, (funptr_t) &dk2::MyLoopLList_DxAction::addFirst, "MyLoopLList_DxAction::addFirst" },  /* auto */
  { 0x005DDD80, (funptr_t) &dk2::MyLoopLList_DxAction::insertAfter, "MyLoopLList_DxAction::insertAfter" },  /* auto */
  { 0x00611210, (funptr_t) &dk2::MyLoopLList_DxAction::lastEntry, "MyLoopLList_DxAction::lastEntry" },  /* auto */
  { 0x005BBE00, (funptr_t) &dk2::MyLoopLList_DxAction_entry::getPrev, "MyLoopLList_DxAction_entry::getPrev" },  /* auto */
  { 0x005DB440, (funptr_t) &dk2::MyLoopLList_DxAction_entry::getNext, "MyLoopLList_DxAction_entry::getNext" },  /* auto */
  { 0x005BBE20, (funptr_t) &dk2::MyDxInputManagerCb::constructor, "MyDxInputManagerCb::constructor" },  /* auto */
  { 0x005BBF90, (funptr_t) &dk2::MyDxInputManagerCb::initInputs, "MyDxInputManagerCb::initInputs" },  /* auto */
  { 0x005BC060, (funptr_t) &dk2::MyDxInputManagerCb::initMouse, "MyDxInputManagerCb::initMouse" },  /* auto */
  { 0x005BC170, (funptr_t) &dk2::MyDxInputManagerCb::initKeyboard, "MyDxInputManagerCb::initKeyboard" },  /* auto */
  { 0x005BC210, (funptr_t) &dk2::MyDxInputManagerCb::onWindowActivated, "MyDxInputManagerCb::onWindowActivated" },  /* auto */
  { 0x005BC280, (funptr_t) &dk2::MyDxInputManagerCb::call, "MyDxInputManagerCb::call" },  /* auto */
  { 0x005BC3A0, (funptr_t) &dk2::MyDxInputManagerCb::updateCoopLevelAndSignal, "MyDxInputManagerCb::updateCoopLevelAndSignal" },  /* auto */
  { 0x005D71E0, (funptr_t) &dk2::MyInputStream::constructor, "MyInputStream::constructor" },  /* auto */
  { 0x005D7220, (funptr_t) &dk2::MyInputStream::destructor, "MyInputStream::destructor" },  /* auto */
  { 0x005D7230, (funptr_t) &dk2::MyInputStream::InputStream_addRef, "MyInputStream::InputStream_addRef" },  /* auto */
  { 0x005D7240, (funptr_t) &dk2::MyInputStream::release, "MyInputStream::release" },  /* auto */
  { 0x005D7290, (funptr_t) &dk2::MyInputStream::wrapStream, "MyInputStream::wrapStream" },  /* auto */
  { 0x005D72B0, (funptr_t) &dk2::MyInputStream::mapToBuf_redirect, "MyInputStream::mapToBuf_redirect" },  /* auto */
  { 0x005D72D0, (funptr_t) &dk2::MyInputStream::unmap_redirect, "MyInputStream::unmap_redirect" },  /* auto */
  { 0x005D72E0, (funptr_t) &dk2::MyInputStream::getSemaphore_redirect, "MyInputStream::getSemaphore_redirect" },  /* auto */
  { 0x005D72F0, (funptr_t) &dk2::MyInputStream::flush_stub, "MyInputStream::flush_stub" },  /* auto */
  { 0x005FDE80, (funptr_t) &dk2::MyInputStream::sub_5FDE80, "MyInputStream::sub_5FDE80" },  /* auto */
  { 0x005FF9B0, (funptr_t) &dk2::MyInputStream::sub_5FF9B0, "MyInputStream::sub_5FF9B0" },  /* auto */
  { 0x005FFAD0, (funptr_t) &dk2::MyInputStream::sub_5FFAD0, "MyInputStream::sub_5FFAD0" },  /* auto */
  { 0x005FFC80, (funptr_t) &dk2::MyInputStream::sub_5FFC80, "MyInputStream::sub_5FFC80" },  /* auto */
  { 0x006031A0, (funptr_t) &dk2::MyInputStream::MyCachedOffsStream_getSize_redirect, "MyInputStream::MyCachedOffsStream_getSize_redirect" },  /* auto */
  { 0x005D7D30, (funptr_t) &dk2::MyLocalStr::equalTo, "MyLocalStr::equalTo" },  /* auto */
  { 0x005D7F60, (funptr_t) &dk2::MyLocalStr::charPos, "MyLocalStr::charPos" },  /* auto */
  { 0x005FE000, (funptr_t) &dk2::MyLocalStr::constructor, "MyLocalStr::constructor" },  /* auto */
  { 0x005FE0C0, (funptr_t) &dk2::MyLocalStr::assignChar, "MyLocalStr::assignChar" },  /* auto */
  { 0x005FE100, (funptr_t) &dk2::MyLocalStr::assign, "MyLocalStr::assign" },  /* auto */
  { 0x005FE150, (funptr_t) &dk2::MyLocalStr::assignMyStr, "MyLocalStr::assignMyStr" },  /* auto */
  { 0x005FE180, (funptr_t) &dk2::MyLocalStr::append, "MyLocalStr::append" },  /* auto */
  { 0x005FE1C0, (funptr_t) &dk2::MyLocalStr::appendChar, "MyLocalStr::appendChar" },  /* auto */
  { 0x005FE200, (funptr_t) &dk2::MyLocalStr::appendLocalStr, "MyLocalStr::appendLocalStr" },  /* auto */
  { 0x005D7D90, (funptr_t) &dk2::MySubStr::isNotStartsFromChar, "MySubStr::isNotStartsFromChar" },  /* auto */
  { 0x005D8850, (funptr_t) &dk2::MySubStr::MyWadDirectory_sub_5D8850, "MySubStr::MyWadDirectory_sub_5D8850" },  /* auto */
  { 0x005D8150, (funptr_t) &dk2::MyDirectory::constructor, "MyDirectory::constructor" },  /* auto */
  { 0x005D81D0, (funptr_t) &dk2::MyDirectory::destructor, "MyDirectory::destructor" },  /* auto */
  { 0x005D8220, (funptr_t) &dk2::MyDirectory::addRef, "MyDirectory::addRef" },  /* auto */
  { 0x005D8230, (funptr_t) &dk2::MyDirectory::release, "MyDirectory::release" },  /* auto */
  { 0x005D8280, (funptr_t) &dk2::MyDirectory::wrapDirectory, "MyDirectory::wrapDirectory" },  /* auto */
  { 0x005D82A0, (funptr_t) &dk2::MyDirectory::sub_5D82A0, "MyDirectory::sub_5D82A0" },  /* auto */
  { 0x005D82D0, (funptr_t) &dk2::MyDirectory::formatFilePath, "MyDirectory::formatFilePath" },  /* auto */
  { 0x005D8370, (funptr_t) &dk2::MyWadDirectory::constructor, "MyWadDirectory::constructor" },  /* auto */
  { 0x005D8510, (funptr_t) &dk2::MyWadDirectory::clearData, "MyWadDirectory::clearData" },  /* auto */
  { 0x005D8560, (funptr_t) &dk2::MyWadDirectory::readAndParse, "MyWadDirectory::readAndParse" },  /* auto */
  { 0x005D9200, (funptr_t) &dk2::MyDiskDirectory::constructor, "MyDiskDirectory::constructor" },  /* auto */
  { 0x005D9220, (funptr_t) &dk2::MyDiskDirectory::deleting_destructor, "MyDiskDirectory::deleting_destructor" },  /* auto */
  { 0x005D9240, (funptr_t) &dk2::MyDiskDirectory::destructor, "MyDiskDirectory::destructor" },  /* auto */
  { 0x005D9290, (funptr_t) &dk2::MyDiskDirectory::sub_5D9290, "MyDiskDirectory::sub_5D9290" },  /* auto */
  { 0x005D93E0, (funptr_t) &dk2::MyDiskDirectory::sub_5D93E0, "MyDiskDirectory::sub_5D93E0" },  /* auto */
  { 0x005D9450, (funptr_t) &dk2::MyDiskDirectory::close, "MyDiskDirectory::close" },  /* auto */
  { 0x005D94D0, (funptr_t) &dk2::MyDiskDirectory::createFileStream, "MyDiskDirectory::createFileStream" },  /* auto */
  { 0x005D9620, (funptr_t) &dk2::MyDiskDirectory::setPath, "MyDiskDirectory::setPath" },  /* auto */
  { 0x005D96C0, (funptr_t) &dk2::MyDiskDirectory::sub_5D96C0, "MyDiskDirectory::sub_5D96C0" },  /* auto */
  { 0x005D9740, (funptr_t) &dk2::MyDiskDirectory::sub_5D9740, "MyDiskDirectory::sub_5D9740" },  /* auto */
  { 0x005D97C0, (funptr_t) &dk2::MyDiskDirectory::sub_5D97C0, "MyDiskDirectory::sub_5D97C0" },  /* auto */
  { 0x005D9860, (funptr_t) &dk2::MyDiskDirectory::sub_5D9860, "MyDiskDirectory::sub_5D9860" },  /* auto */
  { 0x005D9990, (funptr_t) &dk2::DxActionQueue::constructor, "DxActionQueue::constructor" },  /* auto */
  { 0x005D9A90, (funptr_t) &dk2::DxActionQueue::getItemsCount, "DxActionQueue::getItemsCount" },  /* auto */
  { 0x005D9AA0, (funptr_t) &dk2::DxActionQueue::deleting_destructor, "DxActionQueue::deleting_destructor" },  /* auto */
  { 0x005D9AC0, (funptr_t) &dk2::DxActionQueue::destructor, "DxActionQueue::destructor" },  /* auto */
  { 0x005D9E20, (funptr_t) &dk2::DxActionQueue::fun24, "DxActionQueue::fun24" },  /* auto */
  { 0x005D9E30, (funptr_t) &dk2::DxActionQueue::addItem, "DxActionQueue::addItem" },  /* auto */
  { 0x005D9FE0, (funptr_t) &dk2::DxActionQueue::handleItem, "DxActionQueue::handleItem" },  /* auto */
  { 0x005DA0E0, (funptr_t) &dk2::DxActionQueue::lock, "DxActionQueue::lock" },  /* auto */
  { 0x005DA140, (funptr_t) &dk2::DxActionQueue::unlock, "DxActionQueue::unlock" },  /* auto */
  { 0x005D9A20, (funptr_t) &dk2::LockBase::destructor, "LockBase::destructor" },  /* auto */
  { 0x005DA360, (funptr_t) &dk2::AsyncThing::destructor, "AsyncThing::destructor" },  /* auto */
  { 0x005DA3F0, (funptr_t) &dk2::AsyncThing::sub_5DA3F0, "AsyncThing::sub_5DA3F0" },  /* auto */
  { 0x005DA460, (funptr_t) &dk2::AsyncThing::thread_proc_entry, "AsyncThing::thread_proc_entry" },  /* auto */
  { 0x005DA580, (funptr_t) &dk2::AsyncThing::startThread, "AsyncThing::startThread" },  /* auto */
  { 0x005DA5F0, (funptr_t) &dk2::AsyncThing::join, "AsyncThing::join" },  /* auto */
  { 0x005DA660, (funptr_t) &dk2::AsyncThing::prepareAndStartThread, "AsyncThing::prepareAndStartThread" },  /* auto */
  { 0x005DA6B0, (funptr_t) &dk2::AsyncThing::stop, "AsyncThing::stop" },  /* auto */
  { 0x005DA6D0, (funptr_t) &dk2::AsyncThing::create_eventPair, "AsyncThing::create_eventPair" },  /* auto */
  { 0x005DA760, (funptr_t) &dk2::AsyncThing::fun_5DA760, "AsyncThing::fun_5DA760" },  /* auto */
  { 0x005DA7C0, (funptr_t) &dk2::AsyncThing::signalAndWait, "AsyncThing::signalAndWait" },  /* auto */
  { 0x005DA830, (funptr_t) &dk2::AsyncThing::setObjAndSignal, "AsyncThing::setObjAndSignal" },  /* auto */
  { 0x005DA850, (funptr_t) &dk2::AsyncThing::setChildAndSignal, "AsyncThing::setChildAndSignal" },  /* auto */
  { 0x005DA870, (funptr_t) &dk2::AsyncThing::sub_5DA870, "AsyncThing::sub_5DA870" },  /* auto */
  { 0x005DA8E0, (funptr_t) &dk2::AsyncThing::sub_5DA8E0, "AsyncThing::sub_5DA8E0" },  /* auto */
  { 0x005DE170, (funptr_t) &dk2::AsyncThing::__MyDirectSysKeyboard_destructor, "AsyncThing::__MyDirectSysKeyboard_destructor" },  /* auto */
  { 0x005DAE80, (funptr_t) &dk2::MySignalBase::constructor, "MySignalBase::constructor" },  /* auto */
  { 0x005DAEC0, (funptr_t) &dk2::MySignalBase::destructor, "MySignalBase::destructor" },  /* auto */
  { 0x005DAF20, (funptr_t) &dk2::MySignalBase::recreateEvent, "MySignalBase::recreateEvent" },  /* auto */
  { 0x005DAF60, (funptr_t) &dk2::MySignalBase::closeEvent, "MySignalBase::closeEvent" },  /* auto */
  { 0x005DAF80, (funptr_t) &dk2::MySignalBase::recreateEvent_0, "MySignalBase::recreateEvent_0" },  /* auto */
  { 0x005DAFB0, (funptr_t) &dk2::MySignalBase::setControlKeysUpdater, "MySignalBase::setControlKeysUpdater" },  /* auto */
  { 0x005DAFE0, (funptr_t) &dk2::MyWindowMsgs::windowMsgWEx, "MyWindowMsgs::windowMsgWEx" },  /* auto */
  { 0x005DB110, (funptr_t) &dk2::MyWindowMsgs::windowMsgW, "MyWindowMsgs::windowMsgW" },  /* auto */
  { 0x005DB130, (funptr_t) &dk2::MyWindowMsgs::sub_5DB130, "MyWindowMsgs::sub_5DB130" },  /* auto */
  { 0x005DB1F0, (funptr_t) &dk2::MyWindowMsgs::recreateEvent, "MyWindowMsgs::recreateEvent" },  /* auto */
  { 0x005DB450, (funptr_t) &dk2::MyDxInputState::constructor, "MyDxInputState::constructor" },  /* auto */
  { 0x005DB510, (funptr_t) &dk2::MyDxInputState::exception_destructor, "MyDxInputState::exception_destructor" },  /* auto */
  { 0x005DB560, (funptr_t) &dk2::MyDxInputState::destructor, "MyDxInputState::destructor" },  /* auto */
  { 0x005DB600, (funptr_t) &dk2::MyDxInputState::fun4_updateRgbMouse, "MyDxInputState::fun4_updateRgbMouse" },  /* auto */
  { 0x005DB650, (funptr_t) &dk2::MyDxInputState::setDxKeyboard, "MyDxInputState::setDxKeyboard" },  /* auto */
  { 0x005DB6A0, (funptr_t) &dk2::MyDxInputState::setDxMouse, "MyDxInputState::setDxMouse" },  /* auto */
  { 0x005DB6F0, (funptr_t) &dk2::MyDxInputState::updateKeysState, "MyDxInputState::updateKeysState" },  /* auto */
  { 0x005DB7C0, (funptr_t) &dk2::Obj672844::constructor, "Obj672844::constructor" },  /* auto */
  { 0x005DB870, (funptr_t) &dk2::Obj672844::clearSurfsAndJoin, "Obj672844::clearSurfsAndJoin" },  /* auto */
  { 0x005DB890, (funptr_t) &dk2::Obj672844::joinThread, "Obj672844::joinThread" },  /* auto */
  { 0x005DB8E0, (funptr_t) &dk2::Obj672844::drawCursor, "Obj672844::drawCursor" },  /* auto */
  { 0x005DB940, (funptr_t) &dk2::Obj672844::waitForSema, "Obj672844::waitForSema" },  /* auto */
  { 0x005DBA40, (funptr_t) &dk2::Obj672844::initAndUpdateAabb, "Obj672844::initAndUpdateAabb" },  /* auto */
  { 0x005DBAA0, (funptr_t) &dk2::Obj672844::sub_5DBAA0, "Obj672844::sub_5DBAA0" },  /* auto */
  { 0x005DBAC0, (funptr_t) &dk2::Obj672844::sub_5DBAC0, "Obj672844::sub_5DBAC0" },  /* auto */
  { 0x005DBB10, (funptr_t) &dk2::Obj672844::updateCursor, "Obj672844::updateCursor" },  /* auto */
  { 0x005DBB60, (funptr_t) &dk2::Obj672844::sub_5DBB60, "Obj672844::sub_5DBB60" },  /* auto */
  { 0x005DBBB0, (funptr_t) &dk2::Obj672844::sub_5DBBB0, "Obj672844::sub_5DBBB0" },  /* auto */
  { 0x005DBBE0, (funptr_t) &dk2::Obj672844::updateAabb, "Obj672844::updateAabb" },  /* auto */
  { 0x005DBC90, (funptr_t) &dk2::MyCb6723D0::registerCb, "MyCb6723D0::registerCb" },  /* auto */
  { 0x005DBCD0, (funptr_t) &dk2::MyCb6723D0::call, "MyCb6723D0::call" },  /* auto */
  { 0x005DBD60, (funptr_t) &dk2::MyCbHandle::destructor, "MyCbHandle::destructor" },  /* auto */
  { 0x005DBD70, (funptr_t) &dk2::MyCbHandle::add_MyCallback, "MyCbHandle::add_MyCallback" },  /* auto */
  { 0x005DBDC0, (funptr_t) &dk2::MyCbHandle::release_MyCallback, "MyCbHandle::release_MyCallback" },  /* auto */
  { 0x005DBE60, (funptr_t) &dk2::CursorDrawer::constructor, "CursorDrawer::constructor" },  /* auto */
  { 0x005DBF80, (funptr_t) &dk2::CursorDrawer::updateCursorAndDraw, "CursorDrawer::updateCursorAndDraw" },  /* auto */
  { 0x005DC000, (funptr_t) &dk2::CursorDrawer::resetAndReleaseCursorSurfaces, "CursorDrawer::resetAndReleaseCursorSurfaces" },  /* auto */
  { 0x005DC010, (funptr_t) &dk2::CursorDrawer::recreateCursorSurfaces, "CursorDrawer::recreateCursorSurfaces" },  /* auto */
  { 0x005DC0B0, (funptr_t) &dk2::CursorDrawer::nextFrame, "CursorDrawer::nextFrame" },  /* auto */
  { 0x005DC0F0, (funptr_t) &dk2::CursorDrawer::releaseCursorSurfaces, "CursorDrawer::releaseCursorSurfaces" },  /* auto */
  { 0x005DC120, (funptr_t) &dk2::CursorDrawer::setCursorImage, "CursorDrawer::setCursorImage" },  /* auto */
  { 0x005DC310, (funptr_t) &dk2::CursorDrawer::drawBgAndIntersectionToCursorSurf, "CursorDrawer::drawBgAndIntersectionToCursorSurf" },  /* auto */
  { 0x005DC470, (funptr_t) &dk2::CursorDrawer::drawCursor, "CursorDrawer::drawCursor" },  /* auto */
  { 0x005DC530, (funptr_t) &dk2::CursorDrawer::drawCursorToScreenSurf, "CursorDrawer::drawCursorToScreenSurf" },  /* auto */
  { 0x005DC580, (funptr_t) &dk2::CursorDrawer::calcCursorAabbFromMouse, "CursorDrawer::calcCursorAabbFromMouse" },  /* auto */
  { 0x005DC7D0, (funptr_t) &dk2::CursorDrawer::resetCursorSize, "CursorDrawer::resetCursorSize" },  /* auto */
  { 0x005DC7F0, (funptr_t) &dk2::CursorDrawer::sub_5DC7F0_setUnk, "CursorDrawer::sub_5DC7F0_setUnk" },  /* auto */
  { 0x005DC830, (funptr_t) &dk2::CursorDrawer::updateCursorAndForceDraw, "CursorDrawer::updateCursorAndForceDraw" },  /* auto */
  { 0x005DC860, (funptr_t) &dk2::CursorDrawer::drawCursorTo, "CursorDrawer::drawCursorTo" },  /* auto */
  { 0x005DCA80, (funptr_t) &dk2::MyLock::unlock, "MyLock::unlock" },  /* auto */
  { 0x005DCA90, (funptr_t) &dk2::MyLock::lock, "MyLock::lock" },  /* auto */
  { 0x005DCAB0, (funptr_t) &dk2::MyLock::unlock_impl, "MyLock::unlock_impl" },  /* auto */
  { 0x005DCB40, (funptr_t) &dk2::MyDxDevice::constructor, "MyDxDevice::constructor" },  /* auto */
  { 0x005DCBB0, (funptr_t) &dk2::MyDxDevice::queryDevice, "MyDxDevice::queryDevice" },  /* auto */
  { 0x005DCBE0, (funptr_t) &dk2::MyDxDevice::updateCoopLevel, "MyDxDevice::updateCoopLevel" },  /* auto */
  { 0x005DCCA0, (funptr_t) &dk2::MyDxDevice::updateWindowActive, "MyDxDevice::updateWindowActive" },  /* auto */
  { 0x005DCCB0, (funptr_t) &dk2::MyDxDevice::getHInstance, "MyDxDevice::getHInstance" },  /* auto */
  { 0x005DCCC0, (funptr_t) &dk2::MyDxDevice::getNextHWindow, "MyDxDevice::getNextHWindow" },  /* auto */
  { 0x005DCCD0, (funptr_t) &dk2::MyDxDevice::updateCoopLevel_acquire, "MyDxDevice::updateCoopLevel_acquire" },  /* auto */
  { 0x005DCD30, (funptr_t) &dk2::MyDxDevice::init, "MyDxDevice::init" },  /* auto */
  { 0x005DCE50, (funptr_t) &dk2::MyDxDevice::setCoopLevel, "MyDxDevice::setCoopLevel" },  /* auto */
  { 0x005DCF00, (funptr_t) &dk2::ControlKeysUpdater::constructor, "ControlKeysUpdater::constructor" },  /* auto */
  { 0x005DCF60, (funptr_t) &dk2::ControlKeysUpdater::destructor, "ControlKeysUpdater::destructor" },  /* auto */
  { 0x005DCFE0, (funptr_t) &dk2::ControlKeysUpdater::registerCallback, "ControlKeysUpdater::registerCallback" },  /* auto */
  { 0x005DD010, (funptr_t) &dk2::ControlKeysUpdater::fun4, "ControlKeysUpdater::fun4" },  /* auto */
  { 0x005DD270, (funptr_t) &dk2::ControlKeysUpdater::call, "ControlKeysUpdater::call" },  /* auto */
  { 0x005DD310, (funptr_t) &dk2::ControlKeysUpdater::setDinputAndCall, "ControlKeysUpdater::setDinputAndCall" },  /* auto */
  { 0x005DD360, (funptr_t) &dk2::MyMouse::constructor, "MyMouse::constructor" },  /* auto */
  { 0x005DD450, (funptr_t) &dk2::MyMouse::destructor, "MyMouse::destructor" },  /* auto */
  { 0x005DD4A0, (funptr_t) &dk2::MyMouse::fun3_xyzAction, "MyMouse::fun3_xyzAction" },  /* auto */
  { 0x005DD560, (funptr_t) &dk2::MyMouse::fun4, "MyMouse::fun4" },  /* auto */
  { 0x005DD630, (funptr_t) &dk2::MyMouse::updatePos, "MyMouse::updatePos" },  /* auto */
  { 0x005DD6D0, (funptr_t) &dk2::MyMouse::setPos, "MyMouse::setPos" },  /* auto */
  { 0x005DD600, (funptr_t) &dk2::MyMouseUpdater::call, "MyMouseUpdater::call" },  /* auto */
  { 0x005DD730, (funptr_t) &dk2::MyMouseUpdater::registerCallback, "MyMouseUpdater::registerCallback" },  /* auto */
  { 0x005DD760, (funptr_t) &dk2::MyDxMouse::constructor, "MyDxMouse::constructor" },  /* auto */
  { 0x005DD8F0, (funptr_t) &dk2::MyDxMouse::destructor, "MyDxMouse::destructor" },  /* auto */
  { 0x005DDA90, (funptr_t) &dk2::MyDxMouse::handleData, "MyDxMouse::handleData" },  /* auto */
  { 0x005DD8B0, (funptr_t) &dk2::MouseXyzDxAction::applyToState, "MouseXyzDxAction::applyToState" },  /* auto */
  { 0x005DD8C0, (funptr_t) &dk2::MouseRgbDxAction::applyToState, "MouseRgbDxAction::applyToState" },  /* auto */
  { 0x005DDBC0, (funptr_t) &dk2::MyDirectInput::initDevice_0, "MyDirectInput::initDevice_0" },  /* auto */
  { 0x00600400, (funptr_t) &dk2::MyDirectInput::constructor, "MyDirectInput::constructor" },  /* auto */
  { 0x00600460, (funptr_t) &dk2::MyDirectInput::deleting_destructor, "MyDirectInput::deleting_destructor" },  /* auto */
  { 0x00600500, (funptr_t) &dk2::MyDirectInput::initDevice, "MyDirectInput::initDevice" },  /* auto */
  { 0x006005B0, (funptr_t) &dk2::MyDirectInput::processData, "MyDirectInput::processData" },  /* auto */
  { 0x005DDBE0, (funptr_t) &dk2::MouseXyzDxActionList::destructor, "MouseXyzDxActionList::destructor" },  /* auto */
  { 0x005DDE50, (funptr_t) &dk2::MouseXyzDxActionList::getOrCreateUnhandled, "MouseXyzDxActionList::getOrCreateUnhandled" },  /* auto */
  { 0x005DDCD0, (funptr_t) &dk2::MouseRgbDxActionList::destructor, "MouseRgbDxActionList::destructor" },  /* auto */
  { 0x005DDF30, (funptr_t) &dk2::MouseRgbDxActionList::getOrCreateUnhandled, "MouseRgbDxActionList::getOrCreateUnhandled" },  /* auto */
  { 0x005DE050, (funptr_t) &dk2::MyDxKeyboard::constructor, "MyDxKeyboard::constructor" },  /* auto */
  { 0x005DE260, (funptr_t) &dk2::MyDxKeyboard::processKeyboardData, "MyDxKeyboard::processKeyboardData" },  /* auto */
  { 0x005F8090, (funptr_t) &dk2::ControlSurf::constructor, "ControlSurf::constructor" },  /* auto */
  { 0x005F80F0, (funptr_t) &dk2::ControlSurf::destructor, "ControlSurf::destructor" },  /* auto */
  { 0x005F8100, (funptr_t) &dk2::ControlSurf::create, "ControlSurf::create" },  /* auto */
  { 0x005F8160, (funptr_t) &dk2::ControlSurf::release, "ControlSurf::release" },  /* auto */
  { 0x005FBBD0, (funptr_t) &dk2::Obj672510::init, "Obj672510::init" },  /* auto */
  { 0x005FBCA0, (funptr_t) &dk2::Obj672510::convertPixel, "Obj672510::convertPixel" },  /* auto */
  { 0x005FC460, (funptr_t) &dk2::Obj672510::selfConvertPixel, "Obj672510::selfConvertPixel" },  /* auto */
  { 0x005FCC20, (funptr_t) &dk2::Obj672510::sub_5FCC20, "Obj672510::sub_5FCC20" },  /* auto */
  { 0x005FCCD0, (funptr_t) &dk2::Obj672500::init, "Obj672500::init" },  /* auto */
  { 0x005FCD60, (funptr_t) &dk2::Obj672500::convertPixel, "Obj672500::convertPixel" },  /* auto */
  { 0x005FCF70, (funptr_t) &dk2::Obj672500::selfConvertPixel, "Obj672500::selfConvertPixel" },  /* auto */
  { 0x005FD220, (funptr_t) &dk2::Obj672E70::init, "Obj672E70::init" },  /* auto */
  { 0x005FD3E0, (funptr_t) &dk2::Obj672E70::convertPixel, "Obj672E70::convertPixel" },  /* auto */
  { 0x005FD510, (funptr_t) &dk2::Obj672E70::selfConvertPixel, "Obj672E70::selfConvertPixel" },  /* auto */
  { 0x005FD7B0, (funptr_t) &dk2::Obj672E80::constructor, "Obj672E80::constructor" },  /* auto */
  { 0x005FD830, (funptr_t) &dk2::Obj672E80::init, "Obj672E80::init" },  /* auto */
  { 0x005FDAE0, (funptr_t) &dk2::Obj672E80::convertPixel, "Obj672E80::convertPixel" },  /* auto */
  { 0x005FE280, (funptr_t) &dk2::WadContent::constructor, "WadContent::constructor" },  /* auto */
  { 0x005FE570, (funptr_t) &dk2::WadContent::cleanup, "WadContent::cleanup" },  /* auto */
  { 0x005FE5D0, (funptr_t) &dk2::WadContent::parseFile, "WadContent::parseFile" },  /* auto */
  { 0x005FE9B0, (funptr_t) &dk2::WadContent::sub_5FE9B0, "WadContent::sub_5FE9B0" },  /* auto */
  { 0x005FE3A0, (funptr_t) &dk2::WadDirObj::constructor, "WadDirObj::constructor" },  /* auto */
  { 0x005FEAA0, (funptr_t) &dk2::WadDirObj::destructor, "WadDirObj::destructor" },  /* auto */
  { 0x005FEB10, (funptr_t) &dk2::WadDirObj::putFile, "WadDirObj::putFile" },  /* auto */
  { 0x005FEBA0, (funptr_t) &dk2::WadDirObj::putDirRecursive, "WadDirObj::putDirRecursive" },  /* auto */
  { 0x005FEDD0, (funptr_t) &dk2::WadDirObj::sub_5FEDD0, "WadDirObj::sub_5FEDD0" },  /* auto */
  { 0x005FE3D0, (funptr_t) &dk2::MyLList_WadDirObj::scalar_destructor, "MyLList_WadDirObj::scalar_destructor" },  /* auto */
  { 0x005FE3F0, (funptr_t) &dk2::MyLList_WadDirObj::destructor, "MyLList_WadDirObj::destructor" },  /* auto */
  { 0x005FE430, (funptr_t) &dk2::MyLList_WadFileObj::scalar_destructor, "MyLList_WadFileObj::scalar_destructor" },  /* auto */
  { 0x005FE450, (funptr_t) &dk2::MyLList_WadFileObj::destructor, "MyLList_WadFileObj::destructor" },  /* auto */
  { 0x005FF4E0, (funptr_t) &dk2::MyLList_WadFileObj::add, "MyLList_WadFileObj::add" },  /* auto */
  { 0x005FF6C0, (funptr_t) &dk2::MyLList_WadFileObj::Base_scalar_destructor, "MyLList_WadFileObj::Base_scalar_destructor" },  /* auto */
  { 0x005FEF70, (funptr_t) &dk2::MyWadUnkObj::sub_5FEF70, "MyWadUnkObj::sub_5FEF70" },  /* auto */
  { 0x005FF2B0, (funptr_t) &dk2::MyWadUnkObj::sub_5FF2B0, "MyWadUnkObj::sub_5FF2B0" },  /* auto */
  { 0x005FF3D0, (funptr_t) &dk2::MyWadUnkObj::sub_5FF3D0, "MyWadUnkObj::sub_5FF3D0" },  /* auto */
  { 0x005FF3F0, (funptr_t) &dk2::MyWadUnkObj::sub_5FF3F0, "MyWadUnkObj::sub_5FF3F0" },  /* auto */
  { 0x005FF5D0, (funptr_t) &dk2::MyALList_WadFileObj::addFile, "MyALList_WadFileObj::addFile" },  /* auto */
  { 0x005FF710, (funptr_t) &dk2::MyConcurrentStream::constructor, "MyConcurrentStream::constructor" },  /* auto */
  { 0x005FF730, (funptr_t) &dk2::MyConcurrentStream::readBytes, "MyConcurrentStream::readBytes" },  /* auto */
  { 0x005FF7C0, (funptr_t) &dk2::MyConcurrentStream::writeBytes, "MyConcurrentStream::writeBytes" },  /* auto */
  { 0x005FF850, (funptr_t) &dk2::MyConcurrentStream::seek, "MyConcurrentStream::seek" },  /* auto */
  { 0x005FF8E0, (funptr_t) &dk2::MyConcurrentStream::getSize, "MyConcurrentStream::getSize" },  /* auto */
  { 0x005FF990, (funptr_t) &dk2::MyConcurrentStream::wrapStream, "MyConcurrentStream::wrapStream" },  /* auto */
  { 0x005FF960, (funptr_t) &dk2::MyCachedOffsStream::seekCachedOffs, "MyCachedOffsStream::seekCachedOffs" },  /* auto */
  { 0x006030F0, (funptr_t) &dk2::MyCachedOffsStream::constructor, "MyCachedOffsStream::constructor" },  /* auto */
  { 0x00603110, (funptr_t) &dk2::MyCachedOffsStream::close, "MyCachedOffsStream::close" },  /* auto */
  { 0x00603120, (funptr_t) &dk2::MyCachedOffsStream::readBytes_redirect, "MyCachedOffsStream::readBytes_redirect" },  /* auto */
  { 0x00603150, (funptr_t) &dk2::MyCachedOffsStream::writeBytes_redirect, "MyCachedOffsStream::writeBytes_redirect" },  /* auto */
  { 0x00603180, (funptr_t) &dk2::MyCachedOffsStream::seek_redirect, "MyCachedOffsStream::seek_redirect" },  /* auto */
  { 0x0062C4C0, (funptr_t) &dk2::MyCachedOffsStream::getOffs, "MyCachedOffsStream::getOffs" },  /* auto */
  { 0x005FFDB0, (funptr_t) &dk2::MyFileStream::MyAnyStream_getOffs, "MyFileStream::MyAnyStream_getOffs" },  /* auto */
  { 0x005FFDF0, (funptr_t) &dk2::MyFileStream::constructor, "MyFileStream::constructor" },  /* auto */
  { 0x005FFE70, (funptr_t) &dk2::MyFileStream::destructor, "MyFileStream::destructor" },  /* auto */
  { 0x005FFEC0, (funptr_t) &dk2::MyFileStream::open, "MyFileStream::open" },  /* auto */
  { 0x005FFF60, (funptr_t) &dk2::MyFileStream::closeMapping, "MyFileStream::closeMapping" },  /* auto */
  { 0x005FFF90, (funptr_t) &dk2::MyFileStream::close, "MyFileStream::close" },  /* auto */
  { 0x005FFFB0, (funptr_t) &dk2::MyFileStream::readBytes, "MyFileStream::readBytes" },  /* auto */
  { 0x005FFFF0, (funptr_t) &dk2::MyFileStream::writeBytes, "MyFileStream::writeBytes" },  /* auto */
  { 0x00600030, (funptr_t) &dk2::MyFileStream::seek, "MyFileStream::seek" },  /* auto */
  { 0x00600060, (funptr_t) &dk2::MyFileStream::mapFileToBuf, "MyFileStream::mapFileToBuf" },  /* auto */
  { 0x00600120, (funptr_t) &dk2::MyFileStream::unmapFile, "MyFileStream::unmapFile" },  /* auto */
  { 0x00600140, (funptr_t) &dk2::MyFileStream::getSemaphore, "MyFileStream::getSemaphore" },  /* auto */
  { 0x00600150, (funptr_t) &dk2::MyFileStream::flush, "MyFileStream::flush" },  /* auto */
  { 0x00600180, (funptr_t) &dk2::MyMemoryMapStream::init, "MyMemoryMapStream::init" },  /* auto */
  { 0x00608360, (funptr_t) &dk2::TbSysCommand_SetNumberOfChannels::fun_608360, "TbSysCommand_SetNumberOfChannels::fun_608360" },  /* auto */
  { 0x00608640, (funptr_t) &dk2::MyTbAudioSystem::constructor, "MyTbAudioSystem::constructor" },  /* auto */
  { 0x00608E40, (funptr_t) &dk2::MyTbAudioSystem::applyAction, "MyTbAudioSystem::applyAction" },  /* auto */
  { 0x00608840, (funptr_t) &dk2::TbAudioSystem::constructor, "TbAudioSystem::constructor" },  /* auto */
  { 0x0060F230, (funptr_t) &dk2::MyUnk674058::constructor, "MyUnk674058::constructor" },  /* auto */
  { 0x0060F4E0, (funptr_t) &dk2::MyUnk674058::destructor, "MyUnk674058::destructor" },  /* auto */
  { 0x00610070, (funptr_t) &dk2::MyUnk674058::sub_610070, "MyUnk674058::sub_610070" },  /* auto */
  { 0x006131C0, (funptr_t) &dk2::Buf1000::constructor, "Buf1000::constructor" },  /* auto */
  { 0x0062C240, (funptr_t) &dk2::FontObj::constructor, "FontObj::constructor" },  /* auto */
  { 0x0062C2B0, (funptr_t) &dk2::FontObj::destructor, "FontObj::destructor" },  /* auto */
  { 0x0062C2D0, (funptr_t) &dk2::FontObj::copy_constructor, "FontObj::copy_constructor" },  /* auto */
  { 0x0062C340, (funptr_t) &dk2::FontObj::assign_constructor, "FontObj::assign_constructor" },  /* auto */
  { 0x0062C3C0, (funptr_t) &dk2::FontObj::setFontMask, "FontObj::setFontMask" },  /* auto */
  { 0x0062C410, (funptr_t) &dk2::FontObj::checkFlag8, "FontObj::checkFlag8" },  /* auto */
  { 0x0062C440, (funptr_t) &dk2::FontObj::reset_f10, "FontObj::reset_f10" },  /* auto */
  { 0x0062C470, (funptr_t) &dk2::FontObj::setFont, "FontObj::setFont" },  /* auto */
  { 0x0062C4D0, (funptr_t) &dk2::FontObj::getFont_addRef, "FontObj::getFont_addRef" },  /* auto */
  { 0x0062C4F0, (funptr_t) &dk2::FontObj::probably_getFontType, "FontObj::probably_getFontType" },  /* auto */
  { 0x0062C8F0, (funptr_t) &dk2::MyObj67B948::constructor, "MyObj67B948::constructor" },  /* auto */
  { 0x0062CA00, (funptr_t) &dk2::MyObj67B948::selectMyTR, "MyObj67B948::selectMyTR" },  /* auto */
  { 0x0062CA70, (funptr_t) &dk2::MyObj67B948::selectMyCR, "MyObj67B948::selectMyCR" },  /* auto */
  { 0x0062CAE0, (funptr_t) &dk2::MyObj67B948::sub_62CAE0, "MyObj67B948::sub_62CAE0" },  /* auto */
  { 0x0062CD80, (funptr_t) &dk2::MyObj67B948::sub_62CD80, "MyObj67B948::sub_62CD80" },  /* auto */
  { 0x0062D2B0, (funptr_t) &dk2::MyTRCtx::constructor, "MyTRCtx::constructor" },  /* auto */
  { 0x0062D370, (funptr_t) &dk2::MyMultilineRenderCtx::constructor, "MyMultilineRenderCtx::constructor" },  /* auto */
  { 0x0062D530, (funptr_t) &dk2::MyTRCtx2Sub::constructor, "MyTRCtx2Sub::constructor" },  /* auto */
  { 0x0062D590, (funptr_t) &dk2::MyTextText::constructor, "MyTextText::constructor" },  /* auto */
  { 0x0062D680, (funptr_t) &dk2::MyTextText::destructor, "MyTextText::destructor" },  /* auto */
  { 0x0062D960, (funptr_t) &dk2::MyTextText::getString, "MyTextText::getString" },  /* auto */
  { 0x0062DAC0, (funptr_t) &dk2::MyTextBase::scalar_destructor, "MyTextBase::scalar_destructor" },  /* auto */
  { 0x0062FBF0, (funptr_t) &dk2::MyTextBase::constructor, "MyTextBase::constructor" },  /* auto */
  { 0x0062DBD0, (funptr_t) &dk2::MyLangObj::constructor, "MyLangObj::constructor" },  /* auto */
  { 0x0062DC50, (funptr_t) &dk2::MyLangObj::createFileIteratorContentAndSet, "MyLangObj::createFileIteratorContentAndSet" },  /* auto */
  { 0x0062DCA0, (funptr_t) &dk2::MyLangObj::close, "MyLangObj::close" },  /* auto */
  { 0x0062DCD0, (funptr_t) &dk2::MyLangObj::readResourceIndexFileByName, "MyLangObj::readResourceIndexFileByName" },  /* auto */
  { 0x0062DD40, (funptr_t) &dk2::MyLangObj::readResourceIndexFile, "MyLangObj::readResourceIndexFile" },  /* auto */
  { 0x0062DEE0, (funptr_t) &dk2::MyLangObj::resolveMBToUni, "MyLangObj::resolveMBToUni" },  /* auto */
  { 0x0062DF30, (funptr_t) &dk2::MyLangObj::resolveUniToMB, "MyLangObj::resolveUniToMB" },  /* auto */
  { 0x0062DF90, (funptr_t) &dk2::MyLangObj::resolveText, "MyLangObj::resolveText" },  /* auto */
  { 0x0062E050, (funptr_t) &dk2::MyTextUniToMB::constructor, "MyTextUniToMB::constructor" },  /* auto */
  { 0x0062E0E0, (funptr_t) &dk2::MyTextUniToMB::convertChar, "MyTextUniToMB::convertChar" },  /* auto */
  { 0x0062E0F0, (funptr_t) &dk2::MyTextUniToMB::sub_62E0F0, "MyTextUniToMB::sub_62E0F0" },  /* auto */
  { 0x0062E1F0, (funptr_t) &dk2::MyTextUniToMB::convert, "MyTextUniToMB::convert" },  /* auto */
  { 0x0062E3A0, (funptr_t) &dk2::MyTextMBToUni::constructor, "MyTextMBToUni::constructor" },  /* auto */
  { 0x0062E440, (funptr_t) &dk2::MyTextMBToUni::convert, "MyTextMBToUni::convert" },  /* auto */
  { 0x0062E5B0, (funptr_t) &dk2::MyDRBase::MyDR67B9E0_getNextMBCharAabbAndType_0, "MyDRBase::MyDR67B9E0_getNextMBCharAabbAndType_0" },  /* auto */
  { 0x0062E5F0, (funptr_t) &dk2::MyDRBase::MyDR67B9E0_doRender, "MyDRBase::MyDR67B9E0_doRender" },  /* auto */
  { 0x0062E610, (funptr_t) &dk2::MyDRBase::MyDR67B9E0_doCalcAabbOrRender, "MyDRBase::MyDR67B9E0_doCalcAabbOrRender" },  /* auto */
  { 0x0062F3B0, (funptr_t) &dk2::MyCRBase::chars_doCalcAabbInMiddle, "MyCRBase::chars_doCalcAabbInMiddle" },  /* auto */
  { 0x0062F430, (funptr_t) &dk2::MyCRBase::MyCR2_chars_doCalcAabbAndRenderInMiddle, "MyCRBase::MyCR2_chars_doCalcAabbAndRenderInMiddle" },  /* auto */
  { 0x0062F510, (funptr_t) &dk2::MyTRBase::linesOneTypeEx_doDrawOrCalcAabb, "MyTRBase::linesOneTypeEx_doDrawOrCalcAabb" },  /* auto */
  { 0x0062F820, (funptr_t) &dk2::MyTRBase::MyTR2_linesOneTypeEx_doCalcAabb_verticalMiddle, "MyTRBase::MyTR2_linesOneTypeEx_doCalcAabb_verticalMiddle" },  /* auto */
  { 0x0062F8A0, (funptr_t) &dk2::MyTRBase::MyTR2_linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle, "MyTRBase::MyTR2_linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle" },  /* auto */
  { 0x0062FAE0, (funptr_t) &dk2::FontObjWr::constructor, "FontObjWr::constructor" },  /* auto */
  { 0x0062FB30, (funptr_t) &dk2::FontObjWr::setRenderer, "FontObjWr::setRenderer" },  /* auto */
  { 0x0062FBB0, (funptr_t) &dk2::FontObjWr::renderChar, "FontObjWr::renderChar" },  /* auto */
  { 0x0062FCF0, (funptr_t) &dk2::MyFileStorage::constructor, "MyFileStorage::constructor" },  /* auto */
  { 0x0062FE40, (funptr_t) &dk2::MyFileStorage::binarySearch_, "MyFileStorage::binarySearch_" },  /* auto */
  { 0x0062FEB0, (funptr_t) &dk2::MyFileStorage::resolveResource, "MyFileStorage::resolveResource" },  /* auto */
  { 0x0062FF50, (funptr_t) &dk2::MyFileStorage::loadResource, "MyFileStorage::loadResource" },  /* auto */
  { 0x00630050, (funptr_t) &dk2::MyFileStorage::openResourceStream, "MyFileStorage::openResourceStream" },  /* auto */
  { 0x006300A0, (funptr_t) &dk2::MyFileStorage::parseResourceIndex, "MyFileStorage::parseResourceIndex" },  /* auto */
  { 0x00630160, (funptr_t) &dk2::MyFileStorage::getResourceIndex, "MyFileStorage::getResourceIndex" },  /* auto */
  { 0x00631480, (funptr_t) &dk2::MyFontRendererBase::MyFontRenderer_render_r5g5b5a1, "MyFontRendererBase::MyFontRenderer_render_r5g5b5a1" },  /* auto */
  { 0x00631600, (funptr_t) &dk2::MyFontRendererBase::MyFontRenderer_render_r5g6b5, "MyFontRendererBase::MyFontRenderer_render_r5g6b5" },  /* auto */
  { 0x006316F0, (funptr_t) &dk2::MyFontRendererBase::MyFontRenderer_render_r4g4b4a4, "MyFontRendererBase::MyFontRenderer_render_r4g4b4a4" },  /* auto */
  { 0x00631860, (funptr_t) &dk2::MyFontRendererBase::MyFontRenderer_render_r8g8b8a8, "MyFontRendererBase::MyFontRenderer_render_r8g8b8a8" },  /* auto */
  { 0x006319F0, (funptr_t) &dk2::MyFontRendererBase::MyFontAnyRenderer_sub_6319F0, "MyFontRendererBase::MyFontAnyRenderer_sub_6319F0" },  /* auto */
  { 0x006337A0, (funptr_t) &dk2::MyFontRendererBase::renderChar, "MyFontRendererBase::renderChar" },  /* auto */
  { 0x006334D0, (funptr_t) &dk2::MyTextFont::constructor, "MyTextFont::constructor" },  /* auto */
  { 0x00633560, (funptr_t) &dk2::MyTextFont::readMBChar, "MyTextFont::readMBChar" },  /* auto */
  { 0x006335D0, (funptr_t) &dk2::MyTextFont::getCharSize, "MyTextFont::getCharSize" },  /* auto */
  { 0x00633630, (funptr_t) &dk2::MyTextFont::getMaxHeight, "MyTextFont::getMaxHeight" },  /* auto */
  { 0x00633650, (funptr_t) &dk2::MyTextFont::probably_getFontType, "MyTextFont::probably_getFontType" },  /* auto */
  { 0x00633660, (funptr_t) &dk2::MyTextFont::getFlags, "MyTextFont::getFlags" },  /* auto */
  { 0x00633670, (funptr_t) &dk2::MyTextFont::getCharBuffer, "MyTextFont::getCharBuffer" },  /* auto */
  { 0x006336A0, (funptr_t) &dk2::MyTextFont::getCharDesc, "MyTextFont::getCharDesc" },  /* auto */
  { 0x00634020, (funptr_t) &dk2::CharImageWriter::constructor, "CharImageWriter::constructor" },  /* auto */
  { 0x00634040, (funptr_t) &dk2::CharImageWriter::write, "CharImageWriter::write" },  /* auto */
  { 0x00634090, (funptr_t) &dk2::CharImageReader::read, "CharImageReader::read" },  /* auto */
  { 0x006340B0, (funptr_t) &dk2::CharImageReader::next, "CharImageReader::next" },  /* auto */
  { 0x006340E0, (funptr_t) &dk2::CharImageReader::next2, "CharImageReader::next2" },  /* auto */
  { 0x00634130, (funptr_t) &dk2::CharImageReader::copy, "CharImageReader::copy" },  /* auto */
};  // thiscall_function_relink_refs[]  ------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

bool filter_src(void *src) {
//    if(global_relink_refs < src && src <= (&global_relink_refs[ARRAYSIZE(global_relink_refs)])) return false;
//    if(function_relink_refs < src && src <= (&function_relink_refs[ARRAYSIZE(function_relink_refs)])) return false;
//    if(thiscall_function_relink_refs < src && src <= (&thiscall_function_relink_refs[ARRAYSIZE(thiscall_function_relink_refs)])) return false;
    return true;
}
void create_xrefs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map) {
    for (int i = 0; i < ARRAYSIZE(global_relink_refs); ++i) {
        entry_t &e = global_relink_refs[i];
//        printf("g %08X -> %p\n", e.rva, e.ptr);
        uint32_t dst = (uint32_t) e.ptr;
        auto xrefs = std::make_shared<xrefs_t>(e.rva, SK_Global, e.name);
        xrefs_map.insert(std::make_pair(dst, xrefs));
    }
    for (int i = 0; i < ARRAYSIZE(function_relink_refs); ++i) {
        entry_t &e = function_relink_refs[i];
//        printf("f %08X -> %p\n", e.rva, e.ptr);
        uint32_t dst = (uint32_t) e.ptr;
        auto xrefs = std::make_shared<xrefs_t>(e.rva, SK_Function, e.name);
        xrefs_map.insert(std::make_pair(dst, xrefs));
    }
    for (int i = 0; i < ARRAYSIZE(thiscall_function_relink_refs); ++i) {
        entry_t &e = thiscall_function_relink_refs[i];
//        printf("tf %08X -> %p\n", e.rva, e.ptr);
        uint32_t dst = (uint32_t) e.ptr;
        auto xrefs = std::make_shared<xrefs_t>(e.rva, SK_ThisFunction, e.name);
        xrefs_map.insert(std::make_pair(dst, xrefs));
    }
}

// ---------------  end_of_block  ------------------------  /* auto */
