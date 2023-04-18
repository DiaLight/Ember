// -----------------  id: vtbl_00672408  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_SHARED_OBJ_H  // ------------------------------  /* auto */
#define MY_SHARED_OBJ_H  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MySharedObj;  // --------------------------------  /* auto */
  struct MySharedObj_vtbl;  // ---------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MySharedObj {  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ int32_t refs;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672408*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MySharedObj  ----------------------------------  /* auto */
/*  0*/ virtual int32_t v_release();  // = 0062FC10  -----  /* auto */
/*  4*/ virtual int32_t v_addRef();  // = 0062FC00  ------  /* auto */
/*  8*/ virtual MySharedObj *v_scalar_destructor(char);  // = 005BB710  /* auto */
// -------------------------------------------------------  /* auto */
/*005BB710*/ MySharedObj *deleting_destructor(char);  // -  /* auto */
/*005DCA30*/ MySharedObj *constructor();  // -------------  /* auto */
/*00616700*/ MySharedObj *sub_616700();  // --------------  /* auto */
/*00628980*/ MySharedObj *sub_628980(MySharedObj_vtbl *);   /* auto */
/*00628BD0*/ MySharedObj *sub_628BD0(MySharedObj_vtbl *);   /* auto */
/*00628E40*/ MySharedObj *sub_628E40(MySharedObj_vtbl *, int32_t);  /* auto */
/*0062C0F0*/ MySharedObj *sub_62C0F0(MySharedObj_vtbl *);   /* auto */
/*0062FC00*/ int32_t addRef();  // -----------------------  /* auto */
/*0062FC10*/ int32_t release();  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MySharedObj) == 0x8);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_SHARED_OBJ_H  --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
