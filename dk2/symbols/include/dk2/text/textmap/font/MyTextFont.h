// -----------------  id: vtbl_0067BAF8  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TEXT_FONT_H  // -------------------------------  /* auto */
#define MY_TEXT_FONT_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/text/textmap/font/MyTextFontBase.h>  // ----  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyFontEntryHeader;  // --------------------------  /* auto */
  struct MyFontHeader;  // -------------------------------  /* auto */
  struct MyMbToUniMap;  // -------------------------------  /* auto */
  struct MyTextFont;  // ---------------------------------  /* auto */
  struct Pos2i;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTextFont : MyTextFontBase {  // -----------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  8*/ MyFontHeader *chrtbl;  // ------------------------  /* auto */
/*  C*/ MyFontHeader *chrtbl_C;  // ----------------------  /* auto */
/* 10*/ uint32_t *offsets;  // ---------------------------  /* auto */
/* 14*/ MyMbToUniMap *MBToUniText_idx1;  // --------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0067BAF8*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // super MySharedText  ---------------------------  /* auto */
/*  0*/ // virtual int32_t v_release();  // = 0062FC10  --  /* auto */
/*  4*/ // virtual int32_t v_addRef();  // = 0062FC00  ---  /* auto */
/*  8*/ // virtual void *v_scalar_destructor(char);  // = 006334A0  /* auto */
/*  C*/ // virtual int32_t v_j_release();  // = 0062D9A0    /* auto */
/* 10*/ // virtual int32_t v_j_addRef();  // = 0062FC40  -  /* auto */
/*---*/ // super MyTextFontBase  -------------------------  /* auto */
/* 14*/ // virtual int32_t v_readMBCharToFontIdx(char **);  // = 00633560  /* auto */
/* 18*/ // virtual __int16 v_sub_6335B0();  // = 006335B0   /* auto */
/* 1C*/ // virtual Pos2i *v_getCharSize(Pos2i *, uint16_t);  // = 006335D0  /* auto */
/* 20*/ // virtual __int16 v_getMaxHeight();  // = 00633630  /* auto */
/* 24*/ // virtual int32_t v_getFlags();  // = 00633660  -  /* auto */
/* 28*/ // virtual int32_t v_probably_getFontType();  // = 00633650  /* auto */
/*---*/ // MyTextFont  -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006334A0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*006334C0*/ void destructor();  // ----------------------  /* auto */
/*006334D0*/ MyTextFont *constructor(int32_t, uint32_t *);  /* auto */
/*00633560*/ int32_t readMBChar(char **);  // ------------  /* auto */
/*006335B0*/ __int16 sub_6335B0();  // -------------------  /* auto */
/*006335D0*/ Pos2i *getCharSize(Pos2i *, uint16_t);  // --  /* auto */
/*00633630*/ __int16 getMaxHeight();  // -----------------  /* auto */
/*00633650*/ int32_t probably_getFontType();  // ---------  /* auto */
/*00633660*/ int32_t getFlags();  // ---------------------  /* auto */
/*00633670*/ int32_t getCharBuffer(uint16_t);  // --------  /* auto */
/*006336A0*/ MyFontEntryHeader *getCharDesc(uint16_t);      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTextFont) == 0x18);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TEXT_FONT_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
