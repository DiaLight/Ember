
include(sources.cmake)

file(GLOB SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)
foreach(FILE ${SRC_FILES})
    message("${FILE}")
    SET_SOURCE_FILES_PROPERTIES("${FILE}" PROPERTIES COMPILE_FLAGS /Od)
endforeach()

add_library(dk2_mapping STATIC
        ${SOURCES}
        dk2_globals.cpp
        dk2_functions.cpp
        dk2_relink_refs.cpp
        dk2_relink.cpp
)
target_include_directories(dk2_mapping PUBLIC include)
target_compile_definitions(dk2_mapping PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)

target_link_libraries(dk2_mapping PRIVATE
        dk2_utils
        )
