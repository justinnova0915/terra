#include "UI.hpp"
#include "audio.hpp"
#include "font.hpp"

struct Editor {
    Screen editor;

    SDL_Renderer* renderer = nullptr;
    Audio* audio = nullptr;
    Text text;

    void init(SDL_Renderer* r, Audio* a) {
        renderer = r;
        audio = a;

        editor = Screen{
            .boxes = {
                Box{
                    .rect = {10, 10, 1500, 800},
                    .color = {255, 0, 0, 255}
                },
                Box{
                    .rect = {820, 10, 1910, 260},
                    .color = {0, 255, 0, 255}
                },
                Box{
                    .rect = {1510, 10, 400, 1060},
                    .color = {0, 0, 255, 255}
                },
            }
        };
    }

    void update() {

    }

    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        editor.render(renderer);
        SDL_RenderPresent(renderer);
    }
};