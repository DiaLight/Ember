
string (REPLACE "/RTC1" "" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
string (REPLACE "/EHsc" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS-")
add_executable(makedll makedll.cpp)
set_target_properties(makedll PROPERTIES DEBUG_POSTFIX d)
target_link_options(makedll PRIVATE /NODEFAULTLIB /ENTRY:main)
target_compile_definitions(
        makedll PRIVATE
        EXPORTS_MAPPING=${CMAKE_CURRENT_LIST_DIR}/../mappings/exports.map
        REFERENCES_MAPPING=${CMAKE_CURRENT_LIST_DIR}/../mappings/references.map
)
