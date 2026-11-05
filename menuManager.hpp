#include "font.hpp"
#include "levelManager.hpp"

#include <functional>
#include <SDL3/SDL.h>
#include <vector>
#include <unordered_map>
#include <string>

struct Box {
    SDL_FRect rect = {};
    SDL_Color color = {};

    void render(SDL_Renderer* renderer) {
        SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
        SDL_RenderFillRect(renderer, &rect);
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
        for (Button button: buttons) {
            button.render(renderer);
        }

        for (Box box : boxes) {
            box.render(renderer);
        }
    }
};


struct MenuManager {

    Text text;
    
    Screen logo;

    Screen selection;

    Screen pause;

    Screen songs;
    
    std::unordered_map<std::string, Screen> screens = {};
    
    std::string currentScreen = "logo";
    
    SDL_FPoint mouse;
    
    bool play = false;
    
    SDL_Renderer* renderer;


    struct MenuResult {
        enum class Action {
            ToLevel,
            ToMenu,
            Unpause,
            None
        };

        Action action = Action::None;
        int curLevel = 0;
    };

    MenuResult menuResult;

    void load(std::string cur) {
        currentScreen = cur;
    }
    
    bool init(SDL_Renderer* r, const std::vector<Level>& levels) {
        renderer = r;
        text.init(renderer);
        logo = {
            .buttons = {
                Button{
                    .normal = {
                        .rect = {400, 200, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {400, 200, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Start"),
                    .onPressed = [&](){currentScreen = "selection";}
                }
            }
        };

        selection = {
            .buttons = {
                Button{
                    .normal = {
                        .rect = {600, 300, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {600, 300, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Campaign"),
                    .onPressed = [&](){currentScreen = "songs";}
                },

                Button{
                    .normal = {
                        .rect = {1100, 300, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {1100, 300, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Custom"),
                    .onPressed = [](){}
                }
            }
        };

        for (int i = 0; i < levels.size(); i++) {
            songs.buttons.push_back(Button{
                Button{
                    .normal = {
                        .rect = {10, 100+300*i, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {10, 100+300*i, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text(levels[i].songsName),
                    .onPressed = [this, i](){
                        this->menuResult.curLevel = i;
                        this->menuResult.action = MenuResult::Action::ToLevel;
                    }
                }
            });
        }

        pause = Screen{
            .buttons = {
                Button{
                    .normal = {
                        .rect = {1100, 300, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {1100, 300, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Resume"),
                    .onPressed = [&](){menuResult.action = MenuResult::Action::Unpause;}
                },
                Button{
                    .normal = {
                        .rect = {600, 300, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {600, 300, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Restart"),
                    .onPressed = [&](){menuResult.action = MenuResult::Action::ToLevel;}
                },
                Button{
                    .normal = {
                        .rect = {600, 700, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {600, 700, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Menu"),
                    .onPressed = [&](){menuResult.action = MenuResult::Action::ToMenu;}
                }
            }
        };

        screens["logo"] = logo;
        screens["selection"] = selection;
        screens["songs"] = songs;
        screens["pause"] = pause;

        return 0;
    }

    void get_event(SDL_Event event) {
        if (event.type == SDL_EVENT_MOUSE_MOTION) {
            mouse = {event.button.x, event.button.y};
        }
        if (event.type == SDL_EVENT_MOUSE_BUTTON_DOWN && event.button.button == SDL_BUTTON_LEFT) {
            mouse = {event.button.x, event.button.y};
            screens[currentScreen].handle_clicks(mouse);
        }
    }

    void update() {
        screens[currentScreen].update(mouse);
    }

    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        screens[currentScreen].render(renderer);
        SDL_RenderPresent(renderer);
    }
};