#pragma once

#include "helper.hpp"
#include "config.hpp"
#include "player.hpp"
#include "attacks.hpp"
#include "collider.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <string>
#include <vector>

struct Clock {

    float last = SDL_GetTicksNS();

    float tick();

    void reset();
};

struct GameManager {

    enum class GameState {
        Game,
        Menu,
        Death,
        Quit
    };

    Clock clock;
    float dt = 0;

    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    SDL_Event event;
    GameState state = GameState::Game;

    std::vector<Projectile> projectiles;
    std::vector<Emitter> emitters;
    std::vector<Beam> beams;
    Player player;

    SDL_Texture* bullet_texture = nullptr;

    bool running = true;
    
    Beam test {
        .pos = {1000, 500},
        .width = 50,
        .length = 3000,
        .angle = SDL_PI_F/2.0f,
        .duration = 10.0f,
        .anticipation_time = 1,
        .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100},
        .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255},
        .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);},
        .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};}
    };
    
    Emitter scatter{
        .pos = {1000, 500},
        .interval = 0.1,
        .waves = 100,
        .bullet_num = 5,
        .size = 5,
        .speed = 400,
        .angle_increment = 0.6,
        .angle_spread =  1,
        .color = {.r=255, .g=0, .b=0, .a=255}
    };
    
    Emitter spiral{
        .pos = {1000,500},
        .interval = 0.1,
        .waves = 100,
        .bullet_num = 1,
        .size = 10,
        .speed = 200,
        .angle_increment = 0.5,
        .color = {.r=0, .g=0, .b=255, .a=255}
    };
    
    Emitter bomb{
        .interval = 0.5,
        .waves = 100,
        .bullet_num = 16,
        .size = 5,
        .speed = 200,
        .angle = 0,
        .angle_spread = 5.89049f,
        .color = {.r=0, .g=0, .b=255, .a=255},
        .pos_func = [](int)->SDL_FPoint{return{static_cast<float>(SDL_rand(Config::WINDOW_WIDTH)), static_cast<float>(SDL_rand(Config::WINDOW_HEIGHT))};},
    };

    int init();

    void reset();

    void get_events();

    void update();

    void render();

    void quit();
};
