//
// Created by DiaLight on 10.04.2022.
//
#include <dk2_relink.h>
#include <dk2_functions.h>
#include <dk2_patches.h>
#include <dk2_hooks.h>
#include <dk2_info.h>
#include <utils/xrefs.h>
#include <utils/patch.h>
#include <hooks/direct_input.h>
#include <hooks/game_loop.h>
#include <utils/stacktrace.h>
#include <gog_patch_dll.h>
#include <tools.h>


bool ember_initialize_impl() {
    if(!api::info_initialize()) return false;
    ember_runtime_relink(api::dk2_base);
    if(!api::initXrefsApi()) return false;
    if(!api::initPatchApi()) return false;
    if(!hook::main()) return false;
//    if(!initStacktrace()) return false;
    if(!hook::initWindow()) return false;
    if(!hook::initGameLoop()) return false;
    if(!hook::initDirectInput()) return false;

    if(!patch::reduce_title_screen_time()) return false;
    if(!patch::use_cwd_as_dk2_home_dir()) return false;
    bool gog_patch = api::hasFlag("gog_patch");
    if(!gog_patch) {
        if(!patch::control_windowed_mode()) return false;  // cooperative level conflict with gog_patch
    }
    if(!patch::add_win10_support()) return false;  // warning patch duplicate with gog_patch
    if(!patch::fix_mouse_pos_on_resized_window()) return false;
    if(!patch::fix_close_window()) return false;
    //  if(!patch::fix_relative_mouse_data()) return false;  // don't need this since we replace dinput to user32
    if(!patch::replace_mouse_dinput_to_user32()) return false;

    if(!gog_patch) {
        if (!patch::patch_menu_resolution()) return false;  // dx config conflict
        if (!patch::patch_game_resolution()) return false;
    }
    if(!gog_patch) {
        if(!patch::expand_surf_idx_array()) return false;  // patch conflict
    }
    if(!patch::expand_surf_hash_list()) return false;
    if(!patch::patch_draw_buffer_extra_size()) return false;
    if(!patch::fix_surface_buffer_size_on_max_resolution()) return false;
    if(!patch::replace_custom_heap()) return false;
    if(!patch::dpi_aware()) return false;
    if(!patch::unlimited_zoom_hack()) return false;
    if(!patch::use_wheel_to_zoom()) return false;

    //  if(!patch::replace_dll()) return false;  // disabled: perhaps this behavior causes false positives of the antivirus

    //  if(!patch::break_texture_resolution()) return false;
    if(!patch::redirect_load_cached_textures()) return false;
    //  if(!patch::upscale_texture_buffer()) return false;
    //  if(!patch::expand_size_hash_table()) return false;
    if(!patch::fix_usage_uninitialized_structure()) return false;
    if(!patch::fix_keyboard_state_on_alt_tab()) return false;
    if(!patch::notify_another_instance_is_running()) return false;
    if(gog_patch) {
        if (!patch::show_wireframe()) return false;
    }

    //  if(!reimpl::draw3dScene()) return false;
    //  if(!reimpl::SurfHashList__probablySort()) return false;
    if(!gog_patch_dll()) return false;

    if(!tools::unpack_texture_cache()) return false;
    return true;
}
extern "C" __declspec(dllexport) bool __cdecl ember_initialize() {
    if(!ember_initialize_impl()) return false;
    return true;
}

#ifndef REVERSE_MODE
int main() {
    if(!ember_initialize_impl()) return -1;
    printf("start dk2 code\n");
    dk2::dk2_start();
    return 0;
}
int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow) {
    return main();
}
#endif
