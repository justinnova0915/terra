
#include <string>
#include <SDL3_ttf/SDL_ttf.h>

struct TextBox {
    SDL_Texture* texture = nullptr;
    SDL_FRect rect = {};
};

struct Text {

    const float fontSize = 48.0f;
    TTF_TextEngine* engine = nullptr;
    TTF_Font* font = nullptr;
    
    bool init(SDL_Renderer* renderer) {
        if (!TTF_Init()) {
            return 1;
        }

        engine = TTF_CreateRendererTextEngine(renderer);

        font = TTF_OpenFont("./Assets/fonts/sans.ttf", fontSize);

        return 0;
    }

    TTF_Text* create_text(std::string text) {
        return TTF_CreateText(engine, font, text.c_str(), 0);
    }

    void quit() {
        TTF_Quit();
    }
};