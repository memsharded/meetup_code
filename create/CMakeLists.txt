cmake_minimum_required(VERSION 3.15)
project(hello CXX)

add_library(hello src/hello.cpp)

set_target_properties(hello PROPERTIES PUBLIC_HEADER "src/hello.h")
install(TARGETS hello DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
