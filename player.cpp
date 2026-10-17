#include "player.hpp"
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

SDL_FRect Player::get_rect() const {
    return SDL_FRect {x, y, w, l};
}