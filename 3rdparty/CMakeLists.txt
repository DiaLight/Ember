# Check if asio folder is empty and clone submodule if needed
if(NOT EXISTS "${CMAKE_CURRENT_LIST_DIR}/lodepng/lodepng.cpp")
    message(STATUS "LodePng not found, cloning it...")
    execute_process(COMMAND git submodule update --init -- 3rdparty/lodepng WORKING_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/..")
endif()

if(NOT TARGET lodepng)
    add_library(lodepng STATIC lodepng/lodepng.cpp)
    target_include_directories(lodepng PUBLIC lodepng)
endif()
