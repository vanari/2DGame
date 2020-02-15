#include <Game.hpp>

Game* game = NULL;

int main(){
    game = new Game();
    while(game->running()){
        game->handleEvents();
        game->update();
        game->render();
    }
    game->clean();
    return 0;
}