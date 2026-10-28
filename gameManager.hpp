#pragma once

#include "helper.hpp"
#include "config.hpp"
#include "player.hpp"
#include "attacks.hpp"
#include "collider.hpp"
#include "levelManager.hpp"
#include "audio.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <string>
#include <vector>

struct Clock {
    float time = 0;
    float last = SDL_GetTicks();

    float tick();

    void reset();
};

struct GameManager {

    enum class GameState {
        Game,
        Menu,
        Death,
        Clear
    };

    Clock clock;
    float dt = 0;
    float offset = 0.0f;

    SDL_Renderer* renderer = nullptr;

    GameState state = GameState::Game;

    LevelManager levelManager;
    Player player;

    SDL_Texture* bullet_texture = nullptr;

    Audio audio = {};

    bool running = true;

    int init(SDL_Renderer* r);

    void reset();

    void get_event(SDL_Event event);

    void update();

    void render();

    void quit();
};
