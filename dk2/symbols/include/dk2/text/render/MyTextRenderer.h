// -----------------  id: vtbl_0067B948  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_RENDERER_H  // ---------------------------  /* auto */
#define MY_TEXT_RENDERER_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/render/FontObjWr.h>  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct FontObj;  // ------------------------------------  /* auto */
  struct MyCRBase;  // -----------------------------------  /* auto */
  struct MyDRBase;  // -----------------------------------  /* auto */
  struct MyTRBase;  // -----------------------------------  /* auto */
  struct MyTextRenderer;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextRenderer {  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ FontObjWr fontObjWr;  // -------------------------  /* auto */
/* 5C*/ MyCRBase *myCR;  // ------------------------------  /* auto */
/* 60*/ MyTRBase *myTR;  // ------------------------------  /* auto */
/* 64*/ uint32_t f64;  // --------------------------------  /* auto */
/* 68*/ uint32_t f68;  // --------------------------------  /* auto */
/* 6C*/ MyDRBase *myDR;  // ------------------------------  /* auto */
/* 70*/ uint32_t *f70;  // -------------------------------  /* auto */
/* 74*/ char f74;  // ------------------------------------  /* auto */
/* 75*/ char f75;  // ------------------------------------  /* auto */
/* 76*/ uint8_t gap_76[2];  // ---------------------------  /* auto */
/* 78*/ int32_t f78;  // ---------------------------------  /* auto */
/* 7C*/ int32_t _end_f7C;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B948*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyTextRenderer  -------------------------------  /* auto */
/*  0*/ virtual void *v_sub_62C990(char);  // = 0062C990    /* auto */
// -------------------------------------------------------  /* auto */
/*0062C8F0*/ MyTextRenderer *constructor();  // ----------  /* auto */
/*0062C990*/ void *scalar_destructor(char);  // ----------  /* auto */
/*0062C9B0*/ int32_t destructor();  // -------------------  /* auto */
/*0062CA00*/ uint32_t *selectMyTR(uint32_t *, int32_t);     /* auto */
/*0062CA70*/ uint32_t *selectMyCR(uint32_t *, int32_t);     /* auto */
/*0062CAE0*/ uint32_t *renderText(uint32_t *, AABB *, const char *, FontObj *, uint32_t *);  /* auto */
/*0062CD80*/ uint32_t *renderText2(uint32_t *, AABB *, const char *, FontObj *, AABB *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextRenderer) == 0x80);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_RENDERER_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */