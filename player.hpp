#pragma once
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

struct Player {
    float x = 100;
    float y = 100;
    float w = 20;
    float h = 20;

    float speed = 200;
    float dash = 50;

    SDL_FRect get_rect() const;
};