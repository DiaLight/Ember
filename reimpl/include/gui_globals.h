//
// Created by DiaLight on 20.03.2023.
//

#ifndef EMBER_GUI_GLOBALS_H
#define EMBER_GUI_GLOBALS_H


#include <dk2/WindowCfg.h>
#include <dk2_globals.h>

enum MainGuiId {
    MGI_Main = 1,
    MGI_SinglePlayer = 2,
    MGI_Multiplayer = 3,
    MGI_Options = 4,
    MGI_Extras = 6,
    MGI_LoadGame = 8,
    MGI_Scrimish = 9,
    MGI_MultiplayerWinsock = 11,
    MGI_GraphicsOptions = 15,
    MGI_SoundOptions = 16,
    MGI_ControlOptions = 17,
    MGI_TodaysTopKeepers = 18,
};

enum GameGuiId {
    GGI_EscMenu = 22,
    GGI_Load = 23,
    GGI_Save = 24,
    GGI_Options = 25,
    GGI_GraphicsOptions = 26,
    GGI_SoundOptions = 27,
    GGI_AdvancedSoundOptions = 28,
    GGI_EndGame = 34,
    GGI_Confirm = 35,
};

class gui_globals {

public:
    inline static dk2::WindowCfg **getMainGuiConfig() { return dk2::mainView; }
    inline static dk2::WindowCfg **getInGameGuiConfig() { return dk2::gameView; }

    static dk2::WindowCfg *getMainWindowCfg(MainGuiId id) {
        auto *pos = gui_globals::getMainGuiConfig();
        for(;(*pos)->idx != -1; pos++) {
            auto *win = *pos;
            if(win->idx != id) continue;
            return win;
        }
        return nullptr;
    }
    static dk2::WindowCfg *getGameWindowCfg(GameGuiId id) {
        auto *pos = gui_globals::getInGameGuiConfig();
        for(;(*pos)->idx != -1; pos++) {
            auto *win = *pos;
            if(win->idx != id) continue;
            return win;
        }
        return nullptr;
    }

};

#endif //EMBER_GUI_GLOBALS_H
