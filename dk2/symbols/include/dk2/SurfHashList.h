// -------------  id: constructor_00592DB0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef SURF_HASH_LIST_H  // -----------------------------  /* auto */
#define SURF_HASH_LIST_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyCESurfHandle;  // -----------------------------  /* auto */
  struct MyCEngineSurfDesc;  // --------------------------  /* auto */
  struct SurfHashList;  // -------------------------------  /* auto */
  struct SurfHashListItem;  // ---------------------------  /* auto */
  struct SurfaceHolder;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct SurfHashList {  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ SurfHashListItem *arr5x5[5][5];  // --------------  /* auto */
/* 64*/ MyCEngineSurfDesc *pSurfDesc;  // ----------------  /* auto */
/* 68*/ MyCESurfHandle *surfh_first;  // -----------------  /* auto */
/* 6C*/ int32_t f6C;  // ---------------------------------  /* auto */
/* 70*/ SurfaceHolder *holder_first;  // -----------------  /* auto */
/* 74*/ int32_t holders_count;  // -----------------------  /* auto */
/* 78*/ int32_t squareSide_size;  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00592890*/ SurfHashListItem **clear();  // -------------  /* auto */
/*00592DB0*/ SurfHashListItem *constructor(MyCEngineSurfDesc *, int32_t);  /* auto */
/*005935C0*/ void markAndDeleteP1of4_recursive();  // ----  /* auto */
/*00594170*/ SurfHashListItem **putItem(SurfHashListItem *);  /* auto */
/*005941B0*/ __int16 addSurfhAndPaint(MyCESurfHandle *, SurfHashListItem *);  /* auto */
/*00594790*/ SurfHashListItem **deleteItem(SurfHashListItem *);  /* auto */
/*005948D0*/ int32_t _probablySort();  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(SurfHashList) == 0x7C);  // ---------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //SURF_HASH_LIST_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
