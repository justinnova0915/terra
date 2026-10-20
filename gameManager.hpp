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

    float tick() {
        float now = SDL_GetTicksNS();
        float dt = (now - last)/1000000000;
        last = now;
        return dt;
    }

    void reset() {
        last = SDL_GetTicksNS();
    }
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
        .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F*2, SDL_PI_F*2);},
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

    int init() {
        if(!SDL_Init(SDL_INIT_VIDEO)) {
            SDL_Log("SDL Error: %s", SDL_GetError());
            return 1;
        }
        
        if (!SDL_CreateWindowAndRenderer("game", Config::WINDOW_WIDTH, Config::WINDOW_HEIGHT, 0, &window, &renderer)) {
            SDL_Log("SDL Window Creation Error: %s", SDL_GetError());
            return 1;
        }
        
        std::string img_path = Helper::get_resource_path("Assets/images.bmp");    
        SDL_Surface* raw_bmp = SDL_LoadBMP(img_path.c_str());
        if (!raw_bmp) {
            SDL_Log("SDL Image Loading Error: %s", SDL_GetError());
            return 1;
        }
        
        SDL_Surface* bullet_bmp = SDL_ConvertSurface(raw_bmp, SDL_PIXELFORMAT_RGB24);
        SDL_DestroySurface(raw_bmp);
        Uint32 colorkey = SDL_MapRGB(
            SDL_GetPixelFormatDetails(bullet_bmp->format),
            nullptr,
            0,0,0
        );
        SDL_SetSurfaceColorKey(bullet_bmp, true, colorkey);
        bullet_texture = SDL_CreateTextureFromSurface(renderer, bullet_bmp);
        SDL_DestroySurface(bullet_bmp);
        SDL_SetTextureBlendMode(bullet_texture, SDL_BLENDMODE_BLEND);
        SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
        
        SDL_SetRenderVSync(renderer, 1);
        
        return 0;
    }

    void reset() {
        player.reset();
        projectiles.clear();
        emitters = {bomb, scatter, spiral};
        beams = {test};
    }

    void get_events() {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                state = GameState::Quit;
            }
        }
    }

    void update() {
        dt = clock.tick();
        const bool* keys = SDL_GetKeyboardState(nullptr);

        switch (state) {
            case GameState::Game:

                if (player.health <= 0) {
                    state = GameState::Death;
                }

                for (int i = 0; i < projectiles.size();) {
                    if (!projectiles[i].alive) {
                        projectiles[i] = *(projectiles.end()-1);
                        projectiles.pop_back();
                    } else {
                        projectiles[i].update(dt);
                        i++;
                    }
                }
                
                for (int i = 0; i < emitters.size();) {
                    if (!emitters[i].alive) {
                        emitters[i] = *(emitters.end()-1);
                        emitters.pop_back();
                    } else {
                        emitters[i].update(dt, projectiles);
                        i++;
                    }
                }
                
                for (int i = 0; i < beams.size();) {
                    if (!beams[i].alive) {
                        beams[i] = *(beams.end()-1);
                        beams.pop_back();
                    } else {
                        beams[i].update(dt);
                        i++;
                    }
                }

                player.update(dt);
                switch (player.state) {
                    case Player::PlayerState::Live:
                        if (Collider::update(player, projectiles, beams)) {
                            player.on_hit();
                        }
                        break;
                    case Player::PlayerState::HitCooldown:
                        break;
                }
                break;
        }
    }

    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        player.render(renderer);

        for (int i = 0; i < projectiles.size(); i++) {
            projectiles[i].render(renderer, bullet_texture);
        }
        
        for (int i = 0; i < beams.size(); i++) {
            beams[i].render(renderer);
        }
        SDL_RenderPresent(renderer);
    }

    void quit() {
        SDL_DestroyTexture(bullet_texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);

        SDL_Quit();
    }
};
