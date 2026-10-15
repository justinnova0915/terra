#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
#include <functional>
#include <cmath>
#include "config.hpp"

using namespace std;

void DrawRect(SDL_Renderer* renderer, SDL_Color color, float x, float y, float width, float length, float angle);

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
    SDL_FPoint pos = {0,0};
    float r = 0;
    float theta = 0;
    SDL_Color color {.r=0, .g=0, .b=0, .a=0};

    float speed = 0;
    bool alive = true;

    void update(float dt) {
        float travel = dt * speed;
        pos.x += SDL_cos(theta) * travel;
        pos.y += SDL_sin(theta) * travel;
        if (pos.x < -r*2 || pos.x > Config::WINDOW_WIDTH || pos.y < -r*2 || pos.y > Config::WINDOW_HEIGHT) {
            alive = false;
        }
    }

    void render(SDL_Renderer* renderer, SDL_Texture* bullet_texture) {
        SDL_SetTextureColorMod(bullet_texture, color.r, color.g, color.b);
        SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
        const SDL_FRect projectile_circle = {pos.x-r, pos.y-r, r*2, r*2};
        SDL_RenderTexture(renderer, bullet_texture, nullptr, &projectile_circle);
    }
};

struct Emitter {
    SDL_FPoint pos = {0,0};
    float interval = 0;
    int waves = 0;
    int bullet_num = 0;
    float size = 0;

    float speed = 0;

    float elapsed = 0;
    float angle = 0;
    float angle_increment = 0;
    float angle_spread = 0;

    SDL_Color color {.r=0, .g=0, .b=0, .a=0};

    function<SDL_FPoint(int wave)> pos_func = nullptr;
    function<float(int wave)> ang_func = nullptr;


    float alive = true;


    void update(float dt, vector<Projectile> &projectiles) {
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
};

struct Beam {
    SDL_FPoint pos = {};
    float width = 0;
    float length = 0;
    float angle = 0;
    float elapsed = 0;
    float duration = 0;

    float anticipation_time = 0;
    SDL_Color warning_color = {};


    function<float(float elapsed)> ang_func = nullptr;
    function<SDL_FPoint(float elapsed)> pos_func = nullptr;
    function<float(float elapsed)> len_func = nullptr;

    SDL_Color color = {};

    bool alive = true;

    void update(SDL_Renderer* renderer, float dt) {
        if (anticipation_time > 0) {
            anticipation_time -= dt;
            if (pos_func) {
                pos = pos_func(0);
            }
            DrawRect(renderer, warning_color, pos.x, pos.y, width, length, angle);
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

            DrawRect(renderer, color, pos.x, pos.y, width, length, angle);
        }
    }
};

void DrawRect(SDL_Renderer* renderer, SDL_Color color, float x, float y, float width, float length, float angle) {
    
    float Fx = SDL_cos(angle) * length;
    float Fy = SDL_sin(angle) * length;
    float Px = -SDL_sin(angle) * width/2;
    float Py = SDL_cos(angle) * width/2;
    
    SDL_FPoint a = {x+Px, y+Py};
    SDL_FPoint b = {x+Fx+Px, y+Fy+Py};
    SDL_FPoint c = {x+Fx-Px, y+Fy-Py};
    SDL_FPoint d = {x-Px, y-Py};

    SDL_FColor fcolor = {
        .r = color.r/255.0f,
        .g = color.g/255.0f,
        .b = color.b/255.0f,
        .a = color.a/255.0f,
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
    
    SDL_Surface* raw_bmp = SDL_LoadBMP("images.bmp");
    if (!raw_bmp) {
        SDL_Log("SDL Image Loading Error: %s", SDL_GetError());
    }
    SDL_Surface* bullet_bmp = SDL_ConvertSurface(raw_bmp, SDL_PIXELFORMAT_RGB24);
    SDL_DestroySurface(raw_bmp);
    Uint32 colorkey = SDL_MapRGB(
        SDL_GetPixelFormatDetails(bullet_bmp->format),
        nullptr,
        0,0,0
    );
    SDL_SetSurfaceColorKey(bullet_bmp, true, colorkey);

    SDL_Texture* bullet_texture = SDL_CreateTextureFromSurface(renderer, bullet_bmp);
    SDL_DestroySurface(bullet_bmp);

    SDL_SetTextureBlendMode(bullet_texture, SDL_BLENDMODE_BLEND);
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);

    SDL_SetRenderVSync(renderer, 1);
    
    bool running = true;
    SDL_Event event;
    

    vector<Projectile> projectiles;
    vector<Emitter> emitters;
    vector<Beam> beams;
    Player player;

    Beam test {
        .pos = {1000, 500},
        .width = 50,
        .length = 3000,
        .angle = SDL_PI_F/2.0f,
        .duration = 10.0f,
        .anticipation_time = 1,
        .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100},
        .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F*2, SDL_PI_F*2);},
        .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};},
        .color = {.r = 255, .g = 0, .b = 0, .a = 255}
    };

    Emitter scatter{
        .pos = {1000, 500},
        .interval = 0.1,
        .waves = 100,
        .bullet_num = 5,
        .size = 5,
        .speed = 400,
        .angle_increment = 0.6,
        .angle_spread =  1,
        .color = {.r=255, .g=0, .b=0, .a=255}
    };
    
    Emitter spiral{
        .pos = {1000,500},
        .interval = 0.1,
        .waves = 100,
        .bullet_num = 1,
        .size = 10,
        .speed = 200,
        .angle_increment = 0.5,
        .color = {.r=0, .g=0, .b=255, .a=255}
    };
    
    Emitter bomb{
        .interval = 0.5,
        .waves = 100,
        .bullet_num = 16,
        .size = 5,
        .speed = 200,
        .angle = 0,
        .angle_spread = 5.89049f,
        .color = {.r=0, .g=0, .b=255, .a=255},
        .pos_func = [](int)->SDL_FPoint{return{static_cast<float>(SDL_rand(Config::WINDOW_WIDTH)), static_cast<float>(SDL_rand(Config::WINDOW_HEIGHT))};},
    };

    emitters = {bomb, spiral, scatter};
    beams = {test};

    float last = SDL_GetTicksNS();
    float dashclock = 0;
    float dashcooldown = 1;

    while (running) {

        float now = SDL_GetTicksNS();
        float dt = (now - last)/1000000000;
        last = now;
        dashclock += dt;
        
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }
        }

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
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        for (int i = 0; i < projectiles.size();) {
            if (!projectiles[i].alive) {
                projectiles[i] = *(projectiles.end()-1);
                projectiles.pop_back();
            } else {
                projectiles[i].update(dt);
                projectiles[i].render(renderer, bullet_texture);
                i++;
            }
        }

        for (int i = 0; i < emitters.size();) {
            if (!emitters[i].alive) {
                emitters[i] = *(emitters.end()-1);
                emitters.pop_back();
            } else {
                emitters[i].update(dt, projectiles);
                i++;
            }
        }

        for (int i = 0; i < beams.size();) {
            if (!beams[i].alive) {
                beams[i] = *(beams.end()-1);
                beams.pop_back();
            } else {
                beams[i].update(renderer, dt);
                i++;
            }
        }

        // Drawing

        SDL_SetRenderDrawColor(renderer, 88, 180, 219, 255);
        SDL_FRect player_rect = player.get_rect();
        SDL_RenderFillRect(renderer, &player_rect);

        SDL_RenderPresent(renderer);
    }
    

    SDL_DestroyTexture(bullet_texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}