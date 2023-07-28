// -----------------  id: vtbl_0066D524  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_CREATURE_H  // ---------------------------------  /* auto */
#define C_CREATURE_H  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/entities/CMovingThing.h>  // ---------------  /* auto */
#include <dk2/CState.h>  // ------------------------------  /* auto */
#include <dk2/entities/creature/MyCreatureInst.h>  // ----  /* auto */
#include <dk2/entities/creature/MyFight.h>  // -----------  /* auto */
#include <dk2/MyPilotNavigation.h>  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CCreature;  // ----------------------------------  /* auto */
  struct CTag;  // ---------------------------------------  /* auto */
  struct MyCreatureDataObj;  // --------------------------  /* auto */
  struct MyTriggerAction;  // ----------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CCreature : CMovingThing {  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*124*/ MyPilotNavigation pilotNavigation;  // -----------  /* auto */
/*236*/ uint16_t roomNodeX;  // --------------------------  /* auto */
/*238*/ uint16_t roomNodeY;  // --------------------------  /* auto */
/*23A*/ uint16_t playerTorturedCreatureTypeListNodeX;       /* auto */
/*23C*/ uint16_t playerTorturedCreatureTypeListNodeY;       /* auto */
/*23E*/ uint16_t battleNodeX;  // ------------------------  /* auto */
/*240*/ uint16_t battleNodeY;  // ------------------------  /* auto */
/*242*/ uint8_t gap_242[4];  // --------------------------  /* auto */
/*246*/ int32_t f246;  // --------------------------------  /* auto */
/*24A*/ uint16_t freeNodeX;  // --------------------------  /* auto */
/*24C*/ uint16_t freeNodeY;  // --------------------------  /* auto */
/*24E*/ CState cstate;  // -------------------------------  /* auto */
/*36F*/ uint8_t typeId;  // ------------------------------  /* auto */
/*370*/ MyCreatureDataObj *typeObj;  // ------------------  /* auto */
/*374*/ __int16 f374;  // --------------------------------  /* auto */
/*376*/ int32_t f376;  // --------------------------------  /* auto */
/*37A*/ int32_t isInBattleFlag;  // ----------------------  /* auto */
/*37E*/ int32_t canLeaveBattleAt;  // --------------------  /* auto */
/*382*/ __int16 f382;  // --------------------------------  /* auto */
/*384*/ int32_t f384;  // --------------------------------  /* auto */
/*388*/ char f388;  // -----------------------------------  /* auto */
/*389*/ int32_t f389;  // --------------------------------  /* auto */
/*38D*/ MyCreatureInst inst;  // -------------------------  /* auto */
/*3AF*/ int32_t workModifier;  // ------------------------  /* auto */
/*3B3*/ int32_t workEnhancement;  // ---------------------  /* auto */
/*3B7*/ uint16_t lairId;  // -----------------------------  /* auto */
/*3B9*/ uint16_t roomId;  // -----------------------------  /* auto */
/*3BB*/ int32_t movementMode;  // ------------------------  /* auto */
/*3BF*/ int32_t reloadSpeed;  // -------------------------  /* auto */
/*3C3*/ uint16_t carryingId;  // -------------------------  /* auto */
/*3C5*/ uint16_t draggingId;  // -------------------------  /* auto */
/*3C7*/ int32_t beingDragged;  // ------------------------  /* auto */
/*3CB*/ uint16_t prisonOwner;  // ------------------------  /* auto */
/*3CD*/ int32_t skipScaleSetting;  // --------------------  /* auto */
/*3D1*/ int32_t idle;  // --------------------------------  /* auto */
/*3D5*/ uint16_t reportingTo;  // ------------------------  /* auto */
/*3D7*/ int32_t fearlessUntil;  // -----------------------  /* auto */
/*3DB*/ int32_t movementEnd;  // -------------------------  /* auto */
/*3DF*/ uint16_t myLeadersId;  // ------------------------  /* auto */
/*3E1*/ uint8_t positionInParty;  // ---------------------  /* auto */
/*3E2*/ int32_t getPaid;  // -----------------------------  /* auto */
/*3E6*/ uint32_t stateFlags;  // -------------------------  /* auto */
/*3EA*/ uint32_t stateFlags2;  // ------------------------  /* auto */
/*3EE*/ int32_t nextPossessionInfluenceTick;  // ---------  /* auto */
/*3F2*/ uint16_t casinoBigWinnerGameTickRemaining;  // ---  /* auto */
/*3F4*/ uint16_t casinoBigWinnerWinnings;  // ------------  /* auto */
/*3F6*/ uint8_t casinoBigWinnerSlappedCount;  // ---------  /* auto */
/*3F7*/ uint16_t highPriorityBody;  // -------------------  /* auto */
/*3F9*/ uint16_t attackingId;  // ------------------------  /* auto */
/*3FB*/ int32_t goldHeld;  // ----------------------------  /* auto */
/*3FF*/ int32_t experiencePoints;  // --------------------  /* auto */
/*403*/ uint8_t level;  // -------------------------------  /* auto */
/*404*/ uint16_t createdAtMapX;  // ----------------------  /* auto */
/*406*/ uint16_t createdAtMapY;  // ----------------------  /* auto */
/*408*/ uint8_t killsInCombatPit;  // --------------------  /* auto */
/*409*/ int32_t goodJob;  // -----------------------------  /* auto */
/*40D*/ uint16_t goodAttackPlayerId;  // -----------------  /* auto */
/*40F*/ int32_t goodJobData;  // -------------------------  /* auto */
/*413*/ int32_t goodTimeDelay;  // -----------------------  /* auto */
/*417*/ uint8_t partyId;  // -----------------------------  /* auto */
/*418*/ uint8_t wanderRadius;  // ------------------------  /* auto */
/*419*/ __int16 triggerRoot;  // -------------------------  /* auto */
/*41B*/ int32_t timeLastFiredSpell[3];  // ---------------  /* auto */
/*427*/ int32_t timeLastUsedMelee;  // -------------------  /* auto */
/*42B*/ int32_t rebelDelay;  // --------------------------  /* auto */
/*42F*/ uint16_t rebelTag;  // ---------------------------  /* auto */
/*431*/ int32_t rebelPos;  // ----------------------------  /* auto */
/*435*/ int32_t numberOfFollowers;  // -------------------  /* auto */
/*439*/ uint16_t alarmPositionX;  // ---------------------  /* auto */
/*43B*/ uint16_t alarmPositionY;  // ---------------------  /* auto */
/*43D*/ uint16_t trapTagId;  // --------------------------  /* auto */
/*43F*/ int32_t durationUntilAttemptingAnotherTrapDisarm;   /* auto */
/*443*/ uint16_t armourTimer;  // ------------------------  /* auto */
/*445*/ uint16_t invulnerableTimer;  // ------------------  /* auto */
/*447*/ uint16_t freezeTimer;  // ------------------------  /* auto */
/*449*/ uint16_t concealedTimer;  // ---------------------  /* auto */
/*44B*/ uint16_t chickenTimer;  // -----------------------  /* auto */
/*44D*/ uint16_t scapegoatTimer;  // ---------------------  /* auto */
/*44F*/ uint16_t invisibleTimer;  // ---------------------  /* auto */
/*451*/ uint16_t obedientTimer;  // ----------------------  /* auto */
/*453*/ uint16_t turncoatTimer;  // ----------------------  /* auto */
/*455*/ uint16_t turncoatPlayer;  // ---------------------  /* auto */
/*457*/ uint16_t angrySpecialTimer;  // ------------------  /* auto */
/*459*/ uint16_t speedChangeTimer;  // -------------------  /* auto */
/*45B*/ uint16_t creatureAlertTimer;  // -----------------  /* auto */
/*45D*/ uint16_t poisonedTimer;  // ----------------------  /* auto */
/*45F*/ uint16_t poisonedSeverity;  // -------------------  /* auto */
/*461*/ uint16_t poisonedByPlayerId;  // -----------------  /* auto */
/*463*/ uint16_t fearedTimer;  // ------------------------  /* auto */
/*465*/ uint16_t fearedSeverity;  // ---------------------  /* auto */
/*467*/ uint16_t fearedByCreatureId;  // -----------------  /* auto */
/*469*/ uint16_t onFireCounter;  // ----------------------  /* auto */
/*46B*/ uint16_t onFirePlayerId;  // ---------------------  /* auto */
/*46D*/ uint16_t lastDroppedCounter;  // -----------------  /* auto */
/*46F*/ uint8_t flags;  // -------------------------------  /* auto */
/*470*/ int32_t paymentNeeded;  // -----------------------  /* auto */
/*474*/ uint8_t paymentAttempts;  // ---------------------  /* auto */
/*475*/ char f475;  // -----------------------------------  /* auto */
/*476*/ __int16 f476;  // --------------------------------  /* auto */
/*478*/ uint8_t nBloodFootprints;  // --------------------  /* auto */
/*479*/ uint8_t nWaterFootprints;  // --------------------  /* auto */
/*47A*/ __int16 flyingHeightModifier;  // ----------------  /* auto */
/*47C*/ uint16_t moveFromWorkCounter;  // ----------------  /* auto */
/*47E*/ int32_t followingPossessedDelay;  // -------------  /* auto */
/*482*/ uint16_t possessedCreatureFollowing;  // ---------  /* auto */
/*484*/ int32_t followingPossessedPos;  // ---------------  /* auto */
/*488*/ int32_t possessedNumberOfFollowers;  // ----------  /* auto */
/*48C*/ uint8_t possessedMovementFlags;  // --------------  /* auto */
/*48D*/ uint16_t thrownDirection;  // --------------------  /* auto */
/*48F*/ int32_t damageFromWallHit;  // -------------------  /* auto */
/*493*/ int32_t fallHitFlipIt;  // -----------------------  /* auto */
/*497*/ int32_t oldForceVelocityX;  // -------------------  /* auto */
/*49B*/ int32_t oldForceVelocityY;  // -------------------  /* auto */
/*49F*/ int32_t oldForceVelocityZ;  // -------------------  /* auto */
/*4A3*/ uint16_t sneakingAs;  // -------------------------  /* auto */
/*4A5*/ uint16_t skeletonCreationTime;  // ---------------  /* auto */
/*4A7*/ uint16_t hypnotisedCreature;  // -----------------  /* auto */
/*4A9*/ uint16_t hypnotisedPrevOwner;  // ----------------  /* auto */
/*4AB*/ int32_t f4AB;  // --------------------------------  /* auto */
/*4AF*/ int32_t f4AF;  // --------------------------------  /* auto */
/*4B3*/ int32_t countDownStartTick;  // ------------------  /* auto */
/*4B7*/ int32_t f4B7;  // --------------------------------  /* auto */
/*4BB*/ int32_t lastSlapTick;  // ------------------------  /* auto */
/*4BF*/ int32_t pickupTick;  // --------------------------  /* auto */
/*4C3*/ int32_t lastReactionTime;  // --------------------  /* auto */
/*4C7*/ uint16_t lastReactionTarget;  // -----------------  /* auto */
/*4C9*/ int32_t hornyTick;  // ---------------------------  /* auto */
/*4CD*/ uint8_t currentElectrocuteArtDescriptorIndex;       /* auto */
/*4CE*/ uint16_t drunkenTimer;  // -----------------------  /* auto */
/*4D0*/ uint16_t possessedTargetTag;  // -----------------  /* auto */
/*4D2*/ int32_t possessedTargetAttackTime;  // -----------  /* auto */
/*4D6*/ uint8_t suckedByInferno;  // ---------------------  /* auto */
/*4D7*/ uint16_t workFasterTimer;  // --------------------  /* auto */
/*4D9*/ uint16_t attackCreatureHits;  // -----------------  /* auto */
/*4DB*/ uint16_t nHypnotisedAttacks;  // -----------------  /* auto */
/*4DD*/ uint16_t speedBlurTimer;  // ---------------------  /* auto */
/*4DF*/ int32_t scale;  // -------------------------------  /* auto */
/*4E3*/ uint16_t lightningTimer;  // ---------------------  /* auto */
/*4E5*/ int32_t lastHelloTime;  // -----------------------  /* auto */
/*4E9*/ uint16_t reaperTimer;  // ------------------------  /* auto */
/*4EB*/ uint16_t portalGeneratedFromId;  // --------------  /* auto */
/*4ED*/ uint16_t nameIndex;  // --------------------------  /* auto */
/*4EF*/ uint8_t bloodGroupIndex;  // ---------------------  /* auto */
/*4F0*/ uint32_t casinoBigWinGameTick;  // ---------------  /* auto */
/*4F4*/ uint16_t casinoGamblingDuration;  // -------------  /* auto */
/*4F6*/ uint16_t torturedDuration;  // -------------------  /* auto */
/*4F8*/ uint8_t notUsed;  // -----------------------------  /* auto */
/*4F9*/ uint8_t triggerRootRepeatCount;  // --------------  /* auto */
/*4FA*/ int32_t gameTickInitialised;  // -----------------  /* auto */
/*4FE*/ MyFight fight;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D524*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B5F70  /* auto */
/*  4*/ // virtual BOOL v_f4_saveToTbDiscFile(TbDiscFile **);  // = 00488520  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 00488640    /* auto */
/*  C*/ // virtual int32_t v_fC_clear();  // = 00488710  -  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 00488750  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00488930  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00628BC0  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00628BC0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 0048D050  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual char *v_f2C();  // = 004B5D40  --------  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 0048AF80  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00628BC0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 004B5D60  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 004B5D80  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 00490230  ------  /* auto */
/* 48*/ // virtual void v_f48_dump();  // = 00490240  ----  /* auto */
/* 4C*/ // virtual uint16_t *v_f4C(uint16_t *);  // = 0048D880  /* auto */
/* 50*/ // virtual uint16_t *v_f50(uint16_t *);  // = 0048D340  /* auto */
/*---*/ // super CPhysicalThing  -------------------------  /* auto */
/* 54*/ // virtual char *v_f54();  // = 004B5D50  --------  /* auto */
/* 58*/ // virtual uint16_t *v_f58(uint16_t *);  // = 004B5C50  /* auto */
/* 5C*/ // virtual BOOL v_f5C();  // = 0048E830  ---------  /* auto */
/*---*/ // super CMovingThing  ---------------------------  /* auto */
/* 60*/ // virtual int32_t v_f60();  // = 00628BC0  ------  /* auto */
/* 64*/ // virtual int32_t v_f64();  // = 004B2740  ------  /* auto */
/* 68*/ // virtual int32_t v_f68();  // = 00402AD0  ------  /* auto */
/* 6C*/ // virtual int32_t v_f6C();  // = 004B5DF0  ------  /* auto */
/* 70*/ // virtual char v_f70();  // = 004B5E00  ---------  /* auto */
/* 74*/ // virtual int32_t v_f74();  // = 004B5DE0  ------  /* auto */
/* 78*/ // virtual int32_t v_f78();  // = 0040D440  ------  /* auto */
/* 7C*/ // virtual char v_f7C();  // = 0040D440  ---------  /* auto */
/* 80*/ // virtual int32_t v_f80();  // = 00402AD0  ------  /* auto */
/* 84*/ // virtual int32_t v_f84();  // = 00402AD0  ------  /* auto */
/* 88*/ // virtual BOOL v_f88();  // = 0048ED40  ---------  /* auto */
/* 8C*/ // virtual int32_t v_f8C(__int16);  // = 0048D010   /* auto */
/* 90*/ // virtual int32_t v_f90();  // = 0048D000  ------  /* auto */
/*---*/ // CCreature  ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00457880*/ uint32_t fun_457880(int32_t);  // -----------  /* auto */
/*0045A550*/ char fun_45A550();  // ----------------------  /* auto */
/*0045A6B0*/ int32_t fun_45A6B0();  // -------------------  /* auto */
/*0045A6D0*/ BOOL fun_45A6D0(int32_t);  // ---------------  /* auto */
/*0045A8B0*/ char fun_45A8B0();  // ----------------------  /* auto */
/*0045ADC0*/ char fun_45ADC0();  // ----------------------  /* auto */
/*0045AFF0*/ BOOL fun_45AFF0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0045B140*/ uint16_t fun_45B140(int32_t);  // -----------  /* auto */
/*0045B500*/ uint16_t fun_45B500(int32_t);  // -----------  /* auto */
/*0045B800*/ uint16_t fun_45B800(int32_t);  // -----------  /* auto */
/*0045BAD0*/ uint16_t fun_45BAD0(int32_t);  // -----------  /* auto */
/*0045BDF0*/ __int16 fun_45BDF0(int32_t);  // ------------  /* auto */
/*0045C690*/ uint16_t fun_45C690();  // ------------------  /* auto */
/*0045CB00*/ int32_t fun_45CB00();  // -------------------  /* auto */
/*0045E1B0*/ int32_t fun_45E1B0(int32_t);  // ------------  /* auto */
/*0045E4F0*/ char fun_45E4F0();  // ----------------------  /* auto */
/*0045E8F0*/ BOOL fun_45E8F0();  // ----------------------  /* auto */
/*0045E9F0*/ BOOL fun_45E9F0();  // ----------------------  /* auto */
/*0045EC10*/ int32_t fun_45EC10();  // -------------------  /* auto */
/*0045EC80*/ int32_t fun_45EC80();  // -------------------  /* auto */
/*0045EDA0*/ BOOL fun_45EDA0();  // ----------------------  /* auto */
/*0045EF50*/ char fun_45EF50();  // ----------------------  /* auto */
/*00460B50*/ int32_t fun_460B50();  // -------------------  /* auto */
/*00460C50*/ int32_t fun_460C50();  // -------------------  /* auto */
/*00460DA0*/ int32_t fun_460DA0(int32_t *);  // ----------  /* auto */
/*00473990*/ BOOL fun_473990();  // ----------------------  /* auto */
/*004739C0*/ BOOL fun_4739C0();  // ----------------------  /* auto */
/*00485210*/ BOOL fun_485210();  // ----------------------  /* auto */
/*00485880*/ int32_t fun_485880();  // -------------------  /* auto */
/*004858B0*/ uint32_t fun_4858B0(int32_t);  // -----------  /* auto */
/*004872A0*/ MyCreatureDataObj *init(int32_t, int32_t, MyCreatureDataObj *);  /* auto */
/*00488520*/ BOOL saveToTbDiscFile(TbDiscFile **);  // ---  /* auto */
/*00488640*/ int32_t fun_488640(int32_t *);  // ----------  /* auto */
/*00488710*/ int32_t clear();  // ------------------------  /* auto */
/*00488750*/ int32_t fun_488750();  // -------------------  /* auto */
/*004887D0*/ int32_t fun_4887D0(int32_t, int32_t);  // ---  /* auto */
/*00488840*/ BOOL fun_488840();  // ----------------------  /* auto */
/*004888C0*/ BOOL fun_4888C0();  // ----------------------  /* auto */
/*00488930*/ int32_t fun_488930();  // -------------------  /* auto */
/*0048AD30*/ int32_t fun_48AD30(int32_t);  // ------------  /* auto */
/*0048AE70*/ int32_t fun_48AE70(int32_t);  // ------------  /* auto */
/*0048AF50*/ uint32_t fun_48AF50(uint32_t);  // ----------  /* auto */
/*0048AF80*/ uint16_t fun_48AF80();  // ------------------  /* auto */
/*0048B120*/ uint8_t fun_48B120();  // -------------------  /* auto */
/*0048B350*/ int32_t fun_48B350(uint16_t);  // -----------  /* auto */
/*0048B770*/ int32_t fun_48B770();  // -------------------  /* auto */
/*0048BE20*/ int32_t fun_48BE20(int32_t, __int16, int32_t);  /* auto */
/*0048C800*/ BOOL fun_48C800(uint8_t *, uint8_t);  // ----  /* auto */
/*0048C9B0*/ BOOL fun_48C9B0(int32_t);  // ---------------  /* auto */
/*0048D000*/ int32_t fun_48D000();  // -------------------  /* auto */
/*0048D010*/ int32_t fun_48D010(uint32_t);  // -----------  /* auto */
/*0048D050*/ void fun_48D050(int32_t);  // ---------------  /* auto */
/*0048D340*/ wchar_t *fun_48D340(wchar_t *);  // ---------  /* auto */
/*0048D880*/ wchar_t *fun_48D880(wchar_t *);  // ---------  /* auto */
/*0048DEA0*/ int32_t fun_48DEA0(char);  // ---------------  /* auto */
/*0048DF10*/ uint8_t fun_48DF10(int32_t);  // ------------  /* auto */
/*0048DFA0*/ uint8_t fun_48DFA0(int32_t);  // ------------  /* auto */
/*0048DFD0*/ uint8_t fun_48DFD0(int32_t);  // ------------  /* auto */
/*0048E000*/ uint8_t fun_48E000(int32_t);  // ------------  /* auto */
/*0048E030*/ uint8_t fun_48E030(int32_t);  // ------------  /* auto */
/*0048E060*/ uint8_t fun_48E060(int32_t);  // ------------  /* auto */
/*0048E090*/ int32_t fun_48E090(char);  // ---------------  /* auto */
/*0048E0B0*/ int32_t fun_48E0B0(char);  // ---------------  /* auto */
/*0048E0D0*/ int32_t fun_48E0D0(int32_t);  // ------------  /* auto */
/*0048E140*/ int32_t fun_48E140(char);  // ---------------  /* auto */
/*0048E160*/ int32_t fun_48E160();  // -------------------  /* auto */
/*0048E830*/ BOOL fun_48E830();  // ----------------------  /* auto */
/*0048EBD0*/ __int16 setOnFre(__int16, __int16);  // -----  /* auto */
/*0048EBF0*/ BOOL fun_48EBF0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0048ECE0*/ int32_t fun_48ECE0();  // -------------------  /* auto */
/*0048ED40*/ int32_t fun_48ED40();  // -------------------  /* auto */
/*0048EE90*/ CTag *fun_48EE90(int32_t, int32_t);  // -----  /* auto */
/*0048F1D0*/ uint32_t fun_48F1D0();  // ------------------  /* auto */
/*0048F250*/ BOOL fun_48F250();  // ----------------------  /* auto */
/*0048F2E0*/ int32_t fun_48F2E0();  // -------------------  /* auto */
/*0048F350*/ BOOL fun_48F350();  // ----------------------  /* auto */
/*0048F380*/ BOOL fun_48F380();  // ----------------------  /* auto */
/*0048F390*/ __int16 fun_48F390(__int16);  // ------------  /* auto */
/*0048F3E0*/ void fun_48F3E0();  // ----------------------  /* auto */
/*0048F3F0*/ char fun_48F3F0();  // ----------------------  /* auto */
/*0048F410*/ uint16_t *fun_48F410(uint16_t *, int32_t);     /* auto */
/*0048F690*/ uint32_t *fun_48F690(uint32_t *);  // -------  /* auto */
/*0048FD70*/ int32_t fun_48FD70(int32_t *);  // ----------  /* auto */
/*00490120*/ int32_t fun_490120(int32_t, int32_t, int32_t);  /* auto */
/*00490230*/ int32_t fun_490230();  // -------------------  /* auto */
/*00490240*/ void dump();  // ----------------------------  /* auto */
/*00491830*/ int32_t fun_491830(int32_t);  // ------------  /* auto */
/*00491880*/ BOOL fun_491880();  // ----------------------  /* auto */
/*004918A0*/ BOOL fun_4918A0();  // ----------------------  /* auto */
/*00491900*/ uint16_t fun_491900();  // ------------------  /* auto */
/*004919C0*/ uint8_t fun_4919C0();  // -------------------  /* auto */
/*00496700*/ int32_t fun_496700(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004969D0*/ int32_t fun_4969D0(int32_t, char, int32_t, int32_t, int32_t);  /* auto */
/*00496A30*/ int32_t fun_496A30(int32_t, char, uint32_t *, int32_t, int32_t, int32_t);  /* auto */
/*00496AA0*/ int32_t fun_496AA0();  // -------------------  /* auto */
/*00496D00*/ BOOL fun_496D00();  // ----------------------  /* auto */
/*00496D20*/ int32_t fun_496D20();  // -------------------  /* auto */
/*00496D80*/ int32_t fun_496D80();  // -------------------  /* auto */
/*00496DE0*/ char fun_496DE0();  // ----------------------  /* auto */
/*0049A950*/ uint8_t fun_49A950(__int16);  // ------------  /* auto */
/*0049A980*/ int32_t fun_49A980(__int16, int32_t);  // ---  /* auto */
/*0049AA30*/ int32_t fun_49AA30(int32_t, int32_t, int32_t);  /* auto */
/*0049AAA0*/ BOOL fun_49AAA0(int32_t);  // ---------------  /* auto */
/*0049AC80*/ int32_t fun_49AC80(MyTriggerAction *);  // --  /* auto */
/*004B1FA0*/ BOOL fun_4B1FA0();  // ----------------------  /* auto */
/*004B2AE0*/ uint16_t *fun_4B2AE0(uint16_t *, uint32_t *);  /* auto */
/*004B2CE0*/ uint8_t *fun_4B2CE0(int32_t, int32_t, int32_t);  /* auto */
/*004B5B80*/ void destructor();  // ----------------------  /* auto */
/*004B5D60*/ int32_t fun_4B5D60();  // -------------------  /* auto */
/*004B5D80*/ int32_t fun_4B5D80();  // -------------------  /* auto */
/*004B5DE0*/ int32_t idBeingDragged();  // ---------------  /* auto */
/*004B5DF0*/ void startDragging();  // -------------------  /* auto */
/*004B5E00*/ void stopDragging();  // --------------------  /* auto */
/*004B5E10*/ void constructor();  // ---------------------  /* auto */
/*004B5F70*/ void *deleting_destructor(char);  // --------  /* auto */
/*004E0460*/ BOOL fun_4E0460();  // ----------------------  /* auto */
/*004E8DA0*/ int32_t fun_4E8DA0(int32_t);  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CCreature) == 0x53F);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_CREATURE_H  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
