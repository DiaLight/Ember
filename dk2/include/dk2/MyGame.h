// -------------  id: constructor_00557B70  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_GAME_H  // ------------------------------------  /* auto */
#define MY_GAME_H  // ------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CWindowTest.h>  // -------------------------  /* auto */
#include <dk2/MyD3DevInfo.h>  // -------------------------  /* auto */
#include <dk2/MyGame_f4C.h>  // --------------------------  /* auto */
#include <dk2/MySurface.h>  // ---------------------------  /* auto */
#include <dk2/StaticListeners.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyDdSurfaceEx;  // ------------------------------  /* auto */
  struct MyGame;  // -------------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyGame {  // --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ int32_t dwWidth;  // -----------------------------  /* auto */
/*  8*/ int32_t dwHeight;  // ----------------------------  /* auto */
/*  C*/ int32_t dwRGBBitCount;  // -----------------------  /* auto */
/* 10*/ int32_t isFullscreen;  // ------------------------  /* auto */
/* 14*/ int32_t _prepareScreen_a6;  // -------------------  /* auto */
/* 18*/ int32_t f18;  // ---------------------------------  /* auto */
/* 1C*/ int32_t _prepareScreen_a7;  // -------------------  /* auto */
/* 20*/ MySurface surf_desc;  // -------------------------  /* auto */
/* 48*/ int32_t f48;  // ---------------------------------  /* auto */
/* 4C*/ MyGame_f4C f4C_;  // -----------------------------  /* auto */
/* 69*/ int32_t d3devCount;  // --------------------------  /* auto */
/* 6D*/ IDirect3D2 *pIDirect3D2;  // ---------------------  /* auto */
/* 71*/ MyD3DevInfo d3devArr[16];  // --------------------  /* auto */
/*271*/ int8_t gap271[4];  // ----------------------------  /* auto */
/*275*/ IDirectDrawSurface *zbufferSurf;  // -------------  /* auto */
/*279*/ StaticListeners static_listeners;  // ------------  /* auto */
/*28D*/ int32_t f28D;  // --------------------------------  /* auto */
/*291*/ int32_t f291;  // --------------------------------  /* auto */
/*295*/ int32_t f295;  // --------------------------------  /* auto */
/*299*/ int8_t gap_299[4];  // ---------------------------  /* auto */
/*29D*/ int32_t f29D;  // --------------------------------  /* auto */
/*2A1*/ int8_t gap_2A1[304];  // -------------------------  /* auto */
/*3D1*/ int32_t f3D1;  // --------------------------------  /* auto */
/*3D5*/ int8_t gap_3D5[304];  // -------------------------  /* auto */
/*505*/ int32_t f505;  // --------------------------------  /* auto */
/*509*/ int32_t field_obj_509;  // -----------------------  /* auto */
/*50D*/ int32_t f50D;  // --------------------------------  /* auto */
/*511*/ int32_t f511;  // --------------------------------  /* auto */
/*515*/ int32_t f515;  // --------------------------------  /* auto */
/*519*/ int32_t f519;  // --------------------------------  /* auto */
/*51D*/ int32_t f51D;  // --------------------------------  /* auto */
/*521*/ int32_t f521;  // --------------------------------  /* auto */
/*525*/ GUID guid_arr16[16];  // -------------------------  /* auto */
/*625*/ int32_t is_empty_dd[16];  // ---------------------  /* auto */
/*665*/ char dds_descs_arr16[16][64];  // ----------------  /* auto */
/*A65*/ char dds_names_arr16[16][64];  // ----------------  /* auto */
/*E65*/ int32_t dds_count;  // ---------------------------  /* auto */
/*E69*/ int32_t selected_dd_idx;  // ---------------------  /* auto */
/*E6D*/ int32_t last_selected_dd_idx;  // ----------------  /* auto */
/*E71*/ int32_t fE71;  // --------------------------------  /* auto */
/*E75*/ int32_t fE75;  // --------------------------------  /* auto */
/*E79*/ int32_t fE79;  // --------------------------------  /* auto */
/*E7D*/ int32_t fE7D;  // --------------------------------  /* auto */
/*E81*/ int32_t fE81;  // --------------------------------  /* auto */
/*E85*/ int32_t totalDisplayMemory;  // ------------------  /* auto */
/*E89*/ void (__cdecl *WM_ACTIVATE_callbacks[8])(int32_t, int32_t, int32_t, const void *);  /* auto */
/*EA9*/ const void *WM_ACTIVATE_userData[8];  // ---------  /* auto */
/*EC9*/ CWindowTest c_window_test;  // -------------------  /* auto */
/*F29*/ int16_t field_obj;  // ---------------------------  /* auto */
/*F2B*/ int8_t gap_F2B[34];  // --------------------------  /* auto */
/*F4D*/ float moonAge;  // -------------------------------  /* auto */
/*F51*/ __int16 fF51;  // --------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00404E00*/ MyGame_f4C *get_f4C();  // ------------------  /* auto */
/*00557B70*/ MyGame *constructor();  // ------------------  /* auto */
/*00557CB0*/ int32_t init();  // -------------------------  /* auto */
/*00557FB0*/ int32_t isOsCompatible();  // ---------------  /* auto */
/*005580E0*/ int32_t *release();  // ---------------------  /* auto */
/*005581B0*/ int32_t prepareScreenEx(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005585C0*/ int32_t fun_5585C0(int32_t);  // ------------  /* auto */
/*005586E0*/ int32_t selectSurfToRender();  // -----------  /* auto */
/*00558770*/ int32_t getSurf_unlock();  // ---------------  /* auto */
/*005587C0*/ MyDdSurfaceEx *getCurOffScreenSurf();  // ---  /* auto */
/*005587F0*/ void prepareScreen();  // -------------------  /* auto */
/*005588A0*/ int32_t *surf_Blt();  // --------------------  /* auto */
/*00558A40*/ int32_t takeScreenshot();  // ---------------  /* auto */
/*00558BD0*/ int32_t sub_558BD0();  // -------------------  /* auto */
/*00558E40*/ int32_t collect3dDevices();  // -------------  /* auto */
/*00558F40*/ int32_t sub_558F40(int32_t, MyD3DevInfo *);    /* auto */
/*00558F70*/ int32_t createZBufferSurf(int32_t);  // -----  /* auto */
/*00559140*/ int32_t sub_559140(const char *, int32_t, const char *, const char *);  /* auto */
/*00559670*/ int32_t isNeedBlt();  // --------------------  /* auto */
/*00559690*/ int32_t addWmActivateCallback(void (__cdecl *)(int32_t, int32_t, int32_t, const void *), const void *);  /* auto */
/*005596D0*/ int32_t removeWmActivateCallback(int32_t);     /* auto */
/*005597F0*/ GUID *fun_5597F0();  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyGame) == 0xF53);  // --------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_GAME_H  --------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
