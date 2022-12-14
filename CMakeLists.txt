cmake_minimum_required(VERSION 3.20)
project(ember)

set(CMAKE_CXX_STANDARD 20)

option(DK2_DIR "Dungeon Keeper 2 directory")
if(NOT DK2_DIR)
    message(FATAL_ERROR "You need to specify Dungeon Keeper 2 dir with cmake flag -DDK2_DIR=\"D:/Games/Dungeon Keeper 2\"")
else()
    message(STATUS "Dungeon Keeper 2 directory: ${DK2_DIR}")
endif()
if(NOT EXISTS "${DK2_DIR}/DKII.EXE")
    message(FATAL_ERROR "\"${DK2_DIR}/DKII.EXE\" is not found")
endif()

if(MSVC)
    add_compile_options(/we4715)
endif()

option(REVERSE_MODE "Build bootstrap_patcher as dll for dynamic load by debugger")

find_package(Python REQUIRED)

set(DK2_NAMES_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/names.map")
set(DK2_REFERENCES_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/references.map")
set(DK2_STACK_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/stack.map")

set(BIN_DIR "${CMAKE_BINARY_DIR}/bin")
file(MAKE_DIRECTORY ${BIN_DIR})
set(DK2_REFERENCES "${BIN_DIR}/references.map")
set(DK2_STACK "${BIN_DIR}/stack.map")
set(DK2_EXPORTS "${BIN_DIR}/exports.map")
add_custom_command(
        OUTPUT ${DK2_REFERENCES}
        COMMAND ${CMAKE_COMMAND} -E copy_if_different ${DK2_REFERENCES_SRC} ${DK2_REFERENCES}
        DEPENDS ${DK2_REFERENCES_SRC}
        COMMENT "Copy references.map"
)
add_custom_target(references_map DEPENDS ${DK2_REFERENCES})
add_custom_command(
        OUTPUT ${DK2_STACK}
        COMMAND ${CMAKE_COMMAND} -E copy_if_different ${DK2_STACK_SRC} ${DK2_STACK}
        DEPENDS ${DK2_STACK_SRC}
        COMMENT "Copy stack.map"
)
add_custom_target(stack_map DEPENDS ${DK2_STACK})
add_custom_command(
        OUTPUT ${DK2_EXPORTS}
        COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_LIST_DIR}/gen_exports.py ${DK2_NAMES_SRC} ${DK2_EXPORTS}
        DEPENDS
        ${DK2_NAMES_SRC}
        COMMENT "Generating exports.map"
)
add_custom_target(dll_exports DEPENDS ${DK2_EXPORTS})

set(DK2_LIB "${CMAKE_CURRENT_BINARY_DIR}/dk2.lib")
add_custom_command(
        OUTPUT ${DK2_LIB}
        COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_LIST_DIR}/genlib/gen_def.py ${DK2_EXPORTS} ${CMAKE_CURRENT_BINARY_DIR}/dk2.def
        COMMAND ${CMAKE_CURRENT_LIST_DIR}/genlib/gen_lib.bat ${CMAKE_CURRENT_BINARY_DIR}/dk2.def ${DK2_LIB}
        DEPENDS
        ${DK2_EXPORTS}
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/genlib
        COMMENT "Generating dk2.lib"
)

set(DK2_SYMBOLS "${CMAKE_CURRENT_BINARY_DIR}/dk2_symbols.asm")
add_custom_command(
        OUTPUT ${DK2_SYMBOLS}
        COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_LIST_DIR}/gen_symbols.py ${DK2_EXPORTS} ${DK2_SYMBOLS}
        DEPENDS
        ${DK2_EXPORTS}
        COMMENT "Generating dk2_symbols.asm"
)

add_subdirectory(makedll)
set(DK2_DLL "${BIN_DIR}/dk2.dll")
add_custom_command(
        OUTPUT ${DK2_DLL}
        COMMAND $<TARGET_FILE:makedll> "${DK2_DLL}" "${DK2_DIR}/DKII.exe" "${DK2_EXPORTS}" "${DK2_REFERENCES}"
        DEPENDS
        ${DK2_EXPORTS}
        ${DK2_REFERENCES}
        makedll
        WORKING_DIRECTORY ${DK2_DIR}
        COMMENT "Generating dk2.dll"
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS- /Gz")

add_library(win32_gui_layout STATIC win32_gui_layout.cpp)
target_include_directories(win32_gui_layout PUBLIC ${CMAKE_CURRENT_LIST_DIR})

set(SOURCES
        main.cpp
        api.cpp
        api/window.cpp
        api/stacktrace.cpp
        api/stacktrace_window.cpp
        api/parse.cpp
        api/game_loop.cpp
        api/Buf.cpp
        api/patch.cpp
        patches/reduce_title_screen_time.cpp
        patches/control_windowed_mode.cpp
        patches/add_win10_support.cpp
        patches/mouse_dinput/fix_relative_mouse_data.cpp
        patches/mouse_dinput/replace_mouse_dinput_to_user32.cpp
        patches/mouse_user32/fix_mouse_pos_on_resized_window.cpp
        patches/fix_close_window.cpp
        patches/use_cwd_as_dk2_home_dir.cpp
        patches/screen_resolution/patch_menu_resolution.cpp
        patches/screen_resolution/patch_game_resolution.cpp
        patches/screen_resolution/expand_surf_idx_array.cpp
        patches/screen_resolution/expand_surf_hash_list.cpp
        patches/screen_resolution/patch_draw_buffer_extra_size.cpp
        patches/screen_resolution/replace_custom_heap.cpp
        patches/screen_resolution/dpi_aware.cpp
        patches/screen_resolution/fix_surface_buffer_size_on_max_resolution.cpp
        patches/hires_textures/redirect_load_cached_textures.cpp
        patches/hires_textures/upscale_texture_buffer.cpp
        patches/hires_textures/expand_size_hash_table.cpp
        patches/fix_usage_unitialized_structure.cpp
        patches/unlimited_zoom_hack.cpp
        reimpl/SurfHashList__probablySort.cpp
        reimpl/draw3dScene.cpp
        tools/unpack_texture_cache.cpp
        stdex.cpp
)
if(REVERSE_MODE)
    enable_language(ASM_MASM)
    add_library(bootstrap_patcher SHARED
            ${SOURCES}
            ${DK2_SYMBOLS}
    )
    target_compile_definitions(bootstrap_patcher PRIVATE REVERSE_MODE=1)
else()
    add_executable(bootstrap_patcher WIN32
            ${SOURCES}
            ${DK2_LIB}
            ${DK2_DLL}
    )
    target_link_libraries(bootstrap_patcher PRIVATE ${DK2_LIB})
endif()
add_dependencies(bootstrap_patcher dll_exports stack_map references_map)
target_include_directories(bootstrap_patcher PRIVATE include)
target_link_libraries(bootstrap_patcher PRIVATE Dbghelp Shcore Comctl32 win32_gui_layout)
target_compile_definitions(bootstrap_patcher PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

add_subdirectory(3rdparty)
target_link_libraries(bootstrap_patcher PRIVATE lodepng)

set_target_properties(bootstrap_patcher PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}")

if(NOT REVERSE_MODE)
    add_subdirectory(launcher)
    add_subdirectory(unpacker)
endif()
