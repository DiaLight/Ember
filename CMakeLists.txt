cmake_minimum_required(VERSION 3.20)
project(ember)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreaded$<$<CONFIG:Debug>:Debug>)

option(DK2_DIR "Dungeon Keeper 2 directory")
if(NOT DK2_DIR)
    message(FATAL_ERROR "You need to specify Dungeon Keeper 2 dir with cmake flag -DDK2_DIR=\"D:/Games/Dungeon Keeper 2\"")
else()
    message(STATUS "Dungeon Keeper 2 directory: ${DK2_DIR}")
endif()
if(NOT EXISTS "${DK2_DIR}/DKII.EXE")
    message(FATAL_ERROR "\"${DK2_DIR}/DKII.EXE\" is not found")
endif()

option(REVERSE_MODE "Build bootstrap_patcher as dll for dynamic load by debugger")

find_package(Python REQUIRED)

set(DK2_EXPORTS "${CMAKE_CURRENT_BINARY_DIR}/exports.map")
add_custom_command(
        OUTPUT ${DK2_EXPORTS}
        COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_LIST_DIR}/gen_exports.py ${CMAKE_CURRENT_LIST_DIR}/mappings/names.map ${DK2_EXPORTS}
        DEPENDS
        ${CMAKE_CURRENT_LIST_DIR}/mappings/names.map
        COMMENT "Generating exports.map"
)

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
set(DK2_DLL "${DK2_DIR}/dk2.dll")
add_custom_command(
        OUTPUT ${DK2_DLL}
        COMMAND $<TARGET_FILE:makedll>
        DEPENDS
        ${DK2_EXPORTS}
        ${CMAKE_CURRENT_LIST_DIR}/mappings/references.map
        makedll
        WORKING_DIRECTORY ${DK2_DIR}
        COMMENT "Generating dk2.dll"
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS- /Gz")
set(SOURCES
        main.cpp
        api.cpp
        api/window.cpp
        api/stacktrace.cpp
        api/parse.cpp
        api/game_loop.cpp
        api/Buf.cpp
        api/patch.cpp
        patches/reduce_title_screen_time.cpp
        patches/force_windowed_mode.cpp
        patches/add_win10_support.cpp
        patches/mouse_dinput/fix_relative_mouse_data.cpp
        patches/mouse_dinput/replace_mouse_dinput_to_user32.cpp
        patches/mouse_user32/fix_mouse_pos_on_resized_window.cpp
        patches/fix_close_window.cpp
)
if(REVERSE_MODE)
    enable_language(ASM_MASM)
    add_library(bootstrap_patcher SHARED
            ${SOURCES}
            ${DK2_SYMBOLS}
    )
    target_compile_definitions(bootstrap_patcher PRIVATE REVERSE_MODE=1)
else()
    add_executable(bootstrap_patcher
            ${SOURCES}
            ${DK2_LIB}
            ${DK2_DLL}
    )
    target_link_libraries(bootstrap_patcher PRIVATE ${DK2_LIB})
endif()
set_target_properties(bootstrap_patcher PROPERTIES DEBUG_POSTFIX d)
target_include_directories(bootstrap_patcher PRIVATE include)
target_link_libraries(bootstrap_patcher PRIVATE Dbghelp)
target_compile_definitions(bootstrap_patcher PRIVATE DIRECTINPUT_VERSION=0x0500)
target_compile_definitions(
        bootstrap_patcher PRIVATE
        REFERENCES_MAPPING=${CMAKE_CURRENT_LIST_DIR}/mappings/references.map
        STACK_MAPPING=${CMAKE_CURRENT_LIST_DIR}/mappings/stack.map
)

set_target_properties(bootstrap_patcher PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${DK2_DIR}")
