#pragma once

#include "attacks.hpp"
#include "player.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
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
    
    bool ctoc(Circle c1, Circle c2);

    bool ltoc(Circle player, Line line);

    bool ptoc();

    bool update(Player player, std::vector<Projectile> projectiles, std::vector<Beam> beams);
}