#pragma once

#include "font.hpp"

#include <functional>
#include <SDL3/SDL.h>
#include <vector>

struct Box {
    SDL_FRect rect = {};
    SDL_Color color = {};

    void render(SDL_Renderer* renderer) {
        SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
        SDL_RenderFillRect(renderer, &rect);
    }
};

struct TextBox {
    Box box;

    TTF_Text* textObject = nullptr;

    void render(SDL_Renderer* renderer) {
        SDL_SetRenderDrawColor(renderer, box.color.r, box.color.g, box.color.b, box.color.a);
        SDL_RenderFillRect(renderer, &box.rect);
        int w, h;
        TTF_GetTextSize(textObject, &w, &h);
        TTF_DrawRendererText(textObject, box.rect.x + (box.rect.w - w)/2, box.rect.y + (box.rect.h - h)/2);
    }
};

struct Button {
    Box normal;
    Box hovered;

    bool pressed;
    bool hover;

    TTF_Text* textObject = nullptr;

    std::function<void()> onPressed;

    void render(SDL_Renderer* renderer) {
        if (hover) {
            SDL_SetRenderDrawColor(renderer, hovered.color.r, hovered.color.g, hovered.color.b, hovered.color.a);
            SDL_RenderFillRect(renderer, &hovered.rect);
        } else {
            SDL_SetRenderDrawColor(renderer, normal.color.r, normal.color.g, normal.color.b, normal.color.a);
            SDL_RenderFillRect(renderer, &normal.rect);
        }
        int w, h;
        TTF_GetTextSize(textObject, &w, &h);
        TTF_DrawRendererText(textObject, normal.rect.x + (normal.rect.w - w)/2, normal.rect.y + (normal.rect.h - h)/2);
    }

    bool contains(SDL_FPoint mouse) {
        return SDL_PointInRectFloat(&mouse, &normal.rect);
    }
};

struct Screen {
    std::vector<Button> buttons;
    std::vector<Box> boxes;
    std::vector<TextBox> texts;

    void update(SDL_FPoint mouse) {
        for (Button& button : buttons) {
            button.hover = button.contains(mouse);
        }
    }

    void handle_clicks(SDL_FPoint mouse) {
        for (Button& button : buttons) {
            if (SDL_PointInRectFloat(&mouse, &button.normal.rect)) {
                button.onPressed();
                break;
            }
        }
    }

    void render(SDL_Renderer* renderer) {
        for (Button& button : buttons) {
            button.render(renderer);
        }

        for (Box& box : boxes) {
            box.render(renderer);
        }

        for (TextBox& text : texts) {
            text.render(renderer);
        }
    }
};
