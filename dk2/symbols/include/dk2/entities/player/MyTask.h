// -------------  id: Player_TaskStack_Task  -------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_TASK_H  // ------------------------------------  /* auto */
#define MY_TASK_H  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyTask {  // --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint16_t positionX;  // --------------------------  /* auto */
/*  2*/ uint16_t positionY;  // --------------------------  /* auto */
/*  4*/ char type;  // -----------------------------------  /* auto */
/*  5*/ uint16_t workers[12];  // ------------------------  /* auto */
/* 1D*/ uint16_t data;  // -------------------------------  /* auto */
/* 1F*/ uint16_t next;  // -------------------------------  /* auto */
/* 21*/ uint16_t id;  // ---------------------------------  /* auto */
/* 23*/ uint8_t allocated;  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyTask) == 0x24);  // ---------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_TASK_H  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */