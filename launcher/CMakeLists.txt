
string (REPLACE "/RTC1" "" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
string (REPLACE "/EHsc" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS-")
add_executable(launcher WIN32
        launcher.cpp
        layout.cpp
        registry.cpp
        create_process.cpp
        status.cpp
        utils.cpp
        dd_modes.cpp
)
target_include_directories(launcher PRIVATE include)
target_link_libraries(launcher Shcore Ddraw win32_gui_layout)
add_dependencies(launcher bootstrap_patcher makedll dll_exports stack_map references_map)
set_target_properties(launcher PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}")
