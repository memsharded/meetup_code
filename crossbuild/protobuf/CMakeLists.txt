cmake_minimum_required(VERSION 3.15)
project(protobuf CXX)

add_library(protobuf src/protobuf.cpp)
add_executable(protoc src/main.cpp)
target_link_libraries(protoc protobuf)

set_target_properties(protobuf PROPERTIES PUBLIC_HEADER "src/protobuf.h")

install(TARGETS protobuf DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )

install(TARGETS protoc DESTINATION "."
        RUNTIME DESTINATION bin
        )
