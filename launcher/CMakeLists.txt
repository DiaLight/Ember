
string (REPLACE "/RTC1" "" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
string (REPLACE "/EHsc" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS-")
add_executable(launcher WIN32 launcher.cpp)
target_link_libraries(launcher Shcore Ddraw)
add_dependencies(launcher bootstrap_patcher makedll dll_exports stack_map references_map)
set_target_properties(launcher PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}")
