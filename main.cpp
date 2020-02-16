#include <Game.hpp>

Game* game = NULL;

int main(){

    const uint16_t FPS = 60;
    const uint16_t frameDelay = 1000/FPS;

    uint32_t frameStart;
    int frameTime;

    game = new Game();
    game->init("2DGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, false);

    while(game->running()){
        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if(frameDelay > frameTime){
            SDL_Delay(frameDelay - frameTime);
        }
    }
    game->clean();
    return 0;
}