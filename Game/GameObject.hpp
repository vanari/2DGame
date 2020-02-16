#pragma once
#include "Game.hpp"

class GameObject {

public:
    GameObject(const char* textureSheet, int x, int y);
    ~GameObject();

    void update();
    void render();

private:
    uint32_t xpos = 0;
    uint32_t ypos = 0;

    SDL_Texture* objTexture;
    SDL_Rect srcR, destR;

};