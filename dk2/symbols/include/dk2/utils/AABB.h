// -------------  id: constructor_00404DB0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef AABB_H  // ---------------------------------------  /* auto */
#define AABB_H  // ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
  struct Size2i;  // -------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct AABB {  // ----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t minX;  // --------------------------------  /* auto */
/*  4*/ int32_t minY;  // --------------------------------  /* auto */
/*  8*/ int32_t maxX;  // --------------------------------  /* auto */
/*  C*/ int32_t maxY;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00404DB0*/ AABB *constructor();  // --------------------  /* auto */
/*00404DC0*/ AABB *constructor_0(int32_t, int32_t, int32_t, int32_t);  /* auto */
/*0052D370*/ AABB *constructor2(Pos2i *, Size2i *);  // --  /* auto */
/*0052D3A0*/ BOOL contains(AABB *);  // ------------------  /* auto */
/*00556590*/ AABB *appendPoint(AABB *, tagPOINT *);  // --  /* auto */
/*005B6FD0*/ AABB *intersection(AABB *, AABB *);  // -----  /* auto */
/*005B7050*/ BOOL isIntersects(AABB *);  // --------------  /* auto */
/*005B7090*/ AABB *getOuter(AABB *, AABB *);  // ---------  /* auto */
/*005B7100*/ int32_t sub_5B7100();  // -------------------  /* auto */
/*005DC2D0*/ int32_t move(int32_t, int32_t);  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(AABB) == 0x10);  // -----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //AABB_H  -----------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
