#include "gameManager.hpp"


float Clock::tick() {
    float now = SDL_GetTicksNS();
    float dt = (now - last)/1.0e9f;
    last = now;
    return dt;
}

void Clock::reset() {
    last = SDL_GetTicksNS();
}


int GameManager::init() {
    if(!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("SDL Error: %s", SDL_GetError());
        return 1;
    }
    
    if (!SDL_CreateWindowAndRenderer("game", Config::WINDOW_WIDTH, Config::WINDOW_HEIGHT, 0, &window, &renderer)) {
        SDL_Log("SDL Window Creation Error: %s", SDL_GetError());
        return 1;
    }
    
    std::string img_path = Helper::get_resource_path("Assets/images.bmp");    
    SDL_Surface* raw_bmp = SDL_LoadBMP(img_path.c_str());
    if (!raw_bmp) {
        SDL_Log("SDL Image Loading Error: %s", SDL_GetError());
        return 1;
    }
    
    SDL_Surface* bullet_bmp = SDL_ConvertSurface(raw_bmp, SDL_PIXELFORMAT_RGB24);
    SDL_DestroySurface(raw_bmp);
    Uint32 colorkey = SDL_MapRGB(
        SDL_GetPixelFormatDetails(bullet_bmp->format),
        nullptr,
        0,0,0
    );
    SDL_SetSurfaceColorKey(bullet_bmp, true, colorkey);
    bullet_texture = SDL_CreateTextureFromSurface(renderer, bullet_bmp);
    SDL_DestroySurface(bullet_bmp);
    SDL_SetTextureBlendMode(bullet_texture, SDL_BLENDMODE_BLEND);
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
    
    SDL_SetRenderVSync(renderer, 1);
    
    reset();

    return 0;
}

void GameManager::reset() {
    clock.reset();
    player.reset();
    levelManager.load(0);
}

void GameManager::get_events() {
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_EVENT_QUIT) {
            state = GameState::Quit;
        }

        if (event.type == SDL_EVENT_KEY_DOWN) {
            if (state == GameState::Death && event.key.key == SDLK_R) {
                reset();
                state = GameState::Game;
            }
        }
    }
}

void GameManager::update() {
    dt = clock.tick();
    const bool* keys = SDL_GetKeyboardState(nullptr);

    switch (state) {
        case GameState::Game:

            if (player.health <= 0) {
                state = GameState::Death;
            }

            levelManager.update(dt);

            player.update(dt, keys);
            switch (player.state) {
                case Player::PlayerState::Live:
                    if (Collider::update(player, levelManager.levels[levelManager.levelIndex].projectiles, levelManager.levels[levelManager.levelIndex].beams)) {
                        player.on_hit();
                    }
                    break;
                case Player::PlayerState::HitCooldown:
                    break;
            }
            break;
    }
}

void GameManager::render() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    
    player.render(renderer);

    levelManager.render(renderer, bullet_texture);
    
    if (state == GameState::Death) {
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 80);
        SDL_RenderFillRect(renderer, nullptr);
    }
    
    SDL_RenderPresent(renderer);
}

void GameManager::quit() {
    SDL_DestroyTexture(bullet_texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}
