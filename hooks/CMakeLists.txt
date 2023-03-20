
add_library(dk2_hooks STATIC
        window.cpp
        game_loop.cpp
        direct_input.cpp
#        api.cpp
        main.cpp
        )
target_include_directories(dk2_hooks PUBLIC include)
target_compile_definitions(dk2_hooks PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

target_link_libraries(dk2_hooks PRIVATE
        dk2_utils
        dk2_mapping
        )
