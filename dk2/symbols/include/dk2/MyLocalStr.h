// -----------------  id: vtbl_00672EC0  -----------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_LOCAL_STR_H  // -------------------------------  /* auto */
#define MY_LOCAL_STR_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyLocalStr;  // ---------------------------------  /* auto */
  struct MyStr;  // --------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyLocalStr {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  4*/ size_t len;  // ----------------------------------  /* auto */
/*  8*/ char *buf;  // -----------------------------------  /* auto */
/*  C*/ size_t buf_size;  // -----------------------------  /* auto */
/* 10*/ int32_t is_truncated;  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00672EC0*/ static void **vftable();  // ----------------  /* auto */
/*---*/ // MyLocalStr  -----------------------------------  /* auto */
/*  0*/ virtual int32_t __cdecl v_format(int32_t, char *, ...);  // = 005FE240  /* auto */
/*  4*/ virtual int32_t v_resize(uint32_t);  // = 005FDFC0  /* auto */
/*  8*/ virtual void *v_scalar_destructor(char);  // = 005FDFA0  /* auto */
/*  C*/ virtual uint8_t **v_assignChar(uint8_t *);  // = 005FE0C0  /* auto */
/* 10*/ virtual void *v_assign(char *);  // = 005FE100  --  /* auto */
/* 14*/ virtual char **v_assignMyStr(MyStr *);  // = 005FE150  /* auto */
/* 18*/ virtual int32_t v_append(char *);  // = 005FE180    /* auto */
/* 1C*/ virtual uint32_t *v_appendChar(uint8_t *);  // = 005FE1C0  /* auto */
/* 20*/ virtual void *v_appendMyLocalStr(int32_t);  // = 005FE200  /* auto */
// -------------------------------------------------------  /* auto */
/*005D7D30*/ bool equalTo(char *);  // -------------------  /* auto */
/*005D7F60*/ int32_t charPos(uint8_t *, uint32_t);  // ---  /* auto */
/*005FDFA0*/ void *scalar_destructor(char);  // ----------  /* auto */
/*005FDFC0*/ int32_t resize(uint32_t);  // ---------------  /* auto */
/*005FE000*/ MyLocalStr *constructor(const char *, int32_t, int32_t);  /* auto */
/*005FE0B0*/ void destructor();  // ----------------------  /* auto */
/*005FE0C0*/ MyLocalStr *assignChar(uint8_t *);  // ------  /* auto */
/*005FE100*/ MyLocalStr *assign(char *);  // -------------  /* auto */
/*005FE150*/ MyLocalStr *assignMyStr(MyStr *);  // -------  /* auto */
/*005FE180*/ int32_t append(char *);  // -----------------  /* auto */
/*005FE1C0*/ MyLocalStr *appendChar(uint8_t *);  // ------  /* auto */
/*005FE200*/ MyLocalStr *appendLocalStr(MyLocalStr *);      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyLocalStr) == 0x14);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_LOCAL_STR_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
