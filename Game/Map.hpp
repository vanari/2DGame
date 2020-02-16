#pragma once
#include "Game.hpp"

class Map {

    public:
        Map();
        ~Map();

        void loadMap(int arr[20][25]);
        void drawMap();

    private:
        SDL_Rect src, dest;
        SDL_Texture* dirt;
        SDL_Texture* grass;
        SDL_Texture* water;

        int map[20][25]; // 640x800

};