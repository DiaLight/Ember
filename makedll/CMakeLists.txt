
string (REPLACE "/RTC1" "" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
string (REPLACE "/EHsc" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS-")
add_executable(makedll makedll.cpp)
target_link_options(makedll PRIVATE /NODEFAULTLIB /ENTRY:main)
set_target_properties(makedll PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}")
