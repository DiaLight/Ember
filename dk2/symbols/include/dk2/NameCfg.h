// -------------  id: arr_instance_006AC8A0  -------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef NAME_CFG_H  // -----------------------------------  /* auto */
#define NAME_CFG_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct NameCfg {  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t idx;  // ---------------------------------  /* auto */
/*  4*/ char str[32];  // --------------------------------  /* auto */
/* 24*/ int32_t f24;  // ---------------------------------  /* auto */
/* 28*/ int32_t f28;  // ---------------------------------  /* auto */
/* 2C*/ int32_t f2C;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(NameCfg) == 0x30);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //NAME_CFG_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
