// -------------  id: constructor_004B59D0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CREATURE_COLLECTION_H  // ---------------------  /* auto */
#define MY_CREATURE_COLLECTION_H  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyCrs.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CCreature;  // ----------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct MyCreatureCollection;  // -----------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCreatureCollection {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint16_t firstCreatureId;  // --------------------  /* auto */
/*  2*/ uint16_t f2;  // ---------------------------------  /* auto */
/*  4*/ int32_t f4;  // ----------------------------------  /* auto */
/*  8*/ uint16_t f8;  // ---------------------------------  /* auto */
/*  A*/ uint16_t fA;  // ---------------------------------  /* auto */
/*  C*/ uint16_t fC;  // ---------------------------------  /* auto */
/*  E*/ uint16_t fE;  // ---------------------------------  /* auto */
/* 10*/ int32_t opened;  // ------------------------------  /* auto */
/* 14*/ CWorld *pWorld;  // ------------------------------  /* auto */
/* 18*/ CCreature *creatures;  // ------------------------  /* auto */
/* 1C*/ uint16_t freeCreatureList;  // -------------------  /* auto */
/* 1E*/ int32_t numberOfCreaturesCreated;  // ------------  /* auto */
/* 22*/ int32_t numberOfObjectsCreated;  // --------------  /* auto */
/* 26*/ int32_t numberOfDoorsCreated;  // ----------------  /* auto */
/* 2A*/ int32_t numberOfTrapsCreated;  // ----------------  /* auto */
/* 2E*/ int32_t numberOfShotsCreated;  // ----------------  /* auto */
/* 32*/ int32_t numberOfActionPointsCreated;  // ---------  /* auto */
/* 36*/ int32_t numberOfDeadBodysCreated;  // ------------  /* auto */
/* 3A*/ int32_t numberOfEffectGeneratorsCreated;  // -----  /* auto */
/* 3E*/ MyCrs objs;  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004B59D0*/ MyCreatureCollection *constructor();  // ----  /* auto */
/*004B5A00*/ void destructor();  // ----------------------  /* auto */
/*004B5A10*/ int32_t createCreatures(CWorld *);  // ------  /* auto */
/*004B5FD0*/ void clear();  // ---------------------------  /* auto */
/*004B6040*/ int32_t saveToTbDiscFile(TbDiscFile **);       /* auto */
/*004B65E0*/ int32_t fun_4B65E0(int32_t *);  // ----------  /* auto */
/*004B75C0*/ int32_t fun_4B75C0();  // -------------------  /* auto */
/*004B7690*/ int32_t fun_4B7690();  // -------------------  /* auto */
/*004B78D0*/ int32_t createCreature2(int32_t, int32_t, int32_t, CCreature **);  /* auto */
/*004B7900*/ int32_t createCreature(uint16_t, int32_t, int32_t, int32_t, CCreature **);  /* auto */
/*004B7A90*/ int32_t createObject(int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*004B7B10*/ uint16_t removeObject(uint16_t);  // --------  /* auto */
/*004B7B50*/ int32_t createDoor(int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*004B7C10*/ int32_t createTrap(int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*004B7CD0*/ int32_t fun_4B7CD0(int32_t, int32_t, int32_t, int32_t, int32_t *, int32_t);  /* auto */
/*004B7F20*/ int32_t createActionPoint(char, uint32_t *, int32_t *, void **);  /* auto */
/*004B7FC0*/ int32_t createDeadBody(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t *);  /* auto */
/*004B81E0*/ int32_t createEffectGenerator(char, int32_t, __int16, __int16, int32_t *);  /* auto */
/*004B8290*/ int32_t calcChecksum();  // -----------------  /* auto */
/*004B8310*/ void dump();  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCreatureCollection) == 0x72);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CREATURE_COLLECTION_H  -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
