cmake_minimum_required(VERSION 3.6)
project(laba2)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES laba1v75.c)
add_executable(laba2 ${SOURCE_FILES})
target_link_libraries(laba2 m)
