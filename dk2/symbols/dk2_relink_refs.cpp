//   warning: file is managed by gen_relink_refs_cpp.py  -  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
#include <dk2_relink_refs.h>  // -------------------------  /* auto */
#include <dk2_globals.h>  // -----------------------------  /* auto */
#include <dk2_functions.h>  // ---------------------------  /* auto */
#include <dk2/utils/AABB.h>  // --------------------------  /* auto */
#include <dk2/AABBc.h>  // -------------------------------  /* auto */
#include <dk2/utils/AABBs.h>  // -------------------------  /* auto */
#include <dk2/AnimVertEx.h>  // --------------------------  /* auto */
#include <dk2/utils/Area2i.h>  // ------------------------  /* auto */
#include <dk2/AsyncThing.h>  // --------------------------  /* auto */
#include <dk2/BFMU_header.h>  // -------------------------  /* auto */
#include <dk2/Buf1000.h>  // -----------------------------  /* auto */
#include <dk2/button/ButtonCfg.h>  // --------------------  /* auto */
#include <dk2/CAnimMeshResource.h>  // -------------------  /* auto */
#include <dk2/CBridge.h>  // -----------------------------  /* auto */
#include <dk2/CBridgeInterface.h>  // --------------------  /* auto */
#include <dk2/button/CButton.h>  // ----------------------  /* auto */
#include <dk2/CCamera.h>  // -----------------------------  /* auto */
#include <dk2/button/CCheckBoxButton.h>  // --------------  /* auto */
#include <dk2/button/CClickButton.h>  // -----------------  /* auto */
#include <dk2/button/CClickTextButton.h>  // -------------  /* auto */
#include <dk2/CCommunicationInterface.h>  // -------------  /* auto */
#include <dk2/CComponent.h>  // --------------------------  /* auto */
#include <dk2/entities/CCreature.h>  // ------------------  /* auto */
#include <dk2/CCreaturePool.h>  // -----------------------  /* auto */
#include <dk2/entities/CDeadBody.h>  // ------------------  /* auto */
#include <dk2/CDefaultPlayerInterface.h>  // -------------  /* auto */
#include <dk2/CDirectIFFFile.h>  // ----------------------  /* auto */
#include <dk2/entities/CDoor.h>  // ----------------------  /* auto */
#include <dk2/button/CDragButton.h>  // ------------------  /* auto */
#include <dk2/engine/primitive/2d/CEngine2DAnimMesh.h>      /* auto */
#include <dk2/engine/primitive/CEngine2DMeshSurface.h>      /* auto */
#include <dk2/engine/primitive/CEngine2DPrimitive.h>  // -  /* auto */
#include <dk2/engine/primitive/2d/CEngine2DRotatableSprite.h>  /* auto */
#include <dk2/engine/primitive/2d/CEngine2DSprite.h>  // -  /* auto */
#include <dk2/engine/primitive/2d/CEngine2DStaticMesh.h>    /* auto */
#include <dk2/engine/primitive/2d/world/CEngineAnimMesh.h>  /* auto */
#include <dk2/CEngineCompressedSurface.h>  // ------------  /* auto */
#include <dk2/CEngineDDSurface.h>  // --------------------  /* auto */
#include <dk2/engine/primitive/2d/world/CEngineDynamicHeightField.h>  /* auto */
#include <dk2/engine/primitive/2d/world/CEngineDynamicMesh.h>  /* auto */
#include <dk2/CEngineInterface.h>  // --------------------  /* auto */
#include <dk2/engine/primitive/CEnginePrimitiveBase.h>      /* auto */
#include <dk2/engine/primitive/2d/CEngineQuadPlane.h>       /* auto */
#include <dk2/engine/primitive/2d/CEngineSprite.h>  // ---  /* auto */
#include <dk2/engine/primitive/CEngineStaticHeightField.h>  /* auto */
#include <dk2/engine/primitive/CEngineStaticMesh.h>  // --  /* auto */
#include <dk2/CEngineSurface.h>  // ----------------------  /* auto */
#include <dk2/CEngineSurfaceBase.h>  // ------------------  /* auto */
#include <dk2/CEngineSurfaceScaler.h>  // ----------------  /* auto */
#include <dk2/engine/primitive/CEngineUnlitProceduralMesh.h>  /* auto */
#include <dk2/engine/primitive/2d/CEngineVirtualPerspective2DAnimMesh.h>  /* auto */
#include <dk2/engine/primitive/2d/world/CEngineWorldPrimitive.h>  /* auto */
#include <dk2/CEntryComponent.h>  // ---------------------  /* auto */
#include <dk2/CFileManager.h>  // ------------------------  /* auto */
#include <dk2/CFileManager_f130.h>  // -------------------  /* auto */
#include <dk2/CFileManager_f130Item.h>  // ---------------  /* auto */
#include <dk2/CFrontEndComponent.h>  // ------------------  /* auto */
#include <dk2/CGadget.h>  // -----------------------------  /* auto */
#include <dk2/CGameComponent.h>  // ----------------------  /* auto */
#include <dk2/CGuiManager.h>  // -------------------------  /* auto */
#include <dk2/button/CHoldButton.h>  // ------------------  /* auto */
#include <dk2/button/CHorizontalSlider.h>  // ------------  /* auto */
#include <dk2/CIFFFile.h>  // ----------------------------  /* auto */
#include <dk2/button/CListBox.h>  // ---------------------  /* auto */
#include <dk2/CLocalCommunication.h>  // -----------------  /* auto */
#include <dk2/world/CMap.h>  // --------------------------  /* auto */
#include <dk2/world/map/CMapEntry.h>  // -----------------  /* auto */
#include <dk2/CMemLoadIFFFile.h>  // ---------------------  /* auto */
#include <dk2/CMeshGroup.h>  // --------------------------  /* auto */
#include <dk2/CMeshResourceBase.h>  // -------------------  /* auto */
#include <dk2/entities/CMovingThing.h>  // ---------------  /* auto */
#include <dk2/CNetworkComponent.h>  // -------------------  /* auto */
#include <dk2/entities/CObject.h>  // --------------------  /* auto */
#include <dk2/entities/objects/CObjectUnionData.h>  // ---  /* auto */
#include <dk2/entities/objects/CObject_BookCase.h>  // ---  /* auto */
#include <dk2/entities/objects/CObject_Boulder.h>  // ----  /* auto */
#include <dk2/entities/objects/CObject_CallToArms.h>  // -  /* auto */
#include <dk2/entities/objects/CObject_Chicken.h>  // ----  /* auto */
#include <dk2/entities/objects/CObject_ClaimedManaVault.h>  /* auto */
#include <dk2/entities/objects/CObject_Coop.h>  // -------  /* auto */
#include <dk2/entities/objects/CObject_Destructor.h>  // -  /* auto */
#include <dk2/entities/objects/CObject_FECandleStick.h>     /* auto */
#include <dk2/entities/objects/CObject_Gold.h>  // -------  /* auto */
#include <dk2/entities/objects/CObject_GuardPost.h>  // --  /* auto */
#include <dk2/entities/objects/CObject_HeroGate2By2.h>      /* auto */
#include <dk2/entities/objects/CObject_Lair.h>  // -------  /* auto */
#include <dk2/entities/objects/CObject_ManaVault.h>  // --  /* auto */
#include <dk2/entities/objects/CObject_ManufactureCrate.h>  /* auto */
#include <dk2/entities/objects/CObject_Rat.h>  // --------  /* auto */
#include <dk2/entities/objects/CObject_ResearchBook.h>      /* auto */
#include <dk2/entities/objects/CObject_Special.h>  // ----  /* auto */
#include <dk2/entities/objects/CObject_Spinning.h>  // ---  /* auto */
#include <dk2/entities/objects/CObject_TempleCandleStick.h>  /* auto */
#include <dk2/entities/objects/CObject_ThreatBurn.h>  // -  /* auto */
#include <dk2/entities/objects/CObject_TombStone.h>  // --  /* auto */
#include <dk2/entities/objects/CObject_TortureWheel.h>      /* auto */
#include <dk2/entities/objects/CObject_TrainingTarget.h>    /* auto */
#include <dk2/CPCEngineInterface.h>  // ------------------  /* auto */
#include <dk2/entities/CPhysicalThing.h>  // -------------  /* auto */
#include <dk2/entities/CPlayer.h>  // --------------------  /* auto */
#include <dk2/CPolyMeshResource.h>  // -------------------  /* auto */
#include <dk2/button/CProgressBar.h>  // -----------------  /* auto */
#include <dk2/button/CRadioButton.h>  // -----------------  /* auto */
#include <dk2/CRenderInfo.h>  // -------------------------  /* auto */
#include <dk2/world/CResearchOrder.h>  // ----------------  /* auto */
#include <dk2/entities/CRoom.h>  // ----------------------  /* auto */
#include <dk2/entities/CShot.h>  // ----------------------  /* auto */
#include <dk2/CShotFun1.h>  // ---------------------------  /* auto */
#include <dk2/CSoundSystem.h>  // ------------------------  /* auto */
#include <dk2/button/CSpinButton.h>  // ------------------  /* auto */
#include <dk2/CState.h>  // ------------------------------  /* auto */
#include <dk2/entities/CTag.h>  // -----------------------  /* auto */
#include <dk2/button/CTextBox.h>  // ---------------------  /* auto */
#include <dk2/button/CTextInput.h>  // -------------------  /* auto */
#include <dk2/entities/CThing.h>  // ---------------------  /* auto */
#include <dk2/entities/CTrap.h>  // ----------------------  /* auto */
#include <dk2/button/CVerticalSlider.h>  // --------------  /* auto */
#include <dk2/CWindow.h>  // -----------------------------  /* auto */
#include <dk2/CWindowTest.h>  // -------------------------  /* auto */
#include <dk2/CWorld.h>  // ------------------------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
#include <dk2/CWorldInterface.h>  // ---------------------  /* auto */
#include <dk2/CWorldShortEntry2.h>  // -------------------  /* auto */
#include <dk2/text/render/CharImageReader.h>  // ---------  /* auto */
#include <dk2/text/render/CharImageWriter.h>  // ---------  /* auto */
#include <dk2/text/render/CharRenderCtx.h>  // -----------  /* auto */
#include <dk2/ControlKeysUpdater.h>  // ------------------  /* auto */
#include <dk2/ControlSurf.h>  // -------------------------  /* auto */
#include <dk2/CursorDrawer.h>  // ------------------------  /* auto */
#include <dk2/CvtItem.h>  // -----------------------------  /* auto */
#include <dk2/DdModeList.h>  // --------------------------  /* auto */
#include <dk2/DdModeListItem.h>  // ----------------------  /* auto */
#include <dk2/DiscFileBase.h>  // ------------------------  /* auto */
#include <dk2/DiscFileBaseEx.h>  // ----------------------  /* auto */
#include <dk2/DxAction.h>  // ----------------------------  /* auto */
#include <dk2/DxActionQueue.h>  // -----------------------  /* auto */
#include <dk2/DxD3dInfo.h>  // ---------------------------  /* auto */
#include <dk2/DxDeviceInfo.h>  // ------------------------  /* auto */
#include <dk2/DxKeyEntry.h>  // --------------------------  /* auto */
#include <dk2/DxModeInfo.h>  // --------------------------  /* auto */
#include <dk2/Event0_unk6.h>  // -------------------------  /* auto */
#include <dk2/Event0_winShown7.h>  // --------------------  /* auto */
#include <dk2/Event5_keyboard.h>  // ---------------------  /* auto */
#include <dk2/FPUControlWord.h>  // ----------------------  /* auto */
#include <dk2/FPUControlWordWithState.h>  // -------------  /* auto */
#include <dk2/FileStorageBase.h>  // ---------------------  /* auto */
#include <dk2/FloatObjThing.h>  // -----------------------  /* auto */
#include <dk2/text/render/FontObj.h>  // -----------------  /* auto */
#include <dk2/text/render/FontObjWr.h>  // ---------------  /* auto */
#include <dk2/GameAction.h>  // --------------------------  /* auto */
#include <dk2/GameActionArray.h>  // ---------------------  /* auto */
#include <dk2/GameActionCtx.h>  // -----------------------  /* auto */
#include <dk2/GameActionHandler.h>  // -------------------  /* auto */
#include <dk2/GameActionRecord.h>  // --------------------  /* auto */
#include <dk2/GameObj6A0B00.h>  // -----------------------  /* auto */
#include <dk2/GameObj6A0B00Item.h>  // -------------------  /* auto */
#include <dk2/GameScoreRecord.h>  // ---------------------  /* auto */
#include <dk2/Idx3b.h>  // -------------------------------  /* auto */
#include <dk2/Idx3s.h>  // -------------------------------  /* auto */
#include <dk2/Item5B06D0.h>  // --------------------------  /* auto */
#include <dk2/KeyEntry.h>  // ----------------------------  /* auto */
#include <dk2/LockBase.h>  // ----------------------------  /* auto */
#include <dk2/utils/Mat3x3f.h>  // -----------------------  /* auto */
#include <dk2/MeshVertEx.h>  // --------------------------  /* auto */
#include <dk2/MouseRgbDxAction.h>  // --------------------  /* auto */
#include <dk2/MouseRgbDxActionList.h>  // ----------------  /* auto */
#include <dk2/MouseXyzDxAction.h>  // --------------------  /* auto */
#include <dk2/MouseXyzDxActionList.h>  // ----------------  /* auto */
#include <dk2/MovieCtx.h>  // ----------------------------  /* auto */
#include <dk2/MovieRenderer.h>  // -----------------------  /* auto */
#include <dk2/My10FBFileStream.h>  // --------------------  /* auto */
#include <dk2/My16BitTexture.h>  // ----------------------  /* auto */
#include <dk2/My24BitTexture.h>  // ----------------------  /* auto */
#include <dk2/My32BitTexture.h>  // ----------------------  /* auto */
#include <dk2/My8BitTexture.h>  // -----------------------  /* auto */
#include <dk2/MyALList_WadDirObj.h>  // ------------------  /* auto */
#include <dk2/MyALList_WadDirObj_entry.h>  // ------------  /* auto */
#include <dk2/MyALList_WadDirObj_entry_arr.h>  // --------  /* auto */
#include <dk2/MyALList_WadFileObj.h>  // -----------------  /* auto */
#include <dk2/MyALList_WadFileObj_entry.h>  // -----------  /* auto */
#include <dk2/MyALList_WadFileObj_entry_arr.h>  // -------  /* auto */
#include <dk2/MyAnger.h>  // -----------------------------  /* auto */
#include <dk2/MyArchiveFileStream.h>  // -----------------  /* auto */
#include <dk2/MyBlueprintList.h>  // ---------------------  /* auto */
#include <dk2/MyCESurfHandle.h>  // ----------------------  /* auto */
#include <dk2/MyCESurfScale.h>  // -----------------------  /* auto */
#include <dk2/MyCEngineSurfDesc.h>  // -------------------  /* auto */
#include <dk2/text/MyCR0.h>  // --------------------------  /* auto */
#include <dk2/text/MyCR1.h>  // --------------------------  /* auto */
#include <dk2/text/MyCR2.h>  // --------------------------  /* auto */
#include <dk2/text/MyCR3.h>  // --------------------------  /* auto */
#include <dk2/text/MyCRBase.h>  // -----------------------  /* auto */
#include <dk2/text/MyCRCtx.h>  // ------------------------  /* auto */
#include <dk2/world/MyCTremor.h>  // ---------------------  /* auto */
#include <dk2/MyCachedDataStream.h>  // ------------------  /* auto */
#include <dk2/MyCachedOffsStream.h>  // ------------------  /* auto */
#include <dk2/MyCachedStream.h>  // ----------------------  /* auto */
#include <dk2/MyCallback.h>  // --------------------------  /* auto */
#include <dk2/utils/MyCameraState.h>  // -----------------  /* auto */
#include <dk2/MyCb6723D0.h>  // --------------------------  /* auto */
#include <dk2/MyCbHandle.h>  // --------------------------  /* auto */
#include <dk2/text/render/MyCharRenderCtx.h>  // ---------  /* auto */
#include <dk2/MyCmdHandler.h>  // ------------------------  /* auto */
#include <dk2/MyCollectDxAction.h>  // -------------------  /* auto */
#include <dk2/MyCollectDxAction_Action.h>  // ------------  /* auto */
#include <dk2/MyComEx.h>  // -----------------------------  /* auto */
#include <dk2/MyCommands.h>  // --------------------------  /* auto */
#include <dk2/MyComputerPlayer.h>  // --------------------  /* auto */
#include <dk2/MyConcurrentStream.h>  // ------------------  /* auto */
#include <dk2/MyCreatureCollection.h>  // ----------------  /* auto */
#include <dk2/entities/data/MyCreatureDataObj.h>  // -----  /* auto */
#include <dk2/entities/creature/MyCreatureInst.h>  // ----  /* auto */
#include <dk2/entities/data/MyCreatureSpellDataObj.h>       /* auto */
#include <dk2/MyCrs.h>  // -------------------------------  /* auto */
#include <dk2/MyD3DevInfo.h>  // -------------------------  /* auto */
#include <dk2/MyDLVec2i.h>  // ---------------------------  /* auto */
#include <dk2/text/MyDR0.h>  // --------------------------  /* auto */
#include <dk2/text/MyDRBase.h>  // -----------------------  /* auto */
#include <dk2/MyDblNamedSurface.h>  // -------------------  /* auto */
#include <dk2/MyDdSurface.h>  // -------------------------  /* auto */
#include <dk2/MyDdSurfaceEx.h>  // -----------------------  /* auto */
#include <dk2/MyDirectDraw.h>  // ------------------------  /* auto */
#include <dk2/MyDirectInput.h>  // -----------------------  /* auto */
#include <dk2/MyDirectory.h>  // -------------------------  /* auto */
#include <dk2/MyDiskDirectory.h>  // ---------------------  /* auto */
#include <dk2/entities/data/MyDoorDataObj.h>  // ---------  /* auto */
#include <dk2/MyDxDevice.h>  // --------------------------  /* auto */
#include <dk2/MyDxInputManagerCb.h>  // ------------------  /* auto */
#include <dk2/MyDxInputState.h>  // ----------------------  /* auto */
#include <dk2/MyDxKeyboard.h>  // ------------------------  /* auto */
#include <dk2/MyDxMouse.h>  // ---------------------------  /* auto */
#include <dk2/MyEnemyBreache.h>  // ----------------------  /* auto */
#include <dk2/MyEntryBuf_MyScaledSurface.h>  // ----------  /* auto */
#include <dk2/MyEntryBuf_MyStringHashMap_MyCESurfHandle_entry.h>  /* auto */
#include <dk2/MyEntryBuf_MyStringHashMap_MyMeshResourceHolder_entry.h>  /* auto */
#include <dk2/MyEntryBuf_MyStringHashMap_MyScaledSurface_entry.h>  /* auto */
#include <dk2/MyEntryBuf_MyStringHashMap_entry.h>  // ----  /* auto */
#include <dk2/MyEntryBuf_Tiangle34.h>  // ----------------  /* auto */
#include <dk2/MyEntryBuf_Triangle24.h>  // ---------------  /* auto */
#include <dk2/MyEntryBuf_Vertex18.h>  // -----------------  /* auto */
#include <dk2/MyEntryBuf_uint16.h>  // -------------------  /* auto */
#include <dk2/entities/creature/MyFight.h>  // -----------  /* auto */
#include <dk2/MyFileInfo.h>  // --------------------------  /* auto */
#include <dk2/MyFileStorage.h>  // -----------------------  /* auto */
#include <dk2/MyFileStream.h>  // ------------------------  /* auto */
#include <dk2/text/render/MyFontEntryHeader.h>  // -------  /* auto */
#include <dk2/text/render/MyFontHeader.h>  // ------------  /* auto */
#include <dk2/text/render/MyFontRenderer0.h>  // ---------  /* auto */
#include <dk2/text/render/MyFontRenderer2.h>  // ---------  /* auto */
#include <dk2/text/render/MyFontRenderer3.h>  // ---------  /* auto */
#include <dk2/text/render/MyFontRenderer4.h>  // ---------  /* auto */
#include <dk2/text/render/MyFontRendererBase.h>  // ------  /* auto */
#include <dk2/MyFormatLoader.h>  // ----------------------  /* auto */
#include <dk2/MyGame.h>  // ------------------------------  /* auto */
#include <dk2/MyGame_f4C.h>  // --------------------------  /* auto */
#include <dk2/MyGroupElem.h>  // -------------------------  /* auto */
#include <dk2/MyInputListenersHolder.h>  // --------------  /* auto */
#include <dk2/MyInputManagerCb.h>  // --------------------  /* auto */
#include <dk2/entities/data/MyKeeperSpellDataObj.h>  // --  /* auto */
#include <dk2/MyKeyboard.h>  // --------------------------  /* auto */
#include <dk2/MyLList_WadDirObj.h>  // -------------------  /* auto */
#include <dk2/MyLList_WadDirObj_entry.h>  // -------------  /* auto */
#include <dk2/MyLList_WadFileObj.h>  // ------------------  /* auto */
#include <dk2/MyLList_WadFileObj_entry.h>  // ------------  /* auto */
#include <dk2/MyLList_WinEventCb.h>  // ------------------  /* auto */
#include <dk2/MyLList_WinEventCb_entry.h>  // ------------  /* auto */
#include <dk2/MyLVec3f.h>  // ----------------------------  /* auto */
#include <dk2/MyLangObj.h>  // ---------------------------  /* auto */
#include <dk2/MyLevelObjective.h>  // --------------------  /* auto */
#include <dk2/MyLocalStr.h>  // --------------------------  /* auto */
#include <dk2/MyLock.h>  // ------------------------------  /* auto */
#include <dk2/MyLoopLList_DxAction.h>  // ----------------  /* auto */
#include <dk2/MyLoopLList_DxAction_entry.h>  // ----------  /* auto */
#include <dk2/MyManufactureItem.h>  // -------------------  /* auto */
#include <dk2/MyManufactureList.h>  // -------------------  /* auto */
#include <dk2/world/map/MyMapElement.h>  // --------------  /* auto */
#include <dk2/text/textmap/MyMbStringList.h>  // ---------  /* auto */
#include <dk2/text/textmap/MyMbToUniMap.h>  // -----------  /* auto */
#include <dk2/MyMemoryMapStream.h>  // -------------------  /* auto */
#include <dk2/MyMeshResourceHolder.h>  // ----------------  /* auto */
#include <dk2/MyMouse.h>  // -----------------------------  /* auto */
#include <dk2/MyMouseUpdater.h>  // ----------------------  /* auto */
#include <dk2/text/render/MyMultilineRenderCtx.h>  // ----  /* auto */
#include <dk2/MyMutex.h>  // -----------------------------  /* auto */
#include <dk2/MyNBitTexture.h>  // -----------------------  /* auto */
#include <dk2/world/nav/MyNavigationSystem.h>  // --------  /* auto */
#include <dk2/world/nav/MyNavigationSystemMap.h>  // -----  /* auto */
#include <dk2/entities/data/MyObjectDataObj.h>  // -------  /* auto */
#include <dk2/MyPilotNavigation.h>  // -------------------  /* auto */
#include <dk2/MyPlayerInst.h>  // ------------------------  /* auto */
#include <dk2/world/MyPlayerMessage.h>  // ---------------  /* auto */
#include <dk2/world/MyPlayerMessageQueue.h>  // ----------  /* auto */
#include <dk2/MyPlayerRoomPlacmentInfo.h>  // ------------  /* auto */
#include <dk2/MyPlayerStatistics.h>  // ------------------  /* auto */
#include <dk2/MyProfiler.h>  // --------------------------  /* auto */
#include <dk2/MyResources.h>  // -------------------------  /* auto */
#include <dk2/MyResources_f29CB.h>  // -------------------  /* auto */
#include <dk2/MyResources_f2E38Obj.h>  // ----------------  /* auto */
#include <dk2/entities/data/MyRoomDataObj.h>  // ---------  /* auto */
#include <dk2/MyRooms.h>  // -----------------------------  /* auto */
#include <dk2/MyScaledSurface.h>  // ---------------------  /* auto */
#include <dk2/MySemaphore.h>  // -------------------------  /* auto */
#include <dk2/MySharedObj.h>  // -------------------------  /* auto */
#include <dk2/text/textmap/MySharedText.h>  // -----------  /* auto */
#include <dk2/entities/data/MyShotDataObj.h>  // ---------  /* auto */
#include <dk2/MySignalBase.h>  // ------------------------  /* auto */
#include <dk2/MySoundLoader.h>  // -----------------------  /* auto */
#include <dk2/MyStateEntry.h>  // ------------------------  /* auto */
#include <dk2/MyStateEntry2.h>  // -----------------------  /* auto */
#include <dk2/MyStr.h>  // -------------------------------  /* auto */
#include <dk2/MyStream.h>  // ----------------------------  /* auto */
#include <dk2/MyStringHashMap.h>  // ---------------------  /* auto */
#include <dk2/MyStringHashMap_MyCESurfHandle.h>  // ------  /* auto */
#include <dk2/MyStringHashMap_MyCESurfHandle_entry.h>       /* auto */
#include <dk2/MyStringHashMap_MyMeshResourceHolder.h>       /* auto */
#include <dk2/MyStringHashMap_MyMeshResourceHolder_entry.h>  /* auto */
#include <dk2/MyStringHashMap_MyScaledSurface.h>  // -----  /* auto */
#include <dk2/MyStringHashMap_MyScaledSurface_entry.h>      /* auto */
#include <dk2/MyStringHashMap_entry.h>  // ---------------  /* auto */
#include <dk2/text/render/MyStringTexture.h>  // ---------  /* auto */
#include <dk2/MySubStr.h>  // ----------------------------  /* auto */
#include <dk2/MySurfDesc.h>  // --------------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
#include <dk2/MySurfaceWrapper.h>  // --------------------  /* auto */
#include <dk2/text/MyTR2.h>  // --------------------------  /* auto */
#include <dk2/text/MyTR4.h>  // --------------------------  /* auto */
#include <dk2/text/MyTR5.h>  // --------------------------  /* auto */
#include <dk2/text/MyTR6.h>  // --------------------------  /* auto */
#include <dk2/text/MyTRArgs.h>  // -----------------------  /* auto */
#include <dk2/text/MyTRBase.h>  // -----------------------  /* auto */
#include <dk2/text/MyTRCtx.h>  // ------------------------  /* auto */
#include <dk2/text/MyTRCtx2Sub.h>  // --------------------  /* auto */
#include <dk2/entities/player/MyTask.h>  // --------------  /* auto */
#include <dk2/entities/player/MyTaskStack.h>  // ---------  /* auto */
#include <dk2/MyTbAudioSystem.h>  // ---------------------  /* auto */
#include <dk2/entities/data/MyTerrainDataObj.h>  // ------  /* auto */
#include <dk2/text/textmap/font/MyTextFont.h>  // --------  /* auto */
#include <dk2/text/textmap/font/MyTextFontBase.h>  // ----  /* auto */
#include <dk2/text/MyTextFormatBase.h>  // ---------------  /* auto */
#include <dk2/text/MyTextFormatMB.h>  // -----------------  /* auto */
#include <dk2/text/MyTextFormatWChar.h>  // --------------  /* auto */
#include <dk2/text/textmap/MyTextMB.h>  // ---------------  /* auto */
#include <dk2/text/render/MyTextRenderer.h>  // ----------  /* auto */
#include <dk2/MyTextures.h>  // --------------------------  /* auto */
#include <dk2/entities/data/MyTrapDataObj.h>  // ---------  /* auto */
#include <dk2/world/MyTriggerAction.h>  // ---------------  /* auto */
#include <dk2/world/MyTriggerWhen.h>  // -----------------  /* auto */
#include <dk2/text/textmap/MyUniToMbMap.h>  // -----------  /* auto */
#include <dk2/MyVideoSettings.h>  // ---------------------  /* auto */
#include <dk2/MyWadDirectory.h>  // ----------------------  /* auto */
#include <dk2/MyWadFileStream.h>  // ---------------------  /* auto */
#include <dk2/MyWadUnkObj.h>  // -------------------------  /* auto */
#include <dk2/MyWindowMsgs.h>  // ------------------------  /* auto */
#include <dk2/world/MyWorldSacrifice.h>  // --------------  /* auto */
#include <dk2/world/MyWorldSacrificeItem.h>  // ----------  /* auto */
#include <dk2/MyZlibFileStream.h>  // --------------------  /* auto */
#include <dk2/My_sub_56F850.h>  // -----------------------  /* auto */
#include <dk2/NameCfg.h>  // -----------------------------  /* auto */
#include <dk2/NewObj571B3B.h>  // ------------------------  /* auto */
#include <dk2/Obj57AD20.h>  // ---------------------------  /* auto */
#include <dk2/Obj57BCB0.h>  // ---------------------------  /* auto */
#include <dk2/Obj57BCB0_item.h>  // ----------------------  /* auto */
#include <dk2/Obj58EF60.h>  // ---------------------------  /* auto */
#include <dk2/Obj6723A0.h>  // ---------------------------  /* auto */
#include <dk2/Obj6723B8.h>  // ---------------------------  /* auto */
#include <dk2/Obj672500.h>  // ---------------------------  /* auto */
#include <dk2/Obj672510.h>  // ---------------------------  /* auto */
#include <dk2/Obj672520Interface.h>  // ------------------  /* auto */
#include <dk2/Obj672844.h>  // ---------------------------  /* auto */
#include <dk2/Obj672E70.h>  // ---------------------------  /* auto */
#include <dk2/Obj672E80.h>  // ---------------------------  /* auto */
#include <dk2/Obj79DC68.h>  // ---------------------------  /* auto */
#include <dk2/PathStr.h>  // -----------------------------  /* auto */
#include <dk2/PixelMask.h>  // ---------------------------  /* auto */
#include <dk2/PlayerList.h>  // --------------------------  /* auto */
#include <dk2/utils/Pos2i.h>  // -------------------------  /* auto */
#include <dk2/utils/Pos2p.h>  // -------------------------  /* auto */
#include <dk2/ProbablyConsole.h>  // ---------------------  /* auto */
#include <dk2/PtrArrList.h>  // --------------------------  /* auto */
#include <dk2/RenderData.h>  // --------------------------  /* auto */
#include <dk2/ResourceIndexEntry.h>  // ------------------  /* auto */
#include <dk2/RtGuiView.h>  // ---------------------------  /* auto */
#include <dk2/SceneObject2E.h>  // -----------------------  /* auto */
#include <dk2/SceneObject2EList.h>  // -------------------  /* auto */
#include <dk2/SceneObject30.h>  // -----------------------  /* auto */
#include <dk2/SceneObject30List.h>  // -------------------  /* auto */
#include <dk2/ScreenObject.h>  // ------------------------  /* auto */
#include <dk2/ScreenObjectArr.h>  // ---------------------  /* auto */
#include <dk2/utils/Size2i.h>  // ------------------------  /* auto */
#include <dk2/SprsAnimHeader.h>  // ----------------------  /* auto */
#include <dk2/SprsMeshHeader.h>  // ----------------------  /* auto */
#include <dk2/StaticListeners.h>  // ---------------------  /* auto */
#include <dk2/StrCfg.h>  // ------------------------------  /* auto */
#include <dk2/StubStruc6787B8.h>  // ---------------------  /* auto */
#include <dk2/StubStruc67B320.h>  // ---------------------  /* auto */
#include <dk2/StubStruc68F650.h>  // ---------------------  /* auto */
#include <dk2/StubStruc6A1EC8.h>  // ---------------------  /* auto */
#include <dk2/StubStruc6B84C8.h>  // ---------------------  /* auto */
#include <dk2/StubStruc6BF280.h>  // ---------------------  /* auto */
#include <dk2/StubStruc6C3DA0.h>  // ---------------------  /* auto */
#include <dk2/SurfHashList.h>  // ------------------------  /* auto */
#include <dk2/SurfHashList2.h>  // -----------------------  /* auto */
#include <dk2/SurfHashListItem.h>  // --------------------  /* auto */
#include <dk2/SurfaceHolder.h>  // -----------------------  /* auto */
#include <dk2/TbAudioSystem.h>  // -----------------------  /* auto */
#include <dk2/TbDiscFile.h>  // --------------------------  /* auto */
#include <dk2/TbDiscFileStorage.h>  // -------------------  /* auto */
#include <dk2/TbSysCommand_SetNumberOfChannels.h>  // ----  /* auto */
#include <dk2/TbTList_TbDynamicStringTemplate_char_entry.h>  /* auto */
#include <dk2/text/TbUniStringVTag.h>  // ----------------  /* auto */
#include <dk2/TexCoord.h>  // ----------------------------  /* auto */
#include <dk2/ThreadCtx.h>  // ---------------------------  /* auto */
#include <dk2/Triangle.h>  // ----------------------------  /* auto */
#include <dk2/Triangle24.h>  // --------------------------  /* auto */
#include <dk2/Triangle34.h>  // --------------------------  /* auto */
#include <dk2/Uv2f.h>  // --------------------------------  /* auto */
#include <dk2/Uv2f_arr1024.h>  // ------------------------  /* auto */
#include <dk2/utils/Vec2f.h>  // -------------------------  /* auto */
#include <dk2/utils/Vec3d.h>  // -------------------------  /* auto */
#include <dk2/utils/Vec3f.h>  // -------------------------  /* auto */
#include <dk2/Vec3f_arr1024.h>  // -----------------------  /* auto */
#include <dk2/utils/Vec3i.h>  // -------------------------  /* auto */
#include <dk2/utils/Vec3s.h>  // -------------------------  /* auto */
#include <dk2/Vertex18.h>  // ----------------------------  /* auto */
#include <dk2/Vertex1C.h>  // ----------------------------  /* auto */
#include <dk2/VerticesData.h>  // ------------------------  /* auto */
#include <dk2/WadContent.h>  // --------------------------  /* auto */
#include <dk2/WadDirObj.h>  // ---------------------------  /* auto */
#include <dk2/WadEntry.h>  // ----------------------------  /* auto */
#include <dk2/WadFileObj.h>  // --------------------------  /* auto */
#include <dk2/WadHeader.h>  // ---------------------------  /* auto */
#include <dk2/WinEventCb.h>  // --------------------------  /* auto */
#include <dk2/WinEventHandlers.h>  // --------------------  /* auto */
#include <dk2/WindowCfg.h>  // ---------------------------  /* auto */
#include <dk2/WndMsgDxAction.h>  // ----------------------  /* auto */
#include <dk2/WndMsgDxActionList.h>  // ------------------  /* auto */
#include <dk2/arr_66C780_t.h>  // ------------------------  /* auto */
#include <win/zlib_config.h>  // -------------------------  /* auto */
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
  { 0x0066D3FC, &dk2::TbUniStringVTag_vftable, "TbUniStringVTag_vftable" },  /* auto */
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
  { 0x0066ED24, &dk2::CClickTextButton_vftable, "CClickTextButton_vftable" },  /* auto */
  { 0x0066ED3C, &dk2::CProgressBar_vftable, "CProgressBar_vftable" },  /* auto */
  { 0x0066ED54, &dk2::CListBox_vftable, "CListBox_vftable" },  /* auto */
  { 0x0066ED6C, &dk2::CSpinButton_vftable, "CSpinButton_vftable" },  /* auto */
  { 0x0066ED8C, &dk2::CTextInput_vftable, "CTextInput_vftable" },  /* auto */
  { 0x0066EDAC, &dk2::CTextBox_vftable, "CTextBox_vftable" },  /* auto */
  { 0x0066EDC4, &dk2::CCheckBoxButton_vftable, "CCheckBoxButton_vftable" },  /* auto */
  { 0x0066EDDC, &dk2::CHoldButton_vftable, "CHoldButton_vftable" },  /* auto */
  { 0x0066EDF4, &dk2::CDragButton_vftable, "CDragButton_vftable" },  /* auto */
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
  { 0x0066FB24, &dk2::CIFFFile_vftable, "CIFFFile_vftable" },  /* auto */
  { 0x0066FB34, &dk2::CDirectIFFFile_vftable, "CDirectIFFFile_vftable" },  /* auto */
  { 0x0066FB9C, &dk2::CMemLoadIFFFile_vftable, "CMemLoadIFFFile_vftable" },  /* auto */
  { 0x0066FBBC, &dk2::CAnimMeshResource_vftable, "CAnimMeshResource_vftable" },  /* auto */
  { 0x0066FBCC, &dk2::CMeshResourceBase_vftable, "CMeshResourceBase_vftable" },  /* auto */
  { 0x0066FBDC, &dk2::CPolyMeshResource_vftable, "CPolyMeshResource_vftable" },  /* auto */
  { 0x0066FBEC, &dk2::CMeshGroup_vftable, "CMeshGroup_vftable" },  /* auto */
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
  { 0x00671E40, &dk2::My8BitTexture_vftable, "My8BitTexture_vftable" },  /* auto */
  { 0x00671E80, &dk2::My16BitTexture_vftable, "My16BitTexture_vftable" },  /* auto */
  { 0x00671EC0, &dk2::My24BitTexture_vftable, "My24BitTexture_vftable" },  /* auto */
  { 0x00671F00, &dk2::My32BitTexture_vftable, "My32BitTexture_vftable" },  /* auto */
  { 0x00671F40, &dk2::FPUControlWord_vftable, "FPUControlWord_vftable" },  /* auto */
  { 0x00671F48, &dk2::DiscFileBaseEx_vftable, "DiscFileBaseEx_vftable" },  /* auto */
  { 0x00671F80, &dk2::DiscFileBase_vftable, "DiscFileBase_vftable" },  /* auto */
  { 0x006722D0, &dk2::MyStr_vftable, "MyStr_vftable" },     /* auto */
  { 0x00672300, &dk2::MySubStr_vftable, "MySubStr_vftable" },  /* auto */
  { 0x00672340, &dk2::MyLList_WinEventCb_vftable, "MyLList_WinEventCb_vftable" },  /* auto */
  { 0x00672348, &dk2::FileStorageBase_vftable, "FileStorageBase_vftable" },  /* auto */
  { 0x00672380, &dk2::MyInputManagerCb_vftable, "MyInputManagerCb_vftable" },  /* auto */
  { 0x006723A0, &dk2::Obj6723A0_vftable, "Obj6723A0_vftable" },  /* auto */
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
  { 0x006725D8, &dk2::MyStream_vftable, "MyStream_vftable" },  /* auto */
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
  { 0x00672E90, &dk2::MyCachedDataStream_vftable, "MyCachedDataStream_vftable" },  /* auto */
  { 0x00672EC0, &dk2::MyLocalStr_vftable, "MyLocalStr_vftable" },  /* auto */
  { 0x00672EE4, &dk2::MyLList_WadFileObj_vftable, "MyLList_WadFileObj_vftable" },  /* auto */
  { 0x00672EE8, &dk2::MyLList_WadDirObj_vftable, "MyLList_WadDirObj_vftable" },  /* auto */
  { 0x00672EF8, &dk2::MyConcurrentStream_vftable, "MyConcurrentStream_vftable" },  /* auto */
  { 0x00672F28, &dk2::My10FBFileStream_vftable, "My10FBFileStream_vftable" },  /* auto */
  { 0x00672F88, &dk2::MyZlibFileStream_vftable, "MyZlibFileStream_vftable" },  /* auto */
  { 0x00672FB8, &dk2::MyWadFileStream_vftable, "MyWadFileStream_vftable" },  /* auto */
  { 0x00672FE8, &dk2::MyFileStream_vftable, "MyFileStream_vftable" },  /* auto */
  { 0x00673018, &dk2::MyMemoryMapStream_vftable, "MyMemoryMapStream_vftable" },  /* auto */
  { 0x00673048, &dk2::MyDirectInput_vftable, "MyDirectInput_vftable" },  /* auto */
  { 0x00673070, &dk2::zlib_border, "zlib_border" },  // --  /* auto */
  { 0x006730C0, &dk2::MyCachedOffsStream_vftable, "MyCachedOffsStream_vftable" },  /* auto */
  { 0x00673388, &dk2::zlib_configuration_table, "zlib_configuration_table" },  /* auto */
  { 0x00673E48, &dk2::MyTbAudioSystem_vftable, "MyTbAudioSystem_vftable" },  /* auto */
  { 0x00674058, &dk2::MySoundLoader_vftable, "MySoundLoader_vftable" },  /* auto */
  { 0x00674430, &dk2::rclsid, "rclsid" },  // ------------  /* auto */
  { 0x00674470, &dk2::riid, "riid" },  // ----------------  /* auto */
  { 0x00676378, &dk2::wordArr_00676378, "wordArr_00676378" },  /* auto */
  { 0x0067B8C0, &dk2::FontObj_vftable, "FontObj_vftable" },  /* auto */
  { 0x0067B8C8, &dk2::MyCR0_vftable, "MyCR0_vftable" },     /* auto */
  { 0x0067B8D8, &dk2::MyCR1_vftable, "MyCR1_vftable" },     /* auto */
  { 0x0067B8E8, &dk2::MyCR2_vftable, "MyCR2_vftable" },     /* auto */
  { 0x0067B8F8, &dk2::MyCR3_vftable, "MyCR3_vftable" },     /* auto */
  { 0x0067B908, &dk2::MyTR4_vftable, "MyTR4_vftable" },     /* auto */
  { 0x0067B918, &dk2::MyTR5_vftable, "MyTR5_vftable" },     /* auto */
  { 0x0067B928, &dk2::MyTR2_vftable, "MyTR2_vftable" },     /* auto */
  { 0x0067B938, &dk2::MyTR6_vftable, "MyTR6_vftable" },     /* auto */
  { 0x0067B948, &dk2::MyTextRenderer_vftable, "MyTextRenderer_vftable" },  /* auto */
  { 0x0067B950, &dk2::MyMbStringList_vftable, "MyMbStringList_vftable" },  /* auto */
  { 0x0067B968, &dk2::MySharedText_vftable, "MySharedText_vftable" },  /* auto */
  { 0x0067B980, &dk2::MyTextFormatMB_vftable, "MyTextFormatMB_vftable" },  /* auto */
  { 0x0067B998, &dk2::MyTextFormatWChar_vftable, "MyTextFormatWChar_vftable" },  /* auto */
  { 0x0067B9B0, &dk2::MyUniToMbMap_vftable, "MyUniToMbMap_vftable" },  /* auto */
  { 0x0067B9C8, &dk2::MyMbToUniMap_vftable, "MyMbToUniMap_vftable" },  /* auto */
  { 0x0067B9E0, &dk2::MyDR0_vftable, "MyDR0_vftable" },     /* auto */
  { 0x0067B9F8, &dk2::MyCRBase_vftable, "MyCRBase_vftable" },  /* auto */
  { 0x0067BA08, &dk2::MyTRBase_vftable, "MyTRBase_vftable" },  /* auto */
  { 0x0067BA18, &dk2::FontObjWr_vftable, "FontObjWr_vftable" },  /* auto */
  { 0x0067BA30, &dk2::MyFileStorage_vftable, "MyFileStorage_vftable" },  /* auto */
  { 0x0067BA48, &dk2::MyDRBase_vftable, "MyDRBase_vftable" },  /* auto */
  { 0x0067BA60, &dk2::MyFontRenderer4_vftable, "MyFontRenderer4_vftable" },  /* auto */
  { 0x0067BA80, &dk2::MyFontRenderer0_vftable, "MyFontRenderer0_vftable" },  /* auto */
  { 0x0067BAA0, &dk2::MyFontRenderer2_vftable, "MyFontRenderer2_vftable" },  /* auto */
  { 0x0067BAC0, &dk2::MyFontRenderer3_vftable, "MyFontRenderer3_vftable" },  /* auto */
  { 0x0067BAE0, &dk2::MyTextMB_vftable, "MyTextMB_vftable" },  /* auto */
  { 0x0067BAF8, &dk2::MyTextFont_vftable, "MyTextFont_vftable" },  /* auto */
  { 0x0067BB28, &dk2::MyFontRendererBase_vftable, "MyFontRendererBase_vftable" },  /* auto */
  { 0x0067BB50, &dk2::MyTextFontBase_vftable, "MyTextFontBase_vftable" },  /* auto */
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
  { 0x00699688, &dk2::g_stateEntries, "g_stateEntries" },   /* auto */
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
  { 0x006C58A0, &dk2::zlib_fixed_mem___, "zlib_fixed_mem___" },  /* auto */
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
  { 0x006CE8A0, &dk2::idx, "idx" },  // ------------------  /* auto */
  { 0x006CEA10, &dk2::CDefaultPlayerInterface_instance, "CDefaultPlayerInterface_instance" },  /* auto */
  { 0x006D3954, &dk2::S2, "S2" },  // --------------------  /* auto */
  { 0x006D3CC8, &dk2::CBridge_instance, "CBridge_instance" },  /* auto */
  { 0x006D6458, &dk2::sceneLightningObjects, "sceneLightningObjects" },  /* auto */
  { 0x006DA458, &dk2::g_pCBridge_0, "g_pCBridge_0" },       /* auto */
  { 0x006DA4A4, &dk2::g_CWorld_ptr_0, "g_CWorld_ptr_0" },   /* auto */
  { 0x006DA8A8, &dk2::g_empty_string, "g_empty_string" },   /* auto */
  { 0x006DA8B0, &dk2::g_stateEntries2, "g_stateEntries2" },  /* auto */
  { 0x006DC424, &dk2::g_pWorld2, "g_pWorld2" },  // ------  /* auto */
  { 0x006E4FD8, &dk2::funcs_4A8BE5, "funcs_4A8BE5" },       /* auto */
  { 0x006E4FF0, &dk2::g_CShotFuns, "g_CShotFuns" },  // --  /* auto */
  { 0x006E504C, &dk2::g_MyCreatureCollection_ptr, "g_MyCreatureCollection_ptr" },  /* auto */
  { 0x006E5050, &dk2::g_pWorld, "g_pWorld" },  // --------  /* auto */
  { 0x006E5054, &dk2::g_pCWorld, "g_pCWorld" },  // ------  /* auto */
  { 0x006E5238, &dk2::g_charMB_buf, "g_charMB_buf" },       /* auto */
  { 0x006EB988, &dk2::Stream, "Stream" },  // ------------  /* auto */
  { 0x006ECA60, &dk2::Obj6ECA60_instance, "Obj6ECA60_instance" },  /* auto */
  { 0x006ECAE0, &dk2::Obj6ECAE0_instance, "Obj6ECAE0_instance" },  /* auto */
  { 0x006ED484, &dk2::g_CWorld_ptr, "g_CWorld_ptr" },       /* auto */
  { 0x006ED490, &dk2::g_jobRooms, "g_jobRooms" },  // ----  /* auto */
  { 0x006ED540, &dk2::sceneObjectsPresent, "sceneObjectsPresent" },  /* auto */
  { 0x006EE540, &dk2::sceneObjects, "sceneObjects" },       /* auto */
  { 0x006F2548, &dk2::g_neutralPlayerId, "g_neutralPlayerId" },  /* auto */
  { 0x006F254C, &dk2::g_goodPlayerId, "g_goodPlayerId" },   /* auto */
  { 0x006F2A08, &dk2::CWorld_instance, "CWorld_instance" },  /* auto */
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
  { 0x0073E9D0, &dk2::g_pFontObj_73E9D0, "g_pFontObj_73E9D0" },  /* auto */
  { 0x0073E9D8, &dk2::g_mySurface_p2, "g_mySurface_p2" },   /* auto */
  { 0x0073EDC8, &dk2::MovieRenderer_instance, "MovieRenderer_instance" },  /* auto */
  { 0x0073F580, &dk2::CFrontEndComponent_MovieRenderer_static_listeners, "CFrontEndComponent_MovieRenderer_static_listeners" },  /* auto */
  { 0x0073F594, &dk2::g_pMovieRenderer, "g_pMovieRenderer" },  /* auto */
  { 0x0073FC24, &dk2::SrcStr, "SrcStr" },  // ------------  /* auto */
  { 0x0073FC58, &dk2::Destination, "Destination" },  // --  /* auto */
  { 0x0073FE78, &dk2::Block, "Block" },  // --------------  /* auto */
  { 0x0073FE90, &dk2::MyTextRenderer_instance, "MyTextRenderer_instance" },  /* auto */
  { 0x0073FF70, &dk2::g_surfArr, "g_surfArr" },  // ------  /* auto */
  { 0x0074033C, &dk2::lpMultiByteStr, "lpMultiByteStr" },   /* auto */
  { 0x00740340, &dk2::BtnSize, "BtnSize" },  // ----------  /* auto */
  { 0x00740780, &dk2::g_wchar_buf, "g_wchar_buf" },  // --  /* auto */
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
  { 0x00741550, &dk2::g_pMyMbStringList_idx1091, "g_pMyMbStringList_idx1091" },  /* auto */
  { 0x00741554, &dk2::g_pMyMbStringList_idx1056_1081, "g_pMyMbStringList_idx1056_1081" },  /* auto */
  { 0x00741558, &dk2::g_pMyMbStringList_idx1000_1023, "g_pMyMbStringList_idx1000_1023" },  /* auto */
  { 0x0074155C, &dk2::g_pMyMbStringList_idx1090, "g_pMyMbStringList_idx1090" },  /* auto */
  { 0x0074156C, &dk2::g_pMyFontText1, "g_pMyFontText1" },   /* auto */
  { 0x00741570, &dk2::g_pMyFontText2, "g_pMyFontText2" },   /* auto */
  { 0x00741574, &dk2::g_pMyFontText3, "g_pMyFontText3" },   /* auto */
  { 0x00741578, &dk2::g_pMyFontText4, "g_pMyFontText4" },   /* auto */
  { 0x0074157C, &dk2::g_pMyFontText5, "g_pMyFontText5" },   /* auto */
  { 0x00741580, &dk2::g_pMyFontText6, "g_pMyFontText6" },   /* auto */
  { 0x00741584, &dk2::g_pMyFontText7, "g_pMyFontText7" },   /* auto */
  { 0x00741588, &dk2::g_pMyFontText8, "g_pMyFontText8" },   /* auto */
  { 0x0074158C, &dk2::g_pMyFontText9, "g_pMyFontText9" },   /* auto */
  { 0x00741594, &dk2::g_pMyMbStringList_idx1024, "g_pMyMbStringList_idx1024" },  /* auto */
  { 0x00741598, &dk2::g_pMyMbStringList_idx1025, "g_pMyMbStringList_idx1025" },  /* auto */
  { 0x0074159C, &dk2::g_pMyMbStringList_idx1026, "g_pMyMbStringList_idx1026" },  /* auto */
  { 0x007415A0, &dk2::g_pMyMbStringList_idx1027, "g_pMyMbStringList_idx1027" },  /* auto */
  { 0x007415A4, &dk2::g_pMyMbStringList_idx1028, "g_pMyMbStringList_idx1028" },  /* auto */
  { 0x007415A8, &dk2::g_pMyMbStringList_idx1029, "g_pMyMbStringList_idx1029" },  /* auto */
  { 0x007415C0, &dk2::Buffer, "Buffer" },  // ------------  /* auto */
  { 0x007416C8, &dk2::TbBMPLoader_instance, "TbBMPLoader_instance" },  /* auto */
  { 0x00741C28, &dk2::TbPNGLoader_instance, "TbPNGLoader_instance" },  /* auto */
  { 0x00742070, &dk2::TbTQILoader_instance, "TbTQILoader_instance" },  /* auto */
  { 0x007428A0, &dk2::ProbablyConsole_instance, "ProbablyConsole_instance" },  /* auto */
  { 0x00756EC8, &dk2::client_rect, "client_rect" },  // --  /* auto */
  { 0x00756EE8, &dk2::MyGame_instance, "MyGame_instance" },  /* auto */
  { 0x00758048, &dk2::ddraw_device_count, "ddraw_device_count" },  /* auto */
  { 0x0075804C, &dk2::dd_index, "dd_index" },  // --------  /* auto */
  { 0x00758050, &dk2::ddraw_devices, "ddraw_devices" },     /* auto */
  { 0x00758160, &dk2::pMldPlay_instance, "pMldPlay_instance" },  /* auto */
  { 0x00758340, &dk2::MyResources_instance, "MyResources_instance" },  /* auto */
  { 0x0075B310, &dk2::formattedString, "formattedString" },  /* auto */
  { 0x0075B418, &dk2::Data, "Data" },  // ----------------  /* auto */
  { 0x0075B468, &dk2::MySound_ptr, "MySound_ptr" },  // --  /* auto */
  { 0x0075B880, &dk2::CSoundSystem_instance, "CSoundSystem_instance" },  /* auto */
  { 0x0075CA68, &dk2::g2_sceneWidth, "g2_sceneWidth" },     /* auto */
  { 0x00760A98, &dk2::g_vec_760A98, "g_vec_760A98" },       /* auto */
  { 0x00760AA8, &dk2::g_cullFrom, "g_cullFrom" },  // ----  /* auto */
  { 0x00760AB8, &dk2::g_camState, "g_camState" },  // ----  /* auto */
  { 0x00760B0C, &dk2::dd_gamma_control, "dd_gamma_control" },  /* auto */
  { 0x00760B14, &dk2::g_pNewObj571B3B_root, "g_pNewObj571B3B_root" },  /* auto */
  { 0x00760B18, &dk2::g_vec_760B18, "g_vec_760B18" },       /* auto */
  { 0x00760B28, &dk2::g_vec_760B28, "g_vec_760B28" },       /* auto */
  { 0x00760B38, &dk2::g_vec_760B38, "g_vec_760B38" },       /* auto */
  { 0x00760B44, &dk2::g2_sceneHeight, "g2_sceneHeight" },   /* auto */
  { 0x00760B4C, &dk2::g_cullTo, "g_cullTo" },  // --------  /* auto */
  { 0x00760B54, &dk2::g_sceneWidth, "g_sceneWidth" },       /* auto */
  { 0x00760B5C, &dk2::g2_sceneLeft, "g2_sceneLeft" },       /* auto */
  { 0x00760B6C, &dk2::g_pNewObj571B3B, "g_pNewObj571B3B" },  /* auto */
  { 0x00760B70, &dk2::g_vec_760B70, "g_vec_760B70" },       /* auto */
  { 0x00760B88, &dk2::g_sceneHeight, "g_sceneHeight" },     /* auto */
  { 0x00760B90, &dk2::g_NewObj571B3B_hashTable, "g_NewObj571B3B_hashTable" },  /* auto */
  { 0x00764B90, &dk2::mydd_scene, "mydd_scene" },  // ----  /* auto */
  { 0x00764BBC, &dk2::g2_sceneTop, "g2_sceneTop" },  // --  /* auto */
  { 0x00764BC0, &dk2::EngineTestCross_a31x400_idx, "EngineTestCross_a31x400_idx" },  /* auto */
  { 0x00764BC4, &dk2::EngineTestLight_a31x400_idx, "EngineTestLight_a31x400_idx" },  /* auto */
  { 0x00764BC8, &dk2::EngineTextureWhite_a31x400_idx, "EngineTextureWhite_a31x400_idx" },  /* auto */
  { 0x00764BD8, &dk2::g_pNewObj571B3B_end, "g_pNewObj571B3B_end" },  /* auto */
  { 0x00764BE8, &dk2::gamma_ramp, "gamma_ramp" },  // ----  /* auto */
  { 0x007651F4, &dk2::g_isCurDdSurfLost, "g_isCurDdSurfLost" },  /* auto */
  { 0x007651FC, &dk2::is3dInitialized, "is3dInitialized" },  /* auto */
  { 0x00765200, &dk2::mgsr_initialized, "mgsr_initialized" },  /* auto */
  { 0x00765218, &dk2::g_viewPos_765218, "g_viewPos_765218" },  /* auto */
  { 0x00765224, &dk2::g_pCEngine2DPrimitive, "g_pCEngine2DPrimitive" },  /* auto */
  { 0x00765228, &dk2::g_viewSize_765228, "g_viewSize_765228" },  /* auto */
  { 0x007656E8, &dk2::MyStringHashMap_MyScaledSurface_instance, "MyStringHashMap_MyScaledSurface_instance" },  /* auto */
  { 0x00765AF8, &dk2::MyEntryBuf_MyScaledSurface_instance, "MyEntryBuf_MyScaledSurface_instance" },  /* auto */
  { 0x00765B18, &dk2::MyHeap_increaseBlocks, "MyHeap_increaseBlocks" },  /* auto */
  { 0x00765DA0, &dk2::MyHeap_bufArr, "MyHeap_bufArr" },     /* auto */
  { 0x00765E28, &dk2::SPRS_MyScaledSurface_indices, "SPRS_MyScaledSurface_indices" },  /* auto */
  { 0x00766228, &dk2::CMemLoadIFFFile_instance, "CMemLoadIFFFile_instance" },  /* auto */
  { 0x00766658, &dk2::g_meshHolderList_first, "g_meshHolderList_first" },  /* auto */
  { 0x00766660, &dk2::MyStringHashMap_MyMeshResourceHolder_instance, "MyStringHashMap_MyMeshResourceHolder_instance" },  /* auto */
  { 0x00766A70, &dk2::g_meshHolderList_last, "g_meshHolderList_last" },  /* auto */
  { 0x00766A78, &dk2::g_vec_766A78, "g_vec_766A78" },       /* auto */
  { 0x00769A78, &dk2::ScreenObjectArr_instance, "ScreenObjectArr_instance" },  /* auto */
  { 0x0076AA80, &dk2::DrawTriangleList_lpwIndices, "DrawTriangleList_lpwIndices" },  /* auto */
  { 0x0076C280, &dk2::MyEntryBuf_Triangle24_instance, "MyEntryBuf_Triangle24_instance" },  /* auto */
  { 0x0076C28C, &dk2::g_flexibleVertices, "g_flexibleVertices" },  /* auto */
  { 0x0076C294, &dk2::mgsr_currentDrawFlags, "mgsr_currentDrawFlags" },  /* auto */
  { 0x0076C298, &dk2::g_vertices, "g_vertices" },  // ----  /* auto */
  { 0x0076C2B8, &dk2::mydd_triangles, "mydd_triangles" },   /* auto */
  { 0x0076C2E8, &dk2::g_lpwTrianglesIndices, "g_lpwTrianglesIndices" },  /* auto */
  { 0x0076C2F0, &dk2::lastSceneObject, "lastSceneObject" },  /* auto */
  { 0x0076C2F8, &dk2::sceneObj2E_f21_to_triangleIndices, "sceneObj2E_f21_to_triangleIndices" },  /* auto */
  { 0x0076D300, &dk2::MyEntryBuf_uint16_indices_instance, "MyEntryBuf_uint16_indices_instance" },  /* auto */
  { 0x0076D310, &dk2::drawnTrianglesArr, "drawnTrianglesArr" },  /* auto */
  { 0x0076F318, &dk2::MyEntryBuf_Triangle34_instance, "MyEntryBuf_Triangle34_instance" },  /* auto */
  { 0x0076F328, &dk2::MyEntryBuf_Vertex18_instance, "MyEntryBuf_Vertex18_instance" },  /* auto */
  { 0x0076F33C, &dk2::Triangle34_count, "Triangle34_count" },  /* auto */
  { 0x0076F350, &dk2::g_zMulArr_76F350, "g_zMulArr_76F350" },  /* auto */
  { 0x0076F358, &dk2::RenderData_instance_arr, "RenderData_instance_arr" },  /* auto */
  { 0x00779358, &dk2::__renderFun, "__renderFun" },  // --  /* auto */
  { 0x00779360, &dk2::g_zAddArr_779360, "g_zAddArr_779360" },  /* auto */
  { 0x0077937C, &dk2::g_bottom_77937C, "g_bottom_77937C" },  /* auto */
  { 0x00779388, &dk2::g_zAdd2Arr_779388, "g_zAdd2Arr_779388" },  /* auto */
  { 0x00779394, &dk2::g_fun_779394, "g_fun_779394" },       /* auto */
  { 0x00779398, &dk2::g_fun_779398, "g_fun_779398" },       /* auto */
  { 0x007793A8, &dk2::g_vectors, "g_vectors" },  // ------  /* auto */
  { 0x0077F3A8, &dk2::g_mat_77F3A8, "g_mat_77F3A8" },       /* auto */
  { 0x0077F3D0, &dk2::g_zMul2Arr_77F3D0, "g_zMul2Arr_77F3D0" },  /* auto */
  { 0x0077F3EC, &dk2::g_pSceneObject2E, "g_pSceneObject2E" },  /* auto */
  { 0x0077F3F0, &dk2::Uv2f_arr_instance, "Uv2f_arr_instance" },  /* auto */
  { 0x0077F3F4, &dk2::g_left_77F3F4, "g_left_77F3F4" },     /* auto */
  { 0x0077F3F8, &dk2::g_zMul3Arr_77F3F8, "g_zMul3Arr_77F3F8" },  /* auto */
  { 0x0077F400, &dk2::g_vecCol2, "g_vecCol2" },  // ------  /* auto */
  { 0x0077F458, &dk2::g_mat_77F458, "g_mat_77F458" },       /* auto */
  { 0x0077F480, &dk2::g_padNorm_x8, "g_padNorm_x8" },       /* auto */
  { 0x0077F498, &dk2::g_mat_77F498, "g_mat_77F498" },       /* auto */
  { 0x0077F4C0, &dk2::g_vec_77F4C0, "g_vec_77F4C0" },       /* auto */
  { 0x0077F4D8, &dk2::g_zAdd3Arr_77F4D8, "g_zAdd3Arr_77F4D8" },  /* auto */
  { 0x0077F4E4, &dk2::__addTriangleFun, "__addTriangleFun" },  /* auto */
  { 0x0077F4EC, &dk2::g_right_77F4EC, "g_right_77F4EC" },   /* auto */
  { 0x0077F4F8, &dk2::g_idxFlags, "g_idxFlags" },  // ----  /* auto */
  { 0x0077F8F8, &dk2::mydd_uvs, "mydd_uvs" },  // --------  /* auto */
  { 0x0077F938, &dk2::g_Idx3b_arr_instance, "g_Idx3b_arr_instance" },  /* auto */
  { 0x00780938, &dk2::g_top_780938, "g_top_780938" },       /* auto */
  { 0x0078095C, &dk2::shadows_lpSurface, "shadows_lpSurface" },  /* auto */
  { 0x00780960, &dk2::g_MyEntryBuf_MyScaledSurface_idxs, "g_MyEntryBuf_MyScaledSurface_idxs" },  /* auto */
  { 0x007820A8, &dk2::SceneObject2EList_instance, "SceneObject2EList_instance" },  /* auto */
  { 0x007820B8, &dk2::SceneObject30List_instance, "SceneObject30List_instance" },  /* auto */
  { 0x007820C4, &dk2::objectsToDraw_count, "objectsToDraw_count" },  /* auto */
  { 0x007820D0, &dk2::mpeg2__image_buf, "mpeg2__image_buf" },  /* auto */
  { 0x007920D0, &dk2::pSurfHashList2_2, "pSurfHashList2_2" },  /* auto */
  { 0x007920D4, &dk2::pSurfHashList2, "pSurfHashList2" },   /* auto */
  { 0x007920D8, &dk2::MyTextures_instance, "MyTextures_instance" },  /* auto */
  { 0x0079291C, &dk2::g_surfh_first, "g_surfh_first" },     /* auto */
  { 0x00792920, &dk2::g_surfDesc_8a8r8g8b, "g_surfDesc_8a8r8g8b" },  /* auto */
  { 0x00792938, &dk2::MyStringHashMap_MyCESurfHandle_instance, "MyStringHashMap_MyCESurfHandle_instance" },  /* auto */
  { 0x00792D48, &dk2::CEngineSurfaceScaler_instance, "CEngineSurfaceScaler_instance" },  /* auto */
  { 0x00792D60, &dk2::pSurfHashList, "pSurfHashList" },     /* auto */
  { 0x00792D68, &dk2::mydd_devTexture, "mydd_devTexture" },  /* auto */
  { 0x00792D98, &dk2::MyCEngineSurfDesc_argb32_instance, "MyCEngineSurfDesc_argb32_instance" },  /* auto */
  { 0x00792DFD, &dk2::g_surfDesc_8a8r8g8b_0, "g_surfDesc_8a8r8g8b_0" },  /* auto */
  { 0x00792E62, &dk2::MyCEngineSurfDesc_unk16_instance, "MyCEngineSurfDesc_unk16_instance" },  /* auto */
  { 0x00792EC8, &dk2::sizeHashTable_257, "sizeHashTable_257" },  /* auto */
  { 0x007932CC, &dk2::g_surfh_last, "g_surfh_last" },       /* auto */
  { 0x007932F0, &dk2::g_ppaths_7932F0, "g_ppaths_7932F0" },  /* auto */
  { 0x00793388, &dk2::CPCEngineInterface_instance_start, "CPCEngineInterface_instance_start" },  /* auto */
  { 0x007935C0, &dk2::g_paths_7935C0, "g_paths_7935C0" },   /* auto */
  { 0x00795640, &dk2::g_mat_arr_795640, "g_mat_arr_795640" },  /* auto */
  { 0x007956D0, &dk2::g_vec_arr_7956D0, "g_vec_arr_7956D0" },  /* auto */
  { 0x00795700, &dk2::g_pCBridge, "g_pCBridge" },  // ----  /* auto */
  { 0x00796170, &dk2::mpeg2_dc_dct_pred, "mpeg2_dc_dct_pred" },  /* auto */
  { 0x007962AC, &dk2::cmd_flag_DDD, "cmd_flag_DDD" },       /* auto */
  { 0x007962B0, &dk2::cmd_flag_DDD_value, "cmd_flag_DDD_value" },  /* auto */
  { 0x00797B74, &dk2::mgsr_buf_25635, "mgsr_buf_25635" },   /* auto */
  { 0x00797B7C, &dk2::mgsr_buf2_12835, "mgsr_buf2_12835" },  /* auto */
  { 0x0079CF90, &dk2::MyInputManagerCb_instance, "MyInputManagerCb_instance" },  /* auto */
  { 0x0079D020, &dk2::dd_hWnd, "dd_hWnd" },  // ----------  /* auto */
  { 0x0079D038, &dk2::g_renderSurfAabb, "g_renderSurfAabb" },  /* auto */
  { 0x0079D048, &dk2::pMyNBitTexture, "pMyNBitTexture" },   /* auto */
  { 0x0079D050, &dk2::g_surfAabb, "g_surfAabb" },  // ----  /* auto */
  { 0x0079D060, &dk2::g_myRenderSurface, "g_myRenderSurface" },  /* auto */
  { 0x0079D068, &dk2::My8BitTexture_instance, "My8BitTexture_instance" },  /* auto */
  { 0x0079D070, &dk2::My16BitTexture_instance, "My16BitTexture_instance" },  /* auto */
  { 0x0079D074, &dk2::My24BitTexture_instance, "My24BitTexture_instance" },  /* auto */
  { 0x0079D078, &dk2::My32BitTexture_instance, "My32BitTexture_instance" },  /* auto */
  { 0x0079D0A8, &dk2::PathName, "PathName" },  // --------  /* auto */
  { 0x0079D1D4, &dk2::g_dd_primaryAttachedSurf, "g_dd_primaryAttachedSurf" },  /* auto */
  { 0x0079D1D8, &dk2::g_mySurf_unused, "g_mySurf_unused" },  /* auto */
  { 0x0079D200, &dk2::g_primarySurf, "g_primarySurf" },     /* auto */
  { 0x0079D250, &dk2::DdModeList_instance, "DdModeList_instance" },  /* auto */
  { 0x0079D260, &dk2::bullfrogClassName, "bullfrogClassName" },  /* auto */
  { 0x0079D364, &dk2::g_pCurOffScreen, "g_pCurOffScreen" },  /* auto */
  { 0x0079D368, &dk2::FPUControlWordWithState_instance, "FPUControlWordWithState_instance" },  /* auto */
  { 0x0079D378, &dk2::g_offScreen, "g_offScreen" },  // --  /* auto */
  { 0x0079D3C8, &dk2::hWnd, "hWnd" },  // ----------------  /* auto */
  { 0x0079D3CC, &dk2::hBullfrogWindow, "hBullfrogWindow" },  /* auto */
  { 0x0079D3D0, &dk2::dk2dd, "dk2dd" },  // --------------  /* auto */
  { 0x0079D3D4, &dk2::lpDDPalette, "lpDDPalette" },  // --  /* auto */
  { 0x0079D3D8, &dk2::lpDDClipper, "lpDDClipper" },  // --  /* auto */
  { 0x0079D3DC, &dk2::g_isNeedBlt, "g_isNeedBlt" },  // --  /* auto */
  { 0x0079D3E0, &dk2::g_ignore_79D3E0, "g_ignore_79D3E0" },  /* auto */
  { 0x0079D3E4, &dk2::selectedDDGuid, "selectedDDGuid" },   /* auto */
  { 0x0079D3E8, &dk2::isSurfModeX, "isSurfModeX" },  // --  /* auto */
  { 0x0079D3F0, &dk2::lpSurfaceDD, "lpSurfaceDD" },  // --  /* auto */
  { 0x0079D418, &dk2::palleteEntries, "palleteEntries" },   /* auto */
  { 0x0079D818, &dk2::g_confSurfDesc2, "g_confSurfDesc2" },  /* auto */
  { 0x0079D830, &dk2::g_confSurfDesc, "g_confSurfDesc" },   /* auto */
  { 0x0079D848, &dk2::g_confSurfDesc3, "g_confSurfDesc3" },  /* auto */
  { 0x0079D860, &dk2::g_confSurfDesc4, "g_confSurfDesc4" },  /* auto */
  { 0x0079D980, &dk2::pathBuf, "pathBuf" },  // ----------  /* auto */
  { 0x0079DA88, &dk2::dk2HomeDir, "dk2HomeDir" },  // ----  /* auto */
  { 0x0079DBD0, &dk2::WinEventHandlers_instance, "WinEventHandlers_instance" },  /* auto */
  { 0x0079DC38, &dk2::g_confSurfDesc6, "g_confSurfDesc6" },  /* auto */
  { 0x0079DC50, &dk2::g_confSurfDesc5, "g_confSurfDesc5" },  /* auto */
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
  { 0x007A4790, &dk2::MyZlibArchive_instance, "MyZlibArchive_instance" },  /* auto */
  { 0x007A53B8, &dk2::MySoundLoader_instance, "MySoundLoader_instance" },  /* auto */
  { 0x007A5570, &dk2::lpCriticalSection, "lpCriticalSection" },  /* auto */
  { 0x007A5610, &dk2::MyTR2_instance, "MyTR2_instance" },   /* auto */
  { 0x007A5614, &dk2::MyTR5_instance, "MyTR5_instance" },   /* auto */
  { 0x007A5618, &dk2::MyTR6_instance, "MyTR6_instance" },   /* auto */
  { 0x007A561C, &dk2::MyCR3_instnce, "MyCR3_instnce" },     /* auto */
  { 0x007A5620, &dk2::MyCR1_instance, "MyCR1_instance" },   /* auto */
  { 0x007A5624, &dk2::MyCR0_instance, "MyCR0_instance" },   /* auto */
  { 0x007A5628, &dk2::MyTR4_instance, "MyTR4_instance" },   /* auto */
  { 0x007A562C, &dk2::MyDR0_instance, "MyDR0_instance" },   /* auto */
  { 0x007A5634, &dk2::MyCR2_instance, "MyCR2_instance" },   /* auto */
  { 0x007A5638, &dk2::MyFontRenderer0_instance, "MyFontRenderer0_instance" },  /* auto */
  { 0x007A563C, &dk2::MyFontRenderer2_instance, "MyFontRenderer2_instance" },  /* auto */
  { 0x007A5640, &dk2::MyFontRenderer3_instance, "MyFontRenderer3_instance" },  /* auto */
  { 0x007A5644, &dk2::MyFontRenderer4_instance, "MyFontRenderer4_instance" },  /* auto */
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
  { 0x007A7028, &dk2::mgsr_buf_width, "mgsr_buf_width" },   /* auto */
  { 0x007A702C, &dk2::mgsr_buf2_width, "mgsr_buf2_width" },  /* auto */
  { 0x007A7034, &dk2::mgsr_lockedBuf_dw256x256, "mgsr_lockedBuf_dw256x256" },  /* auto */
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
  { 0x00401000, (void *) &dk2::objarr_init, "objarr_init" },  /* auto */
  { 0x00401030, (void *) &dk2::CEntryComponent_static_init, "CEntryComponent_static_init" },  /* auto */
  { 0x00401050, (void *) &dk2::CEntryComponent_static_destroy, "CEntryComponent_static_destroy" },  /* auto */
  { 0x00401510, (void *) &dk2::CComponent_onKeyboardActionWithCtrl, "CComponent_onKeyboardActionWithCtrl" },  /* auto */
  { 0x00401570, (void *) &dk2::CComponent_onWindowMsg, "CComponent_onWindowMsg" },  /* auto */
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
  { 0x00411900, (void *) &dk2::CListBox_411900, "CListBox_411900" },  /* auto */
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
  { 0x0042F730, (void *) &dk2::nullsub_12, "nullsub_12" },  /* auto */
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
  { 0x00450470, (void *) &dk2::CMap_450470, "CMap_450470" },  /* auto */
  { 0x004526C0, (void *) &dk2::sub_4526C0, "sub_4526C0" },  /* auto */
  { 0x00452970, (void *) &dk2::sub_452970, "sub_452970" },  /* auto */
  { 0x00452AB0, (void *) &dk2::static_Vec3f_sub_452AB0, "static_Vec3f_sub_452AB0" },  /* auto */
  { 0x00452B20, (void *) &dk2::sub_452B20, "sub_452B20" },  /* auto */
  { 0x00452F20, (void *) &dk2::sub_452F20, "sub_452F20" },  /* auto */
  { 0x00454FD0, (void *) &dk2::sub_454FD0, "sub_454FD0" },  /* auto */
  { 0x00455000, (void *) &dk2::sub_455000, "sub_455000" },  /* auto */
  { 0x004558F0, (void *) &dk2::MyMapElement_calcChecksum, "MyMapElement_calcChecksum" },  /* auto */
  { 0x00455D40, (void *) &dk2::CWorld_455D40, "CWorld_455D40" },  /* auto */
  { 0x004560F0, (void *) &dk2::CState_4560F0, "CState_4560F0" },  /* auto */
  { 0x00459C20, (void *) &dk2::sub_459C20, "sub_459C20" },  /* auto */
  { 0x0045AFC0, (void *) &dk2::sub_45AFC0, "sub_45AFC0" },  /* auto */
  { 0x00462850, (void *) &dk2::CState_462850, "CState_462850" },  /* auto */
  { 0x00463760, (void *) &dk2::sub_463760, "sub_463760" },  /* auto */
  { 0x00476060, (void *) &dk2::sub_476060, "sub_476060" },  /* auto */
  { 0x004762D0, (void *) &dk2::sub_4762D0, "sub_4762D0" },  /* auto */
  { 0x00477850, (void *) &dk2::sub_477850, "sub_477850" },  /* auto */
  { 0x004778E0, (void *) &dk2::sub_4778E0, "sub_4778E0" },  /* auto */
  { 0x004780C0, (void *) &dk2::CompareFunction, "CompareFunction" },  /* auto */
  { 0x00478680, (void *) &dk2::State_cpp_478680, "State_cpp_478680" },  /* auto */
  { 0x004787F0, (void *) &dk2::sub_4787F0, "sub_4787F0" },  /* auto */
  { 0x00478800, (void *) &dk2::CState_478800, "CState_478800" },  /* auto */
  { 0x00478B40, (void *) &dk2::__RTC_NumErrors, "__RTC_NumErrors" },  /* auto */
  { 0x00478F00, (void *) &dk2::sub_478F00, "sub_478F00" },  /* auto */
  { 0x004798E0, (void *) &dk2::stateEntries_static_init, "stateEntries_static_init" },  /* auto */
  { 0x004798F0, (void *) &dk2::stateEntries_init, "stateEntries_init" },  /* auto */
  { 0x0047BBD0, (void *) &dk2::stateEntries2_static_init, "stateEntries2_static_init" },  /* auto */
  { 0x0047BBE0, (void *) &dk2::stateEntries2_init, "stateEntries2_init" },  /* auto */
  { 0x004805F0, (void *) &dk2::sub_4805F0, "sub_4805F0" },  /* auto */
  { 0x00484940, (void *) &dk2::ret_0_0args_0, "ret_0_0args_0" },  /* auto */
  { 0x004859E0, (void *) &dk2::sub_4859E0, "sub_4859E0" },  /* auto */
  { 0x0048AB20, (void *) &dk2::sub_48AB20, "sub_48AB20" },  /* auto */
  { 0x0048CAD0, (void *) &dk2::sub_48CAD0, "sub_48CAD0" },  /* auto */
  { 0x0048F0F0, (void *) &dk2::sub_48F0F0, "sub_48F0F0" },  /* auto */
  { 0x00491C20, (void *) &dk2::loadJcnKeyboard, "loadJcnKeyboard" },  /* auto */
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
  { 0x004ABCA0, (void *) &dk2::CShotFun1_static_init, "CShotFun1_static_init" },  /* auto */
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
  { 0x004BB130, (void *) &dk2::Player_cpp_4BB130, "Player_cpp_4BB130" },  /* auto */
  { 0x004BFF60, (void *) &dk2::sub_4BFF60, "sub_4BFF60" },  /* auto */
  { 0x004C04C0, (void *) &dk2::sub_4C04C0, "sub_4C04C0" },  /* auto */
  { 0x004C06F0, (void *) &dk2::sub_4C06F0, "sub_4C06F0" },  /* auto */
  { 0x004C2C30, (void *) &dk2::sub_4C2C30, "sub_4C2C30" },  /* auto */
  { 0x004C3000, (void *) &dk2::CPlayer_4C3000, "CPlayer_4C3000" },  /* auto */
  { 0x004C3670, (void *) &dk2::sub_4C3670, "sub_4C3670" },  /* auto */
  { 0x004C3A20, (void *) &dk2::sub_4C3A20, "sub_4C3A20" },  /* auto */
  { 0x004C3B50, (void *) &dk2::sub_4C3B50, "sub_4C3B50" },  /* auto */
  { 0x004C4B90, (void *) &dk2::sub_4C4B90, "sub_4C4B90" },  /* auto */
  { 0x004C6510, (void *) &dk2::sub_4C6510, "sub_4C6510" },  /* auto */
  { 0x004C6610, (void *) &dk2::sub_4C6610, "sub_4C6610" },  /* auto */
  { 0x004C6AE0, (void *) &dk2::CPlayer_4C6AE0, "CPlayer_4C6AE0" },  /* auto */
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
  { 0x004D0E60, (void *) &dk2::CCreature_4D0E60, "CCreature_4D0E60" },  /* auto */
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
  { 0x004D56E0, (void *) &dk2::sub_4D56E0, "sub_4D56E0" },  /* auto */
  { 0x004D6A40, (void *) &dk2::sub_4D6A40, "sub_4D6A40" },  /* auto */
  { 0x004D7180, (void *) &dk2::sub_4D7180, "sub_4D7180" },  /* auto */
  { 0x004D72D0, (void *) &dk2::sub_4D72D0, "sub_4D72D0" },  /* auto */
  { 0x004D7460, (void *) &dk2::sub_4D7460, "sub_4D7460" },  /* auto */
  { 0x004D75F0, (void *) &dk2::CPlayer_4D75F0, "CPlayer_4D75F0" },  /* auto */
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
  { 0x004F2910, (void *) &dk2::sub_4F2910, "sub_4F2910" },  /* auto */
  { 0x004F2930, (void *) &dk2::sub_4F2930, "sub_4F2930" },  /* auto */
  { 0x004F2950, (void *) &dk2::sub_4F2950, "sub_4F2950" },  /* auto */
  { 0x004F2F50, (void *) &dk2::sub_4F2F50, "sub_4F2F50" },  /* auto */
  { 0x004F6140, (void *) &dk2::sub_4F6140, "sub_4F6140" },  /* auto */
  { 0x004F8180, (void *) &dk2::sub_4F8180, "sub_4F8180" },  /* auto */
  { 0x004FAC40, (void *) &dk2::CPlayer_4FAC40, "CPlayer_4FAC40" },  /* auto */
  { 0x00505310, (void *) &dk2::sub_505310, "sub_505310" },  /* auto */
  { 0x005056E0, (void *) &dk2::MyBlueprintList_5056E0, "MyBlueprintList_5056E0" },  /* auto */
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
  { 0x005113C0, (void *) &dk2::CWorld_5113C0, "CWorld_5113C0" },  /* auto */
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
  { 0x0051E6D0, (void *) &dk2::CWorld_load_51E6D0, "CWorld_load_51E6D0" },  /* auto */
  { 0x0051EA40, (void *) &dk2::CWorld_load_51EA40, "CWorld_load_51EA40" },  /* auto */
  { 0x0051EB00, (void *) &dk2::CWorld_load_51EB00, "CWorld_load_51EB00" },  /* auto */
  { 0x0051EB30, (void *) &dk2::sub_51EB30, "sub_51EB30" },  /* auto */
  { 0x0051EB50, (void *) &dk2::CWorld_loadTerrain_51EB50, "CWorld_loadTerrain_51EB50" },  /* auto */
  { 0x0051EC30, (void *) &dk2::CWorld_load_51EC30, "CWorld_load_51EC30" },  /* auto */
  { 0x0051EC60, (void *) &dk2::CWorld_load_51EC60, "CWorld_load_51EC60" },  /* auto */
  { 0x0051EE40, (void *) &dk2::sub_51EE40, "sub_51EE40" },  /* auto */
  { 0x0051EE60, (void *) &dk2::CWorld_loadRoom_51EE60, "CWorld_loadRoom_51EE60" },  /* auto */
  { 0x0051EF80, (void *) &dk2::CWorld_load_51EF80, "CWorld_load_51EF80" },  /* auto */
  { 0x0051F0B0, (void *) &dk2::sub_51F0B0, "sub_51F0B0" },  /* auto */
  { 0x0051F220, (void *) &dk2::sub_51F220, "sub_51F220" },  /* auto */
  { 0x0051F240, (void *) &dk2::CWorld_loadCreature_51F240, "CWorld_loadCreature_51F240" },  /* auto */
  { 0x0051FCB0, (void *) &dk2::sub_51FCB0, "sub_51FCB0" },  /* auto */
  { 0x0051FCD0, (void *) &dk2::CWorld_loadKeeperSpell_51FCD0, "CWorld_loadKeeperSpell_51FCD0" },  /* auto */
  { 0x0051FDE0, (void *) &dk2::sub_51FDE0, "sub_51FDE0" },  /* auto */
  { 0x0051FE00, (void *) &dk2::CWorld_loadCreatureSpell_51FE00, "CWorld_loadCreatureSpell_51FE00" },  /* auto */
  { 0x0051FF10, (void *) &dk2::sub_51FF10, "sub_51FF10" },  /* auto */
  { 0x0051FF30, (void *) &dk2::CWorld_loadDoor_51FF30, "CWorld_loadDoor_51FF30" },  /* auto */
  { 0x00520040, (void *) &dk2::sub_520040, "sub_520040" },  /* auto */
  { 0x00520060, (void *) &dk2::CWorld_loadTrap_520060, "CWorld_loadTrap_520060" },  /* auto */
  { 0x00520180, (void *) &dk2::CWorld_loadCreature_520180, "CWorld_loadCreature_520180" },  /* auto */
  { 0x00520460, (void *) &dk2::CWorld_loadCreature_520460, "CWorld_loadCreature_520460" },  /* auto */
  { 0x005208B0, (void *) &dk2::CWorld_loadCreature_5208B0, "CWorld_loadCreature_5208B0" },  /* auto */
  { 0x00520BB0, (void *) &dk2::CWorld_loadObject_520BB0, "CWorld_loadObject_520BB0" },  /* auto */
  { 0x00520E50, (void *) &dk2::CWorld_loadTrap_520E50, "CWorld_loadTrap_520E50" },  /* auto */
  { 0x00520F40, (void *) &dk2::CWorld_loadDoor_520F40, "CWorld_loadDoor_520F40" },  /* auto */
  { 0x005211A0, (void *) &dk2::CWorld_loadActionPoint_5211A0, "CWorld_loadActionPoint_5211A0" },  /* auto */
  { 0x005212A0, (void *) &dk2::CWorld_load_5212A0, "CWorld_load_5212A0" },  /* auto */
  { 0x005212D0, (void *) &dk2::CWorld_loadDeadBody_WorldWDL_cpp_5212D0, "CWorld_loadDeadBody_WorldWDL_cpp_5212D0" },  /* auto */
  { 0x00521380, (void *) &dk2::CWorld_loadEffectGenerator_521380, "CWorld_loadEffectGenerator_521380" },  /* auto */
  { 0x00521420, (void *) &dk2::CWorld_loadRoom_521420, "CWorld_loadRoom_521420" },  /* auto */
  { 0x005215F0, (void *) &dk2::CWorld_loadCamera_5215F0, "CWorld_loadCamera_5215F0" },  /* auto */
  { 0x00521630, (void *) &dk2::sub_521630, "sub_521630" },  /* auto */
  { 0x00521650, (void *) &dk2::CWorld_loadObject_521650, "CWorld_loadObject_521650" },  /* auto */
  { 0x00521770, (void *) &dk2::CWorld_load_521770, "CWorld_load_521770" },  /* auto */
  { 0x00521790, (void *) &dk2::CWorld_load_521790, "CWorld_load_521790" },  /* auto */
  { 0x005217F0, (void *) &dk2::sub_5217F0, "sub_5217F0" },  /* auto */
  { 0x00521810, (void *) &dk2::CWorld_loadShot_521810, "CWorld_loadShot_521810" },  /* auto */
  { 0x00521930, (void *) &dk2::CWorld_loadTriggers_521930, "CWorld_loadTriggers_521930" },  /* auto */
  { 0x00521A60, (void *) &dk2::CWorld_loadTrigger_521A60, "CWorld_loadTrigger_521A60" },  /* auto */
  { 0x00521AB0, (void *) &dk2::CWorld_loadTrigger_521AB0, "CWorld_loadTrigger_521AB0" },  /* auto */
  { 0x00521B00, (void *) &dk2::CWorld_load_521B00, "CWorld_load_521B00" },  /* auto */
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
  { 0x00525D30, (void *) &dk2::MyGame_prepareWithSettings, "MyGame_prepareWithSettings" },  /* auto */
  { 0x00527440, (void *) &dk2::CNetworkComponent_static_init, "CNetworkComponent_static_init" },  /* auto */
  { 0x00527460, (void *) &dk2::CNetworkComponent_static_destroy, "CNetworkComponent_static_destroy" },  /* auto */
  { 0x00527890, (void *) &dk2::CNetworkComponent_onKeyboardActionWithCtrl, "CNetworkComponent_onKeyboardActionWithCtrl" },  /* auto */
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
  { 0x0052FF10, (void *) &dk2::CTextInput_52FF10, "CTextInput_52FF10" },  /* auto */
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
  { 0x00533450, (void *) &dk2::MyMbStringList_idx1091_getMbString_, "MyMbStringList_idx1091_getMbString_" },  /* auto */
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
  { 0x00539490, (void *) &dk2::CFrontEndComponent_539490, "CFrontEndComponent_539490" },  /* auto */
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
  { 0x0053C070, (void *) &dk2::sub_53C070, "sub_53C070" },  /* auto */
  { 0x0053C120, (void *) &dk2::sub_53C120, "sub_53C120" },  /* auto */
  { 0x0053C270, (void *) &dk2::CFrontEndComponent_MovieRenderer_onKeyboardAction, "CFrontEndComponent_MovieRenderer_onKeyboardAction" },  /* auto */
  { 0x0053C2A0, (void *) &dk2::CFrontEndComponent_MovieRenderer_onMouseAction, "CFrontEndComponent_MovieRenderer_onMouseAction" },  /* auto */
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
  { 0x00549220, (void *) &dk2::CFrontEndComponent_execute_549220, "CFrontEndComponent_execute_549220" },  /* auto */
  { 0x00549420, (void *) &dk2::CFrontEndComponent_549420, "CFrontEndComponent_549420" },  /* auto */
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
  { 0x0054DFF0, (void *) &dk2::CWindow_fun, "CWindow_fun" },  /* auto */
  { 0x0054E4D0, (void *) &dk2::sub_54E4D0, "sub_54E4D0" },  /* auto */
  { 0x0054E670, (void *) &dk2::sub_54E670, "sub_54E670" },  /* auto */
  { 0x0054E720, (void *) &dk2::sub_54E720, "sub_54E720" },  /* auto */
  { 0x0054E740, (void *) &dk2::CTextBox_54E740, "CTextBox_54E740" },  /* auto */
  { 0x0054E8E0, (void *) &dk2::sub_54E8E0, "sub_54E8E0" },  /* auto */
  { 0x0054EA90, (void *) &dk2::sub_54EA90, "sub_54EA90" },  /* auto */
  { 0x0054EDF0, (void *) &dk2::sub_54EDF0, "sub_54EDF0" },  /* auto */
  { 0x0054EE10, (void *) &dk2::sub_54EE10, "sub_54EE10" },  /* auto */
  { 0x0054EE30, (void *) &dk2::_malloc_0, "_malloc_0" },    /* auto */
  { 0x0054F050, (void *) &dk2::g_surfArr_static_init, "g_surfArr_static_init" },  /* auto */
  { 0x0054F070, (void *) &dk2::MyTextRenderer_static_init, "MyTextRenderer_static_init" },  /* auto */
  { 0x0054F090, (void *) &dk2::MyTextRenderer_static_destroy, "MyTextRenderer_static_destroy" },  /* auto */
  { 0x0054F160, (void *) &dk2::CListBox_LoadGame_SaveList_render, "CListBox_LoadGame_SaveList_render" },  /* auto */
  { 0x0054FA60, (void *) &dk2::sub_54FA60, "sub_54FA60" },  /* auto */
  { 0x0054FC40, (void *) &dk2::sub_54FC40, "sub_54FC40" },  /* auto */
  { 0x0054FCE0, (void *) &dk2::sub_54FCE0, "sub_54FCE0" },  /* auto */
  { 0x0054FF00, (void *) &dk2::sub_54FF00, "sub_54FF00" },  /* auto */
  { 0x005501F0, (void *) &dk2::sub_5501F0, "sub_5501F0" },  /* auto */
  { 0x00550420, (void *) &dk2::CVerticalSlider_550420, "CVerticalSlider_550420" },  /* auto */
  { 0x005507E0, (void *) &dk2::sub_5507E0, "sub_5507E0" },  /* auto */
  { 0x00550A10, (void *) &dk2::CVerticalSlider_550A10, "CVerticalSlider_550A10" },  /* auto */
  { 0x00550D90, (void *) &dk2::sub_550D90, "sub_550D90" },  /* auto */
  { 0x00551490, (void *) &dk2::CVerticalSlider_551490, "CVerticalSlider_551490" },  /* auto */
  { 0x00551820, (void *) &dk2::CVerticalSlider_551820, "CVerticalSlider_551820" },  /* auto */
  { 0x00551BA0, (void *) &dk2::CVerticalSlider_551BA0, "CVerticalSlider_551BA0" },  /* auto */
  { 0x00551F20, (void *) &dk2::sub_551F20, "sub_551F20" },  /* auto */
  { 0x00551FE0, (void *) &dk2::sub_551FE0, "sub_551FE0" },  /* auto */
  { 0x005520A0, (void *) &dk2::CVerticalSlider_5520A0, "CVerticalSlider_5520A0" },  /* auto */
  { 0x005524F0, (void *) &dk2::sub_5524F0, "sub_5524F0" },  /* auto */
  { 0x00552620, (void *) &dk2::sub_552620, "sub_552620" },  /* auto */
  { 0x00552770, (void *) &dk2::sub_552770, "sub_552770" },  /* auto */
  { 0x00552990, (void *) &dk2::sub_552990, "sub_552990" },  /* auto */
  { 0x00552BE0, (void *) &dk2::all_components_fillStaticListeners, "all_components_fillStaticListeners" },  /* auto */
  { 0x00552C30, (void *) &dk2::all_components_clearStaticListeners, "all_components_clearStaticListeners" },  /* auto */
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
  { 0x00553A60, (void *) &dk2::MyMbStringList_idx1091_getMbString, "MyMbStringList_idx1091_getMbString" },  /* auto */
  { 0x00553A80, (void *) &dk2::MyMbStringList_getinstance_idx1091, "MyMbStringList_getinstance_idx1091" },  /* auto */
  { 0x00553A90, (void *) &dk2::MyMbStringList_getMbString_idx1056_1081, "MyMbStringList_getMbString_idx1056_1081" },  /* auto */
  { 0x00553AC0, (void *) &dk2::MyMbStringList_getMbString_idx1000_1023, "MyMbStringList_getMbString_idx1000_1023" },  /* auto */
  { 0x00553AF0, (void *) &dk2::MyMbStringList_idx1090_getMbString, "MyMbStringList_idx1090_getMbString" },  /* auto */
  { 0x00553B10, (void *) &dk2::MyMbStringList_getInstance_idx1090, "MyMbStringList_getInstance_idx1090" },  /* auto */
  { 0x00553B20, (void *) &dk2::MyLangObj_static_toUniToMB_2, "MyLangObj_static_toUniToMB_2" },  /* auto */
  { 0x00553B90, (void *) &dk2::MBToUni_convert, "MBToUni_convert" },  /* auto */
  { 0x00553C00, (void *) &dk2::sub_553C00, "sub_553C00" },  /* auto */
  { 0x00553DD0, (void *) &dk2::MyMbStringList_getMbString_idx1024_1029, "MyMbStringList_getMbString_idx1024_1029" },  /* auto */
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
  { 0x00554380, (void *) &dk2::ProbablyConsole_static_init, "ProbablyConsole_static_init" },  /* auto */
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
  { 0x005575F0, (void *) &dk2::collect_devices_DDEnumDevicesCB, "collect_devices_DDEnumDevicesCB" },  /* auto */
  { 0x00557820, (void *) &dk2::isDevSupports_D3DPTFILTERCAPS_LINEARMIPNEAREST, "isDevSupports_D3DPTFILTERCAPS_LINEARMIPNEAREST" },  /* auto */
  { 0x005578E0, (void *) &dk2::getDevIdxSupportsLinearPerspective, "getDevIdxSupportsLinearPerspective" },  /* auto */
  { 0x00557980, (void *) &dk2::collect_displayModes_DDEnumCB, "collect_displayModes_DDEnumCB" },  /* auto */
  { 0x00557A10, (void *) &dk2::collect_displayModes_DDEnumModesCB, "collect_displayModes_DDEnumModesCB" },  /* auto */
  { 0x00557AF0, (void *) &dk2::sub_557AF0, "sub_557AF0" },  /* auto */
  { 0x00557EE0, (void *) &dk2::collect_namesAndDescs_DDEnumCB, "collect_namesAndDescs_DDEnumCB" },  /* auto */
  { 0x00557FD0, (void *) &dk2::isOsVersionGE, "isOsVersionGE" },  /* auto */
  { 0x00558A00, (void *) &dk2::MyInputManagerCb_static_setMousePos_, "MyInputManagerCb_static_setMousePos_" },  /* auto */
  { 0x00558C70, (void *) &dk2::myCustomDefWindowProcA, "myCustomDefWindowProcA" },  /* auto */
  { 0x00558DD0, (void *) &dk2::MyGame_D3DENUMDEVICESCALLBACK, "MyGame_D3DENUMDEVICESCALLBACK" },  /* auto */
  { 0x00559050, (void *) &dk2::MyGame_static_559050_parse, "MyGame_static_559050_parse" },  /* auto */
  { 0x005594E0, (void *) &dk2::sub_5594E0, "sub_5594E0" },  /* auto */
  { 0x005595C0, (void *) &dk2::MyGame_debugMsg, "MyGame_debugMsg" },  /* auto */
  { 0x00559710, (void *) &dk2::static_MyGame_Event07_cb, "static_MyGame_Event07_cb" },  /* auto */
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
  { 0x0055CE80, (void *) &dk2::RegKey_initKeys, "RegKey_initKeys" },  /* auto */
  { 0x0055D530, (void *) &dk2::sub_55D530, "sub_55D530" },  /* auto */
  { 0x0055DD70, (void *) &dk2::___sub_55DD70_newCampagin, "___sub_55DD70_newCampagin" },  /* auto */
  { 0x0055DDF0, (void *) &dk2::RegKey_initNewCampagin, "RegKey_initNewCampagin" },  /* auto */
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
  { 0x0056A250, (void *) &dk2::TbDiscFile_loadFmt170, "TbDiscFile_loadFmt170" },  /* auto */
  { 0x0056A6D0, (void *) &dk2::TbDiscFile_loadFmt160, "TbDiscFile_loadFmt160" },  /* auto */
  { 0x0056AC80, (void *) &dk2::MyFormatLoader_loadFmt140, "MyFormatLoader_loadFmt140" },  /* auto */
  { 0x0056B210, (void *) &dk2::TbDiscFile_loadFmt270, "TbDiscFile_loadFmt270" },  /* auto */
  { 0x0056B740, (void *) &dk2::TbDiscFile_loadFmt250, "TbDiscFile_loadFmt250" },  /* auto */
  { 0x0056BCF0, (void *) &dk2::TbDiscFile_loadFmt150, "TbDiscFile_loadFmt150" },  /* auto */
  { 0x0056C4E0, (void *) &dk2::TbDiscFile_loadFmt220, "TbDiscFile_loadFmt220" },  /* auto */
  { 0x0056CBD0, (void *) &dk2::MyFormatLoader_loadFromTbDiscFile, "MyFormatLoader_loadFromTbDiscFile" },  /* auto */
  { 0x0056D2D0, (void *) &dk2::MyFormatLoader_loadFmt100, "MyFormatLoader_loadFmt100" },  /* auto */
  { 0x0056D880, (void *) &dk2::TbDiscFile_loadFmt240, "TbDiscFile_loadFmt240" },  /* auto */
  { 0x0056DAD0, (void *) &dk2::TbDiscFile_loadFmt180, "TbDiscFile_loadFmt180" },  /* auto */
  { 0x0056E300, (void *) &dk2::MyFormatLoader_loadFmt120, "MyFormatLoader_loadFmt120" },  /* auto */
  { 0x0056E900, (void *) &dk2::TbDiscFile_loadFmt260, "TbDiscFile_loadFmt260" },  /* auto */
  { 0x0056F090, (void *) &dk2::MyFormatLoader_loadFmt110, "MyFormatLoader_loadFmt110" },  /* auto */
  { 0x0056FA00, (void *) &dk2::TbDiscFile_loadFmt190, "TbDiscFile_loadFmt190" },  /* auto */
  { 0x005700A0, (void *) &dk2::sub_5700A0, "sub_5700A0" },  /* auto */
  { 0x00570210, (void *) &dk2::sub_570210, "sub_570210" },  /* auto */
  { 0x00570500, (void *) &dk2::sub_570500, "sub_570500" },  /* auto */
  { 0x00570630, (void *) &dk2::sub_570630, "sub_570630" },  /* auto */
  { 0x005707C0, (void *) &dk2::sub_5707C0, "sub_5707C0" },  /* auto */
  { 0x005708A0, (void *) &dk2::sub_5708A0, "sub_5708A0" },  /* auto */
  { 0x00570A20, (void *) &dk2::sub_570A20, "sub_570A20" },  /* auto */
  { 0x00571040, (void *) &dk2::MyFormatLoader_loadFmt130, "MyFormatLoader_loadFmt130" },  /* auto */
  { 0x00571290, (void *) &dk2::TbDiscFile_loadFmt210, "TbDiscFile_loadFmt210" },  /* auto */
  { 0x005716E0, (void *) &dk2::TbDiscFile_loadFmt230, "TbDiscFile_loadFmt230" },  /* auto */
  { 0x00571910, (void *) &dk2::set_g2_screenArea, "set_g2_screenArea" },  /* auto */
  { 0x00571940, (void *) &dk2::nullsub_26, "nullsub_26" },  /* auto */
  { 0x00571950, (void *) &dk2::nullsub_27, "nullsub_27" },  /* auto */
  { 0x00571960, (void *) &dk2::nullsub_28, "nullsub_28" },  /* auto */
  { 0x00571970, (void *) &dk2::nullsub_29, "nullsub_29" },  /* auto */
  { 0x00571980, (void *) &dk2::nullsub_30, "nullsub_30" },  /* auto */
  { 0x00571990, (void *) &dk2::MyCameraState_static_init, "MyCameraState_static_init" },  /* auto */
  { 0x00571A60, (void *) &dk2::nullsub_31, "nullsub_31" },  /* auto */
  { 0x00571A70, (void *) &dk2::sub_571A70, "sub_571A70" },  /* auto */
  { 0x00571A90, (void *) &dk2::sub_571A90, "sub_571A90" },  /* auto */
  { 0x00571AB0, (void *) &dk2::sub_571AB0, "sub_571AB0" },  /* auto */
  { 0x00571AD0, (void *) &dk2::sub_571AD0, "sub_571AD0" },  /* auto */
  { 0x00571AE0, (void *) &dk2::sub_571AE0, "sub_571AE0" },  /* auto */
  { 0x00571B00, (void *) &dk2::NewObj571B3B_add, "NewObj571B3B_add" },  /* auto */
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
  { 0x005735A0, (void *) &dk2::MyDLVec2i_static_sub_5735A0, "MyDLVec2i_static_sub_5735A0" },  /* auto */
  { 0x005737E0, (void *) &dk2::MyDLVec2i_static_sub_5737E0, "MyDLVec2i_static_sub_5737E0" },  /* auto */
  { 0x00573C20, (void *) &dk2::mydd_scene_destroy, "mydd_scene_destroy" },  /* auto */
  { 0x00573CF0, (void *) &dk2::configureFlagsAndTexturesCount, "configureFlagsAndTexturesCount" },  /* auto */
  { 0x00573ED0, (void *) &dk2::mydd_scene_init, "mydd_scene_init" },  /* auto */
  { 0x005741D0, (void *) &dk2::sub_5741D0, "sub_5741D0" },  /* auto */
  { 0x00574200, (void *) &dk2::setGammaRamp, "setGammaRamp" },  /* auto */
  { 0x00574240, (void *) &dk2::sub_574240, "sub_574240" },  /* auto */
  { 0x005742F0, (void *) &dk2::MyHeap_autoremoveObjects, "MyHeap_autoremoveObjects" },  /* auto */
  { 0x00574310, (void *) &dk2::LoadCachedTextures, "LoadCachedTextures" },  /* auto */
  { 0x005747B0, (void *) &dk2::sub_5747B0, "sub_5747B0" },  /* auto */
  { 0x005747C0, (void *) &dk2::setPmeshReductionLevel, "setPmeshReductionLevel" },  /* auto */
  { 0x005747D0, (void *) &dk2::setShadowLevel, "setShadowLevel" },  /* auto */
  { 0x005747E0, (void *) &dk2::sub_5747E0, "sub_5747E0" },  /* auto */
  { 0x00574820, (void *) &dk2::MyDLVec2i_generate, "MyDLVec2i_generate" },  /* auto */
  { 0x00575700, (void *) &dk2::sub_575700, "sub_575700" },  /* auto */
  { 0x00575780, (void *) &dk2::drawScene, "drawScene" },    /* auto */
  { 0x00575A00, (void *) &dk2::MyCameraState_575A00, "MyCameraState_575A00" },  /* auto */
  { 0x00575D70, (void *) &dk2::Vec3f_static_sub_575D70, "Vec3f_static_sub_575D70" },  /* auto */
  { 0x00575F10, (void *) &dk2::Vec3f_static_sub_575F10, "Vec3f_static_sub_575F10" },  /* auto */
  { 0x00575FA0, (void *) &dk2::sub_575FA0, "sub_575FA0" },  /* auto */
  { 0x00575FD0, (void *) &dk2::sub_575FD0, "sub_575FD0" },  /* auto */
  { 0x00576010, (void *) &dk2::sub_576010, "sub_576010" },  /* auto */
  { 0x00576230, (void *) &dk2::sub_576230, "sub_576230" },  /* auto */
  { 0x005767C0, (void *) &dk2::static_5767C0, "static_5767C0" },  /* auto */
  { 0x005767E0, (void *) &dk2::sub_5767E0, "sub_5767E0" },  /* auto */
  { 0x005785E0, (void *) &dk2::CEngineWorldPrimitive_fun_5785E0, "CEngineWorldPrimitive_fun_5785E0" },  /* auto */
  { 0x00578DE0, (void *) &dk2::enableSmth_578DE0, "enableSmth_578DE0" },  /* auto */
  { 0x00578E40, (void *) &dk2::disableSmth, "disableSmth" },  /* auto */
  { 0x00578E50, (void *) &dk2::sub_578E50, "sub_578E50" },  /* auto */
  { 0x00578E80, (void *) &dk2::sub_578E80, "sub_578E80" },  /* auto */
  { 0x00578EC0, (void *) &dk2::CEngine2DRotatableSprite_create, "CEngine2DRotatableSprite_create" },  /* auto */
  { 0x00579180, (void *) &dk2::static_CEngine2DSprite_sub_579180, "static_CEngine2DSprite_sub_579180" },  /* auto */
  { 0x005794B0, (void *) &dk2::CEngine2DMeshSurface_create, "CEngine2DMeshSurface_create" },  /* auto */
  { 0x00579730, (void *) &dk2::CEngine2DStaticMesh_create, "CEngine2DStaticMesh_create" },  /* auto */
  { 0x00579A10, (void *) &dk2::CEngine2DAnimMesh_create, "CEngine2DAnimMesh_create" },  /* auto */
  { 0x00579CF0, (void *) &dk2::CEngineVirtualPerspective2DAnimMesh_create, "CEngineVirtualPerspective2DAnimMesh_create" },  /* auto */
  { 0x0057BBE0, (void *) &dk2::static_57BBE0, "static_57BBE0" },  /* auto */
  { 0x0057C270, (void *) &dk2::MyEntryBuf_MyScaledSurface_static_init, "MyEntryBuf_MyScaledSurface_static_init" },  /* auto */
  { 0x0057C290, (void *) &dk2::MyStringHashMap_MyScaledSurface_static_constructor, "MyStringHashMap_MyScaledSurface_static_constructor" },  /* auto */
  { 0x0057C2B0, (void *) &dk2::MyStringHashMap_MyScaledSurface_static_destructor, "MyStringHashMap_MyScaledSurface_static_destructor" },  /* auto */
  { 0x0057C780, (void *) &dk2::MyEntryBuf_MyScaledSurface_getByIdx, "MyEntryBuf_MyScaledSurface_getByIdx" },  /* auto */
  { 0x0057C7B0, (void *) &dk2::MyEntryBuf_MyScaledSurface_static_alloc, "MyEntryBuf_MyScaledSurface_static_alloc" },  /* auto */
  { 0x0057C7E0, (void *) &dk2::sub_57C7E0, "sub_57C7E0" },  /* auto */
  { 0x0057C850, (void *) &dk2::MyEntryBuf_MyScaledSurface_create, "MyEntryBuf_MyScaledSurface_create" },  /* auto */
  { 0x0057C920, (void *) &dk2::static_CPCEngineInterface_57C920, "static_CPCEngineInterface_57C920" },  /* auto */
  { 0x0057C950, (void *) &dk2::MyScaledSurface_resolveById, "MyScaledSurface_resolveById" },  /* auto */
  { 0x0057C970, (void *) &dk2::MyDblNamedSurface_createPrescaled, "MyDblNamedSurface_createPrescaled" },  /* auto */
  { 0x0057CBE0, (void *) &dk2::MyHeap_static_init, "MyHeap_static_init" },  /* auto */
  { 0x0057CCF0, (void *) &dk2::MyHeap_static_destroy, "MyHeap_static_destroy" },  /* auto */
  { 0x0057CD30, (void *) &dk2::MyHeap_alloc_impl, "MyHeap_alloc_impl" },  /* auto */
  { 0x0057CEB0, (void *) &dk2::MyHeap_alloc, "MyHeap_alloc" },  /* auto */
  { 0x0057D0B0, (void *) &dk2::MyHeap_free, "MyHeap_free" },  /* auto */
  { 0x0057D210, (void *) &dk2::CMemLoadIFFFile_static_init, "CMemLoadIFFFile_static_init" },  /* auto */
  { 0x0057D230, (void *) &dk2::CMemLoadIFFFile_static_destroy, "CMemLoadIFFFile_static_destroy" },  /* auto */
  { 0x0057D270, (void *) &dk2::CMeshResourceBase_load, "CMeshResourceBase_load" },  /* auto */
  { 0x0057D390, (void *) &dk2::load_martials, "load_martials" },  /* auto */
  { 0x0057D5B0, (void *) &dk2::CMemLoadIFFFile_load_CPolyMeshResource, "CMemLoadIFFFile_load_CPolyMeshResource" },  /* auto */
  { 0x0057DAC0, (void *) &dk2::sub_57DAC0, "sub_57DAC0" },  /* auto */
  { 0x0057DAD0, (void *) &dk2::CMemLoadIFFFile_load_CAnimMeshResource, "CMemLoadIFFFile_load_CAnimMeshResource" },  /* auto */
  { 0x0057E110, (void *) &dk2::CMemLoadIFFFile_load_CMeshGroup, "CMemLoadIFFFile_load_CMeshGroup" },  /* auto */
  { 0x0057EB60, (void *) &dk2::ret_2_0args, "ret_2_0args" },  /* auto */
  { 0x0057ECF0, (void *) &dk2::MyStringHashMap_MyMeshResourceHolder_static_init, "MyStringHashMap_MyMeshResourceHolder_static_init" },  /* auto */
  { 0x0057ED10, (void *) &dk2::MyStringHashMap_MyMeshResourceHolder_static_destroy, "MyStringHashMap_MyMeshResourceHolder_static_destroy" },  /* auto */
  { 0x0057ED30, (void *) &dk2::MyMeshResourceHolder_getResource, "MyMeshResourceHolder_getResource" },  /* auto */
  { 0x0057EDE0, (void *) &dk2::cleanup_57EDE0, "cleanup_57EDE0" },  /* auto */
  { 0x0057EED0, (void *) &dk2::sub_57EED0, "sub_57EED0" },  /* auto */
  { 0x0057EEF0, (void *) &dk2::MyStringHashMap_MyMeshResourceHolder_cleanup, "MyStringHashMap_MyMeshResourceHolder_cleanup" },  /* auto */
  { 0x0057EF30, (void *) &dk2::MyMeshResourceHolder_getOrCreate, "MyMeshResourceHolder_getOrCreate" },  /* auto */
  { 0x0057F010, (void *) &dk2::sub_57F010, "sub_57F010" },  /* auto */
  { 0x0057F020, (void *) &dk2::nullsub_32, "nullsub_32" },  /* auto */
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
  { 0x00589910, (void *) &dk2::mydd_triangles_destroy, "mydd_triangles_destroy" },  /* auto */
  { 0x005899F0, (void *) &dk2::mydd_triangles_init, "mydd_triangles_init" },  /* auto */
  { 0x00589C90, (void *) &dk2::sub_589C90, "sub_589C90" },  /* auto */
  { 0x00589D70, (void *) &dk2::sub_589D70, "sub_589D70" },  /* auto */
  { 0x00589D90, (void *) &dk2::addObjectToScene, "addObjectToScene" },  /* auto */
  { 0x0058A000, (void *) &dk2::DrawTriangleList, "DrawTriangleList" },  /* auto */
  { 0x0058A150, (void *) &dk2::drawTexToSurfTriangles, "drawTexToSurfTriangles" },  /* auto */
  { 0x0058A3B0, (void *) &dk2::sub_58A3B0, "sub_58A3B0" },  /* auto */
  { 0x0058A480, (void *) &dk2::nullsub_33, "nullsub_33" },  /* auto */
  { 0x0058A490, (void *) &dk2::nullsub_34, "nullsub_34" },  /* auto */
  { 0x0058A4A0, (void *) &dk2::nullsub_35, "nullsub_35" },  /* auto */
  { 0x0058A4B0, (void *) &dk2::nullsub_36, "nullsub_36" },  /* auto */
  { 0x0058A4C0, (void *) &dk2::nullsub_37, "nullsub_37" },  /* auto */
  { 0x0058A4D0, (void *) &dk2::nullsub_38, "nullsub_38" },  /* auto */
  { 0x0058A4E0, (void *) &dk2::nullsub_39, "nullsub_39" },  /* auto */
  { 0x0058A4F0, (void *) &dk2::sub_58A4F0, "sub_58A4F0" },  /* auto */
  { 0x0058A520, (void *) &dk2::mydd_uvs_init, "mydd_uvs_init" },  /* auto */
  { 0x0058A550, (void *) &dk2::mydd_uvs_destroy, "mydd_uvs_destroy" },  /* auto */
  { 0x0058A570, (void *) &dk2::sub_58A570, "sub_58A570" },  /* auto */
  { 0x0058A6F0, (void *) &dk2::MyCameraState_58A6F0, "MyCameraState_58A6F0" },  /* auto */
  { 0x0058A970, (void *) &dk2::__renderFun_setSceneObject2E, "__renderFun_setSceneObject2E" },  /* auto */
  { 0x0058AC20, (void *) &dk2::applyIndxs_sub_58AC20, "applyIndxs_sub_58AC20" },  /* auto */
  { 0x0058ACB0, (void *) &dk2::sub_58ACB0, "sub_58ACB0" },  /* auto */
  { 0x0058AD10, (void *) &dk2::sub_58AD10, "sub_58AD10" },  /* auto */
  { 0x0058AD70, (void *) &dk2::sub_58AD70, "sub_58AD70" },  /* auto */
  { 0x0058ADC0, (void *) &dk2::RenderData_addToArr, "RenderData_addToArr" },  /* auto */
  { 0x0058AF70, (void *) &dk2::sub_58AF70, "sub_58AF70" },  /* auto */
  { 0x0058B190, (void *) &dk2::sub_58B190, "sub_58B190" },  /* auto */
  { 0x0058B2A0, (void *) &dk2::renderFun_sub_58B2A0, "renderFun_sub_58B2A0" },  /* auto */
  { 0x0058B370, (void *) &dk2::renderFun_sub_58B370, "renderFun_sub_58B370" },  /* auto */
  { 0x0058B440, (void *) &dk2::renderFun_sub_58B440, "renderFun_sub_58B440" },  /* auto */
  { 0x0058B680, (void *) &dk2::renderFun_sub_58B680, "renderFun_sub_58B680" },  /* auto */
  { 0x0058B940, (void *) &dk2::addTriangleToRender2, "addTriangleToRender2" },  /* auto */
  { 0x0058B9D0, (void *) &dk2::addTriangleToRender1, "addTriangleToRender1" },  /* auto */
  { 0x0058BB60, (void *) &dk2::adjustAndAddToRender_sub_58BB60, "adjustAndAddToRender_sub_58BB60" },  /* auto */
  { 0x0058C450, (void *) &dk2::applyScale_sub_58C450, "applyScale_sub_58C450" },  /* auto */
  { 0x0058C680, (void *) &dk2::applyScale_sub_58C680, "applyScale_sub_58C680" },  /* auto */
  { 0x0058C890, (void *) &dk2::applyScale_sub_58C890, "applyScale_sub_58C890" },  /* auto */
  { 0x0058CA80, (void *) &dk2::applyScale_sub_58CA80, "applyScale_sub_58CA80" },  /* auto */
  { 0x0058CC40, (void *) &dk2::adjustAndAddToRender_sub_58CC40, "adjustAndAddToRender_sub_58CC40" },  /* auto */
  { 0x0058D580, (void *) &dk2::applyScale_sub_58D580, "applyScale_sub_58D580" },  /* auto */
  { 0x0058D790, (void *) &dk2::applyScale_sub_58D790, "applyScale_sub_58D790" },  /* auto */
  { 0x0058D990, (void *) &dk2::applyScale_sub_58D990, "applyScale_sub_58D990" },  /* auto */
  { 0x0058DB70, (void *) &dk2::applyScale_sub_58DB70, "applyScale_sub_58DB70" },  /* auto */
  { 0x0058DD40, (void *) &dk2::sub_58DD40, "sub_58DD40" },  /* auto */
  { 0x0058E080, (void *) &dk2::shadows_process_58E080, "shadows_process_58E080" },  /* auto */
  { 0x0058E2C0, (void *) &dk2::MyEntryBuf_MyScaledSurface_addFormatEnfineShadow, "MyEntryBuf_MyScaledSurface_addFormatEnfineShadow" },  /* auto */
  { 0x0058E330, (void *) &dk2::shadows_init, "shadows_init" },  /* auto */
  { 0x0058E3E0, (void *) &dk2::shadows_begin_ge23, "shadows_begin_ge23" },  /* auto */
  { 0x0058E440, (void *) &dk2::shadows_begin_lt23, "shadows_begin_lt23" },  /* auto */
  { 0x0058E470, (void *) &dk2::shadows_end_58E470, "shadows_end_58E470" },  /* auto */
  { 0x0058E580, (void *) &dk2::sub_58E580, "sub_58E580" },  /* auto */
  { 0x0058E640, (void *) &dk2::sub_58E640, "sub_58E640" },  /* auto */
  { 0x0058EE40, (void *) &dk2::nullsub_40, "nullsub_40" },  /* auto */
  { 0x0058EE50, (void *) &dk2::nullsub_41, "nullsub_41" },  /* auto */
  { 0x0058EE60, (void *) &dk2::sub_58EE60, "sub_58EE60" },  /* auto */
  { 0x0058F480, (void *) &dk2::sub_58F480, "sub_58F480" },  /* auto */
  { 0x0058F510, (void *) &dk2::SceneObject2EList_static_destructor, "SceneObject2EList_static_destructor" },  /* auto */
  { 0x0058F530, (void *) &dk2::objects30ToDraw_static_destructor, "objects30ToDraw_static_destructor" },  /* auto */
  { 0x0058F550, (void *) &dk2::SceneObject2EList_SceneObject30List_static_init, "SceneObject2EList_SceneObject30List_static_init" },  /* auto */
  { 0x0058F5F0, (void *) &dk2::SceneObject2EList_SceneObject30List_static_destroy, "SceneObject2EList_SceneObject30List_static_destroy" },  /* auto */
  { 0x0058F640, (void *) &dk2::draw3dScene, "draw3dScene" },  /* auto */
  { 0x0058F980, (void *) &dk2::sub_58F980, "sub_58F980" },  /* auto */
  { 0x0058F9A0, (void *) &dk2::__cfltcvt_init_5, "__cfltcvt_init_5" },  /* auto */
  { 0x0058F9E0, (void *) &dk2::MyStringHashMap_MyCESurfHandle_static_constructor, "MyStringHashMap_MyCESurfHandle_static_constructor" },  /* auto */
  { 0x0058FA00, (void *) &dk2::MyStringHashMap_MyCESurfHandle_static_destructor, "MyStringHashMap_MyCESurfHandle_static_destructor" },  /* auto */
  { 0x0058FA20, (void *) &dk2::MyTextures_static_constructor, "MyTextures_static_constructor" },  /* auto */
  { 0x0058FA40, (void *) &dk2::MyTextures_static_destructor, "MyTextures_static_destructor" },  /* auto */
  { 0x0058FAF0, (void *) &dk2::nullsub_42, "nullsub_42" },  /* auto */
  { 0x0058FB00, (void *) &dk2::MySurface_58FB00, "MySurface_58FB00" },  /* auto */
  { 0x0058FCB0, (void *) &dk2::MySurface_58FCB0, "MySurface_58FCB0" },  /* auto */
  { 0x0058FE80, (void *) &dk2::MySurface_58FE80, "MySurface_58FE80" },  /* auto */
  { 0x0058FF70, (void *) &dk2::MySurface_58FF70, "MySurface_58FF70" },  /* auto */
  { 0x00590000, (void *) &dk2::MySurface_590000, "MySurface_590000" },  /* auto */
  { 0x00590240, (void *) &dk2::get_bit_count, "get_bit_count" },  /* auto */
  { 0x005915A0, (void *) &dk2::scaleImg, "scaleImg" },      /* auto */
  { 0x00591DA0, (void *) &dk2::SurfaceHolder_create, "SurfaceHolder_create" },  /* auto */
  { 0x005924A0, (void *) &dk2::MySurfaceWrapper_createPrescaled, "MySurfaceWrapper_createPrescaled" },  /* auto */
  { 0x00592720, (void *) &dk2::MyTextures_resetCacheDir, "MyTextures_resetCacheDir" },  /* auto */
  { 0x00592950, (void *) &dk2::mydd_devTexture_destroy, "mydd_devTexture_destroy" },  /* auto */
  { 0x00592B80, (void *) &dk2::renderer_setSurfaceHolder, "renderer_setSurfaceHolder" },  /* auto */
  { 0x00592EA0, (void *) &dk2::mydd_devTexture_init, "mydd_devTexture_init" },  /* auto */
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
  { 0x00598080, (void *) &dk2::__cfltcvt_init_6, "__cfltcvt_init_6" },  /* auto */
  { 0x005981F0, (void *) &dk2::__cfltcvt_init_7, "__cfltcvt_init_7" },  /* auto */
  { 0x00598270, (void *) &dk2::sub_598270, "sub_598270" },  /* auto */
  { 0x00598290, (void *) &dk2::CPCEngineInterface_destructor2, "CPCEngineInterface_destructor2" },  /* auto */
  { 0x005986D0, (void *) &dk2::CPCEngineInterface_fun_5986D0, "CPCEngineInterface_fun_5986D0" },  /* auto */
  { 0x00598800, (void *) &dk2::CPCEngineInterface_fun_598800, "CPCEngineInterface_fun_598800" },  /* auto */
  { 0x005998C0, (void *) &dk2::CPCEngineInterface_fun_5998C0, "CPCEngineInterface_fun_5998C0" },  /* auto */
  { 0x00599C00, (void *) &dk2::sub_599C00, "sub_599C00" },  /* auto */
  { 0x0059A3C0, (void *) &dk2::hasTexture, "hasTexture" },  /* auto */
  { 0x0059A4B0, (void *) &dk2::MyResources_loadPng, "MyResources_loadPng" },  /* auto */
  { 0x0059A500, (void *) &dk2::CBridge_static_getMeshBuf, "CBridge_static_getMeshBuf" },  /* auto */
  { 0x0059A570, (void *) &dk2::sub_59A570, "sub_59A570" },  /* auto */
  { 0x0059A5C0, (void *) &dk2::sub_59A5C0, "sub_59A5C0" },  /* auto */
  { 0x0059A5E0, (void *) &dk2::sub_59A5E0, "sub_59A5E0" },  /* auto */
  { 0x0059A600, (void *) &dk2::sub_59A600, "sub_59A600" },  /* auto */
  { 0x0059A630, (void *) &dk2::sub_59A630, "sub_59A630" },  /* auto */
  { 0x0059ACA0, (void *) &dk2::sub_59ACA0, "sub_59ACA0" },  /* auto */
  { 0x0059AD80, (void *) &dk2::ScreenObjectArr_static_renderItems, "ScreenObjectArr_static_renderItems" },  /* auto */
  { 0x0059B0B0, (void *) &dk2::nullsub_19, "nullsub_19" },  /* auto */
  { 0x0059BB80, (void *) &dk2::sub_59BB80, "sub_59BB80" },  /* auto */
  { 0x0059C010, (void *) &dk2::ret_void_6args, "ret_void_6args" },  /* auto */
  { 0x0059C020, (void *) &dk2::sub_59C020, "sub_59C020" },  /* auto */
  { 0x0059C2A0, (void *) &dk2::sub_59C2A0, "sub_59C2A0" },  /* auto */
  { 0x0059C360, (void *) &dk2::sub_59C360, "sub_59C360" },  /* auto */
  { 0x0059C720, (void *) &dk2::sub_59C720, "sub_59C720" },  /* auto */
  { 0x0059D010, (void *) &dk2::sub_59D010, "sub_59D010" },  /* auto */
  { 0x0059D4B0, (void *) &dk2::sub_59D4B0, "sub_59D4B0" },  /* auto */
  { 0x0059D5F0, (void *) &dk2::Mat3x3f_sub_59D5F0, "Mat3x3f_sub_59D5F0" },  /* auto */
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
  { 0x005A78E0, (void *) &dk2::getBitCount, "getBitCount" },  /* auto */
  { 0x005A7900, (void *) &dk2::getBitsShift, "getBitsShift" },  /* auto */
  { 0x005A7920, (void *) &dk2::mgsr_initBuffers, "mgsr_initBuffers" },  /* auto */
  { 0x005A7980, (void *) &dk2::mgsr_alloc_buf, "mgsr_alloc_buf" },  /* auto */
  { 0x005A79C0, (void *) &dk2::mgsr_alloc_buf2, "mgsr_alloc_buf2" },  /* auto */
  { 0x005A7A00, (void *) &dk2::release_mgsr, "release_mgsr" },  /* auto */
  { 0x005A7A20, (void *) &dk2::mgsr_free_buf, "mgsr_free_buf" },  /* auto */
  { 0x005A7A50, (void *) &dk2::mgsr_free_buf2, "mgsr_free_buf2" },  /* auto */
  { 0x005A7A80, (void *) &dk2::static_MovieRenderer_initialize, "static_MovieRenderer_initialize" },  /* auto */
  { 0x005A7B10, (void *) &dk2::static_MovieCtx_openAndRead, "static_MovieCtx_openAndRead" },  /* auto */
  { 0x005A82D0, (void *) &dk2::MovieCtx_sub_5A82D0, "MovieCtx_sub_5A82D0" },  /* auto */
  { 0x005A83B0, (void *) &dk2::MovieCtx_sub_5A83B0, "MovieCtx_sub_5A83B0" },  /* auto */
  { 0x005A8430, (void *) &dk2::MovieCtx_sub_5A8430, "MovieCtx_sub_5A8430" },  /* auto */
  { 0x005A87F0, (void *) &dk2::MovieCtx_sub_5A87F0, "MovieCtx_sub_5A87F0" },  /* auto */
  { 0x005A8980, (void *) &dk2::static_MovieRenderer_sub_5A8980, "static_MovieRenderer_sub_5A8980" },  /* auto */
  { 0x005A8A60, (void *) &dk2::MovieRenderer_startThread, "MovieRenderer_startThread" },  /* auto */
  { 0x005A8AE0, (void *) &dk2::MovieRenderer_threadProc, "MovieRenderer_threadProc" },  /* auto */
  { 0x005A8F60, (void *) &dk2::sub_5A8F60, "sub_5A8F60" },  /* auto */
  { 0x005A8F70, (void *) &dk2::static_MovieRenderer_sub_5A8F70, "static_MovieRenderer_sub_5A8F70" },  /* auto */
  { 0x005A8FB0, (void *) &dk2::static_MovieRenderer_sub_5A8FB0, "static_MovieRenderer_sub_5A8FB0" },  /* auto */
  { 0x005A8FF0, (void *) &dk2::static_MovieRenderer_updateWindowActivated, "static_MovieRenderer_updateWindowActivated" },  /* auto */
  { 0x005A94C0, (void *) &dk2::MovieCtx_updateOverlay, "MovieCtx_updateOverlay" },  /* auto */
  { 0x005A95B0, (void *) &dk2::sub_5A95B0, "sub_5A95B0" },  /* auto */
  { 0x005A9660, (void *) &dk2::sub_5A9660, "sub_5A9660" },  /* auto */
  { 0x005A97C0, (void *) &dk2::sub_5A97C0, "sub_5A97C0" },  /* auto */
  { 0x005A9AE0, (void *) &dk2::sub_5A9AE0, "sub_5A9AE0" },  /* auto */
  { 0x005A9C60, (void *) &dk2::getPixelFormat, "getPixelFormat" },  /* auto */
  { 0x005A9D20, (void *) &dk2::sub_5A9D20, "sub_5A9D20" },  /* auto */
  { 0x005A9D40, (void *) &dk2::sub_5A9D40, "sub_5A9D40" },  /* auto */
  { 0x005A9DA0, (void *) &dk2::sub_5A9DA0, "sub_5A9DA0" },  /* auto */
  { 0x005AA2E0, (void *) &dk2::MovieCtx_sub_5AA2E0, "MovieCtx_sub_5AA2E0" },  /* auto */
  { 0x005AA520, (void *) &dk2::createOverlaySurf, "createOverlaySurf" },  /* auto */
  { 0x005AA670, (void *) &dk2::MovieCtx_sub_5AA670, "MovieCtx_sub_5AA670" },  /* auto */
  { 0x005AAA50, (void *) &dk2::sub_5AAA50, "sub_5AAA50" },  /* auto */
  { 0x005AAB10, (void *) &dk2::sub_5AAB10, "sub_5AAB10" },  /* auto */
  { 0x005AAC80, (void *) &dk2::MovieCtx_sub_5AAC80, "MovieCtx_sub_5AAC80" },  /* auto */
  { 0x005AAD90, (void *) &dk2::sub_5AAD90, "sub_5AAD90" },  /* auto */
  { 0x005AAF90, (void *) &dk2::MovieCtx_sub_5AAF90, "MovieCtx_sub_5AAF90" },  /* auto */
  { 0x005AB0A0, (void *) &dk2::sub_5AB0A0, "sub_5AB0A0" },  /* auto */
  { 0x005AB250, (void *) &dk2::MovieCtx_sub_5AB250, "MovieCtx_sub_5AB250" },  /* auto */
  { 0x005AB2F0, (void *) &dk2::MovieCtx_sub_5AB2F0, "MovieCtx_sub_5AB2F0" },  /* auto */
  { 0x005AB390, (void *) &dk2::MovieCtx_sub_5AB390, "MovieCtx_sub_5AB390" },  /* auto */
  { 0x005AB700, (void *) &dk2::createDoubleBuffered, "createDoubleBuffered" },  /* auto */
  { 0x005AB8F0, (void *) &dk2::createOffScrSurf, "createOffScrSurf" },  /* auto */
  { 0x005ABAE0, (void *) &dk2::sub_5ABAE0, "sub_5ABAE0" },  /* auto */
  { 0x005ABC60, (void *) &dk2::sub_5ABC60, "sub_5ABC60" },  /* auto */
  { 0x005ABEF0, (void *) &dk2::MovieCtx_threadProc, "MovieCtx_threadProc" },  /* auto */
  { 0x005ABF70, (void *) &dk2::MovieCtx_sub_5ABF70, "MovieCtx_sub_5ABF70" },  /* auto */
  { 0x005AC360, (void *) &dk2::directSoundCreate, "directSoundCreate" },  /* auto */
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
  { 0x005B0BF0, (void *) &dk2::MovieCtx_sub_5B0BF0, "MovieCtx_sub_5B0BF0" },  /* auto */
  { 0x005B0D60, (void *) &dk2::MovieCtx_sub_5B0D60, "MovieCtx_sub_5B0D60" },  /* auto */
  { 0x005B1090, (void *) &dk2::sub_5B1090, "sub_5B1090" },  /* auto */
  { 0x005B1110, (void *) &dk2::sub_5B1110, "sub_5B1110" },  /* auto */
  { 0x005B1220, (void *) &dk2::MovieCtx_sub_5B1220, "MovieCtx_sub_5B1220" },  /* auto */
  { 0x005B1380, (void *) &dk2::MovieCtx_sub_5B1380, "MovieCtx_sub_5B1380" },  /* auto */
  { 0x005B1430, (void *) &dk2::MovieCtx_sub_5B1430, "MovieCtx_sub_5B1430" },  /* auto */
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
  { 0x005B3000, (void *) &dk2::j_My8BitTexture_static_init, "j_My8BitTexture_static_init" },  /* auto */
  { 0x005B3010, (void *) &dk2::My8BitTexture_static_init, "My8BitTexture_static_init" },  /* auto */
  { 0x005B3020, (void *) &dk2::j_My16BitTexture_static_init, "j_My16BitTexture_static_init" },  /* auto */
  { 0x005B3030, (void *) &dk2::My16BitTexture_static_init, "My16BitTexture_static_init" },  /* auto */
  { 0x005B3050, (void *) &dk2::sub_5B3050, "sub_5B3050" },  /* auto */
  { 0x005B3060, (void *) &dk2::j_My32BitTexture_static_init, "j_My32BitTexture_static_init" },  /* auto */
  { 0x005B3070, (void *) &dk2::My32BitTexture_static_init, "My32BitTexture_static_init" },  /* auto */
  { 0x005B3080, (void *) &dk2::AABB_isIntersectsWithScreen, "AABB_isIntersectsWithScreen" },  /* auto */
  { 0x005B30C0, (void *) &dk2::sub_5B30C0, "sub_5B30C0" },  /* auto */
  { 0x005B30F0, (void *) &dk2::sub_5B30F0, "sub_5B30F0" },  /* auto */
  { 0x005B3130, (void *) &dk2::sub_5B3130, "sub_5B3130" },  /* auto */
  { 0x005B3170, (void *) &dk2::sub_5B3170, "sub_5B3170" },  /* auto */
  { 0x005B31E0, (void *) &dk2::sub_5B31E0, "sub_5B31E0" },  /* auto */
  { 0x005B3250, (void *) &dk2::sub_5B3250, "sub_5B3250" },  /* auto */
  { 0x005B32C0, (void *) &dk2::sub_5B32C0, "sub_5B32C0" },  /* auto */
  { 0x005B3340, (void *) &dk2::MyNBitTexture_renderIfInScreen, "MyNBitTexture_renderIfInScreen" },  /* auto */
  { 0x005B33C0, (void *) &dk2::sub_5B33C0, "sub_5B33C0" },  /* auto */
  { 0x005B3440, (void *) &dk2::sub_5B3440, "sub_5B3440" },  /* auto */
  { 0x005B3490, (void *) &dk2::sub_5B3490, "sub_5B3490" },  /* auto */
  { 0x005B34D0, (void *) &dk2::sub_5B34D0, "sub_5B34D0" },  /* auto */
  { 0x005B3510, (void *) &dk2::MySurface_AABB_sub_5B3510, "MySurface_AABB_sub_5B3510" },  /* auto */
  { 0x005B35B0, (void *) &dk2::MySurface_AABB_sub_5B35B0, "MySurface_AABB_sub_5B35B0" },  /* auto */
  { 0x005B36F0, (void *) &dk2::sub_5B36F0, "sub_5B36F0" },  /* auto */
  { 0x005B3700, (void *) &dk2::getCharRenderSurfAabb, "getCharRenderSurfAabb" },  /* auto */
  { 0x005B3710, (void *) &dk2::MySurface_probably_set_global_bitnes, "MySurface_probably_set_global_bitnes" },  /* auto */
  { 0x005B37F0, (void *) &dk2::MyDdSurfaceEx_probably_set_global_bitnes, "MyDdSurfaceEx_probably_set_global_bitnes" },  /* auto */
  { 0x005B3900, (void *) &dk2::makeDirs, "makeDirs" },      /* auto */
  { 0x005B3940, (void *) &dk2::sub_5B3940, "sub_5B3940" },  /* auto */
  { 0x005B3980, (void *) &dk2::MyDiscFile_create, "MyDiscFile_create" },  /* auto */
  { 0x005B3A30, (void *) &dk2::TbDiscFile_delete, "TbDiscFile_delete" },  /* auto */
  { 0x005B3A60, (void *) &dk2::sub_5B3A60, "sub_5B3A60" },  /* auto */
  { 0x005B3A80, (void *) &dk2::TbDiscFile_getOffs, "TbDiscFile_getOffs" },  /* auto */
  { 0x005B3A90, (void *) &dk2::TbDiscFile_seek, "TbDiscFile_seek" },  /* auto */
  { 0x005B3AB0, (void *) &dk2::sub_5B3AB0, "sub_5B3AB0" },  /* auto */
  { 0x005B3B20, (void *) &dk2::sub_5B3B20, "sub_5B3B20" },  /* auto */
  { 0x005B3B80, (void *) &dk2::TbDiscFile_getSize, "TbDiscFile_getSize" },  /* auto */
  { 0x005B3B90, (void *) &dk2::sub_5B3B90, "sub_5B3B90" },  /* auto */
  { 0x005B3BF0, (void *) &dk2::fileExists, "fileExists" },  /* auto */
  { 0x005B3C30, (void *) &dk2::sub_5B3C30, "sub_5B3C30" },  /* auto */
  { 0x005B3C80, (void *) &dk2::sub_5B3C80, "sub_5B3C80" },  /* auto */
  { 0x005B3CE0, (void *) &dk2::findFile, "findFile" },      /* auto */
  { 0x005B3DD0, (void *) &dk2::findNextFile, "findNextFile" },  /* auto */
  { 0x005B3E60, (void *) &dk2::closeFindFile, "closeFindFile" },  /* auto */
  { 0x005B3E80, (void *) &dk2::sub_5B3E80, "sub_5B3E80" },  /* auto */
  { 0x005B3EB0, (void *) &dk2::TbDiscFile_readBytes, "TbDiscFile_readBytes" },  /* auto */
  { 0x005B3EE0, (void *) &dk2::TbDiscFile_writeBytes, "TbDiscFile_writeBytes" },  /* auto */
  { 0x005B3F10, (void *) &dk2::sub_5B3F10, "sub_5B3F10" },  /* auto */
  { 0x005B3F20, (void *) &dk2::sub_5B3F20, "sub_5B3F20" },  /* auto */
  { 0x005B3F50, (void *) &dk2::j_g_dd_surface1_init, "j_g_dd_surface1_init" },  /* auto */
  { 0x005B3F60, (void *) &dk2::g_primarySurf_static_init, "g_primarySurf_static_init" },  /* auto */
  { 0x005B3F90, (void *) &dk2::sub_5B3F90, "sub_5B3F90" },  /* auto */
  { 0x005B3FA0, (void *) &dk2::sub_5B3FA0, "sub_5B3FA0" },  /* auto */
  { 0x005B3FD0, (void *) &dk2::sub_5B3FD0, "sub_5B3FD0" },  /* auto */
  { 0x005B3FE0, (void *) &dk2::FPUControlWord_static_init, "FPUControlWord_static_init" },  /* auto */
  { 0x005B4020, (void *) &dk2::FPUControlWordWithState_static_init, "FPUControlWordWithState_static_init" },  /* auto */
  { 0x005B4040, (void *) &dk2::setSelectedDDGuid, "setSelectedDDGuid" },  /* auto */
  { 0x005B4050, (void *) &dk2::dk2dd_get, "dk2dd_get" },    /* auto */
  { 0x005B4070, (void *) &dk2::showMessageBox, "showMessageBox" },  /* auto */
  { 0x005B40E0, (void *) &dk2::BullfrogWindow_destroy, "BullfrogWindow_destroy" },  /* auto */
  { 0x005B4160, (void *) &dk2::dk2wndCleanup_sendEv0_5, "dk2wndCleanup_sendEv0_5" },  /* auto */
  { 0x005B4230, (void *) &dk2::dk2dd_destroy, "dk2dd_destroy" },  /* auto */
  { 0x005B4260, (void *) &dk2::BullfrogWindow_create, "BullfrogWindow_create" },  /* auto */
  { 0x005B4330, (void *) &dk2::static_isNeedBlt, "static_isNeedBlt" },  /* auto */
  { 0x005B4340, (void *) &dk2::showTodoMessageBox, "showTodoMessageBox" },  /* auto */
  { 0x005B4390, (void *) &dk2::dk2dd_init, "dk2dd_init" },  /* auto */
  { 0x005B4AE0, (void *) &dk2::dk2wnd_cleanup, "dk2wnd_cleanup" },  /* auto */
  { 0x005B4B00, (void *) &dk2::__sub_5B4B00_ev1, "__sub_5B4B00_ev1" },  /* auto */
  { 0x005B4D40, (void *) &dk2::updatePalette, "updatePalette" },  /* auto */
  { 0x005B4D80, (void *) &dk2::readPalleteEntry, "readPalleteEntry" },  /* auto */
  { 0x005B4DE0, (void *) &dk2::createDirectDrawObject, "createDirectDrawObject" },  /* auto */
  { 0x005B4E20, (void *) &dk2::DdModeList_collect, "DdModeList_collect" },  /* auto */
  { 0x005B4F70, (void *) &dk2::enumDDModesCallback, "enumDDModesCallback" },  /* auto */
  { 0x005B4FC0, (void *) &dk2::BullfrogWindow_registerClass, "BullfrogWindow_registerClass" },  /* auto */
  { 0x005B5070, (void *) &dk2::BullfrogWindow_proc, "BullfrogWindow_proc" },  /* auto */
  { 0x005B5160, (void *) &dk2::setAppActivatedStatus, "setAppActivatedStatus" },  /* auto */
  { 0x005B5180, (void *) &dk2::setCurOffScreen, "setCurOffScreen" },  /* auto */
  { 0x005B5410, (void *) &dk2::setSurfaceDD, "setSurfaceDD" },  /* auto */
  { 0x005B5420, (void *) &dk2::MyDdSurface_constructor, "MyDdSurface_constructor" },  /* auto */
  { 0x005B5460, (void *) &dk2::MyDdSurfaceEx_restoreSurf_if_unk, "MyDdSurfaceEx_restoreSurf_if_unk" },  /* auto */
  { 0x005B5490, (void *) &dk2::__surface_init_blt, "__surface_init_blt" },  /* auto */
  { 0x005B5700, (void *) &dk2::MyDdSurface_createOffScreenSurface, "MyDdSurface_createOffScreenSurface" },  /* auto */
  { 0x005B57C0, (void *) &dk2::MyDdSurface_release, "MyDdSurface_release" },  /* auto */
  { 0x005B57F0, (void *) &dk2::static_MyDdSurfaceEx_BltWait, "static_MyDdSurfaceEx_BltWait" },  /* auto */
  { 0x005B5970, (void *) &dk2::sub_5B5970, "sub_5B5970" },  /* auto */
  { 0x005B5BE0, (void *) &dk2::MyDdSurfaceEx_resolveDesc, "MyDdSurfaceEx_resolveDesc" },  /* auto */
  { 0x005B5C90, (void *) &dk2::MyDdSurfaceEx_unlock, "MyDdSurfaceEx_unlock" },  /* auto */
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
  { 0x005B7570, (void *) &dk2::MyDiscFile_create2, "MyDiscFile_create2" },  /* auto */
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
  { 0x005C0740, (void *) &dk2::My24BitTexture_5C0740, "My24BitTexture_5C0740" },  /* auto */
  { 0x005C1080, (void *) &dk2::My24BitTexture_5C1080, "My24BitTexture_5C1080" },  /* auto */
  { 0x005C1230, (void *) &dk2::My24BitTexture_5C1230, "My24BitTexture_5C1230" },  /* auto */
  { 0x005C35D0, (void *) &dk2::My24BitTexture_f2C_5C35D0, "My24BitTexture_f2C_5C35D0" },  /* auto */
  { 0x005C3650, (void *) &dk2::My24BitTexture_5C3650, "My24BitTexture_5C3650" },  /* auto */
  { 0x005C3800, (void *) &dk2::My24BitTexture_5C3800, "My24BitTexture_5C3800" },  /* auto */
  { 0x005C3A00, (void *) &dk2::My24BitTexture_5C3A00, "My24BitTexture_5C3A00" },  /* auto */
  { 0x005C3C00, (void *) &dk2::My24BitTexture_f38_5C3C00, "My24BitTexture_f38_5C3C00" },  /* auto */
  { 0x005C4490, (void *) &dk2::My24BitTexture_5C4490, "My24BitTexture_5C4490" },  /* auto */
  { 0x005C4B50, (void *) &dk2::My32BitTexture_5C4B50, "My32BitTexture_5C4B50" },  /* auto */
  { 0x005C53E0, (void *) &dk2::My32BitTexture_5C53E0, "My32BitTexture_5C53E0" },  /* auto */
  { 0x005C55E0, (void *) &dk2::My32BitTexture_5C55E0, "My32BitTexture_5C55E0" },  /* auto */
  { 0x005C8770, (void *) &dk2::My32BitTexture_f2C_5C8770, "My32BitTexture_f2C_5C8770" },  /* auto */
  { 0x005C8810, (void *) &dk2::My32BitTexture_5C8810, "My32BitTexture_5C8810" },  /* auto */
  { 0x005C8A40, (void *) &dk2::My32BitTexture_5C8A40, "My32BitTexture_5C8A40" },  /* auto */
  { 0x005C8D10, (void *) &dk2::My32BitTexture_5C8D10, "My32BitTexture_5C8D10" },  /* auto */
  { 0x005C8FC0, (void *) &dk2::My32BitTexture_f38_5C8FC0, "My32BitTexture_f38_5C8FC0" },  /* auto */
  { 0x005C9930, (void *) &dk2::My32BitTexture_5C9930, "My32BitTexture_5C9930" },  /* auto */
  { 0x005CA100, (void *) &dk2::My16BitTexture_5CA100, "My16BitTexture_5CA100" },  /* auto */
  { 0x005CAE20, (void *) &dk2::My16BitTexture_5CAE20, "My16BitTexture_5CAE20" },  /* auto */
  { 0x005CB0E0, (void *) &dk2::My16BitTexture_5CB0E0, "My16BitTexture_5CB0E0" },  /* auto */
  { 0x005CB3C0, (void *) &dk2::My16BitTexture_f14_5CB3C0, "My16BitTexture_f14_5CB3C0" },  /* auto */
  { 0x005CEFB0, (void *) &dk2::My16BitTexture_5CEFB0, "My16BitTexture_5CEFB0" },  /* auto */
  { 0x005CF380, (void *) &dk2::My16BitTexture_5CF380, "My16BitTexture_5CF380" },  /* auto */
  { 0x005CF760, (void *) &dk2::My16BitTexture_f38_5CF760, "My16BitTexture_f38_5CF760" },  /* auto */
  { 0x005D0470, (void *) &dk2::My16BitTexture_5D0470, "My16BitTexture_5D0470" },  /* auto */
  { 0x005D0F80, (void *) &dk2::sub_5D0F80, "sub_5D0F80" },  /* auto */
  { 0x005D0FA0, (void *) &dk2::AABB_getWidth, "AABB_getWidth" },  /* auto */
  { 0x005D0FB0, (void *) &dk2::AABB_getHeight, "AABB_getHeight" },  /* auto */
  { 0x005D0FC0, (void *) &dk2::AABB_intersect, "AABB_intersect" },  /* auto */
  { 0x005D1040, (void *) &dk2::AABB_collapseToMax, "AABB_collapseToMax" },  /* auto */
  { 0x005D1050, (void *) &dk2::AABB_normalize, "AABB_normalize" },  /* auto */
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
  { 0x005FF9D0, (void *) &dk2::MyCachedStream_writeBytes_ret_0, "MyCachedStream_writeBytes_ret_0" },  /* auto */
  { 0x005FFC60, (void *) &dk2::sub_5FFC60, "sub_5FFC60" },  /* auto */
  { 0x00600480, (void *) &dk2::MyDirectInput_destructor, "MyDirectInput_destructor" },  /* auto */
  { 0x00600680, (void *) &dk2::__cfltcvt_init_11, "__cfltcvt_init_11" },  /* auto */
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
  { 0x00603710, (void *) &dk2::My10FBArchiver_inflate, "My10FBArchiver_inflate" },  /* auto */
  { 0x00603900, (void *) &dk2::My10FBArchiver_ret_0xC0000, "My10FBArchiver_ret_0xC0000" },  /* auto */
  { 0x00603910, (void *) &dk2::My10FBArchiver_getSize, "My10FBArchiver_getSize" },  /* auto */
  { 0x00603950, (void *) &dk2::MyZlibArchive_getInstance, "MyZlibArchive_getInstance" },  /* auto */
  { 0x00603990, (void *) &dk2::MyZlibArchive_static_destructor, "MyZlibArchive_static_destructor" },  /* auto */
  { 0x00603A50, (void *) &dk2::MyZlibArchiveFile_constructor, "MyZlibArchiveFile_constructor" },  /* auto */
  { 0x00603AC0, (void *) &dk2::zlib_inflate_codes_new, "zlib_inflate_codes_new" },  /* auto */
  { 0x00603B00, (void *) &dk2::zlib_inflate_codes, "zlib_inflate_codes" },  /* auto */
  { 0x006042B0, (void *) &dk2::zlib_inflate_codes_free, "zlib_inflate_codes_free" },  /* auto */
  { 0x006042D0, (void *) &dk2::zlib_inflate_trees_bits, "zlib_inflate_trees_bits" },  /* auto */
  { 0x00604380, (void *) &dk2::zlib_huft_build, "zlib_huft_build" },  /* auto */
  { 0x00604830, (void *) &dk2::zlib_inflate_trees_dynamic, "zlib_inflate_trees_dynamic" },  /* auto */
  { 0x006049C0, (void *) &dk2::zlib_inflate_trees_fixed, "zlib_inflate_trees_fixed" },  /* auto */
  { 0x006049F0, (void *) &dk2::zlib_inflate_flush, "zlib_inflate_flush" },  /* auto */
  { 0x00604B30, (void *) &dk2::sub_604B30, "sub_604B30" },  /* auto */
  { 0x00604D40, (void *) &dk2::MyZlibArchive_return_0x62A39, "MyZlibArchive_return_0x62A39" },  /* auto */
  { 0x00604D50, (void *) &dk2::MyZlibArchive_return_0x15388, "MyZlibArchive_return_0x15388" },  /* auto */
  { 0x00604D60, (void *) &dk2::MyZlibArchive_getSize, "MyZlibArchive_getSize" },  /* auto */
  { 0x00605010, (void *) &dk2::zlib_inflate_fast, "zlib_inflate_fast" },  /* auto */
  { 0x006053B0, (void *) &dk2::zlib_deflateInit2_, "zlib_deflateInit2_" },  /* auto */
  { 0x006055E0, (void *) &dk2::zlib_deflateReset, "zlib_deflateReset" },  /* auto */
  { 0x00605660, (void *) &dk2::zlib_deflate, "zlib_deflate" },  /* auto */
  { 0x00605920, (void *) &dk2::zlib_putShortMSB, "zlib_putShortMSB" },  /* auto */
  { 0x00605950, (void *) &dk2::zlib_flush_pending, "zlib_flush_pending" },  /* auto */
  { 0x006059D0, (void *) &dk2::zlib_deflateEnd, "zlib_deflateEnd" },  /* auto */
  { 0x00605A80, (void *) &dk2::zlib_lm_init, "zlib_lm_init" },  /* auto */
  { 0x00605B20, (void *) &dk2::zlib_deflate_stored, "zlib_deflate_stored" },  /* auto */
  { 0x00605C80, (void *) &dk2::sub_605C80, "sub_605C80" },  /* auto */
  { 0x00605DB0, (void *) &dk2::sub_605DB0, "sub_605DB0" },  /* auto */
  { 0x00605E30, (void *) &dk2::zlib_deflate_fast, "zlib_deflate_fast" },  /* auto */
  { 0x00606190, (void *) &dk2::sub_606190, "sub_606190" },  /* auto */
  { 0x00606310, (void *) &dk2::zlib_deflate_slow, "zlib_deflate_slow" },  /* auto */
  { 0x00606770, (void *) &dk2::zlib__tr_init, "zlib__tr_init" },  /* auto */
  { 0x006067E0, (void *) &dk2::nullsub_20, "nullsub_20" },  /* auto */
  { 0x006067F0, (void *) &dk2::sub_6067F0, "sub_6067F0" },  /* auto */
  { 0x00606860, (void *) &dk2::zlib__tr_stored_block, "zlib__tr_stored_block" },  /* auto */
  { 0x00606900, (void *) &dk2::zlib__tr_align, "zlib__tr_align" },  /* auto */
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
  { 0x00608140, (void *) &dk2::zlib_bi_flush, "zlib_bi_flush" },  /* auto */
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
  { 0x0060F1E0, (void *) &dk2::MySoundLoader_getInstance, "MySoundLoader_getInstance" },  /* auto */
  { 0x0060F220, (void *) &dk2::MySoundLoader_static_destructor, "MySoundLoader_static_destructor" },  /* auto */
  { 0x006123E0, (void *) &dk2::sub_6123E0, "sub_6123E0" },  /* auto */
  { 0x00612B70, (void *) &dk2::sub_612B70, "sub_612B70" },  /* auto */
  { 0x006137F0, (void *) &dk2::sub_6137F0, "sub_6137F0" },  /* auto */
  { 0x00613EB0, (void *) &dk2::sub_613EB0, "sub_613EB0" },  /* auto */
  { 0x006144D0, (void *) &dk2::sub_6144D0, "sub_6144D0" },  /* auto */
  { 0x006147D0, (void *) &dk2::sub_6147D0, "sub_6147D0" },  /* auto */
  { 0x00614860, (void *) &dk2::sub_614860, "sub_614860" },  /* auto */
  { 0x006148F0, (void *) &dk2::MyDwordsCpy, "MyDwordsCpy" },  /* auto */
  { 0x00614920, (void *) &dk2::TbTList_TbDynamicStringTemplate_char_entry_create_copy, "TbTList_TbDynamicStringTemplate_char_entry_create_copy" },  /* auto */
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
  { 0x00629DD0, (void *) &dk2::getOrCreateObj_629DD0, "getOrCreateObj_629DD0" },  /* auto */
  { 0x00629E10, (void *) &dk2::sub_629E10, "sub_629E10" },  /* auto */
  { 0x0062A1F0, (void *) &dk2::sub_62A1F0, "sub_62A1F0" },  /* auto */
  { 0x0062A200, (void *) &dk2::sub_62A200, "sub_62A200" },  /* auto */
  { 0x0062A210, (void *) &dk2::ret_void_1args_0, "ret_void_1args_0" },  /* auto */
  { 0x0062A380, (void *) &dk2::sub_62A380, "sub_62A380" },  /* auto */
  { 0x0062A440, (void *) &dk2::sub_62A440, "sub_62A440" },  /* auto */
  { 0x0062A6A0, (void *) &dk2::sub_62A6A0, "sub_62A6A0" },  /* auto */
  { 0x0062AC80, (void *) &dk2::sub_62AC80, "sub_62AC80" },  /* auto */
  { 0x0062B660, (void *) &dk2::sub_62B660, "sub_62B660" },  /* auto */
  { 0x0062B760, (void *) &dk2::sub_62B760, "sub_62B760" },  /* auto */
  { 0x0062C510, (void *) &dk2::MyDR0_static_constructor, "MyDR0_static_constructor" },  /* auto */
  { 0x0062C520, (void *) &dk2::MyDR0_constructor, "MyDR0_constructor" },  /* auto */
  { 0x0062C540, (void *) &dk2::MyDR0_static_destructor, "MyDR0_static_destructor" },  /* auto */
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
  { 0x0062C6D0, (void *) &dk2::MyCR3_static_init, "MyCR3_static_init" },  /* auto */
  { 0x0062C6E0, (void *) &dk2::MyCR3_constructor, "MyCR3_constructor" },  /* auto */
  { 0x0062C700, (void *) &dk2::MyCR3_static_destroy, "MyCR3_static_destroy" },  /* auto */
  { 0x0062C740, (void *) &dk2::MyTR4_static_constructor, "MyTR4_static_constructor" },  /* auto */
  { 0x0062C750, (void *) &dk2::MyTR4_constructor, "MyTR4_constructor" },  /* auto */
  { 0x0062C7A0, (void *) &dk2::MyTR5_static_constructor, "MyTR5_static_constructor" },  /* auto */
  { 0x0062C7B0, (void *) &dk2::MyTR5_constructor, "MyTR5_constructor" },  /* auto */
  { 0x0062C7D0, (void *) &dk2::MyTR5_static_destructor, "MyTR5_static_destructor" },  /* auto */
  { 0x0062C800, (void *) &dk2::MyTR2_static_constructor, "MyTR2_static_constructor" },  /* auto */
  { 0x0062C810, (void *) &dk2::MyTR2_constructor, "MyTR2_constructor" },  /* auto */
  { 0x0062C830, (void *) &dk2::MyTR2_static_destructor, "MyTR2_static_destructor" },  /* auto */
  { 0x0062C880, (void *) &dk2::MyTR6_static_constructor, "MyTR6_static_constructor" },  /* auto */
  { 0x0062C890, (void *) &dk2::MyTR6_constructor, "MyTR6_constructor" },  /* auto */
  { 0x0062C8B0, (void *) &dk2::MyTR6_static_destructor, "MyTR6_static_destructor" },  /* auto */
  { 0x0062D560, (void *) &dk2::sub_62D560, "sub_62D560" },  /* auto */
  { 0x0062D820, (void *) &dk2::MyMbStringList_VTagFormatMB, "MyMbStringList_VTagFormatMB" },  /* auto */
  { 0x0062D8A0, (void *) &dk2::MyMbStringList_VTagFormatWChar, "MyMbStringList_VTagFormatWChar" },  /* auto */
  { 0x0062D920, (void *) &dk2::TbUniStringVTag_findArg, "TbUniStringVTag_findArg" },  /* auto */
  { 0x0062D9B0, (void *) &dk2::MyMbStringList_parse, "MyMbStringList_parse" },  /* auto */
  { 0x0062E140, (void *) &dk2::MyUniToMbMap_create, "MyUniToMbMap_create" },  /* auto */
  { 0x0062E280, (void *) &dk2::MyMbToUniMap_create, "MyMbToUniMap_create" },  /* auto */
  { 0x0062E550, (void *) &dk2::get_chr_type, "get_chr_type" },  /* auto */
  { 0x0062EBF0, (void *) &dk2::charsOneType_doCalcAabb, "charsOneType_doCalcAabb" },  /* auto */
  { 0x0062EC30, (void *) &dk2::charsOneType_doCalcAabbAndDraw, "charsOneType_doCalcAabbAndDraw" },  /* auto */
  { 0x0062EC90, (void *) &dk2::charsOneType_doDrawOrCalcAabb, "charsOneType_doDrawOrCalcAabb" },  /* auto */
  { 0x0062EF30, (void *) &dk2::chars_doDrawOrCalcAabb, "chars_doDrawOrCalcAabb" },  /* auto */
  { 0x0062F9E0, (void *) &dk2::MyFontRenderer4_static_init, "MyFontRenderer4_static_init" },  /* auto */
  { 0x0062F9F0, (void *) &dk2::MyFontRenderer4_static_constructor, "MyFontRenderer4_static_constructor" },  /* auto */
  { 0x0062FA10, (void *) &dk2::MyFontRenderer4_static_destroy, "MyFontRenderer4_static_destroy" },  /* auto */
  { 0x0062FA20, (void *) &dk2::MyFontRenderer0_static_constructor, "MyFontRenderer0_static_constructor" },  /* auto */
  { 0x0062FA30, (void *) &dk2::MyFontRenderer0_constructor, "MyFontRenderer0_constructor" },  /* auto */
  { 0x0062FA50, (void *) &dk2::MyFontRenderer0_static_destructor, "MyFontRenderer0_static_destructor" },  /* auto */
  { 0x0062FA60, (void *) &dk2::MyFontRenderer2_static_init, "MyFontRenderer2_static_init" },  /* auto */
  { 0x0062FA70, (void *) &dk2::MyFontRenderer2_constructor, "MyFontRenderer2_constructor" },  /* auto */
  { 0x0062FA90, (void *) &dk2::MyFontRenderer2_static_destroy, "MyFontRenderer2_static_destroy" },  /* auto */
  { 0x0062FAA0, (void *) &dk2::MyFontRenderer3_static_init, "MyFontRenderer3_static_init" },  /* auto */
  { 0x0062FAB0, (void *) &dk2::MyFontRenderer3_constructor, "MyFontRenderer3_constructor" },  /* auto */
  { 0x0062FAD0, (void *) &dk2::MyFontRenderer3_static_destroy, "MyFontRenderer3_static_destroy" },  /* auto */
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
  { 0x00643100, (void *) &dk2::___init_ctype, "___init_ctype" },  /* auto */
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
  { 0x00404DB0, (funptr_t) &dk2::AABB::constructor, "AABB::constructor" },  /* auto */
  { 0x00404DC0, (funptr_t) &dk2::AABB::constructor_0, "AABB::constructor_0" },  /* auto */
  { 0x0052D370, (funptr_t) &dk2::AABB::constructor2, "AABB::constructor2" },  /* auto */
  { 0x0052D3A0, (funptr_t) &dk2::AABB::contains, "AABB::contains" },  /* auto */
  { 0x00556590, (funptr_t) &dk2::AABB::appendPoint, "AABB::appendPoint" },  /* auto */
  { 0x005B6FD0, (funptr_t) &dk2::AABB::intersection, "AABB::intersection" },  /* auto */
  { 0x005B7050, (funptr_t) &dk2::AABB::isIntersects, "AABB::isIntersects" },  /* auto */
  { 0x005B7090, (funptr_t) &dk2::AABB::getOuter, "AABB::getOuter" },  /* auto */
  { 0x005B7100, (funptr_t) &dk2::AABB::sub_5B7100, "AABB::sub_5B7100" },  /* auto */
  { 0x005DC2D0, (funptr_t) &dk2::AABB::move, "AABB::move" },  /* auto */
  { 0x0062EB80, (funptr_t) &dk2::AABBc::constructor, "AABBc::constructor" },  /* auto */
  { 0x005DA340, (funptr_t) &dk2::AsyncThing::scalar_destructor, "AsyncThing::scalar_destructor" },  /* auto */
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
  { 0x006131C0, (funptr_t) &dk2::Buf1000::constructor, "Buf1000::constructor" },  /* auto */
  { 0x0057E2A0, (funptr_t) &dk2::CAnimMeshResource::constructor, "CAnimMeshResource::constructor" },  /* auto */
  { 0x0057E590, (funptr_t) &dk2::CAnimMeshResource::deleting_destructor, "CAnimMeshResource::deleting_destructor" },  /* auto */
  { 0x0057E760, (funptr_t) &dk2::CAnimMeshResource::destructor, "CAnimMeshResource::destructor" },  /* auto */
  { 0x0057E7B0, (funptr_t) &dk2::CAnimMeshResource::resolveTextures, "CAnimMeshResource::resolveTextures" },  /* auto */
  { 0x004397E0, (funptr_t) &dk2::CBridge::fun_4397E0, "CBridge::fun_4397E0" },  /* auto */
  { 0x00439880, (funptr_t) &dk2::CBridge::fun_439880, "CBridge::fun_439880" },  /* auto */
  { 0x00439A20, (funptr_t) &dk2::CBridge::fun_439A20, "CBridge::fun_439A20" },  /* auto */
  { 0x00439AA0, (funptr_t) &dk2::CBridge::fun_439AA0, "CBridge::fun_439AA0" },  /* auto */
  { 0x00439B00, (funptr_t) &dk2::CBridge::fun_439B00, "CBridge::fun_439B00" },  /* auto */
  { 0x00439B90, (funptr_t) &dk2::CBridge::fun_439B90, "CBridge::fun_439B90" },  /* auto */
  { 0x0043A740, (funptr_t) &dk2::CBridge::constructor, "CBridge::constructor" },  /* auto */
  { 0x0043A960, (funptr_t) &dk2::CBridge::get_field_, "CBridge::get_field_" },  /* auto */
  { 0x0043A970, (funptr_t) &dk2::CBridge::fun_43A970, "CBridge::fun_43A970" },  /* auto */
  { 0x0043A980, (funptr_t) &dk2::CBridge::getCamera, "CBridge::getCamera" },  /* auto */
  { 0x0043AA30, (funptr_t) &dk2::CBridge::destructor, "CBridge::destructor" },  /* auto */
  { 0x0043AAD0, (funptr_t) &dk2::CBridge::connectEngine, "CBridge::connectEngine" },  /* auto */
  { 0x0043ACF0, (funptr_t) &dk2::CBridge::fun_43ACF0, "CBridge::fun_43ACF0" },  /* auto */
  { 0x0043AD70, (funptr_t) &dk2::CBridge::fun_43AD70, "CBridge::fun_43AD70" },  /* auto */
  { 0x0043B0B0, (funptr_t) &dk2::CBridge::fun_43B0B0, "CBridge::fun_43B0B0" },  /* auto */
  { 0x0043B150, (funptr_t) &dk2::CBridge::isActionHasHandler, "CBridge::isActionHasHandler" },  /* auto */
  { 0x0043B180, (funptr_t) &dk2::CBridge::fun_43B180, "CBridge::fun_43B180" },  /* auto */
  { 0x0043B1E0, (funptr_t) &dk2::CBridge::fun_43B1E0, "CBridge::fun_43B1E0" },  /* auto */
  { 0x0043B220, (funptr_t) &dk2::CBridge::fun_43B220, "CBridge::fun_43B220" },  /* auto */
  { 0x0043C2C0, (funptr_t) &dk2::CBridge::fun_43C2C0, "CBridge::fun_43C2C0" },  /* auto */
  { 0x0043C2F0, (funptr_t) &dk2::CBridge::fun_43C2F0, "CBridge::fun_43C2F0" },  /* auto */
  { 0x0043C310, (funptr_t) &dk2::CBridge::fun_43C310, "CBridge::fun_43C310" },  /* auto */
  { 0x0043CC30, (funptr_t) &dk2::CBridge::fun_43CC30, "CBridge::fun_43CC30" },  /* auto */
  { 0x0043D790, (funptr_t) &dk2::CBridge::fun_43D790, "CBridge::fun_43D790" },  /* auto */
  { 0x0043D970, (funptr_t) &dk2::CBridge::fun_43D970, "CBridge::fun_43D970" },  /* auto */
  { 0x0043D9B0, (funptr_t) &dk2::CBridge::fun_43D9B0, "CBridge::fun_43D9B0" },  /* auto */
  { 0x0043DC40, (funptr_t) &dk2::CBridge::fun_43DC40, "CBridge::fun_43DC40" },  /* auto */
  { 0x0043E030, (funptr_t) &dk2::CBridge::fun_43E030, "CBridge::fun_43E030" },  /* auto */
  { 0x0043E0F0, (funptr_t) &dk2::CBridge::loadPng, "CBridge::loadPng" },  /* auto */
  { 0x0043E2F0, (funptr_t) &dk2::CBridge::allocateRenderObj, "CBridge::allocateRenderObj" },  /* auto */
  { 0x00440350, (funptr_t) &dk2::CBridge::fun_440350, "CBridge::fun_440350" },  /* auto */
  { 0x00440420, (funptr_t) &dk2::CBridge::fun_440420, "CBridge::fun_440420" },  /* auto */
  { 0x00440530, (funptr_t) &dk2::CBridge::fun_440530, "CBridge::fun_440530" },  /* auto */
  { 0x004408C0, (funptr_t) &dk2::CBridge::fun_4408C0, "CBridge::fun_4408C0" },  /* auto */
  { 0x004408E0, (funptr_t) &dk2::CBridge::fun_4408E0, "CBridge::fun_4408E0" },  /* auto */
  { 0x00440940, (funptr_t) &dk2::CBridge::fun_440940, "CBridge::fun_440940" },  /* auto */
  { 0x004409A0, (funptr_t) &dk2::CBridge::fun_4409A0, "CBridge::fun_4409A0" },  /* auto */
  { 0x00440A00, (funptr_t) &dk2::CBridge::fun_440A00, "CBridge::fun_440A00" },  /* auto */
  { 0x00440A30, (funptr_t) &dk2::CBridge::fun_440A30, "CBridge::fun_440A30" },  /* auto */
  { 0x00440A70, (funptr_t) &dk2::CBridge::fun_440A70, "CBridge::fun_440A70" },  /* auto */
  { 0x00440AD0, (funptr_t) &dk2::CBridge::fun_440AD0, "CBridge::fun_440AD0" },  /* auto */
  { 0x00440AF0, (funptr_t) &dk2::CBridge::fun_440AF0, "CBridge::fun_440AF0" },  /* auto */
  { 0x00440B60, (funptr_t) &dk2::CBridge::fun_440B60, "CBridge::fun_440B60" },  /* auto */
  { 0x00440BC0, (funptr_t) &dk2::CBridge::fun_440BC0, "CBridge::fun_440BC0" },  /* auto */
  { 0x00440C20, (funptr_t) &dk2::CBridge::fun_440C20, "CBridge::fun_440C20" },  /* auto */
  { 0x00440C50, (funptr_t) &dk2::CBridge::fun_440C50, "CBridge::fun_440C50" },  /* auto */
  { 0x00440C90, (funptr_t) &dk2::CBridge::fun_440C90, "CBridge::fun_440C90" },  /* auto */
  { 0x00440F50, (funptr_t) &dk2::CBridge::fun_440F50, "CBridge::fun_440F50" },  /* auto */
  { 0x00440F60, (funptr_t) &dk2::CBridge::fun_440F60, "CBridge::fun_440F60" },  /* auto */
  { 0x00440F80, (funptr_t) &dk2::CBridge::fun_440F80, "CBridge::fun_440F80" },  /* auto */
  { 0x00440F90, (funptr_t) &dk2::CBridge::fun_440F90, "CBridge::fun_440F90" },  /* auto */
  { 0x00440FB0, (funptr_t) &dk2::CBridge::fun_440FB0, "CBridge::fun_440FB0" },  /* auto */
  { 0x00440FC0, (funptr_t) &dk2::CBridge::fun_440FC0, "CBridge::fun_440FC0" },  /* auto */
  { 0x00440FD0, (funptr_t) &dk2::CBridge::fun_440FD0, "CBridge::fun_440FD0" },  /* auto */
  { 0x00440FE0, (funptr_t) &dk2::CBridge::fun_440FE0, "CBridge::fun_440FE0" },  /* auto */
  { 0x00440FF0, (funptr_t) &dk2::CBridge::fun_440FF0, "CBridge::fun_440FF0" },  /* auto */
  { 0x00441020, (funptr_t) &dk2::CBridge::fun_441020, "CBridge::fun_441020" },  /* auto */
  { 0x00441040, (funptr_t) &dk2::CBridge::fun_441040, "CBridge::fun_441040" },  /* auto */
  { 0x00441060, (funptr_t) &dk2::CBridge::fun_441060, "CBridge::fun_441060" },  /* auto */
  { 0x00441220, (funptr_t) &dk2::CBridge::fun_441220, "CBridge::fun_441220" },  /* auto */
  { 0x00441230, (funptr_t) &dk2::CBridge::fun_441230, "CBridge::fun_441230" },  /* auto */
  { 0x004412C0, (funptr_t) &dk2::CBridge::fun_4412C0, "CBridge::fun_4412C0" },  /* auto */
  { 0x004412E0, (funptr_t) &dk2::CBridge::fun_4412E0, "CBridge::fun_4412E0" },  /* auto */
  { 0x00441300, (funptr_t) &dk2::CBridge::createAndRegister, "CBridge::createAndRegister" },  /* auto */
  { 0x00441330, (funptr_t) &dk2::CBridge::fun_441330, "CBridge::fun_441330" },  /* auto */
  { 0x00441350, (funptr_t) &dk2::CBridge::fun_441350, "CBridge::fun_441350" },  /* auto */
  { 0x00441370, (funptr_t) &dk2::CBridge::fun_441370, "CBridge::fun_441370" },  /* auto */
  { 0x00441390, (funptr_t) &dk2::CBridge::fun_441390, "CBridge::fun_441390" },  /* auto */
  { 0x004413B0, (funptr_t) &dk2::CBridge::fun_4413B0, "CBridge::fun_4413B0" },  /* auto */
  { 0x004413D0, (funptr_t) &dk2::CBridge::fun_4413D0, "CBridge::fun_4413D0" },  /* auto */
  { 0x004413E0, (funptr_t) &dk2::CBridge::init_float_obj, "CBridge::init_float_obj" },  /* auto */
  { 0x00441400, (funptr_t) &dk2::CBridge::fun_441400, "CBridge::fun_441400" },  /* auto */
  { 0x00441420, (funptr_t) &dk2::CBridge::fun_441420, "CBridge::fun_441420" },  /* auto */
  { 0x00441AA0, (funptr_t) &dk2::CBridge::fun_441AA0, "CBridge::fun_441AA0" },  /* auto */
  { 0x00441AD0, (funptr_t) &dk2::CBridge::fun_441AD0, "CBridge::fun_441AD0" },  /* auto */
  { 0x00441B00, (funptr_t) &dk2::CBridge::fun_441B00, "CBridge::fun_441B00" },  /* auto */
  { 0x00441C70, (funptr_t) &dk2::CBridge::setTexturesPath_441C70, "CBridge::setTexturesPath_441C70" },  /* auto */
  { 0x00441CC0, (funptr_t) &dk2::CBridge::fun_441CC0, "CBridge::fun_441CC0" },  /* auto */
  { 0x00441E20, (funptr_t) &dk2::CBridge::fun_441E20, "CBridge::fun_441E20" },  /* auto */
  { 0x00441E30, (funptr_t) &dk2::CBridge::fun_441E30, "CBridge::fun_441E30" },  /* auto */
  { 0x00441E60, (funptr_t) &dk2::CBridge::fun_441E60, "CBridge::fun_441E60" },  /* auto */
  { 0x00441EE0, (funptr_t) &dk2::CBridge::fun_441EE0, "CBridge::fun_441EE0" },  /* auto */
  { 0x00441F10, (funptr_t) &dk2::CBridge::idx_handler2_2_cam, "CBridge::idx_handler2_2_cam" },  /* auto */
  { 0x00441F50, (funptr_t) &dk2::CBridge::idx_handler2_83_cam, "CBridge::idx_handler2_83_cam" },  /* auto */
  { 0x00441FB0, (funptr_t) &dk2::CBridge::idx_handler2_3_moveCam, "CBridge::idx_handler2_3_moveCam" },  /* auto */
  { 0x004420A0, (funptr_t) &dk2::CBridge::idx_handler2_7F_cam, "CBridge::idx_handler2_7F_cam" },  /* auto */
  { 0x004420F0, (funptr_t) &dk2::CBridge::idx_handler2_80_cam, "CBridge::idx_handler2_80_cam" },  /* auto */
  { 0x00442140, (funptr_t) &dk2::CBridge::idx_handler2_7E_cam, "CBridge::idx_handler2_7E_cam" },  /* auto */
  { 0x00442290, (funptr_t) &dk2::CBridge::idx_handler2_6_cam, "CBridge::idx_handler2_6_cam" },  /* auto */
  { 0x004422B0, (funptr_t) &dk2::CBridge::idx_handler2_7_zoomCam, "CBridge::idx_handler2_7_zoomCam" },  /* auto */
  { 0x004422F0, (funptr_t) &dk2::CBridge::idx_handler2_8_cam, "CBridge::idx_handler2_8_cam" },  /* auto */
  { 0x00442350, (funptr_t) &dk2::CBridge::idx_handler2_85_cam, "CBridge::idx_handler2_85_cam" },  /* auto */
  { 0x00442380, (funptr_t) &dk2::CBridge::idx_handler2_9_cam, "CBridge::idx_handler2_9_cam" },  /* auto */
  { 0x004423E0, (funptr_t) &dk2::CBridge::idx_handler2_A_cam, "CBridge::idx_handler2_A_cam" },  /* auto */
  { 0x00442400, (funptr_t) &dk2::CBridge::idx_handler2_C_cam, "CBridge::idx_handler2_C_cam" },  /* auto */
  { 0x00442450, (funptr_t) &dk2::CBridge::idx_handler2_D_cam, "CBridge::idx_handler2_D_cam" },  /* auto */
  { 0x004424A0, (funptr_t) &dk2::CBridge::idx_handler2_E_cam, "CBridge::idx_handler2_E_cam" },  /* auto */
  { 0x00442500, (funptr_t) &dk2::CBridge::idx_handler2_10_cam, "CBridge::idx_handler2_10_cam" },  /* auto */
  { 0x00442540, (funptr_t) &dk2::CBridge::idx_handler2_73_cam, "CBridge::idx_handler2_73_cam" },  /* auto */
  { 0x00442570, (funptr_t) &dk2::CBridge::idx_handler2_28, "CBridge::idx_handler2_28" },  /* auto */
  { 0x004425C0, (funptr_t) &dk2::CBridge::idx_handler2_29, "CBridge::idx_handler2_29" },  /* auto */
  { 0x00442610, (funptr_t) &dk2::CBridge::idx_handler2_2A, "CBridge::idx_handler2_2A" },  /* auto */
  { 0x00442650, (funptr_t) &dk2::CBridge::idx_handler2_4_cam, "CBridge::idx_handler2_4_cam" },  /* auto */
  { 0x004426F0, (funptr_t) &dk2::CBridge::idx_handler2_74_cam, "CBridge::idx_handler2_74_cam" },  /* auto */
  { 0x00442730, (funptr_t) &dk2::CBridge::idx_handler2_5_cam, "CBridge::idx_handler2_5_cam" },  /* auto */
  { 0x00442780, (funptr_t) &dk2::CBridge::idx_handler2_F_cam, "CBridge::idx_handler2_F_cam" },  /* auto */
  { 0x004427D0, (funptr_t) &dk2::CBridge::idx_handler2_11_cam, "CBridge::idx_handler2_11_cam" },  /* auto */
  { 0x00442820, (funptr_t) &dk2::CBridge::idx_handler2_15_cam, "CBridge::idx_handler2_15_cam" },  /* auto */
  { 0x00442870, (funptr_t) &dk2::CBridge::idx_handler2_19_cam, "CBridge::idx_handler2_19_cam" },  /* auto */
  { 0x00442920, (funptr_t) &dk2::CBridge::idx_handler2_16_cam, "CBridge::idx_handler2_16_cam" },  /* auto */
  { 0x00442960, (funptr_t) &dk2::CBridge::idx_handler2_2F, "CBridge::idx_handler2_2F" },  /* auto */
  { 0x00442D80, (funptr_t) &dk2::CBridge::idx_handler2_6F, "CBridge::idx_handler2_6F" },  /* auto */
  { 0x00442DE0, (funptr_t) &dk2::CBridge::idx_handler2_70_cam, "CBridge::idx_handler2_70_cam" },  /* auto */
  { 0x00442E50, (funptr_t) &dk2::CBridge::idx_handler2_1F_cam, "CBridge::idx_handler2_1F_cam" },  /* auto */
  { 0x00442EB0, (funptr_t) &dk2::CBridge::idx_handler2_66_cam, "CBridge::idx_handler2_66_cam" },  /* auto */
  { 0x00442F50, (funptr_t) &dk2::CBridge::idx_handler2_68_cam, "CBridge::idx_handler2_68_cam" },  /* auto */
  { 0x00443030, (funptr_t) &dk2::CBridge::idx_handler2_84_cam, "CBridge::idx_handler2_84_cam" },  /* auto */
  { 0x00447AC0, (funptr_t) &dk2::CBridge::idx_handler_1, "CBridge::idx_handler_1" },  /* auto */
  { 0x00447B20, (funptr_t) &dk2::CBridge::idx_handler_2, "CBridge::idx_handler_2" },  /* auto */
  { 0x00447C70, (funptr_t) &dk2::CBridge::idx_handler_3, "CBridge::idx_handler_3" },  /* auto */
  { 0x00447CA0, (funptr_t) &dk2::CBridge::idx_handler_4, "CBridge::idx_handler_4" },  /* auto */
  { 0x00447CE0, (funptr_t) &dk2::CBridge::idx_handler_6, "CBridge::idx_handler_6" },  /* auto */
  { 0x00447D50, (funptr_t) &dk2::CBridge::idx_handler_7, "CBridge::idx_handler_7" },  /* auto */
  { 0x004482C0, (funptr_t) &dk2::CBridge::idx_handler_8, "CBridge::idx_handler_8" },  /* auto */
  { 0x00448320, (funptr_t) &dk2::CBridge::idx_handler_14, "CBridge::idx_handler_14" },  /* auto */
  { 0x00448360, (funptr_t) &dk2::CBridge::idx_handler_9, "CBridge::idx_handler_9" },  /* auto */
  { 0x004483A0, (funptr_t) &dk2::CBridge::idx_handler_A, "CBridge::idx_handler_A" },  /* auto */
  { 0x004483D0, (funptr_t) &dk2::CBridge::idx_handler_B, "CBridge::idx_handler_B" },  /* auto */
  { 0x00448440, (funptr_t) &dk2::CBridge::idx_handler_C, "CBridge::idx_handler_C" },  /* auto */
  { 0x004484A0, (funptr_t) &dk2::CBridge::fun_4484A0, "CBridge::fun_4484A0" },  /* auto */
  { 0x00448580, (funptr_t) &dk2::CBridge::idx_handler_D, "CBridge::idx_handler_D" },  /* auto */
  { 0x00448610, (funptr_t) &dk2::CBridge::idx_handler_E, "CBridge::idx_handler_E" },  /* auto */
  { 0x004486A0, (funptr_t) &dk2::CBridge::idx_handler_F, "CBridge::idx_handler_F" },  /* auto */
  { 0x00448710, (funptr_t) &dk2::CBridge::idx_handler_10, "CBridge::idx_handler_10" },  /* auto */
  { 0x00448800, (funptr_t) &dk2::CBridge::idx_handler_13, "CBridge::idx_handler_13" },  /* auto */
  { 0x004488A0, (funptr_t) &dk2::CBridge::idx_handler_11, "CBridge::idx_handler_11" },  /* auto */
  { 0x00448A60, (funptr_t) &dk2::CBridge::idx_handler_12, "CBridge::idx_handler_12" },  /* auto */
  { 0x00448AC0, (funptr_t) &dk2::CBridge::idx_handler_15, "CBridge::idx_handler_15" },  /* auto */
  { 0x00448B00, (funptr_t) &dk2::CBridge::idx_handler_16, "CBridge::idx_handler_16" },  /* auto */
  { 0x00443050, (funptr_t) &dk2::CBridgeInterface::constructor, "CBridgeInterface::constructor" },  /* auto */
  { 0x00443160, (funptr_t) &dk2::CBridgeInterface::deleting_destructor, "CBridgeInterface::deleting_destructor" },  /* auto */
  { 0x00443180, (funptr_t) &dk2::CBridgeInterface::destructor, "CBridgeInterface::destructor" },  /* auto */
  { 0x00528280, (funptr_t) &dk2::CButton::constructor, "CButton::constructor" },  /* auto */
  { 0x005282A0, (funptr_t) &dk2::CButton::fun_5282A0, "CButton::fun_5282A0" },  /* auto */
  { 0x005282C0, (funptr_t) &dk2::CButton::deleting_destructor, "CButton::deleting_destructor" },  /* auto */
  { 0x005282E0, (funptr_t) &dk2::CButton::destructor, "CButton::destructor" },  /* auto */
  { 0x00528300, (funptr_t) &dk2::CButton::configure, "CButton::configure" },  /* auto */
  { 0x00528430, (funptr_t) &dk2::CButton::visitCursor, "CButton::visitCursor" },  /* auto */
  { 0x005284B0, (funptr_t) &dk2::CButton::containsPoint, "CButton::containsPoint" },  /* auto */
  { 0x00528520, (funptr_t) &dk2::CButton::fun_528520, "CButton::fun_528520" },  /* auto */
  { 0x00528570, (funptr_t) &dk2::CButton::getScreenAABB, "CButton::getScreenAABB" },  /* auto */
  { 0x0052CAC0, (funptr_t) &dk2::CButton::destructor2, "CButton::destructor2" },  /* auto */
  { 0x00449470, (funptr_t) &dk2::CCamera::constructor, "CCamera::constructor" },  /* auto */
  { 0x00449670, (funptr_t) &dk2::CCamera::fun_449670, "CCamera::fun_449670" },  /* auto */
  { 0x00449840, (funptr_t) &dk2::CCamera::fun_449840, "CCamera::fun_449840" },  /* auto */
  { 0x004498F0, (funptr_t) &dk2::CCamera::fun_4498F0, "CCamera::fun_4498F0" },  /* auto */
  { 0x004499A0, (funptr_t) &dk2::CCamera::saveToTbDiscFile, "CCamera::saveToTbDiscFile" },  /* auto */
  { 0x004499E0, (funptr_t) &dk2::CCamera::fun_4499E0, "CCamera::fun_4499E0" },  /* auto */
  { 0x00449A30, (funptr_t) &dk2::CCamera::fun_449A30, "CCamera::fun_449A30" },  /* auto */
  { 0x00449AC0, (funptr_t) &dk2::CCamera::fun_449AC0, "CCamera::fun_449AC0" },  /* auto */
  { 0x00449B30, (funptr_t) &dk2::CCamera::sub_449B30, "CCamera::sub_449B30" },  /* auto */
  { 0x00449BD0, (funptr_t) &dk2::CCamera::fun_449BD0, "CCamera::fun_449BD0" },  /* auto */
  { 0x00449C30, (funptr_t) &dk2::CCamera::fun_449C30, "CCamera::fun_449C30" },  /* auto */
  { 0x00449CA0, (funptr_t) &dk2::CCamera::zoomRel_449CA0, "CCamera::zoomRel_449CA0" },  /* auto */
  { 0x00449D00, (funptr_t) &dk2::CCamera::fun_449D00, "CCamera::fun_449D00" },  /* auto */
  { 0x00449D40, (funptr_t) &dk2::CCamera::fun_449D40, "CCamera::fun_449D40" },  /* auto */
  { 0x00449F50, (funptr_t) &dk2::CCamera::fun_449F50, "CCamera::fun_449F50" },  /* auto */
  { 0x00449F70, (funptr_t) &dk2::CCamera::fun_449F70, "CCamera::fun_449F70" },  /* auto */
  { 0x00449FC0, (funptr_t) &dk2::CCamera::fun_449FC0, "CCamera::fun_449FC0" },  /* auto */
  { 0x0044A020, (funptr_t) &dk2::CCamera::fun_44A020, "CCamera::fun_44A020" },  /* auto */
  { 0x0044A070, (funptr_t) &dk2::CCamera::fun_44A070, "CCamera::fun_44A070" },  /* auto */
  { 0x0044A0D0, (funptr_t) &dk2::CCamera::fun_44A0D0, "CCamera::fun_44A0D0" },  /* auto */
  { 0x0044A100, (funptr_t) &dk2::CCamera::fun_44A100, "CCamera::fun_44A100" },  /* auto */
  { 0x0044A150, (funptr_t) &dk2::CCamera::fun_44A150, "CCamera::fun_44A150" },  /* auto */
  { 0x0044A270, (funptr_t) &dk2::CCamera::fun_44A270, "CCamera::fun_44A270" },  /* auto */
  { 0x0044A370, (funptr_t) &dk2::CCamera::sub_44A370, "CCamera::sub_44A370" },  /* auto */
  { 0x0044A500, (funptr_t) &dk2::CCamera::fun_44A500, "CCamera::fun_44A500" },  /* auto */
  { 0x0044A520, (funptr_t) &dk2::CCamera::fun_44A520, "CCamera::fun_44A520" },  /* auto */
  { 0x0044A550, (funptr_t) &dk2::CCamera::fun_44A550, "CCamera::fun_44A550" },  /* auto */
  { 0x0044A5D0, (funptr_t) &dk2::CCamera::updateCameraMode, "CCamera::updateCameraMode" },  /* auto */
  { 0x0044A9E0, (funptr_t) &dk2::CCamera::fun_44A9E0, "CCamera::fun_44A9E0" },  /* auto */
  { 0x0044AA20, (funptr_t) &dk2::CCamera::sub_44AA20, "CCamera::sub_44AA20" },  /* auto */
  { 0x0044AA80, (funptr_t) &dk2::CCamera::sub_44AA80, "CCamera::sub_44AA80" },  /* auto */
  { 0x0044AB60, (funptr_t) &dk2::CCamera::sub_44AB60, "CCamera::sub_44AB60" },  /* auto */
  { 0x0044AC80, (funptr_t) &dk2::CCamera::sub_44AC80, "CCamera::sub_44AC80" },  /* auto */
  { 0x0044ACE0, (funptr_t) &dk2::CCamera::sub_44ACE0, "CCamera::sub_44ACE0" },  /* auto */
  { 0x0044BD70, (funptr_t) &dk2::CCamera::sub_44BD70, "CCamera::sub_44BD70" },  /* auto */
  { 0x0044BED0, (funptr_t) &dk2::CCamera::sub_44BED0, "CCamera::sub_44BED0" },  /* auto */
  { 0x0044CFB0, (funptr_t) &dk2::CCamera::fun_44CFB0, "CCamera::fun_44CFB0" },  /* auto */
  { 0x0044D2A0, (funptr_t) &dk2::CCamera::fun_44D2A0, "CCamera::fun_44D2A0" },  /* auto */
  { 0x0044D320, (funptr_t) &dk2::CCamera::fun_44D320, "CCamera::fun_44D320" },  /* auto */
  { 0x0044D550, (funptr_t) &dk2::CCamera::sub_44D550, "CCamera::sub_44D550" },  /* auto */
  { 0x0044D590, (funptr_t) &dk2::CCamera::fun_44D590, "CCamera::fun_44D590" },  /* auto */
  { 0x0044D620, (funptr_t) &dk2::CCamera::fun_44D620, "CCamera::fun_44D620" },  /* auto */
  { 0x0044D6D0, (funptr_t) &dk2::CCamera::fun_44D6D0, "CCamera::fun_44D6D0" },  /* auto */
  { 0x0044D8F0, (funptr_t) &dk2::CCamera::sub_44D8F0, "CCamera::sub_44D8F0" },  /* auto */
  { 0x0044DC70, (funptr_t) &dk2::CCamera::fun_44DC70, "CCamera::fun_44DC70" },  /* auto */
  { 0x0044DD40, (funptr_t) &dk2::CCamera::fun_44DD40, "CCamera::fun_44DD40" },  /* auto */
  { 0x0044DE20, (funptr_t) &dk2::CCamera::fun_44DE20, "CCamera::fun_44DE20" },  /* auto */
  { 0x00529E90, (funptr_t) &dk2::CCheckBoxButton::fun_529E90, "CCheckBoxButton::fun_529E90" },  /* auto */
  { 0x00528610, (funptr_t) &dk2::CClickButton::handleClick, "CClickButton::handleClick" },  /* auto */
  { 0x0052CAA0, (funptr_t) &dk2::CClickButton::scalar_destructor, "CClickButton::scalar_destructor" },  /* auto */
  { 0x00521B20, (funptr_t) &dk2::CCommunicationInterface::constructor, "CCommunicationInterface::constructor" },  /* auto */
  { 0x00521B50, (funptr_t) &dk2::CCommunicationInterface::deleting_destructor, "CCommunicationInterface::deleting_destructor" },  /* auto */
  { 0x00521B70, (funptr_t) &dk2::CCommunicationInterface::destructor, "CCommunicationInterface::destructor" },  /* auto */
  { 0x00521BA0, (funptr_t) &dk2::CCommunicationInterface::fun_521BA0, "CCommunicationInterface::fun_521BA0" },  /* auto */
  { 0x00521CC0, (funptr_t) &dk2::CCommunicationInterface::updateTime_to__, "CCommunicationInterface::updateTime_to__" },  /* auto */
  { 0x004010D0, (funptr_t) &dk2::CComponent::deleting_destructor, "CComponent::deleting_destructor" },  /* auto */
  { 0x00552BC0, (funptr_t) &dk2::CComponent::constructor, "CComponent::constructor" },  /* auto */
  { 0x00552C60, (funptr_t) &dk2::CComponent::release, "CComponent::release" },  /* auto */
  { 0x00552C80, (funptr_t) &dk2::CComponent::fun_552C80, "CComponent::fun_552C80" },  /* auto */
  { 0x00457880, (funptr_t) &dk2::CCreature::fun_457880, "CCreature::fun_457880" },  /* auto */
  { 0x0045A550, (funptr_t) &dk2::CCreature::fun_45A550, "CCreature::fun_45A550" },  /* auto */
  { 0x0045A6B0, (funptr_t) &dk2::CCreature::fun_45A6B0, "CCreature::fun_45A6B0" },  /* auto */
  { 0x0045A6D0, (funptr_t) &dk2::CCreature::fun_45A6D0, "CCreature::fun_45A6D0" },  /* auto */
  { 0x0045A8B0, (funptr_t) &dk2::CCreature::fun_45A8B0, "CCreature::fun_45A8B0" },  /* auto */
  { 0x0045ADC0, (funptr_t) &dk2::CCreature::fun_45ADC0, "CCreature::fun_45ADC0" },  /* auto */
  { 0x0045AFF0, (funptr_t) &dk2::CCreature::fun_45AFF0, "CCreature::fun_45AFF0" },  /* auto */
  { 0x0045B140, (funptr_t) &dk2::CCreature::fun_45B140, "CCreature::fun_45B140" },  /* auto */
  { 0x0045B500, (funptr_t) &dk2::CCreature::fun_45B500, "CCreature::fun_45B500" },  /* auto */
  { 0x0045B800, (funptr_t) &dk2::CCreature::fun_45B800, "CCreature::fun_45B800" },  /* auto */
  { 0x0045BAD0, (funptr_t) &dk2::CCreature::fun_45BAD0, "CCreature::fun_45BAD0" },  /* auto */
  { 0x0045BDF0, (funptr_t) &dk2::CCreature::fun_45BDF0, "CCreature::fun_45BDF0" },  /* auto */
  { 0x0045C690, (funptr_t) &dk2::CCreature::fun_45C690, "CCreature::fun_45C690" },  /* auto */
  { 0x0045CB00, (funptr_t) &dk2::CCreature::fun_45CB00, "CCreature::fun_45CB00" },  /* auto */
  { 0x0045E1B0, (funptr_t) &dk2::CCreature::fun_45E1B0, "CCreature::fun_45E1B0" },  /* auto */
  { 0x0045E4F0, (funptr_t) &dk2::CCreature::fun_45E4F0, "CCreature::fun_45E4F0" },  /* auto */
  { 0x0045E8F0, (funptr_t) &dk2::CCreature::fun_45E8F0, "CCreature::fun_45E8F0" },  /* auto */
  { 0x0045E9F0, (funptr_t) &dk2::CCreature::fun_45E9F0, "CCreature::fun_45E9F0" },  /* auto */
  { 0x0045EC10, (funptr_t) &dk2::CCreature::fun_45EC10, "CCreature::fun_45EC10" },  /* auto */
  { 0x0045EC80, (funptr_t) &dk2::CCreature::fun_45EC80, "CCreature::fun_45EC80" },  /* auto */
  { 0x0045EDA0, (funptr_t) &dk2::CCreature::fun_45EDA0, "CCreature::fun_45EDA0" },  /* auto */
  { 0x0045EF50, (funptr_t) &dk2::CCreature::fun_45EF50, "CCreature::fun_45EF50" },  /* auto */
  { 0x00460B50, (funptr_t) &dk2::CCreature::fun_460B50, "CCreature::fun_460B50" },  /* auto */
  { 0x00460C50, (funptr_t) &dk2::CCreature::fun_460C50, "CCreature::fun_460C50" },  /* auto */
  { 0x00460DA0, (funptr_t) &dk2::CCreature::fun_460DA0, "CCreature::fun_460DA0" },  /* auto */
  { 0x00473990, (funptr_t) &dk2::CCreature::fun_473990, "CCreature::fun_473990" },  /* auto */
  { 0x004739C0, (funptr_t) &dk2::CCreature::fun_4739C0, "CCreature::fun_4739C0" },  /* auto */
  { 0x00485210, (funptr_t) &dk2::CCreature::fun_485210, "CCreature::fun_485210" },  /* auto */
  { 0x00485880, (funptr_t) &dk2::CCreature::fun_485880, "CCreature::fun_485880" },  /* auto */
  { 0x004858B0, (funptr_t) &dk2::CCreature::fun_4858B0, "CCreature::fun_4858B0" },  /* auto */
  { 0x004872A0, (funptr_t) &dk2::CCreature::init, "CCreature::init" },  /* auto */
  { 0x00488520, (funptr_t) &dk2::CCreature::saveToTbDiscFile, "CCreature::saveToTbDiscFile" },  /* auto */
  { 0x00488640, (funptr_t) &dk2::CCreature::fun_488640, "CCreature::fun_488640" },  /* auto */
  { 0x00488710, (funptr_t) &dk2::CCreature::clear, "CCreature::clear" },  /* auto */
  { 0x00488750, (funptr_t) &dk2::CCreature::fun_488750, "CCreature::fun_488750" },  /* auto */
  { 0x004887D0, (funptr_t) &dk2::CCreature::fun_4887D0, "CCreature::fun_4887D0" },  /* auto */
  { 0x00488840, (funptr_t) &dk2::CCreature::fun_488840, "CCreature::fun_488840" },  /* auto */
  { 0x004888C0, (funptr_t) &dk2::CCreature::fun_4888C0, "CCreature::fun_4888C0" },  /* auto */
  { 0x00488930, (funptr_t) &dk2::CCreature::fun_488930, "CCreature::fun_488930" },  /* auto */
  { 0x0048AD30, (funptr_t) &dk2::CCreature::fun_48AD30, "CCreature::fun_48AD30" },  /* auto */
  { 0x0048AE70, (funptr_t) &dk2::CCreature::fun_48AE70, "CCreature::fun_48AE70" },  /* auto */
  { 0x0048AF50, (funptr_t) &dk2::CCreature::fun_48AF50, "CCreature::fun_48AF50" },  /* auto */
  { 0x0048AF80, (funptr_t) &dk2::CCreature::fun_48AF80, "CCreature::fun_48AF80" },  /* auto */
  { 0x0048B120, (funptr_t) &dk2::CCreature::fun_48B120, "CCreature::fun_48B120" },  /* auto */
  { 0x0048B350, (funptr_t) &dk2::CCreature::fun_48B350, "CCreature::fun_48B350" },  /* auto */
  { 0x0048B770, (funptr_t) &dk2::CCreature::fun_48B770, "CCreature::fun_48B770" },  /* auto */
  { 0x0048BE20, (funptr_t) &dk2::CCreature::fun_48BE20, "CCreature::fun_48BE20" },  /* auto */
  { 0x0048C800, (funptr_t) &dk2::CCreature::fun_48C800, "CCreature::fun_48C800" },  /* auto */
  { 0x0048C9B0, (funptr_t) &dk2::CCreature::fun_48C9B0, "CCreature::fun_48C9B0" },  /* auto */
  { 0x0048D000, (funptr_t) &dk2::CCreature::fun_48D000, "CCreature::fun_48D000" },  /* auto */
  { 0x0048D010, (funptr_t) &dk2::CCreature::fun_48D010, "CCreature::fun_48D010" },  /* auto */
  { 0x0048D050, (funptr_t) &dk2::CCreature::fun_48D050, "CCreature::fun_48D050" },  /* auto */
  { 0x0048D340, (funptr_t) &dk2::CCreature::fun_48D340, "CCreature::fun_48D340" },  /* auto */
  { 0x0048D880, (funptr_t) &dk2::CCreature::fun_48D880, "CCreature::fun_48D880" },  /* auto */
  { 0x0048DEA0, (funptr_t) &dk2::CCreature::fun_48DEA0, "CCreature::fun_48DEA0" },  /* auto */
  { 0x0048DF10, (funptr_t) &dk2::CCreature::fun_48DF10, "CCreature::fun_48DF10" },  /* auto */
  { 0x0048DFA0, (funptr_t) &dk2::CCreature::fun_48DFA0, "CCreature::fun_48DFA0" },  /* auto */
  { 0x0048DFD0, (funptr_t) &dk2::CCreature::fun_48DFD0, "CCreature::fun_48DFD0" },  /* auto */
  { 0x0048E000, (funptr_t) &dk2::CCreature::fun_48E000, "CCreature::fun_48E000" },  /* auto */
  { 0x0048E030, (funptr_t) &dk2::CCreature::fun_48E030, "CCreature::fun_48E030" },  /* auto */
  { 0x0048E060, (funptr_t) &dk2::CCreature::fun_48E060, "CCreature::fun_48E060" },  /* auto */
  { 0x0048E090, (funptr_t) &dk2::CCreature::fun_48E090, "CCreature::fun_48E090" },  /* auto */
  { 0x0048E0B0, (funptr_t) &dk2::CCreature::fun_48E0B0, "CCreature::fun_48E0B0" },  /* auto */
  { 0x0048E0D0, (funptr_t) &dk2::CCreature::fun_48E0D0, "CCreature::fun_48E0D0" },  /* auto */
  { 0x0048E140, (funptr_t) &dk2::CCreature::fun_48E140, "CCreature::fun_48E140" },  /* auto */
  { 0x0048E160, (funptr_t) &dk2::CCreature::fun_48E160, "CCreature::fun_48E160" },  /* auto */
  { 0x0048E830, (funptr_t) &dk2::CCreature::fun_48E830, "CCreature::fun_48E830" },  /* auto */
  { 0x0048EBD0, (funptr_t) &dk2::CCreature::setOnFre, "CCreature::setOnFre" },  /* auto */
  { 0x0048EBF0, (funptr_t) &dk2::CCreature::fun_48EBF0, "CCreature::fun_48EBF0" },  /* auto */
  { 0x0048ECE0, (funptr_t) &dk2::CCreature::fun_48ECE0, "CCreature::fun_48ECE0" },  /* auto */
  { 0x0048ED40, (funptr_t) &dk2::CCreature::fun_48ED40, "CCreature::fun_48ED40" },  /* auto */
  { 0x0048EE90, (funptr_t) &dk2::CCreature::fun_48EE90, "CCreature::fun_48EE90" },  /* auto */
  { 0x0048F1D0, (funptr_t) &dk2::CCreature::fun_48F1D0, "CCreature::fun_48F1D0" },  /* auto */
  { 0x0048F250, (funptr_t) &dk2::CCreature::fun_48F250, "CCreature::fun_48F250" },  /* auto */
  { 0x0048F2E0, (funptr_t) &dk2::CCreature::fun_48F2E0, "CCreature::fun_48F2E0" },  /* auto */
  { 0x0048F350, (funptr_t) &dk2::CCreature::fun_48F350, "CCreature::fun_48F350" },  /* auto */
  { 0x0048F380, (funptr_t) &dk2::CCreature::fun_48F380, "CCreature::fun_48F380" },  /* auto */
  { 0x0048F390, (funptr_t) &dk2::CCreature::fun_48F390, "CCreature::fun_48F390" },  /* auto */
  { 0x0048F3E0, (funptr_t) &dk2::CCreature::fun_48F3E0, "CCreature::fun_48F3E0" },  /* auto */
  { 0x0048F3F0, (funptr_t) &dk2::CCreature::fun_48F3F0, "CCreature::fun_48F3F0" },  /* auto */
  { 0x0048F410, (funptr_t) &dk2::CCreature::fun_48F410, "CCreature::fun_48F410" },  /* auto */
  { 0x0048F690, (funptr_t) &dk2::CCreature::fun_48F690, "CCreature::fun_48F690" },  /* auto */
  { 0x0048FD70, (funptr_t) &dk2::CCreature::fun_48FD70, "CCreature::fun_48FD70" },  /* auto */
  { 0x00490120, (funptr_t) &dk2::CCreature::fun_490120, "CCreature::fun_490120" },  /* auto */
  { 0x00490230, (funptr_t) &dk2::CCreature::fun_490230, "CCreature::fun_490230" },  /* auto */
  { 0x00490240, (funptr_t) &dk2::CCreature::dump, "CCreature::dump" },  /* auto */
  { 0x00491830, (funptr_t) &dk2::CCreature::fun_491830, "CCreature::fun_491830" },  /* auto */
  { 0x00491880, (funptr_t) &dk2::CCreature::fun_491880, "CCreature::fun_491880" },  /* auto */
  { 0x004918A0, (funptr_t) &dk2::CCreature::fun_4918A0, "CCreature::fun_4918A0" },  /* auto */
  { 0x00491900, (funptr_t) &dk2::CCreature::fun_491900, "CCreature::fun_491900" },  /* auto */
  { 0x004919C0, (funptr_t) &dk2::CCreature::fun_4919C0, "CCreature::fun_4919C0" },  /* auto */
  { 0x00496700, (funptr_t) &dk2::CCreature::fun_496700, "CCreature::fun_496700" },  /* auto */
  { 0x004969D0, (funptr_t) &dk2::CCreature::fun_4969D0, "CCreature::fun_4969D0" },  /* auto */
  { 0x00496A30, (funptr_t) &dk2::CCreature::fun_496A30, "CCreature::fun_496A30" },  /* auto */
  { 0x00496AA0, (funptr_t) &dk2::CCreature::fun_496AA0, "CCreature::fun_496AA0" },  /* auto */
  { 0x00496D00, (funptr_t) &dk2::CCreature::fun_496D00, "CCreature::fun_496D00" },  /* auto */
  { 0x00496D20, (funptr_t) &dk2::CCreature::fun_496D20, "CCreature::fun_496D20" },  /* auto */
  { 0x00496D80, (funptr_t) &dk2::CCreature::fun_496D80, "CCreature::fun_496D80" },  /* auto */
  { 0x00496DE0, (funptr_t) &dk2::CCreature::fun_496DE0, "CCreature::fun_496DE0" },  /* auto */
  { 0x0049A950, (funptr_t) &dk2::CCreature::fun_49A950, "CCreature::fun_49A950" },  /* auto */
  { 0x0049A980, (funptr_t) &dk2::CCreature::fun_49A980, "CCreature::fun_49A980" },  /* auto */
  { 0x0049AA30, (funptr_t) &dk2::CCreature::fun_49AA30, "CCreature::fun_49AA30" },  /* auto */
  { 0x0049AAA0, (funptr_t) &dk2::CCreature::fun_49AAA0, "CCreature::fun_49AAA0" },  /* auto */
  { 0x0049AC80, (funptr_t) &dk2::CCreature::fun_49AC80, "CCreature::fun_49AC80" },  /* auto */
  { 0x004B1FA0, (funptr_t) &dk2::CCreature::fun_4B1FA0, "CCreature::fun_4B1FA0" },  /* auto */
  { 0x004B2AE0, (funptr_t) &dk2::CCreature::fun_4B2AE0, "CCreature::fun_4B2AE0" },  /* auto */
  { 0x004B2CE0, (funptr_t) &dk2::CCreature::fun_4B2CE0, "CCreature::fun_4B2CE0" },  /* auto */
  { 0x004B5B80, (funptr_t) &dk2::CCreature::destructor, "CCreature::destructor" },  /* auto */
  { 0x004B5D60, (funptr_t) &dk2::CCreature::fun_4B5D60, "CCreature::fun_4B5D60" },  /* auto */
  { 0x004B5D80, (funptr_t) &dk2::CCreature::fun_4B5D80, "CCreature::fun_4B5D80" },  /* auto */
  { 0x004B5DE0, (funptr_t) &dk2::CCreature::idBeingDragged, "CCreature::idBeingDragged" },  /* auto */
  { 0x004B5DF0, (funptr_t) &dk2::CCreature::startDragging, "CCreature::startDragging" },  /* auto */
  { 0x004B5E00, (funptr_t) &dk2::CCreature::stopDragging, "CCreature::stopDragging" },  /* auto */
  { 0x004B5E10, (funptr_t) &dk2::CCreature::constructor, "CCreature::constructor" },  /* auto */
  { 0x004B5F70, (funptr_t) &dk2::CCreature::deleting_destructor, "CCreature::deleting_destructor" },  /* auto */
  { 0x004E0460, (funptr_t) &dk2::CCreature::fun_4E0460, "CCreature::fun_4E0460" },  /* auto */
  { 0x004E8DA0, (funptr_t) &dk2::CCreature::fun_4E8DA0, "CCreature::fun_4E8DA0" },  /* auto */
  { 0x00506120, (funptr_t) &dk2::CCreaturePool::constructor, "CCreaturePool::constructor" },  /* auto */
  { 0x00506140, (funptr_t) &dk2::CCreaturePool::destructor, "CCreaturePool::destructor" },  /* auto */
  { 0x00506150, (funptr_t) &dk2::CCreaturePool::open, "CCreaturePool::open" },  /* auto */
  { 0x005061F0, (funptr_t) &dk2::CCreaturePool::close, "CCreaturePool::close" },  /* auto */
  { 0x00506220, (funptr_t) &dk2::CCreaturePool::fun_506220, "CCreaturePool::fun_506220" },  /* auto */
  { 0x005062D0, (funptr_t) &dk2::CCreaturePool::fun_5062D0, "CCreaturePool::fun_5062D0" },  /* auto */
  { 0x005063D0, (funptr_t) &dk2::CCreaturePool::fun_5063D0, "CCreaturePool::fun_5063D0" },  /* auto */
  { 0x00506580, (funptr_t) &dk2::CCreaturePool::calcChecksum, "CCreaturePool::calcChecksum" },  /* auto */
  { 0x005065B0, (funptr_t) &dk2::CCreaturePool::dump, "CCreaturePool::dump" },  /* auto */
  { 0x004B0F20, (funptr_t) &dk2::CDeadBody::init, "CDeadBody::init" },  /* auto */
  { 0x004B1180, (funptr_t) &dk2::CDeadBody::fun_4B1180, "CDeadBody::fun_4B1180" },  /* auto */
  { 0x004B1240, (funptr_t) &dk2::CDeadBody::fun_4B1240, "CDeadBody::fun_4B1240" },  /* auto */
  { 0x004B1290, (funptr_t) &dk2::CDeadBody::fun_4B1290, "CDeadBody::fun_4B1290" },  /* auto */
  { 0x004B12D0, (funptr_t) &dk2::CDeadBody::fun_4B12D0, "CDeadBody::fun_4B12D0" },  /* auto */
  { 0x004B16E0, (funptr_t) &dk2::CDeadBody::fun_4B16E0, "CDeadBody::fun_4B16E0" },  /* auto */
  { 0x004B1700, (funptr_t) &dk2::CDeadBody::fun_4B1700, "CDeadBody::fun_4B1700" },  /* auto */
  { 0x004B1740, (funptr_t) &dk2::CDeadBody::fun_4B1740, "CDeadBody::fun_4B1740" },  /* auto */
  { 0x004B18B0, (funptr_t) &dk2::CDeadBody::dump, "CDeadBody::dump" },  /* auto */
  { 0x004B8050, (funptr_t) &dk2::CDeadBody::constructor, "CDeadBody::constructor" },  /* auto */
  { 0x004B80F0, (funptr_t) &dk2::CDeadBody::fun_4B80F0, "CDeadBody::fun_4B80F0" },  /* auto */
  { 0x004B8100, (funptr_t) &dk2::CDeadBody::fun_4B8100, "CDeadBody::fun_4B8100" },  /* auto */
  { 0x004B8110, (funptr_t) &dk2::CDeadBody::fun_4B8110, "CDeadBody::fun_4B8110" },  /* auto */
  { 0x004B8120, (funptr_t) &dk2::CDeadBody::deleting_destructor, "CDeadBody::deleting_destructor" },  /* auto */
  { 0x004B8140, (funptr_t) &dk2::CDeadBody::destructor, "CDeadBody::destructor" },  /* auto */
  { 0x00402670, (funptr_t) &dk2::CDefaultPlayerInterface::constructor, "CDefaultPlayerInterface::constructor" },  /* auto */
  { 0x00402B50, (funptr_t) &dk2::CDefaultPlayerInterface::fun_402B50, "CDefaultPlayerInterface::fun_402B50" },  /* auto */
  { 0x00402B60, (funptr_t) &dk2::CDefaultPlayerInterface::fun_402B60, "CDefaultPlayerInterface::fun_402B60" },  /* auto */
  { 0x00402B70, (funptr_t) &dk2::CDefaultPlayerInterface::fun_402B70, "CDefaultPlayerInterface::fun_402B70" },  /* auto */
  { 0x00402B80, (funptr_t) &dk2::CDefaultPlayerInterface::fun_402B80, "CDefaultPlayerInterface::fun_402B80" },  /* auto */
  { 0x00402B90, (funptr_t) &dk2::CDefaultPlayerInterface::fun_402B90, "CDefaultPlayerInterface::fun_402B90" },  /* auto */
  { 0x00402BB0, (funptr_t) &dk2::CDefaultPlayerInterface::CTextIconDraw_fun_402BB0, "CDefaultPlayerInterface::CTextIconDraw_fun_402BB0" },  /* auto */
  { 0x00402C00, (funptr_t) &dk2::CDefaultPlayerInterface::fun_402C00, "CDefaultPlayerInterface::fun_402C00" },  /* auto */
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
  { 0x004096B0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_4096B0, "CDefaultPlayerInterface::fun_4096B0" },  /* auto */
  { 0x00409880, (funptr_t) &dk2::CDefaultPlayerInterface::fun_409880, "CDefaultPlayerInterface::fun_409880" },  /* auto */
  { 0x004098A0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_4098A0, "CDefaultPlayerInterface::fun_4098A0" },  /* auto */
  { 0x004098D0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_4098D0, "CDefaultPlayerInterface::fun_4098D0" },  /* auto */
  { 0x00409990, (funptr_t) &dk2::CDefaultPlayerInterface::sub_409990, "CDefaultPlayerInterface::sub_409990" },  /* auto */
  { 0x00409CF0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_409CF0, "CDefaultPlayerInterface::fun_409CF0" },  /* auto */
  { 0x00409EC0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_409EC0, "CDefaultPlayerInterface::fun_409EC0" },  /* auto */
  { 0x0040A280, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40A280, "CDefaultPlayerInterface::sub_40A280" },  /* auto */
  { 0x0040A600, (funptr_t) &dk2::CDefaultPlayerInterface::fun_40A600, "CDefaultPlayerInterface::fun_40A600" },  /* auto */
  { 0x0040A680, (funptr_t) &dk2::CDefaultPlayerInterface::onWmChar, "CDefaultPlayerInterface::onWmChar" },  /* auto */
  { 0x0040A760, (funptr_t) &dk2::CDefaultPlayerInterface::applyCheatCode, "CDefaultPlayerInterface::applyCheatCode" },  /* auto */
  { 0x0040ACD0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40ACD0, "CDefaultPlayerInterface::sub_40ACD0" },  /* auto */
  { 0x0040AE80, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40AE80, "CDefaultPlayerInterface::sub_40AE80" },  /* auto */
  { 0x0040B160, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B160, "CDefaultPlayerInterface::sub_40B160" },  /* auto */
  { 0x0040B210, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B210, "CDefaultPlayerInterface::sub_40B210" },  /* auto */
  { 0x0040B3C0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B3C0, "CDefaultPlayerInterface::sub_40B3C0" },  /* auto */
  { 0x0040B4F0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B4F0, "CDefaultPlayerInterface::sub_40B4F0" },  /* auto */
  { 0x0040B600, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40B600, "CDefaultPlayerInterface::sub_40B600" },  /* auto */
  { 0x0040BB60, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40BB60, "CDefaultPlayerInterface::sub_40BB60" },  /* auto */
  { 0x0040BBE0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40BBE0, "CDefaultPlayerInterface::sub_40BBE0" },  /* auto */
  { 0x0040BFF0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40BFF0, "CDefaultPlayerInterface::sub_40BFF0" },  /* auto */
  { 0x0040CA70, (funptr_t) &dk2::CDefaultPlayerInterface::sub_40CA70, "CDefaultPlayerInterface::sub_40CA70" },  /* auto */
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
  { 0x00411B30, (funptr_t) &dk2::CDefaultPlayerInterface::sub_411B30, "CDefaultPlayerInterface::sub_411B30" },  /* auto */
  { 0x00415B30, (funptr_t) &dk2::CDefaultPlayerInterface::sub_415B30, "CDefaultPlayerInterface::sub_415B30" },  /* auto */
  { 0x00415BC0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_415BC0, "CDefaultPlayerInterface::sub_415BC0" },  /* auto */
  { 0x00416150, (funptr_t) &dk2::CDefaultPlayerInterface::sub_416150, "CDefaultPlayerInterface::sub_416150" },  /* auto */
  { 0x004162A0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_4162A0, "CDefaultPlayerInterface::sub_4162A0" },  /* auto */
  { 0x00419180, (funptr_t) &dk2::CDefaultPlayerInterface::sub_419180_loadSmth, "CDefaultPlayerInterface::sub_419180_loadSmth" },  /* auto */
  { 0x00419C00, (funptr_t) &dk2::CDefaultPlayerInterface::sub_419C00, "CDefaultPlayerInterface::sub_419C00" },  /* auto */
  { 0x00419DF0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_419DF0, "CDefaultPlayerInterface::sub_419DF0" },  /* auto */
  { 0x0041A190, (funptr_t) &dk2::CDefaultPlayerInterface::sub_41A190, "CDefaultPlayerInterface::sub_41A190" },  /* auto */
  { 0x0041A890, (funptr_t) &dk2::CDefaultPlayerInterface::sub_41A890, "CDefaultPlayerInterface::sub_41A890" },  /* auto */
  { 0x0041A9B0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_41A9B0, "CDefaultPlayerInterface::fun_41A9B0" },  /* auto */
  { 0x0041C660, (funptr_t) &dk2::CDefaultPlayerInterface::sub_41C660, "CDefaultPlayerInterface::sub_41C660" },  /* auto */
  { 0x0041CC50, (funptr_t) &dk2::CDefaultPlayerInterface::sub_41CC50, "CDefaultPlayerInterface::sub_41CC50" },  /* auto */
  { 0x0041E620, (funptr_t) &dk2::CDefaultPlayerInterface::sub_41E620, "CDefaultPlayerInterface::sub_41E620" },  /* auto */
  { 0x0041EDC0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_41EDC0, "CDefaultPlayerInterface::fun_41EDC0" },  /* auto */
  { 0x00422600, (funptr_t) &dk2::CDefaultPlayerInterface::sub_422600, "CDefaultPlayerInterface::sub_422600" },  /* auto */
  { 0x00422BC0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_422BC0, "CDefaultPlayerInterface::fun_422BC0" },  /* auto */
  { 0x00422F60, (funptr_t) &dk2::CDefaultPlayerInterface::sub_422F60, "CDefaultPlayerInterface::sub_422F60" },  /* auto */
  { 0x0042BC10, (funptr_t) &dk2::CDefaultPlayerInterface::sub_42BC10, "CDefaultPlayerInterface::sub_42BC10" },  /* auto */
  { 0x0042BC20, (funptr_t) &dk2::CDefaultPlayerInterface::fun_42BC20, "CDefaultPlayerInterface::fun_42BC20" },  /* auto */
  { 0x0042BE40, (funptr_t) &dk2::CDefaultPlayerInterface::fun_42BE40, "CDefaultPlayerInterface::fun_42BE40" },  /* auto */
  { 0x0042BFE0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_42BFE0, "CDefaultPlayerInterface::fun_42BFE0" },  /* auto */
  { 0x0042C0D0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_42C0D0, "CDefaultPlayerInterface::fun_42C0D0" },  /* auto */
  { 0x0042C1E0, (funptr_t) &dk2::CDefaultPlayerInterface::fun_42C1E0, "CDefaultPlayerInterface::fun_42C1E0" },  /* auto */
  { 0x0042C390, (funptr_t) &dk2::CDefaultPlayerInterface::sub_42C390, "CDefaultPlayerInterface::sub_42C390" },  /* auto */
  { 0x0042C710, (funptr_t) &dk2::CDefaultPlayerInterface::fun_42C710, "CDefaultPlayerInterface::fun_42C710" },  /* auto */
  { 0x0042C7D0, (funptr_t) &dk2::CDefaultPlayerInterface::sub_42C7D0, "CDefaultPlayerInterface::sub_42C7D0" },  /* auto */
  { 0x0042CAB0, (funptr_t) &dk2::CDefaultPlayerInterface::whatEverFont_42CAB0, "CDefaultPlayerInterface::whatEverFont_42CAB0" },  /* auto */
  { 0x0042CB60, (funptr_t) &dk2::CDefaultPlayerInterface::sub_42CB60, "CDefaultPlayerInterface::sub_42CB60" },  /* auto */
  { 0x0042CDF0, (funptr_t) &dk2::CDefaultPlayerInterface::createSurfacesForView_42CDF0, "CDefaultPlayerInterface::createSurfacesForView_42CDF0" },  /* auto */
  { 0x0042D090, (funptr_t) &dk2::CDefaultPlayerInterface::CTextIconDraw_fun_42D090, "CDefaultPlayerInterface::CTextIconDraw_fun_42D090" },  /* auto */
  { 0x004346E0, (funptr_t) &dk2::CDefaultPlayerInterface::pushAction, "CDefaultPlayerInterface::pushAction" },  /* auto */
  { 0x00555060, (funptr_t) &dk2::CDefaultPlayerInterface::sub_555060, "CDefaultPlayerInterface::sub_555060" },  /* auto */
  { 0x0057A3A0, (funptr_t) &dk2::CDirectIFFFile::writeIf2, "CDirectIFFFile::writeIf2" },  /* auto */
  { 0x0057A3C0, (funptr_t) &dk2::CDirectIFFFile::readInt, "CDirectIFFFile::readInt" },  /* auto */
  { 0x0057A3E0, (funptr_t) &dk2::CDirectIFFFile::readString, "CDirectIFFFile::readString" },  /* auto */
  { 0x0057A430, (funptr_t) &dk2::CDirectIFFFile::seekTo, "CDirectIFFFile::seekTo" },  /* auto */
  { 0x0057A450, (funptr_t) &dk2::CDirectIFFFile::constructor, "CDirectIFFFile::constructor" },  /* auto */
  { 0x0057A470, (funptr_t) &dk2::CDirectIFFFile::seek, "CDirectIFFFile::seek" },  /* auto */
  { 0x0057A490, (funptr_t) &dk2::CDirectIFFFile::destructor, "CDirectIFFFile::destructor" },  /* auto */
  { 0x0057A560, (funptr_t) &dk2::CDirectIFFFile::open, "CDirectIFFFile::open" },  /* auto */
  { 0x0057A6F0, (funptr_t) &dk2::CDirectIFFFile::sub_57A6F0, "CDirectIFFFile::sub_57A6F0" },  /* auto */
  { 0x0057A7A0, (funptr_t) &dk2::CDirectIFFFile::readFile_57A7A0, "CDirectIFFFile::readFile_57A7A0" },  /* auto */
  { 0x0057A7D0, (funptr_t) &dk2::CDirectIFFFile::writeFile_57A7D0, "CDirectIFFFile::writeFile_57A7D0" },  /* auto */
  { 0x004A5070, (funptr_t) &dk2::CDoor::init, "CDoor::init" },  /* auto */
  { 0x004A55B0, (funptr_t) &dk2::CDoor::fun_4A55B0, "CDoor::fun_4A55B0" },  /* auto */
  { 0x004A55F0, (funptr_t) &dk2::CDoor::fun_4A55F0, "CDoor::fun_4A55F0" },  /* auto */
  { 0x004A66A0, (funptr_t) &dk2::CDoor::fun_4A66A0, "CDoor::fun_4A66A0" },  /* auto */
  { 0x004A67C0, (funptr_t) &dk2::CDoor::fun_4A67C0, "CDoor::fun_4A67C0" },  /* auto */
  { 0x004A68C0, (funptr_t) &dk2::CDoor::fun_4A68C0, "CDoor::fun_4A68C0" },  /* auto */
  { 0x004A6E10, (funptr_t) &dk2::CDoor::fun_4A6E10, "CDoor::fun_4A6E10" },  /* auto */
  { 0x004A6F10, (funptr_t) &dk2::CDoor::dump, "CDoor::dump" },  /* auto */
  { 0x004A7CC0, (funptr_t) &dk2::CDoor::fun_4A7CC0, "CDoor::fun_4A7CC0" },  /* auto */
  { 0x004B7310, (funptr_t) &dk2::CDoor::constructor, "CDoor::constructor" },  /* auto */
  { 0x004B7380, (funptr_t) &dk2::CDoor::deleting_destructor, "CDoor::deleting_destructor" },  /* auto */
  { 0x004B73A0, (funptr_t) &dk2::CDoor::destructor, "CDoor::destructor" },  /* auto */
  { 0x00577E60, (funptr_t) &dk2::CEngine2DAnimMesh::constructor, "CEngine2DAnimMesh::constructor" },  /* auto */
  { 0x00577F10, (funptr_t) &dk2::CEngine2DAnimMesh::fun_577F10, "CEngine2DAnimMesh::fun_577F10" },  /* auto */
  { 0x005783A0, (funptr_t) &dk2::CEngine2DAnimMesh::fun_5783A0, "CEngine2DAnimMesh::fun_5783A0" },  /* auto */
  { 0x005783D0, (funptr_t) &dk2::CEngine2DAnimMesh::fun_5783D0, "CEngine2DAnimMesh::fun_5783D0" },  /* auto */
  { 0x00583680, (funptr_t) &dk2::CEngine2DAnimMesh::fun_583680, "CEngine2DAnimMesh::fun_583680" },  /* auto */
  { 0x00578A80, (funptr_t) &dk2::CEngine2DMeshSurface::constructor, "CEngine2DMeshSurface::constructor" },  /* auto */
  { 0x00578B80, (funptr_t) &dk2::CEngine2DMeshSurface::scalar_destructor, "CEngine2DMeshSurface::scalar_destructor" },  /* auto */
  { 0x00578BA0, (funptr_t) &dk2::CEngine2DMeshSurface::destructor, "CEngine2DMeshSurface::destructor" },  /* auto */
  { 0x00578C00, (funptr_t) &dk2::CEngine2DMeshSurface::fun_578C00, "CEngine2DMeshSurface::fun_578C00" },  /* auto */
  { 0x005769D0, (funptr_t) &dk2::CEngine2DPrimitive::scalar_destructor, "CEngine2DPrimitive::scalar_destructor" },  /* auto */
  { 0x00579170, (funptr_t) &dk2::CEngine2DPrimitive::constructor, "CEngine2DPrimitive::constructor" },  /* auto */
  { 0x005776C0, (funptr_t) &dk2::CEngine2DRotatableSprite::fun_5776C0, "CEngine2DRotatableSprite::fun_5776C0" },  /* auto */
  { 0x00576940, (funptr_t) &dk2::CEngine2DSprite::constructor, "CEngine2DSprite::constructor" },  /* auto */
  { 0x00576A10, (funptr_t) &dk2::CEngine2DSprite::addVert1CTriangle, "CEngine2DSprite::addVert1CTriangle" },  /* auto */
  { 0x00576E50, (funptr_t) &dk2::CEngine2DSprite::addVert18Triangle, "CEngine2DSprite::addVert18Triangle" },  /* auto */
  { 0x00577400, (funptr_t) &dk2::CEngine2DSprite::createTriangle34, "CEngine2DSprite::createTriangle34" },  /* auto */
  { 0x00577640, (funptr_t) &dk2::CEngine2DSprite::fun_577640, "CEngine2DSprite::fun_577640" },  /* auto */
  { 0x00577960, (funptr_t) &dk2::CEngine2DStaticMesh::constructor, "CEngine2DStaticMesh::constructor" },  /* auto */
  { 0x00577A00, (funptr_t) &dk2::CEngine2DStaticMesh::fun_577A00, "CEngine2DStaticMesh::fun_577A00" },  /* auto */
  { 0x00577D70, (funptr_t) &dk2::CEngine2DStaticMesh::fun_577D70, "CEngine2DStaticMesh::fun_577D70" },  /* auto */
  { 0x00577D90, (funptr_t) &dk2::CEngine2DStaticMesh::fun_577D90, "CEngine2DStaticMesh::fun_577D90" },  /* auto */
  { 0x00577DC0, (funptr_t) &dk2::CEngine2DStaticMesh::fun_577DC0, "CEngine2DStaticMesh::fun_577DC0" },  /* auto */
  { 0x00583120, (funptr_t) &dk2::CEngineAnimMesh::constructor, "CEngineAnimMesh::constructor" },  /* auto */
  { 0x005835E0, (funptr_t) &dk2::CEngineAnimMesh::fun_5835E0, "CEngineAnimMesh::fun_5835E0" },  /* auto */
  { 0x005836A0, (funptr_t) &dk2::CEngineAnimMesh::sub_5836A0, "CEngineAnimMesh::sub_5836A0" },  /* auto */
  { 0x00583CA0, (funptr_t) &dk2::CEngineAnimMesh::sub_583CA0, "CEngineAnimMesh::sub_583CA0" },  /* auto */
  { 0x00583DC0, (funptr_t) &dk2::CEngineAnimMesh::sub_583DC0, "CEngineAnimMesh::sub_583DC0" },  /* auto */
  { 0x005848B0, (funptr_t) &dk2::CEngineAnimMesh::fun_5848B0, "CEngineAnimMesh::fun_5848B0" },  /* auto */
  { 0x00584900, (funptr_t) &dk2::CEngineAnimMesh::appendToSceneObject2EList, "CEngineAnimMesh::appendToSceneObject2EList" },  /* auto */
  { 0x005855E0, (funptr_t) &dk2::CEngineAnimMesh::sub_5855E0, "CEngineAnimMesh::sub_5855E0" },  /* auto */
  { 0x00585AD0, (funptr_t) &dk2::CEngineAnimMesh::fun_585AD0, "CEngineAnimMesh::fun_585AD0" },  /* auto */
  { 0x005906C0, (funptr_t) &dk2::CEngineCompressedSurface::getBufWithSize, "CEngineCompressedSurface::getBufWithSize" },  /* auto */
  { 0x005906D0, (funptr_t) &dk2::CEngineCompressedSurface::scalar_destructor, "CEngineCompressedSurface::scalar_destructor" },  /* auto */
  { 0x005906F0, (funptr_t) &dk2::CEngineCompressedSurface::destructor, "CEngineCompressedSurface::destructor" },  /* auto */
  { 0x00590740, (funptr_t) &dk2::CEngineCompressedSurface::copySurf, "CEngineCompressedSurface::copySurf" },  /* auto */
  { 0x005907D0, (funptr_t) &dk2::CEngineCompressedSurface::paintSurf, "CEngineCompressedSurface::paintSurf" },  /* auto */
  { 0x00590880, (funptr_t) &dk2::CEngineDDSurface::constructor, "CEngineDDSurface::constructor" },  /* auto */
  { 0x005909C0, (funptr_t) &dk2::CEngineDDSurface::fun_5909C0, "CEngineDDSurface::fun_5909C0" },  /* auto */
  { 0x005909E0, (funptr_t) &dk2::CEngineDDSurface::destructor, "CEngineDDSurface::destructor" },  /* auto */
  { 0x00590A40, (funptr_t) &dk2::CEngineDDSurface::paintSurf, "CEngineDDSurface::paintSurf" },  /* auto */
  { 0x00590AC0, (funptr_t) &dk2::CEngineDDSurface::lockBuf, "CEngineDDSurface::lockBuf" },  /* auto */
  { 0x00590B20, (funptr_t) &dk2::CEngineDDSurface::unlockBuf, "CEngineDDSurface::unlockBuf" },  /* auto */
  { 0x005873A0, (funptr_t) &dk2::CEngineDynamicHeightField::constructor, "CEngineDynamicHeightField::constructor" },  /* auto */
  { 0x00587550, (funptr_t) &dk2::CEngineDynamicHeightField::scalar_destructor, "CEngineDynamicHeightField::scalar_destructor" },  /* auto */
  { 0x00587570, (funptr_t) &dk2::CEngineDynamicHeightField::destructor, "CEngineDynamicHeightField::destructor" },  /* auto */
  { 0x005875D0, (funptr_t) &dk2::CEngineDynamicHeightField::fun_5875D0, "CEngineDynamicHeightField::fun_5875D0" },  /* auto */
  { 0x00587DA0, (funptr_t) &dk2::CEngineDynamicHeightField::appendToSceneObject2EList, "CEngineDynamicHeightField::appendToSceneObject2EList" },  /* auto */
  { 0x005801E0, (funptr_t) &dk2::CEngineDynamicMesh::constructor2, "CEngineDynamicMesh::constructor2" },  /* auto */
  { 0x00580480, (funptr_t) &dk2::CEngineDynamicMesh::constructor, "CEngineDynamicMesh::constructor" },  /* auto */
  { 0x005808E0, (funptr_t) &dk2::CEngineDynamicMesh::shadow_sub_5808E0, "CEngineDynamicMesh::shadow_sub_5808E0" },  /* auto */
  { 0x00580DF0, (funptr_t) &dk2::CEngineDynamicMesh::fun_580DF0, "CEngineDynamicMesh::fun_580DF0" },  /* auto */
  { 0x00580E10, (funptr_t) &dk2::CEngineDynamicMesh::fun_580E10, "CEngineDynamicMesh::fun_580E10" },  /* auto */
  { 0x00580E40, (funptr_t) &dk2::CEngineDynamicMesh::fun_580E40, "CEngineDynamicMesh::fun_580E40" },  /* auto */
  { 0x00580EC0, (funptr_t) &dk2::CEngineDynamicMesh::appendToSceneObject2EList, "CEngineDynamicMesh::appendToSceneObject2EList" },  /* auto */
  { 0x00581BE0, (funptr_t) &dk2::CEngineDynamicMesh::sub_581BE0, "CEngineDynamicMesh::sub_581BE0" },  /* auto */
  { 0x00582180, (funptr_t) &dk2::CEngineDynamicMesh::fun_582180, "CEngineDynamicMesh::fun_582180" },  /* auto */
  { 0x00582290, (funptr_t) &dk2::CEngineDynamicMesh::fun_582290, "CEngineDynamicMesh::fun_582290" },  /* auto */
  { 0x00582CE0, (funptr_t) &dk2::CEngineDynamicMesh::fun_582CE0, "CEngineDynamicMesh::fun_582CE0" },  /* auto */
  { 0x00582D30, (funptr_t) &dk2::CEngineDynamicMesh::fun_582D30, "CEngineDynamicMesh::fun_582D30" },  /* auto */
  { 0x004430E0, (funptr_t) &dk2::CEngineInterface::fun_4430E0, "CEngineInterface::fun_4430E0" },  /* auto */
  { 0x004430F0, (funptr_t) &dk2::CEngineInterface::fun_4430F0, "CEngineInterface::fun_4430F0" },  /* auto */
  { 0x00443100, (funptr_t) &dk2::CEngineInterface::fun_443100, "CEngineInterface::fun_443100" },  /* auto */
  { 0x00443110, (funptr_t) &dk2::CEngineInterface::fun_443110, "CEngineInterface::fun_443110" },  /* auto */
  { 0x0044DE30, (funptr_t) &dk2::CEngineInterface::constructor, "CEngineInterface::constructor" },  /* auto */
  { 0x005769F0, (funptr_t) &dk2::CEnginePrimitiveBase::deleting_destructor, "CEnginePrimitiveBase::deleting_destructor" },  /* auto */
  { 0x0057F1D0, (funptr_t) &dk2::CEnginePrimitiveBase::destructor, "CEnginePrimitiveBase::destructor" },  /* auto */
  { 0x0057FAF0, (funptr_t) &dk2::CEngineQuadPlane::constructor, "CEngineQuadPlane::constructor" },  /* auto */
  { 0x0057FB80, (funptr_t) &dk2::CEngineQuadPlane::fun_57FB80, "CEngineQuadPlane::fun_57FB80" },  /* auto */
  { 0x0057FF30, (funptr_t) &dk2::CEngineQuadPlane::appendToSceneObject2EList, "CEngineQuadPlane::appendToSceneObject2EList" },  /* auto */
  { 0x0057F110, (funptr_t) &dk2::CEngineSprite::constructor2, "CEngineSprite::constructor2" },  /* auto */
  { 0x0057F1E0, (funptr_t) &dk2::CEngineSprite::constructor, "CEngineSprite::constructor" },  /* auto */
  { 0x0057F3D0, (funptr_t) &dk2::CEngineSprite::fun_57F3D0, "CEngineSprite::fun_57F3D0" },  /* auto */
  { 0x0057F7E0, (funptr_t) &dk2::CEngineSprite::appendToSceneObject2EList, "CEngineSprite::appendToSceneObject2EList" },  /* auto */
  { 0x00586BC0, (funptr_t) &dk2::CEngineStaticHeightField::constructor, "CEngineStaticHeightField::constructor" },  /* auto */
  { 0x00586F70, (funptr_t) &dk2::CEngineStaticHeightField::scalar_destructor, "CEngineStaticHeightField::scalar_destructor" },  /* auto */
  { 0x00586F90, (funptr_t) &dk2::CEngineStaticHeightField::destructor, "CEngineStaticHeightField::destructor" },  /* auto */
  { 0x00586FF0, (funptr_t) &dk2::CEngineStaticHeightField::fun_586FF0, "CEngineStaticHeightField::fun_586FF0" },  /* auto */
  { 0x00587010, (funptr_t) &dk2::CEngineStaticHeightField::fun_587010, "CEngineStaticHeightField::fun_587010" },  /* auto */
  { 0x00587060, (funptr_t) &dk2::CEngineStaticHeightField::appendToSceneObject2EList, "CEngineStaticHeightField::appendToSceneObject2EList" },  /* auto */
  { 0x00585F90, (funptr_t) &dk2::CEngineStaticMesh::constructor, "CEngineStaticMesh::constructor" },  /* auto */
  { 0x005860B0, (funptr_t) &dk2::CEngineStaticMesh::scalar_destructor, "CEngineStaticMesh::scalar_destructor" },  /* auto */
  { 0x005860D0, (funptr_t) &dk2::CEngineStaticMesh::destructor, "CEngineStaticMesh::destructor" },  /* auto */
  { 0x00586130, (funptr_t) &dk2::CEngineStaticMesh::fun_586130, "CEngineStaticMesh::fun_586130" },  /* auto */
  { 0x00586150, (funptr_t) &dk2::CEngineStaticMesh::fun_586150, "CEngineStaticMesh::fun_586150" },  /* auto */
  { 0x00586190, (funptr_t) &dk2::CEngineStaticMesh::appendToSceneObject2EList, "CEngineStaticMesh::appendToSceneObject2EList" },  /* auto */
  { 0x00590580, (funptr_t) &dk2::CEngineSurface::constructor, "CEngineSurface::constructor" },  /* auto */
  { 0x00590630, (funptr_t) &dk2::CEngineSurface::getBufWithSize, "CEngineSurface::getBufWithSize" },  /* auto */
  { 0x00590650, (funptr_t) &dk2::CEngineSurface::scalar_destructor, "CEngineSurface::scalar_destructor" },  /* auto */
  { 0x00590670, (funptr_t) &dk2::CEngineSurface::destructor, "CEngineSurface::destructor" },  /* auto */
  { 0x00628BB0, (funptr_t) &dk2::CEngineSurface::getBuf, "CEngineSurface::getBuf" },  /* auto */
  { 0x00590450, (funptr_t) &dk2::CEngineSurfaceBase::paintSurf, "CEngineSurfaceBase::paintSurf" },  /* auto */
  { 0x00590520, (funptr_t) &dk2::CEngineSurfaceBase::fill, "CEngineSurfaceBase::fill" },  /* auto */
  { 0x00590610, (funptr_t) &dk2::CEngineSurfaceBase::scalar_destructor, "CEngineSurfaceBase::scalar_destructor" },  /* auto */
  { 0x00591BF0, (funptr_t) &dk2::CEngineSurfaceBase::constructor, "CEngineSurfaceBase::constructor" },  /* auto */
  { 0x005914E0, (funptr_t) &dk2::CEngineSurfaceScaler::convertCopyFrom, "CEngineSurfaceScaler::convertCopyFrom" },  /* auto */
  { 0x00591820, (funptr_t) &dk2::CEngineSurfaceScaler::copyScaledWithType, "CEngineSurfaceScaler::copyScaledWithType" },  /* auto */
  { 0x00588190, (funptr_t) &dk2::CEngineUnlitProceduralMesh::constructor, "CEngineUnlitProceduralMesh::constructor" },  /* auto */
  { 0x00588480, (funptr_t) &dk2::CEngineUnlitProceduralMesh::scalar_destructor, "CEngineUnlitProceduralMesh::scalar_destructor" },  /* auto */
  { 0x005884A0, (funptr_t) &dk2::CEngineUnlitProceduralMesh::destructor, "CEngineUnlitProceduralMesh::destructor" },  /* auto */
  { 0x005884F0, (funptr_t) &dk2::CEngineUnlitProceduralMesh::fun_5884F0, "CEngineUnlitProceduralMesh::fun_5884F0" },  /* auto */
  { 0x005888A0, (funptr_t) &dk2::CEngineUnlitProceduralMesh::appendToSceneObject2EList, "CEngineUnlitProceduralMesh::appendToSceneObject2EList" },  /* auto */
  { 0x00578530, (funptr_t) &dk2::CEngineVirtualPerspective2DAnimMesh::constructor, "CEngineVirtualPerspective2DAnimMesh::constructor" },  /* auto */
  { 0x00578600, (funptr_t) &dk2::CEngineVirtualPerspective2DAnimMesh::fun_578600, "CEngineVirtualPerspective2DAnimMesh::fun_578600" },  /* auto */
  { 0x00580460, (funptr_t) &dk2::CEngineWorldPrimitive::constructor, "CEngineWorldPrimitive::constructor" },  /* auto */
  { 0x00401060, (funptr_t) &dk2::CEntryComponent::constructor, "CEntryComponent::constructor" },  /* auto */
  { 0x004010F0, (funptr_t) &dk2::CEntryComponent::deleting_destructor, "CEntryComponent::deleting_destructor" },  /* auto */
  { 0x00401170, (funptr_t) &dk2::CEntryComponent::destructor, "CEntryComponent::destructor" },  /* auto */
  { 0x004011D0, (funptr_t) &dk2::CEntryComponent::fillStaticListeners, "CEntryComponent::fillStaticListeners" },  /* auto */
  { 0x00401210, (funptr_t) &dk2::CEntryComponent::init_console_commands, "CEntryComponent::init_console_commands" },  /* auto */
  { 0x004013E0, (funptr_t) &dk2::CEntryComponent::fun_4013E0, "CEntryComponent::fun_4013E0" },  /* auto */
  { 0x00401410, (funptr_t) &dk2::CEntryComponent::runUntilDestroy, "CEntryComponent::runUntilDestroy" },  /* auto */
  { 0x00556870, (funptr_t) &dk2::CFileManager::constructor, "CFileManager::constructor" },  /* auto */
  { 0x005568A0, (funptr_t) &dk2::CFileManager::scalar_destructor, "CFileManager::scalar_destructor" },  /* auto */
  { 0x005568C0, (funptr_t) &dk2::CFileManager::destructor, "CFileManager::destructor" },  /* auto */
  { 0x00556980, (funptr_t) &dk2::CFileManager::clearDirsList, "CFileManager::clearDirsList" },  /* auto */
  { 0x00556A20, (funptr_t) &dk2::CFileManager::sub_556A20, "CFileManager::sub_556A20" },  /* auto */
  { 0x00556B70, (funptr_t) &dk2::CFileManager::fun_556B70, "CFileManager::fun_556B70" },  /* auto */
  { 0x00556C90, (funptr_t) &dk2::CFileManager::addFileDir, "CFileManager::addFileDir" },  /* auto */
  { 0x00556D90, (funptr_t) &dk2::CFileManager::findFile, "CFileManager::findFile" },  /* auto */
  { 0x0052E500, (funptr_t) &dk2::CFrontEndComponent::constructor, "CFrontEndComponent::constructor" },  /* auto */
  { 0x0052EF50, (funptr_t) &dk2::CFrontEndComponent::deleting_destructor, "CFrontEndComponent::deleting_destructor" },  /* auto */
  { 0x0052EF70, (funptr_t) &dk2::CFrontEndComponent::destructor, "CFrontEndComponent::destructor" },  /* auto */
  { 0x0052EFE0, (funptr_t) &dk2::CFrontEndComponent::fillStaticListeners, "CFrontEndComponent::fillStaticListeners" },  /* auto */
  { 0x0052F140, (funptr_t) &dk2::CFrontEndComponent::launchGame, "CFrontEndComponent::launchGame" },  /* auto */
  { 0x0052F550, (funptr_t) &dk2::CFrontEndComponent::fun_52F550, "CFrontEndComponent::fun_52F550" },  /* auto */
  { 0x0052F9E0, (funptr_t) &dk2::CFrontEndComponent::maybe_update_textures, "CFrontEndComponent::maybe_update_textures" },  /* auto */
  { 0x0052FF00, (funptr_t) &dk2::CFrontEndComponent::draw2dGui, "CFrontEndComponent::draw2dGui" },  /* auto */
  { 0x00530180, (funptr_t) &dk2::CFrontEndComponent::renderInputField, "CFrontEndComponent::renderInputField" },  /* auto */
  { 0x00532090, (funptr_t) &dk2::CFrontEndComponent::fun_532090, "CFrontEndComponent::fun_532090" },  /* auto */
  { 0x00532170, (funptr_t) &dk2::CFrontEndComponent::findBtnBySomeId, "CFrontEndComponent::findBtnBySomeId" },  /* auto */
  { 0x005321A0, (funptr_t) &dk2::CFrontEndComponent::fun_5321A0, "CFrontEndComponent::fun_5321A0" },  /* auto */
  { 0x005322D0, (funptr_t) &dk2::CFrontEndComponent::getCurrentWindow, "CFrontEndComponent::getCurrentWindow" },  /* auto */
  { 0x00533460, (funptr_t) &dk2::CFrontEndComponent::fun_533460, "CFrontEndComponent::fun_533460" },  /* auto */
  { 0x005334C0, (funptr_t) &dk2::CFrontEndComponent::draw2dGui_0, "CFrontEndComponent::draw2dGui_0" },  /* auto */
  { 0x00533570, (funptr_t) &dk2::CFrontEndComponent::bakeButton, "CFrontEndComponent::bakeButton" },  /* auto */
  { 0x00533E90, (funptr_t) &dk2::CFrontEndComponent::sub_533E90, "CFrontEndComponent::sub_533E90" },  /* auto */
  { 0x005340F0, (funptr_t) &dk2::CFrontEndComponent::showTitleScreen, "CFrontEndComponent::showTitleScreen" },  /* auto */
  { 0x00534210, (funptr_t) &dk2::CFrontEndComponent::load, "CFrontEndComponent::load" },  /* auto */
  { 0x005352E0, (funptr_t) &dk2::CFrontEndComponent::fun_5352E0, "CFrontEndComponent::fun_5352E0" },  /* auto */
  { 0x00535950, (funptr_t) &dk2::CFrontEndComponent::sub_535950, "CFrontEndComponent::sub_535950" },  /* auto */
  { 0x00535A30, (funptr_t) &dk2::CFrontEndComponent::sub_535A30, "CFrontEndComponent::sub_535A30" },  /* auto */
  { 0x00535C30, (funptr_t) &dk2::CFrontEndComponent::fun_535C30, "CFrontEndComponent::fun_535C30" },  /* auto */
  { 0x00536370, (funptr_t) &dk2::CFrontEndComponent::sub_536370, "CFrontEndComponent::sub_536370" },  /* auto */
  { 0x00536850, (funptr_t) &dk2::CFrontEndComponent::sub_536850, "CFrontEndComponent::sub_536850" },  /* auto */
  { 0x00536BA0, (funptr_t) &dk2::CFrontEndComponent::fun_536BA0, "CFrontEndComponent::fun_536BA0" },  /* auto */
  { 0x00536E20, (funptr_t) &dk2::CFrontEndComponent::fun_536E20, "CFrontEndComponent::fun_536E20" },  /* auto */
  { 0x00537290, (funptr_t) &dk2::CFrontEndComponent::fun_537290, "CFrontEndComponent::fun_537290" },  /* auto */
  { 0x00537980, (funptr_t) &dk2::CFrontEndComponent::fun_537980, "CFrontEndComponent::fun_537980" },  /* auto */
  { 0x00539B80, (funptr_t) &dk2::CFrontEndComponent::fun_539B80, "CFrontEndComponent::fun_539B80" },  /* auto */
  { 0x00539CA0, (funptr_t) &dk2::CFrontEndComponent::fun_539CA0, "CFrontEndComponent::fun_539CA0" },  /* auto */
  { 0x00539E00, (funptr_t) &dk2::CFrontEndComponent::saveAddressBookWinsock, "CFrontEndComponent::saveAddressBookWinsock" },  /* auto */
  { 0x0053B980, (funptr_t) &dk2::CFrontEndComponent::do_smth_and_showOutro, "CFrontEndComponent::do_smth_and_showOutro" },  /* auto */
  { 0x0053BCD0, (funptr_t) &dk2::CFrontEndComponent::showMovie, "CFrontEndComponent::showMovie" },  /* auto */
  { 0x0053BFD0, (funptr_t) &dk2::CFrontEndComponent::showIntro, "CFrontEndComponent::showIntro" },  /* auto */
  { 0x0053C020, (funptr_t) &dk2::CFrontEndComponent::showBullfrogIntro, "CFrontEndComponent::showBullfrogIntro" },  /* auto */
  { 0x0053EF60, (funptr_t) &dk2::CFrontEndComponent::fun_53EF60, "CFrontEndComponent::fun_53EF60" },  /* auto */
  { 0x0053F7F0, (funptr_t) &dk2::CFrontEndComponent::fun_53F7F0, "CFrontEndComponent::fun_53F7F0" },  /* auto */
  { 0x00542570, (funptr_t) &dk2::CFrontEndComponent::sub_542570, "CFrontEndComponent::sub_542570" },  /* auto */
  { 0x00543F30, (funptr_t) &dk2::CFrontEndComponent::fun_543F30, "CFrontEndComponent::fun_543F30" },  /* auto */
  { 0x00545E40, (funptr_t) &dk2::CFrontEndComponent::fun_545E40, "CFrontEndComponent::fun_545E40" },  /* auto */
  { 0x00548610, (funptr_t) &dk2::CFrontEndComponent::fun_548610, "CFrontEndComponent::fun_548610" },  /* auto */
  { 0x00548940, (funptr_t) &dk2::CFrontEndComponent::fun_548940, "CFrontEndComponent::fun_548940" },  /* auto */
  { 0x00548DF0, (funptr_t) &dk2::CFrontEndComponent::fun_548DF0, "CFrontEndComponent::fun_548DF0" },  /* auto */
  { 0x00548E90, (funptr_t) &dk2::CFrontEndComponent::fun_548E90, "CFrontEndComponent::fun_548E90" },  /* auto */
  { 0x00548ED0, (funptr_t) &dk2::CFrontEndComponent::fun_548ED0, "CFrontEndComponent::fun_548ED0" },  /* auto */
  { 0x00548F10, (funptr_t) &dk2::CFrontEndComponent::fun_548F10, "CFrontEndComponent::fun_548F10" },  /* auto */
  { 0x00548F50, (funptr_t) &dk2::CFrontEndComponent::fun_548F50, "CFrontEndComponent::fun_548F50" },  /* auto */
  { 0x00548F90, (funptr_t) &dk2::CFrontEndComponent::fun_548F90, "CFrontEndComponent::fun_548F90" },  /* auto */
  { 0x00549D10, (funptr_t) &dk2::CFrontEndComponent::fun_549D10, "CFrontEndComponent::fun_549D10" },  /* auto */
  { 0x0054DB20, (funptr_t) &dk2::CFrontEndComponent::fun_54DB20, "CFrontEndComponent::fun_54DB20" },  /* auto */
  { 0x00552C70, (funptr_t) &dk2::CFrontEndComponent::fun_552C70, "CFrontEndComponent::fun_552C70" },  /* auto */
  { 0x0052B810, (funptr_t) &dk2::CGadget::constructor, "CGadget::constructor" },  /* auto */
  { 0x0052B840, (funptr_t) &dk2::CGadget::deleting_destructor, "CGadget::deleting_destructor" },  /* auto */
  { 0x005251A0, (funptr_t) &dk2::CGameComponent::constructor, "CGameComponent::constructor" },  /* auto */
  { 0x005252B0, (funptr_t) &dk2::CGameComponent::deleting_destructor, "CGameComponent::deleting_destructor" },  /* auto */
  { 0x005252D0, (funptr_t) &dk2::CGameComponent::destructor, "CGameComponent::destructor" },  /* auto */
  { 0x00525350, (funptr_t) &dk2::CGameComponent::setExit0, "CGameComponent::setExit0" },  /* auto */
  { 0x00525370, (funptr_t) &dk2::CGameComponent::mainGuiLoop, "CGameComponent::mainGuiLoop" },  /* auto */
  { 0x0052B870, (funptr_t) &dk2::CGuiManager::constructor, "CGuiManager::constructor" },  /* auto */
  { 0x0052B8C0, (funptr_t) &dk2::CGuiManager::deleting_destructor, "CGuiManager::deleting_destructor" },  /* auto */
  { 0x0052B8E0, (funptr_t) &dk2::CGuiManager::destructor, "CGuiManager::destructor" },  /* auto */
  { 0x0052B8F0, (funptr_t) &dk2::CGuiManager::createElements, "CGuiManager::createElements" },  /* auto */
  { 0x0052BBD0, (funptr_t) &dk2::CGuiManager::doDraw2dGui, "CGuiManager::doDraw2dGui" },  /* auto */
  { 0x0052BC50, (funptr_t) &dk2::CGuiManager::sub_52BC50, "CGuiManager::sub_52BC50" },  /* auto */
  { 0x0052BFC0, (funptr_t) &dk2::CGuiManager::probably_isCursorAtButton, "CGuiManager::probably_isCursorAtButton" },  /* auto */
  { 0x0052C0A0, (funptr_t) &dk2::CGuiManager::fun_52C0A0, "CGuiManager::fun_52C0A0" },  /* auto */
  { 0x0052C2F0, (funptr_t) &dk2::CGuiManager::onWmChar, "CGuiManager::onWmChar" },  /* auto */
  { 0x0052C4F0, (funptr_t) &dk2::CGuiManager::fun_52C4F0, "CGuiManager::fun_52C4F0" },  /* auto */
  { 0x0052C520, (funptr_t) &dk2::CGuiManager::sub_52C520, "CGuiManager::sub_52C520" },  /* auto */
  { 0x0052C540, (funptr_t) &dk2::CGuiManager::findGameWindowById, "CGuiManager::findGameWindowById" },  /* auto */
  { 0x0052C5A0, (funptr_t) &dk2::CGuiManager::scaleSize, "CGuiManager::scaleSize" },  /* auto */
  { 0x0052C5F0, (funptr_t) &dk2::CGuiManager::sub_52C5F0, "CGuiManager::sub_52C5F0" },  /* auto */
  { 0x0052C630, (funptr_t) &dk2::CGuiManager::scaleAabb, "CGuiManager::scaleAabb" },  /* auto */
  { 0x0052CCB0, (funptr_t) &dk2::CGuiManager::sub_52CCB0, "CGuiManager::sub_52CCB0" },  /* auto */
  { 0x00529BD0, (funptr_t) &dk2::CHoldButton::fun_529BD0, "CHoldButton::fun_529BD0" },  /* auto */
  { 0x005291F0, (funptr_t) &dk2::CHorizontalSlider::fun_5291F0, "CHorizontalSlider::fun_5291F0" },  /* auto */
  { 0x00529510, (funptr_t) &dk2::CHorizontalSlider::fun_529510, "CHorizontalSlider::fun_529510" },  /* auto */
  { 0x0057A080, (funptr_t) &dk2::CIFFFile::constructor, "CIFFFile::constructor" },  /* auto */
  { 0x0057A1E0, (funptr_t) &dk2::CIFFFile::push_locateMagic, "CIFFFile::push_locateMagic" },  /* auto */
  { 0x0057A310, (funptr_t) &dk2::CIFFFile::pop, "CIFFFile::pop" },  /* auto */
  { 0x0052AFB0, (funptr_t) &dk2::CListBox::fun_52AFB0, "CListBox::fun_52AFB0" },  /* auto */
  { 0x0052B160, (funptr_t) &dk2::CListBox::fun_52B160, "CListBox::fun_52B160" },  /* auto */
  { 0x0052B390, (funptr_t) &dk2::CListBox::add_CVerticalSlider, "CListBox::add_CVerticalSlider" },  /* auto */
  { 0x00522680, (funptr_t) &dk2::CLocalCommunication::constructor, "CLocalCommunication::constructor" },  /* auto */
  { 0x005226D0, (funptr_t) &dk2::CLocalCommunication::deleting_destructor, "CLocalCommunication::deleting_destructor" },  /* auto */
  { 0x005226F0, (funptr_t) &dk2::CLocalCommunication::destructor, "CLocalCommunication::destructor" },  /* auto */
  { 0x00522740, (funptr_t) &dk2::CLocalCommunication::fun_522740, "CLocalCommunication::fun_522740" },  /* auto */
  { 0x00522750, (funptr_t) &dk2::CLocalCommunication::pushAction, "CLocalCommunication::pushAction" },  /* auto */
  { 0x00522760, (funptr_t) &dk2::CLocalCommunication::fun_522760, "CLocalCommunication::fun_522760" },  /* auto */
  { 0x00522790, (funptr_t) &dk2::CLocalCommunication::collectGameActions, "CLocalCommunication::collectGameActions" },  /* auto */
  { 0x00404E10, (funptr_t) &dk2::CMap::fun_404E10, "CMap::fun_404E10" },  /* auto */
  { 0x0044E250, (funptr_t) &dk2::CMap::constructor, "CMap::constructor" },  /* auto */
  { 0x0044E290, (funptr_t) &dk2::CMap::destructor, "CMap::destructor" },  /* auto */
  { 0x0044E9E0, (funptr_t) &dk2::CMap::fun_44E9E0, "CMap::fun_44E9E0" },  /* auto */
  { 0x0044F280, (funptr_t) &dk2::CMap::clear, "CMap::clear" },  /* auto */
  { 0x0044F370, (funptr_t) &dk2::CMap::fun_44F370, "CMap::fun_44F370" },  /* auto */
  { 0x0044F3F0, (funptr_t) &dk2::CMap::saveToTbDiscFile, "CMap::saveToTbDiscFile" },  /* auto */
  { 0x0044F4B0, (funptr_t) &dk2::CMap::fun_44F4B0, "CMap::fun_44F4B0" },  /* auto */
  { 0x0044FC40, (funptr_t) &dk2::CMap::fun_44FC40, "CMap::fun_44FC40" },  /* auto */
  { 0x004508D0, (funptr_t) &dk2::CMap::fun_4508D0, "CMap::fun_4508D0" },  /* auto */
  { 0x004511A0, (funptr_t) &dk2::CMap::fun_4511A0, "CMap::fun_4511A0" },  /* auto */
  { 0x004512F0, (funptr_t) &dk2::CMap::fun_4512F0, "CMap::fun_4512F0" },  /* auto */
  { 0x00451570, (funptr_t) &dk2::CMap::fun_451570, "CMap::fun_451570" },  /* auto */
  { 0x00451820, (funptr_t) &dk2::CMap::calcChaecksum, "CMap::calcChaecksum" },  /* auto */
  { 0x00451870, (funptr_t) &dk2::CMap::dump, "CMap::dump" },  /* auto */
  { 0x004519F0, (funptr_t) &dk2::CMap::fun_4519F0, "CMap::fun_4519F0" },  /* auto */
  { 0x00451C90, (funptr_t) &dk2::CMap::fun_451C90, "CMap::fun_451C90" },  /* auto */
  { 0x00451E50, (funptr_t) &dk2::CMap::fun_451E50, "CMap::fun_451E50" },  /* auto */
  { 0x00452340, (funptr_t) &dk2::CMap::fun_452340, "CMap::fun_452340" },  /* auto */
  { 0x004528E0, (funptr_t) &dk2::CMap::fun_4528E0, "CMap::fun_4528E0" },  /* auto */
  { 0x004529A0, (funptr_t) &dk2::CMap::fun_4529A0, "CMap::fun_4529A0" },  /* auto */
  { 0x0057A150, (funptr_t) &dk2::CMemLoadIFFFile::sub_57A150, "CMemLoadIFFFile::sub_57A150" },  /* auto */
  { 0x0057A800, (funptr_t) &dk2::CMemLoadIFFFile::sub_57A800, "CMemLoadIFFFile::sub_57A800" },  /* auto */
  { 0x0057A960, (funptr_t) &dk2::CMemLoadIFFFile::read, "CMemLoadIFFFile::read" },  /* auto */
  { 0x0057D250, (funptr_t) &dk2::CMemLoadIFFFile::constructor, "CMemLoadIFFFile::constructor" },  /* auto */
  { 0x0057EAF0, (funptr_t) &dk2::CMeshGroup::constructor, "CMeshGroup::constructor" },  /* auto */
  { 0x0057EB70, (funptr_t) &dk2::CMeshGroup::deleting_destructor, "CMeshGroup::deleting_destructor" },  /* auto */
  { 0x0057EB90, (funptr_t) &dk2::CMeshGroup::resolveChildren, "CMeshGroup::resolveChildren" },  /* auto */
  { 0x0057EC90, (funptr_t) &dk2::CMeshGroup::destructor, "CMeshGroup::destructor" },  /* auto */
  { 0x0057E570, (funptr_t) &dk2::CMeshResourceBase::deleting_destructor, "CMeshResourceBase::deleting_destructor" },  /* auto */
  { 0x004B1DF0, (funptr_t) &dk2::CMovingThing::initWithType, "CMovingThing::initWithType" },  /* auto */
  { 0x004B1E60, (funptr_t) &dk2::CMovingThing::fun_4B4AB0, "CMovingThing::fun_4B4AB0" },  /* auto */
  { 0x004B1E70, (funptr_t) &dk2::CMovingThing::saveToTbDiscFile, "CMovingThing::saveToTbDiscFile" },  /* auto */
  { 0x004B1EC0, (funptr_t) &dk2::CMovingThing::fun_4B1EC0, "CMovingThing::fun_4B1EC0" },  /* auto */
  { 0x004B1F60, (funptr_t) &dk2::CMovingThing::fun_4B1F60, "CMovingThing::fun_4B1F60" },  /* auto */
  { 0x004B2030, (funptr_t) &dk2::CMovingThing::fun_4B2030, "CMovingThing::fun_4B2030" },  /* auto */
  { 0x004B2740, (funptr_t) &dk2::CMovingThing::fun_4B2740, "CMovingThing::fun_4B2740" },  /* auto */
  { 0x004B2760, (funptr_t) &dk2::CMovingThing::fun_4B2760, "CMovingThing::fun_4B2760" },  /* auto */
  { 0x004B27E0, (funptr_t) &dk2::CMovingThing::dump, "CMovingThing::dump" },  /* auto */
  { 0x004B5CE0, (funptr_t) &dk2::CMovingThing::destructor, "CMovingThing::destructor" },  /* auto */
  { 0x004B5D40, (funptr_t) &dk2::CMovingThing::fun_4B5D40, "CMovingThing::fun_4B5D40" },  /* auto */
  { 0x004B5D50, (funptr_t) &dk2::CMovingThing::fun_4B5D50, "CMovingThing::fun_4B5D50" },  /* auto */
  { 0x004B5F30, (funptr_t) &dk2::CMovingThing::fun_4B5F30, "CMovingThing::fun_4B5F30" },  /* auto */
  { 0x004B5F40, (funptr_t) &dk2::CMovingThing::fun_4B5F40, "CMovingThing::fun_4B5F40" },  /* auto */
  { 0x004B5F50, (funptr_t) &dk2::CMovingThing::deleting_destructor, "CMovingThing::deleting_destructor" },  /* auto */
  { 0x00527470, (funptr_t) &dk2::CNetworkComponent::constructor, "CNetworkComponent::constructor" },  /* auto */
  { 0x005274C0, (funptr_t) &dk2::CNetworkComponent::fun_5274C0, "CNetworkComponent::fun_5274C0" },  /* auto */
  { 0x005274E0, (funptr_t) &dk2::CNetworkComponent::destructor, "CNetworkComponent::destructor" },  /* auto */
  { 0x00527530, (funptr_t) &dk2::CNetworkComponent::fillStaticListeners, "CNetworkComponent::fillStaticListeners" },  /* auto */
  { 0x00527560, (funptr_t) &dk2::CNetworkComponent::fun_527560, "CNetworkComponent::fun_527560" },  /* auto */
  { 0x00527750, (funptr_t) &dk2::CNetworkComponent::fun_527750, "CNetworkComponent::fun_527750" },  /* auto */
  { 0x00527790, (funptr_t) &dk2::CNetworkComponent::fun_527790, "CNetworkComponent::fun_527790" },  /* auto */
  { 0x0049B1C0, (funptr_t) &dk2::CObject::init, "CObject::init" },  /* auto */
  { 0x0049B5E0, (funptr_t) &dk2::CObject::fun_49B5E0, "CObject::fun_49B5E0" },  /* auto */
  { 0x0049B9F0, (funptr_t) &dk2::CObject::fun_49B9F0, "CObject::fun_49B9F0" },  /* auto */
  { 0x0049BAE0, (funptr_t) &dk2::CObject::fun_49BAE0, "CObject::fun_49BAE0" },  /* auto */
  { 0x0049BBE0, (funptr_t) &dk2::CObject::fun_49BBE0, "CObject::fun_49BBE0" },  /* auto */
  { 0x0049BC00, (funptr_t) &dk2::CObject::fun_49BC00, "CObject::fun_49BC00" },  /* auto */
  { 0x0049BD20, (funptr_t) &dk2::CObject::fun_49BD20, "CObject::fun_49BD20" },  /* auto */
  { 0x0049BEC0, (funptr_t) &dk2::CObject::fun_49BEC0, "CObject::fun_49BEC0" },  /* auto */
  { 0x0049C250, (funptr_t) &dk2::CObject::fun_49C250, "CObject::fun_49C250" },  /* auto */
  { 0x0049C290, (funptr_t) &dk2::CObject::fun_49C290, "CObject::fun_49C290" },  /* auto */
  { 0x0049C760, (funptr_t) &dk2::CObject::fun_49C760, "CObject::fun_49C760" },  /* auto */
  { 0x0049C800, (funptr_t) &dk2::CObject::fun_49C800, "CObject::fun_49C800" },  /* auto */
  { 0x0049C850, (funptr_t) &dk2::CObject::fun_49C850, "CObject::fun_49C850" },  /* auto */
  { 0x0049C8C0, (funptr_t) &dk2::CObject::fun_49C8C0, "CObject::fun_49C8C0" },  /* auto */
  { 0x0049CC20, (funptr_t) &dk2::CObject::fun_49CC20, "CObject::fun_49CC20" },  /* auto */
  { 0x0049CD00, (funptr_t) &dk2::CObject::fun_49CD00, "CObject::fun_49CD00" },  /* auto */
  { 0x0049CD70, (funptr_t) &dk2::CObject::fun_49CD70, "CObject::fun_49CD70" },  /* auto */
  { 0x0049CE30, (funptr_t) &dk2::CObject::fun_49CE30, "CObject::fun_49CE30" },  /* auto */
  { 0x0049CE50, (funptr_t) &dk2::CObject::fun_49CE50, "CObject::fun_49CE50" },  /* auto */
  { 0x0049D130, (funptr_t) &dk2::CObject::fun_49D130, "CObject::fun_49D130" },  /* auto */
  { 0x0049D300, (funptr_t) &dk2::CObject::fun_49D300, "CObject::fun_49D300" },  /* auto */
  { 0x0049D310, (funptr_t) &dk2::CObject::dump, "CObject::dump" },  /* auto */
  { 0x0049EF60, (funptr_t) &dk2::CObject::fun_49EF60, "CObject::fun_49EF60" },  /* auto */
  { 0x0049EF80, (funptr_t) &dk2::CObject::getStateId, "CObject::getStateId" },  /* auto */
  { 0x004B7190, (funptr_t) &dk2::CObject::constructor, "CObject::constructor" },  /* auto */
  { 0x004B7230, (funptr_t) &dk2::CObject::fun_4B7230, "CObject::fun_4B7230" },  /* auto */
  { 0x004B7250, (funptr_t) &dk2::CObject::fun_4B7250, "CObject::fun_4B7250" },  /* auto */
  { 0x004B7260, (funptr_t) &dk2::CObject::fun_4B7260, "CObject::fun_4B7260" },  /* auto */
  { 0x004B7270, (funptr_t) &dk2::CObject::fun_4B7270, "CObject::fun_4B7270" },  /* auto */
  { 0x004B7280, (funptr_t) &dk2::CObject::fun_4B7280, "CObject::fun_4B7280" },  /* auto */
  { 0x004B7290, (funptr_t) &dk2::CObject::deleting_destructor, "CObject::deleting_destructor" },  /* auto */
  { 0x004B72B0, (funptr_t) &dk2::CObject::destructor, "CObject::destructor" },  /* auto */
  { 0x005982A0, (funptr_t) &dk2::CPCEngineInterface::constructor, "CPCEngineInterface::constructor" },  /* auto */
  { 0x00598350, (funptr_t) &dk2::CPCEngineInterface::fun_598350, "CPCEngineInterface::fun_598350" },  /* auto */
  { 0x00598370, (funptr_t) &dk2::CPCEngineInterface::destructor, "CPCEngineInterface::destructor" },  /* auto */
  { 0x005983C0, (funptr_t) &dk2::CPCEngineInterface::fun_5983C0, "CPCEngineInterface::fun_5983C0" },  /* auto */
  { 0x00598690, (funptr_t) &dk2::CPCEngineInterface::fun_598690, "CPCEngineInterface::fun_598690" },  /* auto */
  { 0x005986F0, (funptr_t) &dk2::CPCEngineInterface::fun_5986F0, "CPCEngineInterface::fun_5986F0" },  /* auto */
  { 0x00598880, (funptr_t) &dk2::CPCEngineInterface::maybe_cameraFun, "CPCEngineInterface::maybe_cameraFun" },  /* auto */
  { 0x005992B0, (funptr_t) &dk2::CPCEngineInterface::fun_5992B0, "CPCEngineInterface::fun_5992B0" },  /* auto */
  { 0x00599910, (funptr_t) &dk2::CPCEngineInterface::fun_599910, "CPCEngineInterface::fun_599910" },  /* auto */
  { 0x00599960, (funptr_t) &dk2::CPCEngineInterface::fun_599960, "CPCEngineInterface::fun_599960" },  /* auto */
  { 0x00599C10, (funptr_t) &dk2::CPCEngineInterface::fun_599C10, "CPCEngineInterface::fun_599C10" },  /* auto */
  { 0x00599C60, (funptr_t) &dk2::CPCEngineInterface::fun_599C60, "CPCEngineInterface::fun_599C60" },  /* auto */
  { 0x0059A050, (funptr_t) &dk2::CPCEngineInterface::fun_59A050, "CPCEngineInterface::fun_59A050" },  /* auto */
  { 0x0059A200, (funptr_t) &dk2::CPCEngineInterface::fun_59A200, "CPCEngineInterface::fun_59A200" },  /* auto */
  { 0x0059A650, (funptr_t) &dk2::CPCEngineInterface::createMyScaledSurface, "CPCEngineInterface::createMyScaledSurface" },  /* auto */
  { 0x0059A6A0, (funptr_t) &dk2::CPCEngineInterface::allocateRenderObj, "CPCEngineInterface::allocateRenderObj" },  /* auto */
  { 0x0059AE10, (funptr_t) &dk2::CPCEngineInterface::sub_59AE10, "CPCEngineInterface::sub_59AE10" },  /* auto */
  { 0x0059B0C0, (funptr_t) &dk2::CPCEngineInterface::fun_59B0C0, "CPCEngineInterface::fun_59B0C0" },  /* auto */
  { 0x0059C0D0, (funptr_t) &dk2::CPCEngineInterface::setAabb, "CPCEngineInterface::setAabb" },  /* auto */
  { 0x0059C110, (funptr_t) &dk2::CPCEngineInterface::fun_59C110, "CPCEngineInterface::fun_59C110" },  /* auto */
  { 0x0059C120, (funptr_t) &dk2::CPCEngineInterface::fun_59C120, "CPCEngineInterface::fun_59C120" },  /* auto */
  { 0x0059C130, (funptr_t) &dk2::CPCEngineInterface::fun_59C130, "CPCEngineInterface::fun_59C130" },  /* auto */
  { 0x0059C140, (funptr_t) &dk2::CPCEngineInterface::fun_59C140, "CPCEngineInterface::fun_59C140" },  /* auto */
  { 0x0059C1D0, (funptr_t) &dk2::CPCEngineInterface::fun_59C1D0, "CPCEngineInterface::fun_59C1D0" },  /* auto */
  { 0x0059D380, (funptr_t) &dk2::CPCEngineInterface::fun_59D380, "CPCEngineInterface::fun_59D380" },  /* auto */
  { 0x0059D420, (funptr_t) &dk2::CPCEngineInterface::fun_59D420, "CPCEngineInterface::fun_59D420" },  /* auto */
  { 0x0059D580, (funptr_t) &dk2::CPCEngineInterface::fun_59D580, "CPCEngineInterface::fun_59D580" },  /* auto */
  { 0x0059D5B0, (funptr_t) &dk2::CPCEngineInterface::setStr, "CPCEngineInterface::setStr" },  /* auto */
  { 0x0059D5E0, (funptr_t) &dk2::CPCEngineInterface::fun_59D5E0, "CPCEngineInterface::fun_59D5E0" },  /* auto */
  { 0x0059D760, (funptr_t) &dk2::CPCEngineInterface::fun_59D760, "CPCEngineInterface::fun_59D760" },  /* auto */
  { 0x0059D7F0, (funptr_t) &dk2::CPCEngineInterface::drawScene, "CPCEngineInterface::drawScene" },  /* auto */
  { 0x0059D860, (funptr_t) &dk2::CPCEngineInterface::enableSmth, "CPCEngineInterface::enableSmth" },  /* auto */
  { 0x0059D890, (funptr_t) &dk2::CPCEngineInterface::fun_59D890, "CPCEngineInterface::fun_59D890" },  /* auto */
  { 0x0059D900, (funptr_t) &dk2::CPCEngineInterface::init3d, "CPCEngineInterface::init3d" },  /* auto */
  { 0x0059DAB0, (funptr_t) &dk2::CPCEngineInterface::fun_59DAB0, "CPCEngineInterface::fun_59DAB0" },  /* auto */
  { 0x005A1CA0, (funptr_t) &dk2::CPCEngineInterface::fun_5A1CA0, "CPCEngineInterface::fun_5A1CA0" },  /* auto */
  { 0x005A2570, (funptr_t) &dk2::CPCEngineInterface::fun_5A2570, "CPCEngineInterface::fun_5A2570" },  /* auto */
  { 0x005A2BE0, (funptr_t) &dk2::CPCEngineInterface::fun_5A2BE0, "CPCEngineInterface::fun_5A2BE0" },  /* auto */
  { 0x005A2F10, (funptr_t) &dk2::CPCEngineInterface::fun_5A2F10, "CPCEngineInterface::fun_5A2F10" },  /* auto */
  { 0x004B28D0, (funptr_t) &dk2::CPhysicalThing::initWithType, "CPhysicalThing::initWithType" },  /* auto */
  { 0x004B2910, (funptr_t) &dk2::CPhysicalThing::fun_4B4AB0, "CPhysicalThing::fun_4B4AB0" },  /* auto */
  { 0x004B2920, (funptr_t) &dk2::CPhysicalThing::saveToTbDiscFile, "CPhysicalThing::saveToTbDiscFile" },  /* auto */
  { 0x004B29F0, (funptr_t) &dk2::CPhysicalThing::fun_4B29F0, "CPhysicalThing::fun_4B29F0" },  /* auto */
  { 0x004B2AD0, (funptr_t) &dk2::CPhysicalThing::fun_4B2AD0, "CPhysicalThing::fun_4B2AD0" },  /* auto */
  { 0x004B34F0, (funptr_t) &dk2::CPhysicalThing::fun_4B34F0, "CPhysicalThing::fun_4B34F0" },  /* auto */
  { 0x004B3520, (funptr_t) &dk2::CPhysicalThing::fun_4B3520, "CPhysicalThing::fun_4B3520" },  /* auto */
  { 0x004B3560, (funptr_t) &dk2::CPhysicalThing::dump, "CPhysicalThing::dump" },  /* auto */
  { 0x004B5C30, (funptr_t) &dk2::CPhysicalThing::fun_4B5C30, "CPhysicalThing::fun_4B5C30" },  /* auto */
  { 0x004B5C40, (funptr_t) &dk2::CPhysicalThing::fun_4B5C40, "CPhysicalThing::fun_4B5C40" },  /* auto */
  { 0x004B5C50, (funptr_t) &dk2::CPhysicalThing::fun_4B5C50, "CPhysicalThing::fun_4B5C50" },  /* auto */
  { 0x004B5C60, (funptr_t) &dk2::CPhysicalThing::deleting_destructor, "CPhysicalThing::deleting_destructor" },  /* auto */
  { 0x004B5C80, (funptr_t) &dk2::CPhysicalThing::destructor, "CPhysicalThing::destructor" },  /* auto */
  { 0x004B8450, (funptr_t) &dk2::CPlayer::constructor, "CPlayer::constructor" },  /* auto */
  { 0x004B85A0, (funptr_t) &dk2::CPlayer::destructor, "CPlayer::destructor" },  /* auto */
  { 0x004B8640, (funptr_t) &dk2::CPlayer::init, "CPlayer::init" },  /* auto */
  { 0x004B8C30, (funptr_t) &dk2::CPlayer::release, "CPlayer::release" },  /* auto */
  { 0x004B8D40, (funptr_t) &dk2::CPlayer::fun_4B8D40, "CPlayer::fun_4B8D40" },  /* auto */
  { 0x004B9250, (funptr_t) &dk2::CPlayer::fun_4B9250, "CPlayer::fun_4B9250" },  /* auto */
  { 0x004B9720, (funptr_t) &dk2::CPlayer::fun_4B9720, "CPlayer::fun_4B9720" },  /* auto */
  { 0x004B9740, (funptr_t) &dk2::CPlayer::fun_4B9740, "CPlayer::fun_4B9740" },  /* auto */
  { 0x004B9EC0, (funptr_t) &dk2::CPlayer::tick, "CPlayer::tick" },  /* auto */
  { 0x004BA0D0, (funptr_t) &dk2::CPlayer::fun_4BA0D0, "CPlayer::fun_4BA0D0" },  /* auto */
  { 0x004BA420, (funptr_t) &dk2::CPlayer::fun_4BA420, "CPlayer::fun_4BA420" },  /* auto */
  { 0x004BA7D0, (funptr_t) &dk2::CPlayer::fun_4BA7D0, "CPlayer::fun_4BA7D0" },  /* auto */
  { 0x004BA850, (funptr_t) &dk2::CPlayer::fun_4BA850, "CPlayer::fun_4BA850" },  /* auto */
  { 0x004BA890, (funptr_t) &dk2::CPlayer::fun_4BA890, "CPlayer::fun_4BA890" },  /* auto */
  { 0x004BA8D0, (funptr_t) &dk2::CPlayer::setName, "CPlayer::setName" },  /* auto */
  { 0x004BA900, (funptr_t) &dk2::CPlayer::fun_4BA900, "CPlayer::fun_4BA900" },  /* auto */
  { 0x004BA980, (funptr_t) &dk2::CPlayer::fun_4BA980, "CPlayer::fun_4BA980" },  /* auto */
  { 0x004BAB20, (funptr_t) &dk2::CPlayer::fun_4BAB20, "CPlayer::fun_4BAB20" },  /* auto */
  { 0x004BACD0, (funptr_t) &dk2::CPlayer::fun_4BACD0, "CPlayer::fun_4BACD0" },  /* auto */
  { 0x004BAE30, (funptr_t) &dk2::CPlayer::fun_4BAE30, "CPlayer::fun_4BAE30" },  /* auto */
  { 0x004BAFA0, (funptr_t) &dk2::CPlayer::fun_4BAFA0, "CPlayer::fun_4BAFA0" },  /* auto */
  { 0x004BB0D0, (funptr_t) &dk2::CPlayer::fun_4BB0D0, "CPlayer::fun_4BB0D0" },  /* auto */
  { 0x004BB2A0, (funptr_t) &dk2::CPlayer::fun_4BB2A0, "CPlayer::fun_4BB2A0" },  /* auto */
  { 0x004BB6D0, (funptr_t) &dk2::CPlayer::fun_4BB6D0, "CPlayer::fun_4BB6D0" },  /* auto */
  { 0x004BBD30, (funptr_t) &dk2::CPlayer::fun_4BBD30, "CPlayer::fun_4BBD30" },  /* auto */
  { 0x004BC500, (funptr_t) &dk2::CPlayer::fun_4BC500, "CPlayer::fun_4BC500" },  /* auto */
  { 0x004BC710, (funptr_t) &dk2::CPlayer::fun_4BC710, "CPlayer::fun_4BC710" },  /* auto */
  { 0x004BCAB0, (funptr_t) &dk2::CPlayer::fun_4BCAB0, "CPlayer::fun_4BCAB0" },  /* auto */
  { 0x004BCAE0, (funptr_t) &dk2::CPlayer::fun_4BCAE0, "CPlayer::fun_4BCAE0" },  /* auto */
  { 0x004BCB20, (funptr_t) &dk2::CPlayer::fun_4BCB20, "CPlayer::fun_4BCB20" },  /* auto */
  { 0x004BCB60, (funptr_t) &dk2::CPlayer::calcChecksum, "CPlayer::calcChecksum" },  /* auto */
  { 0x004BCF10, (funptr_t) &dk2::CPlayer::dump, "CPlayer::dump" },  /* auto */
  { 0x004BE090, (funptr_t) &dk2::CPlayer::fun_4BE090, "CPlayer::fun_4BE090" },  /* auto */
  { 0x004BE180, (funptr_t) &dk2::CPlayer::fun_4BE180, "CPlayer::fun_4BE180" },  /* auto */
  { 0x004BF390, (funptr_t) &dk2::CPlayer::fun_4BF390, "CPlayer::fun_4BF390" },  /* auto */
  { 0x004BF3D0, (funptr_t) &dk2::CPlayer::fun_4BF3D0, "CPlayer::fun_4BF3D0" },  /* auto */
  { 0x004BFBD0, (funptr_t) &dk2::CPlayer::fun_4BFBD0, "CPlayer::fun_4BFBD0" },  /* auto */
  { 0x004BFD00, (funptr_t) &dk2::CPlayer::fun_4BFD00, "CPlayer::fun_4BFD00" },  /* auto */
  { 0x004BFFD0, (funptr_t) &dk2::CPlayer::fun_4BFFD0, "CPlayer::fun_4BFFD0" },  /* auto */
  { 0x004C0010, (funptr_t) &dk2::CPlayer::decrementFreeRangeChickenCount, "CPlayer::decrementFreeRangeChickenCount" },  /* auto */
  { 0x004C0060, (funptr_t) &dk2::CPlayer::fun_4C0060, "CPlayer::fun_4C0060" },  /* auto */
  { 0x004C04A0, (funptr_t) &dk2::CPlayer::fun_4C04A0, "CPlayer::fun_4C04A0" },  /* auto */
  { 0x004C0AA0, (funptr_t) &dk2::CPlayer::fun_4C0AA0, "CPlayer::fun_4C0AA0" },  /* auto */
  { 0x004C0BB0, (funptr_t) &dk2::CPlayer::fun_4C0BB0, "CPlayer::fun_4C0BB0" },  /* auto */
  { 0x004C10E0, (funptr_t) &dk2::CPlayer::fun_4C10E0, "CPlayer::fun_4C10E0" },  /* auto */
  { 0x004C1740, (funptr_t) &dk2::CPlayer::fun_4C1740, "CPlayer::fun_4C1740" },  /* auto */
  { 0x004C1770, (funptr_t) &dk2::CPlayer::fun_4C1770, "CPlayer::fun_4C1770" },  /* auto */
  { 0x004C1AE0, (funptr_t) &dk2::CPlayer::fun_4C1AE0, "CPlayer::fun_4C1AE0" },  /* auto */
  { 0x004C1FB0, (funptr_t) &dk2::CPlayer::scalar_destructor, "CPlayer::scalar_destructor" },  /* auto */
  { 0x004C30F0, (funptr_t) &dk2::CPlayer::fun_4C30F0, "CPlayer::fun_4C30F0" },  /* auto */
  { 0x004C3340, (funptr_t) &dk2::CPlayer::fun_4C3340, "CPlayer::fun_4C3340" },  /* auto */
  { 0x004C5780, (funptr_t) &dk2::CPlayer::fun_4C5780, "CPlayer::fun_4C5780" },  /* auto */
  { 0x004C57F0, (funptr_t) &dk2::CPlayer::fun_4C57F0, "CPlayer::fun_4C57F0" },  /* auto */
  { 0x004C5A20, (funptr_t) &dk2::CPlayer::fun_4C5A20, "CPlayer::fun_4C5A20" },  /* auto */
  { 0x004C5B40, (funptr_t) &dk2::CPlayer::fun_4C5B40, "CPlayer::fun_4C5B40" },  /* auto */
  { 0x004C5C30, (funptr_t) &dk2::CPlayer::fun_4C5C30, "CPlayer::fun_4C5C30" },  /* auto */
  { 0x004C5DB0, (funptr_t) &dk2::CPlayer::fun_4C5DB0, "CPlayer::fun_4C5DB0" },  /* auto */
  { 0x004C5F50, (funptr_t) &dk2::CPlayer::fun_4C5F50, "CPlayer::fun_4C5F50" },  /* auto */
  { 0x004C5FD0, (funptr_t) &dk2::CPlayer::fun_4C5FD0, "CPlayer::fun_4C5FD0" },  /* auto */
  { 0x004C61C0, (funptr_t) &dk2::CPlayer::fun_4C61C0, "CPlayer::fun_4C61C0" },  /* auto */
  { 0x004C63D0, (funptr_t) &dk2::CPlayer::fun_4C63D0, "CPlayer::fun_4C63D0" },  /* auto */
  { 0x004C6460, (funptr_t) &dk2::CPlayer::fun_4C6460, "CPlayer::fun_4C6460" },  /* auto */
  { 0x004C6A00, (funptr_t) &dk2::CPlayer::fun_4C6A00, "CPlayer::fun_4C6A00" },  /* auto */
  { 0x004C6E70, (funptr_t) &dk2::CPlayer::fun_4C6E70, "CPlayer::fun_4C6E70" },  /* auto */
  { 0x004C6EB0, (funptr_t) &dk2::CPlayer::fun_4C6EB0, "CPlayer::fun_4C6EB0" },  /* auto */
  { 0x004C7150, (funptr_t) &dk2::CPlayer::fun_4C7150, "CPlayer::fun_4C7150" },  /* auto */
  { 0x004C7160, (funptr_t) &dk2::CPlayer::fun_4C7160, "CPlayer::fun_4C7160" },  /* auto */
  { 0x004C7330, (funptr_t) &dk2::CPlayer::fun_4C7330, "CPlayer::fun_4C7330" },  /* auto */
  { 0x004C7340, (funptr_t) &dk2::CPlayer::fun_4C7340, "CPlayer::fun_4C7340" },  /* auto */
  { 0x004C7360, (funptr_t) &dk2::CPlayer::fun_4C7360, "CPlayer::fun_4C7360" },  /* auto */
  { 0x004C7380, (funptr_t) &dk2::CPlayer::fun_4C7380, "CPlayer::fun_4C7380" },  /* auto */
  { 0x004C79A0, (funptr_t) &dk2::CPlayer::fun_4C79A0, "CPlayer::fun_4C79A0" },  /* auto */
  { 0x004C7A50, (funptr_t) &dk2::CPlayer::fun_4C7A50, "CPlayer::fun_4C7A50" },  /* auto */
  { 0x004C7B20, (funptr_t) &dk2::CPlayer::fun_4C7B20, "CPlayer::fun_4C7B20" },  /* auto */
  { 0x004C8620, (funptr_t) &dk2::CPlayer::fun_4C8620, "CPlayer::fun_4C8620" },  /* auto */
  { 0x004D8510, (funptr_t) &dk2::CPlayer::fun_4D8510, "CPlayer::fun_4D8510" },  /* auto */
  { 0x004D8870, (funptr_t) &dk2::CPlayer::fun_4D8870, "CPlayer::fun_4D8870" },  /* auto */
  { 0x004DA200, (funptr_t) &dk2::CPlayer::fun_4DA200, "CPlayer::fun_4DA200" },  /* auto */
  { 0x004DAA10, (funptr_t) &dk2::CPlayer::fun_4DAA10, "CPlayer::fun_4DAA10" },  /* auto */
  { 0x004DC760, (funptr_t) &dk2::CPlayer::fun_4DC760, "CPlayer::fun_4DC760" },  /* auto */
  { 0x004DCCE0, (funptr_t) &dk2::CPlayer::fun_4DCCE0, "CPlayer::fun_4DCCE0" },  /* auto */
  { 0x004DE610, (funptr_t) &dk2::CPlayer::setFreeRangeChickenCount, "CPlayer::setFreeRangeChickenCount" },  /* auto */
  { 0x004DED00, (funptr_t) &dk2::CPlayer::fun_4DED00, "CPlayer::fun_4DED00" },  /* auto */
  { 0x004E0470, (funptr_t) &dk2::CPlayer::fun_4E0470, "CPlayer::fun_4E0470" },  /* auto */
  { 0x004E2500, (funptr_t) &dk2::CPlayer::fun_4E2500, "CPlayer::fun_4E2500" },  /* auto */
  { 0x004F1A20, (funptr_t) &dk2::CPlayer::fun_4F1A20, "CPlayer::fun_4F1A20" },  /* auto */
  { 0x004F29A0, (funptr_t) &dk2::CPlayer::fun_4F29A0, "CPlayer::fun_4F29A0" },  /* auto */
  { 0x004F2B80, (funptr_t) &dk2::CPlayer::fun_4F2B80, "CPlayer::fun_4F2B80" },  /* auto */
  { 0x004F6200, (funptr_t) &dk2::CPlayer::fun_4F6200, "CPlayer::fun_4F6200" },  /* auto */
  { 0x0057AFC0, (funptr_t) &dk2::CPolyMeshResource::getGeomBase, "CPolyMeshResource::getGeomBase" },  /* auto */
  { 0x0057AFD0, (funptr_t) &dk2::CPolyMeshResource::getMeshHeader, "CPolyMeshResource::getMeshHeader" },  /* auto */
  { 0x0057E7F0, (funptr_t) &dk2::CPolyMeshResource::destructor, "CPolyMeshResource::destructor" },  /* auto */
  { 0x0057E840, (funptr_t) &dk2::CPolyMeshResource::deleting_destructor, "CPolyMeshResource::deleting_destructor" },  /* auto */
  { 0x0057E860, (funptr_t) &dk2::CPolyMeshResource::constructor, "CPolyMeshResource::constructor" },  /* auto */
  { 0x0057EAA0, (funptr_t) &dk2::CPolyMeshResource::resolveTextures, "CPolyMeshResource::resolveTextures" },  /* auto */
  { 0x005286E0, (funptr_t) &dk2::CRadioButton::fun_5286E0, "CRadioButton::fun_5286E0" },  /* auto */
  { 0x005287E0, (funptr_t) &dk2::CRadioButton::fun_5287E0, "CRadioButton::fun_5287E0" },  /* auto */
  { 0x00487BE0, (funptr_t) &dk2::CRenderInfo::fun_487BE0, "CRenderInfo::fun_487BE0" },  /* auto */
  { 0x004B3610, (funptr_t) &dk2::CRenderInfo::constructor, "CRenderInfo::constructor" },  /* auto */
  { 0x004B3740, (funptr_t) &dk2::CRenderInfo::destructor, "CRenderInfo::destructor" },  /* auto */
  { 0x004B3750, (funptr_t) &dk2::CRenderInfo::saveToTbDiscFile, "CRenderInfo::saveToTbDiscFile" },  /* auto */
  { 0x004B3790, (funptr_t) &dk2::CRenderInfo::fun_4B3790, "CRenderInfo::fun_4B3790" },  /* auto */
  { 0x004B37D0, (funptr_t) &dk2::CRenderInfo::fun_4B37D0, "CRenderInfo::fun_4B37D0" },  /* auto */
  { 0x004B3AD0, (funptr_t) &dk2::CRenderInfo::fun_4B3AD0, "CRenderInfo::fun_4B3AD0" },  /* auto */
  { 0x004B3B40, (funptr_t) &dk2::CRenderInfo::fun_4B3B40, "CRenderInfo::fun_4B3B40" },  /* auto */
  { 0x004B3C10, (funptr_t) &dk2::CRenderInfo::fun_4B3C10, "CRenderInfo::fun_4B3C10" },  /* auto */
  { 0x004B4120, (funptr_t) &dk2::CRenderInfo::clear, "CRenderInfo::clear" },  /* auto */
  { 0x004B45B0, (funptr_t) &dk2::CRenderInfo::fun_4B45B0, "CRenderInfo::fun_4B45B0" },  /* auto */
  { 0x004B4610, (funptr_t) &dk2::CRenderInfo::fun_4B4610, "CRenderInfo::fun_4B4610" },  /* auto */
  { 0x004B4710, (funptr_t) &dk2::CRenderInfo::fun_4B4710, "CRenderInfo::fun_4B4710" },  /* auto */
  { 0x004B47C0, (funptr_t) &dk2::CRenderInfo::dump, "CRenderInfo::dump" },  /* auto */
  { 0x004B49D0, (funptr_t) &dk2::CRenderInfo::fun_4B49D0, "CRenderInfo::fun_4B49D0" },  /* auto */
  { 0x004B49F0, (funptr_t) &dk2::CRenderInfo::fun_4B49F0, "CRenderInfo::fun_4B49F0" },  /* auto */
  { 0x00506D30, (funptr_t) &dk2::CResearchOrder::constructor, "CResearchOrder::constructor" },  /* auto */
  { 0x00506D50, (funptr_t) &dk2::CResearchOrder::destructor, "CResearchOrder::destructor" },  /* auto */
  { 0x00506D60, (funptr_t) &dk2::CResearchOrder::fun_506D60, "CResearchOrder::fun_506D60" },  /* auto */
  { 0x00506DE0, (funptr_t) &dk2::CResearchOrder::clear, "CResearchOrder::clear" },  /* auto */
  { 0x00506E10, (funptr_t) &dk2::CResearchOrder::fun_506E10, "CResearchOrder::fun_506E10" },  /* auto */
  { 0x00506EC0, (funptr_t) &dk2::CResearchOrder::fun_506EC0, "CResearchOrder::fun_506EC0" },  /* auto */
  { 0x00506FC0, (funptr_t) &dk2::CResearchOrder::fun_506FC0, "CResearchOrder::fun_506FC0" },  /* auto */
  { 0x005070F0, (funptr_t) &dk2::CResearchOrder::dump, "CResearchOrder::dump" },  /* auto */
  { 0x004DA1B0, (funptr_t) &dk2::CRoom::fun_4DA1B0, "CRoom::fun_4DA1B0" },  /* auto */
  { 0x004DB700, (funptr_t) &dk2::CRoom::fun_4DB700, "CRoom::fun_4DB700" },  /* auto */
  { 0x004E0110, (funptr_t) &dk2::CRoom::fun_4E0110, "CRoom::fun_4E0110" },  /* auto */
  { 0x004E3790, (funptr_t) &dk2::CRoom::constructor, "CRoom::constructor" },  /* auto */
  { 0x004E37F0, (funptr_t) &dk2::CRoom::destructor, "CRoom::destructor" },  /* auto */
  { 0x004E3B10, (funptr_t) &dk2::CRoom::fun_4E3B10, "CRoom::fun_4E3B10" },  /* auto */
  { 0x004E3ED0, (funptr_t) &dk2::CRoom::fun_4E3ED0, "CRoom::fun_4E3ED0" },  /* auto */
  { 0x004E4300, (funptr_t) &dk2::CRoom::fun_4E4300, "CRoom::fun_4E4300" },  /* auto */
  { 0x004E52F0, (funptr_t) &dk2::CRoom::getPlayer, "CRoom::getPlayer" },  /* auto */
  { 0x004E5FF0, (funptr_t) &dk2::CRoom::fun_4E5FF0, "CRoom::fun_4E5FF0" },  /* auto */
  { 0x004E6130, (funptr_t) &dk2::CRoom::fun_4E6130, "CRoom::fun_4E6130" },  /* auto */
  { 0x004E6220, (funptr_t) &dk2::CRoom::fun_4E6220, "CRoom::fun_4E6220" },  /* auto */
  { 0x004E62D0, (funptr_t) &dk2::CRoom::fun_4E62D0, "CRoom::fun_4E62D0" },  /* auto */
  { 0x004E6BC0, (funptr_t) &dk2::CRoom::rmoveObject, "CRoom::rmoveObject" },  /* auto */
  { 0x004E6F00, (funptr_t) &dk2::CRoom::fun_4E6F00, "CRoom::fun_4E6F00" },  /* auto */
  { 0x004E70A0, (funptr_t) &dk2::CRoom::dump, "CRoom::dump" },  /* auto */
  { 0x004E9130, (funptr_t) &dk2::CRoom::fun_4E9130, "CRoom::fun_4E9130" },  /* auto */
  { 0x004E9250, (funptr_t) &dk2::CRoom::fun_4E9250, "CRoom::fun_4E9250" },  /* auto */
  { 0x004EC130, (funptr_t) &dk2::CRoom::fun_4EC130, "CRoom::fun_4EC130" },  /* auto */
  { 0x004F4090, (funptr_t) &dk2::CRoom::Treasure_cpp_4F4090, "CRoom::Treasure_cpp_4F4090" },  /* auto */
  { 0x004F4440, (funptr_t) &dk2::CRoom::fun_4F4440, "CRoom::fun_4F4440" },  /* auto */
  { 0x004F4700, (funptr_t) &dk2::CRoom::fun_4F4700, "CRoom::fun_4F4700" },  /* auto */
  { 0x004AAC90, (funptr_t) &dk2::CShot::fun_4AAC90, "CShot::fun_4AAC90" },  /* auto */
  { 0x004AAF60, (funptr_t) &dk2::CShot::fun_4AAF60, "CShot::fun_4AAF60" },  /* auto */
  { 0x004AB090, (funptr_t) &dk2::CShot::fun_4AB090, "CShot::fun_4AB090" },  /* auto */
  { 0x004AB120, (funptr_t) &dk2::CShot::fun_4AB120, "CShot::fun_4AB120" },  /* auto */
  { 0x004AB180, (funptr_t) &dk2::CShot::fun_4AB180, "CShot::fun_4AB180" },  /* auto */
  { 0x004AB7F0, (funptr_t) &dk2::CShot::fun_4AB7F0, "CShot::fun_4AB7F0" },  /* auto */
  { 0x004AB810, (funptr_t) &dk2::CShot::fun_4AB810, "CShot::fun_4AB810" },  /* auto */
  { 0x004AB830, (funptr_t) &dk2::CShot::fun_4AB830, "CShot::fun_4AB830" },  /* auto */
  { 0x004ABAE0, (funptr_t) &dk2::CShot::fun_4ABAE0, "CShot::fun_4ABAE0" },  /* auto */
  { 0x004ABAF0, (funptr_t) &dk2::CShot::dump, "CShot::dump" },  /* auto */
  { 0x004ABD60, (funptr_t) &dk2::CShot::fun_4ABD60, "CShot::fun_4ABD60" },  /* auto */
  { 0x004AC2D0, (funptr_t) &dk2::CShot::fun_4AC2D0, "CShot::fun_4AC2D0" },  /* auto */
  { 0x004AC300, (funptr_t) &dk2::CShot::fun_4AC300, "CShot::fun_4AC300" },  /* auto */
  { 0x004AC330, (funptr_t) &dk2::CShot::fun_4AC330, "CShot::fun_4AC330" },  /* auto */
  { 0x004AC390, (funptr_t) &dk2::CShot::fun_4AC390, "CShot::fun_4AC390" },  /* auto */
  { 0x004AC3C0, (funptr_t) &dk2::CShot::fun_4AC3C0, "CShot::fun_4AC3C0" },  /* auto */
  { 0x004AC420, (funptr_t) &dk2::CShot::handleHit, "CShot::handleHit" },  /* auto */
  { 0x004AC5A0, (funptr_t) &dk2::CShot::fun_4AC5A0, "CShot::fun_4AC5A0" },  /* auto */
  { 0x004AC6D0, (funptr_t) &dk2::CShot::fun_4AC6D0, "CShot::fun_4AC6D0" },  /* auto */
  { 0x004AC940, (funptr_t) &dk2::CShot::process_creature_damage, "CShot::process_creature_damage" },  /* auto */
  { 0x004ACAF0, (funptr_t) &dk2::CShot::process_creature_damage_2, "CShot::process_creature_damage_2" },  /* auto */
  { 0x004ACCA0, (funptr_t) &dk2::CShot::fun_4ACCA0, "CShot::fun_4ACCA0" },  /* auto */
  { 0x004AD730, (funptr_t) &dk2::CShot::fun_4AD730, "CShot::fun_4AD730" },  /* auto */
  { 0x004B32A0, (funptr_t) &dk2::CShot::fun_4B32A0, "CShot::fun_4B32A0" },  /* auto */
  { 0x004B58E0, (funptr_t) &dk2::CShot::fun_4B58E0, "CShot::fun_4B58E0" },  /* auto */
  { 0x004B7D60, (funptr_t) &dk2::CShot::constructor, "CShot::constructor" },  /* auto */
  { 0x004B7E10, (funptr_t) &dk2::CShot::fun_4B7E10, "CShot::fun_4B7E10" },  /* auto */
  { 0x004B7E30, (funptr_t) &dk2::CShot::fun_4B7E30, "CShot::fun_4B7E30" },  /* auto */
  { 0x004B7E40, (funptr_t) &dk2::CShot::fun_4B7E40, "CShot::fun_4B7E40" },  /* auto */
  { 0x004B7E60, (funptr_t) &dk2::CShot::deleting_destructor, "CShot::deleting_destructor" },  /* auto */
  { 0x004B7E80, (funptr_t) &dk2::CShot::destructor, "CShot::destructor" },  /* auto */
  { 0x00567140, (funptr_t) &dk2::CSoundSystem::constructor, "CSoundSystem::constructor" },  /* auto */
  { 0x005672B0, (funptr_t) &dk2::CSoundSystem::deleting_destructor, "CSoundSystem::deleting_destructor" },  /* auto */
  { 0x005672D0, (funptr_t) &dk2::CSoundSystem::destructor, "CSoundSystem::destructor" },  /* auto */
  { 0x00567300, (funptr_t) &dk2::CSoundSystem::set_number_of_channels, "CSoundSystem::set_number_of_channels" },  /* auto */
  { 0x00567410, (funptr_t) &dk2::CSoundSystem::fun_567410, "CSoundSystem::fun_567410" },  /* auto */
  { 0x00567440, (funptr_t) &dk2::CSoundSystem::fun_567440, "CSoundSystem::fun_567440" },  /* auto */
  { 0x005674F0, (funptr_t) &dk2::CSoundSystem::fun_5674F0, "CSoundSystem::fun_5674F0" },  /* auto */
  { 0x00567730, (funptr_t) &dk2::CSoundSystem::fun_567730, "CSoundSystem::fun_567730" },  /* auto */
  { 0x00567790, (funptr_t) &dk2::CSoundSystem::fun_567790, "CSoundSystem::fun_567790" },  /* auto */
  { 0x005677D0, (funptr_t) &dk2::CSoundSystem::fun_5677D0, "CSoundSystem::fun_5677D0" },  /* auto */
  { 0x005677E0, (funptr_t) &dk2::CSoundSystem::fun_5677E0, "CSoundSystem::fun_5677E0" },  /* auto */
  { 0x00567810, (funptr_t) &dk2::CSoundSystem::fun_567810, "CSoundSystem::fun_567810" },  /* auto */
  { 0x005678F0, (funptr_t) &dk2::CSoundSystem::fun_5678F0, "CSoundSystem::fun_5678F0" },  /* auto */
  { 0x00567A10, (funptr_t) &dk2::CSoundSystem::fun_567A10, "CSoundSystem::fun_567A10" },  /* auto */
  { 0x00567A40, (funptr_t) &dk2::CSoundSystem::fun_567A40, "CSoundSystem::fun_567A40" },  /* auto */
  { 0x00567A70, (funptr_t) &dk2::CSoundSystem::fun_567A70, "CSoundSystem::fun_567A70" },  /* auto */
  { 0x00567AF0, (funptr_t) &dk2::CSoundSystem::fun_567AF0, "CSoundSystem::fun_567AF0" },  /* auto */
  { 0x00567B30, (funptr_t) &dk2::CSoundSystem::update_room_ambience, "CSoundSystem::update_room_ambience" },  /* auto */
  { 0x00567B80, (funptr_t) &dk2::CSoundSystem::set_listener_direction, "CSoundSystem::set_listener_direction" },  /* auto */
  { 0x00567BC0, (funptr_t) &dk2::CSoundSystem::fun_567BC0, "CSoundSystem::fun_567BC0" },  /* auto */
  { 0x00567BE0, (funptr_t) &dk2::CSoundSystem::fun_567BE0, "CSoundSystem::fun_567BE0" },  /* auto */
  { 0x00567BF0, (funptr_t) &dk2::CSoundSystem::setProperty, "CSoundSystem::setProperty" },  /* auto */
  { 0x00567DA0, (funptr_t) &dk2::CSoundSystem::set_view, "CSoundSystem::set_view" },  /* auto */
  { 0x00567E70, (funptr_t) &dk2::CSoundSystem::destroy_sound, "CSoundSystem::destroy_sound" },  /* auto */
  { 0x0052AAE0, (funptr_t) &dk2::CSpinButton::fun_52AAE0, "CSpinButton::fun_52AAE0" },  /* auto */
  { 0x0052ADA0, (funptr_t) &dk2::CSpinButton::fun_52ADA0, "CSpinButton::fun_52ADA0" },  /* auto */
  { 0x0052AF00, (funptr_t) &dk2::CSpinButton::fun_52AF00, "CSpinButton::fun_52AF00" },  /* auto */
  { 0x0052AF60, (funptr_t) &dk2::CSpinButton::fun_52AF60, "CSpinButton::fun_52AF60" },  /* auto */
  { 0x00457780, (funptr_t) &dk2::CState::fun_457780, "CState::fun_457780" },  /* auto */
  { 0x004582C0, (funptr_t) &dk2::CState::fun_4582C0, "CState::fun_4582C0" },  /* auto */
  { 0x004585C0, (funptr_t) &dk2::CState::fun_4585C0, "CState::fun_4585C0" },  /* auto */
  { 0x00458680, (funptr_t) &dk2::CState::fun_458680, "CState::fun_458680" },  /* auto */
  { 0x00458690, (funptr_t) &dk2::CState::fun_458690, "CState::fun_458690" },  /* auto */
  { 0x00458DF0, (funptr_t) &dk2::CState::fun_458DF0, "CState::fun_458DF0" },  /* auto */
  { 0x00458EB0, (funptr_t) &dk2::CState::DisArmTrapState_cpp_458EB0, "CState::DisArmTrapState_cpp_458EB0" },  /* auto */
  { 0x00459560, (funptr_t) &dk2::CState::fun_459560, "CState::fun_459560" },  /* auto */
  { 0x004596D0, (funptr_t) &dk2::CState::fun_4596D0, "CState::fun_4596D0" },  /* auto */
  { 0x00459D50, (funptr_t) &dk2::CState::fun_459D50, "CState::fun_459D50" },  /* auto */
  { 0x00459FD0, (funptr_t) &dk2::CState::fun_459FD0, "CState::fun_459FD0" },  /* auto */
  { 0x0045A0D0, (funptr_t) &dk2::CState::fun_45A0D0, "CState::fun_45A0D0" },  /* auto */
  { 0x0045A200, (funptr_t) &dk2::CState::fun_45A200, "CState::fun_45A200" },  /* auto */
  { 0x0045A290, (funptr_t) &dk2::CState::ExploreState_cpp_45A290, "CState::ExploreState_cpp_45A290" },  /* auto */
  { 0x0045EB20, (funptr_t) &dk2::CState::fun_45EB20, "CState::fun_45EB20" },  /* auto */
  { 0x0045F030, (funptr_t) &dk2::CState::fun_45F030, "CState::fun_45F030" },  /* auto */
  { 0x004602E0, (funptr_t) &dk2::CState::fun_4602E0, "CState::fun_4602E0" },  /* auto */
  { 0x00460FE0, (funptr_t) &dk2::CState::fun_460FE0, "CState::fun_460FE0" },  /* auto */
  { 0x004611D0, (funptr_t) &dk2::CState::FightWithDrawState_cpp_4611D0, "CState::FightWithDrawState_cpp_4611D0" },  /* auto */
  { 0x00461850, (funptr_t) &dk2::CState::fun_461850, "CState::fun_461850" },  /* auto */
  { 0x00462310, (funptr_t) &dk2::CState::fun_462310, "CState::fun_462310" },  /* auto */
  { 0x00462490, (funptr_t) &dk2::CState::fun_462490, "CState::fun_462490" },  /* auto */
  { 0x00462660, (funptr_t) &dk2::CState::fun_462660, "CState::fun_462660" },  /* auto */
  { 0x004633D0, (funptr_t) &dk2::CState::fun_4633D0, "CState::fun_4633D0" },  /* auto */
  { 0x00464170, (funptr_t) &dk2::CState::fun_464170, "CState::fun_464170" },  /* auto */
  { 0x00464360, (funptr_t) &dk2::CState::fun_464360, "CState::fun_464360" },  /* auto */
  { 0x00464400, (funptr_t) &dk2::CState::ImpState_cpp_464400, "CState::ImpState_cpp_464400" },  /* auto */
  { 0x004647D0, (funptr_t) &dk2::CState::fun_4647D0, "CState::fun_4647D0" },  /* auto */
  { 0x00464A80, (funptr_t) &dk2::CState::fun_464A80, "CState::fun_464A80" },  /* auto */
  { 0x004651A0, (funptr_t) &dk2::CState::fun_4651A0, "CState::fun_4651A0" },  /* auto */
  { 0x004687C0, (funptr_t) &dk2::CState::fun_4687C0, "CState::fun_4687C0" },  /* auto */
  { 0x00469600, (funptr_t) &dk2::CState::fun_469600, "CState::fun_469600" },  /* auto */
  { 0x0046A550, (funptr_t) &dk2::CState::fun_46A550, "CState::fun_46A550" },  /* auto */
  { 0x0046AB50, (funptr_t) &dk2::CState::fun_46AB50, "CState::fun_46AB50" },  /* auto */
  { 0x0046AEA0, (funptr_t) &dk2::CState::fun_46AEA0, "CState::fun_46AEA0" },  /* auto */
  { 0x0046B6D0, (funptr_t) &dk2::CState::fun_46B6D0, "CState::fun_46B6D0" },  /* auto */
  { 0x0046B9C0, (funptr_t) &dk2::CState::fun_46B9C0, "CState::fun_46B9C0" },  /* auto */
  { 0x0046C1A0, (funptr_t) &dk2::CState::fun_46C1A0, "CState::fun_46C1A0" },  /* auto */
  { 0x0046CB80, (funptr_t) &dk2::CState::fun_46CB80, "CState::fun_46CB80" },  /* auto */
  { 0x0046CF40, (funptr_t) &dk2::CState::fun_46CF40, "CState::fun_46CF40" },  /* auto */
  { 0x0046D810, (funptr_t) &dk2::CState::fun_46D810, "CState::fun_46D810" },  /* auto */
  { 0x0046E8E0, (funptr_t) &dk2::CState::fun_46E8E0, "CState::fun_46E8E0" },  /* auto */
  { 0x0046EAB0, (funptr_t) &dk2::CState::KeeperState_cpp_46EAB0, "CState::KeeperState_cpp_46EAB0" },  /* auto */
  { 0x0046F390, (funptr_t) &dk2::CState::fun_46F390, "CState::fun_46F390" },  /* auto */
  { 0x0046F440, (funptr_t) &dk2::CState::fun_46F440, "CState::fun_46F440" },  /* auto */
  { 0x00470080, (funptr_t) &dk2::CState::fun_470080, "CState::fun_470080" },  /* auto */
  { 0x00470C80, (funptr_t) &dk2::CState::fun_470C80, "CState::fun_470C80" },  /* auto */
  { 0x00470E30, (funptr_t) &dk2::CState::fun_470E30, "CState::fun_470E30" },  /* auto */
  { 0x00471630, (funptr_t) &dk2::CState::fun_471630, "CState::fun_471630" },  /* auto */
  { 0x00471740, (funptr_t) &dk2::CState::fun_471740, "CState::fun_471740" },  /* auto */
  { 0x00471890, (funptr_t) &dk2::CState::fun_471890, "CState::fun_471890" },  /* auto */
  { 0x00471A70, (funptr_t) &dk2::CState::fun_471A70, "CState::fun_471A70" },  /* auto */
  { 0x00471D10, (funptr_t) &dk2::CState::fun_471D10, "CState::fun_471D10" },  /* auto */
  { 0x00471E80, (funptr_t) &dk2::CState::fun_471E80, "CState::fun_471E80" },  /* auto */
  { 0x00472320, (funptr_t) &dk2::CState::fun_472320, "CState::fun_472320" },  /* auto */
  { 0x004728E0, (funptr_t) &dk2::CState::fun_4728E0, "CState::fun_4728E0" },  /* auto */
  { 0x00475170, (funptr_t) &dk2::CState::fun_475170, "CState::fun_475170" },  /* auto */
  { 0x004759D0, (funptr_t) &dk2::CState::fun_4759D0, "CState::fun_4759D0" },  /* auto */
  { 0x00476B10, (funptr_t) &dk2::CState::constructor, "CState::constructor" },  /* auto */
  { 0x00476B30, (funptr_t) &dk2::CState::destructor, "CState::destructor" },  /* auto */
  { 0x00476B40, (funptr_t) &dk2::CState::fun_476B40, "CState::fun_476B40" },  /* auto */
  { 0x00476CB0, (funptr_t) &dk2::CState::saveToTbDiscFile, "CState::saveToTbDiscFile" },  /* auto */
  { 0x00476CF0, (funptr_t) &dk2::CState::fun_476CF0, "CState::fun_476CF0" },  /* auto */
  { 0x00476D30, (funptr_t) &dk2::CState::fun_476D30, "CState::fun_476D30" },  /* auto */
  { 0x00476FC0, (funptr_t) &dk2::CState::fun_476FC0, "CState::fun_476FC0" },  /* auto */
  { 0x00477310, (funptr_t) &dk2::CState::fun_477310, "CState::fun_477310" },  /* auto */
  { 0x00477B10, (funptr_t) &dk2::CState::fun_477B10, "CState::fun_477B10" },  /* auto */
  { 0x00477C20, (funptr_t) &dk2::CState::fun_477C20, "CState::fun_477C20" },  /* auto */
  { 0x00478050, (funptr_t) &dk2::CState::fun_478050, "CState::fun_478050" },  /* auto */
  { 0x00478080, (funptr_t) &dk2::CState::fun_478080, "CState::fun_478080" },  /* auto */
  { 0x004782C0, (funptr_t) &dk2::CState::fun_4782C0, "CState::fun_4782C0" },  /* auto */
  { 0x004784C0, (funptr_t) &dk2::CState::fun_4784C0, "CState::fun_4784C0" },  /* auto */
  { 0x00478B80, (funptr_t) &dk2::CState::fun_478B80, "CState::fun_478B80" },  /* auto */
  { 0x00478D00, (funptr_t) &dk2::CState::fun_478D00, "CState::fun_478D00" },  /* auto */
  { 0x004790A0, (funptr_t) &dk2::CState::fun_4790A0, "CState::fun_4790A0" },  /* auto */
  { 0x00479200, (funptr_t) &dk2::CState::dump, "CState::dump" },  /* auto */
  { 0x00480FB0, (funptr_t) &dk2::CState::fun_480FB0, "CState::fun_480FB0" },  /* auto */
  { 0x00480FF0, (funptr_t) &dk2::CState::fun_480FF0, "CState::fun_480FF0" },  /* auto */
  { 0x00481020, (funptr_t) &dk2::CState::fun_481020, "CState::fun_481020" },  /* auto */
  { 0x00481360, (funptr_t) &dk2::CState::fun_481360, "CState::fun_481360" },  /* auto */
  { 0x00481400, (funptr_t) &dk2::CState::fun_481400, "CState::fun_481400" },  /* auto */
  { 0x00481520, (funptr_t) &dk2::CState::fun_481520, "CState::fun_481520" },  /* auto */
  { 0x004816C0, (funptr_t) &dk2::CState::fun_4816C0, "CState::fun_4816C0" },  /* auto */
  { 0x004816F0, (funptr_t) &dk2::CState::fun_4816F0, "CState::fun_4816F0" },  /* auto */
  { 0x00481750, (funptr_t) &dk2::CState::fun_481750, "CState::fun_481750" },  /* auto */
  { 0x00481EF0, (funptr_t) &dk2::CState::fun_481EF0, "CState::fun_481EF0" },  /* auto */
  { 0x00481FA0, (funptr_t) &dk2::CState::fun_481FA0, "CState::fun_481FA0" },  /* auto */
  { 0x00482690, (funptr_t) &dk2::CState::fun_482690, "CState::fun_482690" },  /* auto */
  { 0x00482A60, (funptr_t) &dk2::CState::fun_482A60, "CState::fun_482A60" },  /* auto */
  { 0x00482EF0, (funptr_t) &dk2::CState::fun_482EF0, "CState::fun_482EF0" },  /* auto */
  { 0x00483AC0, (funptr_t) &dk2::CState::fun_483AC0, "CState::fun_483AC0" },  /* auto */
  { 0x00483AE0, (funptr_t) &dk2::CState::fun_483AE0, "CState::fun_483AE0" },  /* auto */
  { 0x00485240, (funptr_t) &dk2::CState::fun_485240, "CState::fun_485240" },  /* auto */
  { 0x00485AB0, (funptr_t) &dk2::CState::fun_485AB0, "CState::fun_485AB0" },  /* auto */
  { 0x00485B50, (funptr_t) &dk2::CState::fun_485B50, "CState::fun_485B50" },  /* auto */
  { 0x00485B80, (funptr_t) &dk2::CState::fun_485B80, "CState::fun_485B80" },  /* auto */
  { 0x00486CC0, (funptr_t) &dk2::CState::fun_486CC0, "CState::fun_486CC0" },  /* auto */
  { 0x004BE630, (funptr_t) &dk2::CTag::fun_4BE630, "CTag::fun_4BE630" },  /* auto */
  { 0x00507850, (funptr_t) &dk2::CTag::constructor, "CTag::constructor" },  /* auto */
  { 0x00507920, (funptr_t) &dk2::CTag::deleting_destructor, "CTag::deleting_destructor" },  /* auto */
  { 0x00507970, (funptr_t) &dk2::CTag::destructor, "CTag::destructor" },  /* auto */
  { 0x005079F0, (funptr_t) &dk2::CTag::saveToTbDiscFile, "CTag::saveToTbDiscFile" },  /* auto */
  { 0x0052A0D0, (funptr_t) &dk2::CTextBox::add_CVerticalSlider, "CTextBox::add_CVerticalSlider" },  /* auto */
  { 0x0052A6B0, (funptr_t) &dk2::CTextInput::fun_52A6B0, "CTextInput::fun_52A6B0" },  /* auto */
  { 0x0052A8E0, (funptr_t) &dk2::CTextInput::fun_52A8E0, "CTextInput::fun_52A8E0" },  /* auto */
  { 0x0052AA10, (funptr_t) &dk2::CTextInput::fun_52AA10, "CTextInput::fun_52AA10" },  /* auto */
  { 0x0052CA90, (funptr_t) &dk2::CTextInput::fun_52CA90, "CTextInput::fun_52CA90" },  /* auto */
  { 0x004B4A10, (funptr_t) &dk2::CThing::initWithType, "CThing::initWithType" },  /* auto */
  { 0x004B4AB0, (funptr_t) &dk2::CThing::fun_4B4AB0, "CThing::fun_4B4AB0" },  /* auto */
  { 0x004B4B50, (funptr_t) &dk2::CThing::saveToTbDiscFile, "CThing::saveToTbDiscFile" },  /* auto */
  { 0x004B4BB0, (funptr_t) &dk2::CThing::fun_4B4BB0, "CThing::fun_4B4BB0" },  /* auto */
  { 0x004B4C30, (funptr_t) &dk2::CThing::fun_4B4C30, "CThing::fun_4B4C30" },  /* auto */
  { 0x004B4D40, (funptr_t) &dk2::CThing::fun_4B4D40, "CThing::fun_4B4D40" },  /* auto */
  { 0x004B4E70, (funptr_t) &dk2::CThing::fun_4B4E70, "CThing::fun_4B4E70" },  /* auto */
  { 0x004B4F60, (funptr_t) &dk2::CThing::fun_4B4F60, "CThing::fun_4B4F60" },  /* auto */
  { 0x004B5020, (funptr_t) &dk2::CThing::fun_4B5020, "CThing::fun_4B5020" },  /* auto */
  { 0x004B5350, (funptr_t) &dk2::CThing::fun_4B5350, "CThing::fun_4B5350" },  /* auto */
  { 0x004B5560, (funptr_t) &dk2::CThing::fun_4B5560, "CThing::fun_4B5560" },  /* auto */
  { 0x004B5570, (funptr_t) &dk2::CThing::fun_4B5570, "CThing::fun_4B5570" },  /* auto */
  { 0x004B5580, (funptr_t) &dk2::CThing::fun_4B5580, "CThing::fun_4B5580" },  /* auto */
  { 0x004B5590, (funptr_t) &dk2::CThing::fun_4B5590, "CThing::fun_4B5590" },  /* auto */
  { 0x004B56A0, (funptr_t) &dk2::CThing::fun_4B56A0, "CThing::fun_4B56A0" },  /* auto */
  { 0x004B5700, (funptr_t) &dk2::CThing::dump, "CThing::dump" },  /* auto */
  { 0x004B5C10, (funptr_t) &dk2::CThing::fun_4B5C10, "CThing::fun_4B5C10" },  /* auto */
  { 0x004B5C20, (funptr_t) &dk2::CThing::fun_4B5C20, "CThing::fun_4B5C20" },  /* auto */
  { 0x004B5EF0, (funptr_t) &dk2::CThing::constructor, "CThing::constructor" },  /* auto */
  { 0x004B7530, (funptr_t) &dk2::CThing::deleting_destructor, "CThing::deleting_destructor" },  /* auto */
  { 0x004B7550, (funptr_t) &dk2::CThing::destructor, "CThing::destructor" },  /* auto */
  { 0x004A7940, (funptr_t) &dk2::CTrap::init, "CTrap::init" },  /* auto */
  { 0x004A7CE0, (funptr_t) &dk2::CTrap::fun_4A7CE0, "CTrap::fun_4A7CE0" },  /* auto */
  { 0x004A84E0, (funptr_t) &dk2::CTrap::fun_4A84E0, "CTrap::fun_4A84E0" },  /* auto */
  { 0x004A93E0, (funptr_t) &dk2::CTrap::fun_4A93E0, "CTrap::fun_4A93E0" },  /* auto */
  { 0x004A96A0, (funptr_t) &dk2::CTrap::fun_4A96A0, "CTrap::fun_4A96A0" },  /* auto */
  { 0x004A9B70, (funptr_t) &dk2::CTrap::fun_4A9B70, "CTrap::fun_4A9B70" },  /* auto */
  { 0x004AA050, (funptr_t) &dk2::CTrap::fun_4AA050, "CTrap::fun_4AA050" },  /* auto */
  { 0x004AA120, (funptr_t) &dk2::CTrap::fun_4AA120, "CTrap::fun_4AA120" },  /* auto */
  { 0x004AA130, (funptr_t) &dk2::CTrap::dump, "CTrap::dump" },  /* auto */
  { 0x004B7400, (funptr_t) &dk2::CTrap::constructor, "CTrap::constructor" },  /* auto */
  { 0x004B7470, (funptr_t) &dk2::CTrap::deleting_destructor, "CTrap::deleting_destructor" },  /* auto */
  { 0x004B7490, (funptr_t) &dk2::CTrap::destructor, "CTrap::destructor" },  /* auto */
  { 0x00528B20, (funptr_t) &dk2::CVerticalSlider::fun_528B20, "CVerticalSlider::fun_528B20" },  /* auto */
  { 0x00529160, (funptr_t) &dk2::CVerticalSlider::fun_529160, "CVerticalSlider::fun_529160" },  /* auto */
  { 0x0052A300, (funptr_t) &dk2::CVerticalSlider::deleting_destructor, "CVerticalSlider::deleting_destructor" },  /* auto */
  { 0x0052A320, (funptr_t) &dk2::CVerticalSlider::destructor, "CVerticalSlider::destructor" },  /* auto */
  { 0x0052CCE0, (funptr_t) &dk2::CWindow::constructor, "CWindow::constructor" },  /* auto */
  { 0x0052CD00, (funptr_t) &dk2::CWindow::deleting_destructor, "CWindow::deleting_destructor" },  /* auto */
  { 0x0052CD20, (funptr_t) &dk2::CWindow::destructor, "CWindow::destructor" },  /* auto */
  { 0x0052CD30, (funptr_t) &dk2::CWindow::update, "CWindow::update" },  /* auto */
  { 0x0052CDC0, (funptr_t) &dk2::CWindow::sub_52CDC0, "CWindow::sub_52CDC0" },  /* auto */
  { 0x0052CE50, (funptr_t) &dk2::CWindow::getScreenPos, "CWindow::getScreenPos" },  /* auto */
  { 0x0052CED0, (funptr_t) &dk2::CWindow::configure, "CWindow::configure" },  /* auto */
  { 0x00555B90, (funptr_t) &dk2::CWindowTest::constructor, "CWindowTest::constructor" },  /* auto */
  { 0x00555BD0, (funptr_t) &dk2::CWindowTest::destructor, "CWindowTest::destructor" },  /* auto */
  { 0x00555CC0, (funptr_t) &dk2::CWindowTest::create, "CWindowTest::create" },  /* auto */
  { 0x00555F30, (funptr_t) &dk2::CWindowTest::recreateBullfrog, "CWindowTest::recreateBullfrog" },  /* auto */
  { 0x00555FF0, (funptr_t) &dk2::CWindowTest::getClientRect, "CWindowTest::getClientRect" },  /* auto */
  { 0x00556030, (funptr_t) &dk2::CWindowTest::createBackSurface, "CWindowTest::createBackSurface" },  /* auto */
  { 0x00556180, (funptr_t) &dk2::CWindowTest::sub_556180, "CWindowTest::sub_556180" },  /* auto */
  { 0x00556260, (funptr_t) &dk2::CWindowTest::sub_556260_ev1, "CWindowTest::sub_556260_ev1" },  /* auto */
  { 0x005565E0, (funptr_t) &dk2::CWindowTest::getCurOffScreenSurf, "CWindowTest::getCurOffScreenSurf" },  /* auto */
  { 0x005565F0, (funptr_t) &dk2::CWindowTest::recreate, "CWindowTest::recreate" },  /* auto */
  { 0x005567F0, (funptr_t) &dk2::CWindowTest::isNeedBlt, "CWindowTest::isNeedBlt" },  /* auto */
  { 0x004DFAA0, (funptr_t) &dk2::CWorld::fun_4DFAA0, "CWorld::fun_4DFAA0" },  /* auto */
  { 0x005027D0, (funptr_t) &dk2::CWorld::fun_5027D0, "CWorld::fun_5027D0" },  /* auto */
  { 0x00504EC0, (funptr_t) &dk2::CWorld::fun_504EC0, "CWorld::fun_504EC0" },  /* auto */
  { 0x005051F0, (funptr_t) &dk2::CWorld::fun_5051F0, "CWorld::fun_5051F0" },  /* auto */
  { 0x00505250, (funptr_t) &dk2::CWorld::fun_505250, "CWorld::fun_505250" },  /* auto */
  { 0x00508A10, (funptr_t) &dk2::CWorld::constructor, "CWorld::constructor" },  /* auto */
  { 0x00508C00, (funptr_t) &dk2::CWorld::getPlayerList, "CWorld::getPlayerList" },  /* auto */
  { 0x00508C10, (funptr_t) &dk2::CWorld::fun_508C10, "CWorld::fun_508C10" },  /* auto */
  { 0x00508C60, (funptr_t) &dk2::CWorld::getMEPlayerTagId, "CWorld::getMEPlayerTagId" },  /* auto */
  { 0x00508C70, (funptr_t) &dk2::CWorld::fun_508C70, "CWorld::fun_508C70" },  /* auto */
  { 0x00508C80, (funptr_t) &dk2::CWorld::fun_508C80, "CWorld::fun_508C80" },  /* auto */
  { 0x00508CA0, (funptr_t) &dk2::CWorld::fun_508CA0, "CWorld::fun_508CA0" },  /* auto */
  { 0x00508CC0, (funptr_t) &dk2::CWorld::fun_508CC0, "CWorld::fun_508CC0" },  /* auto */
  { 0x00508CF0, (funptr_t) &dk2::CWorld::fun_508CF0, "CWorld::fun_508CF0" },  /* auto */
  { 0x00508D00, (funptr_t) &dk2::CWorld::fun_508D00, "CWorld::fun_508D00" },  /* auto */
  { 0x00508D10, (funptr_t) &dk2::CWorld::fun_508D10, "CWorld::fun_508D10" },  /* auto */
  { 0x00508D40, (funptr_t) &dk2::CWorld::fun_508D40, "CWorld::fun_508D40" },  /* auto */
  { 0x00508D60, (funptr_t) &dk2::CWorld::fun_508D60, "CWorld::fun_508D60" },  /* auto */
  { 0x00508D70, (funptr_t) &dk2::CWorld::fun_508D70, "CWorld::fun_508D70" },  /* auto */
  { 0x00508D80, (funptr_t) &dk2::CWorld::fun_508D80, "CWorld::fun_508D80" },  /* auto */
  { 0x00508D90, (funptr_t) &dk2::CWorld::fun_508D90, "CWorld::fun_508D90" },  /* auto */
  { 0x00508DA0, (funptr_t) &dk2::CWorld::fun_508DA0, "CWorld::fun_508DA0" },  /* auto */
  { 0x00508DB0, (funptr_t) &dk2::CWorld::fun_508DB0, "CWorld::fun_508DB0" },  /* auto */
  { 0x00508DD0, (funptr_t) &dk2::CWorld::fun_508DD0, "CWorld::fun_508DD0" },  /* auto */
  { 0x00508DF0, (funptr_t) &dk2::CWorld::fun_508DF0, "CWorld::fun_508DF0" },  /* auto */
  { 0x00508E00, (funptr_t) &dk2::CWorld::fun_508E00, "CWorld::fun_508E00" },  /* auto */
  { 0x00508E10, (funptr_t) &dk2::CWorld::fun_508E10, "CWorld::fun_508E10" },  /* auto */
  { 0x00508E20, (funptr_t) &dk2::CWorld::fun_508E20, "CWorld::fun_508E20" },  /* auto */
  { 0x00508E30, (funptr_t) &dk2::CWorld::fun_508E30, "CWorld::fun_508E30" },  /* auto */
  { 0x00508E40, (funptr_t) &dk2::CWorld::fun_508E40, "CWorld::fun_508E40" },  /* auto */
  { 0x00508E50, (funptr_t) &dk2::CWorld::fun_508E50, "CWorld::fun_508E50" },  /* auto */
  { 0x00508E60, (funptr_t) &dk2::CWorld::fun_508E60, "CWorld::fun_508E60" },  /* auto */
  { 0x00508E70, (funptr_t) &dk2::CWorld::fun_508E70, "CWorld::fun_508E70" },  /* auto */
  { 0x00508E80, (funptr_t) &dk2::CWorld::fun_508E80, "CWorld::fun_508E80" },  /* auto */
  { 0x00508E90, (funptr_t) &dk2::CWorld::fun_508E90, "CWorld::fun_508E90" },  /* auto */
  { 0x00508EA0, (funptr_t) &dk2::CWorld::fun_508EA0, "CWorld::fun_508EA0" },  /* auto */
  { 0x00508EB0, (funptr_t) &dk2::CWorld::fun_508EB0, "CWorld::fun_508EB0" },  /* auto */
  { 0x00508EC0, (funptr_t) &dk2::CWorld::fun_508EC0, "CWorld::fun_508EC0" },  /* auto */
  { 0x00508ED0, (funptr_t) &dk2::CWorld::fun_508ED0, "CWorld::fun_508ED0" },  /* auto */
  { 0x00508EE0, (funptr_t) &dk2::CWorld::fun_508EE0, "CWorld::fun_508EE0" },  /* auto */
  { 0x00508EF0, (funptr_t) &dk2::CWorld::fun_508EF0, "CWorld::fun_508EF0" },  /* auto */
  { 0x00508F00, (funptr_t) &dk2::CWorld::fun_508F00, "CWorld::fun_508F00" },  /* auto */
  { 0x00508F10, (funptr_t) &dk2::CWorld::fun_508F10, "CWorld::fun_508F10" },  /* auto */
  { 0x00508F20, (funptr_t) &dk2::CWorld::fun_508F20, "CWorld::fun_508F20" },  /* auto */
  { 0x00508F30, (funptr_t) &dk2::CWorld::fun_508F30, "CWorld::fun_508F30" },  /* auto */
  { 0x00508F40, (funptr_t) &dk2::CWorld::fun_508F40, "CWorld::fun_508F40" },  /* auto */
  { 0x00508F50, (funptr_t) &dk2::CWorld::fun_508F50, "CWorld::fun_508F50" },  /* auto */
  { 0x00508F60, (funptr_t) &dk2::CWorld::fun_508F60, "CWorld::fun_508F60" },  /* auto */
  { 0x00508F70, (funptr_t) &dk2::CWorld::fun_508F70, "CWorld::fun_508F70" },  /* auto */
  { 0x00508F80, (funptr_t) &dk2::CWorld::fun_508F80, "CWorld::fun_508F80" },  /* auto */
  { 0x00508F90, (funptr_t) &dk2::CWorld::fun_508F90, "CWorld::fun_508F90" },  /* auto */
  { 0x00508FA0, (funptr_t) &dk2::CWorld::fun_508FA0, "CWorld::fun_508FA0" },  /* auto */
  { 0x00508FB0, (funptr_t) &dk2::CWorld::fun_508FB0, "CWorld::fun_508FB0" },  /* auto */
  { 0x00508FC0, (funptr_t) &dk2::CWorld::fun_508FC0, "CWorld::fun_508FC0" },  /* auto */
  { 0x00508FE0, (funptr_t) &dk2::CWorld::fun_508FE0, "CWorld::fun_508FE0" },  /* auto */
  { 0x00509010, (funptr_t) &dk2::CWorld::fun_509010, "CWorld::fun_509010" },  /* auto */
  { 0x00509050, (funptr_t) &dk2::CWorld::fun_509050, "CWorld::fun_509050" },  /* auto */
  { 0x00509090, (funptr_t) &dk2::CWorld::fun_509090, "CWorld::fun_509090" },  /* auto */
  { 0x005090C0, (funptr_t) &dk2::CWorld::fun_5090C0, "CWorld::fun_5090C0" },  /* auto */
  { 0x00509100, (funptr_t) &dk2::CWorld::fun_509100, "CWorld::fun_509100" },  /* auto */
  { 0x00509160, (funptr_t) &dk2::CWorld::fun_509160, "CWorld::fun_509160" },  /* auto */
  { 0x00509200, (funptr_t) &dk2::CWorld::fun_509200, "CWorld::fun_509200" },  /* auto */
  { 0x00509230, (funptr_t) &dk2::CWorld::fun_509230, "CWorld::fun_509230" },  /* auto */
  { 0x00509260, (funptr_t) &dk2::CWorld::fun_509260, "CWorld::fun_509260" },  /* auto */
  { 0x00509280, (funptr_t) &dk2::CWorld::fun_509280, "CWorld::fun_509280" },  /* auto */
  { 0x005092B0, (funptr_t) &dk2::CWorld::fun_5092B0, "CWorld::fun_5092B0" },  /* auto */
  { 0x005092D0, (funptr_t) &dk2::CWorld::fun_5092D0, "CWorld::fun_5092D0" },  /* auto */
  { 0x005092F0, (funptr_t) &dk2::CWorld::fun_5092F0, "CWorld::fun_5092F0" },  /* auto */
  { 0x00509310, (funptr_t) &dk2::CWorld::fun_509310, "CWorld::fun_509310" },  /* auto */
  { 0x00509340, (funptr_t) &dk2::CWorld::fun_509340, "CWorld::fun_509340" },  /* auto */
  { 0x00509370, (funptr_t) &dk2::CWorld::fun_509370, "CWorld::fun_509370" },  /* auto */
  { 0x005093A0, (funptr_t) &dk2::CWorld::fun_5093A0, "CWorld::fun_5093A0" },  /* auto */
  { 0x005093C0, (funptr_t) &dk2::CWorld::fun_5093C0, "CWorld::fun_5093C0" },  /* auto */
  { 0x005093E0, (funptr_t) &dk2::CWorld::fun_5093E0, "CWorld::fun_5093E0" },  /* auto */
  { 0x00509410, (funptr_t) &dk2::CWorld::fun_509410, "CWorld::fun_509410" },  /* auto */
  { 0x00509430, (funptr_t) &dk2::CWorld::fun_509430, "CWorld::fun_509430" },  /* auto */
  { 0x00509450, (funptr_t) &dk2::CWorld::fun_509450, "CWorld::fun_509450" },  /* auto */
  { 0x00509480, (funptr_t) &dk2::CWorld::fun_509480, "CWorld::fun_509480" },  /* auto */
  { 0x005094B0, (funptr_t) &dk2::CWorld::fun_5094B0, "CWorld::fun_5094B0" },  /* auto */
  { 0x005094D0, (funptr_t) &dk2::CWorld::fun_5094D0, "CWorld::fun_5094D0" },  /* auto */
  { 0x005094F0, (funptr_t) &dk2::CWorld::fun_5094F0, "CWorld::fun_5094F0" },  /* auto */
  { 0x00509520, (funptr_t) &dk2::CWorld::fun_509520, "CWorld::fun_509520" },  /* auto */
  { 0x00509530, (funptr_t) &dk2::CWorld::fun_509530, "CWorld::fun_509530" },  /* auto */
  { 0x00509540, (funptr_t) &dk2::CWorld::fun_509540, "CWorld::fun_509540" },  /* auto */
  { 0x00509560, (funptr_t) &dk2::CWorld::fun_509560, "CWorld::fun_509560" },  /* auto */
  { 0x00509570, (funptr_t) &dk2::CWorld::fun_509570, "CWorld::fun_509570" },  /* auto */
  { 0x00509580, (funptr_t) &dk2::CWorld::fun_509580, "CWorld::fun_509580" },  /* auto */
  { 0x005095B0, (funptr_t) &dk2::CWorld::fun_5095B0, "CWorld::fun_5095B0" },  /* auto */
  { 0x005095F0, (funptr_t) &dk2::CWorld::fun_5095F0, "CWorld::fun_5095F0" },  /* auto */
  { 0x00509610, (funptr_t) &dk2::CWorld::fun_509610, "CWorld::fun_509610" },  /* auto */
  { 0x00509630, (funptr_t) &dk2::CWorld::fun_509630, "CWorld::fun_509630" },  /* auto */
  { 0x00509640, (funptr_t) &dk2::CWorld::fun_509640, "CWorld::fun_509640" },  /* auto */
  { 0x00509650, (funptr_t) &dk2::CWorld::fun_509650, "CWorld::fun_509650" },  /* auto */
  { 0x00509660, (funptr_t) &dk2::CWorld::fun_509660, "CWorld::fun_509660" },  /* auto */
  { 0x00509670, (funptr_t) &dk2::CWorld::fun_509670, "CWorld::fun_509670" },  /* auto */
  { 0x00509680, (funptr_t) &dk2::CWorld::fun_509680, "CWorld::fun_509680" },  /* auto */
  { 0x00509690, (funptr_t) &dk2::CWorld::fun_509690, "CWorld::fun_509690" },  /* auto */
  { 0x005096A0, (funptr_t) &dk2::CWorld::fun_5096A0, "CWorld::fun_5096A0" },  /* auto */
  { 0x005096C0, (funptr_t) &dk2::CWorld::fun_5096C0, "CWorld::fun_5096C0" },  /* auto */
  { 0x005096F0, (funptr_t) &dk2::CWorld::fun_5096F0, "CWorld::fun_5096F0" },  /* auto */
  { 0x00509700, (funptr_t) &dk2::CWorld::fun_509700, "CWorld::fun_509700" },  /* auto */
  { 0x00509710, (funptr_t) &dk2::CWorld::fun_509710, "CWorld::fun_509710" },  /* auto */
  { 0x00509730, (funptr_t) &dk2::CWorld::fun_509730, "CWorld::fun_509730" },  /* auto */
  { 0x00509740, (funptr_t) &dk2::CWorld::fun_509740, "CWorld::fun_509740" },  /* auto */
  { 0x00509750, (funptr_t) &dk2::CWorld::fun_509750, "CWorld::fun_509750" },  /* auto */
  { 0x00509780, (funptr_t) &dk2::CWorld::fun_509780, "CWorld::fun_509780" },  /* auto */
  { 0x005097A0, (funptr_t) &dk2::CWorld::fun_5097A0, "CWorld::fun_5097A0" },  /* auto */
  { 0x005097B0, (funptr_t) &dk2::CWorld::fun_5097B0, "CWorld::fun_5097B0" },  /* auto */
  { 0x005097D0, (funptr_t) &dk2::CWorld::fun_5097D0, "CWorld::fun_5097D0" },  /* auto */
  { 0x005097F0, (funptr_t) &dk2::CWorld::fun_5097F0, "CWorld::fun_5097F0" },  /* auto */
  { 0x00509800, (funptr_t) &dk2::CWorld::fun_509800, "CWorld::fun_509800" },  /* auto */
  { 0x00509820, (funptr_t) &dk2::CWorld::fun_509820, "CWorld::fun_509820" },  /* auto */
  { 0x00509830, (funptr_t) &dk2::CWorld::fun_509830, "CWorld::fun_509830" },  /* auto */
  { 0x00509840, (funptr_t) &dk2::CWorld::fun_509840, "CWorld::fun_509840" },  /* auto */
  { 0x00509850, (funptr_t) &dk2::CWorld::fun_509850, "CWorld::fun_509850" },  /* auto */
  { 0x00509860, (funptr_t) &dk2::CWorld::fun_509860, "CWorld::fun_509860" },  /* auto */
  { 0x00509870, (funptr_t) &dk2::CWorld::fun_509870, "CWorld::fun_509870" },  /* auto */
  { 0x00509880, (funptr_t) &dk2::CWorld::fun_509880, "CWorld::fun_509880" },  /* auto */
  { 0x00509890, (funptr_t) &dk2::CWorld::fun_509890, "CWorld::fun_509890" },  /* auto */
  { 0x005098A0, (funptr_t) &dk2::CWorld::fun_5098A0, "CWorld::fun_5098A0" },  /* auto */
  { 0x005098B0, (funptr_t) &dk2::CWorld::fun_5098B0, "CWorld::fun_5098B0" },  /* auto */
  { 0x005098C0, (funptr_t) &dk2::CWorld::fun_5098C0, "CWorld::fun_5098C0" },  /* auto */
  { 0x005098D0, (funptr_t) &dk2::CWorld::fun_5098D0, "CWorld::fun_5098D0" },  /* auto */
  { 0x00509900, (funptr_t) &dk2::CWorld::destructor, "CWorld::destructor" },  /* auto */
  { 0x005099A0, (funptr_t) &dk2::CWorld::create_objects, "CWorld::create_objects" },  /* auto */
  { 0x0050A2F0, (funptr_t) &dk2::CWorld::remove_objects, "CWorld::remove_objects" },  /* auto */
  { 0x0050A450, (funptr_t) &dk2::CWorld::tick, "CWorld::tick" },  /* auto */
  { 0x0050AA40, (funptr_t) &dk2::CWorld::clearResearchOrder, "CWorld::clearResearchOrder" },  /* auto */
  { 0x0050AA60, (funptr_t) &dk2::CWorld::saveAllToTbDiscFile, "CWorld::saveAllToTbDiscFile" },  /* auto */
  { 0x0050B310, (funptr_t) &dk2::CWorld::fun_50B310, "CWorld::fun_50B310" },  /* auto */
  { 0x0050B3C0, (funptr_t) &dk2::CWorld::fun_50B3C0, "CWorld::fun_50B3C0" },  /* auto */
  { 0x0050B550, (funptr_t) &dk2::CWorld::fun_50B550, "CWorld::fun_50B550" },  /* auto */
  { 0x0050B5B0, (funptr_t) &dk2::CWorld::fun_50B5B0, "CWorld::fun_50B5B0" },  /* auto */
  { 0x0050CD10, (funptr_t) &dk2::CWorld::fun_50CD10, "CWorld::fun_50CD10" },  /* auto */
  { 0x0050CD60, (funptr_t) &dk2::CWorld::fun_50CD60, "CWorld::fun_50CD60" },  /* auto */
  { 0x0050CE00, (funptr_t) &dk2::CWorld::fun_50CE00, "CWorld::fun_50CE00" },  /* auto */
  { 0x0050CEB0, (funptr_t) &dk2::CWorld::fun_50CEB0, "CWorld::fun_50CEB0" },  /* auto */
  { 0x0050CF20, (funptr_t) &dk2::CWorld::fun_50CF20, "CWorld::fun_50CF20" },  /* auto */
  { 0x0050CF80, (funptr_t) &dk2::CWorld::fun_50CF80, "CWorld::fun_50CF80" },  /* auto */
  { 0x0050CFB0, (funptr_t) &dk2::CWorld::fun_50CFB0, "CWorld::fun_50CFB0" },  /* auto */
  { 0x0050CFD0, (funptr_t) &dk2::CWorld::fun_50CFD0, "CWorld::fun_50CFD0" },  /* auto */
  { 0x0050D040, (funptr_t) &dk2::CWorld::fun_50D040, "CWorld::fun_50D040" },  /* auto */
  { 0x0050D0B0, (funptr_t) &dk2::CWorld::fun_50D0B0, "CWorld::fun_50D0B0" },  /* auto */
  { 0x0050D120, (funptr_t) &dk2::CWorld::fun_50D120, "CWorld::fun_50D120" },  /* auto */
  { 0x0050D150, (funptr_t) &dk2::CWorld::fun_50D150, "CWorld::fun_50D150" },  /* auto */
  { 0x0050D1B0, (funptr_t) &dk2::CWorld::fun_50D1B0, "CWorld::fun_50D1B0" },  /* auto */
  { 0x0050D220, (funptr_t) &dk2::CWorld::fun_50D220, "CWorld::fun_50D220" },  /* auto */
  { 0x0050D240, (funptr_t) &dk2::CWorld::fun_50D240, "CWorld::fun_50D240" },  /* auto */
  { 0x0050D2E0, (funptr_t) &dk2::CWorld::fun_50D2E0, "CWorld::fun_50D2E0" },  /* auto */
  { 0x0050D390, (funptr_t) &dk2::CWorld::fun_50D390, "CWorld::fun_50D390" },  /* auto */
  { 0x0050D420, (funptr_t) &dk2::CWorld::fun_50D420, "CWorld::fun_50D420" },  /* auto */
  { 0x0050D460, (funptr_t) &dk2::CWorld::fun_50D460, "CWorld::fun_50D460" },  /* auto */
  { 0x0050D4D0, (funptr_t) &dk2::CWorld::fun_50D4D0, "CWorld::fun_50D4D0" },  /* auto */
  { 0x0050D550, (funptr_t) &dk2::CWorld::fun_50D550, "CWorld::fun_50D550" },  /* auto */
  { 0x0050D570, (funptr_t) &dk2::CWorld::fun_50D570, "CWorld::fun_50D570" },  /* auto */
  { 0x0050D5E0, (funptr_t) &dk2::CWorld::fun_50D5E0, "CWorld::fun_50D5E0" },  /* auto */
  { 0x0050D650, (funptr_t) &dk2::CWorld::fun_50D650, "CWorld::fun_50D650" },  /* auto */
  { 0x0050D6C0, (funptr_t) &dk2::CWorld::fun_50D6C0, "CWorld::fun_50D6C0" },  /* auto */
  { 0x0050D6F0, (funptr_t) &dk2::CWorld::fun_50D6F0, "CWorld::fun_50D6F0" },  /* auto */
  { 0x0050D750, (funptr_t) &dk2::CWorld::fun_50D750, "CWorld::fun_50D750" },  /* auto */
  { 0x0050D7C0, (funptr_t) &dk2::CWorld::fun_50D7C0, "CWorld::fun_50D7C0" },  /* auto */
  { 0x0050D7E0, (funptr_t) &dk2::CWorld::fun_50D7E0, "CWorld::fun_50D7E0" },  /* auto */
  { 0x0050D850, (funptr_t) &dk2::CWorld::fun_50D850, "CWorld::fun_50D850" },  /* auto */
  { 0x0050D8C0, (funptr_t) &dk2::CWorld::fun_50D8C0, "CWorld::fun_50D8C0" },  /* auto */
  { 0x0050D930, (funptr_t) &dk2::CWorld::fun_50D930, "CWorld::fun_50D930" },  /* auto */
  { 0x0050D960, (funptr_t) &dk2::CWorld::fun_50D960, "CWorld::fun_50D960" },  /* auto */
  { 0x0050D9C0, (funptr_t) &dk2::CWorld::fun_50D9C0, "CWorld::fun_50D9C0" },  /* auto */
  { 0x0050DA20, (funptr_t) &dk2::CWorld::fun_50DA20, "CWorld::fun_50DA20" },  /* auto */
  { 0x0050DA40, (funptr_t) &dk2::CWorld::fun_50DA40, "CWorld::fun_50DA40" },  /* auto */
  { 0x0050DAB0, (funptr_t) &dk2::CWorld::fun_50DAB0, "CWorld::fun_50DAB0" },  /* auto */
  { 0x0050DB20, (funptr_t) &dk2::CWorld::findMyObjectDataObjByTypeId, "CWorld::findMyObjectDataObjByTypeId" },  /* auto */
  { 0x0050DB90, (funptr_t) &dk2::CWorld::fun_50DB90, "CWorld::fun_50DB90" },  /* auto */
  { 0x0050DBC0, (funptr_t) &dk2::CWorld::fun_50DBC0, "CWorld::fun_50DBC0" },  /* auto */
  { 0x0050DC10, (funptr_t) &dk2::CWorld::fun_50DC10, "CWorld::fun_50DC10" },  /* auto */
  { 0x0050DC80, (funptr_t) &dk2::CWorld::fun_50DC80, "CWorld::fun_50DC80" },  /* auto */
  { 0x0050DCA0, (funptr_t) &dk2::CWorld::fun_50DCA0, "CWorld::fun_50DCA0" },  /* auto */
  { 0x0050DD00, (funptr_t) &dk2::CWorld::fun_50DD00, "CWorld::fun_50DD00" },  /* auto */
  { 0x0050DD60, (funptr_t) &dk2::CWorld::fun_50DD60, "CWorld::fun_50DD60" },  /* auto */
  { 0x0050DDD0, (funptr_t) &dk2::CWorld::fun_50DDD0, "CWorld::fun_50DDD0" },  /* auto */
  { 0x0050DE00, (funptr_t) &dk2::CWorld::fun_50DE00, "CWorld::fun_50DE00" },  /* auto */
  { 0x0050DE50, (funptr_t) &dk2::CWorld::fun_50DE50, "CWorld::fun_50DE50" },  /* auto */
  { 0x0050DEB0, (funptr_t) &dk2::CWorld::fun_50DEB0, "CWorld::fun_50DEB0" },  /* auto */
  { 0x0050DED0, (funptr_t) &dk2::CWorld::fun_50DED0, "CWorld::fun_50DED0" },  /* auto */
  { 0x0050DF30, (funptr_t) &dk2::CWorld::fun_50DF30, "CWorld::fun_50DF30" },  /* auto */
  { 0x0050DFA0, (funptr_t) &dk2::CWorld::fun_50DFA0, "CWorld::fun_50DFA0" },  /* auto */
  { 0x0050E010, (funptr_t) &dk2::CWorld::fun_50E010, "CWorld::fun_50E010" },  /* auto */
  { 0x0050E040, (funptr_t) &dk2::CWorld::fun_50E040, "CWorld::fun_50E040" },  /* auto */
  { 0x0050E080, (funptr_t) &dk2::CWorld::fun_50E080, "CWorld::fun_50E080" },  /* auto */
  { 0x0050E0E0, (funptr_t) &dk2::CWorld::fun_50E0E0, "CWorld::fun_50E0E0" },  /* auto */
  { 0x0050E100, (funptr_t) &dk2::CWorld::fun_50E100, "CWorld::fun_50E100" },  /* auto */
  { 0x0050E170, (funptr_t) &dk2::CWorld::fun_50E170, "CWorld::fun_50E170" },  /* auto */
  { 0x0050E1E0, (funptr_t) &dk2::CWorld::fun_50E1E0, "CWorld::fun_50E1E0" },  /* auto */
  { 0x0050E250, (funptr_t) &dk2::CWorld::fun_50E250, "CWorld::fun_50E250" },  /* auto */
  { 0x0050E280, (funptr_t) &dk2::CWorld::fun_50E280, "CWorld::fun_50E280" },  /* auto */
  { 0x0050E2D0, (funptr_t) &dk2::CWorld::fun_50E2D0, "CWorld::fun_50E2D0" },  /* auto */
  { 0x0050E330, (funptr_t) &dk2::CWorld::fun_50E330, "CWorld::fun_50E330" },  /* auto */
  { 0x0050E3A0, (funptr_t) &dk2::CWorld::findCreatureDataObjBySomeId, "CWorld::findCreatureDataObjBySomeId" },  /* auto */
  { 0x0050E420, (funptr_t) &dk2::CWorld::fun_50E420, "CWorld::fun_50E420" },  /* auto */
  { 0x0050E490, (funptr_t) &dk2::CWorld::fun_50E490, "CWorld::fun_50E490" },  /* auto */
  { 0x0050E4D0, (funptr_t) &dk2::CWorld::fun_50E4D0, "CWorld::fun_50E4D0" },  /* auto */
  { 0x0050E510, (funptr_t) &dk2::CWorld::fun_50E510, "CWorld::fun_50E510" },  /* auto */
  { 0x0050E5C0, (funptr_t) &dk2::CWorld::fun_50E5C0, "CWorld::fun_50E5C0" },  /* auto */
  { 0x0050E620, (funptr_t) &dk2::CWorld::loadLevel, "CWorld::loadLevel" },  /* auto */
  { 0x0050E920, (funptr_t) &dk2::CWorld::fun_50E920, "CWorld::fun_50E920" },  /* auto */
  { 0x0050EA20, (funptr_t) &dk2::CWorld::fun_50EA20, "CWorld::fun_50EA20" },  /* auto */
  { 0x0050EA70, (funptr_t) &dk2::CWorld::dump, "CWorld::dump" },  /* auto */
  { 0x0050F3D0, (funptr_t) &dk2::CWorld::calcChecksum, "CWorld::calcChecksum" },  /* auto */
  { 0x0050FA70, (funptr_t) &dk2::CWorld::fun_50FA70, "CWorld::fun_50FA70" },  /* auto */
  { 0x0050FAE0, (funptr_t) &dk2::CWorld::fun_50FAE0, "CWorld::fun_50FAE0" },  /* auto */
  { 0x0050FB10, (funptr_t) &dk2::CWorld::fun_50FB10, "CWorld::fun_50FB10" },  /* auto */
  { 0x0050FB40, (funptr_t) &dk2::CWorld::fun_50FB40, "CWorld::fun_50FB40" },  /* auto */
  { 0x0050FBA0, (funptr_t) &dk2::CWorld::fun_50FBA0, "CWorld::fun_50FBA0" },  /* auto */
  { 0x0050FC60, (funptr_t) &dk2::CWorld::fun_50FC60, "CWorld::fun_50FC60" },  /* auto */
  { 0x0050FD10, (funptr_t) &dk2::CWorld::saveToFile, "CWorld::saveToFile" },  /* auto */
  { 0x0050FD70, (funptr_t) &dk2::CWorld::fun_50FD70, "CWorld::fun_50FD70" },  /* auto */
  { 0x00510000, (funptr_t) &dk2::CWorld::fun_510000, "CWorld::fun_510000" },  /* auto */
  { 0x005101C0, (funptr_t) &dk2::CWorld::fun_5101C0, "CWorld::fun_5101C0" },  /* auto */
  { 0x00510210, (funptr_t) &dk2::CWorld::fun_510210, "CWorld::fun_510210" },  /* auto */
  { 0x00510230, (funptr_t) &dk2::CWorld::fun_510230, "CWorld::fun_510230" },  /* auto */
  { 0x00510700, (funptr_t) &dk2::CWorld::fun_510700, "CWorld::fun_510700" },  /* auto */
  { 0x00510730, (funptr_t) &dk2::CWorld::fun_510730, "CWorld::fun_510730" },  /* auto */
  { 0x00510760, (funptr_t) &dk2::CWorld::fun_510760, "CWorld::fun_510760" },  /* auto */
  { 0x005108C0, (funptr_t) &dk2::CWorld::updateLevelChecksum, "CWorld::updateLevelChecksum" },  /* auto */
  { 0x00510BE0, (funptr_t) &dk2::CWorld::fun_510BE0, "CWorld::fun_510BE0" },  /* auto */
  { 0x00510E20, (funptr_t) &dk2::CWorld::fun_510E20, "CWorld::fun_510E20" },  /* auto */
  { 0x00510E90, (funptr_t) &dk2::CWorld::fun_510E90, "CWorld::fun_510E90" },  /* auto */
  { 0x00510F90, (funptr_t) &dk2::CWorld::handleAction, "CWorld::handleAction" },  /* auto */
  { 0x00511020, (funptr_t) &dk2::CWorld::showLoadingScreen, "CWorld::showLoadingScreen" },  /* auto */
  { 0x00511150, (funptr_t) &dk2::CWorld::releaseSurface, "CWorld::releaseSurface" },  /* auto */
  { 0x00511180, (funptr_t) &dk2::CWorld::fun_511180, "CWorld::fun_511180" },  /* auto */
  { 0x005111E0, (funptr_t) &dk2::CWorld::fun_5111E0, "CWorld::fun_5111E0" },  /* auto */
  { 0x00511250, (funptr_t) &dk2::CWorld::fun_511250, "CWorld::fun_511250" },  /* auto */
  { 0x00511280, (funptr_t) &dk2::CWorld::sub_511280, "CWorld::sub_511280" },  /* auto */
  { 0x00511610, (funptr_t) &dk2::CWorld::fun_511610, "CWorld::fun_511610" },  /* auto */
  { 0x00511630, (funptr_t) &dk2::CWorld::fun_511630, "CWorld::fun_511630" },  /* auto */
  { 0x00511640, (funptr_t) &dk2::CWorld::fun_511640, "CWorld::fun_511640" },  /* auto */
  { 0x00511650, (funptr_t) &dk2::CWorld::fun_511650, "CWorld::fun_511650" },  /* auto */
  { 0x00511680, (funptr_t) &dk2::CWorld::clearChecksums, "CWorld::clearChecksums" },  /* auto */
  { 0x00511760, (funptr_t) &dk2::CWorld::destroyWorldEntries, "CWorld::destroyWorldEntries" },  /* auto */
  { 0x00515420, (funptr_t) &dk2::CWorld::fun_515420, "CWorld::fun_515420" },  /* auto */
  { 0x00515520, (funptr_t) &dk2::CWorld::fun_515520, "CWorld::fun_515520" },  /* auto */
  { 0x00515D50, (funptr_t) &dk2::CWorld::fun_515D50, "CWorld::fun_515D50" },  /* auto */
  { 0x00517480, (funptr_t) &dk2::CWorld::fun_517480, "CWorld::fun_517480" },  /* auto */
  { 0x00517490, (funptr_t) &dk2::CWorld::getGameTick, "CWorld::getGameTick" },  /* auto */
  { 0x005177B0, (funptr_t) &dk2::CWorld::fun_5177B0, "CWorld::fun_5177B0" },  /* auto */
  { 0x00518090, (funptr_t) &dk2::CWorld::getTriggerWhen, "CWorld::getTriggerWhen" },  /* auto */
  { 0x005180F0, (funptr_t) &dk2::CWorld::getTriggerAction, "CWorld::getTriggerAction" },  /* auto */
  { 0x0051A890, (funptr_t) &dk2::CWorld::saveToTbDiscFile, "CWorld::saveToTbDiscFile" },  /* auto */
  { 0x0051A9D0, (funptr_t) &dk2::CWorld::fun_51A9D0, "CWorld::fun_51A9D0" },  /* auto */
  { 0x0051DD40, (funptr_t) &dk2::CWorld::fun_51DD40, "CWorld::fun_51DD40" },  /* auto */
  { 0x0051DDC0, (funptr_t) &dk2::CWorld::fun_51DDC0, "CWorld::fun_51DDC0" },  /* auto */
  { 0x0051DE50, (funptr_t) &dk2::CWorld::fun_51DE50, "CWorld::fun_51DE50" },  /* auto */
  { 0x0051DF90, (funptr_t) &dk2::CWorld::fun_51DF90, "CWorld::fun_51DF90" },  /* auto */
  { 0x0051E0A0, (funptr_t) &dk2::CWorld::loadWorldData, "CWorld::loadWorldData" },  /* auto */
  { 0x0051E2C0, (funptr_t) &dk2::CWorld::initWorldEntries, "CWorld::initWorldEntries" },  /* auto */
  { 0x00504D60, (funptr_t) &dk2::CWorldEntry::constructor, "CWorldEntry::constructor" },  /* auto */
  { 0x00504D80, (funptr_t) &dk2::CWorldEntry::fun_504D80, "CWorldEntry::fun_504D80" },  /* auto */
  { 0x005052F0, (funptr_t) &dk2::CWorldShortEntry2::constructor, "CWorldShortEntry2::constructor" },  /* auto */
  { 0x00634090, (funptr_t) &dk2::CharImageReader::read, "CharImageReader::read" },  /* auto */
  { 0x006340B0, (funptr_t) &dk2::CharImageReader::next, "CharImageReader::next" },  /* auto */
  { 0x006340E0, (funptr_t) &dk2::CharImageReader::next2, "CharImageReader::next2" },  /* auto */
  { 0x00634130, (funptr_t) &dk2::CharImageReader::copy, "CharImageReader::copy" },  /* auto */
  { 0x00634020, (funptr_t) &dk2::CharImageWriter::constructor, "CharImageWriter::constructor" },  /* auto */
  { 0x00634040, (funptr_t) &dk2::CharImageWriter::write, "CharImageWriter::write" },  /* auto */
  { 0x005DCF00, (funptr_t) &dk2::ControlKeysUpdater::constructor, "ControlKeysUpdater::constructor" },  /* auto */
  { 0x005DCF40, (funptr_t) &dk2::ControlKeysUpdater::scalar_destructor, "ControlKeysUpdater::scalar_destructor" },  /* auto */
  { 0x005DCF60, (funptr_t) &dk2::ControlKeysUpdater::destructor, "ControlKeysUpdater::destructor" },  /* auto */
  { 0x005DCFE0, (funptr_t) &dk2::ControlKeysUpdater::registerCallback, "ControlKeysUpdater::registerCallback" },  /* auto */
  { 0x005DD010, (funptr_t) &dk2::ControlKeysUpdater::fun4, "ControlKeysUpdater::fun4" },  /* auto */
  { 0x005DD270, (funptr_t) &dk2::ControlKeysUpdater::call, "ControlKeysUpdater::call" },  /* auto */
  { 0x005DD310, (funptr_t) &dk2::ControlKeysUpdater::setDinputAndCall, "ControlKeysUpdater::setDinputAndCall" },  /* auto */
  { 0x005F8090, (funptr_t) &dk2::ControlSurf::constructor, "ControlSurf::constructor" },  /* auto */
  { 0x005F80D0, (funptr_t) &dk2::ControlSurf::scalar_destructor, "ControlSurf::scalar_destructor" },  /* auto */
  { 0x005F80F0, (funptr_t) &dk2::ControlSurf::destructor, "ControlSurf::destructor" },  /* auto */
  { 0x005F8100, (funptr_t) &dk2::ControlSurf::create, "ControlSurf::create" },  /* auto */
  { 0x005F8160, (funptr_t) &dk2::ControlSurf::release, "ControlSurf::release" },  /* auto */
  { 0x005DBE60, (funptr_t) &dk2::CursorDrawer::constructor, "CursorDrawer::constructor" },  /* auto */
  { 0x005DBF40, (funptr_t) &dk2::CursorDrawer::scalar_destructor, "CursorDrawer::scalar_destructor" },  /* auto */
  { 0x005DBF60, (funptr_t) &dk2::CursorDrawer::destructor, "CursorDrawer::destructor" },  /* auto */
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
  { 0x005B6E40, (funptr_t) &dk2::DiscFileBase::constructor_empty, "DiscFileBase::constructor_empty" },  /* auto */
  { 0x005B6E50, (funptr_t) &dk2::DiscFileBase::scalar_destructor, "DiscFileBase::scalar_destructor" },  /* auto */
  { 0x005B6E70, (funptr_t) &dk2::DiscFileBase::destructor, "DiscFileBase::destructor" },  /* auto */
  { 0x005B6EA0, (funptr_t) &dk2::DiscFileBase::readBytes, "DiscFileBase::readBytes" },  /* auto */
  { 0x005B6EC0, (funptr_t) &dk2::DiscFileBase::writeBytes, "DiscFileBase::writeBytes" },  /* auto */
  { 0x005B6EE0, (funptr_t) &dk2::DiscFileBase::seek, "DiscFileBase::seek" },  /* auto */
  { 0x005B6F00, (funptr_t) &dk2::DiscFileBase::getOffs, "DiscFileBase::getOffs" },  /* auto */
  { 0x005B6F10, (funptr_t) &dk2::DiscFileBase::getStream, "DiscFileBase::getStream" },  /* auto */
  { 0x005B6F50, (funptr_t) &dk2::DiscFileBase::mapToBuf, "DiscFileBase::mapToBuf" },  /* auto */
  { 0x005B6F70, (funptr_t) &dk2::DiscFileBase::flush, "DiscFileBase::flush" },  /* auto */
  { 0x005FDE70, (funptr_t) &dk2::DiscFileBase::getSize, "DiscFileBase::getSize" },  /* auto */
  { 0x005B6D70, (funptr_t) &dk2::DiscFileBaseEx::destructor, "DiscFileBaseEx::destructor" },  /* auto */
  { 0x005B6D80, (funptr_t) &dk2::DiscFileBaseEx::scalar_destructor, "DiscFileBaseEx::scalar_destructor" },  /* auto */
  { 0x005D6850, (funptr_t) &dk2::DiscFileBaseEx::openStream, "DiscFileBaseEx::openStream" },  /* auto */
  { 0x005D9990, (funptr_t) &dk2::DxActionQueue::constructor, "DxActionQueue::constructor" },  /* auto */
  { 0x005D9A90, (funptr_t) &dk2::DxActionQueue::getItemsCount, "DxActionQueue::getItemsCount" },  /* auto */
  { 0x005D9AA0, (funptr_t) &dk2::DxActionQueue::deleting_destructor, "DxActionQueue::deleting_destructor" },  /* auto */
  { 0x005D9AC0, (funptr_t) &dk2::DxActionQueue::destructor, "DxActionQueue::destructor" },  /* auto */
  { 0x005D9E20, (funptr_t) &dk2::DxActionQueue::fun24, "DxActionQueue::fun24" },  /* auto */
  { 0x005D9E30, (funptr_t) &dk2::DxActionQueue::addItem, "DxActionQueue::addItem" },  /* auto */
  { 0x005D9FE0, (funptr_t) &dk2::DxActionQueue::handleItem, "DxActionQueue::handleItem" },  /* auto */
  { 0x005DA0E0, (funptr_t) &dk2::DxActionQueue::lock, "DxActionQueue::lock" },  /* auto */
  { 0x005DA140, (funptr_t) &dk2::DxActionQueue::unlock, "DxActionQueue::unlock" },  /* auto */
  { 0x005B51D0, (funptr_t) &dk2::FPUControlWord::deleting_destructor, "FPUControlWord::deleting_destructor" },  /* auto */
  { 0x005B51F0, (funptr_t) &dk2::FPUControlWord::destructor, "FPUControlWord::destructor" },  /* auto */
  { 0x005D1130, (funptr_t) &dk2::FPUControlWord::apply, "FPUControlWord::apply" },  /* auto */
  { 0x005D1180, (funptr_t) &dk2::FPUControlWord::restore, "FPUControlWord::restore" },  /* auto */
  { 0x005D11A0, (funptr_t) &dk2::FPUControlWord::reset, "FPUControlWord::reset" },  /* auto */
  { 0x005D11E0, (funptr_t) &dk2::FPUControlWord::change, "FPUControlWord::change" },  /* auto */
  { 0x0055BFF0, (funptr_t) &dk2::FileStorageBase::destructor2, "FileStorageBase::destructor2" },  /* auto */
  { 0x005B9CD0, (funptr_t) &dk2::FileStorageBase::constructor, "FileStorageBase::constructor" },  /* auto */
  { 0x005B9CE0, (funptr_t) &dk2::FileStorageBase::deleting_destructor, "FileStorageBase::deleting_destructor" },  /* auto */
  { 0x005B9D00, (funptr_t) &dk2::FileStorageBase::copy_constructor, "FileStorageBase::copy_constructor" },  /* auto */
  { 0x005B9D30, (funptr_t) &dk2::FileStorageBase::destructor, "FileStorageBase::destructor" },  /* auto */
  { 0x005B9D40, (funptr_t) &dk2::FileStorageBase::releaseContent, "FileStorageBase::releaseContent" },  /* auto */
  { 0x005B9D60, (funptr_t) &dk2::FileStorageBase::fun_5B9D60, "FileStorageBase::fun_5B9D60" },  /* auto */
  { 0x005B9D90, (funptr_t) &dk2::FileStorageBase::formatFilePath, "FileStorageBase::formatFilePath" },  /* auto */
  { 0x005B9DD0, (funptr_t) &dk2::FileStorageBase::firstFile, "FileStorageBase::firstFile" },  /* auto */
  { 0x005B9E00, (funptr_t) &dk2::FileStorageBase::fun_5B9E00, "FileStorageBase::fun_5B9E00" },  /* auto */
  { 0x005B9E80, (funptr_t) &dk2::FileStorageBase::pushDirectory, "FileStorageBase::pushDirectory" },  /* auto */
  { 0x005B9EB0, (funptr_t) &dk2::FileStorageBase::fun_5B9EB0, "FileStorageBase::fun_5B9EB0" },  /* auto */
  { 0x005B9EE0, (funptr_t) &dk2::FileStorageBase::fun_5B9EE0, "FileStorageBase::fun_5B9EE0" },  /* auto */
  { 0x005B9F10, (funptr_t) &dk2::FileStorageBase::fun_5B9F10, "FileStorageBase::fun_5B9F10" },  /* auto */
  { 0x005B9F40, (funptr_t) &dk2::FileStorageBase::fun_5B9F40, "FileStorageBase::fun_5B9F40" },  /* auto */
  { 0x00597400, (funptr_t) &dk2::FloatObjThing::constructor, "FloatObjThing::constructor" },  /* auto */
  { 0x00597450, (funptr_t) &dk2::FloatObjThing::init_retBuf3x256, "FloatObjThing::init_retBuf3x256" },  /* auto */
  { 0x00597690, (funptr_t) &dk2::FloatObjThing::fun_597690, "FloatObjThing::fun_597690" },  /* auto */
  { 0x005976D0, (funptr_t) &dk2::FloatObjThing::init5, "FloatObjThing::init5" },  /* auto */
  { 0x00597760, (funptr_t) &dk2::FloatObjThing::switch_float_math, "FloatObjThing::switch_float_math" },  /* auto */
  { 0x0062C240, (funptr_t) &dk2::FontObj::constructor, "FontObj::constructor" },  /* auto */
  { 0x0062C290, (funptr_t) &dk2::FontObj::scalar_destructor, "FontObj::scalar_destructor" },  /* auto */
  { 0x0062C2B0, (funptr_t) &dk2::FontObj::destructor, "FontObj::destructor" },  /* auto */
  { 0x0062C2D0, (funptr_t) &dk2::FontObj::copy_constructor, "FontObj::copy_constructor" },  /* auto */
  { 0x0062C340, (funptr_t) &dk2::FontObj::assign_constructor, "FontObj::assign_constructor" },  /* auto */
  { 0x0062C3C0, (funptr_t) &dk2::FontObj::setFontMask, "FontObj::setFontMask" },  /* auto */
  { 0x0062C410, (funptr_t) &dk2::FontObj::checkFlag8, "FontObj::checkFlag8" },  /* auto */
  { 0x0062C440, (funptr_t) &dk2::FontObj::reset_f10, "FontObj::reset_f10" },  /* auto */
  { 0x0062C470, (funptr_t) &dk2::FontObj::setFont, "FontObj::setFont" },  /* auto */
  { 0x0062C4D0, (funptr_t) &dk2::FontObj::getFont_addRef, "FontObj::getFont_addRef" },  /* auto */
  { 0x0062C4F0, (funptr_t) &dk2::FontObj::probably_getFontType, "FontObj::probably_getFontType" },  /* auto */
  { 0x0062FAE0, (funptr_t) &dk2::FontObjWr::constructor, "FontObjWr::constructor" },  /* auto */
  { 0x0062FB20, (funptr_t) &dk2::FontObjWr::destructor, "FontObjWr::destructor" },  /* auto */
  { 0x0062FB30, (funptr_t) &dk2::FontObjWr::setRenderer, "FontObjWr::setRenderer" },  /* auto */
  { 0x0062FBB0, (funptr_t) &dk2::FontObjWr::renderChar, "FontObjWr::renderChar" },  /* auto */
  { 0x00521F40, (funptr_t) &dk2::GameAction::constructor, "GameAction::constructor" },  /* auto */
  { 0x00525EB0, (funptr_t) &dk2::GameActionArray::constructor, "GameActionArray::constructor" },  /* auto */
  { 0x00525F00, (funptr_t) &dk2::GameActionArray::add, "GameActionArray::add" },  /* auto */
  { 0x00525F80, (funptr_t) &dk2::GameActionArray::pop, "GameActionArray::pop" },  /* auto */
  { 0x005272C0, (funptr_t) &dk2::GameActionCtx::fun_5272C0, "GameActionCtx::fun_5272C0" },  /* auto */
  { 0x00527330, (funptr_t) &dk2::GameActionCtx::addAction, "GameActionCtx::addAction" },  /* auto */
  { 0x00505830, (funptr_t) &dk2::GameActionHandler::N42, "GameActionHandler::N42" },  /* auto */
  { 0x00505AD0, (funptr_t) &dk2::GameActionHandler::N45, "GameActionHandler::N45" },  /* auto */
  { 0x00505B30, (funptr_t) &dk2::GameActionHandler::N46, "GameActionHandler::N46" },  /* auto */
  { 0x00505BB0, (funptr_t) &dk2::GameActionHandler::N47, "GameActionHandler::N47" },  /* auto */
  { 0x00505C30, (funptr_t) &dk2::GameActionHandler::N48, "GameActionHandler::N48" },  /* auto */
  { 0x00505D70, (funptr_t) &dk2::GameActionHandler::N4B, "GameActionHandler::N4B" },  /* auto */
  { 0x00505E80, (funptr_t) &dk2::GameActionHandler::N4F, "GameActionHandler::N4F" },  /* auto */
  { 0x00505EC0, (funptr_t) &dk2::GameActionHandler::N50, "GameActionHandler::N50" },  /* auto */
  { 0x00505F00, (funptr_t) &dk2::GameActionHandler::N51, "GameActionHandler::N51" },  /* auto */
  { 0x00505F80, (funptr_t) &dk2::GameActionHandler::N52, "GameActionHandler::N52" },  /* auto */
  { 0x00506050, (funptr_t) &dk2::GameActionHandler::N53, "GameActionHandler::N53" },  /* auto */
  { 0x005119C0, (funptr_t) &dk2::GameActionHandler::handle138, "GameActionHandler::handle138" },  /* auto */
  { 0x005127B0, (funptr_t) &dk2::GameActionHandler::N2D, "GameActionHandler::N2D" },  /* auto */
  { 0x00512800, (funptr_t) &dk2::GameActionHandler::N2E, "GameActionHandler::N2E" },  /* auto */
  { 0x00512890, (funptr_t) &dk2::GameActionHandler::N30, "GameActionHandler::N30" },  /* auto */
  { 0x00512930, (funptr_t) &dk2::GameActionHandler::N01, "GameActionHandler::N01" },  /* auto */
  { 0x00512950, (funptr_t) &dk2::GameActionHandler::N86, "GameActionHandler::N86" },  /* auto */
  { 0x00512EE0, (funptr_t) &dk2::GameActionHandler::N2A, "GameActionHandler::N2A" },  /* auto */
  { 0x005132D0, (funptr_t) &dk2::GameActionHandler::N36, "GameActionHandler::N36" },  /* auto */
  { 0x005133A0, (funptr_t) &dk2::GameActionHandler::N87, "GameActionHandler::N87" },  /* auto */
  { 0x00513760, (funptr_t) &dk2::GameActionHandler::N58, "GameActionHandler::N58" },  /* auto */
  { 0x005137E0, (funptr_t) &dk2::GameActionHandler::N5C, "GameActionHandler::N5C" },  /* auto */
  { 0x00513850, (funptr_t) &dk2::GameActionHandler::N64, "GameActionHandler::N64" },  /* auto */
  { 0x00513860, (funptr_t) &dk2::GameActionHandler::N65, "GameActionHandler::N65" },  /* auto */
  { 0x00513CE0, (funptr_t) &dk2::GameActionHandler::N69, "GameActionHandler::N69" },  /* auto */
  { 0x00513EE0, (funptr_t) &dk2::GameActionHandler::N76, "GameActionHandler::N76" },  /* auto */
  { 0x00513F60, (funptr_t) &dk2::GameActionHandler::N7A, "GameActionHandler::N7A" },  /* auto */
  { 0x00513FF0, (funptr_t) &dk2::GameActionHandler::N7B, "GameActionHandler::N7B" },  /* auto */
  { 0x00514100, (funptr_t) &dk2::GameActionHandler::N77, "GameActionHandler::N77" },  /* auto */
  { 0x005141B0, (funptr_t) &dk2::GameActionHandler::N78, "GameActionHandler::N78" },  /* auto */
  { 0x00514240, (funptr_t) &dk2::GameActionHandler::N79, "GameActionHandler::N79" },  /* auto */
  { 0x00514320, (funptr_t) &dk2::GameActionHandler::N82, "GameActionHandler::N82" },  /* auto */
  { 0x00514470, (funptr_t) &dk2::GameActionHandler::N89, "GameActionHandler::N89" },  /* auto */
  { 0x00514830, (funptr_t) &dk2::GameActionHandler::N1A, "GameActionHandler::N1A" },  /* auto */
  { 0x005163C0, (funptr_t) &dk2::GameActionHandler::N1B, "GameActionHandler::N1B" },  /* auto */
  { 0x00516A20, (funptr_t) &dk2::GameActionHandler::N25, "GameActionHandler::N25" },  /* auto */
  { 0x005D9A20, (funptr_t) &dk2::LockBase::destructor, "LockBase::destructor" },  /* auto */
  { 0x005D9A70, (funptr_t) &dk2::LockBase::deleting_destructor, "LockBase::deleting_destructor" },  /* auto */
  { 0x0041C580, (funptr_t) &dk2::Mat3x3f::sub_41C580, "Mat3x3f::sub_41C580" },  /* auto */
  { 0x0042F480, (funptr_t) &dk2::Mat3x3f::constructor, "Mat3x3f::constructor" },  /* auto */
  { 0x00582140, (funptr_t) &dk2::Mat3x3f::copy_constructor, "Mat3x3f::copy_constructor" },  /* auto */
  { 0x00594CB0, (funptr_t) &dk2::Mat3x3f::sub_594CB0, "Mat3x3f::sub_594CB0" },  /* auto */
  { 0x00594DB0, (funptr_t) &dk2::Mat3x3f::sub_594DB0, "Mat3x3f::sub_594DB0" },  /* auto */
  { 0x00594E10, (funptr_t) &dk2::Mat3x3f::sub_594E10, "Mat3x3f::sub_594E10" },  /* auto */
  { 0x00594E70, (funptr_t) &dk2::Mat3x3f::fun_594E70, "Mat3x3f::fun_594E70" },  /* auto */
  { 0x00594ED0, (funptr_t) &dk2::Mat3x3f::multiply, "Mat3x3f::multiply" },  /* auto */
  { 0x00594F30, (funptr_t) &dk2::Mat3x3f::sub_594F30, "Mat3x3f::sub_594F30" },  /* auto */
  { 0x00599260, (funptr_t) &dk2::Mat3x3f::sub_599260, "Mat3x3f::sub_599260" },  /* auto */
  { 0x005DD8C0, (funptr_t) &dk2::MouseRgbDxAction::applyToState, "MouseRgbDxAction::applyToState" },  /* auto */
  { 0x005DDCB0, (funptr_t) &dk2::MouseRgbDxActionList::scalar_destructor, "MouseRgbDxActionList::scalar_destructor" },  /* auto */
  { 0x005DDCD0, (funptr_t) &dk2::MouseRgbDxActionList::destructor, "MouseRgbDxActionList::destructor" },  /* auto */
  { 0x005DDF30, (funptr_t) &dk2::MouseRgbDxActionList::getOrCreateUnhandled, "MouseRgbDxActionList::getOrCreateUnhandled" },  /* auto */
  { 0x005DD8B0, (funptr_t) &dk2::MouseXyzDxAction::applyToState, "MouseXyzDxAction::applyToState" },  /* auto */
  { 0x005DDBE0, (funptr_t) &dk2::MouseXyzDxActionList::destructor, "MouseXyzDxActionList::destructor" },  /* auto */
  { 0x005DDC90, (funptr_t) &dk2::MouseXyzDxActionList::scalar_destructor, "MouseXyzDxActionList::scalar_destructor" },  /* auto */
  { 0x005DDE50, (funptr_t) &dk2::MouseXyzDxActionList::getOrCreateUnhandled, "MouseXyzDxActionList::getOrCreateUnhandled" },  /* auto */
  { 0x005A7CE0, (funptr_t) &dk2::MovieCtx::sub_5A7CE0, "MovieCtx::sub_5A7CE0" },  /* auto */
  { 0x005A7EA0, (funptr_t) &dk2::MovieCtx::selectSmth, "MovieCtx::selectSmth" },  /* auto */
  { 0x005A89E0, (funptr_t) &dk2::MovieCtx::cleanup, "MovieCtx::cleanup" },  /* auto */
  { 0x005A8E10, (funptr_t) &dk2::MovieCtx::sub_5A8E10, "MovieCtx::sub_5A8E10" },  /* auto */
  { 0x005A8F10, (funptr_t) &dk2::MovieCtx::sub_5A8F10, "MovieCtx::sub_5A8F10" },  /* auto */
  { 0x005A9050, (funptr_t) &dk2::MovieCtx::sub_5A9050, "MovieCtx::sub_5A9050" },  /* auto */
  { 0x005A95E0, (funptr_t) &dk2::MovieCtx::sub_5A95E0, "MovieCtx::sub_5A95E0" },  /* auto */
  { 0x005A9620, (funptr_t) &dk2::MovieCtx::sub_5A9620, "MovieCtx::sub_5A9620" },  /* auto */
  { 0x005A9B20, (funptr_t) &dk2::MovieCtx::sub_5A9B20, "MovieCtx::sub_5A9B20" },  /* auto */
  { 0x005A9D50, (funptr_t) &dk2::MovieCtx::collectSurfSize, "MovieCtx::collectSurfSize" },  /* auto */
  { 0x005AA0B0, (funptr_t) &dk2::MovieCtx::sub_5AA0B0, "MovieCtx::sub_5AA0B0" },  /* auto */
  { 0x005AA160, (funptr_t) &dk2::MovieCtx::sub_5AA160, "MovieCtx::sub_5AA160" },  /* auto */
  { 0x005AA2B0, (funptr_t) &dk2::MovieCtx::sub_5AA2B0, "MovieCtx::sub_5AA2B0" },  /* auto */
  { 0x005AABF0, (funptr_t) &dk2::MovieCtx::sub_5AABF0, "MovieCtx::sub_5AABF0" },  /* auto */
  { 0x005AB430, (funptr_t) &dk2::MovieCtx::createSurfaces, "MovieCtx::createSurfaces" },  /* auto */
  { 0x005AB9F0, (funptr_t) &dk2::MovieCtx::sub_5AB9F0, "MovieCtx::sub_5AB9F0" },  /* auto */
  { 0x005AC180, (funptr_t) &dk2::MovieCtx::sub_5AC180, "MovieCtx::sub_5AC180" },  /* auto */
  { 0x005AC210, (funptr_t) &dk2::MovieCtx::createThread, "MovieCtx::createThread" },  /* auto */
  { 0x005AC250, (funptr_t) &dk2::MovieCtx::sub_5AC250, "MovieCtx::sub_5AC250" },  /* auto */
  { 0x005AC2A0, (funptr_t) &dk2::MovieCtx::initDirectSound, "MovieCtx::initDirectSound" },  /* auto */
  { 0x005AC3E0, (funptr_t) &dk2::MovieCtx::sub_5AC3E0, "MovieCtx::sub_5AC3E0" },  /* auto */
  { 0x005AC450, (funptr_t) &dk2::MovieCtx::initSound, "MovieCtx::initSound" },  /* auto */
  { 0x005AC640, (funptr_t) &dk2::MovieCtx::sub_5AC640, "MovieCtx::sub_5AC640" },  /* auto */
  { 0x005A8B20, (funptr_t) &dk2::MovieRenderer::sub_5A8B20, "MovieRenderer::sub_5A8B20" },  /* auto */
  { 0x005FF9B0, (funptr_t) &dk2::My10FBFileStream::constructor, "My10FBFileStream::constructor" },  /* auto */
  { 0x005FFA10, (funptr_t) &dk2::My10FBFileStream::openFile, "My10FBFileStream::openFile" },  /* auto */
  { 0x005FFB10, (funptr_t) &dk2::My10FBFileStream::init, "My10FBFileStream::init" },  /* auto */
  { 0x005CA330, (funptr_t) &dk2::My16BitTexture::fun_5CA330, "My16BitTexture::fun_5CA330" },  /* auto */
  { 0x005CDF40, (funptr_t) &dk2::My16BitTexture::f18_5CDF40, "My16BitTexture::f18_5CDF40" },  /* auto */
  { 0x005CEBB0, (funptr_t) &dk2::My16BitTexture::f2C_5CEBB0, "My16BitTexture::f2C_5CEBB0" },  /* auto */
  { 0x005CECB0, (funptr_t) &dk2::My16BitTexture::fun_5CECB0, "My16BitTexture::fun_5CECB0" },  /* auto */
  { 0x005C09A0, (funptr_t) &dk2::My24BitTexture::fun_5C09A0, "My24BitTexture::fun_5C09A0" },  /* auto */
  { 0x005C1460, (funptr_t) &dk2::My24BitTexture::f14_5C1460, "My24BitTexture::f14_5C1460" },  /* auto */
  { 0x005C2FA0, (funptr_t) &dk2::My24BitTexture::f18_5C2FA0, "My24BitTexture::f18_5C2FA0" },  /* auto */
  { 0x005C4D90, (funptr_t) &dk2::My32BitTexture::fun_5C4D90, "My32BitTexture::fun_5C4D90" },  /* auto */
  { 0x005C57F0, (funptr_t) &dk2::My32BitTexture::f14_5C57F0, "My32BitTexture::f14_5C57F0" },  /* auto */
  { 0x005C7AB0, (funptr_t) &dk2::My32BitTexture::f18_5C7AB0, "My32BitTexture::f18_5C7AB0" },  /* auto */
  { 0x005BC950, (funptr_t) &dk2::My8BitTexture::f38_5BC950, "My8BitTexture::f38_5BC950" },  /* auto */
  { 0x005BC9E0, (funptr_t) &dk2::My8BitTexture::fun_5BC9E0, "My8BitTexture::fun_5BC9E0" },  /* auto */
  { 0x005BD260, (funptr_t) &dk2::My8BitTexture::fun_5BD260, "My8BitTexture::fun_5BD260" },  /* auto */
  { 0x005BD400, (funptr_t) &dk2::My8BitTexture::fun_5BD400, "My8BitTexture::fun_5BD400" },  /* auto */
  { 0x005BDA00, (funptr_t) &dk2::My8BitTexture::fun_5BDA00, "My8BitTexture::fun_5BDA00" },  /* auto */
  { 0x005BDBB0, (funptr_t) &dk2::My8BitTexture::fun_5BDBB0, "My8BitTexture::fun_5BDBB0" },  /* auto */
  { 0x005BDD50, (funptr_t) &dk2::My8BitTexture::f14_5BDD50, "My8BitTexture::f14_5BDD50" },  /* auto */
  { 0x005BF820, (funptr_t) &dk2::My8BitTexture::f18_5BF820, "My8BitTexture::f18_5BF820" },  /* auto */
  { 0x005C01D0, (funptr_t) &dk2::My8BitTexture::f2C_5C01D0, "My8BitTexture::f2C_5C01D0" },  /* auto */
  { 0x005C0270, (funptr_t) &dk2::My8BitTexture::fun_5C0270, "My8BitTexture::fun_5C0270" },  /* auto */
  { 0x005C0440, (funptr_t) &dk2::My8BitTexture::fun_5C0440, "My8BitTexture::fun_5C0440" },  /* auto */
  { 0x005C05C0, (funptr_t) &dk2::My8BitTexture::fun_5C05C0, "My8BitTexture::fun_5C05C0" },  /* auto */
  { 0x005FF5D0, (funptr_t) &dk2::MyALList_WadFileObj::addFile, "MyALList_WadFileObj::addFile" },  /* auto */
  { 0x00486DF0, (funptr_t) &dk2::MyAnger::constructor, "MyAnger::constructor" },  /* auto */
  { 0x00486E00, (funptr_t) &dk2::MyAnger::fun_486E00, "MyAnger::fun_486E00" },  /* auto */
  { 0x00487030, (funptr_t) &dk2::MyAnger::fun_487030, "MyAnger::fun_487030" },  /* auto */
  { 0x00487210, (funptr_t) &dk2::MyAnger::dump, "MyAnger::dump" },  /* auto */
  { 0x005FF9E0, (funptr_t) &dk2::MyArchiveFileStream::getOffs, "MyArchiveFileStream::getOffs" },  /* auto */
  { 0x005FF9F0, (funptr_t) &dk2::MyArchiveFileStream::closeFile, "MyArchiveFileStream::closeFile" },  /* auto */
  { 0x005FFB40, (funptr_t) &dk2::MyArchiveFileStream::readBytes, "MyArchiveFileStream::readBytes" },  /* auto */
  { 0x005FFB90, (funptr_t) &dk2::MyArchiveFileStream::seek, "MyArchiveFileStream::seek" },  /* auto */
  { 0x00505610, (funptr_t) &dk2::MyBlueprintList::constructor, "MyBlueprintList::constructor" },  /* auto */
  { 0x00505630, (funptr_t) &dk2::MyBlueprintList::open, "MyBlueprintList::open" },  /* auto */
  { 0x00505670, (funptr_t) &dk2::MyBlueprintList::clsoe, "MyBlueprintList::clsoe" },  /* auto */
  { 0x00505680, (funptr_t) &dk2::MyBlueprintList::fun_505680, "MyBlueprintList::fun_505680" },  /* auto */
  { 0x00505750, (funptr_t) &dk2::MyBlueprintList::fun_505750, "MyBlueprintList::fun_505750" },  /* auto */
  { 0x00505780, (funptr_t) &dk2::MyBlueprintList::dump, "MyBlueprintList::dump" },  /* auto */
  { 0x00590BF0, (funptr_t) &dk2::MyCESurfHandle::constructor, "MyCESurfHandle::constructor" },  /* auto */
  { 0x00590C30, (funptr_t) &dk2::MyCESurfHandle::fun_590C30, "MyCESurfHandle::fun_590C30" },  /* auto */
  { 0x00590DA0, (funptr_t) &dk2::MyCESurfHandle::createReduction, "MyCESurfHandle::createReduction" },  /* auto */
  { 0x00590EC0, (funptr_t) &dk2::MyCESurfHandle::resolveSurface, "MyCESurfHandle::resolveSurface" },  /* auto */
  { 0x005911E0, (funptr_t) &dk2::MyCESurfHandle::loadPrescaled, "MyCESurfHandle::loadPrescaled" },  /* auto */
  { 0x00591CF0, (funptr_t) &dk2::MyCESurfHandle::setSurfaceHolder, "MyCESurfHandle::setSurfaceHolder" },  /* auto */
  { 0x00590260, (funptr_t) &dk2::MyCEngineSurfDesc::fun_590260, "MyCEngineSurfDesc::fun_590260" },  /* auto */
  { 0x00590360, (funptr_t) &dk2::MyCEngineSurfDesc::constructor, "MyCEngineSurfDesc::constructor" },  /* auto */
  { 0x0062F1F0, (funptr_t) &dk2::MyCR0::chars_doCalcAabbInMiddle, "MyCR0::chars_doCalcAabbInMiddle" },  /* auto */
  { 0x0062F230, (funptr_t) &dk2::MyCR0::chars_doCalcAabbAndRenderInMiddle, "MyCR0::chars_doCalcAabbAndRenderInMiddle" },  /* auto */
  { 0x0062F2A0, (funptr_t) &dk2::MyCR1::chars_doCalcAabbInMiddle, "MyCR1::chars_doCalcAabbInMiddle" },  /* auto */
  { 0x0062F310, (funptr_t) &dk2::MyCR1::chars_doCalcAabbAndRenderInMiddle, "MyCR1::chars_doCalcAabbAndRenderInMiddle" },  /* auto */
  { 0x0062F430, (funptr_t) &dk2::MyCR2::chars_doCalcAabbAndRenderInMiddle, "MyCR2::chars_doCalcAabbAndRenderInMiddle" },  /* auto */
  { 0x0062EEF0, (funptr_t) &dk2::MyCRBase::constructor, "MyCRBase::constructor" },  /* auto */
  { 0x0062EF00, (funptr_t) &dk2::MyCRBase::scalar_destructor, "MyCRBase::scalar_destructor" },  /* auto */
  { 0x0062EF20, (funptr_t) &dk2::MyCRBase::destructor, "MyCRBase::destructor" },  /* auto */
  { 0x0062F3B0, (funptr_t) &dk2::MyCRBase::chars_doCalcAabbInMiddle, "MyCRBase::chars_doCalcAabbInMiddle" },  /* auto */
  { 0x005FDC60, (funptr_t) &dk2::MyCachedDataStream::constructor, "MyCachedDataStream::constructor" },  /* auto */
  { 0x005FDC90, (funptr_t) &dk2::MyCachedDataStream::init, "MyCachedDataStream::init" },  /* auto */
  { 0x005FDCE0, (funptr_t) &dk2::MyCachedDataStream::delBuf, "MyCachedDataStream::delBuf" },  /* auto */
  { 0x005FDCF0, (funptr_t) &dk2::MyCachedDataStream::readBytes, "MyCachedDataStream::readBytes" },  /* auto */
  { 0x005FDD70, (funptr_t) &dk2::MyCachedDataStream::seek, "MyCachedDataStream::seek" },  /* auto */
  { 0x005FDDC0, (funptr_t) &dk2::MyCachedDataStream::writeBytes, "MyCachedDataStream::writeBytes" },  /* auto */
  { 0x005FDE60, (funptr_t) &dk2::MyCachedDataStream::getOffs, "MyCachedDataStream::getOffs" },  /* auto */
  { 0x005FDE80, (funptr_t) &dk2::MyCachedDataStream::wrapStream, "MyCachedDataStream::wrapStream" },  /* auto */
  { 0x005FDEA0, (funptr_t) &dk2::MyCachedDataStream::readWrapped, "MyCachedDataStream::readWrapped" },  /* auto */
  { 0x005FDEC0, (funptr_t) &dk2::MyCachedDataStream::readCache, "MyCachedDataStream::readCache" },  /* auto */
  { 0x005FDF20, (funptr_t) &dk2::MyCachedDataStream::seekAndReadBytes_rememberLast, "MyCachedDataStream::seekAndReadBytes_rememberLast" },  /* auto */
  { 0x005FDF50, (funptr_t) &dk2::MyCachedDataStream::seekAndReadBytes, "MyCachedDataStream::seekAndReadBytes" },  /* auto */
  { 0x005FF960, (funptr_t) &dk2::MyCachedOffsStream::seekCachedOffs, "MyCachedOffsStream::seekCachedOffs" },  /* auto */
  { 0x006030F0, (funptr_t) &dk2::MyCachedOffsStream::constructor, "MyCachedOffsStream::constructor" },  /* auto */
  { 0x00603120, (funptr_t) &dk2::MyCachedOffsStream::readBytes_redirect, "MyCachedOffsStream::readBytes_redirect" },  /* auto */
  { 0x00603150, (funptr_t) &dk2::MyCachedOffsStream::writeBytes_redirect, "MyCachedOffsStream::writeBytes_redirect" },  /* auto */
  { 0x00603180, (funptr_t) &dk2::MyCachedOffsStream::seek_redirect, "MyCachedOffsStream::seek_redirect" },  /* auto */
  { 0x006031A0, (funptr_t) &dk2::MyCachedOffsStream::getSize_redirect, "MyCachedOffsStream::getSize_redirect" },  /* auto */
  { 0x005FFAF0, (funptr_t) &dk2::MyCachedStream::scalar_destructor, "MyCachedStream::scalar_destructor" },  /* auto */
  { 0x005FFCA0, (funptr_t) &dk2::MyCachedStream::destructor, "MyCachedStream::destructor" },  /* auto */
  { 0x005BB420, (funptr_t) &dk2::MyCallback::scalar_destructor, "MyCallback::scalar_destructor" },  /* auto */
  { 0x005BB460, (funptr_t) &dk2::MyCb6723D0::scalar_destructor, "MyCb6723D0::scalar_destructor" },  /* auto */
  { 0x005DBC30, (funptr_t) &dk2::MyCb6723D0::destructor, "MyCb6723D0::destructor" },  /* auto */
  { 0x005DBC90, (funptr_t) &dk2::MyCb6723D0::registerCb, "MyCb6723D0::registerCb" },  /* auto */
  { 0x005DBCD0, (funptr_t) &dk2::MyCb6723D0::call, "MyCb6723D0::call" },  /* auto */
  { 0x005BB440, (funptr_t) &dk2::MyCbHandle::scalar_destructor, "MyCbHandle::scalar_destructor" },  /* auto */
  { 0x005DBD60, (funptr_t) &dk2::MyCbHandle::destructor, "MyCbHandle::destructor" },  /* auto */
  { 0x005DBD70, (funptr_t) &dk2::MyCbHandle::add_MyCallback, "MyCbHandle::add_MyCallback" },  /* auto */
  { 0x005DBDC0, (funptr_t) &dk2::MyCbHandle::release_MyCallback, "MyCbHandle::release_MyCallback" },  /* auto */
  { 0x005BBCF0, (funptr_t) &dk2::MyCollectDxAction::scalar_destructor, "MyCollectDxAction::scalar_destructor" },  /* auto */
  { 0x005BBD10, (funptr_t) &dk2::MyCollectDxAction::destructor, "MyCollectDxAction::destructor" },  /* auto */
  { 0x005DCAE0, (funptr_t) &dk2::MyCollectDxAction::fun4, "MyCollectDxAction::fun4" },  /* auto */
  { 0x005DCB20, (funptr_t) &dk2::MyCollectDxAction::fun2, "MyCollectDxAction::fun2" },  /* auto */
  { 0x005BB660, (funptr_t) &dk2::MyComEx::fun3, "MyComEx::fun3" },  /* auto */
  { 0x005BB730, (funptr_t) &dk2::MyComEx::fun4, "MyComEx::fun4" },  /* auto */
  { 0x005BB760, (funptr_t) &dk2::MyComEx::fun2, "MyComEx::fun2" },  /* auto */
  { 0x005BB790, (funptr_t) &dk2::MyComEx::deleting_destructor, "MyComEx::deleting_destructor" },  /* auto */
  { 0x005BB7B0, (funptr_t) &dk2::MyComEx::destructor, "MyComEx::destructor" },  /* auto */
  { 0x005DA2D0, (funptr_t) &dk2::MyComEx::setChild, "MyComEx::setChild" },  /* auto */
  { 0x00554C70, (funptr_t) &dk2::MyCommands::constructor, "MyCommands::constructor" },  /* auto */
  { 0x00554D60, (funptr_t) &dk2::MyCommands::initConsoleCommand, "MyCommands::initConsoleCommand" },  /* auto */
  { 0x00554D80, (funptr_t) &dk2::MyCommands::initConsoleCommandEx, "MyCommands::initConsoleCommandEx" },  /* auto */
  { 0x005550D0, (funptr_t) &dk2::MyCommands::clearList, "MyCommands::clearList" },  /* auto */
  { 0x00555560, (funptr_t) &dk2::MyCommands::addHandler, "MyCommands::addHandler" },  /* auto */
  { 0x004F82E0, (funptr_t) &dk2::MyComputerPlayer::constructor, "MyComputerPlayer::constructor" },  /* auto */
  { 0x004F8330, (funptr_t) &dk2::MyComputerPlayer::init, "MyComputerPlayer::init" },  /* auto */
  { 0x004F8350, (funptr_t) &dk2::MyComputerPlayer::close, "MyComputerPlayer::close" },  /* auto */
  { 0x004F8710, (funptr_t) &dk2::MyComputerPlayer::fun_4F8710, "MyComputerPlayer::fun_4F8710" },  /* auto */
  { 0x004F93B0, (funptr_t) &dk2::MyComputerPlayer::fun_4F93B0, "MyComputerPlayer::fun_4F93B0" },  /* auto */
  { 0x004F9520, (funptr_t) &dk2::MyComputerPlayer::fun_4F9520, "MyComputerPlayer::fun_4F9520" },  /* auto */
  { 0x004F9710, (funptr_t) &dk2::MyComputerPlayer::fun_4F9710, "MyComputerPlayer::fun_4F9710" },  /* auto */
  { 0x004F9B90, (funptr_t) &dk2::MyComputerPlayer::fun_4F9B90, "MyComputerPlayer::fun_4F9B90" },  /* auto */
  { 0x004FA000, (funptr_t) &dk2::MyComputerPlayer::fun_4FA000, "MyComputerPlayer::fun_4FA000" },  /* auto */
  { 0x004FA400, (funptr_t) &dk2::MyComputerPlayer::fun_4FA400, "MyComputerPlayer::fun_4FA400" },  /* auto */
  { 0x004FA7C0, (funptr_t) &dk2::MyComputerPlayer::fun_4FA7C0, "MyComputerPlayer::fun_4FA7C0" },  /* auto */
  { 0x004FA8D0, (funptr_t) &dk2::MyComputerPlayer::fun_4FA8D0, "MyComputerPlayer::fun_4FA8D0" },  /* auto */
  { 0x004FAB10, (funptr_t) &dk2::MyComputerPlayer::fun_4FAB10, "MyComputerPlayer::fun_4FAB10" },  /* auto */
  { 0x004FAEF0, (funptr_t) &dk2::MyComputerPlayer::fun_4FAEF0, "MyComputerPlayer::fun_4FAEF0" },  /* auto */
  { 0x004FBE00, (funptr_t) &dk2::MyComputerPlayer::fun_4FBE00, "MyComputerPlayer::fun_4FBE00" },  /* auto */
  { 0x004FC3B0, (funptr_t) &dk2::MyComputerPlayer::fun_4FC3B0, "MyComputerPlayer::fun_4FC3B0" },  /* auto */
  { 0x004FC690, (funptr_t) &dk2::MyComputerPlayer::fun_4FC690, "MyComputerPlayer::fun_4FC690" },  /* auto */
  { 0x004FCE70, (funptr_t) &dk2::MyComputerPlayer::fun_4FCE70, "MyComputerPlayer::fun_4FCE70" },  /* auto */
  { 0x004FD030, (funptr_t) &dk2::MyComputerPlayer::fun_4FD030, "MyComputerPlayer::fun_4FD030" },  /* auto */
  { 0x004FD2B0, (funptr_t) &dk2::MyComputerPlayer::fun_4FD2B0, "MyComputerPlayer::fun_4FD2B0" },  /* auto */
  { 0x004FD590, (funptr_t) &dk2::MyComputerPlayer::fun_4FD590, "MyComputerPlayer::fun_4FD590" },  /* auto */
  { 0x004FD660, (funptr_t) &dk2::MyComputerPlayer::fun_4FD660, "MyComputerPlayer::fun_4FD660" },  /* auto */
  { 0x004FD750, (funptr_t) &dk2::MyComputerPlayer::fun_4FD750, "MyComputerPlayer::fun_4FD750" },  /* auto */
  { 0x004FDB90, (funptr_t) &dk2::MyComputerPlayer::fun_4FDB90, "MyComputerPlayer::fun_4FDB90" },  /* auto */
  { 0x004FDC50, (funptr_t) &dk2::MyComputerPlayer::fun_4FDC50, "MyComputerPlayer::fun_4FDC50" },  /* auto */
  { 0x004FE0B0, (funptr_t) &dk2::MyComputerPlayer::fun_4FE0B0, "MyComputerPlayer::fun_4FE0B0" },  /* auto */
  { 0x004FE9C0, (funptr_t) &dk2::MyComputerPlayer::fun_4FE9C0, "MyComputerPlayer::fun_4FE9C0" },  /* auto */
  { 0x004FECE0, (funptr_t) &dk2::MyComputerPlayer::fun_4FECE0, "MyComputerPlayer::fun_4FECE0" },  /* auto */
  { 0x004FEFC0, (funptr_t) &dk2::MyComputerPlayer::fun_4FEFC0, "MyComputerPlayer::fun_4FEFC0" },  /* auto */
  { 0x004FF260, (funptr_t) &dk2::MyComputerPlayer::fun_4FF260, "MyComputerPlayer::fun_4FF260" },  /* auto */
  { 0x004FF5C0, (funptr_t) &dk2::MyComputerPlayer::fun_4FF5C0, "MyComputerPlayer::fun_4FF5C0" },  /* auto */
  { 0x005003A0, (funptr_t) &dk2::MyComputerPlayer::fun_5003A0, "MyComputerPlayer::fun_5003A0" },  /* auto */
  { 0x00500520, (funptr_t) &dk2::MyComputerPlayer::fun_500520, "MyComputerPlayer::fun_500520" },  /* auto */
  { 0x005006D0, (funptr_t) &dk2::MyComputerPlayer::fun_5006D0, "MyComputerPlayer::fun_5006D0" },  /* auto */
  { 0x00500C20, (funptr_t) &dk2::MyComputerPlayer::fun_500C20, "MyComputerPlayer::fun_500C20" },  /* auto */
  { 0x005012A0, (funptr_t) &dk2::MyComputerPlayer::fun_5012A0, "MyComputerPlayer::fun_5012A0" },  /* auto */
  { 0x00501C10, (funptr_t) &dk2::MyComputerPlayer::fun_501C10, "MyComputerPlayer::fun_501C10" },  /* auto */
  { 0x00502230, (funptr_t) &dk2::MyComputerPlayer::fun_502230, "MyComputerPlayer::fun_502230" },  /* auto */
  { 0x00502F00, (funptr_t) &dk2::MyComputerPlayer::fun_502F00, "MyComputerPlayer::fun_502F00" },  /* auto */
  { 0x00503690, (funptr_t) &dk2::MyComputerPlayer::fun_503690, "MyComputerPlayer::fun_503690" },  /* auto */
  { 0x005039F0, (funptr_t) &dk2::MyComputerPlayer::calcChecksum, "MyComputerPlayer::calcChecksum" },  /* auto */
  { 0x00503F50, (funptr_t) &dk2::MyComputerPlayer::dump, "MyComputerPlayer::dump" },  /* auto */
  { 0x005FF710, (funptr_t) &dk2::MyConcurrentStream::constructor, "MyConcurrentStream::constructor" },  /* auto */
  { 0x005FF730, (funptr_t) &dk2::MyConcurrentStream::readBytes, "MyConcurrentStream::readBytes" },  /* auto */
  { 0x005FF7C0, (funptr_t) &dk2::MyConcurrentStream::writeBytes, "MyConcurrentStream::writeBytes" },  /* auto */
  { 0x005FF850, (funptr_t) &dk2::MyConcurrentStream::seek, "MyConcurrentStream::seek" },  /* auto */
  { 0x005FF8E0, (funptr_t) &dk2::MyConcurrentStream::getSize, "MyConcurrentStream::getSize" },  /* auto */
  { 0x005FF990, (funptr_t) &dk2::MyConcurrentStream::wrapStream, "MyConcurrentStream::wrapStream" },  /* auto */
  { 0x004B59D0, (funptr_t) &dk2::MyCreatureCollection::constructor, "MyCreatureCollection::constructor" },  /* auto */
  { 0x004B5A00, (funptr_t) &dk2::MyCreatureCollection::destructor, "MyCreatureCollection::destructor" },  /* auto */
  { 0x004B5A10, (funptr_t) &dk2::MyCreatureCollection::createCreatures, "MyCreatureCollection::createCreatures" },  /* auto */
  { 0x004B5FD0, (funptr_t) &dk2::MyCreatureCollection::clear, "MyCreatureCollection::clear" },  /* auto */
  { 0x004B6040, (funptr_t) &dk2::MyCreatureCollection::saveToTbDiscFile, "MyCreatureCollection::saveToTbDiscFile" },  /* auto */
  { 0x004B65E0, (funptr_t) &dk2::MyCreatureCollection::fun_4B65E0, "MyCreatureCollection::fun_4B65E0" },  /* auto */
  { 0x004B75C0, (funptr_t) &dk2::MyCreatureCollection::fun_4B75C0, "MyCreatureCollection::fun_4B75C0" },  /* auto */
  { 0x004B7690, (funptr_t) &dk2::MyCreatureCollection::fun_4B7690, "MyCreatureCollection::fun_4B7690" },  /* auto */
  { 0x004B78D0, (funptr_t) &dk2::MyCreatureCollection::createCreature2, "MyCreatureCollection::createCreature2" },  /* auto */
  { 0x004B7900, (funptr_t) &dk2::MyCreatureCollection::createCreature, "MyCreatureCollection::createCreature" },  /* auto */
  { 0x004B7A90, (funptr_t) &dk2::MyCreatureCollection::createObject, "MyCreatureCollection::createObject" },  /* auto */
  { 0x004B7B10, (funptr_t) &dk2::MyCreatureCollection::removeObject, "MyCreatureCollection::removeObject" },  /* auto */
  { 0x004B7B50, (funptr_t) &dk2::MyCreatureCollection::createDoor, "MyCreatureCollection::createDoor" },  /* auto */
  { 0x004B7C10, (funptr_t) &dk2::MyCreatureCollection::createTrap, "MyCreatureCollection::createTrap" },  /* auto */
  { 0x004B7CD0, (funptr_t) &dk2::MyCreatureCollection::fun_4B7CD0, "MyCreatureCollection::fun_4B7CD0" },  /* auto */
  { 0x004B7F20, (funptr_t) &dk2::MyCreatureCollection::createActionPoint, "MyCreatureCollection::createActionPoint" },  /* auto */
  { 0x004B7FC0, (funptr_t) &dk2::MyCreatureCollection::createDeadBody, "MyCreatureCollection::createDeadBody" },  /* auto */
  { 0x004B81E0, (funptr_t) &dk2::MyCreatureCollection::createEffectGenerator, "MyCreatureCollection::createEffectGenerator" },  /* auto */
  { 0x004B8290, (funptr_t) &dk2::MyCreatureCollection::calcChecksum, "MyCreatureCollection::calcChecksum" },  /* auto */
  { 0x004B8310, (funptr_t) &dk2::MyCreatureCollection::dump, "MyCreatureCollection::dump" },  /* auto */
  { 0x00491DC0, (funptr_t) &dk2::MyCreatureDataObj::constructor, "MyCreatureDataObj::constructor" },  /* auto */
  { 0x00492230, (funptr_t) &dk2::MyCreatureDataObj::destructor, "MyCreatureDataObj::destructor" },  /* auto */
  { 0x00492320, (funptr_t) &dk2::MyCreatureDataObj::fun_492320, "MyCreatureDataObj::fun_492320" },  /* auto */
  { 0x00494360, (funptr_t) &dk2::MyCreatureDataObj::fun_494360, "MyCreatureDataObj::fun_494360" },  /* auto */
  { 0x00494860, (funptr_t) &dk2::MyCreatureDataObj::fun_494860, "MyCreatureDataObj::fun_494860" },  /* auto */
  { 0x00494880, (funptr_t) &dk2::MyCreatureDataObj::fun_494880, "MyCreatureDataObj::fun_494880" },  /* auto */
  { 0x0051F3B0, (funptr_t) &dk2::MyCreatureDataObj::fun_51F3B0, "MyCreatureDataObj::fun_51F3B0" },  /* auto */
  { 0x0049A5E0, (funptr_t) &dk2::MyCreatureInst::dump, "MyCreatureInst::dump" },  /* auto */
  { 0x004F7810, (funptr_t) &dk2::MyCreatureSpellDataObj::constructor, "MyCreatureSpellDataObj::constructor" },  /* auto */
  { 0x00554A70, (funptr_t) &dk2::MyCrs::destructor, "MyCrs::destructor" },  /* auto */
  { 0x00554A90, (funptr_t) &dk2::MyCrs::init, "MyCrs::init" },  /* auto */
  { 0x00554AD0, (funptr_t) &dk2::MyCrs::fun_554AD0, "MyCrs::fun_554AD0" },  /* auto */
  { 0x00554B30, (funptr_t) &dk2::MyCrs::myalloc, "MyCrs::myalloc" },  /* auto */
  { 0x00554BD0, (funptr_t) &dk2::MyCrs::fun_554BD0, "MyCrs::fun_554BD0" },  /* auto */
  { 0x0062E520, (funptr_t) &dk2::MyDR0::scalar_destructor, "MyDR0::scalar_destructor" },  /* auto */
  { 0x0062E540, (funptr_t) &dk2::MyDR0::destructor, "MyDR0::destructor" },  /* auto */
  { 0x0062E5B0, (funptr_t) &dk2::MyDR0::getNextMBCharAabbAndType_0, "MyDR0::getNextMBCharAabbAndType_0" },  /* auto */
  { 0x0062E5F0, (funptr_t) &dk2::MyDR0::doRender, "MyDR0::doRender" },  /* auto */
  { 0x0062E610, (funptr_t) &dk2::MyDR0::doCalcAabbOrRender, "MyDR0::doCalcAabbOrRender" },  /* auto */
  { 0x0062E8C0, (funptr_t) &dk2::MyDR0::sub_62E8C0, "MyDR0::sub_62E8C0" },  /* auto */
  { 0x00630560, (funptr_t) &dk2::MyDRBase::constructor, "MyDRBase::constructor" },  /* auto */
  { 0x00630590, (funptr_t) &dk2::MyDRBase::destructor, "MyDRBase::destructor" },  /* auto */
  { 0x0057C2D0, (funptr_t) &dk2::MyDblNamedSurface::constructor, "MyDblNamedSurface::constructor" },  /* auto */
  { 0x0057C340, (funptr_t) &dk2::MyDblNamedSurface::constructor_0, "MyDblNamedSurface::constructor_0" },  /* auto */
  { 0x0057C3B0, (funptr_t) &dk2::MyDblNamedSurface::fun_57C3B0, "MyDblNamedSurface::fun_57C3B0" },  /* auto */
  { 0x005B80F0, (funptr_t) &dk2::MyDdSurfaceEx::fillDesc, "MyDdSurfaceEx::fillDesc" },  /* auto */
  { 0x005B8150, (funptr_t) &dk2::MyDdSurfaceEx::updateDesc, "MyDdSurfaceEx::updateDesc" },  /* auto */
  { 0x005DDBC0, (funptr_t) &dk2::MyDirectInput::initDevice_0, "MyDirectInput::initDevice_0" },  /* auto */
  { 0x00600400, (funptr_t) &dk2::MyDirectInput::constructor, "MyDirectInput::constructor" },  /* auto */
  { 0x00600460, (funptr_t) &dk2::MyDirectInput::deleting_destructor, "MyDirectInput::deleting_destructor" },  /* auto */
  { 0x00600500, (funptr_t) &dk2::MyDirectInput::initDevice, "MyDirectInput::initDevice" },  /* auto */
  { 0x006005B0, (funptr_t) &dk2::MyDirectInput::processData, "MyDirectInput::processData" },  /* auto */
  { 0x005D8150, (funptr_t) &dk2::MyDirectory::constructor, "MyDirectory::constructor" },  /* auto */
  { 0x005D81B0, (funptr_t) &dk2::MyDirectory::scalar_destructor, "MyDirectory::scalar_destructor" },  /* auto */
  { 0x005D81D0, (funptr_t) &dk2::MyDirectory::destructor, "MyDirectory::destructor" },  /* auto */
  { 0x005D8220, (funptr_t) &dk2::MyDirectory::addRef, "MyDirectory::addRef" },  /* auto */
  { 0x005D8230, (funptr_t) &dk2::MyDirectory::release, "MyDirectory::release" },  /* auto */
  { 0x005D8280, (funptr_t) &dk2::MyDirectory::wrapDirectory, "MyDirectory::wrapDirectory" },  /* auto */
  { 0x005D82A0, (funptr_t) &dk2::MyDirectory::sub_5D82A0, "MyDirectory::sub_5D82A0" },  /* auto */
  { 0x005D82D0, (funptr_t) &dk2::MyDirectory::formatFilePath, "MyDirectory::formatFilePath" },  /* auto */
  { 0x005D8360, (funptr_t) &dk2::MyDirectory::sub_5D8360, "MyDirectory::sub_5D8360" },  /* auto */
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
  { 0x004A7040, (funptr_t) &dk2::MyDoorDataObj::constructor, "MyDoorDataObj::constructor" },  /* auto */
  { 0x005DCB40, (funptr_t) &dk2::MyDxDevice::constructor, "MyDxDevice::constructor" },  /* auto */
  { 0x005DCB70, (funptr_t) &dk2::MyDxDevice::deleting_destructor, "MyDxDevice::deleting_destructor" },  /* auto */
  { 0x005DCB90, (funptr_t) &dk2::MyDxDevice::destructor, "MyDxDevice::destructor" },  /* auto */
  { 0x005DCBB0, (funptr_t) &dk2::MyDxDevice::queryDevice, "MyDxDevice::queryDevice" },  /* auto */
  { 0x005DCBE0, (funptr_t) &dk2::MyDxDevice::updateCoopLevel, "MyDxDevice::updateCoopLevel" },  /* auto */
  { 0x005DCCA0, (funptr_t) &dk2::MyDxDevice::updateWindowActive, "MyDxDevice::updateWindowActive" },  /* auto */
  { 0x005DCCB0, (funptr_t) &dk2::MyDxDevice::getHInstance, "MyDxDevice::getHInstance" },  /* auto */
  { 0x005DCCC0, (funptr_t) &dk2::MyDxDevice::getNextHWindow, "MyDxDevice::getNextHWindow" },  /* auto */
  { 0x005DCCD0, (funptr_t) &dk2::MyDxDevice::updateCoopLevel_acquire, "MyDxDevice::updateCoopLevel_acquire" },  /* auto */
  { 0x005DCD30, (funptr_t) &dk2::MyDxDevice::init, "MyDxDevice::init" },  /* auto */
  { 0x005DCE50, (funptr_t) &dk2::MyDxDevice::setCoopLevel, "MyDxDevice::setCoopLevel" },  /* auto */
  { 0x005BBE20, (funptr_t) &dk2::MyDxInputManagerCb::constructor, "MyDxInputManagerCb::constructor" },  /* auto */
  { 0x005BBEA0, (funptr_t) &dk2::MyDxInputManagerCb::scalar_destructor, "MyDxInputManagerCb::scalar_destructor" },  /* auto */
  { 0x005BBF90, (funptr_t) &dk2::MyDxInputManagerCb::initInputs, "MyDxInputManagerCb::initInputs" },  /* auto */
  { 0x005BC060, (funptr_t) &dk2::MyDxInputManagerCb::initMouse, "MyDxInputManagerCb::initMouse" },  /* auto */
  { 0x005BC170, (funptr_t) &dk2::MyDxInputManagerCb::initKeyboard, "MyDxInputManagerCb::initKeyboard" },  /* auto */
  { 0x005BC210, (funptr_t) &dk2::MyDxInputManagerCb::onWindowActivated, "MyDxInputManagerCb::onWindowActivated" },  /* auto */
  { 0x005BC280, (funptr_t) &dk2::MyDxInputManagerCb::call, "MyDxInputManagerCb::call" },  /* auto */
  { 0x005BC3A0, (funptr_t) &dk2::MyDxInputManagerCb::updateCoopLevelAndSignal, "MyDxInputManagerCb::updateCoopLevelAndSignal" },  /* auto */
  { 0x005DB450, (funptr_t) &dk2::MyDxInputState::constructor, "MyDxInputState::constructor" },  /* auto */
  { 0x005DB4F0, (funptr_t) &dk2::MyDxInputState::scalar_destructor, "MyDxInputState::scalar_destructor" },  /* auto */
  { 0x005DB510, (funptr_t) &dk2::MyDxInputState::exception_destructor, "MyDxInputState::exception_destructor" },  /* auto */
  { 0x005DB560, (funptr_t) &dk2::MyDxInputState::destructor, "MyDxInputState::destructor" },  /* auto */
  { 0x005DB600, (funptr_t) &dk2::MyDxInputState::fun4_updateRgbMouse, "MyDxInputState::fun4_updateRgbMouse" },  /* auto */
  { 0x005DB650, (funptr_t) &dk2::MyDxInputState::setDxKeyboard, "MyDxInputState::setDxKeyboard" },  /* auto */
  { 0x005DB6A0, (funptr_t) &dk2::MyDxInputState::setDxMouse, "MyDxInputState::setDxMouse" },  /* auto */
  { 0x005DB6F0, (funptr_t) &dk2::MyDxInputState::updateKeysState, "MyDxInputState::updateKeysState" },  /* auto */
  { 0x005DE050, (funptr_t) &dk2::MyDxKeyboard::constructor, "MyDxKeyboard::constructor" },  /* auto */
  { 0x005DE150, (funptr_t) &dk2::MyDxKeyboard::scalar_destructor, "MyDxKeyboard::scalar_destructor" },  /* auto */
  { 0x005DE170, (funptr_t) &dk2::MyDxKeyboard::destructor, "MyDxKeyboard::destructor" },  /* auto */
  { 0x005DE260, (funptr_t) &dk2::MyDxKeyboard::processKeyboardData, "MyDxKeyboard::processKeyboardData" },  /* auto */
  { 0x005DD760, (funptr_t) &dk2::MyDxMouse::constructor, "MyDxMouse::constructor" },  /* auto */
  { 0x005DD8D0, (funptr_t) &dk2::MyDxMouse::scalar_destructor, "MyDxMouse::scalar_destructor" },  /* auto */
  { 0x005DD8F0, (funptr_t) &dk2::MyDxMouse::destructor, "MyDxMouse::destructor" },  /* auto */
  { 0x005DDA90, (funptr_t) &dk2::MyDxMouse::handleData, "MyDxMouse::handleData" },  /* auto */
  { 0x0057CB70, (funptr_t) &dk2::MyEntryBuf_MyScaledSurface::resize, "MyEntryBuf_MyScaledSurface::resize" },  /* auto */
  { 0x0058E000, (funptr_t) &dk2::MyEntryBuf_MyStringHashMap_entry::resize, "MyEntryBuf_MyStringHashMap_entry::resize" },  /* auto */
  { 0x0058A330, (funptr_t) &dk2::MyEntryBuf_Vertex18::resize, "MyEntryBuf_Vertex18::resize" },  /* auto */
  { 0x004915D0, (funptr_t) &dk2::MyFight::dump, "MyFight::dump" },  /* auto */
  { 0x0062FCF0, (funptr_t) &dk2::MyFileStorage::constructor, "MyFileStorage::constructor" },  /* auto */
  { 0x0062FD60, (funptr_t) &dk2::MyFileStorage::scalar_destructor, "MyFileStorage::scalar_destructor" },  /* auto */
  { 0x0062FD80, (funptr_t) &dk2::MyFileStorage::destructor, "MyFileStorage::destructor" },  /* auto */
  { 0x0062FE40, (funptr_t) &dk2::MyFileStorage::binarySearch_, "MyFileStorage::binarySearch_" },  /* auto */
  { 0x0062FEB0, (funptr_t) &dk2::MyFileStorage::resolveResource, "MyFileStorage::resolveResource" },  /* auto */
  { 0x0062FF50, (funptr_t) &dk2::MyFileStorage::loadResource, "MyFileStorage::loadResource" },  /* auto */
  { 0x00630050, (funptr_t) &dk2::MyFileStorage::openResourceStream, "MyFileStorage::openResourceStream" },  /* auto */
  { 0x006300A0, (funptr_t) &dk2::MyFileStorage::parseResourceIndex, "MyFileStorage::parseResourceIndex" },  /* auto */
  { 0x00630160, (funptr_t) &dk2::MyFileStorage::getResourceIndex, "MyFileStorage::getResourceIndex" },  /* auto */
  { 0x005FFDF0, (funptr_t) &dk2::MyFileStream::constructor, "MyFileStream::constructor" },  /* auto */
  { 0x005FFE50, (funptr_t) &dk2::MyFileStream::scalar_destructor, "MyFileStream::scalar_destructor" },  /* auto */
  { 0x005FFE70, (funptr_t) &dk2::MyFileStream::destructor, "MyFileStream::destructor" },  /* auto */
  { 0x005FFEC0, (funptr_t) &dk2::MyFileStream::open, "MyFileStream::open" },  /* auto */
  { 0x005FFF60, (funptr_t) &dk2::MyFileStream::closeMapping, "MyFileStream::closeMapping" },  /* auto */
  { 0x005FFF90, (funptr_t) &dk2::MyFileStream::close, "MyFileStream::close" },  /* auto */
  { 0x005FFFB0, (funptr_t) &dk2::MyFileStream::readBytes, "MyFileStream::readBytes" },  /* auto */
  { 0x005FFFF0, (funptr_t) &dk2::MyFileStream::writeBytes, "MyFileStream::writeBytes" },  /* auto */
  { 0x00600030, (funptr_t) &dk2::MyFileStream::seek, "MyFileStream::seek" },  /* auto */
  { 0x00600050, (funptr_t) &dk2::MyFileStream::getSize, "MyFileStream::getSize" },  /* auto */
  { 0x00600060, (funptr_t) &dk2::MyFileStream::mapFileToBuf, "MyFileStream::mapFileToBuf" },  /* auto */
  { 0x00600120, (funptr_t) &dk2::MyFileStream::unmapFile, "MyFileStream::unmapFile" },  /* auto */
  { 0x00600140, (funptr_t) &dk2::MyFileStream::getSemaphore, "MyFileStream::getSemaphore" },  /* auto */
  { 0x00600150, (funptr_t) &dk2::MyFileStream::flush, "MyFileStream::flush" },  /* auto */
  { 0x00631450, (funptr_t) &dk2::MyFontRenderer0::scalar_destructor, "MyFontRenderer0::scalar_destructor" },  /* auto */
  { 0x00631470, (funptr_t) &dk2::MyFontRenderer0::destructor, "MyFontRenderer0::destructor" },  /* auto */
  { 0x00631480, (funptr_t) &dk2::MyFontRenderer0::render_r5g5b5a1, "MyFontRenderer0::render_r5g5b5a1" },  /* auto */
  { 0x00631600, (funptr_t) &dk2::MyFontRenderer0::render_r5g6b5, "MyFontRenderer0::render_r5g6b5" },  /* auto */
  { 0x006316F0, (funptr_t) &dk2::MyFontRenderer0::render_r4g4b4a4, "MyFontRenderer0::render_r4g4b4a4" },  /* auto */
  { 0x00631860, (funptr_t) &dk2::MyFontRenderer0::render_r8g8b8a8, "MyFontRenderer0::render_r8g8b8a8" },  /* auto */
  { 0x00631A20, (funptr_t) &dk2::MyFontRenderer2::scalar_destructor, "MyFontRenderer2::scalar_destructor" },  /* auto */
  { 0x00631A40, (funptr_t) &dk2::MyFontRenderer2::destructor, "MyFontRenderer2::destructor" },  /* auto */
  { 0x00631A50, (funptr_t) &dk2::MyFontRenderer2::render_r5g5b5a1, "MyFontRenderer2::render_r5g5b5a1" },  /* auto */
  { 0x00631E10, (funptr_t) &dk2::MyFontRenderer2::render_r5g6b5, "MyFontRenderer2::render_r5g6b5" },  /* auto */
  { 0x006321D0, (funptr_t) &dk2::MyFontRenderer2::render_r4g4b4a4, "MyFontRenderer2::render_r4g4b4a4" },  /* auto */
  { 0x00632530, (funptr_t) &dk2::MyFontRenderer2::render_r8g8b8a8, "MyFontRenderer2::render_r8g8b8a8" },  /* auto */
  { 0x006328A0, (funptr_t) &dk2::MyFontRenderer3::scalar_destructor, "MyFontRenderer3::scalar_destructor" },  /* auto */
  { 0x006328C0, (funptr_t) &dk2::MyFontRenderer3::destructor, "MyFontRenderer3::destructor" },  /* auto */
  { 0x006328D0, (funptr_t) &dk2::MyFontRenderer3::render_r5g5b5a1, "MyFontRenderer3::render_r5g5b5a1" },  /* auto */
  { 0x00632BC0, (funptr_t) &dk2::MyFontRenderer3::render_r5g6b5, "MyFontRenderer3::render_r5g6b5" },  /* auto */
  { 0x00632DC0, (funptr_t) &dk2::MyFontRenderer3::render_r4g4b4a4, "MyFontRenderer3::render_r4g4b4a4" },  /* auto */
  { 0x006330B0, (funptr_t) &dk2::MyFontRenderer3::render_r8g8b8a8, "MyFontRenderer3::render_r8g8b8a8" },  /* auto */
  { 0x006309A0, (funptr_t) &dk2::MyFontRenderer4::scalar_destructor, "MyFontRenderer4::scalar_destructor" },  /* auto */
  { 0x006309C0, (funptr_t) &dk2::MyFontRenderer4::destructor, "MyFontRenderer4::destructor" },  /* auto */
  { 0x006309D0, (funptr_t) &dk2::MyFontRenderer4::render_r5g5b5a1, "MyFontRenderer4::render_r5g5b5a1" },  /* auto */
  { 0x00630C80, (funptr_t) &dk2::MyFontRenderer4::render_r5g6b5, "MyFontRenderer4::render_r5g6b5" },  /* auto */
  { 0x00630F30, (funptr_t) &dk2::MyFontRenderer4::render_r4g4b4a4, "MyFontRenderer4::render_r4g4b4a4" },  /* auto */
  { 0x006311E0, (funptr_t) &dk2::MyFontRenderer4::render_r8g8b8a8, "MyFontRenderer4::render_r8g8b8a8" },  /* auto */
  { 0x006319F0, (funptr_t) &dk2::MyFontRendererBase::sub_6319F0, "MyFontRendererBase::sub_6319F0" },  /* auto */
  { 0x00633760, (funptr_t) &dk2::MyFontRendererBase::constructor, "MyFontRendererBase::constructor" },  /* auto */
  { 0x00633770, (funptr_t) &dk2::MyFontRendererBase::scalar_destructor, "MyFontRendererBase::scalar_destructor" },  /* auto */
  { 0x00633790, (funptr_t) &dk2::MyFontRendererBase::destructor, "MyFontRendererBase::destructor" },  /* auto */
  { 0x006337A0, (funptr_t) &dk2::MyFontRendererBase::renderChar, "MyFontRendererBase::renderChar" },  /* auto */
  { 0x0056C940, (funptr_t) &dk2::MyFormatLoader::constructor, "MyFormatLoader::constructor" },  /* auto */
  { 0x0056C960, (funptr_t) &dk2::MyFormatLoader::load, "MyFormatLoader::load" },  /* auto */
  { 0x00404E00, (funptr_t) &dk2::MyGame::get_f4C, "MyGame::get_f4C" },  /* auto */
  { 0x00557B70, (funptr_t) &dk2::MyGame::constructor, "MyGame::constructor" },  /* auto */
  { 0x00557CB0, (funptr_t) &dk2::MyGame::init, "MyGame::init" },  /* auto */
  { 0x00557FB0, (funptr_t) &dk2::MyGame::isOsCompatible, "MyGame::isOsCompatible" },  /* auto */
  { 0x005580E0, (funptr_t) &dk2::MyGame::release, "MyGame::release" },  /* auto */
  { 0x005581B0, (funptr_t) &dk2::MyGame::prepareScreenEx, "MyGame::prepareScreenEx" },  /* auto */
  { 0x005585C0, (funptr_t) &dk2::MyGame::createWindow, "MyGame::createWindow" },  /* auto */
  { 0x005586E0, (funptr_t) &dk2::MyGame::selectSurfToRender, "MyGame::selectSurfToRender" },  /* auto */
  { 0x00558770, (funptr_t) &dk2::MyGame::getSurf_unlock, "MyGame::getSurf_unlock" },  /* auto */
  { 0x005587C0, (funptr_t) &dk2::MyGame::getCurOffScreenSurf, "MyGame::getCurOffScreenSurf" },  /* auto */
  { 0x005587F0, (funptr_t) &dk2::MyGame::prepareScreen, "MyGame::prepareScreen" },  /* auto */
  { 0x005588A0, (funptr_t) &dk2::MyGame::surf_Blt, "MyGame::surf_Blt" },  /* auto */
  { 0x005589E0, (funptr_t) &dk2::MyGame::getMousePos, "MyGame::getMousePos" },  /* auto */
  { 0x005589F0, (funptr_t) &dk2::MyGame::static_getMouseF14, "MyGame::static_getMouseF14" },  /* auto */
  { 0x00558A40, (funptr_t) &dk2::MyGame::takeScreenshot, "MyGame::takeScreenshot" },  /* auto */
  { 0x00558BD0, (funptr_t) &dk2::MyGame::sub_558BD0, "MyGame::sub_558BD0" },  /* auto */
  { 0x00558E40, (funptr_t) &dk2::MyGame::collect3dDevices, "MyGame::collect3dDevices" },  /* auto */
  { 0x00558F40, (funptr_t) &dk2::MyGame::sub_558F40, "MyGame::sub_558F40" },  /* auto */
  { 0x00558F70, (funptr_t) &dk2::MyGame::createZBufferSurf, "MyGame::createZBufferSurf" },  /* auto */
  { 0x00559140, (funptr_t) &dk2::MyGame::sub_559140, "MyGame::sub_559140" },  /* auto */
  { 0x00559670, (funptr_t) &dk2::MyGame::isNeedBlt, "MyGame::isNeedBlt" },  /* auto */
  { 0x00559690, (funptr_t) &dk2::MyGame::addWmActivateCallback, "MyGame::addWmActivateCallback" },  /* auto */
  { 0x005596D0, (funptr_t) &dk2::MyGame::removeWmActivateCallback, "MyGame::removeWmActivateCallback" },  /* auto */
  { 0x005597F0, (funptr_t) &dk2::MyGame::getSelectedGuid, "MyGame::getSelectedGuid" },  /* auto */
  { 0x00559820, (funptr_t) &dk2::MyGame_f4C::fun_559820, "MyGame_f4C::fun_559820" },  /* auto */
  { 0x005BB690, (funptr_t) &dk2::MyInputListenersHolder::deleting_destructor, "MyInputListenersHolder::deleting_destructor" },  /* auto */
  { 0x005BB6B0, (funptr_t) &dk2::MyInputListenersHolder::destructor, "MyInputListenersHolder::destructor" },  /* auto */
  { 0x005DC920, (funptr_t) &dk2::MyInputListenersHolder::fun4, "MyInputListenersHolder::fun4" },  /* auto */
  { 0x005DC9E0, (funptr_t) &dk2::MyInputListenersHolder::fun2, "MyInputListenersHolder::fun2" },  /* auto */
  { 0x005B2B40, (funptr_t) &dk2::MyInputManagerCb::static_releaseKeyboard, "MyInputManagerCb::static_releaseKeyboard" },  /* auto */
  { 0x005B2B80, (funptr_t) &dk2::MyInputManagerCb::static_releaseMouse, "MyInputManagerCb::static_releaseMouse" },  /* auto */
  { 0x005BAF40, (funptr_t) &dk2::MyInputManagerCb::scalar_destructor, "MyInputManagerCb::scalar_destructor" },  /* auto */
  { 0x005BAF60, (funptr_t) &dk2::MyInputManagerCb::destructor, "MyInputManagerCb::destructor" },  /* auto */
  { 0x005BB020, (funptr_t) &dk2::MyInputManagerCb::setStaticListenersAndHandleDxActions, "MyInputManagerCb::setStaticListenersAndHandleDxActions" },  /* auto */
  { 0x005BB0A0, (funptr_t) &dk2::MyInputManagerCb::initInputs, "MyInputManagerCb::initInputs" },  /* auto */
  { 0x005BB1A0, (funptr_t) &dk2::MyInputManagerCb::windowMsgW, "MyInputManagerCb::windowMsgW" },  /* auto */
  { 0x005BB1C0, (funptr_t) &dk2::MyInputManagerCb::initMouse, "MyInputManagerCb::initMouse" },  /* auto */
  { 0x005BB220, (funptr_t) &dk2::MyInputManagerCb::initKeyInputs, "MyInputManagerCb::initKeyInputs" },  /* auto */
  { 0x005BB2A0, (funptr_t) &dk2::MyInputManagerCb::sub_5BB2A0, "MyInputManagerCb::sub_5BB2A0" },  /* auto */
  { 0x005BB2F0, (funptr_t) &dk2::MyInputManagerCb::resolveChildCb, "MyInputManagerCb::resolveChildCb" },  /* auto */
  { 0x005BB480, (funptr_t) &dk2::MyInputManagerCb::popDxAction, "MyInputManagerCb::popDxAction" },  /* auto */
  { 0x005BB500, (funptr_t) &dk2::MyInputManagerCb::sub_5BB500, "MyInputManagerCb::sub_5BB500" },  /* auto */
  { 0x005BB570, (funptr_t) &dk2::MyInputManagerCb::setEnabled, "MyInputManagerCb::setEnabled" },  /* auto */
  { 0x005BC270, (funptr_t) &dk2::MyInputManagerCb::updateMouse, "MyInputManagerCb::updateMouse" },  /* auto */
  { 0x005BC460, (funptr_t) &dk2::MyInputManagerCb::setMousePos, "MyInputManagerCb::setMousePos" },  /* auto */
  { 0x004F7C70, (funptr_t) &dk2::MyKeeperSpellDataObj::constructor, "MyKeeperSpellDataObj::constructor" },  /* auto */
  { 0x0055EC20, (funptr_t) &dk2::MyKeyboard::constructor, "MyKeyboard::constructor" },  /* auto */
  { 0x0055ED10, (funptr_t) &dk2::MyKeyboard::destructor, "MyKeyboard::destructor" },  /* auto */
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
  { 0x00561920, (funptr_t) &dk2::MyKeyboard::fun_561920, "MyKeyboard::fun_561920" },  /* auto */
  { 0x00561A20, (funptr_t) &dk2::MyKeyboard::sub_561A20_levelAttempts, "MyKeyboard::sub_561A20_levelAttempts" },  /* auto */
  { 0x00561BF0, (funptr_t) &dk2::MyKeyboard::sub_561BF0_totalEvilRating, "MyKeyboard::sub_561BF0_totalEvilRating" },  /* auto */
  { 0x00561DC0, (funptr_t) &dk2::MyKeyboard::fun_561DC0, "MyKeyboard::fun_561DC0" },  /* auto */
  { 0x00561E40, (funptr_t) &dk2::MyKeyboard::sub_561E40, "MyKeyboard::sub_561E40" },  /* auto */
  { 0x005FE3D0, (funptr_t) &dk2::MyLList_WadDirObj::scalar_destructor, "MyLList_WadDirObj::scalar_destructor" },  /* auto */
  { 0x005FE3F0, (funptr_t) &dk2::MyLList_WadDirObj::destructor, "MyLList_WadDirObj::destructor" },  /* auto */
  { 0x005FF670, (funptr_t) &dk2::MyLList_WadDirObj::Base_scalar_destructor, "MyLList_WadDirObj::Base_scalar_destructor" },  /* auto */
  { 0x005FE430, (funptr_t) &dk2::MyLList_WadFileObj::scalar_destructor, "MyLList_WadFileObj::scalar_destructor" },  /* auto */
  { 0x005FE450, (funptr_t) &dk2::MyLList_WadFileObj::destructor, "MyLList_WadFileObj::destructor" },  /* auto */
  { 0x005FF4E0, (funptr_t) &dk2::MyLList_WadFileObj::add, "MyLList_WadFileObj::add" },  /* auto */
  { 0x005FF6C0, (funptr_t) &dk2::MyLList_WadFileObj::Base_scalar_destructor, "MyLList_WadFileObj::Base_scalar_destructor" },  /* auto */
  { 0x005B9840, (funptr_t) &dk2::MyLList_WinEventCb::constructor, "MyLList_WinEventCb::constructor" },  /* auto */
  { 0x005B9860, (funptr_t) &dk2::MyLList_WinEventCb::destructor, "MyLList_WinEventCb::destructor" },  /* auto */
  { 0x005B98A0, (funptr_t) &dk2::MyLList_WinEventCb::scalar_destructor, "MyLList_WinEventCb::scalar_destructor" },  /* auto */
  { 0x0062DBD0, (funptr_t) &dk2::MyLangObj::constructor, "MyLangObj::constructor" },  /* auto */
  { 0x0062DC50, (funptr_t) &dk2::MyLangObj::createFileIteratorContentAndSet, "MyLangObj::createFileIteratorContentAndSet" },  /* auto */
  { 0x0062DCA0, (funptr_t) &dk2::MyLangObj::close, "MyLangObj::close" },  /* auto */
  { 0x0062DCD0, (funptr_t) &dk2::MyLangObj::readResourceIndexFileByName, "MyLangObj::readResourceIndexFileByName" },  /* auto */
  { 0x0062DD40, (funptr_t) &dk2::MyLangObj::readResourceIndexFile, "MyLangObj::readResourceIndexFile" },  /* auto */
  { 0x0062DEE0, (funptr_t) &dk2::MyLangObj::resolveMBToUni, "MyLangObj::resolveMBToUni" },  /* auto */
  { 0x0062DF30, (funptr_t) &dk2::MyLangObj::resolveUniToMB, "MyLangObj::resolveUniToMB" },  /* auto */
  { 0x0062DF90, (funptr_t) &dk2::MyLangObj::resolveText, "MyLangObj::resolveText" },  /* auto */
  { 0x0062DFF0, (funptr_t) &dk2::MyLangObj::resolveFont, "MyLangObj::resolveFont" },  /* auto */
  { 0x005D7D30, (funptr_t) &dk2::MyLocalStr::equalTo, "MyLocalStr::equalTo" },  /* auto */
  { 0x005D7F60, (funptr_t) &dk2::MyLocalStr::charPos, "MyLocalStr::charPos" },  /* auto */
  { 0x005FDFA0, (funptr_t) &dk2::MyLocalStr::scalar_destructor, "MyLocalStr::scalar_destructor" },  /* auto */
  { 0x005FDFC0, (funptr_t) &dk2::MyLocalStr::resize, "MyLocalStr::resize" },  /* auto */
  { 0x005FE000, (funptr_t) &dk2::MyLocalStr::constructor, "MyLocalStr::constructor" },  /* auto */
  { 0x005FE0B0, (funptr_t) &dk2::MyLocalStr::destructor, "MyLocalStr::destructor" },  /* auto */
  { 0x005FE0C0, (funptr_t) &dk2::MyLocalStr::assignChar, "MyLocalStr::assignChar" },  /* auto */
  { 0x005FE100, (funptr_t) &dk2::MyLocalStr::assign, "MyLocalStr::assign" },  /* auto */
  { 0x005FE150, (funptr_t) &dk2::MyLocalStr::assignMyStr, "MyLocalStr::assignMyStr" },  /* auto */
  { 0x005FE180, (funptr_t) &dk2::MyLocalStr::append, "MyLocalStr::append" },  /* auto */
  { 0x005FE1C0, (funptr_t) &dk2::MyLocalStr::appendChar, "MyLocalStr::appendChar" },  /* auto */
  { 0x005FE200, (funptr_t) &dk2::MyLocalStr::appendLocalStr, "MyLocalStr::appendLocalStr" },  /* auto */
  { 0x005DCA80, (funptr_t) &dk2::MyLock::unlock, "MyLock::unlock" },  /* auto */
  { 0x005DCA90, (funptr_t) &dk2::MyLock::lock, "MyLock::lock" },  /* auto */
  { 0x005DCAB0, (funptr_t) &dk2::MyLock::unlock_impl, "MyLock::unlock_impl" },  /* auto */
  { 0x005BBD80, (funptr_t) &dk2::MyLoopLList_DxAction::constructor, "MyLoopLList_DxAction::constructor" },  /* auto */
  { 0x005BBDB0, (funptr_t) &dk2::MyLoopLList_DxAction::addFirst, "MyLoopLList_DxAction::addFirst" },  /* auto */
  { 0x005DDD80, (funptr_t) &dk2::MyLoopLList_DxAction::insertAfter, "MyLoopLList_DxAction::insertAfter" },  /* auto */
  { 0x00611210, (funptr_t) &dk2::MyLoopLList_DxAction::lastEntry, "MyLoopLList_DxAction::lastEntry" },  /* auto */
  { 0x005BBE00, (funptr_t) &dk2::MyLoopLList_DxAction_entry::getPrev, "MyLoopLList_DxAction_entry::getPrev" },  /* auto */
  { 0x005DB440, (funptr_t) &dk2::MyLoopLList_DxAction_entry::getNext, "MyLoopLList_DxAction_entry::getNext" },  /* auto */
  { 0x00506660, (funptr_t) &dk2::MyManufactureList::constructor, "MyManufactureList::constructor" },  /* auto */
  { 0x00506690, (funptr_t) &dk2::MyManufactureList::open, "MyManufactureList::open" },  /* auto */
  { 0x005066D0, (funptr_t) &dk2::MyManufactureList::close, "MyManufactureList::close" },  /* auto */
  { 0x005066E0, (funptr_t) &dk2::MyManufactureList::fun_5066E0, "MyManufactureList::fun_5066E0" },  /* auto */
  { 0x00506BF0, (funptr_t) &dk2::MyManufactureList::calcChecksum, "MyManufactureList::calcChecksum" },  /* auto */
  { 0x00506C60, (funptr_t) &dk2::MyManufactureList::dump, "MyManufactureList::dump" },  /* auto */
  { 0x00452B30, (funptr_t) &dk2::MyMapElement::constructor, "MyMapElement::constructor" },  /* auto */
  { 0x00452B90, (funptr_t) &dk2::MyMapElement::saveToTbDiscFile, "MyMapElement::saveToTbDiscFile" },  /* auto */
  { 0x00452F60, (funptr_t) &dk2::MyMapElement::fun_452F60, "MyMapElement::fun_452F60" },  /* auto */
  { 0x004559D0, (funptr_t) &dk2::MyMapElement::fun_4559D0, "MyMapElement::fun_4559D0" },  /* auto */
  { 0x0062D590, (funptr_t) &dk2::MyMbStringList::constructor, "MyMbStringList::constructor" },  /* auto */
  { 0x0062D660, (funptr_t) &dk2::MyMbStringList::scalar_destructor, "MyMbStringList::scalar_destructor" },  /* auto */
  { 0x0062D680, (funptr_t) &dk2::MyMbStringList::destructor, "MyMbStringList::destructor" },  /* auto */
  { 0x0062D6F0, (funptr_t) &dk2::MyMbStringList::doFormat, "MyMbStringList::doFormat" },  /* auto */
  { 0x0062D960, (funptr_t) &dk2::MyMbStringList::getString, "MyMbStringList::getString" },  /* auto */
  { 0x0062E3A0, (funptr_t) &dk2::MyMbToUniMap::constructor, "MyMbToUniMap::constructor" },  /* auto */
  { 0x0062E3F0, (funptr_t) &dk2::MyMbToUniMap::scalar_destructor, "MyMbToUniMap::scalar_destructor" },  /* auto */
  { 0x0062E410, (funptr_t) &dk2::MyMbToUniMap::destructor, "MyMbToUniMap::destructor" },  /* auto */
  { 0x0062E440, (funptr_t) &dk2::MyMbToUniMap::convert, "MyMbToUniMap::convert" },  /* auto */
  { 0x00600180, (funptr_t) &dk2::MyMemoryMapStream::constructor, "MyMemoryMapStream::constructor" },  /* auto */
  { 0x006001D0, (funptr_t) &dk2::MyMemoryMapStream::scalar_destructor, "MyMemoryMapStream::scalar_destructor" },  /* auto */
  { 0x006001F0, (funptr_t) &dk2::MyMemoryMapStream::destructor, "MyMemoryMapStream::destructor" },  /* auto */
  { 0x006002E0, (funptr_t) &dk2::MyMemoryMapStream::close, "MyMemoryMapStream::close" },  /* auto */
  { 0x00600300, (funptr_t) &dk2::MyMemoryMapStream::readBytes, "MyMemoryMapStream::readBytes" },  /* auto */
  { 0x00600330, (funptr_t) &dk2::MyMemoryMapStream::writeBytes, "MyMemoryMapStream::writeBytes" },  /* auto */
  { 0x00600360, (funptr_t) &dk2::MyMemoryMapStream::seek, "MyMemoryMapStream::seek" },  /* auto */
  { 0x00600390, (funptr_t) &dk2::MyMemoryMapStream::getSize, "MyMemoryMapStream::getSize" },  /* auto */
  { 0x006003C0, (funptr_t) &dk2::MyMemoryMapStream::getSemaphore, "MyMemoryMapStream::getSemaphore" },  /* auto */
  { 0x006003D0, (funptr_t) &dk2::MyMemoryMapStream::flush, "MyMemoryMapStream::flush" },  /* auto */
  { 0x0057ECE0, (funptr_t) &dk2::MyMeshResourceHolder::markUsed, "MyMeshResourceHolder::markUsed" },  /* auto */
  { 0x005DD360, (funptr_t) &dk2::MyMouse::constructor, "MyMouse::constructor" },  /* auto */
  { 0x005DD430, (funptr_t) &dk2::MyMouse::deleting_destructor, "MyMouse::deleting_destructor" },  /* auto */
  { 0x005DD450, (funptr_t) &dk2::MyMouse::destructor, "MyMouse::destructor" },  /* auto */
  { 0x005DD4A0, (funptr_t) &dk2::MyMouse::fun3_xyzAction, "MyMouse::fun3_xyzAction" },  /* auto */
  { 0x005DD560, (funptr_t) &dk2::MyMouse::fun4, "MyMouse::fun4" },  /* auto */
  { 0x005DD630, (funptr_t) &dk2::MyMouse::updatePos, "MyMouse::updatePos" },  /* auto */
  { 0x005DD6D0, (funptr_t) &dk2::MyMouse::setPos, "MyMouse::setPos" },  /* auto */
  { 0x005BC630, (funptr_t) &dk2::MyMouseUpdater::deleting_destructor, "MyMouseUpdater::deleting_destructor" },  /* auto */
  { 0x005DD600, (funptr_t) &dk2::MyMouseUpdater::call, "MyMouseUpdater::call" },  /* auto */
  { 0x005DD730, (funptr_t) &dk2::MyMouseUpdater::registerCallback, "MyMouseUpdater::registerCallback" },  /* auto */
  { 0x0062D370, (funptr_t) &dk2::MyMultilineRenderCtx::constructor, "MyMultilineRenderCtx::constructor" },  /* auto */
  { 0x005BAE70, (funptr_t) &dk2::MyMutex::constructor, "MyMutex::constructor" },  /* auto */
  { 0x005BAEB0, (funptr_t) &dk2::MyMutex::destroy, "MyMutex::destroy" },  /* auto */
  { 0x005C08E0, (funptr_t) &dk2::MyNBitTexture::f8_5C08E0, "MyNBitTexture::f8_5C08E0" },  /* auto */
  { 0x005C1400, (funptr_t) &dk2::MyNBitTexture::f10_5C1400, "MyNBitTexture::f10_5C1400" },  /* auto */
  { 0x005C4D40, (funptr_t) &dk2::MyNBitTexture::f4_5C4D40, "MyNBitTexture::f4_5C4D40" },  /* auto */
  { 0x005C83F0, (funptr_t) &dk2::MyNBitTexture::f28_5C83F0, "MyNBitTexture::f28_5C83F0" },  /* auto */
  { 0x004D10A0, (funptr_t) &dk2::MyNavigationSystem::constructor, "MyNavigationSystem::constructor" },  /* auto */
  { 0x004D10C0, (funptr_t) &dk2::MyNavigationSystem::fun_4D10C0, "MyNavigationSystem::fun_4D10C0" },  /* auto */
  { 0x004D10D0, (funptr_t) &dk2::MyNavigationSystem::open, "MyNavigationSystem::open" },  /* auto */
  { 0x004D1150, (funptr_t) &dk2::MyNavigationSystem::fun_4D1150, "MyNavigationSystem::fun_4D1150" },  /* auto */
  { 0x004D17D0, (funptr_t) &dk2::MyNavigationSystem::dump, "MyNavigationSystem::dump" },  /* auto */
  { 0x004D1820, (funptr_t) &dk2::MyNavigationSystemMap::constructor, "MyNavigationSystemMap::constructor" },  /* auto */
  { 0x004D1840, (funptr_t) &dk2::MyNavigationSystemMap::open, "MyNavigationSystemMap::open" },  /* auto */
  { 0x004D1970, (funptr_t) &dk2::MyNavigationSystemMap::fun_4D1970, "MyNavigationSystemMap::fun_4D1970" },  /* auto */
  { 0x004D1990, (funptr_t) &dk2::MyNavigationSystemMap::fun_4D1990, "MyNavigationSystemMap::fun_4D1990" },  /* auto */
  { 0x004D19D0, (funptr_t) &dk2::MyNavigationSystemMap::dump, "MyNavigationSystemMap::dump" },  /* auto */
  { 0x0049DC80, (funptr_t) &dk2::MyObjectDataObj::constructor, "MyObjectDataObj::constructor" },  /* auto */
  { 0x004D0F60, (funptr_t) &dk2::MyPilotNavigation::fun_4D0F60, "MyPilotNavigation::fun_4D0F60" },  /* auto */
  { 0x004D1070, (funptr_t) &dk2::MyPilotNavigation::fun_4D1070, "MyPilotNavigation::fun_4D1070" },  /* auto */
  { 0x004D4760, (funptr_t) &dk2::MyPilotNavigation::fun_4D4760, "MyPilotNavigation::fun_4D4760" },  /* auto */
  { 0x004D5100, (funptr_t) &dk2::MyPilotNavigation::fun_4D5100, "MyPilotNavigation::fun_4D5100" },  /* auto */
  { 0x004D54F0, (funptr_t) &dk2::MyPilotNavigation::fun_4D54F0, "MyPilotNavigation::fun_4D54F0" },  /* auto */
  { 0x004D55B0, (funptr_t) &dk2::MyPilotNavigation::constructor, "MyPilotNavigation::constructor" },  /* auto */
  { 0x004D59A0, (funptr_t) &dk2::MyPilotNavigation::fun_4D59A0, "MyPilotNavigation::fun_4D59A0" },  /* auto */
  { 0x004D59E0, (funptr_t) &dk2::MyPilotNavigation::fun_4D59E0, "MyPilotNavigation::fun_4D59E0" },  /* auto */
  { 0x004D5A40, (funptr_t) &dk2::MyPilotNavigation::fun_4D5A40, "MyPilotNavigation::fun_4D5A40" },  /* auto */
  { 0x004D5AC0, (funptr_t) &dk2::MyPilotNavigation::fun_4D5AC0, "MyPilotNavigation::fun_4D5AC0" },  /* auto */
  { 0x004D5AF0, (funptr_t) &dk2::MyPilotNavigation::fun_4D5AF0, "MyPilotNavigation::fun_4D5AF0" },  /* auto */
  { 0x004D5B20, (funptr_t) &dk2::MyPilotNavigation::fun_4D5B20, "MyPilotNavigation::fun_4D5B20" },  /* auto */
  { 0x004D5C00, (funptr_t) &dk2::MyPilotNavigation::dump, "MyPilotNavigation::dump" },  /* auto */
  { 0x004C1030, (funptr_t) &dk2::MyPlayerInst::calcChecksum, "MyPlayerInst::calcChecksum" },  /* auto */
  { 0x004C1050, (funptr_t) &dk2::MyPlayerInst::dump, "MyPlayerInst::dump" },  /* auto */
  { 0x004C3F20, (funptr_t) &dk2::MyPlayerMessage::dump, "MyPlayerMessage::dump" },  /* auto */
  { 0x004C42E0, (funptr_t) &dk2::MyPlayerMessage::saveToTbDiscFile, "MyPlayerMessage::saveToTbDiscFile" },  /* auto */
  { 0x004C51D0, (funptr_t) &dk2::MyPlayerMessage::fun_4C51D0, "MyPlayerMessage::fun_4C51D0" },  /* auto */
  { 0x00521D00, (funptr_t) &dk2::MyPlayerMessage::fun_521D00, "MyPlayerMessage::fun_521D00" },  /* auto */
  { 0x004C4090, (funptr_t) &dk2::MyPlayerMessageQueue::createQueue, "MyPlayerMessageQueue::createQueue" },  /* auto */
  { 0x004C41A0, (funptr_t) &dk2::MyPlayerMessageQueue::clear, "MyPlayerMessageQueue::clear" },  /* auto */
  { 0x004C43B0, (funptr_t) &dk2::MyPlayerMessageQueue::saveToTbDiscFile, "MyPlayerMessageQueue::saveToTbDiscFile" },  /* auto */
  { 0x004C4470, (funptr_t) &dk2::MyPlayerMessageQueue::fun_4C4470, "MyPlayerMessageQueue::fun_4C4470" },  /* auto */
  { 0x004C4600, (funptr_t) &dk2::MyPlayerMessageQueue::fun_4C4600, "MyPlayerMessageQueue::fun_4C4600" },  /* auto */
  { 0x004C4B10, (funptr_t) &dk2::MyPlayerMessageQueue::dump, "MyPlayerMessageQueue::dump" },  /* auto */
  { 0x004C53F0, (funptr_t) &dk2::MyPlayerMessageQueue::fun_4C53F0, "MyPlayerMessageQueue::fun_4C53F0" },  /* auto */
  { 0x004C7890, (funptr_t) &dk2::MyPlayerRoomPlacmentInfo::calcChecksum, "MyPlayerRoomPlacmentInfo::calcChecksum" },  /* auto */
  { 0x004C78C0, (funptr_t) &dk2::MyPlayerRoomPlacmentInfo::dump, "MyPlayerRoomPlacmentInfo::dump" },  /* auto */
  { 0x005071D0, (funptr_t) &dk2::MyPlayerStatistics::calcChecksum, "MyPlayerStatistics::calcChecksum" },  /* auto */
  { 0x00507240, (funptr_t) &dk2::MyPlayerStatistics::dump, "MyPlayerStatistics::dump" },  /* auto */
  { 0x00526020, (funptr_t) &dk2::MyProfiler::constructor, "MyProfiler::constructor" },  /* auto */
  { 0x00526090, (funptr_t) &dk2::MyProfiler::constructor2, "MyProfiler::constructor2" },  /* auto */
  { 0x00526280, (funptr_t) &dk2::MyProfiler::dumpStats, "MyProfiler::dumpStats" },  /* auto */
  { 0x00526590, (funptr_t) &dk2::MyProfiler::draw3dScene, "MyProfiler::draw3dScene" },  /* auto */
  { 0x00526FF0, (funptr_t) &dk2::MyProfiler::attachPlayerI, "MyProfiler::attachPlayerI" },  /* auto */
  { 0x00527040, (funptr_t) &dk2::MyProfiler::attachCBridge, "MyProfiler::attachCBridge" },  /* auto */
  { 0x00527070, (funptr_t) &dk2::MyProfiler::clearCBridge, "MyProfiler::clearCBridge" },  /* auto */
  { 0x00527090, (funptr_t) &dk2::MyProfiler::attachCWorld, "MyProfiler::attachCWorld" },  /* auto */
  { 0x005270C0, (funptr_t) &dk2::MyProfiler::clearCWorld, "MyProfiler::clearCWorld" },  /* auto */
  { 0x005270E0, (funptr_t) &dk2::MyProfiler::attachCommunicationInterface, "MyProfiler::attachCommunicationInterface" },  /* auto */
  { 0x00527110, (funptr_t) &dk2::MyProfiler::clearCommunicationInterface, "MyProfiler::clearCommunicationInterface" },  /* auto */
  { 0x00527130, (funptr_t) &dk2::MyProfiler::pushAction, "MyProfiler::pushAction" },  /* auto */
  { 0x00527150, (funptr_t) &dk2::MyProfiler::sub_527150, "MyProfiler::sub_527150" },  /* auto */
  { 0x00527180, (funptr_t) &dk2::MyProfiler::handleActions, "MyProfiler::handleActions" },  /* auto */
  { 0x00527270, (funptr_t) &dk2::MyProfiler::fun_527270, "MyProfiler::fun_527270" },  /* auto */
  { 0x0055AF40, (funptr_t) &dk2::MyResources::constructor, "MyResources::constructor" },  /* auto */
  { 0x0055B120, (funptr_t) &dk2::MyResources::sub_55B120, "MyResources::sub_55B120" },  /* auto */
  { 0x0055B480, (funptr_t) &dk2::MyResources::saveToTbDiscFile, "MyResources::saveToTbDiscFile" },  /* auto */
  { 0x0055C020, (funptr_t) &dk2::MyResources::init_resources, "MyResources::init_resources" },  /* auto */
  { 0x0055C3C0, (funptr_t) &dk2::MyResources::resolveMovies, "MyResources::resolveMovies" },  /* auto */
  { 0x0055C7B0, (funptr_t) &dk2::MyResources::destructor, "MyResources::destructor" },  /* auto */
  { 0x0055C8E0, (funptr_t) &dk2::MyResources::fun_55C8E0, "MyResources::fun_55C8E0" },  /* auto */
  { 0x00562960, (funptr_t) &dk2::MyResources_f29CB::constructor, "MyResources_f29CB::constructor" },  /* auto */
  { 0x005629B0, (funptr_t) &dk2::MyResources_f29CB::fun_5629B0, "MyResources_f29CB::fun_5629B0" },  /* auto */
  { 0x005629C0, (funptr_t) &dk2::MyResources_f29CB::resolveValues, "MyResources_f29CB::resolveValues" },  /* auto */
  { 0x00562BB0, (funptr_t) &dk2::MyResources_f29CB::fun_562BB0, "MyResources_f29CB::fun_562BB0" },  /* auto */
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
  { 0x0055E5A0, (funptr_t) &dk2::MyResources_f2E38Obj::constructor, "MyResources_f2E38Obj::constructor" },  /* auto */
  { 0x0055E600, (funptr_t) &dk2::MyResources_f2E38Obj::fun_55E600, "MyResources_f2E38Obj::fun_55E600" },  /* auto */
  { 0x0055E630, (funptr_t) &dk2::MyResources_f2E38Obj::reopen_sav_file, "MyResources_f2E38Obj::reopen_sav_file" },  /* auto */
  { 0x0055E7D0, (funptr_t) &dk2::MyResources_f2E38Obj::load_sav_file, "MyResources_f2E38Obj::load_sav_file" },  /* auto */
  { 0x0055E9D0, (funptr_t) &dk2::MyResources_f2E38Obj::fun_55E9D0, "MyResources_f2E38Obj::fun_55E9D0" },  /* auto */
  { 0x0055EA10, (funptr_t) &dk2::MyResources_f2E38Obj::sub_55EA10, "MyResources_f2E38Obj::sub_55EA10" },  /* auto */
  { 0x0055EAB0, (funptr_t) &dk2::MyResources_f2E38Obj::sub_55EAB0, "MyResources_f2E38Obj::sub_55EAB0" },  /* auto */
  { 0x004EAB70, (funptr_t) &dk2::MyRoomDataObj::constructor, "MyRoomDataObj::constructor" },  /* auto */
  { 0x004EBFE0, (funptr_t) &dk2::MyRooms::constructor, "MyRooms::constructor" },  /* auto */
  { 0x004EC000, (funptr_t) &dk2::MyRooms::createRooms, "MyRooms::createRooms" },  /* auto */
  { 0x004EC190, (funptr_t) &dk2::MyRooms::clear, "MyRooms::clear" },  /* auto */
  { 0x004EC1E0, (funptr_t) &dk2::MyRooms::saveToTbDiscFile, "MyRooms::saveToTbDiscFile" },  /* auto */
  { 0x004EC360, (funptr_t) &dk2::MyRooms::fun_4EC360, "MyRooms::fun_4EC360" },  /* auto */
  { 0x004EC410, (funptr_t) &dk2::MyRooms::fun_4EC410, "MyRooms::fun_4EC410" },  /* auto */
  { 0x004ECD00, (funptr_t) &dk2::MyRooms::fun_4ECD00, "MyRooms::fun_4ECD00" },  /* auto */
  { 0x004ECDB0, (funptr_t) &dk2::MyRooms::fun_4ECDB0, "MyRooms::fun_4ECDB0" },  /* auto */
  { 0x004ECEB0, (funptr_t) &dk2::MyRooms::fun_4ECEB0, "MyRooms::fun_4ECEB0" },  /* auto */
  { 0x004EDB70, (funptr_t) &dk2::MyRooms::calcChecksum, "MyRooms::calcChecksum" },  /* auto */
  { 0x004EDBB0, (funptr_t) &dk2::MyRooms::dump, "MyRooms::dump" },  /* auto */
  { 0x004EDC10, (funptr_t) &dk2::MyRooms::fun_4EDC10, "MyRooms::fun_4EDC10" },  /* auto */
  { 0x004EDFC0, (funptr_t) &dk2::MyRooms::RoomManager_cpp_4EDFC0, "MyRooms::RoomManager_cpp_4EDFC0" },  /* auto */
  { 0x004EF1F0, (funptr_t) &dk2::MyRooms::fun_4EF1F0, "MyRooms::fun_4EF1F0" },  /* auto */
  { 0x004EF5E0, (funptr_t) &dk2::MyRooms::fun_4EF5E0, "MyRooms::fun_4EF5E0" },  /* auto */
  { 0x004EF6C0, (funptr_t) &dk2::MyRooms::fun_4EF6C0, "MyRooms::fun_4EF6C0" },  /* auto */
  { 0x004EF730, (funptr_t) &dk2::MyRooms::fun_4EF730, "MyRooms::fun_4EF730" },  /* auto */
  { 0x004EF980, (funptr_t) &dk2::MyRooms::fun_4EF980, "MyRooms::fun_4EF980" },  /* auto */
  { 0x004EFCE0, (funptr_t) &dk2::MyRooms::fun_4EFCE0, "MyRooms::fun_4EFCE0" },  /* auto */
  { 0x004EFDE0, (funptr_t) &dk2::MyRooms::fun_4EFDE0, "MyRooms::fun_4EFDE0" },  /* auto */
  { 0x004EFF00, (funptr_t) &dk2::MyRooms::fun_4EFF00, "MyRooms::fun_4EFF00" },  /* auto */
  { 0x004F0360, (funptr_t) &dk2::MyRooms::fun_4F0360, "MyRooms::fun_4F0360" },  /* auto */
  { 0x004F0D70, (funptr_t) &dk2::MyRooms::fun_4F0D70, "MyRooms::fun_4F0D70" },  /* auto */
  { 0x004F0E30, (funptr_t) &dk2::MyRooms::fun_4F0E30, "MyRooms::fun_4F0E30" },  /* auto */
  { 0x0057C420, (funptr_t) &dk2::MyScaledSurface::constructor, "MyScaledSurface::constructor" },  /* auto */
  { 0x0057C700, (funptr_t) &dk2::MyScaledSurface::resolve, "MyScaledSurface::resolve" },  /* auto */
  { 0x00581B80, (funptr_t) &dk2::MyScaledSurface::sub_581B80, "MyScaledSurface::sub_581B80" },  /* auto */
  { 0x005B7610, (funptr_t) &dk2::MySemaphore::constructor, "MySemaphore::constructor" },  /* auto */
  { 0x005B7630, (funptr_t) &dk2::MySemaphore::close, "MySemaphore::close" },  /* auto */
  { 0x005B7640, (funptr_t) &dk2::MySemaphore::set, "MySemaphore::set" },  /* auto */
  { 0x005B7670, (funptr_t) &dk2::MySemaphore::waitFor, "MySemaphore::waitFor" },  /* auto */
  { 0x005B76A0, (funptr_t) &dk2::MySemaphore::release, "MySemaphore::release" },  /* auto */
  { 0x005DB9E0, (funptr_t) &dk2::MySemaphore::setAndRelease, "MySemaphore::setAndRelease" },  /* auto */
  { 0x005BB710, (funptr_t) &dk2::MySharedObj::deleting_destructor, "MySharedObj::deleting_destructor" },  /* auto */
  { 0x005DCA30, (funptr_t) &dk2::MySharedObj::constructor, "MySharedObj::constructor" },  /* auto */
  { 0x0062FC00, (funptr_t) &dk2::MySharedObj::addRef, "MySharedObj::addRef" },  /* auto */
  { 0x0062FC10, (funptr_t) &dk2::MySharedObj::release, "MySharedObj::release" },  /* auto */
  { 0x0062DAC0, (funptr_t) &dk2::MySharedText::scalar_destructor, "MySharedText::scalar_destructor" },  /* auto */
  { 0x0062E4F0, (funptr_t) &dk2::MySharedText::destructor, "MySharedText::destructor" },  /* auto */
  { 0x0062FBF0, (funptr_t) &dk2::MySharedText::constructor, "MySharedText::constructor" },  /* auto */
  { 0x004ACD60, (funptr_t) &dk2::MyShotDataObj::constructor, "MyShotDataObj::constructor" },  /* auto */
  { 0x005DAE80, (funptr_t) &dk2::MySignalBase::constructor, "MySignalBase::constructor" },  /* auto */
  { 0x005DAEA0, (funptr_t) &dk2::MySignalBase::deleting_destructor, "MySignalBase::deleting_destructor" },  /* auto */
  { 0x005DAEC0, (funptr_t) &dk2::MySignalBase::destructor, "MySignalBase::destructor" },  /* auto */
  { 0x005DAF20, (funptr_t) &dk2::MySignalBase::recreateEvent, "MySignalBase::recreateEvent" },  /* auto */
  { 0x005DAF60, (funptr_t) &dk2::MySignalBase::closeEvent, "MySignalBase::closeEvent" },  /* auto */
  { 0x005DAF80, (funptr_t) &dk2::MySignalBase::recreateEvent_0, "MySignalBase::recreateEvent_0" },  /* auto */
  { 0x005DAFB0, (funptr_t) &dk2::MySignalBase::setControlKeysUpdater, "MySignalBase::setControlKeysUpdater" },  /* auto */
  { 0x0060F230, (funptr_t) &dk2::MySoundLoader::constructor, "MySoundLoader::constructor" },  /* auto */
  { 0x0060F450, (funptr_t) &dk2::MySoundLoader::scalar_destructor, "MySoundLoader::scalar_destructor" },  /* auto */
  { 0x0060F4E0, (funptr_t) &dk2::MySoundLoader::destructor, "MySoundLoader::destructor" },  /* auto */
  { 0x0060F7B0, (funptr_t) &dk2::MySoundLoader::openDirectory, "MySoundLoader::openDirectory" },  /* auto */
  { 0x0060F7E0, (funptr_t) &dk2::MySoundLoader::loadBankSfx, "MySoundLoader::loadBankSfx" },  /* auto */
  { 0x0060FBC0, (funptr_t) &dk2::MySoundLoader::fun_60FBC0, "MySoundLoader::fun_60FBC0" },  /* auto */
  { 0x00610070, (funptr_t) &dk2::MySoundLoader::sub_610070, "MySoundLoader::sub_610070" },  /* auto */
  { 0x006101E0, (funptr_t) &dk2::MySoundLoader::fun_6101E0, "MySoundLoader::fun_6101E0" },  /* auto */
  { 0x006103B0, (funptr_t) &dk2::MySoundLoader::fun_6103B0, "MySoundLoader::fun_6103B0" },  /* auto */
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
  { 0x005D7DD0, (funptr_t) &dk2::MyStr::cmp, "MyStr::cmp" },  /* auto */
  { 0x005D7E80, (funptr_t) &dk2::MyStr::findSubstrOffs, "MyStr::findSubstrOffs" },  /* auto */
  { 0x005D7ED0, (funptr_t) &dk2::MyStr::fun_5D7ED0, "MyStr::fun_5D7ED0" },  /* auto */
  { 0x005D7FE0, (funptr_t) &dk2::MyStr::getCharRIdx, "MyStr::getCharRIdx" },  /* auto */
  { 0x005D8050, (funptr_t) &dk2::MyStr::subStrTo, "MyStr::subStrTo" },  /* auto */
  { 0x005D8080, (funptr_t) &dk2::MyStr::subStrNFr, "MyStr::subStrNFr" },  /* auto */
  { 0x005D80C0, (funptr_t) &dk2::MyStr::subStrFr, "MyStr::subStrFr" },  /* auto */
  { 0x005D8100, (funptr_t) &dk2::MyStr::subStr, "MyStr::subStr" },  /* auto */
  { 0x005D71E0, (funptr_t) &dk2::MyStream::constructor, "MyStream::constructor" },  /* auto */
  { 0x005D7200, (funptr_t) &dk2::MyStream::scalar_destructor, "MyStream::scalar_destructor" },  /* auto */
  { 0x005D7220, (funptr_t) &dk2::MyStream::destructor, "MyStream::destructor" },  /* auto */
  { 0x005D7230, (funptr_t) &dk2::MyStream::addRef, "MyStream::addRef" },  /* auto */
  { 0x005D7240, (funptr_t) &dk2::MyStream::release, "MyStream::release" },  /* auto */
  { 0x005D7290, (funptr_t) &dk2::MyStream::wrapStream, "MyStream::wrapStream" },  /* auto */
  { 0x005D72B0, (funptr_t) &dk2::MyStream::mapToBuf_redirect, "MyStream::mapToBuf_redirect" },  /* auto */
  { 0x005D72D0, (funptr_t) &dk2::MyStream::unmap_redirect, "MyStream::unmap_redirect" },  /* auto */
  { 0x005D72E0, (funptr_t) &dk2::MyStream::getSemaphore_redirect, "MyStream::getSemaphore_redirect" },  /* auto */
  { 0x005D72F0, (funptr_t) &dk2::MyStream::flush_set_m1, "MyStream::flush_set_m1" },  /* auto */
  { 0x0058DD60, (funptr_t) &dk2::MyStringHashMap::constructor, "MyStringHashMap::constructor" },  /* auto */
  { 0x0058DD90, (funptr_t) &dk2::MyStringHashMap::cleanup, "MyStringHashMap::cleanup" },  /* auto */
  { 0x0058DE00, (funptr_t) &dk2::MyStringHashMap::put, "MyStringHashMap::put" },  /* auto */
  { 0x0058DF40, (funptr_t) &dk2::MyStringHashMap::getEntryIdx, "MyStringHashMap::getEntryIdx" },  /* auto */
  { 0x005D7D90, (funptr_t) &dk2::MySubStr::isNotStartsFromChar, "MySubStr::isNotStartsFromChar" },  /* auto */
  { 0x0052D3E0, (funptr_t) &dk2::MySurfDesc::constructor, "MySurfDesc::constructor" },  /* auto */
  { 0x005B5250, (funptr_t) &dk2::MySurface::MySurface_empty, "MySurface::MySurface_empty" },  /* auto */
  { 0x005B5270, (funptr_t) &dk2::MySurface::constructor, "MySurface::constructor" },  /* auto */
  { 0x005B52C0, (funptr_t) &dk2::MySurface::allocSurfaceIfNot, "MySurface::allocSurfaceIfNot" },  /* auto */
  { 0x005B5310, (funptr_t) &dk2::MySurface::fun_5B5310, "MySurface::fun_5B5310" },  /* auto */
  { 0x005B5330, (funptr_t) &dk2::MySurface::copyAreaTo, "MySurface::copyAreaTo" },  /* auto */
  { 0x00590B40, (funptr_t) &dk2::MySurfaceWrapper::constructor, "MySurfaceWrapper::constructor" },  /* auto */
  { 0x00590B70, (funptr_t) &dk2::MySurfaceWrapper::sub_590B70, "MySurfaceWrapper::sub_590B70" },  /* auto */
  { 0x00590BC0, (funptr_t) &dk2::MySurfaceWrapper::withData, "MySurfaceWrapper::withData" },  /* auto */
  { 0x0062F8A0, (funptr_t) &dk2::MyTR2::linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle, "MyTR2::linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle" },  /* auto */
  { 0x0062F680, (funptr_t) &dk2::MyTR4::linesOneTypeEx_doCalcAabb_verticalMiddle, "MyTR4::linesOneTypeEx_doCalcAabb_verticalMiddle" },  /* auto */
  { 0x0062F6C0, (funptr_t) &dk2::MyTR4::linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle, "MyTR4::linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle" },  /* auto */
  { 0x0062F720, (funptr_t) &dk2::MyTR5::linesOneTypeEx_doCalcAabb_verticalMiddle, "MyTR5::linesOneTypeEx_doCalcAabb_verticalMiddle" },  /* auto */
  { 0x0062F790, (funptr_t) &dk2::MyTR5::linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle, "MyTR5::linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle" },  /* auto */
  { 0x0062F940, (funptr_t) &dk2::MyTR6::linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle, "MyTR6::linesOneTypeEx_doCalcAabbAndDraw_verticalMiddle" },  /* auto */
  { 0x0062F4D0, (funptr_t) &dk2::MyTRBase::constructor, "MyTRBase::constructor" },  /* auto */
  { 0x0062F4E0, (funptr_t) &dk2::MyTRBase::scalar_destructor, "MyTRBase::scalar_destructor" },  /* auto */
  { 0x0062F500, (funptr_t) &dk2::MyTRBase::destructor, "MyTRBase::destructor" },  /* auto */
  { 0x0062F510, (funptr_t) &dk2::MyTRBase::linesOneTypeEx_doDrawOrCalcAabb, "MyTRBase::linesOneTypeEx_doDrawOrCalcAabb" },  /* auto */
  { 0x0062F820, (funptr_t) &dk2::MyTRBase::linesOneTypeEx_doCalcAabb_verticalMiddle, "MyTRBase::linesOneTypeEx_doCalcAabb_verticalMiddle" },  /* auto */
  { 0x0062D2B0, (funptr_t) &dk2::MyTRCtx::constructor, "MyTRCtx::constructor" },  /* auto */
  { 0x0062D530, (funptr_t) &dk2::MyTRCtx2Sub::constructor, "MyTRCtx2Sub::constructor" },  /* auto */
  { 0x00507A50, (funptr_t) &dk2::MyTaskStack::constructor, "MyTaskStack::constructor" },  /* auto */
  { 0x00507A80, (funptr_t) &dk2::MyTaskStack::open, "MyTaskStack::open" },  /* auto */
  { 0x00507AA0, (funptr_t) &dk2::MyTaskStack::destructor, "MyTaskStack::destructor" },  /* auto */
  { 0x00507AB0, (funptr_t) &dk2::MyTaskStack::init, "MyTaskStack::init" },  /* auto */
  { 0x00507BB0, (funptr_t) &dk2::MyTaskStack::fun_507BB0, "MyTaskStack::fun_507BB0" },  /* auto */
  { 0x00508110, (funptr_t) &dk2::MyTaskStack::fun_508110, "MyTaskStack::fun_508110" },  /* auto */
  { 0x00508160, (funptr_t) &dk2::MyTaskStack::fun_508160, "MyTaskStack::fun_508160" },  /* auto */
  { 0x005081C0, (funptr_t) &dk2::MyTaskStack::fun_5081C0, "MyTaskStack::fun_5081C0" },  /* auto */
  { 0x00508200, (funptr_t) &dk2::MyTaskStack::fun_508200, "MyTaskStack::fun_508200" },  /* auto */
  { 0x00508300, (funptr_t) &dk2::MyTaskStack::calcChecksum, "MyTaskStack::calcChecksum" },  /* auto */
  { 0x005083B0, (funptr_t) &dk2::MyTaskStack::dump, "MyTaskStack::dump" },  /* auto */
  { 0x00608640, (funptr_t) &dk2::MyTbAudioSystem::constructor, "MyTbAudioSystem::constructor" },  /* auto */
  { 0x006086C0, (funptr_t) &dk2::MyTbAudioSystem::deleting_destructor, "MyTbAudioSystem::deleting_destructor" },  /* auto */
  { 0x00608790, (funptr_t) &dk2::MyTbAudioSystem::fun_608790, "MyTbAudioSystem::fun_608790" },  /* auto */
  { 0x00608E40, (funptr_t) &dk2::MyTbAudioSystem::applyAction, "MyTbAudioSystem::applyAction" },  /* auto */
  { 0x004F6570, (funptr_t) &dk2::MyTerrainDataObj::constructor, "MyTerrainDataObj::constructor" },  /* auto */
  { 0x006334A0, (funptr_t) &dk2::MyTextFont::scalar_destructor, "MyTextFont::scalar_destructor" },  /* auto */
  { 0x006334C0, (funptr_t) &dk2::MyTextFont::destructor, "MyTextFont::destructor" },  /* auto */
  { 0x006334D0, (funptr_t) &dk2::MyTextFont::constructor, "MyTextFont::constructor" },  /* auto */
  { 0x00633560, (funptr_t) &dk2::MyTextFont::readMBChar, "MyTextFont::readMBChar" },  /* auto */
  { 0x006335B0, (funptr_t) &dk2::MyTextFont::sub_6335B0, "MyTextFont::sub_6335B0" },  /* auto */
  { 0x006335D0, (funptr_t) &dk2::MyTextFont::getCharSize, "MyTextFont::getCharSize" },  /* auto */
  { 0x00633630, (funptr_t) &dk2::MyTextFont::getMaxHeight, "MyTextFont::getMaxHeight" },  /* auto */
  { 0x00633650, (funptr_t) &dk2::MyTextFont::probably_getFontType, "MyTextFont::probably_getFontType" },  /* auto */
  { 0x00633660, (funptr_t) &dk2::MyTextFont::getFlags, "MyTextFont::getFlags" },  /* auto */
  { 0x00633670, (funptr_t) &dk2::MyTextFont::getCharBuffer, "MyTextFont::getCharBuffer" },  /* auto */
  { 0x006336A0, (funptr_t) &dk2::MyTextFont::getCharDesc, "MyTextFont::getCharDesc" },  /* auto */
  { 0x00634160, (funptr_t) &dk2::MyTextFontBase::constructor, "MyTextFontBase::constructor" },  /* auto */
  { 0x00634180, (funptr_t) &dk2::MyTextFontBase::scalar_destructor, "MyTextFontBase::scalar_destructor" },  /* auto */
  { 0x006341A0, (funptr_t) &dk2::MyTextFontBase::destructor, "MyTextFontBase::destructor" },  /* auto */
  { 0x0062DAF0, (funptr_t) &dk2::MyTextFormatMB::scalar_destructor, "MyTextFormatMB::scalar_destructor" },  /* auto */
  { 0x00630170, (funptr_t) &dk2::MyTextFormatMB::constructor, "MyTextFormatMB::constructor" },  /* auto */
  { 0x006301A0, (funptr_t) &dk2::MyTextFormatMB::fun_6301A0, "MyTextFormatMB::fun_6301A0" },  /* auto */
  { 0x00630200, (funptr_t) &dk2::MyTextFormatMB::printCh_map, "MyTextFormatMB::printCh_map" },  /* auto */
  { 0x00630230, (funptr_t) &dk2::MyTextFormatMB::print, "MyTextFormatMB::print" },  /* auto */
  { 0x006302B0, (funptr_t) &dk2::MyTextFormatMB::printCh, "MyTextFormatMB::printCh" },  /* auto */
  { 0x006302E0, (funptr_t) &dk2::MyTextFormatMB::destructor, "MyTextFormatMB::destructor" },  /* auto */
  { 0x0062DB30, (funptr_t) &dk2::MyTextFormatWChar::scalar_destructor, "MyTextFormatWChar::scalar_destructor" },  /* auto */
  { 0x00630310, (funptr_t) &dk2::MyTextFormatWChar::constructor, "MyTextFormatWChar::constructor" },  /* auto */
  { 0x00630340, (funptr_t) &dk2::MyTextFormatWChar::fun_630340, "MyTextFormatWChar::fun_630340" },  /* auto */
  { 0x00630430, (funptr_t) &dk2::MyTextFormatWChar::printCh_map, "MyTextFormatWChar::printCh_map" },  /* auto */
  { 0x006304A0, (funptr_t) &dk2::MyTextFormatWChar::print, "MyTextFormatWChar::print" },  /* auto */
  { 0x00630510, (funptr_t) &dk2::MyTextFormatWChar::printCh, "MyTextFormatWChar::printCh" },  /* auto */
  { 0x00630530, (funptr_t) &dk2::MyTextFormatWChar::destructor, "MyTextFormatWChar::destructor" },  /* auto */
  { 0x00633480, (funptr_t) &dk2::MyTextMB::scalar_destructor, "MyTextMB::scalar_destructor" },  /* auto */
  { 0x0062C8F0, (funptr_t) &dk2::MyTextRenderer::constructor, "MyTextRenderer::constructor" },  /* auto */
  { 0x0062C990, (funptr_t) &dk2::MyTextRenderer::scalar_destructor, "MyTextRenderer::scalar_destructor" },  /* auto */
  { 0x0062C9B0, (funptr_t) &dk2::MyTextRenderer::destructor, "MyTextRenderer::destructor" },  /* auto */
  { 0x0062CA00, (funptr_t) &dk2::MyTextRenderer::selectMyTR, "MyTextRenderer::selectMyTR" },  /* auto */
  { 0x0062CA70, (funptr_t) &dk2::MyTextRenderer::selectMyCR, "MyTextRenderer::selectMyCR" },  /* auto */
  { 0x0062CAE0, (funptr_t) &dk2::MyTextRenderer::renderText, "MyTextRenderer::renderText" },  /* auto */
  { 0x0062CD80, (funptr_t) &dk2::MyTextRenderer::renderText2, "MyTextRenderer::renderText2" },  /* auto */
  { 0x0058FAA0, (funptr_t) &dk2::MyTextures::constructor, "MyTextures::constructor" },  /* auto */
  { 0x00591070, (funptr_t) &dk2::MyTextures::loadCompressed, "MyTextures::loadCompressed" },  /* auto */
  { 0x004AA330, (funptr_t) &dk2::MyTrapDataObj::constructor, "MyTrapDataObj::constructor" },  /* auto */
  { 0x00508910, (funptr_t) &dk2::MyTriggerAction::dump, "MyTriggerAction::dump" },  /* auto */
  { 0x005085F0, (funptr_t) &dk2::MyTriggerWhen::constructor, "MyTriggerWhen::constructor" },  /* auto */
  { 0x00508600, (funptr_t) &dk2::MyTriggerWhen::fun_508600, "MyTriggerWhen::fun_508600" },  /* auto */
  { 0x00508640, (funptr_t) &dk2::MyTriggerWhen::fun_508640, "MyTriggerWhen::fun_508640" },  /* auto */
  { 0x00508740, (funptr_t) &dk2::MyTriggerWhen::dump, "MyTriggerWhen::dump" },  /* auto */
  { 0x00508810, (funptr_t) &dk2::MyTriggerWhen::fun_508810, "MyTriggerWhen::fun_508810" },  /* auto */
  { 0x0062E050, (funptr_t) &dk2::MyUniToMbMap::constructor, "MyUniToMbMap::constructor" },  /* auto */
  { 0x0062E090, (funptr_t) &dk2::MyUniToMbMap::scalar_destructor, "MyUniToMbMap::scalar_destructor" },  /* auto */
  { 0x0062E0B0, (funptr_t) &dk2::MyUniToMbMap::destructor, "MyUniToMbMap::destructor" },  /* auto */
  { 0x0062E0E0, (funptr_t) &dk2::MyUniToMbMap::convertChar, "MyUniToMbMap::convertChar" },  /* auto */
  { 0x0062E0F0, (funptr_t) &dk2::MyUniToMbMap::convertChar2, "MyUniToMbMap::convertChar2" },  /* auto */
  { 0x0062E1F0, (funptr_t) &dk2::MyUniToMbMap::convert, "MyUniToMbMap::convert" },  /* auto */
  { 0x00563C50, (funptr_t) &dk2::MyVideoSettings::constructor, "MyVideoSettings::constructor" },  /* auto */
  { 0x00563D40, (funptr_t) &dk2::MyVideoSettings::destructor, "MyVideoSettings::destructor" },  /* auto */
  { 0x00563DC0, (funptr_t) &dk2::MyVideoSettings::sub_563DC0, "MyVideoSettings::sub_563DC0" },  /* auto */
  { 0x00563FB0, (funptr_t) &dk2::MyVideoSettings::sub_563FB0, "MyVideoSettings::sub_563FB0" },  /* auto */
  { 0x00564B00, (funptr_t) &dk2::MyVideoSettings::sub_564B00, "MyVideoSettings::sub_564B00" },  /* auto */
  { 0x00565FD0, (funptr_t) &dk2::MyVideoSettings::sub_565FD0, "MyVideoSettings::sub_565FD0" },  /* auto */
  { 0x005660F0, (funptr_t) &dk2::MyVideoSettings::fun_5660F0, "MyVideoSettings::fun_5660F0" },  /* auto */
  { 0x005661A0, (funptr_t) &dk2::MyVideoSettings::setSelected3dEngine, "MyVideoSettings::setSelected3dEngine" },  /* auto */
  { 0x00566220, (funptr_t) &dk2::MyVideoSettings::fun_566220, "MyVideoSettings::fun_566220" },  /* auto */
  { 0x00566A70, (funptr_t) &dk2::MyVideoSettings::textIdToResolutionId, "MyVideoSettings::textIdToResolutionId" },  /* auto */
  { 0x00566DA0, (funptr_t) &dk2::MyVideoSettings::sub_566DA0, "MyVideoSettings::sub_566DA0" },  /* auto */
  { 0x00566E40, (funptr_t) &dk2::MyVideoSettings::sub_566E40, "MyVideoSettings::sub_566E40" },  /* auto */
  { 0x00566EC0, (funptr_t) &dk2::MyVideoSettings::sub_566EC0, "MyVideoSettings::sub_566EC0" },  /* auto */
  { 0x00566F40, (funptr_t) &dk2::MyVideoSettings::sub_566F40, "MyVideoSettings::sub_566F40" },  /* auto */
  { 0x005D8370, (funptr_t) &dk2::MyWadDirectory::constructor, "MyWadDirectory::constructor" },  /* auto */
  { 0x005D8420, (funptr_t) &dk2::MyWadDirectory::deleting_destructor, "MyWadDirectory::deleting_destructor" },  /* auto */
  { 0x005D8440, (funptr_t) &dk2::MyWadDirectory::destructor, "MyWadDirectory::destructor" },  /* auto */
  { 0x005D8510, (funptr_t) &dk2::MyWadDirectory::clearData, "MyWadDirectory::clearData" },  /* auto */
  { 0x005D8560, (funptr_t) &dk2::MyWadDirectory::readAndParse, "MyWadDirectory::readAndParse" },  /* auto */
  { 0x005D8850, (funptr_t) &dk2::MyWadDirectory::sub_5D8850, "MyWadDirectory::sub_5D8850" },  /* auto */
  { 0x005D8A00, (funptr_t) &dk2::MyWadDirectory::sub_5D8A00, "MyWadDirectory::sub_5D8A00" },  /* auto */
  { 0x005D8A60, (funptr_t) &dk2::MyWadDirectory::sub_5D8A60, "MyWadDirectory::sub_5D8A60" },  /* auto */
  { 0x005D8B10, (funptr_t) &dk2::MyWadDirectory::openFile, "MyWadDirectory::openFile" },  /* auto */
  { 0x005FFC80, (funptr_t) &dk2::MyWadFileStream::constructor, "MyWadFileStream::constructor" },  /* auto */
  { 0x005FFCB0, (funptr_t) &dk2::MyWadFileStream::init, "MyWadFileStream::init" },  /* auto */
  { 0x005FFCD0, (funptr_t) &dk2::MyWadFileStream::closeFile, "MyWadFileStream::closeFile" },  /* auto */
  { 0x005FFCE0, (funptr_t) &dk2::MyWadFileStream::readBytes, "MyWadFileStream::readBytes" },  /* auto */
  { 0x005FFD30, (funptr_t) &dk2::MyWadFileStream::seek, "MyWadFileStream::seek" },  /* auto */
  { 0x005FFDC0, (funptr_t) &dk2::MyWadFileStream::mapFileToBuf, "MyWadFileStream::mapFileToBuf" },  /* auto */
  { 0x005FEF70, (funptr_t) &dk2::MyWadUnkObj::sub_5FEF70, "MyWadUnkObj::sub_5FEF70" },  /* auto */
  { 0x005FF2B0, (funptr_t) &dk2::MyWadUnkObj::sub_5FF2B0, "MyWadUnkObj::sub_5FF2B0" },  /* auto */
  { 0x005FF3D0, (funptr_t) &dk2::MyWadUnkObj::sub_5FF3D0, "MyWadUnkObj::sub_5FF3D0" },  /* auto */
  { 0x005FF3F0, (funptr_t) &dk2::MyWadUnkObj::sub_5FF3F0, "MyWadUnkObj::sub_5FF3F0" },  /* auto */
  { 0x005BBA10, (funptr_t) &dk2::MyWindowMsgs::scalar_destructor, "MyWindowMsgs::scalar_destructor" },  /* auto */
  { 0x005DAFE0, (funptr_t) &dk2::MyWindowMsgs::windowMsgWEx, "MyWindowMsgs::windowMsgWEx" },  /* auto */
  { 0x005DB110, (funptr_t) &dk2::MyWindowMsgs::windowMsgW, "MyWindowMsgs::windowMsgW" },  /* auto */
  { 0x005DB130, (funptr_t) &dk2::MyWindowMsgs::sub_5DB130, "MyWindowMsgs::sub_5DB130" },  /* auto */
  { 0x005DB1F0, (funptr_t) &dk2::MyWindowMsgs::recreateEvent, "MyWindowMsgs::recreateEvent" },  /* auto */
  { 0x00517FB0, (funptr_t) &dk2::MyWorldSacrifice::dump, "MyWorldSacrifice::dump" },  /* auto */
  { 0x005FFAD0, (funptr_t) &dk2::MyZlibFileStream::constructor, "MyZlibFileStream::constructor" },  /* auto */
  { 0x005FFC10, (funptr_t) &dk2::MyZlibFileStream::openFile, "MyZlibFileStream::openFile" },  /* auto */
  { 0x0056F850, (funptr_t) &dk2::My_sub_56F850::constructor, "My_sub_56F850::constructor" },  /* auto */
  { 0x0057A9A0, (funptr_t) &dk2::Obj57AD20::sub_57A9A0, "Obj57AD20::sub_57A9A0" },  /* auto */
  { 0x0057AC40, (funptr_t) &dk2::Obj57AD20::sub_57AC40, "Obj57AD20::sub_57AC40" },  /* auto */
  { 0x0057AD20, (funptr_t) &dk2::Obj57AD20::constructor, "Obj57AD20::constructor" },  /* auto */
  { 0x0057AFF0, (funptr_t) &dk2::Obj57AD20::sub_57AFF0, "Obj57AD20::sub_57AFF0" },  /* auto */
  { 0x0057B0E0, (funptr_t) &dk2::Obj57AD20::sub_57B0E0, "Obj57AD20::sub_57B0E0" },  /* auto */
  { 0x0057B6D0, (funptr_t) &dk2::Obj57AD20::sub_57B6D0, "Obj57AD20::sub_57B6D0" },  /* auto */
  { 0x0057BCB0, (funptr_t) &dk2::Obj57BCB0::constructor, "Obj57BCB0::constructor" },  /* auto */
  { 0x0057BF00, (funptr_t) &dk2::Obj57BCB0::sub_57BF00, "Obj57BCB0::sub_57BF00" },  /* auto */
  { 0x0057C080, (funptr_t) &dk2::Obj57BCB0::sub_57C080, "Obj57BCB0::sub_57C080" },  /* auto */
  { 0x0058EF60, (funptr_t) &dk2::Obj58EF60::constructor, "Obj58EF60::constructor" },  /* auto */
  { 0x0058F030, (funptr_t) &dk2::Obj58EF60::sub_58F030, "Obj58EF60::sub_58F030" },  /* auto */
  { 0x005587E0, (funptr_t) &dk2::Obj6723A0::getPrimarySurf, "Obj6723A0::getPrimarySurf" },  /* auto */
  { 0x005BAEF0, (funptr_t) &dk2::Obj6723A0::scalar_destructor, "Obj6723A0::scalar_destructor" },  /* auto */
  { 0x005D9910, (funptr_t) &dk2::Obj6723A0::getCurOffScreen, "Obj6723A0::getCurOffScreen" },  /* auto */
  { 0x005D9920, (funptr_t) &dk2::Obj6723A0::getOffScreenAabb, "Obj6723A0::getOffScreenAabb" },  /* auto */
  { 0x005D9980, (funptr_t) &dk2::Obj6723A0::isSurfaceFlag, "Obj6723A0::isSurfaceFlag" },  /* auto */
  { 0x005BAF20, (funptr_t) &dk2::Obj6723B8::scalar_destructor, "Obj6723B8::scalar_destructor" },  /* auto */
  { 0x005FCCD0, (funptr_t) &dk2::Obj672500::init, "Obj672500::init" },  /* auto */
  { 0x005FCD60, (funptr_t) &dk2::Obj672500::convertPixel, "Obj672500::convertPixel" },  /* auto */
  { 0x005FCF70, (funptr_t) &dk2::Obj672500::selfConvertPixel, "Obj672500::selfConvertPixel" },  /* auto */
  { 0x005FBBD0, (funptr_t) &dk2::Obj672510::init, "Obj672510::init" },  /* auto */
  { 0x005FBCA0, (funptr_t) &dk2::Obj672510::convertPixel, "Obj672510::convertPixel" },  /* auto */
  { 0x005FC460, (funptr_t) &dk2::Obj672510::selfConvertPixel, "Obj672510::selfConvertPixel" },  /* auto */
  { 0x005FCC20, (funptr_t) &dk2::Obj672510::sub_5FCC20, "Obj672510::sub_5FCC20" },  /* auto */
  { 0x005D2820, (funptr_t) &dk2::Obj672520Interface::deleting_destructor, "Obj672520Interface::deleting_destructor" },  /* auto */
  { 0x005D2840, (funptr_t) &dk2::Obj672520Interface::scalar_destructor, "Obj672520Interface::scalar_destructor" },  /* auto */
  { 0x005DB7C0, (funptr_t) &dk2::Obj672844::constructor, "Obj672844::constructor" },  /* auto */
  { 0x005DB800, (funptr_t) &dk2::Obj672844::scalar_destructor, "Obj672844::scalar_destructor" },  /* auto */
  { 0x005DB820, (funptr_t) &dk2::Obj672844::destructor, "Obj672844::destructor" },  /* auto */
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
  { 0x005FD150, (funptr_t) &dk2::Obj672E70::constructor, "Obj672E70::constructor" },  /* auto */
  { 0x005FD1B0, (funptr_t) &dk2::Obj672E70::scalar_destructor, "Obj672E70::scalar_destructor" },  /* auto */
  { 0x005FD1D0, (funptr_t) &dk2::Obj672E70::destructor, "Obj672E70::destructor" },  /* auto */
  { 0x005FD220, (funptr_t) &dk2::Obj672E70::init, "Obj672E70::init" },  /* auto */
  { 0x005FD3C0, (funptr_t) &dk2::Obj672E70::sub_5FD3C0, "Obj672E70::sub_5FD3C0" },  /* auto */
  { 0x005FD3E0, (funptr_t) &dk2::Obj672E70::convertPixel, "Obj672E70::convertPixel" },  /* auto */
  { 0x005FD510, (funptr_t) &dk2::Obj672E70::selfConvertPixel, "Obj672E70::selfConvertPixel" },  /* auto */
  { 0x005FD7B0, (funptr_t) &dk2::Obj672E80::constructor, "Obj672E80::constructor" },  /* auto */
  { 0x005FD800, (funptr_t) &dk2::Obj672E80::scalar_destructor, "Obj672E80::scalar_destructor" },  /* auto */
  { 0x005FD820, (funptr_t) &dk2::Obj672E80::destructor, "Obj672E80::destructor" },  /* auto */
  { 0x005FD830, (funptr_t) &dk2::Obj672E80::init, "Obj672E80::init" },  /* auto */
  { 0x005FDAE0, (funptr_t) &dk2::Obj672E80::convertPixel, "Obj672E80::convertPixel" },  /* auto */
  { 0x005D2520, (funptr_t) &dk2::Obj79DC68::constructor, "Obj79DC68::constructor" },  /* auto */
  { 0x005D2530, (funptr_t) &dk2::Obj79DC68::sub_5D2530, "Obj79DC68::sub_5D2530" },  /* auto */
  { 0x005D2890, (funptr_t) &dk2::Obj79DC68::convertPixels, "Obj79DC68::convertPixels" },  /* auto */
  { 0x005D2920, (funptr_t) &dk2::Obj79DC68::destructor, "Obj79DC68::destructor" },  /* auto */
  { 0x0052EF00, (funptr_t) &dk2::PixelMask::constructor, "PixelMask::constructor" },  /* auto */
  { 0x004C1E00, (funptr_t) &dk2::PlayerList::init, "PlayerList::init" },  /* auto */
  { 0x004C1E20, (funptr_t) &dk2::PlayerList::createPlayers, "PlayerList::createPlayers" },  /* auto */
  { 0x004C2010, (funptr_t) &dk2::PlayerList::clear, "PlayerList::clear" },  /* auto */
  { 0x004C2050, (funptr_t) &dk2::PlayerList::saveToTbDiscFile, "PlayerList::saveToTbDiscFile" },  /* auto */
  { 0x004C2110, (funptr_t) &dk2::PlayerList::fun_4C2110, "PlayerList::fun_4C2110" },  /* auto */
  { 0x004C22D0, (funptr_t) &dk2::PlayerList::fun_4C22D0, "PlayerList::fun_4C22D0" },  /* auto */
  { 0x004C2310, (funptr_t) &dk2::PlayerList::tick, "PlayerList::tick" },  /* auto */
  { 0x004C2340, (funptr_t) &dk2::PlayerList::fun_4C2340, "PlayerList::fun_4C2340" },  /* auto */
  { 0x004C23B0, (funptr_t) &dk2::PlayerList::sub_4C23B0, "PlayerList::sub_4C23B0" },  /* auto */
  { 0x004C2530, (funptr_t) &dk2::PlayerList::calcChecksum, "PlayerList::calcChecksum" },  /* auto */
  { 0x004C2580, (funptr_t) &dk2::PlayerList::dump, "PlayerList::dump" },  /* auto */
  { 0x004C2980, (funptr_t) &dk2::PlayerList::sub_4C2980, "PlayerList::sub_4C2980" },  /* auto */
  { 0x004C2A70, (funptr_t) &dk2::PlayerList::sub_4C2A70, "PlayerList::sub_4C2A70" },  /* auto */
  { 0x005543F0, (funptr_t) &dk2::ProbablyConsole::setCommands, "ProbablyConsole::setCommands" },  /* auto */
  { 0x00554410, (funptr_t) &dk2::ProbablyConsole::appendOutput, "ProbablyConsole::appendOutput" },  /* auto */
  { 0x00554650, (funptr_t) &dk2::ProbablyConsole::kbAction, "ProbablyConsole::kbAction" },  /* auto */
  { 0x00554910, (funptr_t) &dk2::ProbablyConsole::onKeyPressed, "ProbablyConsole::onKeyPressed" },  /* auto */
  { 0x005BBC20, (funptr_t) &dk2::PtrArrList::constructor, "PtrArrList::constructor" },  /* auto */
  { 0x005DB210, (funptr_t) &dk2::PtrArrList::insertArray, "PtrArrList::insertArray" },  /* auto */
  { 0x0058F8E0, (funptr_t) &dk2::SceneObject30List::enlarge, "SceneObject30List::enlarge" },  /* auto */
  { 0x00588A60, (funptr_t) &dk2::ScreenObjectArr::findMesh, "ScreenObjectArr::findMesh" },  /* auto */
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
  { 0x00591F90, (funptr_t) &dk2::SurfHashListItem::recursive_scalar_delete, "SurfHashListItem::recursive_scalar_delete" },  /* auto */
  { 0x00591ED0, (funptr_t) &dk2::SurfaceHolder::calcWeight, "SurfaceHolder::calcWeight" },  /* auto */
  { 0x00591F30, (funptr_t) &dk2::SurfaceHolder::fun_591F30, "SurfaceHolder::fun_591F30" },  /* auto */
  { 0x00591FF0, (funptr_t) &dk2::SurfaceHolder::drawSpecial_128x128, "SurfaceHolder::drawSpecial_128x128" },  /* auto */
  { 0x00592380, (funptr_t) &dk2::SurfaceHolder::drawSpecial_128x128_mgsr, "SurfaceHolder::drawSpecial_128x128_mgsr" },  /* auto */
  { 0x005672E0, (funptr_t) &dk2::TbAudioSystem::deleting_destructor, "TbAudioSystem::deleting_destructor" },  /* auto */
  { 0x006086E0, (funptr_t) &dk2::TbAudioSystem::destructor, "TbAudioSystem::destructor" },  /* auto */
  { 0x00608840, (funptr_t) &dk2::TbAudioSystem::constructor, "TbAudioSystem::constructor" },  /* auto */
  { 0x00608870, (funptr_t) &dk2::TbAudioSystem::fun_608870, "TbAudioSystem::fun_608870" },  /* auto */
  { 0x00608A50, (funptr_t) &dk2::TbAudioSystem::fun_608A50, "TbAudioSystem::fun_608A50" },  /* auto */
  { 0x00608C20, (funptr_t) &dk2::TbAudioSystem::fun_608C20, "TbAudioSystem::fun_608C20" },  /* auto */
  { 0x00608DA0, (funptr_t) &dk2::TbAudioSystem::fun_608DA0, "TbAudioSystem::fun_608DA0" },  /* auto */
  { 0x00608FB0, (funptr_t) &dk2::TbAudioSystem::fun_608FB0, "TbAudioSystem::fun_608FB0" },  /* auto */
  { 0x005B9E30, (funptr_t) &dk2::TbDiscFileStorage::openInputStream, "TbDiscFileStorage::openInputStream" },  /* auto */
  { 0x005BABA0, (funptr_t) &dk2::TbDiscFileStorage::openDirectory, "TbDiscFileStorage::openDirectory" },  /* auto */
  { 0x00608360, (funptr_t) &dk2::TbSysCommand_SetNumberOfChannels::fun_608360, "TbSysCommand_SetNumberOfChannels::fun_608360" },  /* auto */
  { 0x005D91E0, (funptr_t) &dk2::TbTList_TbDynamicStringTemplate_char_entry::scalar_destructor, "TbTList_TbDynamicStringTemplate_char_entry::scalar_destructor" },  /* auto */
  { 0x00610E40, (funptr_t) &dk2::TbTList_TbDynamicStringTemplate_char_entry::destructor, "TbTList_TbDynamicStringTemplate_char_entry::destructor" },  /* auto */
  { 0x00614960, (funptr_t) &dk2::TbTList_TbDynamicStringTemplate_char_entry::copy_constructor, "TbTList_TbDynamicStringTemplate_char_entry::copy_constructor" },  /* auto */
  { 0x0062DB90, (funptr_t) &dk2::TbUniStringVTag::print, "TbUniStringVTag::print" },  /* auto */
  { 0x0040F680, (funptr_t) &dk2::Vec3d::addVec3d, "Vec3d::addVec3d" },  /* auto */
  { 0x0041C440, (funptr_t) &dk2::Vec3f::copy, "Vec3f::copy" },  /* auto */
  { 0x0041C4C0, (funptr_t) &dk2::Vec3f::substractAssign, "Vec3f::substractAssign" },  /* auto */
  { 0x0044E7B0, (funptr_t) &dk2::Vec3f::sumVec3f, "Vec3f::sumVec3f" },  /* auto */
  { 0x00402AE0, (funptr_t) &dk2::Vec3i::constructor, "Vec3i::constructor" },  /* auto */
  { 0x00434E50, (funptr_t) &dk2::Vec3i::fun_434E50, "Vec3i::fun_434E50" },  /* auto */
  { 0x00437FE0, (funptr_t) &dk2::Vec3i::fun_437FE0, "Vec3i::fun_437FE0" },  /* auto */
  { 0x004502B0, (funptr_t) &dk2::Vec3i::fun_4502B0, "Vec3i::fun_4502B0" },  /* auto */
  { 0x005FE280, (funptr_t) &dk2::WadContent::constructor, "WadContent::constructor" },  /* auto */
  { 0x005FE570, (funptr_t) &dk2::WadContent::cleanup, "WadContent::cleanup" },  /* auto */
  { 0x005FE5D0, (funptr_t) &dk2::WadContent::parseFile, "WadContent::parseFile" },  /* auto */
  { 0x005FE9B0, (funptr_t) &dk2::WadContent::sub_5FE9B0, "WadContent::sub_5FE9B0" },  /* auto */
  { 0x005FE3A0, (funptr_t) &dk2::WadDirObj::constructor, "WadDirObj::constructor" },  /* auto */
  { 0x005FEAA0, (funptr_t) &dk2::WadDirObj::destructor, "WadDirObj::destructor" },  /* auto */
  { 0x005FEB10, (funptr_t) &dk2::WadDirObj::putFile, "WadDirObj::putFile" },  /* auto */
  { 0x005FEBA0, (funptr_t) &dk2::WadDirObj::putDirRecursive, "WadDirObj::putDirRecursive" },  /* auto */
  { 0x005FEDD0, (funptr_t) &dk2::WadDirObj::sub_5FEDD0, "WadDirObj::sub_5FEDD0" },  /* auto */
  { 0x005FE370, (funptr_t) &dk2::WadFileObj::constructor, "WadFileObj::constructor" },  /* auto */
  { 0x005FE380, (funptr_t) &dk2::WadFileObj::destructor, "WadFileObj::destructor" },  /* auto */
  { 0x005B9930, (funptr_t) &dk2::WinEventHandlers::callList, "WinEventHandlers::callList" },  /* auto */
  { 0x005B99E0, (funptr_t) &dk2::WinEventHandlers::addHandler, "WinEventHandlers::addHandler" },  /* auto */
  { 0x005B9AB0, (funptr_t) &dk2::WinEventHandlers::removeHandler, "WinEventHandlers::removeHandler" },  /* auto */
  { 0x005B9BD0, (funptr_t) &dk2::WinEventHandlers::clear, "WinEventHandlers::clear" },  /* auto */
  { 0x005BBA00, (funptr_t) &dk2::WndMsgDxAction::applyToState, "WndMsgDxAction::applyToState" },  /* auto */
  { 0x005BBB70, (funptr_t) &dk2::WndMsgDxActionList::destructor, "WndMsgDxActionList::destructor" },  /* auto */
  { 0x005BBD60, (funptr_t) &dk2::WndMsgDxActionList::scalar_destructor, "WndMsgDxActionList::scalar_destructor" },  /* auto */
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
