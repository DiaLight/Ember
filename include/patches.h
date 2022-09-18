//
// Created by DiaLight on 20.08.2022.
//

#ifndef EMBER_PATCHES_H
#define EMBER_PATCHES_H

namespace patch {

  bool reduce_title_screen_time();
  bool use_cwd_as_dk2_home_dir();
  bool force_windowed_mode();
  bool add_win10_support();
  bool fix_relative_mouse_data();
  bool fix_mouse_pos_on_resized_window();
  bool fix_close_window();
  bool replace_mouse_dinput_to_user32();

}

#endif //EMBER_PATCHES_H
