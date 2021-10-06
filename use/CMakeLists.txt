cmake_minimum_required(VERSION 3.15)
project(mycurl CXX)

find_package(CURL REQUIRED)

add_executable(mycurl main.cpp)
target_link_libraries(mycurl CURL::libcurl)