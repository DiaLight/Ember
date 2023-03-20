// -----------------  id: vtbl_00671F80  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef DISC_FILE_BASE_H  // -----------------------------  /* auto */
#define DISC_FILE_BASE_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct DiscFileBase;  // -------------------------------  /* auto */
  struct MyInputStream;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct DiscFileBase {  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ MyInputStream *f0_stream;  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00671F80*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // DiscFileBase  ---------------------------------  /* auto */
/*  0*/ virtual void *v_scalar_destructor(char);  // = 005B6E50  /* auto */
/*  4*/ virtual int32_t v_super_destructor();  // = 005B6E80  /* auto */
/*  8*/ virtual int32_t v_readBytes(void *, int32_t);  // = 005B6EA0  /* auto */
/*  C*/ virtual int32_t v_writeBytes(int32_t, int32_t);  // = 005B6EC0  /* auto */
/* 10*/ virtual int32_t v_seek(int32_t, int32_t);  // = 005B6EE0  /* auto */
/* 14*/ virtual int32_t v_getSize();  // = 005FDE70  -----  /* auto */
/* 18*/ virtual int32_t v_getOffs();  // = 005B6F00  -----  /* auto */
/* 1C*/ virtual int32_t v_mapToBuf();  // = 005B6F50  ----  /* auto */
/* 20*/ virtual int32_t *v_flush(int32_t *);  // = 005B6F70  /* auto */
// -------------------------------------------------------  /* auto */
/*005B6E40*/ DiscFileBase *constructor_empty();  // ------  /* auto */
/*005B6EA0*/ int32_t readBytes(void *, int32_t);  // -----  /* auto */
/*005B6EC0*/ int32_t writeBytes(int32_t, int32_t);  // ---  /* auto */
/*005B6EE0*/ int32_t seek(int32_t, int32_t);  // ---------  /* auto */
/*005B6F00*/ int32_t getOffs();  // ----------------------  /* auto */
/*005B6F10*/ MyInputStream *getStream();  // -------------  /* auto */
/*005B6F50*/ int32_t mapToBuf();  // ---------------------  /* auto */
/*005B6F70*/ int32_t *flush(int32_t *);  // --------------  /* auto */
/*005B9F70*/ int32_t *TbDiscFile_openStream(int32_t *, char *, int32_t);  /* auto */
/*005D6850*/ int32_t DiscFileBaseEx_openStream(int32_t, int32_t, size_t);  /* auto */
/*005FDE70*/ int32_t getSize();  // ----------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(DiscFileBase) == 0x8);  // ----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //DISC_FILE_BASE_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
