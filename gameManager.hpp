#pragma once

#include "helper.hpp"
#include "config.hpp"
#include "player.hpp"
#include "attacks.hpp"
#include "collider.hpp"
#include "levelManager.hpp"

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

    LevelManager levelManager;
    Player player;

    SDL_Texture* bullet_texture = nullptr;

    bool running = true;

    int init();

    void reset();

    void get_events();

    void update();

    void render();

    void quit();
};
