// -------------  id: constructor_004EBFE0  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_ROOMS_H  // -----------------------------------  /* auto */
#define MY_ROOMS_H  // -----------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct CRoom;  // --------------------------------------  /* auto */
  struct CWorld;  // -------------------------------------  /* auto */
  struct MyRooms;  // ------------------------------------  /* auto */
  struct TbDiscFile;  // ---------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyRooms {  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint16_t changedAreaRoomList;  // ----------------  /* auto */
/*  2*/ int32_t thingManager;  // ------------------------  /* auto */
/*  6*/ CWorld *world;  // -------------------------------  /* auto */
/*  A*/ CRoom *parr;  // ---------------------------------  /* auto */
/*  E*/ uint16_t firstRoomId;  // ------------------------  /* auto */
/* 10*/ __int16 f10;  // ---------------------------------  /* auto */
/* 12*/ int32_t f12;  // ---------------------------------  /* auto */
/* 16*/ int32_t f16;  // ---------------------------------  /* auto */
/* 1A*/ __int16 f1A;  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*004EBFE0*/ MyRooms *constructor();  // -----------------  /* auto */
/*004EC000*/ int32_t createRooms(CWorld *);  // ----------  /* auto */
/*004EC190*/ uint16_t clear();  // -----------------------  /* auto */
/*004EC1E0*/ int32_t saveToTbDiscFile(TbDiscFile **);       /* auto */
/*004EC360*/ int32_t fun_4EC360();  // -------------------  /* auto */
/*004EC410*/ int32_t fun_4EC410();  // -------------------  /* auto */
/*004ECD00*/ int32_t fun_4ECD00(uint16_t);  // -----------  /* auto */
/*004ECDB0*/ __int16 fun_4ECDB0(int32_t, int32_t);  // ---  /* auto */
/*004ECEB0*/ char fun_4ECEB0(int32_t, int32_t, int32_t);    /* auto */
/*004EDB70*/ int32_t calcChecksum();  // -----------------  /* auto */
/*004EDBB0*/ void dump();  // ----------------------------  /* auto */
/*004EDC10*/ char fun_4EDC10(int32_t, int32_t);  // ------  /* auto */
/*004EDFC0*/ char RoomManager_cpp_4EDFC0(int32_t);  // ---  /* auto */
/*004EF1F0*/ char fun_4EF1F0(int32_t);  // ---------------  /* auto */
/*004EF5E0*/ uint8_t fun_4EF5E0(int32_t);  // ------------  /* auto */
/*004EF6C0*/ char fun_4EF6C0(void *);  // ----------------  /* auto */
/*004EF730*/ int32_t fun_4EF730(int32_t, int32_t);  // ---  /* auto */
/*004EF980*/ int32_t fun_4EF980(int32_t, int32_t);  // ---  /* auto */
/*004EFCE0*/ int32_t fun_4EFCE0(int32_t, int32_t, int32_t);  /* auto */
/*004EFDE0*/ char *fun_4EFDE0(int32_t, int32_t, int32_t);   /* auto */
/*004EFF00*/ char fun_4EFF00(int32_t, int32_t, int32_t);    /* auto */
/*004F0360*/ uint16_t fun_4F0360();  // ------------------  /* auto */
/*004F0D70*/ char fun_4F0D70(CRoom *);  // ---------------  /* auto */
/*004F0E30*/ char fun_4F0E30(CRoom *);  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyRooms) == 0x1C);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_ROOMS_H  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
