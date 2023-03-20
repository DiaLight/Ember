cmake_minimum_required(VERSION 3.20)
project(ember)

set(CMAKE_CXX_STANDARD 20)

if(MSVC)
    add_compile_options(/we4715)
endif()

option(REVERSE_MODE "Build bootstrap_patcher as dll for dynamic load by debugger")

find_package(Python REQUIRED)

set(DK2_V170_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/v170.map")
set(DK2_REFERENCES_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/references.map")
set(DK2_STACK_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/stack.map")

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
set(DK2_REFERENCES "${CMAKE_CURRENT_BINARY_DIR}/references.map")
set(DK2_STACK "${CMAKE_CURRENT_BINARY_DIR}/stack.map")
set(DK2_EXPORTS "${CMAKE_CURRENT_BINARY_DIR}/exports.map")
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
        COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_LIST_DIR}/gen_exports.py ${DK2_V170_SRC} ${DK2_EXPORTS}
        DEPENDS
        ${DK2_V170_SRC}
        COMMENT "Generating exports.map"
)
add_custom_target(dll_exports DEPENDS ${DK2_EXPORTS})
install(FILES
        ${DK2_REFERENCES}
        ${DK2_STACK}
        ${DK2_EXPORTS}
        DESTINATION "${CMAKE_INSTALL_PREFIX}"
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Gy")  # Enable Function-Level Linking
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Gw")  # Optimize Global Data
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS-")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Gz")  # use __stdcall by default
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4477")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /OPT:REF")

add_subdirectory(utils)
add_subdirectory(dk2)
add_subdirectory(reimpl)
add_subdirectory(hooks)
add_subdirectory(patches)

option(DK2_DIR "Dungeon Keeper 2 directory")
if(DK2_DIR)
    message(STATUS "Dungeon Keeper 2 directory: ${DK2_DIR}")
    if(NOT EXISTS "${DK2_DIR}/DKII.EXE")
        message(FATAL_ERROR "\"${DK2_DIR}/DKII.EXE\" is not found")
    endif()
    set(DK2_DLL "${CMAKE_CURRENT_BINARY_DIR}/dk2.dll")
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
else()
    message(WARNING "You can specify Dungeon Keeper 2 dir with cmake flag -DDK2_DIR=\"D:/Games/Dungeon Keeper 2\"")
    set(DK2_DLL "")
endif()

add_subdirectory(3rdparty)


set(SOURCES
        main.cpp
)
if(REVERSE_MODE)
    enable_language(ASM_MASM)
    add_library(bootstrap_patcher SHARED
            ${SOURCES}
    )
    target_compile_definitions(bootstrap_patcher PRIVATE REVERSE_MODE=1)
else()
    add_executable(bootstrap_patcher WIN32
            ${SOURCES}
            ${DK2_DLL}
    )
endif()
add_dependencies(bootstrap_patcher dll_exports stack_map references_map)
target_include_directories(bootstrap_patcher PRIVATE include)
target_compile_definitions(bootstrap_patcher PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

target_link_libraries(bootstrap_patcher PRIVATE
        Dbghelp Shcore Comctl32
        win32_gui_layout
        dk2_mapping
        dk2_utils
        dk2_reimpl
        dk2_patches
        dk2_hooks
        gog_patch_dll
)

install(TARGETS bootstrap_patcher RUNTIME DESTINATION ".")

if(NOT REVERSE_MODE)
    add_subdirectory(launcher)
endif()
