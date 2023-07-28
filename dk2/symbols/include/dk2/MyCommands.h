// -------------  id: constructor_00554C70  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_COMMANDS_H  // --------------------------------  /* auto */
#define MY_COMMANDS_H  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CEntryComponent;  // ----------------------------  /* auto */
  struct MyCmdHandler;  // -------------------------------  /* auto */
  struct MyCommands;  // ---------------------------------  /* auto */
  struct ProbablyConsole;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyCommands {  // ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ MyCmdHandler *root;  // --------------------------  /* auto */
/*  4*/ int32_t f4;  // ----------------------------------  /* auto */
/*  8*/ int32_t f8;  // ----------------------------------  /* auto */
/*  C*/ ProbablyConsole *console;  // --------------------  /* auto */
/* 10*/ MyCommands *prev;  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00554C70*/ MyCommands *constructor();  // --------------  /* auto */
/*00554D60*/ int32_t initConsoleCommand(char *, void *, CEntryComponent *);  /* auto */
/*00554D80*/ int32_t initConsoleCommandEx(char *, CEntryComponent *, void *, int32_t, void *);  /* auto */
/*005550D0*/ void clearList(CEntryComponent *);  // ------  /* auto */
/*00555560*/ int32_t addHandler(const char *, CEntryComponent *, int32_t, void *, int32_t, void *, MyCmdHandler **);  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyCommands) == 0x14);  // -----------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_COMMANDS_H  ----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
