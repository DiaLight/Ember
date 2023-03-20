
add_library(win32_gui_layout STATIC win32_gui_layout.cpp)
target_include_directories(win32_gui_layout PUBLIC include)
target_include_directories(win32_gui_layout PUBLIC ${CMAKE_CURRENT_LIST_DIR})
