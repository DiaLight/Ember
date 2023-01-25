//
// Created by DiaLight on 20.08.2022.
//

#ifndef EMBER_PATCHES_H
#define EMBER_PATCHES_H

namespace patch {

  bool reduce_title_screen_time();
  bool use_cwd_as_dk2_home_dir();
  bool control_windowed_mode();
  bool add_win10_support();
  bool fix_relative_mouse_data();
  bool fix_mouse_pos_on_resized_window();
  bool fix_close_window();
  bool replace_mouse_dinput_to_user32();
  bool patch_menu_resolution();
  bool patch_game_resolution();
  bool expand_surf_idx_array();
  bool expand_surf_hash_list();
  bool patch_draw_buffer_extra_size();
  bool fix_surface_buffer_size_on_max_resolution();
  bool replace_custom_heap();
  bool dpi_aware();
  bool redirect_load_cached_textures();
  bool break_texture_resolution();
  bool upscale_texture_buffer();
  bool expand_size_hash_table();
  bool fix_usage_uninitialized_structure();
  bool fix_keyboard_state_on_alt_tab();
  bool notify_another_instance_is_running();
  bool unlimited_zoom_hack();
  bool use_wheel_to_zoom();
  bool replace_dll();

}

#endif //EMBER_PATCHES_H
