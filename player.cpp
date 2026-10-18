#include "player.hpp"
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

SDL_FRect Player::get_rect() const {
    return SDL_FRect {x, y, w, l};
}

void Player::update(float dt) {
    if (state == PlayerState::HitCooldown) {
        cooldownElapsed -= dt;
        
        if (cooldownElapsed < 0) {
            state = PlayerState::Live;
        }
    }
}

void Player::on_hit() {
    if (state == PlayerState::Live) {
        SDL_Log("Hit!");
        health--;
        state = PlayerState::HitCooldown;
        cooldownElapsed = cooldown;
    }
}