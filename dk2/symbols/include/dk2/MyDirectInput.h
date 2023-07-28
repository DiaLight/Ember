// -----------------  id: vtbl_00673048  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_DIRECT_INPUT_H  // ----------------------------  /* auto */
#define MY_DIRECT_INPUT_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyDxDevice.h>  // --------------------------  /* auto */
#include <dk2/MySignalBase.h>  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyDirectInput;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyDirectInput : MySignalBase {  // ----------------  /* auto */
// -------------------------------------------------------  /* auto */
/* 10*/ MyDxDevice dx_device;  // ------------------------  /* auto */
/* 30*/ LPDIDEVICEOBJECTDATA *f2C_pdevObjArr;  // --------  /* auto */
// -------------------------------------------------------  /* auto */
/*00673048*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedObj  ----------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual MySharedObj *v_scalar_destructor(char);  // = 00600460  /* auto */
/*---*/ // super MySignalBase  ---------------------------  /* auto */
/*  C*/ // virtual int32_t *v_processData();  // = 006005B0  /* auto */
/* 10*/ // virtual int32_t *v_initDevice(int32_t *);  // = 00600500  /* auto */
/*---*/ // MyDirectInput  --------------------------------  /* auto */
/* 14*/ virtual int32_t v_handleData(int32_t);  // = 00634D60  /* auto */
// -------------------------------------------------------  /* auto */
/*005DDBC0*/ uint32_t *initDevice_0(uint32_t *);  // -----  /* auto */
/*00600400*/ MyDirectInput *constructor();  // -----------  /* auto */
/*00600460*/ MyDirectInput *deleting_destructor(char);      /* auto */
/*00600500*/ int32_t *initDevice(HRESULT *);  // ---------  /* auto */
/*006005B0*/ void processData();  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyDirectInput) == 0x34);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_DIRECT_INPUT_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
