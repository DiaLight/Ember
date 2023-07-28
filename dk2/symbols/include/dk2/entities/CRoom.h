// -----------------  id: vtbl_0066DB7C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_ROOM_H  // -------------------------------------  /* auto */
#define C_ROOM_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/entities/CTag.h>  // -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CObject;  // ------------------------------------  /* auto */
  struct CPlayer;  // ------------------------------------  /* auto */
  struct CRoom;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CRoom : CTag {  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  6*/ uint16_t playerRoomListNodeX;  // ----------------  /* auto */
/*  8*/ uint16_t playerRoomListNodeY;  // ----------------  /* auto */
/*  A*/ uint16_t creatureList;  // -----------------------  /* auto */
/*  C*/ uint16_t objectList;  // -------------------------  /* auto */
/*  E*/ uint16_t autoPlacedObjectList;  // ---------------  /* auto */
/* 10*/ uint16_t deadBodyList;  // -----------------------  /* auto */
/* 12*/ __int16 f12;  // ---------------------------------  /* auto */
/* 14*/ uint8_t gap_14[4];  // ---------------------------  /* auto */
/* 18*/ uint8_t typeId;  // ------------------------------  /* auto */
/* 19*/ int32_t pobj;  // --------------------------------  /* auto */
/* 1D*/ uint16_t playerId;  // ---------------------------  /* auto */
/* 1F*/ uint16_t oomManagerNodeX;  // --------------------  /* auto */
/* 21*/ uint16_t roomManagerNodeY;  // -------------------  /* auto */
/* 23*/ uint16_t changedAreaRoomListNodeX;  // -----------  /* auto */
/* 25*/ uint16_t changedAreaRoomListNodeY;  // -----------  /* auto */
/* 27*/ uint16_t centrePosX;  // -------------------------  /* auto */
/* 29*/ uint16_t centrePosY;  // -------------------------  /* auto */
/* 2B*/ uint8_t navigationPosX;  // ----------------------  /* auto */
/* 2C*/ uint8_t navigationPosY;  // ----------------------  /* auto */
/* 2D*/ uint8_t firstSlabX;  // --------------------------  /* auto */
/* 2E*/ uint8_t firstSlabY;  // --------------------------  /* auto */
/* 2F*/ uint8_t lastSlabX;  // ---------------------------  /* auto */
/* 30*/ uint8_t lastSlabY;  // ---------------------------  /* auto */
/* 31*/ int32_t closing;  // -----------------------------  /* auto */
/* 35*/ int32_t health;  // ------------------------------  /* auto */
/* 39*/ uint8_t gap_39[8];  // ---------------------------  /* auto */
/* 41*/ int32_t discoModeActive;  // ---------------------  /* auto */
/* 45*/ int32_t sData_DiscoModeStartedOnGameTick;  // ----  /* auto */
/* 49*/ char field_49_union_start;  // -------------------  /* auto */
/* 4A*/ uint8_t f4a_gap[17];  // -------------------------  /* auto */
/* 5B*/ char f5B;  // ------------------------------------  /* auto */
/* 5C*/ char f5C;  // ------------------------------------  /* auto */
/* 5D*/ uint8_t f5D;  // ---------------------------------  /* auto */
/* 5E*/ uint8_t f5E;  // ---------------------------------  /* auto */
/* 5F*/ uint8_t f5F;  // ---------------------------------  /* auto */
/* 60*/ uint8_t gap_60[7];  // ---------------------------  /* auto */
/* 67*/ uint16_t totalCapacity;  // ----------------------  /* auto */
/* 69*/ uint16_t totalFighterCapacity;  // ---------------  /* auto */
/* 6B*/ uint16_t usedCapacity;  // -----------------------  /* auto */
/* 6D*/ uint16_t usedCreatureCapacity;  // ---------------  /* auto */
/* 6F*/ uint16_t usedObjectCapacity;  // -----------------  /* auto */
/* 71*/ uint16_t usedDeadBodyCapacity;  // ---------------  /* auto */
/* 73*/ int32_t gameTickLastUpdated;  // -----------------  /* auto */
/* 77*/ int32_t gameTickStartFight;  // ------------------  /* auto */
/* 7B*/ int32_t gameTickFightDuration;  // ---------------  /* auto */
/* 7F*/ uint8_t minimumRoomFightDurationSeconds;  // -----  /* auto */
/* 80*/ uint8_t specialTileOffset;  // -------------------  /* auto */
/* 81*/ int32_t sparkPosition;  // -----------------------  /* auto */
/* 85*/ __int16 sparkPositionUpdate;  // -----------------  /* auto */
/* 87*/ uint8_t sparkSlabX;  // --------------------------  /* auto */
/* 88*/ uint8_t sparkSlabY;  // --------------------------  /* auto */
/* 89*/ uint8_t sparkEdge;  // ---------------------------  /* auto */
/* 8A*/ int32_t beingDeleted;  // ------------------------  /* auto */
/* 8E*/ int32_t gameTickLastFightEffect;  // -------------  /* auto */
/* 92*/ int32_t roomWallAlignmentMapX;  // ---------------  /* auto */
/* 96*/ int32_t roomWallAlignmentMapY;  // ---------------  /* auto */
/* 9A*/ char destroyed;  // ------------------------------  /* auto */
/* 9B*/ int32_t orientation;  // -------------------------  /* auto */
/* 9F*/ int32_t gameTickLastOnChangeSize;  // ------------  /* auto */
/* A3*/ int32_t functional;  // --------------------------  /* auto */
/* A7*/ uint16_t size;  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066DB7C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004EC130  /* auto */
/*  4*/ // virtual BOOL v_f4_saveToTbDiscFile(TbDiscFile **);  // = 004E3B10  /* auto */
/*---*/ // CRoom  ----------------------------------------  /* auto */
/*  8*/ virtual wchar_t *v_fun_4E9250(wchar_t *);  // = 004E9250  /* auto */
// -------------------------------------------------------  /* auto */
/*004DA1B0*/ BOOL fun_4DA1B0(int32_t, int32_t);  // ------  /* auto */
/*004DB700*/ char fun_4DB700(int32_t);  // ---------------  /* auto */
/*004E0110*/ uint16_t fun_4E0110();  // ------------------  /* auto */
/*004E3790*/ void constructor();  // ---------------------  /* auto */
/*004E37F0*/ void destructor();  // ----------------------  /* auto */
/*004E3B10*/ int32_t fun_4E3B10(void **);  // ------------  /* auto */
/*004E3ED0*/ __int16 fun_4E3ED0();  // -------------------  /* auto */
/*004E4300*/ int32_t fun_4E4300();  // -------------------  /* auto */
/*004E52F0*/ CPlayer *getPlayer();  // -------------------  /* auto */
/*004E5FF0*/ int32_t fun_4E5FF0(int32_t);  // ------------  /* auto */
/*004E6130*/ uint16_t fun_4E6130(CObject *);  // ---------  /* auto */
/*004E6220*/ int32_t fun_4E6220(int32_t);  // ------------  /* auto */
/*004E62D0*/ void **fun_4E62D0(CObject *);  // -----------  /* auto */
/*004E6BC0*/ uint16_t rmoveObject();  // -----------------  /* auto */
/*004E6F00*/ int32_t fun_4E6F00();  // -------------------  /* auto */
/*004E70A0*/ void dump();  // ----------------------------  /* auto */
/*004E9130*/ char fun_4E9130(char);  // ------------------  /* auto */
/*004E9250*/ wchar_t *fun_4E9250(wchar_t *);  // ---------  /* auto */
/*004EC130*/ void *fun_4EC130(char);  // -----------------  /* auto */
/*004F4090*/ uint32_t Treasure_cpp_4F4090(__int64, uint32_t);  /* auto */
/*004F4440*/ char fun_4F4440(int32_t);  // ---------------  /* auto */
/*004F4700*/ int32_t fun_4F4700();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CRoom) == 0xA9);  // ----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_ROOM_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
