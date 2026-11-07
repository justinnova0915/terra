#include "player.hpp"

SDL_FRect Player::get_rect() const {
    return SDL_FRect {x, y, w, l};
}

void Player::render(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_FRect player_rect = get_rect();
    SDL_RenderFillRect(renderer, &player_rect);
}

void Player::update(float dt, const bool* keys) {
    dashclock += dt;
    travel = dt * speed;

    if (state == PlayerState::HitCooldown) {
        cooldownElapsed -= dt;
        if (cooldownElapsed < 0) {
            state = PlayerState::Live;
            color = {88, 180, 219, 255};
        }
    }

    if (keys[SDL_SCANCODE_D]) {
        if (keys[SDL_SCANCODE_SPACE] && dashclock > dashcooldown) {
            x += dash;
            dashclock = 0;
        } else {
            x += travel;
        }
    }
    if (keys[SDL_SCANCODE_W]) {
        if (keys[SDL_SCANCODE_SPACE] && dashclock > dashcooldown) {
            y -= dash;
            dashclock = 0;
        } else {
            y -= travel;
        }
    }
    if (keys[SDL_SCANCODE_A]) {
        if (keys[SDL_SCANCODE_SPACE] && dashclock > dashcooldown) {
            x -= dash;
            dashclock = 0;
        } else {
            x -= travel;
        }
    }
    if (keys[SDL_SCANCODE_S]) {
        if (keys[SDL_SCANCODE_SPACE] && dashclock > dashcooldown) {
            y += dash;
            dashclock = 0;
        } else {
            y += travel;
        }
    }

    x = std::clamp(x, 0.0f, static_cast<float>(Config::WINDOW_WIDTH)-w);
    y = std::clamp(y, 0.0f, static_cast<float>(Config::WINDOW_HEIGHT)-l);
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

void Player::reset() {
    health = maxHealth;
    state = PlayerState::Live;
    cooldownElapsed = 0;
    x = default_x;
    y = default_y;
    color = {88, 180, 219, 255};
}