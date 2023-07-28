
add_library(dk2_reimpl STATIC
        SurfHashList__probablySort.cpp
        draw3dScene.cpp

        directx/directx_main.cpp

        directx/DirectDrawEnumerate/DirectDrawEnumerate_uses.cpp

        directx/DirectDrawCreate/DirectDrawCreate_uses.cpp
        directx/DirectDrawCreate/dk2dd_init.cpp
        directx/DirectDrawCreate/dk2dd/lpSurfaceDD/lpSurfaceDD_uses.cpp
        directx/DirectDrawCreate/dk2dd/dk2dd_uses.cpp
        directx/DirectDrawCreate/dk2dd/dk2dd_get/dk2dd_get_uses.cpp

        # DirectDrawCreate -> dk2dd -> dk2dd_get -> mydd_scene
        directx/mydd_scene/mydd_scene_uses.cpp
        directx/mydd_scene/mydd_devTexture/mydd_devTexture_uses.cpp

        )
target_include_directories(dk2_reimpl PUBLIC include)
target_compile_definitions(dk2_reimpl PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

target_link_libraries(dk2_reimpl PRIVATE
        lodepng
        dk2_utils
        dk2_symbols
        )

if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/dev")
    add_subdirectory(dev)
endif()
