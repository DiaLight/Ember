//
// Created by DiaLight on 10.04.2022.
//
#include <dk2.h>
#include <patches.h>


int main() {
  if(!api::initialize()) return -1;
  if(!patch::reduce_title_screen_time()) return -1;
  if(!patch::force_windowed_mode()) return -1;
  if(!patch::add_win10_support()) return -1;
  if(!patch::fix_mouse_pos_on_resized_window()) return -1;
  if(!patch::fix_close_window()) return -1;
//  if(!patch::fix_relative_mouse_data()) return -1;  // don't need this since we replace dinput to user32
  if(!patch::replace_mouse_dinput_to_user32()) return -1;
  printf("start\n");
  dk2::start();
  return 0;
}
