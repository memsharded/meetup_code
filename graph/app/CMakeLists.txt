cmake_minimum_required(VERSION 3.15)
project(app CXX)

find_package(chat CONFIG REQUIRED)
add_executable(app src/app.cpp src/main.cpp)
target_link_libraries(app chat::chat)

install(TARGETS app DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
