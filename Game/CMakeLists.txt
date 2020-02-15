add_library(
    Game    STATIC
    Game.hpp
    Game.cpp
)

target_include_directories(Game PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")