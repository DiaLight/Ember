// -------------  id: constructor_004B59D0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_CREATURE_COLLECTION_H  // ---------------------  /* auto */
#define MY_CREATURE_COLLECTION_H  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyCreatureCollection;  // -----------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCreatureCollection {  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ int32_t f4;  // ----------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
/*  C*/ int32_t fC;  // ----------------------------------  /* auto */
/* 10*/ int32_t f10;  // ---------------------------------  /* auto */
/* 14*/ int32_t f14;  // ---------------------------------  /* auto */
/* 18*/ int32_t f18;  // ---------------------------------  /* auto */
/* 1C*/ int16_t f1C;  // ---------------------------------  /* auto */
/* 1E*/ int32_t f1E;  // ---------------------------------  /* auto */
/* 22*/ int32_t f22;  // ---------------------------------  /* auto */
/* 26*/ int32_t f26;  // ---------------------------------  /* auto */
/* 2A*/ int32_t f2A;  // ---------------------------------  /* auto */
/* 2E*/ int32_t f2E;  // ---------------------------------  /* auto */
/* 32*/ int32_t f32;  // ---------------------------------  /* auto */
/* 36*/ int32_t f36;  // ---------------------------------  /* auto */
/* 3A*/ int32_t f3A;  // ---------------------------------  /* auto */
/* 3E*/ int32_t f3E;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004B59D0*/ MyCreatureCollection *constructor();  // ----  /* auto */
/*004B5A10*/ int32_t create_creatures(int32_t);  // ------  /* auto */
/*004B6040*/ int32_t sub_4B6040(int32_t *);  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCreatureCollection) == 0x42);  // -  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_CREATURE_COLLECTION_H  -----------------------  /* auto */
// -------------------------------------------------------  /* auto */
