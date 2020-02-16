add_library(
    Game    STATIC
    Game.hpp
    Game.cpp
    TextureManager.cpp
    TextureManager.hpp
    GameObject.hpp
    GameObject.cpp
    Map.hpp
    Map.cpp
)

target_include_directories(Game PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")