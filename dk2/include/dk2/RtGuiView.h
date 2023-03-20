// --------------  id: construct_00402752  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef RT_GUI_VIEW_H  // --------------------------------  /* auto */
#define RT_GUI_VIEW_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CWorldEntry.h>  // -------------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct RtGuiView {  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ const void *blocksBuf;  // -----------------------  /* auto */
/*  4*/ int32_t Arrp31x400_ids[140];  // -----------------  /* auto */
/*234*/ CWorldEntry worldEntry;  // ----------------------  /* auto */
/*24F*/ MySurface surf;  // ------------------------------  /* auto */
/*277*/ int32_t width;  // -------------------------------  /* auto */
/*27B*/ int32_t height;  // ------------------------------  /* auto */
/*27F*/ int32_t width_128blocks;  // ---------------------  /* auto */
/*283*/ int32_t height_32blocks;  // ---------------------  /* auto */
/*287*/ int32_t width_128align;  // ----------------------  /* auto */
/*28B*/ int32_t height_32align;  // ----------------------  /* auto */
/*28F*/ int32_t dwRGBBitCount;  // -----------------------  /* auto */
/*293*/ int32_t blocksCount_bytes;  // -------------------  /* auto */
/*297*/ int32_t f297;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(RtGuiView) == 0x29B);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //RT_GUI_VIEW_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
