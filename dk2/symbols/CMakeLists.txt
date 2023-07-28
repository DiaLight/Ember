
include(sources.cmake)

add_library(dk2_symbols STATIC
        ${SOURCES}
        dk2_globals.cpp
        dk2_functions.cpp
        dk2_relink_refs.cpp
        dk2_relink.cpp
)
target_include_directories(dk2_symbols PUBLIC include)

target_link_libraries(dk2_symbols PRIVATE
        dk2_utils
        )
