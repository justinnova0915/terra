#pragma once
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

struct Player {
    float x = 100;
    float y = 100;
    float w = 20;
    float l = 20;

    SDL_Color color = {88, 180, 219, 255};

    float speed = 200;
    float dash = 100;
    float health = 5;

    const float cooldown = 2;
    float cooldownElapsed = 0;

    enum class PlayerState {
        Live,
        HitCooldown,
    };

    PlayerState state = PlayerState::Live;

    SDL_FRect get_rect() const;

    void render(SDL_Renderer* renderer);
    
    void update(float dt);

    void on_hit();
};