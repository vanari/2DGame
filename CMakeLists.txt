cmake_minimum_required(VERSION 3.16)
project(2DGame VERSION 1.0.0)

include(FindPkgConfig)
pkg_search_module(SDL2 REQUIRED sdl2)
pkg_search_module(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS})

add_subdirectory(Game)

add_executable(2DGame main.cpp)
target_link_libraries(2DGame PRIVATE ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES} Game)