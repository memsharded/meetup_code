cmake_minimum_required(VERSION 3.15)
project(chat CXX)

find_package(hello CONFIG REQUIRED)
add_library(chat src/chat.cpp)
target_link_libraries(chat hello::hello)

set_target_properties(chat PROPERTIES PUBLIC_HEADER "src/chat.h")
install(TARGETS chat DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
