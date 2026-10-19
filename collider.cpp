#include "attacks.hpp"
#include "player.hpp"
#include "collider.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
#include <cmath>

namespace Collider {

    bool ctoc(Circle c1, Circle c2) {
        return (c1.x - c2.x)*(c1.x - c2.x) + (c1.y - c2.y)*(c1.y - c2.y) <= (c1.r + c2.r)*(c1.r + c2.r);
    }

    bool ltoc(Circle player, Line line) {
        float dist_ptos_x = player.x-line.x;
        float dist_ptos_y = player.y-line.y;
        float travel = SDL_clamp(dist_ptos_x*cos(line.angle) + dist_ptos_y*sin(line.angle), 0, line.l);
        
        SDL_FPoint projection = {line.x+travel*cos(line.angle), line.y+travel*sin(line.angle)};

        float dist_sq = (player.x-projection.x)*(player.x-projection.x)+(player.y-projection.y)*(player.y-projection.y);

        if (dist_sq <= (player.r+line.w/2)*(player.r+line.w/2)) {
            return true;
        } else {
            return false;
        }
    }

    bool ptoc() {
        return false;
    }

    bool update(Player player, std::vector<Projectile> projectiles, std::vector<Beam> beams) {
        Circle playerCollider = {
            .x = player.x+player.w/2,
            .y = player.y+player.l/2,
            .r = player.w
        };

        
        
        for (int i = 0; i < projectiles.size(); i++) {
            Circle projectileCollider = {
                .x = projectiles[i].pos.x,
                .y = projectiles[i].pos.y,
                .r = projectiles[i].r,
            };

            if (ctoc(playerCollider, projectileCollider)) {
                return true;
            }
        }

        for (int i = 0; i < beams.size(); i++) {

            if (beams[i].anticipation_time > 0) {
                continue;
            }

            Line beam_collider {
                .x = beams[i].pos.x,
                .y = beams[i].pos.y,
                .angle = beams[i].angle,
                .w = beams[i].width,
                .l = beams[i].length
            };

            if (ltoc(playerCollider, beam_collider)) {
                return true;
            }
        }

        return false;
    }
}