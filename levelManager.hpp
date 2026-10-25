#pragma once

#include <vector>

#include "attacks.hpp"

inline Beam test {
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

inline Emitter scatter{
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

inline Emitter spiral{
    .pos = {1000,500},
    .interval = 0.1,
    .waves = 100,
    .bullet_num = 1,
    .size = 10,
    .speed = 200.
    .angle_increment = 0.5,
    .color = {.r=0, .g=0, .b=255, .a=255}
};

inline Emitter bomb{
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

struct Level {
    std::vector<Emitter> emitters = {};
    std::vector<Projectile> projectiles = {};
    std::vector<Beam> beams = {};

    float duration = 0;

    void reset() {
        projectiles.clear();
        emitters = {bomb, scatter, spiral};
        beams = {test};
    }
};

struct LevelManager {
    int levelIndex;

    std::vector<Level> levels = {{{bomb, scatter, spiral}, {}, {test}, 100.0f}};

    void load(int index) {
        levelIndex = index;
        levels[index].reset();
    }
    
    void update(float dt) {
        Level& currentLevel = levels[levelIndex];

        for (int i = 0; i < currentLevel.projectiles.size();) {
            if (!currentLevel.projectiles[i].alive) {
                currentLevel.projectiles[i] = *(currentLevel.projectiles.end()-1);
                currentLevel.projectiles.pop_back();
            } else {
                currentLevel.projectiles[i].update(dt);
                i++;
            }
        }
        
        for (int i = 0; i < currentLevel.emitters.size(); i++) {
            currentLevel.emitters[i].update(dt, currentLevel.projectiles);
        }
        
        for (int i = 0; i < currentLevel.beams.size(); i++) {
            currentLevel.beams[i].update(dt);
        }
    }

    void render(SDL_Renderer *renderer, SDL_Texture *bullet_texture) {
        Level& currentLevel = levels[levelIndex];

        for (int i = 0; i < currentLevel.projectiles.size(); i++) {
            currentLevel.projectiles[i].render(renderer, bullet_texture);
        }
    
        for (int i = 0; i < currentLevel.beams.size(); i++) {
            currentLevel.beams[i].render(renderer);
        }
    }
};