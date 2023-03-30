
add_subdirectory(win32_gui_layout)
add_subdirectory(makedll)

if(NOT REVERSE_MODE)
    add_subdirectory(unpacker)
endif()


add_library(dk2_utils STATIC
        stacktrace.cpp
        stacktrace_window.cpp
        parse.cpp
#        Buf.cpp
        patch.cpp
        stdex.cpp
        dk2_info.cpp
        xrefs.cpp
        reversemode_mimicry.cpp
        embed_resources.cpp
        )
target_include_directories(dk2_utils PUBLIC include)
target_compile_definitions(dk2_utils PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

target_link_libraries(dk2_utils PRIVATE
        win32_gui_layout
        )

if(REVERSE_MODE)
    target_compile_definitions(dk2_utils PRIVATE REVERSE_MODE=1)
endif()
if(EMBED_MAPPINGS)
    target_compile_definitions(dk2_utils PRIVATE EMBED_MAPPINGS=1)
endif()
