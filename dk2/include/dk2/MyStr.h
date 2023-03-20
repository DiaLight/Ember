// -----------------  id: vtbl_006722D0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_STR_H  // -------------------------------------  /* auto */
#define MY_STR_H  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyStr;  // --------------------------------------  /* auto */
  struct MySubStr;  // -----------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyStr {  // ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ size_t length;  // -------------------------------  /* auto */
/*  8*/ char *buf;  // -----------------------------------  /* auto */
/*  C*/ int32_t bufSize;  // -----------------------------  /* auto */
/* 10*/ int32_t bufAlign;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*006722D0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyStr  ----------------------------------------  /* auto */
/*  0*/ virtual int32_t __cdecl v_format(int32_t, int32_t, ...);  // = 005B8AB0  /* auto */
/*  4*/ virtual int32_t v_resize(int32_t);  // = 005B8730   /* auto */
/*  8*/ virtual int32_t *v_malloc(int32_t);  // = 005B86F0  /* auto */
/*  C*/ virtual void *v_scalar_destructor(char);  // = 005B9740  /* auto */
/* 10*/ virtual int8_t **v_assignChar(int8_t *);  // = 005B88E0  /* auto */
/* 14*/ virtual char **v_assign(char *);  // = 005B8920  -  /* auto */
/* 18*/ virtual int32_t v_assignMyStr(int32_t *);  // = 005B8970  /* auto */
/* 1C*/ virtual void *v_assignMySubStr(MySubStr *);  // = 005B89B0  /* auto */
/* 20*/ virtual int32_t *v_append(char *);  // = 005B8A00   /* auto */
/* 24*/ virtual int32_t *v_appendChar(int8_t *);  // = 005B8A40  /* auto */
/* 28*/ virtual void *v_appendMySubStr(int32_t);  // = 005B8A70  /* auto */
// -------------------------------------------------------  /* auto */
/*005B86F0*/ char *malloc(int32_t);  // ------------------  /* auto */
/*005B8730*/ void resize(int32_t);  // -------------------  /* auto */
/*005B8770*/ MyStr *copy_constructor(MySubStr *);  // ----  /* auto */
/*005B87E0*/ MyStr *constructor(char *);  // -------------  /* auto */
/*005B8880*/ MyStr *constructor_empty();  // -------------  /* auto */
/*005B88C0*/ void destructor();  // ----------------------  /* auto */
/*005B88E0*/ MyStr *assignChar(int8_t *);  // ------------  /* auto */
/*005B8920*/ MyStr *assign(char *);  // ------------------  /* auto */
/*005B8970*/ void *assignMyStr(MyStr *);  // -------------  /* auto */
/*005B89B0*/ MyStr *assignMySubStr_0(MySubStr *);  // ----  /* auto */
/*005B8A00*/ MyStr *append(char *);  // ------------------  /* auto */
/*005B8A40*/ MyStr *appendChar(int8_t *);  // ------------  /* auto */
/*005B8A70*/ MyStr *appendMySubStr(MySubStr *);  // ------  /* auto */
/*005B9740*/ MyStr *scalar_destructor(char);  // ---------  /* auto */
/*005D7C90*/ char *resizeGetbuf(int32_t);  // ------------  /* auto */
/*005D7CB0*/ int32_t resize_0(int32_t);  // --------------  /* auto */
/*005D7E80*/ int32_t findSubstrOffs(char *, int32_t);       /* auto */
/*005D7FE0*/ int32_t getCharRIdx(int8_t *, int32_t);  // -  /* auto */
/*005D8050*/ MySubStr *subStrTo(MySubStr *, int32_t);       /* auto */
/*005D8080*/ MySubStr *subStrNFr(MySubStr *, int32_t);      /* auto */
/*005D80C0*/ MySubStr *subStrFr(MySubStr *, int32_t);       /* auto */
/*005D8100*/ MySubStr *subStr(MySubStr *, int32_t, int32_t);  /* auto */
/*005D91E0*/ MyStr *MyStrEx_scalar_destructor(char);  // -  /* auto */
/*00610E40*/ void MyStrEx_destructor();  // --------------  /* auto */
/*00614960*/ MyStr *sub_614960(MySubStr *);  // ----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyStr) == 0x14);  // ----------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_STR_H  ---------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
