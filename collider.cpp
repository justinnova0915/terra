#include "config.hpp"
#include "attacks.hpp"
#include "player.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
#include <functional>
#include <cmath>

namespace Collider {

    struct Circle {
        float x = 0;
        float y = 0;
        float r = 0;
    };

    struct Line {
        float x = 0;
        float y = 0;

        float angle = 0;

        float w = 0;
        float l = 0;
    };
    
    bool ctoc(Circle c1, Circle c2) {
        if (sqrt((c1.x - c2.x) + (c1.y - c2.y)) < (c1.r + c2.r)) {
            return false;
        }
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
}