#pragma once

#include "config.hpp"
#include "helper.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
#include <functional>
#include <cmath>

struct Projectile {
    SDL_FPoint pos = {0,0};
    float r = 0;
    float theta = 0;
    SDL_Color color {.r=0, .g=0, .b=0, .a=0};
    float speed = 0;
    bool alive = true;
    void update(float dt);

    void render(SDL_Renderer* renderer, SDL_Texture* bullet_texture);
};

struct Emitter {
    SDL_FPoint pos = {0,0};
    float interval = 0;
    int waves = 0;
    int bullet_num = 0;
    float size = 0;

    float start_timestamp = 0;

    float speed = 0;

    float elapsed = 0;
    float angle = 0;
    float angle_increment = 0;
    float angle_spread = 0;

    SDL_Color color {.r=0, .g=0, .b=0, .a=0};

    std::function<SDL_FPoint(int wave)> pos_func = nullptr;
    std::function<float(int wave)> ang_func = nullptr;


    float alive = true;


    void update(float dt, std::vector<Projectile> &projectiles);
};

struct Beam {
    SDL_FPoint pos = {};
    float width = 0;
    float length = 0;
    float angle = 0;
    float elapsed = 0;
    float duration = 0;

    float start_timestamp = 0;

    float anticipation_time = 0;
    SDL_Color warning_color = {};
    SDL_Color normal_color = {};


    std::function<float(float elapsed)> ang_func = nullptr;
    std::function<SDL_FPoint(float elapsed)> pos_func = nullptr;
    std::function<float(float elapsed)> len_func = nullptr;

    SDL_Color current_color = {};

    bool alive = true;

    void update(float dt);

    void render(SDL_Renderer* renderer);
};