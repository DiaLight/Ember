
add_library(dk2_reimpl STATIC
        SurfHashList__probablySort.cpp
        draw3dScene.cpp
        dk2dd_init.cpp
        mydd_scene_init.cpp
        dd_misc.cpp
        SurfaceHolder.cpp
        )
target_include_directories(dk2_reimpl PUBLIC include)
target_compile_definitions(dk2_reimpl PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

target_link_libraries(dk2_reimpl PRIVATE
        lodepng
        dk2_utils
        dk2_mapping
        )

if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/dev")
    add_subdirectory(dev)
endif()
