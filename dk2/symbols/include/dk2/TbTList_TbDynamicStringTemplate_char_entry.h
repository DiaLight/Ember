// --------------  id: construct_00610930  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef TB_T_LIST__TB_DYNAMIC_STRING_TEMPLATE_CHAR_ENTRY_H  /* auto */
#define TB_T_LIST__TB_DYNAMIC_STRING_TEMPLATE_CHAR_ENTRY_H  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/MyStr.h>  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct TbTList_TbDynamicStringTemplate_char_entry;  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct TbTList_TbDynamicStringTemplate_char_entry {  // --  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ MyStr s;  // -------------------------------------  /* auto */
/* 14*/ TbTList_TbDynamicStringTemplate_char_entry *next;   /* auto */
// -------------------------------------------------------  /* auto */
/*005D91E0*/ TbTList_TbDynamicStringTemplate_char_entry *scalar_destructor(char);  /* auto */
/*00610E40*/ void destructor();  // ----------------------  /* auto */
/*00614960*/ TbTList_TbDynamicStringTemplate_char_entry *copy_constructor(TbTList_TbDynamicStringTemplate_char_entry *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(TbTList_TbDynamicStringTemplate_char_entry) == 0x18);  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //TB_T_LIST__TB_DYNAMIC_STRING_TEMPLATE_CHAR_ENTRY_H  /* auto */
// -------------------------------------------------------  /* auto */
