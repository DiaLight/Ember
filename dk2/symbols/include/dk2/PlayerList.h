// --------------  id: construct_004C1EAD  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef PLAYER_LIST_H  // --------------------------------  /* auto */
#define PLAYER_LIST_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CPlayer;  // ------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct PlayerList;  // ---------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct PlayerList {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint16_t allocatedList;  // ----------------------  /* auto */
/*  2*/ int32_t opened;  // ------------------------------  /* auto */
/*  6*/ CWorld *cworld;  // ------------------------------  /* auto */
/*  A*/ CPlayer *players_7;  // --------------------------  /* auto */
/*  E*/ uint16_t freeList;  // ---------------------------  /* auto */
/* 10*/ int32_t numberOfPlayersCreated;  // --------------  /* auto */
/* 14*/ char memset0_h930;  // ---------------------------  /* auto */
/* 15*/ uint8_t gap_15[391];  // -------------------------  /* auto */
/*19C*/ uint32_t f19C;  // -------------------------------  /* auto */
/*1A0*/ uint8_t gap_1A0[1955];  // -----------------------  /* auto */
/*943*/ char _end;  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004C1E00*/ PlayerList *init();  // ---------------------  /* auto */
/*004C1E20*/ int32_t createPlayers(CWorld *);  // --------  /* auto */
/*004C2010*/ __int16 clear();  // ------------------------  /* auto */
/*004C2050*/ int32_t saveToTbDiscFile(TbDiscFile **);       /* auto */
/*004C2110*/ int32_t fun_4C2110(int32_t *);  // ----------  /* auto */
/*004C22D0*/ int32_t fun_4C22D0();  // -------------------  /* auto */
/*004C2310*/ int32_t tick();  // -------------------------  /* auto */
/*004C2340*/ int32_t fun_4C2340(int32_t, uint16_t *);       /* auto */
/*004C23B0*/ int32_t sub_4C23B0(uint16_t);  // -----------  /* auto */
/*004C2530*/ int32_t calcChecksum();  // -----------------  /* auto */
/*004C2580*/ void dump();  // ----------------------------  /* auto */
/*004C2980*/ int32_t sub_4C2980(const char *);  // -------  /* auto */
/*004C2A70*/ int32_t sub_4C2A70(const char *);  // -------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(PlayerList) == 0x944);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //PLAYER_LIST_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */