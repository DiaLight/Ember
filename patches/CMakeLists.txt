
add_library(dk2_patches STATIC
        reduce_title_screen_time.cpp
        use_cwd_as_dk2_home_dir.cpp
        control_windowed_mode.cpp
        add_win10_support.cpp
        mouse_user32/fix_mouse_pos_on_resized_window.cpp
        mouse_dinput/fix_relative_mouse_data.cpp
        mouse_dinput/replace_mouse_dinput_to_user32.cpp
        fix_close_window.cpp
        screen_resolution/patch_menu_resolution.cpp
        screen_resolution/patch_game_resolution.cpp
        screen_resolution/expand_surf_idx_array.cpp
        screen_resolution/expand_surf_hash_list.cpp
        screen_resolution/patch_draw_buffer_extra_size.cpp
        screen_resolution/fix_surface_buffer_size_on_max_resolution.cpp
        screen_resolution/replace_custom_heap.cpp
        screen_resolution/dpi_aware.cpp
        unlimited_zoom_hack.cpp
        use_wheel_to_zoom.cpp
        hires_textures/redirect_load_cached_textures.cpp
        hires_textures/upscale_texture_buffer.cpp
        hires_textures/expand_size_hash_table.cpp
        fix_usage_unitialized_structure.cpp
        fix_keyboard_state_on_alt_tab.cpp
        notify_another_instance_is_running.cpp
#        replace_dll.cpp
        show_wireframe.cpp
        sup_marco_ct/edit_player.cpp
        sup_marco_ct/make_money_editable.cpp
        sup_marco_ct/cheatcode_spawner.cpp
        sup_marco_ct/edit_selected_unit.cpp
        )
target_include_directories(dk2_patches PUBLIC include)
target_compile_definitions(dk2_patches PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

target_link_libraries(dk2_patches PRIVATE
        lodepng
        dk2_utils
        dk2_hooks
        dk2_mapping
        win32_gui_layout
        )

add_subdirectory(gog_patch_dll)

