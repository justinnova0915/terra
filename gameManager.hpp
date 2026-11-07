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
#include <cmath>

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
        int curLives;
        int lives;
        SDL_FPoint playerCenter;
        float dt;
    };

    float radius = 50;

    float livesDuration = 2;
    float elapsed = 0;
    float liveSize = 10;

    HUDData hudData;

    const SDL_FRect box = {0, 0, 1920, 10};

    void init(SDL_Renderer* r) {
        renderer = r;
    }

    void update(HUDData h) {

        if (hudData.curLives == h.curLives + 1) {
            elapsed = 0;
        }
        hudData = h;

        elapsed += h.dt;
    }

    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
        SDL_FRect done = {box.x, box.y, 1920*hudData.songProgress, box.h};
        SDL_RenderFillRect(renderer, &done);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_FRect notDone = {box.x+1920*hudData.songProgress, box.y, 1920*(1-hudData.songProgress), box.h};
        SDL_RenderFillRect(renderer, &notDone);
        SDL_SetRenderDrawColor(renderer, 88, 180, 219, 255);

        if (elapsed < livesDuration) {
            for (int i = 0; i < hudData.lives; i++) {
                if (i < hudData.curLives) {
                    SDL_FRect ind = {hudData.playerCenter.x-liveSize/2+radius*std::cos(2*SDL_PI_F/hudData.lives*i - SDL_PI_F/2), hudData.playerCenter.y-liveSize/2+radius*std::sin(2*SDL_PI_F/hudData.lives*i - SDL_PI_F/2), liveSize, liveSize};
                    SDL_RenderFillRect(renderer, &ind);
                }
            }
        }
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
