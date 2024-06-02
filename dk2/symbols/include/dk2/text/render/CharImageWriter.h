// -------------  id: constructor_00634020  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef CHAR_IMAGE_WRITER_H  // --------------------------  /* auto */
#define CHAR_IMAGE_WRITER_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CharImageWriter;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct CharImageWriter {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint32_t buf;  // --------------------------------  /* auto */
/*  4*/ bool isLowByte;  // ------------------------------  /* auto */
/*  5*/ char calcOnly;  // -------------------------------  /* auto */
/*  6*/ uint8_t gap_6[2];  // ----------------------------  /* auto */
/*  8*/ uint32_t pixCount;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00634020*/ CharImageWriter *constructor(int32_t, char);   /* auto */
/*00634040*/ int32_t write(char);  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CharImageWriter) == 0xC);  // -------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //CHAR_IMAGE_WRITER_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */