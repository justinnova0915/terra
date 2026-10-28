#include "gameManager.hpp"

float Clock::tick() {
    float now = SDL_GetTicks();
    float dt = (now - last)/1000.0f;
    time += dt;
    last = now;
    return dt;
}

void Clock::reset() {
    time = 0;
    last = SDL_GetTicks();
}


int GameManager::init(SDL_Renderer* r) {
    renderer = r;
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
    

    if (audio.init()) {
        return 1;
    }

    return 0;
}

void GameManager::reset() {
    player.reset();
    levelManager.load(0);
    audio.load_song(levelManager.levels[levelManager.levelIndex].path);
    audio.play();
    clock.reset();
}

void GameManager::get_event(SDL_Event event) {
    if (event.type == SDL_EVENT_KEY_DOWN) {
        if ((state == GameState::Death || state == GameState::Clear) && event.key.key == SDLK_R) {
            reset();
            state = GameState::Game;
        }
    }
}

void GameManager::update() {
    dt = clock.tick();
    const bool* keys = SDL_GetKeyboardState(nullptr);
    float mapTime = clock.time - offset;

    SDL_Log(std::to_string(clock.time).c_str());

    switch (state) {
        case GameState::Game:
            if (player.health <= 0) {
                state = GameState::Death;
                audio.pause();
            } else if (levelManager.finished) {
                state = GameState::Clear;
                audio.pause();
            }

            levelManager.update(dt, mapTime);

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
        case GameState::Clear:
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
    } else if (state == GameState::Clear) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 80);
        SDL_RenderFillRect(renderer, nullptr);
    }
    
    SDL_RenderPresent(renderer);
}

void GameManager::quit() {
    SDL_DestroyTexture(bullet_texture);
}
