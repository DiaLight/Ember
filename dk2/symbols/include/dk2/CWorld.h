// -----------------  id: vtbl_0066E3EC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_WORLD_H  // ------------------------------------  /* auto */
#define C_WORLD_H  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/utils/AABB.h>  // --------------------------  /* auto */
#include <dk2/world/CMap.h>  // --------------------------  /* auto */
#include <dk2/world/CResearchOrder.h>  // ----------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
#include <dk2/CWorldShortEntry2.h>  // -------------------  /* auto */
#include <dk2/GameActionHandler.h>  // -------------------  /* auto */
#include <dk2/world/MyCTremor.h>  // ---------------------  /* auto */
#include <dk2/MyCreatureCollection.h>  // ----------------  /* auto */
#include <dk2/MyDdSurfaceEx.h>  // -----------------------  /* auto */
#include <dk2/MyLevelObjective.h>  // --------------------  /* auto */
#include <dk2/world/MyPlayerMessageQueue.h>  // ----------  /* auto */
#include <dk2/MyRooms.h>  // -----------------------------  /* auto */
#include <dk2/world/MyWorldSacrifice.h>  // --------------  /* auto */
#include <dk2/PlayerList.h>  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CPlayer;  // ------------------------------------  /* auto */
  struct CTag;  // ---------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct GameAction;  // ---------------------------------  /* auto */
  struct GameActionCtx;  // ------------------------------  /* auto */
  struct MyCreatureDataObj;  // --------------------------  /* auto */
  struct MyCreatureSpellDataObj;  // ---------------------  /* auto */
  struct MyDoorDataObj;  // ------------------------------  /* auto */
  struct MyKeeperSpellDataObj;  // -----------------------  /* auto */
  struct MyMapElement;  // -------------------------------  /* auto */
  struct MyObjectDataObj;  // ----------------------------  /* auto */
  struct MyProfiler;  // ---------------------------------  /* auto */
  struct MyRoomDataObj;  // ------------------------------  /* auto */
  struct MyShotDataObj;  // ------------------------------  /* auto */
  struct MyTerrainDataObj;  // ---------------------------  /* auto */
  struct MyTrapDataObj;  // ------------------------------  /* auto */
  struct MyTriggerAction;  // ----------------------------  /* auto */
  struct MyTriggerWhen;  // ------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CWorld {  // --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyProfiler *profiler;  // ------------------------  /* auto */
/*  8*/ MyCreatureCollection creatures;  // --------------  /* auto */
/* 7A*/ PlayerList playerList;  // -----------------------  /* auto */
/*9BE*/ MyRooms rooms;  // -------------------------------  /* auto */
/*9DA*/ CMap cmap;  // -----------------------------------  /* auto */
/*15A0*/ uint32_t gameSeed;  // --------------------------  /* auto */
/*15A4*/ MyTerrainDataObj *terrainDataObjArr;  // --------  /* auto */
/*15A8*/ int32_t terrainDataObjArr_maxCount;  // ---------  /* auto */
/*15AC*/ int32_t terrainDataObjArr_count;  // ------------  /* auto */
/*15B0*/ int32_t terrainChecksum;  // --------------------  /* auto */
/*15B4*/ MyRoomDataObj *roomDataObjArr;  // --------------  /* auto */
/*15B8*/ int32_t roomDataObjArr_maxCount;  // ------------  /* auto */
/*15BC*/ int32_t roomDataObjArr_count;  // ---------------  /* auto */
/*15C0*/ int32_t roomChecksum;  // -----------------------  /* auto */
/*15C4*/ MyCreatureDataObj *creatureDataObjArr;  // ------  /* auto */
/*15C8*/ int32_t creatureDataObjArr_maxCount;  // --------  /* auto */
/*15CC*/ int32_t creatureDataObjArr_count;  // -----------  /* auto */
/*15D0*/ int32_t creatureChecksum;  // -------------------  /* auto */
/*15D4*/ MyDoorDataObj *doorDataObjArr;  // --------------  /* auto */
/*15D8*/ int32_t doorDataObjArr_maxCount;  // ------------  /* auto */
/*15DC*/ int32_t doorDataObjArr_count;  // ---------------  /* auto */
/*15E0*/ int32_t doorChecksum;  // -----------------------  /* auto */
/*15E4*/ MyTrapDataObj *trapDataObjArr;  // --------------  /* auto */
/*15E8*/ int32_t trapDataObjArr_maxCount;  // ------------  /* auto */
/*15EC*/ int32_t trapDataObjArr_count;  // ---------------  /* auto */
/*15F0*/ int32_t trapChecksum;  // -----------------------  /* auto */
/*15F4*/ MyObjectDataObj *objectDataObjArr;  // ----------  /* auto */
/*15F8*/ int32_t objectDataObjArr_maxCount;  // ----------  /* auto */
/*15FC*/ int32_t objectDataObjArr_count;  // -------------  /* auto */
/*1600*/ int32_t objectChecksum;  // ---------------------  /* auto */
/*1604*/ MyKeeperSpellDataObj *keeperSpellDataObjArr;       /* auto */
/*1608*/ int32_t keeperSpellDataObjArr_maxCount;  // -----  /* auto */
/*160C*/ int32_t keeperSpellDataObjArr_count;  // --------  /* auto */
/*1610*/ int32_t keeperSpellChecksum;  // ----------------  /* auto */
/*1614*/ MyCreatureSpellDataObj *creatureSpellDataObjArr;   /* auto */
/*1618*/ int32_t creatureSpellDataObjArr_maxCount;  // ---  /* auto */
/*161C*/ int32_t creatureSpellDataObjArr_count;  // ------  /* auto */
/*1620*/ int32_t creatureSpellChecksum;  // --------------  /* auto */
/*1624*/ MyShotDataObj *shotDataObjArr;  // --------------  /* auto */
/*1628*/ int32_t shotDataObjArr_maxCount;  // ------------  /* auto */
/*162C*/ int32_t shotDataObjArr_count;  // ---------------  /* auto */
/*1630*/ int32_t shotChecksum;  // -----------------------  /* auto */
/*1634*/ MyDdSurfaceEx surface;  // ----------------------  /* auto */
/*1684*/ GameActionHandler actionHandlers[138];  // ------  /* auto */
/*1F24*/ uint32_t f1F24;  // -----------------------------  /* auto */
/*1F28*/ uint8_t gap_1F28[3884];  // ---------------------  /* auto */
/*2E54*/ MyPlayerMessageQueue playerMessageQueue;  // ----  /* auto */
/*2E70*/ MyWorldSacrifice sacrifices[128];  // -----------  /* auto */
/*3F70*/ uint8_t triggerFlags[128];  // ------------------  /* auto */
/*3FF0*/ int32_t triggerTimers[16];  // ------------------  /* auto */
/*4030*/ uint8_t gap_4030[12480];  // --------------------  /* auto */
/*70F0*/ uint8_t invasionPartyCountArr[24];  // ----------  /* auto */
/*7108*/ uint8_t gap_7108[1];  // ------------------------  /* auto */
/*7109*/ uint8_t creatureOnLevels[256];  // --------------  /* auto */
/*7209*/ uint32_t f7209;  // -----------------------------  /* auto */
/*720D*/ char f720D;  // ---------------------------------  /* auto */
/*720E*/ uint8_t f720e_gap[32];  // ----------------------  /* auto */
/*722E*/ char f722E;  // ---------------------------------  /* auto */
/*722F*/ uint8_t uniqueCreatureTypeId;  // ---------------  /* auto */
/*7230*/ uint8_t clonedCreatureTypeId;  // ---------------  /* auto */
/*7231*/ int32_t uniqueCreatureCreated;  // --------------  /* auto */
/*7235*/ uint8_t gap_7235[4];  // ------------------------  /* auto */
/*7239*/ char flags;  // ---------------------------------  /* auto */
/*723A*/ uint8_t gap_723A;  // ---------------------------  /* auto */
/*723B*/ uint32_t f723B;  // -----------------------------  /* auto */
/*723F*/ uint32_t f723F;  // -----------------------------  /* auto */
/*7243*/ __int16 MEPlayerTagId;  // ----------------------  /* auto */
/*7245*/ AABB aabb_4[4];  // -----------------------------  /* auto */
/*7285*/ int32_t f7285;  // ------------------------------  /* auto */
/*7289*/ int32_t f7289;  // ------------------------------  /* auto */
/*728D*/ int32_t f728D;  // ------------------------------  /* auto */
/*7291*/ char f7291;  // ---------------------------------  /* auto */
/*7292*/ char f7292;  // ---------------------------------  /* auto */
/*7293*/ int32_t f7293;  // ------------------------------  /* auto */
/*7297*/ int32_t f7297;  // ------------------------------  /* auto */
/*729B*/ int32_t timeToPlaceNextGeneratedSpecial;  // ----  /* auto */
/*729F*/ uint8_t currentNoOfGeneratedSpecialsOnLevel;       /* auto */
/*72A0*/ uint8_t hornedReaperTypeId;  // -----------------  /* auto */
/*72A1*/ char f72A1;  // ---------------------------------  /* auto */
/*72A2*/ int32_t levelScore;  // -------------------------  /* auto */
/*72A6*/ int32_t levelScoreSet;  // ----------------------  /* auto */
/*72AA*/ int32_t levelTimeLimit;  // ---------------------  /* auto */
/*72AE*/ int32_t numberOfNonUniqueCreatureDescriptors;      /* auto */
/*72B2*/ int32_t bContinualHeroInvasion;  // -------------  /* auto */
/*72B6*/ uint16_t specialInfoPlayerId;  // ---------------  /* auto */
/*72B8*/ int32_t specialInfoMaximumSlaps;  // ------------  /* auto */
/*72BC*/ uint8_t specialInfoNextRoomTypeId;  // ----------  /* auto */
/*72BD*/ MyLevelObjective LevelObjectives[6];  // --------  /* auto */
/*72E7*/ int32_t levelChecksum;  // ----------------------  /* auto */
/*72EB*/ uint8_t loadingLevelId;  // ---------------------  /* auto */
/*72EC*/ CResearchOrder recearchOrder;  // ---------------  /* auto */
/*7304*/ uint8_t gap_7304[4];  // ------------------------  /* auto */
/*7308*/ MyTriggerWhen *triggerWhens;  // ----------------  /* auto */
/*730C*/ MyTriggerAction *triggerActions;  // ------------  /* auto */
/*7310*/ __int16 triggerRoot;  // ------------------------  /* auto */
/*7312*/ uint16_t numberOfTriggerWhens;  // --------------  /* auto */
/*7314*/ uint16_t numberOfUsedTriggerWhens;  // ----------  /* auto */
/*7316*/ uint16_t numberOfTriggerActions;  // ------------  /* auto */
/*7318*/ uint16_t numberOfUsedTriggerActions;  // --------  /* auto */
/*731A*/ uint8_t triggerRootRepeatCount;  // -------------  /* auto */
/*731B*/ uint8_t numberOfSacrificeCombinations;  // ------  /* auto */
/*731C*/ int32_t potentialManaGain;  // ------------------  /* auto */
/*7320*/ int32_t potentialMaxMana;  // -------------------  /* auto */
/*7324*/ uint8_t gap_7324[10304];  // --------------------  /* auto */
/*9B64*/ int32_t levelTextId[7];  // ---------------------  /* auto */
/*9B80*/ uint8_t previousRewardId[5];  // ----------------  /* auto */
/*9B85*/ uint8_t f9b85_gap[1];  // -----------------------  /* auto */
/*9B86*/ uint8_t currentRewardId[5];  // -----------------  /* auto */
/*9B8B*/ uint8_t f9b8b_gap[1];  // -----------------------  /* auto */
/*9B8C*/ uint8_t f9B8B_levelIntroOverride_f2[8];  // -----  /* auto */
/*9B94*/ uint16_t LevelIntroOverride_f1[8];  // ----------  /* auto */
/*9BA4*/ uint8_t f9ba4_gap[10];  // ----------------------  /* auto */
/*9BAE*/ uint8_t waterTerrainTypeId;  // -----------------  /* auto */
/*9BAF*/ uint8_t lavaTerrainTypeId;  // ------------------  /* auto */
/*9BB0*/ MyCTremor tremors[8];  // -----------------------  /* auto */
/*9C50*/ CWorldShortEntry2 short2_entries_8[8];  // ------  /* auto */
/*9D80*/ uint8_t gap9D80[68];  // ------------------------  /* auto */
/*9DC4*/ CWorldEntry entries_6[6];  // -------------------  /* auto */
/*9E66*/ int32_t f9E66;  // ------------------------------  /* auto */
/*9E6A*/ int32_t f9E6A;  // ------------------------------  /* auto */
/*9E6E*/ int32_t DungeonCentre_DECAY_meshIdx[2];  // -----  /* auto */
/*9E76*/ CWorldEntry entries_2[2];  // -------------------  /* auto */
/*9EAC*/ uint8_t gap9EAC[120];  // -----------------------  /* auto */
/*9F24*/ CWorldEntry entries_30[30];  // -----------------  /* auto */
/*A24E*/ uint8_t gapA24E[28];  // ------------------------  /* auto */
/*A26A*/ CWorldEntry entries_7[7];  // -------------------  /* auto */
/*A327*/ uint8_t fa327_gap[60];  // ----------------------  /* auto */
/*A363*/ int32_t RedTexture_texIdx;  // ------------------  /* auto */
/*A367*/ int32_t BlueTexture_texIdx;  // -----------------  /* auto */
/*A36B*/ int32_t RedTexture_texIdx_A36B;  // -------------  /* auto */
/*A36F*/ int32_t BlueTexture_texIdx_A36F;  // ------------  /* auto */
/*A373*/ int32_t RedTexture_texIdx_A373;  // -------------  /* auto */
/*A377*/ int32_t BlueTexture_texIdx_A377;  // ------------  /* auto */
/*A37B*/ int32_t ObjectiveTexture_texIdx;  // ------------  /* auto */
/*A37F*/ int32_t CharredTexture_texIdx;  // --------------  /* auto */
/*A383*/ int32_t CreatureLightning_texIdx;  // -----------  /* auto */
/*A387*/ int32_t CreatureFreeze_texIdx;  // --------------  /* auto */
/*A38B*/ int32_t CreatureInvulnerable_texIdx;  // --------  /* auto */
/*A38F*/ int32_t CreatureSlow_texIdx;  // ----------------  /* auto */
/*A393*/ int32_t CreatureInvisible_texIdx;  // -----------  /* auto */
/*A397*/ int32_t CreaturePoison_texIdx;  // --------------  /* auto */
/*A39B*/ int32_t fun;  // --------------------------------  /* auto */
/*A39F*/ int32_t funArg;  // -----------------------------  /* auto */
/*A3A3*/ int32_t buf_field_A3A3;  // ---------------------  /* auto */
/*A3A7*/ int32_t buf_field_A3A7;  // ---------------------  /* auto */
/*A3AB*/ int32_t fA3AB;  // ------------------------------  /* auto */
/*A3AF*/ int32_t fA3AF;  // ------------------------------  /* auto */
/*A3B3*/ int32_t initialSpecialsOnLevelCount;  // --------  /* auto */
/*A3B7*/ int32_t fA3B7;  // ------------------------------  /* auto */
/*A3BB*/ int32_t fA3BB;  // ------------------------------  /* auto */
/*A3BF*/ int32_t is_surface_filled;  // ------------------  /* auto */
/*A3C3*/ int32_t fA3C3;  // ------------------------------  /* auto */
/*A3C7*/ int32_t fA3C7;  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066E3EC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CWorld  ---------------------------------------  /* auto */
/*  0*/ virtual void *v_sub_5098E0(char);  // = 005098E0    /* auto */
/*  4*/ virtual int32_t v_f4_create_objects();  // = 005099A0  /* auto */
/*  8*/ virtual char v_fun_50A2F0();  // = 0050A2F0  -----  /* auto */
/*  C*/ virtual uint16_t v_fun_510E90(GameAction *, int32_t);  // = 00510E90  /* auto */
/* 10*/ virtual PlayerList *v_getPlayerList();  // = 00508C00  /* auto */
/* 14*/ virtual BOOL v_loc_508C10(int32_t);  // = 00508C10  /* auto */
/* 18*/ virtual uint32_t v_tick(GameActionCtx *);  // = 0050A450  /* auto */
/* 1C*/ virtual int32_t v_loadLevel(const char *);  // = 0050E620  /* auto */
/* 20*/ virtual int32_t v_fun_50FBA0();  // = 0050FBA0  --  /* auto */
/* 24*/ virtual int32_t v_fun_50FC60();  // = 0050FC60  --  /* auto */
/* 28*/ virtual int32_t v_fun_50FD10(int32_t);  // = 0050FD10  /* auto */
/* 2C*/ virtual int32_t v_fun_50FD70(const char *);  // = 0050FD70  /* auto */
/* 30*/ virtual int32_t v_sub_509520();  // = 00509520  --  /* auto */
/* 34*/ virtual int32_t v_calcChecksum();  // = 0050F3D0    /* auto */
/* 38*/ virtual void v_fun_50EA70();  // = 0050EA70  -----  /* auto */
/* 3C*/ virtual int32_t v_sub_509630();  // = 00509630  --  /* auto */
/* 40*/ virtual int32_t v_sub_509640();  // = 00509640  --  /* auto */
/* 44*/ virtual int32_t v_fun_510730(int32_t, int32_t);  // = 00510730  /* auto */
/* 48*/ virtual int32_t v_sub_509820();  // = 00509820  --  /* auto */
/* 4C*/ virtual int32_t v_sub_509850();  // = 00509850  --  /* auto */
/* 50*/ virtual int32_t v_sub_509860(int32_t);  // = 00509860  /* auto */
/* 54*/ virtual char v_fun_50CD10();  // = 0050CD10  -----  /* auto */
/* 58*/ virtual char v_fun_50CD60(uint8_t);  // = 0050CD60  /* auto */
/* 5C*/ virtual char v_fun_50CE00(uint8_t);  // = 0050CE00  /* auto */
/* 60*/ virtual char v_fun_50CEB0(int32_t);  // = 0050CEB0  /* auto */
/* 64*/ virtual BOOL v_fun_50CF80(uint8_t);  // = 0050CF80  /* auto */
/* 68*/ virtual int32_t v_sub_509480(int32_t);  // = 00509480  /* auto */
/* 6C*/ virtual int32_t v_sub_509450(int32_t, int32_t);  // = 00509450  /* auto */
/* 70*/ virtual void *v_loc_508DD0();  // = 00508DD0  ----  /* auto */
/* 74*/ virtual void *v_loc_508DF0();  // = 00508DF0  ----  /* auto */
/* 78*/ virtual void *v_loc_508E00();  // = 00508E00  ----  /* auto */
/* 7C*/ virtual void *v_loc_508E10();  // = 00508E10  ----  /* auto */
/* 80*/ virtual char v_fun_50CF20(int32_t);  // = 0050CF20  /* auto */
/* 84*/ virtual char v_fun_50CFB0();  // = 0050CFB0  -----  /* auto */
/* 88*/ virtual char v_fun_50CFD0(char);  // = 0050CFD0  -  /* auto */
/* 8C*/ virtual char v_fun_50D040(char);  // = 0050D040  -  /* auto */
/* 90*/ virtual char v_fun_50D120(uint32_t);  // = 0050D120  /* auto */
/* 94*/ virtual int32_t v_fun_50D1B0(uint8_t);  // = 0050D1B0  /* auto */
/* 98*/ virtual int32_t v_fun_50D0B0(uint8_t);  // = 0050D0B0  /* auto */
/* 9C*/ virtual int32_t v_loc_508E20();  // = 00508E20  --  /* auto */
/* A0*/ virtual void *v_loc_508E30();  // = 00508E30  ----  /* auto */
/* A4*/ virtual void *v_loc_508E40();  // = 00508E40  ----  /* auto */
/* A8*/ virtual char v_fun_50D150(int32_t);  // = 0050D150  /* auto */
/* AC*/ virtual char v_fun_50D220();  // = 0050D220  -----  /* auto */
/* B0*/ virtual char v_fun_50D240(char);  // = 0050D240  -  /* auto */
/* B4*/ virtual char v_fun_50D2E0(char);  // = 0050D2E0  -  /* auto */
/* B8*/ virtual char v_fun_50D420(uint32_t);  // = 0050D420  /* auto */
/* BC*/ virtual int32_t v_fun_50D4D0(uint8_t);  // = 0050D4D0  /* auto */
/* C0*/ virtual int32_t v_fun_50D390(uint8_t);  // = 0050D390  /* auto */
/* C4*/ virtual int32_t v_loc_508E50();  // = 00508E50  --  /* auto */
/* C8*/ virtual void *v_loc_508E60();  // = 00508E60  ----  /* auto */
/* CC*/ virtual void *v_loc_508E70();  // = 00508E70  ----  /* auto */
/* D0*/ virtual char v_fun_50D460(int32_t);  // = 0050D460  /* auto */
/* D4*/ virtual char v_fun_50DEB0();  // = 0050DEB0  -----  /* auto */
/* D8*/ virtual char v_fun_50DED0(char);  // = 0050DED0  -  /* auto */
/* DC*/ virtual char v_fun_50DF30(char);  // = 0050DF30  -  /* auto */
/* E0*/ virtual char v_fun_50E010(uint32_t);  // = 0050E010  /* auto */
/* E4*/ virtual int32_t v_fun_50E080(uint8_t);  // = 0050E080  /* auto */
/* E8*/ virtual int32_t v_fun_50DFA0(uint8_t);  // = 0050DFA0  /* auto */
/* EC*/ virtual void *v_loc_508F40();  // = 00508F40  ----  /* auto */
/* F0*/ virtual void *v_loc_508F50();  // = 00508F50  ----  /* auto */
/* F4*/ virtual void *v_loc_508F60();  // = 00508F60  ----  /* auto */
/* F8*/ virtual char v_fun_50E040(int32_t);  // = 0050E040  /* auto */
/* FC*/ virtual char v_fun_50DC80();  // = 0050DC80  -----  /* auto */
/*100*/ virtual char v_fun_50DCA0(char);  // = 0050DCA0  -  /* auto */
/*104*/ virtual char v_fun_50DD00(char);  // = 0050DD00  -  /* auto */
/*108*/ virtual char v_fun_50DDD0(uint32_t);  // = 0050DDD0  /* auto */
/*10C*/ virtual int32_t v_fun_50DE50(uint8_t);  // = 0050DE50  /* auto */
/*110*/ virtual int32_t v_fun_50DD60(uint8_t);  // = 0050DD60  /* auto */
/*114*/ virtual int32_t v_loc_508F10();  // = 00508F10  --  /* auto */
/*118*/ virtual void *v_loc_508F20();  // = 00508F20  ----  /* auto */
/*11C*/ virtual void *v_loc_508F30();  // = 00508F30  ----  /* auto */
/*120*/ virtual char v_fun_50DE00(int32_t);  // = 0050DE00  /* auto */
/*124*/ virtual char v_fun_50D550();  // = 0050D550  -----  /* auto */
/*128*/ virtual char v_fun_50D570(char);  // = 0050D570  -  /* auto */
/*12C*/ virtual char v_fun_50D5E0(char);  // = 0050D5E0  -  /* auto */
/*130*/ virtual char v_fun_50D6C0(uint32_t);  // = 0050D6C0  /* auto */
/*134*/ virtual int32_t v_fun_50D750(uint8_t);  // = 0050D750  /* auto */
/*138*/ virtual int32_t v_fun_50D650(uint8_t);  // = 0050D650  /* auto */
/*13C*/ virtual int32_t v_loc_508E80();  // = 00508E80  --  /* auto */
/*140*/ virtual void *v_loc_508E90();  // = 00508E90  ----  /* auto */
/*144*/ virtual void *v_loc_508EA0();  // = 00508EA0  ----  /* auto */
/*148*/ virtual char v_fun_50D6F0(int32_t);  // = 0050D6F0  /* auto */
/*14C*/ virtual char v_fun_50D7C0();  // = 0050D7C0  -----  /* auto */
/*150*/ virtual char v_fun_50D7E0(char);  // = 0050D7E0  -  /* auto */
/*154*/ virtual char v_fun_50D850(char);  // = 0050D850  -  /* auto */
/*158*/ virtual char v_fun_50D930(uint32_t);  // = 0050D930  /* auto */
/*15C*/ virtual int32_t v_fun_50D9C0(uint8_t);  // = 0050D9C0  /* auto */
/*160*/ virtual int32_t v_fun_50D8C0(uint8_t);  // = 0050D8C0  /* auto */
/*164*/ virtual void *v_loc_508EB0();  // = 00508EB0  ----  /* auto */
/*168*/ virtual void *v_loc_508EC0();  // = 00508EC0  ----  /* auto */
/*16C*/ virtual void *v_loc_508ED0();  // = 00508ED0  ----  /* auto */
/*170*/ virtual char v_fun_50D960(int32_t);  // = 0050D960  /* auto */
/*174*/ virtual char v_fun_50DA20();  // = 0050DA20  -----  /* auto */
/*178*/ virtual char v_fun_50DA40(char);  // = 0050DA40  -  /* auto */
/*17C*/ virtual char v_fun_50DAB0(char);  // = 0050DAB0  -  /* auto */
/*180*/ virtual char v_fun_50DB90(uint32_t);  // = 0050DB90  /* auto */
/*184*/ virtual int32_t v_fun_50DC10(uint8_t);  // = 0050DC10  /* auto */
/*188*/ virtual MyObjectDataObj *v_findMyObjectDataObjByTypeId_50DB20(uint8_t);  // = 0050DB20  /* auto */
/*18C*/ virtual void *v_loc_508EE0();  // = 00508EE0  ----  /* auto */
/*190*/ virtual void *v_loc_508EF0();  // = 00508EF0  ----  /* auto */
/*194*/ virtual void *v_loc_508F00();  // = 00508F00  ----  /* auto */
/*198*/ virtual char v_fun_50DBC0(int32_t);  // = 0050DBC0  /* auto */
/*19C*/ virtual char v_fun_50E0E0();  // = 0050E0E0  -----  /* auto */
/*1A0*/ virtual char v_fun_50E100(char);  // = 0050E100  -  /* auto */
/*1A4*/ virtual char v_fun_50E170(char);  // = 0050E170  -  /* auto */
/*1A8*/ virtual char v_fun_50E250(uint32_t);  // = 0050E250  /* auto */
/*1AC*/ virtual int32_t v_fun_50E2D0(uint8_t);  // = 0050E2D0  /* auto */
/*1B0*/ virtual int32_t v_fun_50E1E0(uint8_t);  // = 0050E1E0  /* auto */
/*1B4*/ virtual void *v_loc_508F70();  // = 00508F70  ----  /* auto */
/*1B8*/ virtual void *v_loc_508F80();  // = 00508F80  ----  /* auto */
/*1BC*/ virtual void *v_loc_508F90();  // = 00508F90  ----  /* auto */
/*1C0*/ virtual char v_fun_50E280(int32_t);  // = 0050E280  /* auto */
/*1C4*/ virtual char v_fun_50E330(int32_t);  // = 0050E330  /* auto */
/*1C8*/ virtual MyCreatureDataObj *v_findCreatureDataObjByTypeId_50E3A0(uint8_t);  // = 0050E3A0  /* auto */
/*1CC*/ virtual int32_t v_loc_508FA0();  // = 00508FA0  --  /* auto */
/*1D0*/ virtual int32_t v_loc_508FB0();  // = 00508FB0  --  /* auto */
/*1D4*/ virtual int32_t v_loc_508FE0(uint32_t *);  // = 00508FE0  /* auto */
/*1D8*/ virtual int32_t v_loc_508FC0(int32_t, int32_t);  // = 00508FC0  /* auto */
/*1DC*/ virtual int32_t v_loc_508C70();  // = 00508C70  --  /* auto */
/*1E0*/ virtual void *v_loc_508C80();  // = 00508C80  ----  /* auto */
/*1E4*/ virtual void *v_loc_508CA0();  // = 00508CA0  ----  /* auto */
/*1E8*/ virtual void v_loc_508CC0(uint32_t, uint32_t, int32_t);  // = 00508CC0  /* auto */
/*1EC*/ virtual void v_loc_508CF0(int32_t);  // = 00508CF0  /* auto */
/*1F0*/ virtual void v_loc_508D00(uint32_t);  // = 00508D00  /* auto */
/*1F4*/ virtual void *v_loc_508D10();  // = 00508D10  ----  /* auto */
/*1F8*/ virtual void *v_loc_508D40();  // = 00508D40  ----  /* auto */
/*1FC*/ virtual BOOL v_loc_509090(uint32_t, uint32_t);  // = 00509090  /* auto */
/*200*/ virtual void *v_loc_509050();  // = 00509050  ----  /* auto */
/*204*/ virtual void *v_loc_509010();  // = 00509010  ----  /* auto */
/*208*/ virtual int32_t v_sub_509200(int32_t, int32_t);  // = 00509200  /* auto */
/*20C*/ virtual void *v_loc_5090C0();  // = 005090C0  ----  /* auto */
/*210*/ virtual BOOL v_sub_5091C0(int32_t);  // = 005091C0  /* auto */
/*214*/ virtual int32_t v_fun_443150(int32_t, int32_t);  // = 00443150  /* auto */
/*218*/ virtual void *v_loc_509100();  // = 00509100  ----  /* auto */
/*21C*/ virtual void **v_sub_5092F0(int32_t, int32_t, uint32_t *);  // = 005092F0  /* auto */
/*220*/ virtual int32_t v_sub_5092D0(int32_t, int32_t);  // = 005092D0  /* auto */
/*224*/ virtual BOOL v_sub_509230(int32_t, int32_t);  // = 00509230  /* auto */
/*228*/ virtual int32_t v_sub_509260(int32_t, int32_t, __int16);  // = 00509260  /* auto */
/*22C*/ virtual int32_t v_sub_509280(int32_t, int32_t, int32_t, int32_t);  // = 00509280  /* auto */
/*230*/ virtual int32_t v_sub_509310(int32_t, int32_t, int32_t, int32_t);  // = 00509310  /* auto */
/*234*/ virtual int32_t v_sub_509340(int32_t, int32_t, int32_t, int32_t);  // = 00509340  /* auto */
/*238*/ virtual int32_t v_sub_509370(int32_t, int32_t, __int16, int32_t);  // = 00509370  /* auto */
/*23C*/ virtual int32_t v_sub_5093A0(int32_t, int32_t, int32_t);  // = 005093A0  /* auto */
/*240*/ virtual int32_t v_sub_5093C0(int32_t, int32_t);  // = 005093C0  /* auto */
/*244*/ virtual int32_t v_sub_5093E0(int32_t, int32_t, __int16, int32_t);  // = 005093E0  /* auto */
/*248*/ virtual int32_t v_sub_509410(int32_t, int32_t, int32_t);  // = 00509410  /* auto */
/*24C*/ virtual int32_t v_sub_509430(int32_t, int32_t, __int16);  // = 00509430  /* auto */
/*250*/ virtual int32_t v_fun_5177B0(int32_t);  // = 005177B0  /* auto */
/*254*/ virtual int32_t v_fun_50E530(int32_t, int32_t, int32_t, int32_t);  // = 0050E530  /* auto */
/*258*/ virtual int32_t v_fun_50E560(int32_t, int32_t, int32_t, int32_t);  // = 0050E560  /* auto */
/*25C*/ virtual int32_t v_fun_50E590(int32_t, int32_t, int32_t, int32_t);  // = 0050E590  /* auto */
/*260*/ virtual int32_t v_getCTag_508C40(uint16_t);  // = 00508C40  /* auto */
/*264*/ virtual uint16_t v_getMEPlayerTagId();  // = 00508C60  /* auto */
/*268*/ virtual void v_nullsub_10(int32_t, int32_t);  // = 00580470  /* auto */
/*26C*/ virtual BOOL v_sub_5094B0(int32_t);  // = 005094B0  /* auto */
/*270*/ virtual int32_t v_sub_5094D0(int32_t);  // = 005094D0  /* auto */
/*274*/ virtual int32_t v_sub_5094F0(int32_t, int32_t, int32_t);  // = 005094F0  /* auto */
/*278*/ virtual int32_t v_fun_50E420(int32_t, __int16);  // = 0050E420  /* auto */
/*27C*/ virtual BOOL v_fun_510700(int32_t);  // = 00510700  /* auto */
/*280*/ virtual int32_t v_sub_5095B0(CPlayer *);  // = 005095B0  /* auto */
/*284*/ virtual int32_t v_sub_5095D0(int32_t);  // = 005095D0  /* auto */
/*288*/ virtual int32_t v_sub_5095F0(uint8_t);  // = 005095F0  /* auto */
/*28C*/ virtual int32_t v_sub_509610(int32_t);  // = 00509610  /* auto */
/*290*/ virtual char *v_fun_50F830(uint16_t, int32_t);  // = 0050F830  /* auto */
/*294*/ virtual void v_nullsub_23(int32_t, int32_t, int32_t);  // = 00510E60  /* auto */
/*298*/ virtual int32_t v_fun_50F880(int32_t);  // = 0050F880  /* auto */
/*29C*/ virtual char *v_sub_509530();  // = 00509530  ----  /* auto */
/*2A0*/ virtual int32_t v_sub_5097A0(int32_t);  // = 005097A0  /* auto */
/*2A4*/ virtual int32_t v_sub_5097B0(int32_t, int32_t);  // = 005097B0  /* auto */
/*2A8*/ virtual uint32_t *v_sub_5097D0(uint32_t *);  // = 005097D0  /* auto */
/*2AC*/ virtual int32_t v_sub_5097F0(int32_t);  // = 005097F0  /* auto */
/*2B0*/ virtual int32_t v_sub_509800(int32_t, int32_t);  // = 00509800  /* auto */
/*2B4*/ virtual int32_t v_sub_509540(int32_t);  // = 00509540  /* auto */
/*2B8*/ virtual int32_t v_fun_505250(int32_t);  // = 00505250  /* auto */
/*2BC*/ virtual char v_sub_509560();  // = 00509560  -----  /* auto */
/*2C0*/ virtual char v_sub_509570();  // = 00509570  -----  /* auto */
/*2C4*/ virtual int32_t v_fun_510000(int32_t, int32_t);  // = 00510000  /* auto */
/*2C8*/ virtual void **v_fun_50FAE0(char);  // = 0050FAE0   /* auto */
/*2CC*/ virtual void **v_fun_50FB10(char);  // = 0050FB10   /* auto */
/*2D0*/ virtual int32_t v_fun_628E30(int32_t);  // = 00628E30  /* auto */
/*2D4*/ virtual int32_t v_sub_509690(int32_t);  // = 00509690  /* auto */
/*2D8*/ virtual int32_t v_fun_5101C0(int32_t, int32_t);  // = 005101C0  /* auto */
/*2DC*/ virtual BOOL v_fun_510210(int32_t);  // = 00510210  /* auto */
/*2E0*/ virtual uint32_t *v_fun_510230(uint32_t *, int32_t);  // = 00510230  /* auto */
/*2E4*/ virtual int32_t v_sub_5098D0();  // = 005098D0  --  /* auto */
/*2E8*/ virtual char v_sub_509680();  // = 00509680  -----  /* auto */
/*2EC*/ virtual int32_t v_sub_5096A0(int32_t);  // = 005096A0  /* auto */
/*2F0*/ virtual uint16_t *v_duplicate_187_1(int32_t);  // = 005096A0  /* auto */
/*2F4*/ virtual char *v_sub_5096C0(int32_t, __int16, char);  // = 005096C0  /* auto */
/*2F8*/ virtual BOOL v_sub_5096F0();  // = 005096F0  -----  /* auto */
/*2FC*/ virtual char *v_sub_509700();  // = 00509700  ----  /* auto */
/*300*/ virtual int32_t v_sub_509710();  // = 00509710  --  /* auto */
/*304*/ virtual char *v_sub_509730();  // = 00509730  ----  /* auto */
/*308*/ virtual int32_t v_sub_509750(int32_t, int32_t, int32_t);  // = 00509750  /* auto */
/*30C*/ virtual int32_t v_sub_509780(uint32_t *, uint32_t *, int32_t);  // = 00509780  /* auto */
/*310*/ virtual void *v_loc_508D60();  // = 00508D60  ----  /* auto */
/*314*/ virtual void *v_loc_508D70();  // = 00508D70  ----  /* auto */
/*318*/ virtual void *v_loc_508D80();  // = 00508D80  ----  /* auto */
/*31C*/ virtual void *v_loc_508D90();  // = 00508D90  ----  /* auto */
/*320*/ virtual void *v_duplicate_154_1();  // = 00580470   /* auto */
/*324*/ virtual char *v_sub_509830();  // = 00509830  ----  /* auto */
/*328*/ virtual void *v_loc_508DA0();  // = 00508DA0  ----  /* auto */
/*32C*/ virtual void *v_loc_508DB0();  // = 00508DB0  ----  /* auto */
/*330*/ virtual uint32_t v_sub_509740();  // = 00509740  -  /* auto */
/*334*/ virtual __int16 v_fun_515420(int32_t, int32_t *, int32_t);  // = 00515420  /* auto */
/*338*/ virtual __int16 v_fun_515520(int32_t, uint32_t *, uint16_t *, int32_t);  // = 00515520  /* auto */
/*33C*/ virtual __int16 v_fun_515D50(int32_t, uint32_t *, uint16_t *);  // = 00515D50  /* auto */
/*340*/ virtual int32_t v_sub_509650();  // = 00509650  --  /* auto */
/*344*/ virtual int32_t v_fun_511650(int32_t);  // = 00511650  /* auto */
/*348*/ virtual int32_t v_sub_509670();  // = 00509670  --  /* auto */
/*34C*/ virtual int32_t v_sub_509660();  // = 00509660  --  /* auto */
/*350*/ virtual char v_fun_510E20();  // = 00510E20  -----  /* auto */
/*354*/ virtual int32_t v_sub_509840();  // = 00509840  --  /* auto */
/*358*/ virtual BOOL v_fun_511610();  // = 00511610  -----  /* auto */
/*35C*/ virtual int32_t v_fun_511630(int32_t);  // = 00511630  /* auto */
/*360*/ virtual int32_t v_fun_511640();  // = 00511640  --  /* auto */
/*364*/ virtual __int16 v_sub_509870();  // = 00509870  --  /* auto */
/*368*/ virtual __int16 v_sub_509880(__int16);  // = 00509880  /* auto */
/*36C*/ virtual int32_t v_sub_509890();  // = 00509890  --  /* auto */
/*370*/ virtual int32_t v_sub_5098A0(int32_t);  // = 005098A0  /* auto */
/*374*/ virtual char v_sub_5098B0();  // = 005098B0  -----  /* auto */
/*378*/ virtual char v_sub_5098C0(char);  // = 005098C0  -  /* auto */
/*37C*/ virtual int32_t v_fun_50E920(int32_t);  // = 0050E920  /* auto */
/*380*/ virtual BOOL v_sub_509160(int32_t, int32_t);  // = 00509160  /* auto */
/*384*/ virtual int32_t v_sub_5092B0(int32_t, int32_t, __int16);  // = 005092B0  /* auto */
/*388*/ virtual int32_t v_fun_50E490(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0050E490  /* auto */
/*38C*/ virtual int32_t v_sub_509580(int32_t, int32_t, int32_t, int32_t, int32_t);  // = 00509580  /* auto */
/*390*/ virtual int32_t v_fun_50E4D0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  // = 0050E4D0  /* auto */
/*394*/ virtual int32_t v_fun_50E510(int32_t);  // = 0050E510  /* auto */
// -------------------------------------------------------  /* auto */
/*004DFAA0*/ int32_t fun_4DFAA0();  // -------------------  /* auto */
/*005027D0*/ BOOL fun_5027D0(int32_t, int32_t, int32_t, int32_t, char, __int16);  /* auto */
/*00504EC0*/ CWorldShortEntry2 *fun_504EC0();  // --------  /* auto */
/*005051F0*/ CTag *fun_5051F0(void **);  // --------------  /* auto */
/*00505250*/ int32_t fun_505250(int32_t);  // ------------  /* auto */
/*00508A10*/ CWorld *constructor();  // ------------------  /* auto */
/*00508C00*/ PlayerList *getPlayerList();  // ------------  /* auto */
/*00508C10*/ BOOL fun_508C10(int32_t);  // ---------------  /* auto */
/*00508C60*/ __int16 getMEPlayerTagId();  // -------------  /* auto */
/*00508C70*/ int32_t fun_508C70();  // -------------------  /* auto */
/*00508C80*/ __int16 fun_508C80(int32_t, int32_t);  // ---  /* auto */
/*00508CA0*/ int32_t fun_508CA0(int32_t, int32_t);  // ---  /* auto */
/*00508CC0*/ __int16 fun_508CC0(uint32_t, uint32_t, uint32_t, uint32_t);  /* auto */
/*00508CF0*/ int32_t fun_508CF0(int32_t);  // ------------  /* auto */
/*00508D00*/ int32_t fun_508D00(int32_t);  // ------------  /* auto */
/*00508D10*/ uint32_t fun_508D10(uint32_t, uint32_t, uint32_t, uint32_t, int32_t);  /* auto */
/*00508D40*/ int32_t fun_508D40(int32_t, int32_t, int32_t);  /* auto */
/*00508D60*/ char fun_508D60(int32_t);  // ---------------  /* auto */
/*00508D70*/ char fun_508D70(int32_t);  // ---------------  /* auto */
/*00508D80*/ char fun_508D80(int32_t);  // ---------------  /* auto */
/*00508D90*/ __int16 fun_508D90(int32_t);  // ------------  /* auto */
/*00508DA0*/ char *fun_508DA0();  // ---------------------  /* auto */
/*00508DB0*/ char *fun_508DB0(char *);  // ---------------  /* auto */
/*00508DD0*/ int32_t fun_508DD0(uint8_t);  // ------------  /* auto */
/*00508DF0*/ int32_t fun_508DF0();  // -------------------  /* auto */
/*00508E00*/ int32_t fun_508E00();  // -------------------  /* auto */
/*00508E10*/ int32_t fun_508E10();  // -------------------  /* auto */
/*00508E20*/ int32_t fun_508E20();  // -------------------  /* auto */
/*00508E30*/ int32_t fun_508E30();  // -------------------  /* auto */
/*00508E40*/ int32_t fun_508E40();  // -------------------  /* auto */
/*00508E50*/ int32_t fun_508E50();  // -------------------  /* auto */
/*00508E60*/ int32_t fun_508E60();  // -------------------  /* auto */
/*00508E70*/ int32_t fun_508E70();  // -------------------  /* auto */
/*00508E80*/ int32_t fun_508E80();  // -------------------  /* auto */
/*00508E90*/ int32_t fun_508E90();  // -------------------  /* auto */
/*00508EA0*/ int32_t fun_508EA0();  // -------------------  /* auto */
/*00508EB0*/ int32_t fun_508EB0();  // -------------------  /* auto */
/*00508EC0*/ int32_t fun_508EC0();  // -------------------  /* auto */
/*00508ED0*/ int32_t fun_508ED0();  // -------------------  /* auto */
/*00508EE0*/ int32_t fun_508EE0();  // -------------------  /* auto */
/*00508EF0*/ int32_t fun_508EF0();  // -------------------  /* auto */
/*00508F00*/ int32_t fun_508F00();  // -------------------  /* auto */
/*00508F10*/ int32_t fun_508F10();  // -------------------  /* auto */
/*00508F20*/ int32_t fun_508F20();  // -------------------  /* auto */
/*00508F30*/ int32_t fun_508F30();  // -------------------  /* auto */
/*00508F40*/ int32_t fun_508F40();  // -------------------  /* auto */
/*00508F50*/ int32_t fun_508F50();  // -------------------  /* auto */
/*00508F60*/ int32_t fun_508F60();  // -------------------  /* auto */
/*00508F70*/ int32_t fun_508F70();  // -------------------  /* auto */
/*00508F80*/ int32_t fun_508F80();  // -------------------  /* auto */
/*00508F90*/ int32_t fun_508F90();  // -------------------  /* auto */
/*00508FA0*/ int32_t fun_508FA0();  // -------------------  /* auto */
/*00508FB0*/ int32_t fun_508FB0();  // -------------------  /* auto */
/*00508FC0*/ MyMapElement *fun_508FC0(int32_t, int32_t);    /* auto */
/*00508FE0*/ int32_t fun_508FE0(int32_t *);  // ----------  /* auto */
/*00509010*/ int32_t fun_509010(int32_t *);  // ----------  /* auto */
/*00509050*/ BOOL fun_509050(int32_t *);  // -------------  /* auto */
/*00509090*/ BOOL fun_509090(uint32_t, uint32_t);  // ----  /* auto */
/*005090C0*/ int32_t fun_5090C0(int32_t *);  // ----------  /* auto */
/*00509100*/ BOOL fun_509100(int32_t *);  // -------------  /* auto */
/*00509160*/ BOOL fun_509160(int32_t, int32_t);  // ------  /* auto */
/*00509200*/ int32_t fun_509200(int32_t, int32_t);  // ---  /* auto */
/*00509230*/ BOOL fun_509230(int32_t, int32_t);  // ------  /* auto */
/*00509260*/ BOOL fun_509260(int32_t, int32_t, __int16);    /* auto */
/*00509280*/ BOOL fun_509280(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005092B0*/ BOOL fun_5092B0(int32_t, int32_t, __int16);    /* auto */
/*005092D0*/ CTag *fun_5092D0(int32_t, int32_t);  // -----  /* auto */
/*005092F0*/ CTag *fun_5092F0(int32_t, int32_t, uint32_t *);  /* auto */
/*00509310*/ BOOL fun_509310(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00509340*/ BOOL fun_509340(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00509370*/ BOOL fun_509370(int32_t, int32_t, __int16, int32_t);  /* auto */
/*005093A0*/ BOOL fun_5093A0(int32_t, int32_t, int32_t);    /* auto */
/*005093C0*/ BOOL fun_5093C0(int32_t, int32_t);  // ------  /* auto */
/*005093E0*/ int32_t fun_5093E0(int32_t, int32_t, void **, int32_t);  /* auto */
/*00509410*/ BOOL fun_509410(int32_t, int32_t, int32_t);    /* auto */
/*00509430*/ BOOL fun_509430(int32_t, int32_t, void **);    /* auto */
/*00509450*/ int32_t fun_509450(int32_t, int32_t);  // ---  /* auto */
/*00509480*/ int32_t fun_509480(int32_t);  // ------------  /* auto */
/*005094B0*/ BOOL fun_5094B0(int32_t);  // ---------------  /* auto */
/*005094D0*/ int32_t fun_5094D0(int32_t);  // ------------  /* auto */
/*005094F0*/ int32_t fun_5094F0(int32_t, int32_t, int32_t);  /* auto */
/*00509520*/ int32_t fun_509520();  // -------------------  /* auto */
/*00509530*/ char *fun_509530();  // ---------------------  /* auto */
/*00509540*/ int32_t fun_509540(int32_t);  // ------------  /* auto */
/*00509560*/ char fun_509560();  // ----------------------  /* auto */
/*00509570*/ char fun_509570();  // ----------------------  /* auto */
/*00509580*/ int32_t fun_509580(int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005095B0*/ int32_t fun_5095B0(__int16);  // ------------  /* auto */
/*005095F0*/ int32_t fun_5095F0(uint8_t);  // ------------  /* auto */
/*00509610*/ int32_t fun_509610(int32_t);  // ------------  /* auto */
/*00509630*/ int32_t fun_509630();  // -------------------  /* auto */
/*00509640*/ int32_t fun_509640();  // -------------------  /* auto */
/*00509650*/ int32_t fun_509650();  // -------------------  /* auto */
/*00509660*/ int32_t fun_509660();  // -------------------  /* auto */
/*00509670*/ int32_t fun_509670();  // -------------------  /* auto */
/*00509680*/ char fun_509680();  // ----------------------  /* auto */
/*00509690*/ int32_t fun_509690(int32_t);  // ------------  /* auto */
/*005096A0*/ int32_t fun_5096A0(int32_t);  // ------------  /* auto */
/*005096C0*/ char *fun_5096C0(int32_t, __int16, char);      /* auto */
/*005096F0*/ BOOL fun_5096F0();  // ----------------------  /* auto */
/*00509700*/ char *fun_509700();  // ---------------------  /* auto */
/*00509710*/ int32_t fun_509710();  // -------------------  /* auto */
/*00509730*/ char *fun_509730();  // ---------------------  /* auto */
/*00509740*/ uint32_t fun_509740();  // ------------------  /* auto */
/*00509750*/ int32_t fun_509750(int32_t, int32_t, int32_t);  /* auto */
/*00509780*/ int32_t fun_509780(uint32_t *, uint32_t *, int32_t);  /* auto */
/*005097A0*/ int32_t fun_5097A0(int32_t);  // ------------  /* auto */
/*005097B0*/ int32_t fun_5097B0(int32_t, int32_t);  // ---  /* auto */
/*005097D0*/ uint32_t *fun_5097D0(uint32_t *);  // -------  /* auto */
/*005097F0*/ int32_t fun_5097F0(int32_t);  // ------------  /* auto */
/*00509800*/ int32_t fun_509800(int32_t, int32_t);  // ---  /* auto */
/*00509820*/ int32_t fun_509820();  // -------------------  /* auto */
/*00509830*/ char *fun_509830();  // ---------------------  /* auto */
/*00509840*/ int32_t fun_509840();  // -------------------  /* auto */
/*00509850*/ int32_t fun_509850();  // -------------------  /* auto */
/*00509860*/ int32_t fun_509860(int32_t);  // ------------  /* auto */
/*00509870*/ __int16 fun_509870();  // -------------------  /* auto */
/*00509880*/ __int16 fun_509880(__int16);  // ------------  /* auto */
/*00509890*/ int32_t fun_509890();  // -------------------  /* auto */
/*005098A0*/ int32_t fun_5098A0(int32_t);  // ------------  /* auto */
/*005098B0*/ char fun_5098B0();  // ----------------------  /* auto */
/*005098C0*/ char fun_5098C0(char);  // ------------------  /* auto */
/*005098D0*/ int32_t fun_5098D0();  // -------------------  /* auto */
/*00509900*/ void destructor();  // ----------------------  /* auto */
/*005099A0*/ int32_t create_objects();  // ---------------  /* auto */
/*0050A2F0*/ char remove_objects();  // ------------------  /* auto */
/*0050A450*/ uint32_t tick(GameActionCtx *);  // ---------  /* auto */
/*0050AA40*/ void clearResearchOrder();  // --------------  /* auto */
/*0050AA60*/ int32_t saveAllToTbDiscFile(TbDiscFile **);    /* auto */
/*0050B310*/ int32_t fun_50B310();  // -------------------  /* auto */
/*0050B3C0*/ int32_t fun_50B3C0();  // -------------------  /* auto */
/*0050B550*/ char fun_50B550(char);  // ------------------  /* auto */
/*0050B5B0*/ int32_t fun_50B5B0();  // -------------------  /* auto */
/*0050CD10*/ char fun_50CD10();  // ----------------------  /* auto */
/*0050CD60*/ char fun_50CD60(uint8_t);  // ---------------  /* auto */
/*0050CE00*/ char fun_50CE00(uint8_t);  // ---------------  /* auto */
/*0050CEB0*/ char fun_50CEB0(int32_t);  // ---------------  /* auto */
/*0050CF20*/ char fun_50CF20(int32_t);  // ---------------  /* auto */
/*0050CF80*/ BOOL fun_50CF80(uint8_t);  // ---------------  /* auto */
/*0050CFB0*/ char fun_50CFB0();  // ----------------------  /* auto */
/*0050CFD0*/ char fun_50CFD0(char);  // ------------------  /* auto */
/*0050D040*/ char fun_50D040(char);  // ------------------  /* auto */
/*0050D0B0*/ int32_t fun_50D0B0(uint8_t);  // ------------  /* auto */
/*0050D120*/ char fun_50D120(uint32_t);  // --------------  /* auto */
/*0050D150*/ char fun_50D150(int32_t);  // ---------------  /* auto */
/*0050D1B0*/ int32_t fun_50D1B0(uint8_t);  // ------------  /* auto */
/*0050D220*/ char fun_50D220();  // ----------------------  /* auto */
/*0050D240*/ char fun_50D240(char);  // ------------------  /* auto */
/*0050D2E0*/ char fun_50D2E0(char);  // ------------------  /* auto */
/*0050D390*/ int32_t fun_50D390(uint8_t);  // ------------  /* auto */
/*0050D420*/ char fun_50D420(uint32_t);  // --------------  /* auto */
/*0050D460*/ char fun_50D460(int32_t);  // ---------------  /* auto */
/*0050D4D0*/ int32_t fun_50D4D0(uint8_t);  // ------------  /* auto */
/*0050D550*/ char fun_50D550();  // ----------------------  /* auto */
/*0050D570*/ char fun_50D570(char);  // ------------------  /* auto */
/*0050D5E0*/ char fun_50D5E0(char);  // ------------------  /* auto */
/*0050D650*/ int32_t fun_50D650(uint8_t);  // ------------  /* auto */
/*0050D6C0*/ char fun_50D6C0(uint32_t);  // --------------  /* auto */
/*0050D6F0*/ char fun_50D6F0(int32_t);  // ---------------  /* auto */
/*0050D750*/ int32_t fun_50D750(uint8_t);  // ------------  /* auto */
/*0050D7C0*/ char fun_50D7C0();  // ----------------------  /* auto */
/*0050D7E0*/ char fun_50D7E0(char);  // ------------------  /* auto */
/*0050D850*/ char fun_50D850(char);  // ------------------  /* auto */
/*0050D8C0*/ int32_t fun_50D8C0(uint8_t);  // ------------  /* auto */
/*0050D930*/ char fun_50D930(uint32_t);  // --------------  /* auto */
/*0050D960*/ char fun_50D960(int32_t);  // ---------------  /* auto */
/*0050D9C0*/ int32_t fun_50D9C0(uint8_t);  // ------------  /* auto */
/*0050DA20*/ char fun_50DA20();  // ----------------------  /* auto */
/*0050DA40*/ char fun_50DA40(char);  // ------------------  /* auto */
/*0050DAB0*/ char fun_50DAB0(char);  // ------------------  /* auto */
/*0050DB20*/ MyObjectDataObj *findMyObjectDataObjByTypeId(uint8_t);  /* auto */
/*0050DB90*/ char fun_50DB90(uint32_t);  // --------------  /* auto */
/*0050DBC0*/ char fun_50DBC0(int32_t);  // ---------------  /* auto */
/*0050DC10*/ int32_t fun_50DC10(uint8_t);  // ------------  /* auto */
/*0050DC80*/ char fun_50DC80();  // ----------------------  /* auto */
/*0050DCA0*/ char fun_50DCA0(char);  // ------------------  /* auto */
/*0050DD00*/ char fun_50DD00(char);  // ------------------  /* auto */
/*0050DD60*/ int32_t fun_50DD60(uint8_t);  // ------------  /* auto */
/*0050DDD0*/ char fun_50DDD0(uint32_t);  // --------------  /* auto */
/*0050DE00*/ char fun_50DE00(int32_t);  // ---------------  /* auto */
/*0050DE50*/ int32_t fun_50DE50(uint8_t);  // ------------  /* auto */
/*0050DEB0*/ char fun_50DEB0();  // ----------------------  /* auto */
/*0050DED0*/ char fun_50DED0(char);  // ------------------  /* auto */
/*0050DF30*/ char fun_50DF30(char);  // ------------------  /* auto */
/*0050DFA0*/ int32_t fun_50DFA0(uint8_t);  // ------------  /* auto */
/*0050E010*/ char fun_50E010(uint32_t);  // --------------  /* auto */
/*0050E040*/ char fun_50E040(int32_t);  // ---------------  /* auto */
/*0050E080*/ int32_t fun_50E080(uint8_t);  // ------------  /* auto */
/*0050E0E0*/ char fun_50E0E0();  // ----------------------  /* auto */
/*0050E100*/ char fun_50E100(char);  // ------------------  /* auto */
/*0050E170*/ char fun_50E170(char);  // ------------------  /* auto */
/*0050E1E0*/ int32_t fun_50E1E0(uint8_t);  // ------------  /* auto */
/*0050E250*/ char fun_50E250(uint32_t);  // --------------  /* auto */
/*0050E280*/ char fun_50E280(int32_t);  // ---------------  /* auto */
/*0050E2D0*/ int32_t fun_50E2D0(uint8_t);  // ------------  /* auto */
/*0050E330*/ char fun_50E330(int32_t);  // ---------------  /* auto */
/*0050E3A0*/ MyCreatureDataObj *findCreatureDataObjBySomeId(uint8_t);  /* auto */
/*0050E420*/ int32_t fun_50E420(int32_t, __int16);  // ---  /* auto */
/*0050E490*/ int32_t fun_50E490(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0050E4D0*/ int32_t fun_50E4D0(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0050E510*/ int32_t fun_50E510(int32_t);  // ------------  /* auto */
/*0050E5C0*/ int32_t fun_50E5C0(int32_t);  // ------------  /* auto */
/*0050E620*/ int32_t loadLevel(const char *);  // --------  /* auto */
/*0050E920*/ int32_t fun_50E920(int32_t);  // ------------  /* auto */
/*0050EA20*/ int32_t fun_50EA20(CTag **);  // ------------  /* auto */
/*0050EA70*/ void dump();  // ----------------------------  /* auto */
/*0050F3D0*/ int32_t calcChecksum();  // -----------------  /* auto */
/*0050FA70*/ int32_t fun_50FA70(int32_t);  // ------------  /* auto */
/*0050FAE0*/ CTag *fun_50FAE0(char);  // -----------------  /* auto */
/*0050FB10*/ CTag *fun_50FB10(char);  // -----------------  /* auto */
/*0050FB40*/ int32_t fun_50FB40(char);  // ---------------  /* auto */
/*0050FBA0*/ int32_t fun_50FBA0();  // -------------------  /* auto */
/*0050FC60*/ int32_t fun_50FC60();  // -------------------  /* auto */
/*0050FD10*/ int32_t saveToFile(char *);  // -------------  /* auto */
/*0050FD70*/ int32_t fun_50FD70(const char *);  // -------  /* auto */
/*00510000*/ uint32_t fun_510000(int32_t, int32_t);  // --  /* auto */
/*005101C0*/ int32_t fun_5101C0(int32_t, int32_t);  // ---  /* auto */
/*00510210*/ BOOL fun_510210(int32_t);  // ---------------  /* auto */
/*00510230*/ uint32_t *fun_510230(uint32_t *, int32_t);     /* auto */
/*00510700*/ BOOL fun_510700(int32_t);  // ---------------  /* auto */
/*00510730*/ int32_t fun_510730(int32_t, int32_t);  // ---  /* auto */
/*00510760*/ int32_t fun_510760(int32_t, int32_t);  // ---  /* auto */
/*005108C0*/ uint32_t updateLevelChecksum(void *, uint32_t);  /* auto */
/*00510BE0*/ int32_t fun_510BE0();  // -------------------  /* auto */
/*00510E20*/ char fun_510E20();  // ----------------------  /* auto */
/*00510E90*/ uint16_t fun_510E90(GameAction *, int32_t);    /* auto */
/*00510F90*/ int32_t handleAction(GameAction *);  // -----  /* auto */
/*00511020*/ uint32_t *showLoadingScreen();  // ----------  /* auto */
/*00511150*/ uint32_t *releaseSurface();  // -------------  /* auto */
/*00511180*/ int32_t fun_511180();  // -------------------  /* auto */
/*005111E0*/ int32_t fun_5111E0();  // -------------------  /* auto */
/*00511250*/ int32_t fun_511250();  // -------------------  /* auto */
/*00511280*/ int32_t sub_511280();  // -------------------  /* auto */
/*00511610*/ BOOL fun_511610();  // ----------------------  /* auto */
/*00511630*/ int32_t fun_511630(int32_t);  // ------------  /* auto */
/*00511640*/ int32_t fun_511640();  // -------------------  /* auto */
/*00511650*/ int32_t fun_511650(int32_t);  // ------------  /* auto */
/*00511680*/ int32_t clearChecksums();  // ---------------  /* auto */
/*00511760*/ void destroyWorldEntries();  // -------------  /* auto */
/*00515420*/ uint16_t fun_515420(int32_t, int32_t *, int32_t);  /* auto */
/*00515520*/ __int16 fun_515520(int32_t, uint32_t *, uint16_t *, int32_t);  /* auto */
/*00515D50*/ __int16 fun_515D50(int32_t, uint32_t *, uint16_t *);  /* auto */
/*00517480*/ int32_t fun_517480(int32_t);  // ------------  /* auto */
/*00517490*/ uint32_t getGameTick();  // -----------------  /* auto */
/*005177B0*/ int32_t fun_5177B0(int32_t);  // ------------  /* auto */
/*00518090*/ MyTriggerWhen *getTriggerWhen(__int16);  // -  /* auto */
/*005180F0*/ MyTriggerAction *getTriggerAction(__int16);    /* auto */
/*0051A890*/ BOOL saveToTbDiscFile(TbDiscFile **);  // ---  /* auto */
/*0051A9D0*/ int32_t fun_51A9D0();  // -------------------  /* auto */
/*0051DD40*/ int32_t fun_51DD40(char *);  // -------------  /* auto */
/*0051DDC0*/ int32_t fun_51DDC0(char *);  // -------------  /* auto */
/*0051DE50*/ int32_t fun_51DE50(char *);  // -------------  /* auto */
/*0051DF90*/ int32_t fun_51DF90(char *);  // -------------  /* auto */
/*0051E0A0*/ int32_t loadWorldData(char *);  // ----------  /* auto */
/*0051E2C0*/ void *initWorldEntries();  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CWorld) == 0xA3CB);  // -------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_WORLD_H  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
