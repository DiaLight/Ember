// -------------  id: constructor_00562960  --------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef MY_RESOURCES_F29_CB_H  // ------------------------  /* auto */
#define MY_RESOURCES_F29_CB_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct MyResources_f29CB;  // --------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct MyResources_f29CB {  // ---------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ int32_t f0;  // ----------------------------------  /* auto */
/*  4*/ int32_t speechVolume;  // ------------------------  /* auto */
/*  8*/ int32_t soundEffectVolume;  // -------------------  /* auto */
/*  C*/ int32_t musicVolume;  // -------------------------  /* auto */
/* 10*/ int32_t masterVolume;  // ------------------------  /* auto */
/* 14*/ int32_t masterBalance;  // -----------------------  /* auto */
/* 18*/ int32_t environmentslEffects;  // ----------------  /* auto */
/* 1C*/ int32_t soundQuality;  // ------------------------  /* auto */
/* 20*/ int32_t headphones;  // --------------------------  /* auto */
/* 24*/ int32_t flipSpeakers;  // ------------------------  /* auto */
/* 28*/ int32_t qsound;  // ------------------------------  /* auto */
/* 2C*/ int32_t musicEnabled;  // ------------------------  /* auto */
/* 30*/ int32_t speechEnabled;  // -----------------------  /* auto */
/* 34*/ int32_t sfxEnabled;  // --------------------------  /* auto */
/* 38*/ int32_t numberOfChannels;  // --------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*00562960*/ MyResources_f29CB *constructor();  // -------  /* auto */
/*005629C0*/ HKEY__ *resolveValues();  // ----------------  /* auto */
/*00562C30*/ HKEY__ *setDefaults();  // ------------------  /* auto */
/*00563170*/ HKEY__ *loadFromSettings(int32_t);  // ------  /* auto */
/*00563490*/ HKEY__ *setSpeechVolume(HKEY__ *);  // ------  /* auto */
/*00563520*/ HKEY__ *setSoundEffectVolume(HKEY__ *);  // -  /* auto */
/*005635B0*/ HKEY__ *setMusicVolume(HKEY__ *);  // -------  /* auto */
/*00563640*/ HKEY__ *setMasterVolume(HKEY__ *);  // ------  /* auto */
/*005636D0*/ HKEY__ *setMasterBalance(HKEY__ *);  // -----  /* auto */
/*00563750*/ HKEY__ *setEnvironmentslEffects(HKEY__ *);     /* auto */
/*005637E0*/ HKEY__ *setSoundQuality(HKEY__ *);  // ------  /* auto */
/*00563870*/ HKEY__ *setHeadphones(HKEY__ *);  // --------  /* auto */
/*00563900*/ HKEY__ *setFlipSpeakers(HKEY__ *);  // ------  /* auto */
/*00563990*/ HKEY__ *setQSound(HKEY__ *);  // ------------  /* auto */
/*00563A20*/ HKEY__ *setMusic(HKEY__ *);  // -------------  /* auto */
/*00563AB0*/ HKEY__ *setSpeech(HKEY__ *);  // ------------  /* auto */
/*00563B40*/ HKEY__ *setSfx(HKEY__ *);  // ---------------  /* auto */
/*00563BD0*/ HKEY__ *setNumberOfVoices(HKEY__ *);  // ----  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(MyResources_f29CB) == 0x3C);  // ----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //MY_RESOURCES_F29_CB_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
