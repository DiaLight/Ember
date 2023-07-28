// -----------------  id: vtbl_0066D3E4  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_MAP_H  // --------------------------------------  /* auto */
#define C_MAP_H  // --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/world/map/CMapEntry.h>  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CMap;  // ---------------------------------------  /* auto */
  struct CMovingThing;  // -------------------------------  /* auto */
  struct CTag;  // ---------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct MyMapElement;  // -------------------------------  /* auto */
  struct MyNavigationSystem;  // -------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CMap {  // ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ uint32_t opened;  // -----------------------------  /* auto */
/*  8*/ CWorld *world;  // -------------------------------  /* auto */
/*  C*/ int32_t width;  // -------------------------------  /* auto */
/* 10*/ int32_t height;  // ------------------------------  /* auto */
/* 14*/ MyMapElement *mapElements;  // -------------------  /* auto */
/* 18*/ MyNavigationSystem *pNavigationSystem;  // -------  /* auto */
/* 1C*/ int32_t gameTickLastUpdated;  // -----------------  /* auto */
/* 20*/ void *ptr;  // -----------------------------------  /* auto */
/* 24*/ uint8_t gap_24[256];  // -------------------------  /* auto */
/*124*/ CMapEntry entries[225];  // ----------------------  /* auto */
/*ACF*/ char fACF;  // -----------------------------------  /* auto */
/*AD0*/ uint8_t fad0_gap[234];  // -----------------------  /* auto */
/*BBA*/ int32_t fBBA;  // --------------------------------  /* auto */
/*BBE*/ uint8_t fbbe_gap[7];  // -------------------------  /* auto */
/*BC5*/ char end;  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066D3E4*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CMap  -----------------------------------------  /* auto */
/*  0*/ virtual int32_t v_fun_44F4B0(int32_t *);  // = 0044F4B0  /* auto */
/*  4*/ virtual BOOL v_CMap_saveToTbDiscFile_44F3F0(int32_t *);  // = 0044F3F0  /* auto */
/*  8*/ virtual int32_t v_f8();  // = 0044F580  ----------  /* auto */
/*  C*/ virtual int32_t v_fun_4B4C20();  // = 004B4C20  --  /* auto */
// -------------------------------------------------------  /* auto */
/*00404E10*/ MyMapElement *fun_404E10(int32_t, int32_t);    /* auto */
/*0044E250*/ CMap *constructor();  // --------------------  /* auto */
/*0044E290*/ void destructor();  // ----------------------  /* auto */
/*0044E9E0*/ int32_t fun_44E9E0(CWorld *, int32_t, int32_t);  /* auto */
/*0044F280*/ void clear();  // ---------------------------  /* auto */
/*0044F370*/ int32_t fun_44F370();  // -------------------  /* auto */
/*0044F3F0*/ BOOL saveToTbDiscFile(TbDiscFile **);  // ---  /* auto */
/*0044F4B0*/ MyNavigationSystem *fun_44F4B0(int32_t *);     /* auto */
/*0044FC40*/ int32_t fun_44FC40(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004508D0*/ uint16_t fun_4508D0(int32_t, int32_t, int32_t *, int32_t);  /* auto */
/*004511A0*/ int32_t fun_4511A0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*004512F0*/ int32_t fun_4512F0(uint32_t *, uint32_t *, int32_t, int32_t);  /* auto */
/*00451570*/ int32_t fun_451570(CMovingThing *, int32_t (__thiscall *)(int32_t, CTag *, int32_t), int32_t, CTag **);  /* auto */
/*00451820*/ int32_t calcChaecksum();  // ----------------  /* auto */
/*00451870*/ void dump();  // ----------------------------  /* auto */
/*004519F0*/ __int16 fun_4519F0(uint32_t, uint32_t, uint32_t, uint32_t);  /* auto */
/*00451C90*/ __int16 fun_451C90(int32_t, int32_t);  // ---  /* auto */
/*00451E50*/ __int16 fun_451E50();  // -------------------  /* auto */
/*00452340*/ int32_t fun_452340(int32_t, int32_t, int32_t);  /* auto */
/*004528E0*/ CTag *fun_4528E0(int32_t, int32_t, uint32_t *);  /* auto */
/*004529A0*/ int32_t fun_4529A0(int32_t *, int32_t *);      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CMap) == 0xBC6);  // ----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_MAP_H  ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
