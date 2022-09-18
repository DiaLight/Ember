
enable_language(RC)

string (REPLACE "/RTC1" "" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
string (REPLACE "/EHsc" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS-")

file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/unpacker.rc" CONTENT "
REFERENCES  MAP  \"${DK2_REFERENCES}\"
STACK  MAP  \"${DK2_STACK}\"
EXPORTS  MAP  \"${DK2_EXPORTS}\"
MAKEDLL  EXE  \"$<TARGET_FILE:makedll>\"
BOOTSTRAP_PATCHER  EXE  \"$<TARGET_FILE:bootstrap_patcher>\"
LAUNCHER  EXE  \"$<TARGET_FILE:launcher>\"

")

add_custom_command(OUTPUT unpacker.res
        COMMAND ${CMAKE_RC_COMPILER}
        /I ${CMAKE_CURRENT_LIST_DIR}
        /fo ${CMAKE_CURRENT_BINARY_DIR}/unpacker.res
        ${CMAKE_CURRENT_BINARY_DIR}/unpacker.rc
        DEPENDS
        ${DK2_REFERENCES}
        ${DK2_STACK}
        ${DK2_EXPORTS}
        makedll bootstrap_patcher launcher
        ${CMAKE_CURRENT_BINARY_DIR}/unpacker.rc
)

add_executable(unpacker WIN32 unpacker.cpp unpacker.res)
target_link_libraries(unpacker ${CMAKE_CURRENT_BINARY_DIR}/unpacker.res)
set_target_properties(unpacker PROPERTIES DEBUG_POSTFIX d)
