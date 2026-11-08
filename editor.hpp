#include "UI.hpp"
#include "audio.hpp"
#include "font.hpp"

struct TimeLine {

    Level level = {};

    bool init(Level level) {
        level = level;
        return 0;
    }

    void update() {

    }

    void render() {

    }
};

struct Editor {
    Screen editor;

    SDL_Renderer* renderer = nullptr;
    Audio* audio = nullptr;
    Text text;

    TimeLine timeLine;

    bool init(SDL_Renderer* r, Audio* a) {
        renderer = r;
        audio = a;

        editor = Screen{
            .boxes = {
                Box{
                    .rect = {10, 10, 1500, 800},
                    .color = {255, 0, 0, 255}
                },
                Box{
                    .rect = {10, 820, 1500, 250},
                    .color = {0, 255, 0, 255}
                },
                Box{
                    .rect = {1520, 10, 390, 1060},
                    .color = {0, 0, 255, 255}
                },
            }
        };

        return 0;
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