// -------------  id: constructor_0055AF40  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_RESOURCES_H  // -------------------------------  /* auto */
#define MY_RESOURCES_H  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/CFileManager.h>  // ------------------------  /* auto */
#include <dk2/MyKeyboard.h>  // --------------------------  /* auto */
#include <dk2/MyResources_f29CB.h>  // -------------------  /* auto */
#include <dk2/MyResources_f2E38Obj.h>  // ----------------  /* auto */
#include <dk2/MyVideoSettings.h>  // ---------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyResources;  // --------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyResources {  // ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ char diskDrive[260];  // -------------------------  /* auto */
/*108*/ char executableDir[260];  // ---------------------  /* auto */
/*20C*/ char settingsDir[260];  // -----------------------  /* auto */
/*310*/ char textureCacheDir[260];  // -------------------  /* auto */
/*414*/ char savesDir[260];  // --------------------------  /* auto */
/*518*/ char globalDir[260];  // -------------------------  /* auto */
/*61C*/ char textsDir[260];  // --------------------------  /* auto */
/*720*/ char soundSfxDir[260];  // -----------------------  /* auto */
/*824*/ char soundMusicDir[260];  // ---------------------  /* auto */
/*928*/ char editorDir[260];  // -------------------------  /* auto */
/*A2C*/ char dataMoviesDir[260];  // ---------------------  /* auto */
/*B30*/ CFileManager meshesFileMan;  // ------------------  /* auto */
/*C64*/ CFileManager devMeshesFileMan;  // ---------------  /* auto */
/*D98*/ CFileManager engineTexturesFileMan;  // ----------  /* auto */
/*ECC*/ CFileManager textureFileMan;  // -----------------  /* auto */
/*1000*/ CFileManager editorFileMan;  // -----------------  /* auto */
/*1134*/ CFileManager paletteFileMan;  // ----------------  /* auto */
/*1268*/ CFileManager spriteFileMan;  // -----------------  /* auto */
/*139C*/ CFileManager textsFileMan;  // ------------------  /* auto */
/*14D0*/ CFileManager pathsFileMan;  // ------------------  /* auto */
/*1604*/ CFileManager frontEndFileMan;  // ---------------  /* auto */
/*1738*/ MyVideoSettings video_settings;  // -------------  /* auto */
/*17EC*/ MyKeyboard myKeyboard;  // ----------------------  /* auto */
/*23A9*/ int32_t obj_23A9;  // ---------------------------  /* auto */
/*23AD*/ char gap_23AD[1566];  // ------------------------  /* auto */
/*29CB*/ MyResources_f29CB obj_29CB;  // -----------------  /* auto */
/*2A07*/ int32_t obj_2A07;  // ---------------------------  /* auto */
/*2A0B*/ int32_t useFe;  // ------------------------------  /* auto */
/*2A0F*/ int8_t f2a0f_gap[264];  // ----------------------  /* auto */
/*2B17*/ int32_t useFileChecksum;  // --------------------  /* auto */
/*2B1B*/ int32_t f2B1B;  // ------------------------------  /* auto */
/*2B1F*/ int32_t useFps2;  // ----------------------------  /* auto */
/*2B23*/ int32_t useFps;  // -----------------------------  /* auto */
/*2B27*/ int32_t f2B27;  // ------------------------------  /* auto */
/*2B2B*/ int32_t f2B2B;  // ------------------------------  /* auto */
/*2B2F*/ int32_t f2B2F;  // ------------------------------  /* auto */
/*2B33*/ int32_t f2B33;  // ------------------------------  /* auto */
/*2B37*/ int32_t f2B37;  // ------------------------------  /* auto */
/*2B3B*/ int8_t gap_2B3B[8];  // -------------------------  /* auto */
/*2B43*/ int32_t f2B43;  // ------------------------------  /* auto */
/*2B47*/ int32_t useIntMouse;  // ------------------------  /* auto */
/*2B4B*/ int8_t f2b4b_gap[4];  // ------------------------  /* auto */
/*2B4F*/ int32_t useCheats;  // --------------------------  /* auto */
/*2B53*/ int8_t f2b53_gap[24];  // -----------------------  /* auto */
/*2B6B*/ int32_t f2B6B;  // ------------------------------  /* auto */
/*2B6F*/ int32_t useFe3d;  // ----------------------------  /* auto */
/*2B73*/ int8_t f2b73_gap[48];  // -----------------------  /* auto */
/*2BA3*/ int32_t preloadResources;  // -------------------  /* auto */
/*2BA7*/ int8_t f2ba7_gap[96];  // -----------------------  /* auto */
/*2C07*/ int32_t f2C07;  // ------------------------------  /* auto */
/*2C0B*/ int8_t gap_2C0B[29];  // ------------------------  /* auto */
/*2C28*/ int32_t heapSizeMb;  // -------------------------  /* auto */
/*2C2C*/ int32_t EnableArtPatching;  // ------------------  /* auto */
/*2C30*/ int8_t f2c30_gap[512];  // ----------------------  /* auto */
/*2E30*/ int32_t showMovies;  // -------------------------  /* auto */
/*2E34*/ int32_t logOos;  // -----------------------------  /* auto */
/*2E38*/ MyResources_f2E38Obj obj_2E38;  // --------------  /* auto */
/*2F70*/ char f2F70[68];  // -----------------------------  /* auto */
/*2FB4*/ int32_t f2FB4;  // ------------------------------  /* auto */
/*2FB8*/ int32_t f2FB8;  // ------------------------------  /* auto */
/*2FBC*/ int32_t f2FBC;  // ------------------------------  /* auto */
/*2FC0*/ int32_t f2FC0;  // ------------------------------  /* auto */
/*2FC4*/ int32_t f2FC4;  // ------------------------------  /* auto */
/*2FC8*/ int32_t useChecksum;  // ------------------------  /* auto */
/*2FCC*/ int32_t f2FCC;  // ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*0055AF40*/ MyResources *constructor();  // -------------  /* auto */
/*0055B120*/ HKEY__ *sub_55B120();  // -------------------  /* auto */
/*0055B480*/ int32_t sub_55B480(int32_t *);  // ----------  /* auto */
/*0055C020*/ MyResources *init_resources();  // ----------  /* auto */
/*0055C3C0*/ void resolveMovies();  // -------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyResources) == 0x2FD0);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_RESOURCES_H  ---------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
