// -------------  id: constructor_0056C940  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_FORMAT_LOADER_H  // ---------------------------  /* auto */
#define MY_FORMAT_LOADER_H  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyFormatLoader;  // -----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyFormatLoader {  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ void (__cdecl *fun)(int32_t, bool, void *);  // --  /* auto */
/*  4*/ void *arg;  // -----------------------------------  /* auto */
/*  8*/ int32_t (__cdecl *fmt110_fun)(int32_t *, int32_t);  /* auto */
/*  C*/ int32_t (__cdecl *fmt110_itemFun)(char *, int32_t);  /* auto */
/* 10*/ void *fmt110_arg;  // ----------------------------  /* auto */
/* 14*/ int32_t (__cdecl *fmt100_fun)(int32_t *, int32_t);  /* auto */
/* 18*/ int32_t (__cdecl *fmt100_itemItemfun)(int32_t, int32_t, int32_t *, int32_t);  /* auto */
/* 1C*/ void *fmt100_arg;  // ----------------------------  /* auto */
/* 20*/ int32_t (__cdecl *fmt120_fun)(int32_t *, int32_t);  /* auto */
/* 24*/ int32_t (__cdecl *fmt120_itemFun)(char *, int32_t);  /* auto */
/* 28*/ void *fmt120_arg;  // ----------------------------  /* auto */
/* 2C*/ int32_t (__cdecl *fmt140_fun)(int32_t *, int32_t);  /* auto */
/* 30*/ int32_t (__cdecl *fmt140_itemFun)(char *, int32_t);  /* auto */
/* 34*/ void *fmt140_arg;  // ----------------------------  /* auto */
/* 38*/ int32_t (__cdecl *fmt130_fun)(int32_t *, int32_t);  /* auto */
/* 3C*/ int32_t (__cdecl *fmt130_itemFun)(char *, int32_t);  /* auto */
/* 40*/ void *fmt130_arg;  // ----------------------------  /* auto */
/* 44*/ int32_t (__cdecl *fmt150_fun)(int32_t *, int32_t);  /* auto */
/* 48*/ int32_t (__cdecl *fmt150_itemFun)(char *, int32_t);  /* auto */
/* 4C*/ void *fmt150_arg;  // ----------------------------  /* auto */
/* 50*/ uint8_t gap_50[4];  // ---------------------------  /* auto */
/* 54*/ int32_t fmt160_itemFun;  // ----------------------  /* auto */
/* 58*/ void *arg_58;  // --------------------------------  /* auto */
/* 5C*/ uint8_t f5c_gap[4];  // --------------------------  /* auto */
/* 60*/ int32_t fmt170_itemFun;  // ----------------------  /* auto */
/* 64*/ void *arg_64;  // --------------------------------  /* auto */
/* 68*/ int32_t (__cdecl *fmt180_fun)(int32_t *, uint32_t);  /* auto */
/* 6C*/ int32_t (__cdecl *fmt180_itemFun)(int32_t *, int32_t);  /* auto */
/* 70*/ void *fmt180_arg;  // ----------------------------  /* auto */
/* 74*/ int32_t fun_74;  // ------------------------------  /* auto */
/* 78*/ int32_t fun_78;  // ------------------------------  /* auto */
/* 7C*/ int32_t fun_7C;  // ------------------------------  /* auto */
/* 80*/ int32_t fun_80;  // ------------------------------  /* auto */
/* 84*/ int32_t fun_84;  // ------------------------------  /* auto */
/* 88*/ int32_t fun_88;  // ------------------------------  /* auto */
/* 8C*/ int32_t fun_8C;  // ------------------------------  /* auto */
/* 90*/ int32_t fun_90;  // ------------------------------  /* auto */
/* 94*/ int32_t fun_94;  // ------------------------------  /* auto */
/* 98*/ int32_t fun_98;  // ------------------------------  /* auto */
/* 9C*/ int32_t fun_9C;  // ------------------------------  /* auto */
/* A0*/ int32_t fun_A0;  // ------------------------------  /* auto */
/* A4*/ int32_t fun_A4;  // ------------------------------  /* auto */
/* A8*/ uint8_t fa8_gap[4];  // --------------------------  /* auto */
/* AC*/ void *arg_AC;  // --------------------------------  /* auto */
/* B0*/ int32_t (__cdecl *fmt210_fun)(int32_t *, uint32_t);  /* auto */
/* B4*/ int32_t (__cdecl *fmt210_itemFun)(int32_t *, int32_t);  /* auto */
/* B8*/ int32_t (__cdecl *fmt210_itemFun2)(int32_t *, int32_t);  /* auto */
/* BC*/ void *fmt210_arg;  // ----------------------------  /* auto */
/* C0*/ int32_t (__cdecl *fmt220_fun1)(int32_t, void *);    /* auto */
/* C4*/ int32_t (__cdecl *fmt220_fun2)(int32_t, void *);    /* auto */
/* C8*/ int32_t (__cdecl *fmt220_fun3)(int32_t, void *);    /* auto */
/* CC*/ int32_t (__cdecl *fmt220_fun4)(int32_t *, int32_t);  /* auto */
/* D0*/ void *fmt220_arg;  // ----------------------------  /* auto */
/* D4*/ int32_t fun_D4;  // ------------------------------  /* auto */
/* D8*/ int32_t fun_D8;  // ------------------------------  /* auto */
/* DC*/ void *arg_DC;  // --------------------------------  /* auto */
/* E0*/ int32_t (__cdecl *fmt240_fun)(int32_t *, int32_t);  /* auto */
/* E4*/ int32_t (__cdecl *fmt240_itemFun)(char *, int32_t);  /* auto */
/* E8*/ void *fmt240_arg;  // ----------------------------  /* auto */
/* EC*/ uint8_t fec_gap[12];  // -------------------------  /* auto */
/* F8*/ int32_t (__cdecl *fmt270_fun)(int32_t *, int32_t);  /* auto */
/* FC*/ int32_t (__cdecl *fmt270_itemFun)(char *, int32_t);  /* auto */
/*100*/ int32_t fmt270_arg;  // --------------------------  /* auto */
/*104*/ int32_t (__cdecl *fmt260_fun)(int32_t *, int32_t);  /* auto */
/*108*/ int32_t (__cdecl *f260_itemFun)(char *, int32_t);   /* auto */
/*10C*/ void *fmt260_arg;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0056C940*/ MyFormatLoader *constructor();  // ----------  /* auto */
/*0056C960*/ int32_t load(char *);  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyFormatLoader) == 0x110);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_FORMAT_LOADER_H  -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
