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
#include <SDL3_ttf/SDL_ttf.h>
#include <string>
#include <vector>

struct Clock {
    float time = 0;
    float last = SDL_GetTicks();

    float tick();

    void reset();
};

struct HUD {

    SDL_Renderer* renderer;

    struct HUDData {
        float songProgress;
    };

    const SDL_FRect box = {0, 0, 1920, 20};

    void init(SDL_Renderer* r) {
        renderer = r;
    }

    void update(HUDData hudData) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
        SDL_FRect done = {box.x, box.y, 1920*hudData.songProgress, box.h};
        SDL_RenderFillRect(renderer, &done);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_FRect notDone = {box.x, 1920*hudData.songProgress, 1920*(1-hudData.songProgress), box.h};
        SDL_RenderFillRect(renderer, &notDone);
    }
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

    struct GameResult {
        enum class Action {
            None,
            Pause
        };

        Action action = Action::None;
    };

    HUD hud;

    GameResult gameResult;

    SDL_Renderer* renderer = nullptr;

    GameState state = GameState::Game;

    LevelManager levelManager;
    Player player;

    SDL_Texture* bullet_texture = nullptr;

    Audio audio;

    bool running = true;

    int init(SDL_Renderer* r, Audio a);

    void reset(int song);

    void get_event(SDL_Event event);

    void update();

    void render_scene();

    void render();

    void quit();
};
