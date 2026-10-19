#include "player.hpp"
#include <string>
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

SDL_FRect Player::get_rect() const {
    return SDL_FRect {x, y, w, l};
}

void Player::render(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_FRect player_rect = get_rect();
    SDL_RenderFillRect(renderer, &player_rect);
}

void Player::update(float dt) {
    if (state == PlayerState::HitCooldown) {
        cooldownElapsed -= dt;
        if (cooldownElapsed < 0) {
            state = PlayerState::Live;
            color = {88, 180, 219, 255};
        }
    }
}

void Player::on_hit() {
    if (state == PlayerState::Live) {
        SDL_Log("Hit!");
        color = {88, 180, 219, 100};
        health--;
        state = PlayerState::HitCooldown;
        cooldownElapsed = cooldown;
    }
}