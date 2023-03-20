// -----------------  id: vtbl_00672854  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef CURSOR_DRAWER_H  // ------------------------------  /* auto */
#define CURSOR_DRAWER_H  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/AABB.h>  // --------------------------------  /* auto */
#include <dk2/ControlSurf.h>  // -------------------------  /* auto */
#include <dk2/Pos2i.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CursorDrawer;  // -------------------------------  /* auto */
  struct MyDdSurface;  // --------------------------------  /* auto */
  struct MyDdSurfaceEx;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CursorDrawer {  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int8_t _00;  // ----------------------------------  /* auto */
/*  5*/ char isCursorsCreated;  // -----------------------  /* auto */
/*  6*/ char _00_6;  // ----------------------------------  /* auto */
/*  7*/ char ff;  // -------------------------------------  /* auto */
/*  8*/ char _00_8;  // ----------------------------------  /* auto */
/*  9*/ char ff_9;  // -----------------------------------  /* auto */
/*  A*/ char _00_A;  // ----------------------------------  /* auto */
/*  B*/ int8_t _00_B;  // --------------------------------  /* auto */
/*  C*/ Pos2i cursorSurfSize;  // ------------------------  /* auto */
/* 14*/ Pos2i cursorSize;  // ----------------------------  /* auto */
/* 1C*/ int32_t idx;  // ---------------------------------  /* auto */
/* 20*/ int32_t prevIdx;  // -----------------------------  /* auto */
/* 24*/ int32_t bpt_forceDraw;  // -----------------------  /* auto */
/* 28*/ int32_t bpt_isCursorAabbIntersectsWithPrevPos;      /* auto */
/* 2C*/ int32_t doCursorRedraw;  // ----------------------  /* auto */
/* 30*/ AABB screenAabb;  // -----------------------------  /* auto */
/* 40*/ Pos2i mouseToCursorOffs;  // ---------------------  /* auto */
/* 48*/ Pos2i mousePos;  // ------------------------------  /* auto */
/* 50*/ ControlSurf cursorSurf[3];  // -------------------  /* auto */
/*164*/ AABB ingameCursorFullSize[3];  // ----------------  /* auto */
/*194*/ AABB cursorSizeAabb[3];  // ----------------------  /* auto */
/*1C4*/ AABB cursorAabbScreenCut[3];  // -----------------  /* auto */
/*1F4*/ AABB bpt_cursorIntersection[3];  // --------------  /* auto */
/*224*/ MyDdSurfaceEx *pScreen[3];  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672854*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CursorDrawer  ---------------------------------  /* auto */
/*  0*/ virtual void *v_Obj672854_scalar_destructor(char);  // = 005DBF40  /* auto */
// -------------------------------------------------------  /* auto */
/*005DBE60*/ CursorDrawer *constructor();  // ------------  /* auto */
/*005DBF80*/ void updateCursorAndDraw(Pos2i *, MyDdSurfaceEx *);  /* auto */
/*005DC000*/ int32_t *resetAndReleaseCursorSurfaces();      /* auto */
/*005DC010*/ int32_t *recreateCursorSurfaces(int32_t *);    /* auto */
/*005DC0B0*/ int32_t nextFrame();  // --------------------  /* auto */
/*005DC0F0*/ int32_t *releaseCursorSurfaces();  // -------  /* auto */
/*005DC120*/ int32_t *setCursorImage(int32_t *, MyDdSurfaceEx *, AABB *, Pos2i *);  /* auto */
/*005DC310*/ char drawBgAndIntersectionToCursorSurf();      /* auto */
/*005DC470*/ bool drawCursor();  // ----------------------  /* auto */
/*005DC530*/ bool drawCursorToScreenSurf();  // ----------  /* auto */
/*005DC580*/ int32_t calcCursorAabbFromMouse(Pos2i *);      /* auto */
/*005DC7D0*/ int32_t *resetCursorSize(int32_t *);  // ----  /* auto */
/*005DC7F0*/ char sub_5DC7F0_setUnk(int32_t);  // --------  /* auto */
/*005DC830*/ void updateCursorAndForceDraw(Pos2i *, MyDdSurface *, MyDdSurfaceEx *, char, char);  /* auto */
/*005DC860*/ int32_t drawCursorTo(MyDdSurfaceEx *, MyDdSurfaceEx *, char, char);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CursorDrawer) == 0x230);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //CURSOR_DRAWER_H  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
