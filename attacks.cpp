#include "attacks.hpp"

void Projectile::update(float dt) {
    float travel = dt * speed;
    pos.x += SDL_cos(theta) * travel;
    pos.y += SDL_sin(theta) * travel;
    if (pos.x < -r*2 || pos.x > Config::WINDOW_WIDTH || pos.y < -r*2 || pos.y > Config::WINDOW_HEIGHT) {
        alive = false;
    }
}

void Projectile::render(SDL_Renderer* renderer, SDL_Texture* bullet_texture) {
    if (!alive) {
        return;
    }
    SDL_SetTextureColorMod(bullet_texture, color.r, color.g, color.b);
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    const SDL_FRect projectile_circle = {pos.x-r, pos.y-r, r*2, r*2};
    SDL_RenderTexture(renderer, bullet_texture, nullptr, &projectile_circle);
}


void Emitter::update(float dt, std::vector<Projectile> &projectiles) {
    elapsed += dt;

    if (elapsed < start_timestamp || waves == 0) {
        alive = false;
    } else {
        alive = true;
    }

    if (alive && elapsed > interval) {
        elapsed = 0;
        waves -= 1;

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

void Beam::update(float dt) {
    elapsed += dt;
    if (elapsed > duration + start_timestamp || elapsed < start_timestamp) {
        alive = false;
    } else {
        alive = true;
    }

    SDL_Log(std::to_string(elapsed).c_str());

    if (alive) {
        if (anticipation_time > 0) {
            anticipation_time -= dt;
            if (pos_func) {
                pos = pos_func(0);
            }
            if (ang_func) {
                angle = ang_func(0);
            }
    
            current_color = warning_color;
    
        } else {    
            if (pos_func) {
                pos = pos_func(elapsed);
            }
            if (ang_func) {
                angle = ang_func(elapsed); 
            }
            if (len_func) {
                length = len_func(elapsed);
            }
    
            current_color = normal_color;
        }
    }
}

void Beam::render(SDL_Renderer* renderer) {

    if (!alive) {
        return;
    }
    
    float Fx = SDL_cos(angle) * length;
    float Fy = SDL_sin(angle) * length;
    float Px = -SDL_sin(angle) * width/2;
    float Py = SDL_cos(angle) * width/2;
    
    SDL_FPoint a = {pos.x+Px, pos.y+Py};
    SDL_FPoint b = {pos.x+Fx+Px, pos.y+Fy+Py};
    SDL_FPoint c = {pos.x+Fx-Px, pos.y+Fy-Py};
    SDL_FPoint d = {pos.x-Px, pos.y-Py};

    SDL_FColor fcolor = {
        .r = current_color.r/255.0f,
        .g = current_color.g/255.0f,
        .b = current_color.b/255.0f,
        .a = current_color.a/255.0f,
    };

    SDL_Vertex verts[4] = {
        {.position = a, .color = fcolor},
        {.position = b, .color = fcolor},
        {.position = c, .color = fcolor},
        {.position = d, .color = fcolor},
    };

    int indices[6] = {0, 1, 2, 2, 3, 0};

    SDL_RenderGeometry(renderer, nullptr, verts, 4, indices, 6);
}