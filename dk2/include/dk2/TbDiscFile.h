// -----------------  id: vtbl_0066F24C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef TB_DISC_FILE_H  // -------------------------------  /* auto */
#define TB_DISC_FILE_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/DiscFileBase.h>  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyInputStream;  // ------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct TbDiscFile : DiscFileBase {  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066F24C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super DiscFileBase  ---------------------------  /* auto */
/*  0*/ // virtual const void *v_scalar_destructor(char);  // = 005B6D80  /* auto */
/*  4*/ // virtual int32_t v_super_destructor();  // = 005B6E80  /* auto */
/*  8*/ // virtual int32_t v_readBytes(const void *, int32_t);  // = 005B6EA0  /* auto */
/*  C*/ // virtual int32_t v_writeBytes(int32_t, int32_t);  // = 005B6EC0  /* auto */
/* 10*/ // virtual int32_t v_seek(int32_t, int32_t);  // = 005B6EE0  /* auto */
/* 14*/ // virtual int32_t v_getSize();  // = 005FDE70  --  /* auto */
/* 18*/ // virtual int32_t v_getOffs();  // = 005B6F00  --  /* auto */
/* 1C*/ // virtual int32_t v_mapToBuf();  // = 005B6F50  -  /* auto */
/* 20*/ // virtual int32_t *v_flush(int32_t *);  // = 005B6F70  /* auto */
/*---*/ // TbDiscFile  -----------------------------------  /* auto */
/* 24*/ virtual int32_t *v_openStream(int32_t *, const char *, int32_t);  // = 005B9F70  /* auto */
// -------------------------------------------------------  /* auto */
/*005B6F20*/ MyInputStream *DiskFileBase_pushStream(MyInputStream *);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(TbDiscFile) == 0x8);  // ------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //TB_DISC_FILE_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
