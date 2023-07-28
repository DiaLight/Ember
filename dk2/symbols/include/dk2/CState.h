// -----------------  id: vtbl_0066D404  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_STATE_H  // ------------------------------------  /* auto */
#define C_STATE_H  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyAnger.h>  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CCreature;  // ----------------------------------  /* auto */
  struct CState;  // -------------------------------------  /* auto */
  struct CTag;  // ---------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CState {  // --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t opened;  // ------------------------------  /* auto */
/*  8*/ CCreature *creature;  // -------------------------  /* auto */
/*  C*/ CWorld *world;  // -------------------------------  /* auto */
/* 10*/ uint32_t currentStateId;  // ---------------------  /* auto */
/* 14*/ uint32_t gameTickLastUpdated;  // ----------------  /* auto */
/* 18*/ uint32_t startedAt;  // --------------------------  /* auto */
/* 1C*/ uint32_t age;  // --------------------------------  /* auto */
/* 20*/ MyAnger anger;  // -------------------------------  /* auto */
/* 40*/ int32_t stateBeforeUtilityState;  // -------------  /* auto */
/* 44*/ int32_t suspendTime;  // -------------------------  /* auto */
/* 48*/ int32_t lastAteTime;  // -------------------------  /* auto */
/* 4C*/ int32_t hungerNeed;  // --------------------------  /* auto */
/* 50*/ int32_t lastAttemptedHunger;  // -----------------  /* auto */
/* 54*/ int32_t lastSleptTime;  // -----------------------  /* auto */
/* 58*/ int32_t sleepNeeded;  // -------------------------  /* auto */
/* 5C*/ int32_t lastAttemptedSleep;  // ------------------  /* auto */
/* 60*/ int32_t payCheckedTime;  // ----------------------  /* auto */
/* 64*/ int32_t currentlyDoingJobId;  // -----------------  /* auto */
/* 68*/ int32_t returnToJobId;  // -----------------------  /* auto */
/* 6C*/ uint16_t returnRoomTagId;  // --------------------  /* auto */
/* 6E*/ int32_t droppedToDoJobId;  // --------------------  /* auto */
/* 72*/ int32_t initiatedEndOfLevelGems;  // -------------  /* auto */
/* 76*/ int32_t data_startedAt;  // ----------------------  /* auto */
/* 7A*/ int32_t data_carriedGold;  // --------------------  /* auto */
/* 7E*/ int32_t data_timerTick;  // ----------------------  /* auto */
/* 82*/ int32_t data_lastGameTickInterrupted;  // --------  /* auto */
/* 86*/ int32_t data_idleCounter;  // --------------------  /* auto */
/* 8A*/ uint16_t impJobData_impTaskID;  // ---------------  /* auto */
/* 8C*/ int32_t impJobData_impTaskPositionX;  // ---------  /* auto */
/* 90*/ int32_t impJobData_impTaskPositionY;  // ---------  /* auto */
/* 94*/ uint16_t impJobData_impTaskSurface;  // ----------  /* auto */
/* 96*/ uint16_t impJobData_impTaskSlot;  // -------------  /* auto */
/* 98*/ uint8_t impJobData_lastTaskType;  // -------------  /* auto */
/* 99*/ int32_t impJobData_justDropped;  // --------------  /* auto */
/* 9D*/ uint8_t impJobData_droppedTask;  // --------------  /* auto */
/* 9E*/ int32_t impJobData_lastEvaluate;  // -------------  /* auto */
/* A2*/ uint8_t impJobData_scanningJob;  // --------------  /* auto */
/* A3*/ int32_t impJobData_scanningData;  // -------------  /* auto */
/* A7*/ int32_t fA7;  // ---------------------------------  /* auto */
/* AB*/ int32_t fAB;  // ---------------------------------  /* auto */
/* AF*/ int32_t fAF;  // ---------------------------------  /* auto */
/* B3*/ int32_t fB3;  // ---------------------------------  /* auto */
/* B7*/ __int16 fB7;  // ---------------------------------  /* auto */
/* B9*/ __int16 fB9;  // ---------------------------------  /* auto */
/* BB*/ int32_t fBB;  // ---------------------------------  /* auto */
/* BF*/ uint8_t fbf_gap[20];  // -------------------------  /* auto */
/* D3*/ int32_t fD3;  // ---------------------------------  /* auto */
/* D7*/ uint8_t fd7_gap[8];  // --------------------------  /* auto */
/* DF*/ int32_t utilityNewState;  // ---------------------  /* auto */
/* E3*/ char field_E3_union_start;  // -------------------  /* auto */
/* E4*/ uint8_t fe4_gap[21];  // -------------------------  /* auto */
/* F9*/ int32_t lastGameTickSuccessfullyChoseUnhappyJob;    /* auto */
/* FD*/ int32_t lastGameTickSuccessfullyChoseHappyJob;      /* auto */
/*101*/ int32_t lastGameTickSuccessfullyChoseAngryJob;      /* auto */
/*105*/ int32_t lairCalculated;  // ----------------------  /* auto */
/*109*/ int32_t lairAvailability;  // --------------------  /* auto */
/*10D*/ uint16_t lair;  // -------------------------------  /* auto */
/*10F*/ int32_t prisonCalculated;  // --------------------  /* auto */
/*113*/ int32_t prisonAvailability;  // ------------------  /* auto */
/*117*/ uint16_t prison;  // -----------------------------  /* auto */
/*119*/ int32_t torturingTargetPositionX;  // ------------  /* auto */
/*11D*/ int32_t torturingTargetPositionY;  // ------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D404*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CState  ---------------------------------------  /* auto */
/*  0*/ virtual BOOL v_fun_476CF0(int32_t *);  // = 00476CF0  /* auto */
/*  4*/ virtual BOOL v_f4_saveToTbDiscFile(TbDiscFile **);  // = 00476CB0  /* auto */
/*  8*/ virtual int32_t v_f8();  // = 004B4C20  ----------  /* auto */
/*  C*/ virtual void *v_fC();  // = 004B4C20  ------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00457780*/ BOOL fun_457780();  // ----------------------  /* auto */
/*004582C0*/ BOOL fun_4582C0();  // ----------------------  /* auto */
/*004585C0*/ BOOL fun_4585C0();  // ----------------------  /* auto */
/*00458680*/ BOOL fun_458680();  // ----------------------  /* auto */
/*00458690*/ int32_t fun_458690();  // -------------------  /* auto */
/*00458DF0*/ int32_t fun_458DF0();  // -------------------  /* auto */
/*00458EB0*/ int32_t DisArmTrapState_cpp_458EB0();  // ---  /* auto */
/*00459560*/ int32_t fun_459560();  // -------------------  /* auto */
/*004596D0*/ int32_t fun_4596D0();  // -------------------  /* auto */
/*00459D50*/ int32_t fun_459D50();  // -------------------  /* auto */
/*00459FD0*/ int32_t fun_459FD0();  // -------------------  /* auto */
/*0045A0D0*/ int32_t fun_45A0D0();  // -------------------  /* auto */
/*0045A200*/ BOOL fun_45A200();  // ----------------------  /* auto */
/*0045A290*/ int32_t ExploreState_cpp_45A290();  // ------  /* auto */
/*0045EB20*/ int32_t fun_45EB20();  // -------------------  /* auto */
/*0045F030*/ int32_t fun_45F030();  // -------------------  /* auto */
/*004602E0*/ int32_t fun_4602E0();  // -------------------  /* auto */
/*00460FE0*/ int32_t fun_460FE0();  // -------------------  /* auto */
/*004611D0*/ int32_t FightWithDrawState_cpp_4611D0();       /* auto */
/*00461850*/ int32_t fun_461850();  // -------------------  /* auto */
/*00462310*/ BOOL fun_462310();  // ----------------------  /* auto */
/*00462490*/ int32_t fun_462490();  // -------------------  /* auto */
/*00462660*/ CTag *fun_462660();  // ---------------------  /* auto */
/*004633D0*/ BOOL fun_4633D0();  // ----------------------  /* auto */
/*00464170*/ int32_t fun_464170();  // -------------------  /* auto */
/*00464360*/ int32_t fun_464360(int32_t);  // ------------  /* auto */
/*00464400*/ int32_t ImpState_cpp_464400();  // ----------  /* auto */
/*004647D0*/ char fun_4647D0();  // ----------------------  /* auto */
/*00464A80*/ int32_t fun_464A80(uint16_t *);  // ---------  /* auto */
/*004651A0*/ int32_t fun_4651A0(int32_t *, int32_t, char, int32_t);  /* auto */
/*004687C0*/ int32_t fun_4687C0(char, int32_t, CTag *, uint16_t *);  /* auto */
/*00469600*/ int32_t fun_469600(int32_t, int32_t, int32_t);  /* auto */
/*0046A550*/ int32_t fun_46A550(int32_t, int32_t, int32_t);  /* auto */
/*0046AB50*/ int32_t fun_46AB50(int32_t, int32_t, int32_t);  /* auto */
/*0046AEA0*/ int32_t fun_46AEA0(int32_t, int32_t, int32_t);  /* auto */
/*0046B6D0*/ int32_t fun_46B6D0(int32_t, CTag *, int32_t);  /* auto */
/*0046B9C0*/ int32_t fun_46B9C0(int32_t, CTag *, uint16_t *);  /* auto */
/*0046C1A0*/ int32_t fun_46C1A0(int32_t, int32_t, uint16_t *);  /* auto */
/*0046CB80*/ int32_t fun_46CB80(int32_t, int32_t, int32_t);  /* auto */
/*0046CF40*/ int32_t fun_46CF40(int32_t, int32_t, uint16_t *);  /* auto */
/*0046D810*/ int32_t fun_46D810(int32_t, int32_t, uint16_t *);  /* auto */
/*0046E8E0*/ BOOL fun_46E8E0();  // ----------------------  /* auto */
/*0046EAB0*/ BOOL KeeperState_cpp_46EAB0();  // ----------  /* auto */
/*0046F390*/ BOOL fun_46F390();  // ----------------------  /* auto */
/*0046F440*/ int32_t fun_46F440();  // -------------------  /* auto */
/*00470080*/ int32_t fun_470080();  // -------------------  /* auto */
/*00470C80*/ BOOL fun_470C80();  // ----------------------  /* auto */
/*00470E30*/ BOOL fun_470E30();  // ----------------------  /* auto */
/*00471630*/ int32_t fun_471630(int32_t *, char);  // ----  /* auto */
/*00471740*/ int32_t fun_471740(int32_t, char);  // ------  /* auto */
/*00471890*/ int32_t fun_471890(int32_t *, int32_t, char);  /* auto */
/*00471A70*/ BOOL fun_471A70(int32_t, int32_t, char);       /* auto */
/*00471D10*/ int32_t fun_471D10(int32_t, int32_t, int32_t);  /* auto */
/*00471E80*/ BOOL fun_471E80();  // ----------------------  /* auto */
/*00472320*/ void fun_472320();  // ----------------------  /* auto */
/*004728E0*/ BOOL fun_4728E0();  // ----------------------  /* auto */
/*00475170*/ int32_t fun_475170();  // -------------------  /* auto */
/*004759D0*/ BOOL fun_4759D0();  // ----------------------  /* auto */
/*00476B10*/ CState *constructor();  // ------------------  /* auto */
/*00476B30*/ void destructor();  // ----------------------  /* auto */
/*00476B40*/ int32_t fun_476B40(CCreature *, CWorld *);     /* auto */
/*00476CB0*/ BOOL saveToTbDiscFile(TbDiscFile **);  // ---  /* auto */
/*00476CF0*/ BOOL fun_476CF0(int32_t *);  // -------------  /* auto */
/*00476D30*/ int32_t fun_476D30(int32_t, uint32_t *);       /* auto */
/*00476FC0*/ int32_t fun_476FC0();  // -------------------  /* auto */
/*00477310*/ BOOL fun_477310(int32_t);  // ---------------  /* auto */
/*00477B10*/ int32_t fun_477B10(int32_t);  // ------------  /* auto */
/*00477C20*/ int32_t fun_477C20();  // -------------------  /* auto */
/*00478050*/ int32_t fun_478050();  // -------------------  /* auto */
/*00478080*/ int32_t fun_478080(int32_t);  // ------------  /* auto */
/*004782C0*/ int32_t fun_4782C0();  // -------------------  /* auto */
/*004784C0*/ int32_t fun_4784C0();  // -------------------  /* auto */
/*00478B80*/ CCreature *fun_478B80(int32_t, int32_t, int32_t);  /* auto */
/*00478D00*/ CCreature *fun_478D00();  // ----------------  /* auto */
/*004790A0*/ int32_t fun_4790A0();  // -------------------  /* auto */
/*00479200*/ void dump();  // ----------------------------  /* auto */
/*00480FB0*/ int32_t fun_480FB0();  // -------------------  /* auto */
/*00480FF0*/ int32_t fun_480FF0();  // -------------------  /* auto */
/*00481020*/ int32_t fun_481020();  // -------------------  /* auto */
/*00481360*/ uint32_t fun_481360();  // ------------------  /* auto */
/*00481400*/ int32_t fun_481400();  // -------------------  /* auto */
/*00481520*/ BOOL fun_481520();  // ----------------------  /* auto */
/*004816C0*/ int32_t fun_4816C0();  // -------------------  /* auto */
/*004816F0*/ int32_t fun_4816F0();  // -------------------  /* auto */
/*00481750*/ BOOL fun_481750();  // ----------------------  /* auto */
/*00481EF0*/ int32_t fun_481EF0();  // -------------------  /* auto */
/*00481FA0*/ BOOL fun_481FA0();  // ----------------------  /* auto */
/*00482690*/ BOOL fun_482690();  // ----------------------  /* auto */
/*00482A60*/ BOOL fun_482A60();  // ----------------------  /* auto */
/*00482EF0*/ int32_t fun_482EF0();  // -------------------  /* auto */
/*00483AC0*/ BOOL fun_483AC0();  // ----------------------  /* auto */
/*00483AE0*/ BOOL fun_483AE0();  // ----------------------  /* auto */
/*00485240*/ int32_t fun_485240();  // -------------------  /* auto */
/*00485AB0*/ int32_t fun_485AB0(int32_t, int32_t);  // ---  /* auto */
/*00485B50*/ BOOL fun_485B50();  // ----------------------  /* auto */
/*00485B80*/ int32_t fun_485B80(int32_t *, int32_t);  // -  /* auto */
/*00486CC0*/ int32_t fun_486CC0();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CState) == 0x121);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_STATE_H  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
