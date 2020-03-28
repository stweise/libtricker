cmake_minimum_required (VERSION 2.8.11)
project (HELLO)
add_library(demo SHARED libdemo.c)
add_executable(main.x main.c)
target_link_libraries(main.x demo)

add_definitions(-D_GNU_SOURCE)
add_library(tricker SHARED libtricker.c)
target_link_libraries(tricker dl)
