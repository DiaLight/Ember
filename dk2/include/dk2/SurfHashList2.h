// -------------  id: constructor_00592BD0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef SURF_HASH_LIST2_H  // ----------------------------  /* auto */
#define SURF_HASH_LIST2_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEngineDDSurface;  // ---------------------------  /* auto */
  struct MyCESurfHandle;  // -----------------------------  /* auto */
  struct MyCEngineSurfDesc;  // --------------------------  /* auto */
  struct SurfHashList2;  // ------------------------------  /* auto */
  struct SurfaceHolder;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct SurfHashList2 {  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ MyCEngineSurfDesc *surfDesc;  // -----------------  /* auto */
/*  4*/ MyCESurfHandle *surfh_first;  // -----------------  /* auto */
/*  8*/ MyCESurfHandle *arr5x5_surfh[5][5];  // ----------  /* auto */
/* 6C*/ int32_t *arr5x5[5][5];  // -----------------------  /* auto */
/* D0*/ CEngineDDSurface *ddsurf;  // --------------------  /* auto */
/* D4*/ int32_t f8count;  // -----------------------------  /* auto */
/* D8*/ SurfaceHolder *holder_first;  // -----------------  /* auto */
/* DC*/ int32_t holder_count;  // ------------------------  /* auto */
/* E0*/ int32_t holder_size;  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00592BD0*/ char constructor(MyCEngineSurfDesc *, int32_t, int32_t);  /* auto */
/*00593600*/ MyCESurfHandle *deleteHolders(SurfaceHolder *);  /* auto */
/*00593670*/ SurfaceHolder *sub_593670(int32_t, int32_t, float, int32_t, float);  /* auto */
/*00593880*/ int32_t sub_593880(SurfaceHolder *, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*00593E10*/ int32_t calcHandleCountToFitHolder();  // ---  /* auto */
/*00593E90*/ int32_t sub_593E90(int32_t);  // ------------  /* auto */
/*00593F50*/ int32_t _probablySort();  // ----------------  /* auto */
/*00594BC0*/ MyCESurfHandle *deleteHolder(MyCESurfHandle *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(SurfHashList2) == 0xE4);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //SURF_HASH_LIST2_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
