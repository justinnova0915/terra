#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char* argv[]) {

    if(!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("SDL Error: %s", SDL_GetError());
        return 1;
    }

    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    if (!SDL_CreateWindowAndRenderer("game", 1920, 1080, 0, &window, &renderer)) {
        SDL_Log("SDL Window Creation Error: %s", SDL_GetError());
        return 1;
    }

    SDL_SetRenderVSync(renderer, 1);

    bool running = true;
    SDL_Event event;

    struct Player {
        float x = 100;
        float y = 100;
        float w = 20;
        float h = 20;

        float speed = 1;

        SDL_FRect get_rect() const {
            return SDL_FRect {x, y, w, h};
        }
    };

    Player player;

    float last = 0;

    while (running) {

        // Clock
        float now = SDL_GetTicksNS();
        float dt = (now - last)/1000000000;
        float last = now;

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
            player.x += travel;
        }
        if (keys[SDL_SCANCODE_W]) {
            player.y -= travel;
        }
        if (keys[SDL_SCANCODE_A]) {
            player.x -= travel;
        }
        if (keys[SDL_SCANCODE_S]) {
            player.y += travel;
        }
        
        // Drawing
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 88, 180, 219, 255);
        SDL_FRect player_rect = player.get_rect();
        SDL_RenderFillRect(renderer, &player_rect);

        SDL_RenderPresent(renderer);
    }
    

    // Clean-up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}