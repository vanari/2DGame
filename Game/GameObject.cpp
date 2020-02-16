#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* textureSheet, SDL_Renderer* ren, int x, int y){
    renderer = ren;
    objTexture = TextureManager::LoadTexture(textureSheet, ren);
    ypos = y;
    xpos = x;
}

void GameObject::update(){
    xpos++;
    ypos++;

    srcR.h = 32;
    srcR.w = 32;
    srcR.x = 0;
    srcR.y = 0;

    destR.x = xpos;
    destR.y = ypos;
    destR.h = srcR.h * 2;
    destR.w = srcR.w * 2;

}

void GameObject::render(){
    SDL_RenderCopy(renderer, objTexture, &srcR, &destR);
}