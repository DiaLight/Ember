// -----------------  id: vtbl_0066FB34  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_DIRECT_IFF_FILE_H  // --------------------------  /* auto */
#define C_DIRECT_IFF_FILE_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CIFFFile.h>  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CDirectIFFFile;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CDirectIFFFile : CIFFFile {  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*418*/ int8_t gap_418[8];  // ---------------------------  /* auto */
/*420*/ FILE *stdFileHandle;  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0066FB34*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super CIFFFile  -------------------------------  /* auto */
/*  0*/ // virtual FILE *v_read(const void *, size_t);  // = 0057A7A0  /* auto */
/*  4*/ // virtual FILE *v_write(const void *, size_t);  // = 0057A7D0  /* auto */
/*  8*/ // virtual int32_t v_seek(int32_t);  // = 0057A470  /* auto */
/*---*/ // CDirectIFFFile  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0057A3A0*/ FILE *writeIf2(int32_t, int32_t);  // -------  /* auto */
/*0057A3C0*/ int32_t readInt(int32_t, int32_t);  // ------  /* auto */
/*0057A3E0*/ int32_t readString(int8_t *);  // -----------  /* auto */
/*0057A430*/ int32_t seekTo(int32_t);  // ----------------  /* auto */
/*0057A450*/ CDirectIFFFile *constructor();  // ----------  /* auto */
/*0057A470*/ int32_t seek(int32_t);  // ------------------  /* auto */
/*0057A490*/ void destructor();  // ----------------------  /* auto */
/*0057A560*/ int32_t open(const char *, int32_t, int32_t);  /* auto */
/*0057A6F0*/ FILE *sub_57A6F0();  // ---------------------  /* auto */
/*0057A7A0*/ FILE *readFile_57A7A0(const void *, size_t);   /* auto */
/*0057A7D0*/ FILE *writeFile_57A7D0(const void *, size_t);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CDirectIFFFile) == 0x424);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_DIRECT_IFF_FILE_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
