set(TARGET tool_ThreadsStackTracer)

add_library(${TARGET} STATIC
        ThreadsStackTracer.cpp
        )
#target_include_directories(${TARGET} PUBLIC include)
target_link_libraries(${TARGET} PUBLIC
        dk2_reimpl
        dk2_utils
        )
