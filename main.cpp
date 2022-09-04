//
// Created by DiaLight on 10.04.2022.
//
#include <dk2.h>
#include <patches.h>

extern "C" __declspec(dllexport) bool __cdecl ember_initialize() {
  if(!api::initialize()) return false;
  if(!patch::reduce_title_screen_time()) return false;
  if(!patch::force_windowed_mode()) return false;
  if(!patch::add_win10_support()) return false;
  if(!patch::fix_mouse_pos_on_resized_window()) return false;
  if(!patch::fix_close_window()) return false;
//  if(!patch::fix_relative_mouse_data()) return false;  // don't need this since we replace dinput to user32
  if(!patch::replace_mouse_dinput_to_user32()) return false;
  return true;
}

#ifndef REVERSE_MODE
int main() {
  if(!ember_initialize()) return -1;
  printf("start\n");
  dk2::start();
  return 0;
}
#endif
