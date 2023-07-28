// -----------------  id: vtbl_0066D99C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_PLAYER_H  // -----------------------------------  /* auto */
#define C_PLAYER_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CCreaturePool.h>  // -----------------------  /* auto */
#include <dk2/entities/CTag.h>  // -----------------------  /* auto */
#include <dk2/MyBlueprintList.h>  // ---------------------  /* auto */
#include <dk2/MyManufactureList.h>  // -------------------  /* auto */
#include <dk2/MyPlayerInst.h>  // ------------------------  /* auto */
#include <dk2/MyPlayerRoomPlacmentInfo.h>  // ------------  /* auto */
#include <dk2/MyPlayerStatistics.h>  // ------------------  /* auto */
#include <dk2/utils/Vec3i.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CObject;  // ------------------------------------  /* auto */
  struct CPlayer;  // ------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct MyComputerPlayer;  // ---------------------------  /* auto */
  struct MyTaskStack;  // --------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CPlayer : CTag {  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  6*/ uint16_t thingsOwnedList[8];  // -----------------  /* auto */
/* 16*/ int32_t totalNumberOfOwnedThings[8];  // ---------  /* auto */
/* 36*/ uint16_t roomList;  // ---------------------------  /* auto */
/* 38*/ uint16_t prevIdx;  // ----------------------------  /* auto */
/* 3A*/ uint16_t nextIdx;  // ----------------------------  /* auto */
/* 3C*/ int32_t ownedArea1;  // --------------------------  /* auto */
/* 40*/ int32_t ownedArea2_dungeonHeartHealth;  // -------  /* auto */
/* 44*/ int32_t ownedArea4;  // --------------------------  /* auto */
/* 48*/ int32_t ownedArea3;  // --------------------------  /* auto */
/* 4C*/ uint16_t torturedCreatureTypeList;  // -----------  /* auto */
/* 4E*/ int32_t f4E;  // ---------------------------------  /* auto */
/* 52*/ int32_t f52;  // ---------------------------------  /* auto */
/* 56*/ int32_t roomInfos_count;  // ---------------------  /* auto */
/* 5A*/ int32_t roomInfos;  // ---------------------------  /* auto */
/* 5E*/ int32_t doorInfos_count;  // ---------------------  /* auto */
/* 62*/ int32_t doorInfos;  // ---------------------------  /* auto */
/* 66*/ int32_t trapInfos_count;  // ---------------------  /* auto */
/* 6A*/ int32_t trapInfos;  // ---------------------------  /* auto */
/* 6E*/ int32_t keeperSpellInfos_count;  // --------------  /* auto */
/* 72*/ int32_t keeperSpellInfos;  // --------------------  /* auto */
/* 76*/ uint32_t flags;  // ------------------------------  /* auto */
/* 7A*/ int32_t impProcessedCounter;  // -----------------  /* auto */
/* 7E*/ int32_t money;  // -------------------------------  /* auto */
/* 82*/ int32_t mana;  // --------------------------------  /* auto */
/* 86*/ int32_t manaPerSecondMultiplier;  // -------------  /* auto */
/* 8A*/ int32_t numberOfManufacturingCreatures;  // ------  /* auto */
/* 8E*/ int32_t numberOfResearchingCreatures;  // --------  /* auto */
/* 92*/ int32_t lastScanTick;  // ------------------------  /* auto */
/* 96*/ int32_t playerScanTick;  // ----------------------  /* auto */
/* 9A*/ int32_t manaGainTick;  // ------------------------  /* auto */
/* 9E*/ int32_t lastLowManaWarningTick;  // --------------  /* auto */
/* A2*/ int32_t impGenerateTick;  // ---------------------  /* auto */
/* A6*/ int32_t impPopScanTick;  // ----------------------  /* auto */
/* AA*/ int32_t lastTrapManaWarningTick;  // -------------  /* auto */
/* AE*/ int32_t lastNoManaWarningTick;  // ---------------  /* auto */
/* B2*/ uint16_t thingsInHand[64];  // -------------------  /* auto */
/*132*/ uint16_t killedByPlayerId;  // -------------------  /* auto */
/*134*/ uint16_t creaturePossessed;  // ------------------  /* auto */
/*136*/ uint16_t creatureHeldInPossession;  // -----------  /* auto */
/*138*/ uint16_t callToArmsTag;  // ----------------------  /* auto */
/*13A*/ uint16_t callToArmsPositionX;  // ----------------  /* auto */
/*13C*/ uint16_t callToArmsPositionY;  // ----------------  /* auto */
/*13E*/ int32_t callToArmsManaTick;  // ------------------  /* auto */
/*142*/ MyPlayerStatistics statictics;  // ---------------  /* auto */
/*186*/ MyPlayerInst inst;  // ---------------------------  /* auto */
/*19A*/ int32_t status;  // ------------------------------  /* auto */
/*19E*/ uint16_t objectiveTextId;  // --------------------  /* auto */
/*1A0*/ uint16_t creaturesKilled[7];  // -----------------  /* auto */
/*1AE*/ uint8_t ally[6];  // -----------------------------  /* auto */
/*1B4*/ __int16 f1B4;  // --------------------------------  /* auto */
/*1B6*/ uint8_t offeredAllyTo[6];  // --------------------  /* auto */
/*1BC*/ __int16 f1BC;  // --------------------------------  /* auto */
/*1BE*/ uint8_t objectiveActionPointId;  // --------------  /* auto */
/*1BF*/ uint8_t thingsInHand_count;  // ------------------  /* auto */
/*1C0*/ uint8_t maxNumberOfThingsInHand;  // -------------  /* auto */
/*1C1*/ uint8_t freeRangeChickenCount;  // ---------------  /* auto */
/*1C2*/ MyPlayerRoomPlacmentInfo roomPlacements[3];  // --  /* auto */
/*20D*/ uint16_t casinoBigWinnerGameTickRemaining;  // ---  /* auto */
/*20F*/ int32_t researchCompleted;  // -------------------  /* auto */
/*213*/ int32_t researchPoint;  // -----------------------  /* auto */
/*217*/ uint16_t manufactureCompleted;  // ---------------  /* auto */
/*219*/ MyManufactureList manufactures;  // --------------  /* auto */
/*A21*/ MyBlueprintList blueprints;  // ------------------  /* auto */
/*B29*/ Vec3i hornyWorldEntrancePosition;  // ------------  /* auto */
/*B35*/ int32_t gemX;  // --------------------------------  /* auto */
/*B39*/ int32_t gemY;  // --------------------------------  /* auto */
/*B3D*/ uint16_t gemId;  // ------------------------------  /* auto */
/*B3F*/ int32_t dungeonArea;  // -------------------------  /* auto */
/*B43*/ uint16_t dungeonHeartPositionX;  // --------------  /* auto */
/*B45*/ uint16_t dungeonHeartPositionY;  // --------------  /* auto */
/*B47*/ uint8_t entranceLastSackedCreatureTypeId;  // ----  /* auto */
/*B48*/ uint32_t lastLowManaMessageId;  // ---------------  /* auto */
/*B4C*/ uint8_t destructorEffectCount;  // ---------------  /* auto */
/*B4D*/ uint16_t researchProgressionObject;  // ----------  /* auto */
/*B4F*/ int32_t lastPayDayTime;  // ----------------------  /* auto */
/*B53*/ int32_t worldPayDayTime;  // ---------------------  /* auto */
/*B57*/ uint16_t creatureEntranceInfo[46][9];  // --------  /* auto */
/*E93*/ int32_t possessedCreatureInitialGold;  // --------  /* auto */
/*E97*/ MyPlayerRoomPlacmentInfo roomRemovalInfos[3];       /* auto */
/*EE2*/ int32_t gameTickDied;  // ------------------------  /* auto */
/*EE6*/ int32_t numberOfSlaps;  // -----------------------  /* auto */
/*EEA*/ wchar_t playerName[32];  // ----------------------  /* auto */
/*F2A*/ uint8_t gap_F2A[32];  // -------------------------  /* auto */
/*F4A*/ int32_t discoInfernoCount;  // -------------------  /* auto */
/*F4E*/ char fF4E[128];  // ------------------------------  /* auto */
/*FCE*/ int32_t creaturesUsed[47];  // -------------------  /* auto */
/*108A*/ __int8 cryptPowersPeopleActive[20];  // ---------  /* auto */
/*109E*/ uint8_t f109e_gap[52];  // ----------------------  /* auto */
/*10D2*/ uint32_t maintainImpManaPerSecond;  // ----------  /* auto */
/*10D6*/ int32_t maintainTrapManaPerSecond;  // ----------  /* auto */
/*10DA*/ __int16 triggerRoot;  // ------------------------  /* auto */
/*10DC*/ __int16 triggerRootRepeatCount;  // -------------  /* auto */
/*10DE*/ uint32_t maxManaGainPerSecond;  // --------------  /* auto */
/*10E2*/ int32_t manaPerSecondExtra;  // -----------------  /* auto */
/*10E6*/ int32_t basicManaPerSecond;  // -----------------  /* auto */
/*10EA*/ int32_t maxMana;  // ----------------------------  /* auto */
/*10EE*/ uint32_t oneShotManaGain;  // -------------------  /* auto */
/*10F2*/ int32_t oneShotManaLoss;  // --------------------  /* auto */
/*10F6*/ uint16_t maxCreatures;  // ----------------------  /* auto */
/*10F8*/ uint8_t numberOfCreatureTypes;  // --------------  /* auto */
/*10F9*/ uint8_t numberOfRooms;  // ----------------------  /* auto */
/*10FA*/ uint8_t computerPlayerOn;  // -------------------  /* auto */
/*10FB*/ uint8_t impsWantARescan;  // --------------------  /* auto */
/*10FC*/ uint8_t playerNumber;  // -----------------------  /* auto */
/*10FD*/ int32_t f10FD;  // ------------------------------  /* auto */
/*1101*/ MyComputerPlayer *pComputerPlayer;  // ----------  /* auto */
/*1105*/ MyTaskStack *taskStack;  // ---------------------  /* auto */
/*1109*/ CCreaturePool creaturePool;  // -----------------  /* auto */
/*111D*/ int32_t fireworksTime;  // ----------------------  /* auto */
/*1121*/ int32_t f1121;  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D99C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004C1FB0  /* auto */
/*  4*/ // virtual BOOL v_f4_saveToTbDiscFile(TbDiscFile **);  // = 004B8D40  /* auto */
/*---*/ // CPlayer  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004B8450*/ void constructor();  // ---------------------  /* auto */
/*004B85A0*/ void destructor();  // ----------------------  /* auto */
/*004B8640*/ int32_t init(int32_t);  // ------------------  /* auto */
/*004B8C30*/ void release();  // -------------------------  /* auto */
/*004B8D40*/ int32_t fun_4B8D40(void **);  // ------------  /* auto */
/*004B9250*/ int32_t fun_4B9250(int32_t *);  // ----------  /* auto */
/*004B9720*/ int32_t fun_4B9720();  // -------------------  /* auto */
/*004B9740*/ void fun_4B9740();  // ----------------------  /* auto */
/*004B9EC0*/ int32_t tick();  // -------------------------  /* auto */
/*004BA0D0*/ uint32_t fun_4BA0D0();  // ------------------  /* auto */
/*004BA420*/ int32_t fun_4BA420(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004BA7D0*/ int32_t fun_4BA7D0(uint8_t);  // ------------  /* auto */
/*004BA850*/ int32_t fun_4BA850(char);  // ---------------  /* auto */
/*004BA890*/ int32_t fun_4BA890(char);  // ---------------  /* auto */
/*004BA8D0*/ wchar_t *setName(wchar_t *);  // ------------  /* auto */
/*004BA900*/ int32_t fun_4BA900();  // -------------------  /* auto */
/*004BA980*/ int32_t fun_4BA980();  // -------------------  /* auto */
/*004BAB20*/ int32_t fun_4BAB20(uint8_t);  // ------------  /* auto */
/*004BACD0*/ int32_t fun_4BACD0(uint8_t);  // ------------  /* auto */
/*004BAE30*/ int32_t fun_4BAE30(uint8_t);  // ------------  /* auto */
/*004BAFA0*/ int32_t fun_4BAFA0(uint8_t);  // ------------  /* auto */
/*004BB0D0*/ int32_t fun_4BB0D0(uint8_t);  // ------------  /* auto */
/*004BB2A0*/ int32_t fun_4BB2A0();  // -------------------  /* auto */
/*004BB6D0*/ char fun_4BB6D0();  // ----------------------  /* auto */
/*004BBD30*/ int32_t fun_4BBD30(int32_t, uint32_t *, int32_t);  /* auto */
/*004BC500*/ int32_t fun_4BC500(uint16_t);  // -----------  /* auto */
/*004BC710*/ int32_t fun_4BC710(void **, uint16_t *);       /* auto */
/*004BCAB0*/ int32_t fun_4BCAB0(uint32_t, uint16_t *);      /* auto */
/*004BCAE0*/ int32_t fun_4BCAE0(__int16);  // ------------  /* auto */
/*004BCB20*/ int32_t fun_4BCB20();  // -------------------  /* auto */
/*004BCB60*/ int32_t calcChecksum();  // -----------------  /* auto */
/*004BCF10*/ uint32_t dump();  // ------------------------  /* auto */
/*004BE090*/ __int16 fun_4BE090(uint16_t, int32_t);  // --  /* auto */
/*004BE180*/ uint32_t fun_4BE180();  // ------------------  /* auto */
/*004BF390*/ BOOL fun_4BF390(uint16_t);  // --------------  /* auto */
/*004BF3D0*/ int32_t fun_4BF3D0(uint16_t);  // -----------  /* auto */
/*004BFBD0*/ int32_t fun_4BFBD0(int32_t);  // ------------  /* auto */
/*004BFD00*/ void fun_4BFD00(int32_t);  // ---------------  /* auto */
/*004BFFD0*/ int32_t fun_4BFFD0(CObject *);  // ----------  /* auto */
/*004C0010*/ int32_t decrementFreeRangeChickenCount(CObject *);  /* auto */
/*004C0060*/ CWorld *fun_4C0060(__int16);  // ------------  /* auto */
/*004C04A0*/ int32_t fun_4C04A0(uint8_t);  // ------------  /* auto */
/*004C0AA0*/ int32_t fun_4C0AA0();  // -------------------  /* auto */
/*004C0BB0*/ int32_t fun_4C0BB0();  // -------------------  /* auto */
/*004C10E0*/ char fun_4C10E0();  // ----------------------  /* auto */
/*004C1740*/ BOOL fun_4C1740(int32_t);  // ---------------  /* auto */
/*004C1770*/ int32_t fun_4C1770();  // -------------------  /* auto */
/*004C1AE0*/ int32_t fun_4C1AE0();  // -------------------  /* auto */
/*004C1FB0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*004C30F0*/ int32_t fun_4C30F0(int32_t);  // ------------  /* auto */
/*004C3340*/ void fun_4C3340();  // ----------------------  /* auto */
/*004C5780*/ __int16 fun_4C5780();  // -------------------  /* auto */
/*004C57F0*/ int32_t fun_4C57F0(int32_t, uint32_t, uint32_t, uint32_t, uint32_t, int32_t, int32_t);  /* auto */
/*004C5A20*/ BOOL fun_4C5A20(int32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t *);  /* auto */
/*004C5B40*/ int32_t fun_4C5B40(uint32_t, uint32_t, int32_t, int32_t, int32_t);  /* auto */
/*004C5C30*/ int32_t fun_4C5C30(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004C5DB0*/ int32_t fun_4C5DB0(int32_t, int32_t, int32_t);  /* auto */
/*004C5F50*/ char *fun_4C5F50();  // ---------------------  /* auto */
/*004C5FD0*/ int32_t fun_4C5FD0(char);  // ---------------  /* auto */
/*004C61C0*/ int32_t fun_4C61C0(uint8_t, uint32_t *, void ***, int32_t);  /* auto */
/*004C63D0*/ int32_t fun_4C63D0(uint32_t *);  // ---------  /* auto */
/*004C6460*/ int32_t fun_4C6460(char, void ***);  // -----  /* auto */
/*004C6A00*/ int32_t fun_4C6A00(char, uint16_t, uint32_t *, CTag **);  /* auto */
/*004C6E70*/ char fun_4C6E70(char);  // ------------------  /* auto */
/*004C6EB0*/ int32_t fun_4C6EB0(char);  // ---------------  /* auto */
/*004C7150*/ int32_t fun_4C7150();  // -------------------  /* auto */
/*004C7160*/ int32_t fun_4C7160();  // -------------------  /* auto */
/*004C7330*/ __int16 fun_4C7330();  // -------------------  /* auto */
/*004C7340*/ int32_t fun_4C7340();  // -------------------  /* auto */
/*004C7360*/ int32_t fun_4C7360();  // -------------------  /* auto */
/*004C7380*/ __int16 fun_4C7380();  // -------------------  /* auto */
/*004C79A0*/ int32_t fun_4C79A0(__int16, int32_t);  // ---  /* auto */
/*004C7A50*/ int32_t fun_4C7A50(int32_t, int32_t, int32_t);  /* auto */
/*004C7B20*/ BOOL fun_4C7B20(int32_t *);  // -------------  /* auto */
/*004C8620*/ int32_t fun_4C8620(int32_t);  // ------------  /* auto */
/*004D8510*/ int32_t fun_4D8510(uint32_t *, int32_t *, uint32_t *);  /* auto */
/*004D8870*/ int32_t fun_4D8870(uint32_t *, int32_t *, int32_t);  /* auto */
/*004DA200*/ void *fun_4DA200(int32_t, int32_t);  // -----  /* auto */
/*004DAA10*/ __int16 fun_4DAA10();  // -------------------  /* auto */
/*004DC760*/ int32_t fun_4DC760();  // -------------------  /* auto */
/*004DCCE0*/ int32_t fun_4DCCE0();  // -------------------  /* auto */
/*004DE610*/ char setFreeRangeChickenCount(char);  // ----  /* auto */
/*004DED00*/ int32_t fun_4DED00(uint32_t *, CTag **, int32_t);  /* auto */
/*004E0470*/ int32_t fun_4E0470(int32_t, uint32_t *, CTag **, int32_t);  /* auto */
/*004E2500*/ int32_t fun_4E2500(uint32_t *, CTag **, int32_t);  /* auto */
/*004F1A20*/ int32_t fun_4F1A20(uint32_t *, CTag **, int32_t);  /* auto */
/*004F29A0*/ int32_t fun_4F29A0(uint32_t *, CTag **, int32_t);  /* auto */
/*004F2B80*/ int32_t fun_4F2B80(uint32_t *, CTag **, int32_t);  /* auto */
/*004F6200*/ int32_t fun_4F6200(uint32_t *, CTag **, int32_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CPlayer) == 0x1125);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_PLAYER_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
