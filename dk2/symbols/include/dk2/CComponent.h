// -----------------  id: vtbl_0066C45C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_COMPONENT_H  // --------------------------------  /* auto */
#define C_COMPONENT_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CComponent;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CComponent {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ uint32_t is_component_destroy;  // ---------------  /* auto */
/*  8*/ int32_t field_4;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066C45C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // CComponent  -----------------------------------  /* auto */
/*  0*/ virtual uint32_t *v_deleting_destructor(char);  // = 004010D0  /* auto */
/*  4*/ virtual int32_t v_f4_();  // = 00634D60  ---------  /* auto */
/*  8*/ virtual void *v_f8_();  // = 00634D60  -----------  /* auto */
/*  C*/ virtual int32_t v_handle();  // = 00634D60  ------  /* auto */
/* 10*/ virtual uint32_t *v_f10_();  // = 00634D60  ------  /* auto */
/* 14*/ virtual void ***v_mainGuiLoop();  // = 00634D60  -  /* auto */
// -------------------------------------------------------  /* auto */
/*004010D0*/ uint32_t *deleting_destructor(char);  // ----  /* auto */
/*00552BC0*/ CComponent *constructor();  // --------------  /* auto */
/*00552C60*/ void release();  // -------------------------  /* auto */
/*00552C80*/ CComponent *fun_552C80(CComponent *);  // ---  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CComponent) == 0xC);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_COMPONENT_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */