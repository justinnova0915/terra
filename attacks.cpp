#include "config.hpp"
#include "helper.hpp"
#include "attacks.hpp"
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
#include <functional>
#include <cmath>

void Projectile::update(float dt) {
    float travel = dt * speed;
    pos.x += SDL_cos(theta) * travel;
    pos.y += SDL_sin(theta) * travel;
    if (pos.x < -r*2 || pos.x > Config::WINDOW_WIDTH || pos.y < -r*2 || pos.y > Config::WINDOW_HEIGHT) {
        alive = false;
    }
}

void Projectile::render(SDL_Renderer* renderer, SDL_Texture* bullet_texture) {
    SDL_SetTextureColorMod(bullet_texture, color.r, color.g, color.b);
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    const SDL_FRect projectile_circle = {pos.x-r, pos.y-r, r*2, r*2};
    SDL_RenderTexture(renderer, bullet_texture, nullptr, &projectile_circle);
}


void Emitter::update(float dt, std::vector<Projectile> &projectiles) {
    elapsed += dt;
    if (elapsed > interval) {
        elapsed = 0;
        waves -= 1;
        if (waves == 0) {
            alive = false;
        }

        if (pos_func) {
            pos = pos_func(waves); 
        }
        if (ang_func) {
            angle = ang_func(waves);
        }

        angle += angle_increment;

        for (int i = 0; i < bullet_num; i++) {
            projectiles.push_back(Projectile {
                .pos = pos,
                .r = size,
                .theta = bullet_num > 1 ? i*(angle_spread/(bullet_num-1)) - angle_spread/2 + angle : angle,
                .color = color,
                .speed = speed,
                .alive = true
            });
        }
    }
}

void Beam::update(SDL_Renderer* renderer, float dt) {
    if (anticipation_time > 0) {
        anticipation_time -= dt;
        if (pos_func) {
            pos = pos_func(0);
        }
        if (ang_func) {
            angle = ang_func(0);
        }

        Render(renderer, warning_color, pos.x, pos.y, width, length, angle);
    } else {
        elapsed += dt;

        if (elapsed > duration) {
            alive = false;
        }
        if (pos_func) {
            pos = pos_func(elapsed);
        }
        if (ang_func) {
            angle = ang_func(elapsed); 
        }
        if (len_func) {
            length = len_func(elapsed);
        }

        Render(renderer, color, pos.x, pos.y, width, length, angle);
    }
}