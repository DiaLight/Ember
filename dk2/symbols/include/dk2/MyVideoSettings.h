// -------------  id: constructor_00563C50  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_VIDEO_SETTINGS_H  // --------------------------  /* auto */
#define MY_VIDEO_SETTINGS_H  // --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyVideoSettings;  // ----------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyVideoSettings {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ uint32_t cmd_flag_SPEC_value;  // ----------------  /* auto */
/*  4*/ int32_t display_width;  // -----------------------  /* auto */
/*  8*/ int32_t display_height;  // ----------------------  /* auto */
/*  C*/ int32_t display_bitnes;  // ----------------------  /* auto */
/* 10*/ int32_t zbuffer_bitnes;  // ----------------------  /* auto */
/* 14*/ int32_t screen_swap;  // -------------------------  /* auto */
/* 18*/ int32_t isWindowed;  // --------------------------  /* auto */
/* 1C*/ int32_t screen_hardware3D;  // -------------------  /* auto */
/* 20*/ int32_t cmd_flag_32BITTEXTURES;  // --------------  /* auto */
/* 24*/ int32_t cmd_flag_SOFTWAREFILTER;  // -------------  /* auto */
/* 28*/ int32_t selected_3D_engine;  // ------------------  /* auto */
/* 2C*/ int32_t dup_selected_3D_engine;  // --------------  /* auto */
/* 30*/ int32_t cmd_flag_SOFTWARE;  // -------------------  /* auto */
/* 34*/ GUID deviceGuid;  // -----------------------------  /* auto */
/* 44*/ int32_t gamma_level;  // -------------------------  /* auto */
/* 48*/ int32_t untouched2_eq_1;  // ---------------------  /* auto */
/* 4C*/ int32_t ambient_light;  // -----------------------  /* auto */
/* 50*/ int32_t view_distance;  // -----------------------  /* auto */
/* 54*/ int32_t shadow_level;  // ------------------------  /* auto */
/* 58*/ int32_t high_walls;  // --------------------------  /* auto */
/* 5C*/ int32_t environment_mapping;  // -----------------  /* auto */
/* 60*/ int32_t translucent_water;  // -------------------  /* auto */
/* 64*/ int32_t texture_details;  // ---------------------  /* auto */
/* 68*/ int32_t sine_wave_water;  // ---------------------  /* auto */
/* 6C*/ uint8_t screen_mode_type[4];  // -----------------  /* auto */
/* 70*/ int32_t f70;  // ---------------------------------  /* auto */
/* 74*/ int32_t machine_spec_level;  // ------------------  /* auto */
/* 78*/ int32_t high_res_texture;  // --------------------  /* auto */
/* 7C*/ int32_t texture_reduction_level;  // -------------  /* auto */
/* 80*/ int32_t cheap_lighting;  // ----------------------  /* auto */
/* 84*/ int32_t solid_blueprints;  // --------------------  /* auto */
/* 88*/ int32_t res_1024_768_enable;  // -----------------  /* auto */
/* 8C*/ int32_t res_1280_1024_enable;  // ----------------  /* auto */
/* 90*/ int32_t res_1600_1200_enable;  // ----------------  /* auto */
/* 94*/ int32_t should_draw_opt_background_alpha;  // ----  /* auto */
/* 98*/ uint32_t isBumpmappingEnabled;  // ---------------  /* auto */
/* 9C*/ int32_t f9C;  // ---------------------------------  /* auto */
/* A0*/ int32_t stipple_alpha;  // -----------------------  /* auto */
/* A4*/ int32_t pmesh_reduction_level;  // ---------------  /* auto */
/* A8*/ int32_t guid_index;  // --------------------------  /* auto */
/* AC*/ int32_t guid_index_verifier_working;  // ---------  /* auto */
/* B0*/ int32_t guid_index_is_default;  // ---------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00563C50*/ MyVideoSettings *constructor();  // ---------  /* auto */
/*00563D40*/ HKEY__ *destructor();  // -------------------  /* auto */
/*00563DC0*/ HKEY__ *sub_563DC0();  // -------------------  /* auto */
/*00563FB0*/ HKEY__ *sub_563FB0();  // -------------------  /* auto */
/*00564B00*/ HKEY__ *sub_564B00(int32_t);  // ------------  /* auto */
/*00565FD0*/ HKEY__ *sub_565FD0(HKEY__ *, int32_t, int32_t, int32_t, int32_t, int32_t);  /* auto */
/*005660F0*/ HKEY__ *fun_5660F0(uint32_t *);  // ---------  /* auto */
/*005661A0*/ HKEY__ *setSelected3dEngine(int32_t);  // ---  /* auto */
/*00566220*/ HKEY__ *fun_566220(uint32_t *);  // ---------  /* auto */
/*00566A70*/ int32_t textIdToResolutionId(int32_t);  // --  /* auto */
/*00566DA0*/ void sub_566DA0();  // ----------------------  /* auto */
/*00566E40*/ HKEY__ *sub_566E40(HKEY__ *);  // -----------  /* auto */
/*00566EC0*/ HKEY__ *sub_566EC0(HKEY__ *);  // -----------  /* auto */
/*00566F40*/ HKEY__ *sub_566F40(HKEY__ *);  // -----------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyVideoSettings) == 0xB4);  // ------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_VIDEO_SETTINGS_H  ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
