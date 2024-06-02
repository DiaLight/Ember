cmake_minimum_required(VERSION 3.20)
project(ember)

set(CMAKE_CXX_STANDARD 20)

if(MSVC)
    add_compile_options(/we4715)
endif()

option(REVERSE_MODE "Build bootstrap_patcher as dll for dynamic load by debugger")
option(ALLOW_REPLACE_PATCH_DLL "Replace PATCH.dll after build in REVERSE_MODE")
option(DK2_DIR "Dungeon Keeper 2 directory")
option(EMBED_MAPPINGS "Embed mappings into exe" ON)

find_package(Python REQUIRED)

set(DK2_V170_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/v170.map")
set(DK2_REFERENCES_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/references.map")
set(DK2_STACK_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/dk2_stack.map")
set(WEANETR_STACK_SRC "${CMAKE_CURRENT_LIST_DIR}/mappings/weanetr_stack.map")

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
set(DK2_REFERENCES "${CMAKE_CURRENT_BINARY_DIR}/references.map")
set(DK2_STACK "${CMAKE_CURRENT_BINARY_DIR}/dk2_stack.map")
set(WEANETR_STACK "${CMAKE_CURRENT_BINARY_DIR}/weanetr_stack.map")
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
        COMMENT "Copy dk2_stack.map"
)
add_custom_target(dk2_stack_map DEPENDS ${DK2_STACK})
add_custom_command(
        OUTPUT ${WEANETR_STACK}
        COMMAND ${CMAKE_COMMAND} -E copy_if_different ${WEANETR_STACK_SRC} ${WEANETR_STACK}
        DEPENDS ${WEANETR_STACK_SRC}
        COMMENT "Copy weanetr_stack.map"
)
add_custom_target(weanetr_stack_map DEPENDS ${WEANETR_STACK})
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
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /MAP")

add_subdirectory(utils)
add_subdirectory(dk2)
add_subdirectory(reimpl)
#add_subdirectory(tools)
add_subdirectory(hooks)
add_subdirectory(patches)

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

enable_language(RC)
set(SOURCES
        main.cpp
)
if(REVERSE_MODE)
    enable_language(ASM_MASM)
    add_library(bootstrap_patcher SHARED
            ${SOURCES}
    )
    target_compile_definitions(bootstrap_patcher PRIVATE REVERSE_MODE=1)
    if(ALLOW_REPLACE_PATCH_DLL)
        if(DK2_DIR)
            if(NOT EXISTS "${DK2_DIR}/PATCH_orig.dll")
                message("save original copy of PATCH.dll")
#                file(COPY_FILE "${DK2_DIR}/PATCH.dll" "${DK2_DIR}/PATCH_orig.dll")
                file(RENAME "${DK2_DIR}/PATCH.dll" "${DK2_DIR}/PATCH_orig.dll")
            endif()
            add_custom_command(TARGET bootstrap_patcher POST_BUILD
                    COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    $<TARGET_FILE:bootstrap_patcher>
                    "${DK2_DIR}/PATCH.dll"
            )
        else()
            message(FATAL_ERROR "DK2_DIR is not specified")
        endif()
    endif()
else()
    add_executable(bootstrap_patcher
            ${SOURCES}
            ${DK2_DLL}
    )
endif()
add_dependencies(bootstrap_patcher dll_exports dk2_stack_map weanetr_stack_map references_map)
target_include_directories(bootstrap_patcher PRIVATE include)
target_compile_definitions(bootstrap_patcher PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

target_link_libraries(bootstrap_patcher PRIVATE
        Dbghelp Shcore Comctl32
        win32_gui_layout
        dk2_symbols
        dk2_utils
        dk2_reimpl
        dk2_patches
        dk2_hooks
        gog_patch_dll
#        reimpl_directx12
#        test_opengl
#        tool_ThreadsStackTracer
)

install(TARGETS bootstrap_patcher RUNTIME DESTINATION ".")

if(NOT REVERSE_MODE)
    add_subdirectory(launcher)
endif()

if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/dev")
    add_subdirectory(dev)
endif()


if(EMBED_MAPPINGS)
    set(DK2_RES "${CMAKE_CURRENT_BINARY_DIR}/mappings.res")
    set(DK2_RC "${CMAKE_CURRENT_BINARY_DIR}/mappings.rc")
    file(WRITE ${DK2_RC} "
#include \"embed_resources.h\"
IDR_REFERENCES TEXT \"references.map\"
IDR_DK2_STACK TEXT \"dk2_stack.map\"
IDR_WEANETR_STACK TEXT \"weanetr_stack.map\"
    ")
    add_custom_command(OUTPUT mappings.res
            COMMAND ${CMAKE_RC_COMPILER}
            /y  # Don't warn if there are duplicate control ID's
            /I ${CMAKE_CURRENT_LIST_DIR}/utils
            /fo ${DK2_RES}
            ${DK2_RC}
            DEPENDS
            ${DK2_RC} ${DK2_REFERENCES} ${DK2_STACK} ${CMAKE_CURRENT_LIST_DIR}/utils/embed_resources.h
            )
    target_sources(bootstrap_patcher PRIVATE ${DK2_RES})
    target_link_libraries(bootstrap_patcher PRIVATE ${DK2_RES})
    target_compile_definitions(bootstrap_patcher PRIVATE EMBED_MAPPINGS=1)
endif()

