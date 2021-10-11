cmake_minimum_required(VERSION 3.15)
project(atmserver CXX)

find_package(protobuf REQUIRED)

add_library(atmserver src/atmserver.cpp)
target_link_libraries(atmserver protobuf::protobuf)

set_target_properties(atmserver PROPERTIES PUBLIC_HEADER "src/atmserver.h")
install(TARGETS atmserver DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
