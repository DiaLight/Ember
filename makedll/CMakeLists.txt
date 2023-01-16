
add_executable(makedll makedll.cpp)
set_target_properties(makedll PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/..")

install(TARGETS makedll RUNTIME DESTINATION ".")
