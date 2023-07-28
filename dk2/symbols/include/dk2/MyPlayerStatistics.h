// --------------  id: construct_004B871D  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_PLAYER_STATISTICS_H  // -----------------------  /* auto */
#define MY_PLAYER_STATISTICS_H  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyPlayerStatistics;  // -------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyPlayerStatistics {  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t dungeonHeartsDestroyed;  // --------------  /* auto */
/*  4*/ int32_t enemyCreaturesKilled;  // ----------------  /* auto */
/*  8*/ int32_t heroesDestroyed;  // ---------------------  /* auto */
/*  C*/ int32_t roomsTakenOver;  // ----------------------  /* auto */
/* 10*/ int32_t roomExtraPoints;  // ---------------------  /* auto */
/* 14*/ int32_t landOwned;  // ---------------------------  /* auto */
/* 18*/ int32_t goldMined;  // ---------------------------  /* auto */
/* 1C*/ int32_t manaStored;  // --------------------------  /* auto */
/* 20*/ int32_t itemsManufactured;  // -------------------  /* auto */
/* 24*/ int32_t creaturesCommanded;  // ------------------  /* auto */
/* 28*/ int32_t creaturesConverted;  // ------------------  /* auto */
/* 2C*/ int32_t creatureTraining;  // --------------------  /* auto */
/* 30*/ uint8_t levelWon;  // ----------------------------  /* auto */
/* 31*/ int32_t wnCreaturesKilled;  // -------------------  /* auto */
/* 35*/ int32_t moneySpent;  // --------------------------  /* auto */
/* 39*/ int32_t numberOfThingsResearched;  // ------------  /* auto */
/* 3D*/ int32_t timeTaken;  // ---------------------------  /* auto */
/* 41*/ char specialsFound;  // --------------------------  /* auto */
/* 42*/ char specialsMissed;  // -------------------------  /* auto */
/* 43*/ char secretLevelsMissed;  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*005071D0*/ int32_t calcChecksum();  // -----------------  /* auto */
/*00507240*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyPlayerStatistics) == 0x44);  // ---  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_PLAYER_STATISTICS_H  -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
