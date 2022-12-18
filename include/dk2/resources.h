//
// Created by DiaLight on 06.09.2022.
//

#ifndef EMBER_RESOURCES_H
#define EMBER_RESOURCES_H

#include <dk2/utils.h>

namespace dk2 {

  class MySurface;

  class MBToUni {
  public:
    /*00553B90*/ static bool __cdecl convert(const char *mbStr, wchar_t *out, int size);
  };

  class MyTextText {
  public:
    // gui texts
    /*00553A60*/ static const char *__cdecl idx1091_getMbString(unsigned int strId);
    // in game messages
    /*00553AF0*/ static const char *__cdecl idx1090_getMbString(unsigned int strId);
  };

  struct FileStorageBase {
    virtual ~FileStorageBase();
//    FileStorageBase_vtbl *__vftable /*VFT*/;
//    MyDirectory *f4_dierctory;
    void *f4_dierctory;
  };
  static_assert(sizeof(FileStorageBase) == 0x8);

  struct CFileManager : public FileStorageBase {
//    CFileManager_vtbl *__vftable /*VFT*/;
    virtual ~CFileManager();
    BYTE gap8[32];
    DWORD field_28;
    DWORD field_2C;
    BYTE gap_30[256];
    int field_130;
  };
  static_assert(sizeof(CFileManager) == 0x134);

  struct MyVideoSettings {
    DWORD cmd_flag_SPEC_value;
    int display_width;
    int display_height;
    int display_bitnes;
    int zbuffer_bitnes;
    int screen_swap;
    int isWindowed;
    int screen_hardware3D;
    int cmd_flag_32BITTEXTURES;
    int cmd_flag_SOFTWAREFILTER;
    int selected_3D_engine;
    int field_2C;
    int cmd_flag_SOFTWARE;
    BYTE gap_34[16];
    int gamma_level;
    int field_48;
    int ambient_light;
    int view_distance;
    int shadow_level;
    int high_walls;
    int environment_mapping;
    int translucent_water;
    int texture_details;
    int sine_wave_water;
    BYTE screen_mode_type[4];
    int field_70;
    int machine_spec_level;
    int high_res_texture;
    int texture_reduction_level;
    int cheap_lighting;
    int solid_blueprints;
    int res_1024_768_enable;
    int res_1280_1024_enable;
    int res_1600_1200_enable;
    int should_draw_opt_background_alpha;
    DWORD field_98;
    int field_9C;
    int stipple_alpha;
    int pmesh_reduction_level;
    int guid_index;
    int guid_index_verifier_working;
    int guid_index_is_default;
  };
  static_assert(sizeof(MyVideoSettings) == 0xB4);

#pragma pack(push, 1)
  class MyResources {

    /*00758340*/ static MyResources instance;
  public:
    inline static MyResources *getInstance() { return (MyResources *) funptr<&instance>(); }

    DWORD field_0;
    char f4_diskDrive[260];
    char f108_executableDir[260];
    char f20C_settingsDir[260];
    char f310_textureCacheDir[260];
    char f414_savesDir[260];
    char f518_globalDir[260];
    char f61C_textsDir[260];
    char f720_soundSfxDir[260];
    char f824_soundMusicDir[260];
    char f928_editorDir[260];
    char fA2C_dataMoviesDir[260];
    CFileManager fB30_meshesFileMan;
    CFileManager fC64_devMeshesFileMan;
    CFileManager fD98_engineTexturesFileMan;
    CFileManager fECC_textureFileMan;
    CFileManager f1000_editorFileMan;
    CFileManager f1134_paletteFileMan;
    CFileManager f1268_spriteFileMan;
    CFileManager f139C_textsFileMan;
    CFileManager f14D0_pathsFileMan;
    CFileManager f1604_frontEndFileMan;
    MyVideoSettings f1738_video_settings;
    BYTE f17EC_myKeyboard[0xBBD];
    int f23A9_obj;
    char gap_23AD[1566];
    int f29CB_obj;
    char gap_29CF[56];
    int f2A07_obj;
    int field_2A0B;
    BYTE gap2A0F[292];
    DWORD f2B33;
    BYTE gap_2B37[12];
    DWORD f2B43;
    DWORD f2B47;
    BYTE gap_2B4B[32];
    DWORD field_2B6B;
    DWORD field_2B6F;
    BYTE gap_2B73[148];
    DWORD field_2C07;
    BYTE gap_2C0B[29];
    DWORD f2C28_heapSizeMb;
    BYTE gap_2C2C[516];
    DWORD f2E30;
    DWORD field_2E34;
    BYTE f2E38_obj[0x138];
    char field_2F70[68];
    int field_2FB4;
    int field_2FB8;
    int field_2FBC;
    int field_2FC0;
    int field_2FC4;
    int field_2FC8;
    int field_2FCC;


    /*0059A4B0*/ static MySurface *__cdecl loadPng(const char *name);

  };
#pragma pack(pop)
  static_assert(sizeof(MyResources) == 0x2FD0);

}

#endif //EMBER_RESOURCES_H
