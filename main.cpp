#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <bits/stdc++.h>
#include "config.hpp"

using namespace std;

int main(int argc, char* argv[]) {

    if(!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("SDL Error: %s", SDL_GetError());
        return 1;
    }

    
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    if (!SDL_CreateWindowAndRenderer("game", Config::WINDOW_WIDTH, Config::WINDOW_HEIGHT, 0, &window, &renderer)) {
        SDL_Log("SDL Window Creation Error: %s", SDL_GetError());
        return 1;
    }
    
    SDL_Surface* bullet_bmp = SDL_LoadBMP("images.bmp");
    SDL_Texture* bullet_texture = SDL_CreateTextureFromSurface(renderer, bullet_bmp);
    SDL_DestroySurface(bullet_bmp);

    SDL_SetRenderVSync(renderer, 1);
    
    bool running = true;
    SDL_Event event;
    
    struct Player {
        float x = 100;
        float y = 100;
        float w = 20;
        float h = 20;

        float speed = 200;
        float dash = 50;

        SDL_FRect get_rect() const {
            return SDL_FRect {x, y, w, h};
        }
    };

    struct Projectile {
        float x = 0;
        float y = 0;
        float r = 0;
        float theta = 0;

        float speed = 0;

        bool alive = true;

        void update(float dt) {
            float travel = dt * speed;
            x += SDL_cos(theta) * travel;
            y += SDL_sin(theta) * travel;
            if (x < -r*2 || x > Config::WINDOW_WIDTH || y < -r*2 || y > Config::WINDOW_HEIGHT) {
                alive = false;
            }
        }

        void render(SDL_Renderer* renderer, SDL_Texture* bullet_texture) {
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
            const SDL_FRect projectile_circle = {x, y, r*2, r*2};
            SDL_RenderTexture(renderer, bullet_texture, nullptr, &projectile_circle);
        }
    };

    struct Emitter {
        float x = 0;
        float y = 0;
        float interval = 0;
        float waves = 0;
        float bullet_num = 0;
        float size = 0;

        float speed = 0;

        float elapsed = 0;
        float angle = 0;
        float angle_increment = 0;
        float angle_spread = 0;

        float alive = true;


        void update(float dt, vector<Projectile> &projectiles) {
            elapsed += dt;
            if (elapsed > interval) {
                elapsed = 0;
                waves -= 1;
                if (waves == 0) {
                    alive = false;
                }
                angle += angle_increment;

                for (int i = 0; i < bullet_num; i++) {
                    SDL_Log("spawning");
                    projectiles.push_back(Projectile {
                        .x = x,
                        .y = y,
                        .r = size,
                        .theta = bullet_num > 1 ? i*(angle_spread/(bullet_num-1)) - angle_spread/2 + angle : angle,
                        .speed = speed,
                        .alive = true
                    });
                }
            }
        }
    };
    
    vector<Projectile> projectiles;
    Emitter spiral{
        .x = 1000,
        .y = 500,
        .interval = 0.01,
        .waves = 10,
        .bullet_num = 1,
        .size = 10,
        .speed = 200,
        .angle_increment = 1
    };

    Player player;

    float last = 0;
    float dashclock = 0;
    float dashcooldown = 1;

    while (running) {

        // Clock
        float now = SDL_GetTicksNS();
        float dt = (now - last)/1000000000;
        last = now;
        dashclock += dt;
        
        // Events
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }
        }

        // Movement
        float travel = dt * player.speed;
        const bool* keys = SDL_GetKeyboardState(nullptr);
        
        if (keys[SDL_SCANCODE_D]) {
            if (keys[SDL_SCANCODE_SPACE] && dashclock > dashcooldown) {
                player.x += player.dash;
                dashclock = 0;
            } else {
                player.x += travel;
            }
        }
        if (keys[SDL_SCANCODE_W]) {
            if (keys[SDL_SCANCODE_SPACE] && dashclock > dashcooldown) {
                player.y -= player.dash;
                dashclock = 0;
            } else {
                player.y -= travel;
            }
        }
        if (keys[SDL_SCANCODE_A]) {
            if (keys[SDL_SCANCODE_SPACE] && dashclock > dashcooldown) {
                player.x -= player.dash;
                dashclock = 0;
            } else {
                player.x -= travel;
            }
        }
        if (keys[SDL_SCANCODE_S]) {
            if (keys[SDL_SCANCODE_SPACE] && dashclock > dashcooldown) {
                player.y += player.dash;
                dashclock = 0;
            } else {
                player.y += travel;
            }
        }
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);

        for (int i = 0; i < projectiles.size(); i++) {
            if (!projectiles[i].alive) {
                projectiles[i] = *(projectiles.end()-1);
                projectiles.pop_back();
            } else {
                projectiles[i].update(dt);
                projectiles[i].render(renderer, bullet_texture);
            }
        }

        spiral.update(dt, projectiles);
        
        // Drawing

        SDL_SetRenderDrawColor(renderer, 88, 180, 219, 255);
        SDL_FRect player_rect = player.get_rect();
        SDL_RenderFillRect(renderer, &player_rect);

        SDL_RenderPresent(renderer);
    }
    

    // Clean-up
    SDL_DestroyTexture(bullet_texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}



/* ANGLE SPREAD FORMULA
n = nth bullet
t_b = total bullet
t = total angle
θ = current angle

A(n) = n*(t/(t_b-1)) - t/2 + θ
A(0) = θ when t_b = 1 

*/