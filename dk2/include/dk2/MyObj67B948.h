// -----------------  id: vtbl_0067B948  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_OBJ67_B948_H  // ------------------------------  /* auto */
#define MY_OBJ67_B948_H  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/FontObjWr.h>  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct AABB;  // ---------------------------------------  /* auto */
  struct FontObj;  // ------------------------------------  /* auto */
  struct MyCRBase;  // -----------------------------------  /* auto */
  struct MyDRBase;  // -----------------------------------  /* auto */
  struct MyObj67B948;  // --------------------------------  /* auto */
  struct MyTRBase;  // -----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyObj67B948 {  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ FontObjWr fontObjWr;  // -------------------------  /* auto */
/* 5C*/ MyCRBase *myCR;  // ------------------------------  /* auto */
/* 60*/ MyTRBase *myTR;  // ------------------------------  /* auto */
/* 64*/ int32_t f64;  // ---------------------------------  /* auto */
/* 68*/ int32_t f68;  // ---------------------------------  /* auto */
/* 6C*/ MyDRBase *myDR;  // ------------------------------  /* auto */
/* 70*/ int32_t *f70;  // --------------------------------  /* auto */
/* 74*/ char f74;  // ------------------------------------  /* auto */
/* 75*/ char f75;  // ------------------------------------  /* auto */
/* 76*/ int8_t gap_76[2];  // ----------------------------  /* auto */
/* 78*/ int32_t f78;  // ---------------------------------  /* auto */
/* 7C*/ int32_t _end_f7C;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067B948*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyObj67B948  ----------------------------------  /* auto */
/*  0*/ virtual void *v_sub_62C990(char);  // = 0062C990    /* auto */
// -------------------------------------------------------  /* auto */
/*0062C8F0*/ MyObj67B948 *constructor();  // -------------  /* auto */
/*0062CA00*/ int32_t *selectMyTR(int32_t *, int32_t);       /* auto */
/*0062CA70*/ int32_t *selectMyCR(int32_t *, int32_t);       /* auto */
/*0062CAE0*/ int32_t *sub_62CAE0(int32_t *, AABB *, char *, FontObj *, int32_t *);  /* auto */
/*0062CD80*/ int32_t *sub_62CD80(int32_t *, AABB *, char *, int32_t *, AABB *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyObj67B948) == 0x80);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_OBJ67_B948_H  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */