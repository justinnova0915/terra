#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
#include <functional>
#include <cmath>
#include "config.hpp"

void Render(SDL_Renderer* renderer, SDL_Color color, float x, float y, float width, float length, float angle) {
    
    float Fx = SDL_cos(angle) * length;
    float Fy = SDL_sin(angle) * length;
    float Px = -SDL_sin(angle) * width/2;
    float Py = SDL_cos(angle) * width/2;
    
    SDL_FPoint a = {x+Px, y+Py};
    SDL_FPoint b = {x+Fx+Px, y+Fy+Py};
    SDL_FPoint c = {x+Fx-Px, y+Fy-Py};
    SDL_FPoint d = {x-Px, y-Py};

    SDL_FColor fcolor = {
        .r = color.r/255.0f,
        .g = color.g/255.0f,
        .b = color.b/255.0f,
        .a = color.a/255.0f,
    };

    SDL_Vertex verts[4] = {
        {.position = a, .color = fcolor},
        {.position = b, .color = fcolor},
        {.position = c, .color = fcolor},
        {.position = d, .color = fcolor},
    };

    int indices[6] = {0, 1, 2, 2, 3, 0};

    SDL_RenderGeometry(renderer, nullptr, verts, 4, indices, 6);
}