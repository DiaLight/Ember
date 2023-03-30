// -----------------  id: vtbl_0066FB9C  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_MEM_LOAD_IFF_FILE_H  // ------------------------  /* auto */
#define C_MEM_LOAD_IFF_FILE_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CIFFFile.h>  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CMemLoadIFFFile;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CMemLoadIFFFile : CIFFFile {  // ------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*418*/ int8_t gap_418[8];  // ---------------------------  /* auto */
/*420*/ const char *buf;  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FB9C*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CIFFFile  -------------------------------  /* auto */
/*  0*/ // virtual FILE *v_read(const void *, size_t);  // = 0057A960  /* auto */
/*  4*/ // virtual FILE *v_write(const void *, size_t);  // = 00443150  /* auto */
/*  8*/ // virtual int32_t v_seek(int32_t);  // = 005671E0  /* auto */
/*---*/ // CMemLoadIFFFile  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057A800*/ int32_t sub_57A800(int32_t, const char *, int32_t);  /* auto */
/*0057A960*/ int32_t read(const void *, int32_t);  // ----  /* auto */
/*0057D250*/ CMemLoadIFFFile *constructor();  // ---------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CMemLoadIFFFile) == 0x424);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_MEM_LOAD_IFF_FILE_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
