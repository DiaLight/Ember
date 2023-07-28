// -------------  id: constructor_0049DC80  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_OBJECT_DATA_OBJ_H  // -------------------------  /* auto */
#define MY_OBJECT_DATA_OBJ_H  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyObjectDataObj;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyObjectDataObj {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ CWorldEntry f0;  // ------------------------------  /* auto */
/* 1B*/ CWorldEntry f1B;  // -----------------------------  /* auto */
/* 36*/ CWorldEntry f36;  // -----------------------------  /* auto */
/* 51*/ CWorldEntry f51;  // -----------------------------  /* auto */
/* 6C*/ CWorldEntry f6C[4];  // --------------------------  /* auto */
/* D8*/ char fD8[24];  // --------------------------------  /* auto */
/* F0*/ uint8_t ff0_gap[4];  // --------------------------  /* auto */
/* F4*/ int32_t flags;  // -------------------------------  /* auto */
/* F8*/ __int16 fF8;  // ---------------------------------  /* auto */
/* FA*/ __int16 fFA;  // ---------------------------------  /* auto */
/* FC*/ __int16 fFC;  // ---------------------------------  /* auto */
/* FE*/ __int16 airFriction;  // -------------------------  /* auto */
/*100*/ __int16 f100;  // --------------------------------  /* auto */
/*102*/ __int16 f102;  // --------------------------------  /* auto */
/*104*/ uint16_t health;  // -----------------------------  /* auto */
/*106*/ __int16 f106;  // --------------------------------  /* auto */
/*108*/ __int16 f108;  // --------------------------------  /* auto */
/*10A*/ __int16 mbStringId;  // --------------------------  /* auto */
/*10C*/ __int16 f10C;  // --------------------------------  /* auto */
/*10E*/ int32_t f10E;  // --------------------------------  /* auto */
/*112*/ char f112;  // -----------------------------------  /* auto */
/*113*/ char typeId;  // ---------------------------------  /* auto */
/*114*/ char f114;  // -----------------------------------  /* auto */
/*115*/ __int16 f115;  // --------------------------------  /* auto */
/*117*/ __int16 f117;  // --------------------------------  /* auto */
/*119*/ __int16 f119;  // --------------------------------  /* auto */
/*11B*/ uint8_t stateId;  // -----------------------------  /* auto */
/*11C*/ char f11C;  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0049DC80*/ void constructor();  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyObjectDataObj) == 0x11D);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_OBJECT_DATA_OBJ_H  ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
