// -------------  id: constructor_004F82E0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_COMPUTER_PLAYER_H  // -------------------------  /* auto */
#define MY_COMPUTER_PLAYER_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/utils/AABB.h>  // --------------------------  /* auto */
#include <dk2/MyEnemyBreache.h>  // ----------------------  /* auto */
#include <dk2/utils/Vec3i.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CPlayer;  // ------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct MyComputerPlayer;  // ---------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyComputerPlayer {  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint32_t flags;  // ------------------------------  /* auto */
/*  4*/ int32_t taskTimeCounter;  // ---------------------  /* auto */
/*  8*/ uint16_t attackingPlayerId;  // ------------------  /* auto */
/*  A*/ CWorld *world;  // -------------------------------  /* auto */
/*  E*/ CPlayer *cplayer;  // ----------------------------  /* auto */
/* 12*/ AABB maxBuildArea;  // ---------------------------  /* auto */
/* 22*/ uint8_t gap_22[12];  // --------------------------  /* auto */
/* 2E*/ uint16_t goldDeposits[4][4];  // -----------------  /* auto */
/* 4E*/ Vec3i callToArmsPos;  // -------------------------  /* auto */
/* 5A*/ uint16_t eventTasks_respondToAttack[3][4];  // ---  /* auto */
/* 72*/ uint16_t digRoomAtX;  // -------------------------  /* auto */
/* 74*/ uint16_t digRoomAtY;  // -------------------------  /* auto */
/* 76*/ uint16_t digRoomAtCurrentX;  // ------------------  /* auto */
/* 78*/ uint16_t digRoomAtCurrentY;  // ------------------  /* auto */
/* 7A*/ uint16_t wallHugStartX;  // ----------------------  /* auto */
/* 7C*/ uint16_t wallHugStartY;  // ----------------------  /* auto */
/* 7E*/ uint16_t wallHugEndX;  // ------------------------  /* auto */
/* 80*/ uint16_t wallHugEndY;  // ------------------------  /* auto */
/* 82*/ uint16_t joinPathStartX;  // ---------------------  /* auto */
/* 84*/ uint16_t joinPathStartY;  // ---------------------  /* auto */
/* 86*/ uint16_t joinPathEndX;  // -----------------------  /* auto */
/* 88*/ uint16_t joinPathEndY;  // -----------------------  /* auto */
/* 8A*/ int32_t wallHugDistance;  // ---------------------  /* auto */
/* 8E*/ uint8_t wallHugHeading;  // ----------------------  /* auto */
/* 8F*/ char digDX;  // ----------------------------------  /* auto */
/* 90*/ char digDY;  // ----------------------------------  /* auto */
/* 91*/ uint8_t innerLoopXOrY;  // -----------------------  /* auto */
/* 92*/ char maxX;  // -----------------------------------  /* auto */
/* 93*/ char maxY;  // -----------------------------------  /* auto */
/* 94*/ char squaresTarget;  // --------------------------  /* auto */
/* 95*/ char squaresCurrent;  // -------------------------  /* auto */
/* 96*/ uint16_t flags_96;  // ---------------------------  /* auto */
/* 98*/ uint8_t currentRoomToBuild;  // ------------------  /* auto */
/* 99*/ uint8_t nextRoomToBuild;  // ---------------------  /* auto */
/* 9A*/ uint8_t currentGoldArea;  // ---------------------  /* auto */
/* 9B*/ uint16_t playersAttackedFlags;  // ---------------  /* auto */
/* 9D*/ uint16_t firstAttackFlag;  // --------------------  /* auto */
/* 9F*/ MyEnemyBreache enemyBreaches[16];  // ------------  /* auto */
/*4AF*/ uint16_t tendancyMoney;  // ----------------------  /* auto */
/*4B1*/ uint8_t tendancyType;  // ------------------------  /* auto */
/*4B2*/ uint32_t buildFlags;  // -------------------------  /* auto */
/*4B6*/ uint32_t flags2;  // -----------------------------  /* auto */
/*4BA*/ int32_t blibBlubBlob;  // ------------------------  /* auto */
/*4BE*/ uint8_t minimumRandomTimeBeforePlacingReseachedRoom;  /* auto */
/*4BF*/ uint8_t defaultRoomSize;  // ---------------------  /* auto */
/*4C0*/ uint8_t trapAndDoorUsage;  // --------------------  /* auto */
/*4C1*/ uint8_t maximumImps;  // -------------------------  /* auto */
/*4C2*/ uint8_t tilesPerImpRatio;  // --------------------  /* auto */
/*4C3*/ uint8_t imprisonPercentage;  // ------------------  /* auto */
/*4C4*/ uint8_t bARetreatHealth;  // ---------------------  /* auto */
/*4C5*/ uint8_t specialSearchChance;  // -----------------  /* auto */
/*4C6*/ uint8_t roomList[15];  // ------------------------  /* auto */
/*4D5*/ uint8_t specialFindChance;  // -------------------  /* auto */
/*4D6*/ uint8_t flexibility;  // -------------------------  /* auto */
/*4D7*/ uint8_t iAMinimumCreatures;  // ------------------  /* auto */
/*4D8*/ uint16_t iAThreatSuperiority;  // ----------------  /* auto */
/*4DA*/ uint16_t bAThreatSuperiority;  // ----------------  /* auto */
/*4DC*/ uint16_t bACallToArmsValue;  // ------------------  /* auto */
/*4DE*/ uint8_t buildLostRoomAfterMinimumTime;  // -------  /* auto */
/*4DF*/ uint8_t specialRange;  // ------------------------  /* auto */
/*4E0*/ uint8_t neutralRoomRangeFromHeart;  // -----------  /* auto */
/*4E1*/ uint8_t neutralRoomRangeFromClaimedArea;  // -----  /* auto */
/*4E2*/ uint8_t iAUseCreatures;  // ----------------------  /* auto */
/*4E3*/ uint8_t tendancySpeed;  // -----------------------  /* auto */
/*4E4*/ uint8_t openness;  // ----------------------------  /* auto */
/*4E5*/ uint16_t goldValue;  // --------------------------  /* auto */
/*4E7*/ uint16_t manaValue;  // --------------------------  /* auto */
/*4E9*/ uint16_t removeCallToArmsAfter;  // --------------  /* auto */
/*4EB*/ uint8_t removeCallToArmsEnemyCreatures;  // ------  /* auto */
/*4EC*/ uint8_t removeCallToArmsWithinRange;  // ---------  /* auto */
/*4ED*/ uint8_t removeCallToArmsOwnCreatures;  // --------  /* auto */
/*4EE*/ uint8_t waitBeforeAttackingAgain;  // ------------  /* auto */
/*4EF*/ int32_t callToArmsCounter;  // -------------------  /* auto */
/*4F3*/ int32_t cannotAttackCounter;  // -----------------  /* auto */
/*4F7*/ __int16 untagGoldCounter;  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004F82E0*/ MyComputerPlayer *constructor();  // --------  /* auto */
/*004F8330*/ int32_t init(CWorld *, CPlayer *);  // ------  /* auto */
/*004F8350*/ char close();  // ---------------------------  /* auto */
/*004F8710*/ BOOL fun_4F8710(void **);  // ---------------  /* auto */
/*004F93B0*/ int32_t fun_4F93B0();  // -------------------  /* auto */
/*004F9520*/ int32_t fun_4F9520(uint16_t);  // -----------  /* auto */
/*004F9710*/ BOOL fun_4F9710(int32_t);  // ---------------  /* auto */
/*004F9B90*/ int32_t fun_4F9B90(int32_t);  // ------------  /* auto */
/*004FA000*/ int32_t fun_4FA000(int32_t);  // ------------  /* auto */
/*004FA400*/ int32_t fun_4FA400();  // -------------------  /* auto */
/*004FA7C0*/ BOOL fun_4FA7C0();  // ----------------------  /* auto */
/*004FA8D0*/ CPlayer *fun_4FA8D0();  // ------------------  /* auto */
/*004FAB10*/ int32_t fun_4FAB10();  // -------------------  /* auto */
/*004FAEF0*/ int32_t fun_4FAEF0();  // -------------------  /* auto */
/*004FBE00*/ int32_t fun_4FBE00(int32_t);  // ------------  /* auto */
/*004FC3B0*/ int32_t fun_4FC3B0(int32_t, int32_t, uint16_t *);  /* auto */
/*004FC690*/ void fun_4FC690();  // ----------------------  /* auto */
/*004FCE70*/ char fun_4FCE70(char);  // ------------------  /* auto */
/*004FD030*/ char fun_4FD030(char);  // ------------------  /* auto */
/*004FD2B0*/ char fun_4FD2B0(char);  // ------------------  /* auto */
/*004FD590*/ int32_t fun_4FD590();  // -------------------  /* auto */
/*004FD660*/ char fun_4FD660(char);  // ------------------  /* auto */
/*004FD750*/ char fun_4FD750(char);  // ------------------  /* auto */
/*004FDB90*/ int32_t fun_4FDB90(int32_t);  // ------------  /* auto */
/*004FDC50*/ char fun_4FDC50(char);  // ------------------  /* auto */
/*004FE0B0*/ char fun_4FE0B0(char);  // ------------------  /* auto */
/*004FE9C0*/ int32_t fun_4FE9C0();  // -------------------  /* auto */
/*004FECE0*/ char fun_4FECE0(char);  // ------------------  /* auto */
/*004FEFC0*/ int32_t fun_4FEFC0();  // -------------------  /* auto */
/*004FF260*/ char fun_4FF260(char);  // ------------------  /* auto */
/*004FF5C0*/ char fun_4FF5C0(char);  // ------------------  /* auto */
/*005003A0*/ char fun_5003A0(char);  // ------------------  /* auto */
/*00500520*/ CPlayer *fun_500520();  // ------------------  /* auto */
/*005006D0*/ char fun_5006D0(char);  // ------------------  /* auto */
/*00500C20*/ int32_t fun_500C20();  // -------------------  /* auto */
/*005012A0*/ int32_t fun_5012A0(int32_t, int32_t, char);    /* auto */
/*00501C10*/ void fun_501C10();  // ----------------------  /* auto */
/*00502230*/ int32_t fun_502230();  // -------------------  /* auto */
/*00502F00*/ int32_t fun_502F00(int32_t);  // ------------  /* auto */
/*00503690*/ int32_t fun_503690(int32_t);  // ------------  /* auto */
/*005039F0*/ uint32_t calcChecksum();  // ----------------  /* auto */
/*00503F50*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyComputerPlayer) == 0x4F9);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_COMPUTER_PLAYER_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
