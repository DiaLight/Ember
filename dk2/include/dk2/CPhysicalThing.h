// -----------------  id: vtbl_0066D4BC  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_PHYSICAL_THING_H  // ---------------------------  /* auto */
#define C_PHYSICAL_THING_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CRenderInfo.h>  // -------------------------  /* auto */
#include <dk2/CThing.h>  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CPhysicalThing;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CPhysicalThing : CThing {  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 2A*/ int8_t gap_26[12];  // ---------------------------  /* auto */
/* 36*/ int16_t f32_modifyPlayerId;  // ------------------  /* auto */
/* 38*/ int8_t gap_34[8];  // ----------------------------  /* auto */
/* 40*/ int32_t f3C_health;  // --------------------------  /* auto */
/* 44*/ CRenderInfo renderInfo;  // ----------------------  /* auto */
/* F4*/ int16_t fF0_angle;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D4BC*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CTag  -----------------------------------  /* auto */
/*  0*/ // virtual const void *v_deleting_destructor(char);  // = 004B5C60  /* auto */
/*  4*/ // virtual BOOL v_f4(const void **);  // = 004B2920  /* auto */
/*---*/ // super CThing  ---------------------------------  /* auto */
/*  8*/ // virtual int32_t v_f8(int32_t);  // = 004B29F0    /* auto */
/*  C*/ // virtual int32_t v_fC();  // = 004B2AC0  -------  /* auto */
/* 10*/ // virtual int32_t v_f10();  // = 004B2AC0  ------  /* auto */
/* 14*/ // virtual int32_t v_f14();  // = 00634D60  ------  /* auto */
/* 18*/ // virtual int32_t v_f18();  // = 00628BC0  ------  /* auto */
/* 1C*/ // virtual int32_t v_f1C();  // = 00402AD0  ------  /* auto */
/* 20*/ // virtual void v_f20();  // = 004B2AD0  ---------  /* auto */
/* 24*/ // virtual char v_f24(int32_t);  // = 00634D60  --  /* auto */
/* 28*/ // virtual BOOL v_f28();  // = 004B5C30  ---------  /* auto */
/* 2C*/ // virtual const char *v_f2C();  // = 004B5C10  --  /* auto */
/* 30*/ // virtual int32_t v_f30();  // = 00634D60  ------  /* auto */
/* 34*/ // virtual int32_t v_f34();  // = 00628BC0  ------  /* auto */
/* 38*/ // virtual int32_t v_f38();  // = 00402AD0  ------  /* auto */
/* 3C*/ // virtual int32_t v_f3C();  // = 00402AD0  ------  /* auto */
/* 40*/ // virtual int32_t v_f40();  // = 00402AD0  ------  /* auto */
/* 44*/ // virtual int32_t v_f44();  // = 004B3520  ------  /* auto */
/* 48*/ // virtual void v_f48();  // = 004B3560  ---------  /* auto */
/* 4C*/ // virtual int16_t *v_f4C(int16_t *);  // = 004B5C20  /* auto */
/* 50*/ // virtual int16_t *v_f50(int16_t *);  // = 004B5C20  /* auto */
/*---*/ // CPhysicalThing  -------------------------------  /* auto */
/* 54*/ virtual const char *v_f54();  // = 004B5C40  -----  /* auto */
/* 58*/ virtual int16_t *v_f58(int16_t *);  // = 004B5C50   /* auto */
/* 5C*/ virtual BOOL v_f5C();  // = 004B34F0  ------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004B3560*/ void dump();  // ----------------------------  /* auto */
/*004B5C80*/ int32_t destructor();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CPhysicalThing) == 0xF6);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_PHYSICAL_THING_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
