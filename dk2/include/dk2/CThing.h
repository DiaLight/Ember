// -----------------  id: vtbl_0066D464  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_THING_H  // ------------------------------------  /* auto */
#define C_THING_H  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CTag.h>  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CThing;  // -------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CThing : CTag {  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  6*/ int16_t f2_typeNodeX;  // ------------------------  /* auto */
/*  8*/ int16_t f4_typeNodeY;  // ------------------------  /* auto */
/*  A*/ int16_t f6_mapWhoNodeX;  // ----------------------  /* auto */
/*  C*/ int16_t f8_mapWhoNodeY;  // ----------------------  /* auto */
/*  E*/ int16_t fA_playerNodeX;  // ----------------------  /* auto */
/* 10*/ int16_t fC_playerNodeY;  // ----------------------  /* auto */
/* 12*/ int32_t fE_type;  // -----------------------------  /* auto */
/* 16*/ int32_t f12_mapWhoType;  // ----------------------  /* auto */
/* 1A*/ int32_t f16_posX;  // ----------------------------  /* auto */
/* 1E*/ int32_t f1A_posY;  // ----------------------------  /* auto */
/* 22*/ int32_t f1E_posZ;  // ----------------------------  /* auto */
/* 26*/ __int16 f22_floorHeight;  // ---------------------  /* auto */
/* 28*/ int16_t f24_playerId;  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D464*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual void *v_deleting_destructor(char);  // = 004B7530  /* auto */
/*  4*/ // virtual BOOL v_f4(void **);  // = 004B4B50  ---  /* auto */
/*---*/ // CThing  ---------------------------------------  /* auto */
/*  8*/ virtual int32_t v_f8(int32_t);  // = 004B4BB0  ---  /* auto */
/*  C*/ virtual int32_t v_fC();  // = 004B4C20  ----------  /* auto */
/* 10*/ virtual int32_t v_f10();  // = 004B4C20  ---------  /* auto */
/* 14*/ virtual int32_t v_f14();  // = 00634D60  ---------  /* auto */
/* 18*/ virtual int32_t v_f18();  // = 00628BC0  ---------  /* auto */
/* 1C*/ virtual int32_t v_f1C();  // = 00402AD0  ---------  /* auto */
/* 20*/ virtual void v_f20();  // = 0040D440  ------------  /* auto */
/* 24*/ virtual char v_f24(int32_t);  // = 00634D60  -----  /* auto */
/* 28*/ virtual BOOL v_f28();  // = 00402AD0  ------------  /* auto */
/* 2C*/ virtual char *v_f2C();  // = 004B5C10  -----------  /* auto */
/* 30*/ virtual int32_t v_f30();  // = 00634D60  ---------  /* auto */
/* 34*/ virtual int32_t v_f34();  // = 00402AD0  ---------  /* auto */
/* 38*/ virtual int32_t v_f38();  // = 00402AD0  ---------  /* auto */
/* 3C*/ virtual int32_t v_f3C();  // = 00402AD0  ---------  /* auto */
/* 40*/ virtual int32_t v_f40();  // = 00402AD0  ---------  /* auto */
/* 44*/ virtual int32_t v_f44();  // = 004B56A0  ---------  /* auto */
/* 48*/ virtual void v_f48();  // = 004B5700  ------------  /* auto */
/* 4C*/ virtual int16_t *v_f4C(int16_t *);  // = 004B5C20   /* auto */
/* 50*/ virtual int16_t *v_f50(int16_t *);  // = 004B5C20   /* auto */
// -------------------------------------------------------  /* auto */
/*004A54D0*/ BOOL CDoor_fun_4A54D0(void **);  // ---------  /* auto */
/*004A5560*/ int32_t CDoor_fun_4A5560(int32_t);  // ------  /* auto */
/*004A7BD0*/ BOOL CTrap_fun_4A7BD0(void **);  // ---------  /* auto */
/*004A7C60*/ int32_t CTrap_fun_4A7C60(int32_t);  // ------  /* auto */
/*004B0550*/ int32_t CActionPoint_fun_4B0550(int32_t);      /* auto */
/*004B1AE0*/ int32_t CEffectGenerator_fun_4B1AE0(int32_t);  /* auto */
/*004B1E70*/ BOOL CMovingThing_fun_4B1E70(void **);  // --  /* auto */
/*004B1EC0*/ int32_t CMovingThing_fun_4B1EC0(int32_t);      /* auto */
/*004B2920*/ BOOL CPhysicalThing_fun_4B2920(void **);       /* auto */
/*004B29F0*/ int32_t CPhysicalThing_fun_4B29F0(int32_t);    /* auto */
/*004B4B50*/ BOOL fun_4B4B50(void **);  // ---------------  /* auto */
/*004B4BB0*/ int32_t fun_4B4BB0(int32_t);  // ------------  /* auto */
/*004B5020*/ int32_t sub_4B5020(int32_t);  // ------------  /* auto */
/*004B56A0*/ int32_t fun_4B56A0();  // -------------------  /* auto */
/*004B5700*/ void dump();  // ----------------------------  /* auto */
/*004B5C10*/ char *fun_4B5C10();  // ---------------------  /* auto */
/*004B5C20*/ int32_t fun_4B5C20(int16_t *);  // ----------  /* auto */
/*004B5EF0*/ CThing *constructor();  // ------------------  /* auto */
/*004B7550*/ int32_t destructor();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CThing) == 0x2A);  // ---------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_THING_H  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
