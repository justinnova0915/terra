#pragma once

#include "font.hpp"
#include "levelManager.hpp"
#include "UI.hpp"

#include <SDL3/SDL.h>
#include <vector>
#include <unordered_map>
#include <string>

struct MenuManager {

    Text text;

    Button back;
    
    Screen logo;
    Screen selection;
    Screen pause;
    Screen songs;
    Screen lose;
    Screen win;
    
    std::vector<std::string> screenStack = {"logo"};
    std::unordered_map<std::string, Screen> screens = {};
    
    SDL_FPoint mouse;
    
    bool play = false;
    
    SDL_Renderer* renderer;


    struct MenuResult {
        enum class Action {
            ToLevel,
            ToMenu,
            ToEditor,
            Unpause,
            None
        };

        Action action = Action::None;
        int curLevel = 0;
    };

    MenuResult menuResult;

    void push_screen(std::string cur) {
        screenStack.push_back(cur);
    }

    void set_screen(std::string cur) {
        screenStack.clear();
        screenStack.push_back(cur);
    }
    
    bool init(SDL_Renderer* r, const std::vector<Level>& levels) {
        renderer = r;
        text.init(renderer);

        back = Button{
            .normal = {
                .rect = {10, 10, 200, 100},
                .color = {255, 0, 0, 255}
            },
            .hovered = {
                .rect = {10, 10, 200, 100},
                .color = {0, 0, 255, 255}
            },
            .textObject = text.create_text("Back"),
            .onPressed = [&](){screenStack.pop_back();}
        };

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
                    .onPressed = [&](){push_screen("selection");}
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
                    .onPressed = [&](){push_screen("songs");}
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
                    .textObject = text.create_text("Editor"),
                    .onPressed = [&](){menuResult.action = MenuResult::Action::ToEditor;}
                },
                
                back
            }
        };

        for (int i = 0; i < levels.size(); i++) {
            songs.buttons.push_back(Button{
                Button{
                    .normal = {
                        .rect = {10, 100.0f+300.0f*i, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {10, 100.0f+300.0f*i, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text(levels[i].songsName),
                    .onPressed = [this, i](){
                        this->menuResult.curLevel = i;
                        this->set_screen("pause");
                        this->menuResult.action = MenuResult::Action::ToLevel;
                    }
                }
            });
        }
        songs.buttons.push_back(back);

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
                    .onPressed = [&](){
                        set_screen("pause");
                        menuResult.action = MenuResult::Action::ToLevel;
                    }
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
                    .onPressed = [&](){
                        push_screen("logo");
                        menuResult.action = MenuResult::Action::ToMenu;
                    }
                }
            }
        };

        win = Screen{
            .buttons = {
                Button{
                    .normal = {
                        .rect = {500, 700, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {500, 700, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Menu"),
                    .onPressed = [&](){
                        push_screen("logo");
                        menuResult.action = MenuResult::Action::ToMenu;
                    }
                },
                Button{
                    .normal = {
                        .rect = {1200, 700, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {1200, 700, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Restart"),
                    .onPressed = [&](){
                        set_screen("pause");
                        menuResult.action = MenuResult::Action::ToLevel;
                    }
                },

            },
            .texts = {TextBox{
                .box = {
                    .rect = {800, 300, 400, 200},
                    .color = {0, 0, 0, 0}
                },
                .textObject = text.create_text("Clear")
            }}
        };

        lose = Screen{
                        .buttons = {
                Button{
                    .normal = {
                        .rect = {500, 700, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {500, 700, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Menu"),
                    .onPressed = [&](){
                        push_screen("logo");
                        menuResult.action = MenuResult::Action::ToMenu;
                    }
                },
                Button{
                    .normal = {
                        .rect = {1200, 700, 400, 200},
                        .color = {255, 0, 0, 255}
                    },
                    .hovered = {
                        .rect = {1200, 700, 400, 200},
                        .color = {0, 0, 255, 255}
                    },
                    .textObject = text.create_text("Restart"),
                    .onPressed = [&](){
                        set_screen("pause");
                        menuResult.action = MenuResult::Action::ToLevel;
                    }
                },

            },
            .texts = {TextBox{
                .box = {
                    .rect = {800, 300, 400, 200},
                    .color = {0, 0, 0, 0}
                },
                .textObject = text.create_text("Failed")
            }}
        };

        screens["logo"] = logo;
        screens["selection"] = selection;
        screens["songs"] = songs;
        screens["pause"] = pause;
        screens["win"] = win;
        screens["lose"] = lose;

        return 0;
    }

    void get_event(SDL_Event event) {
        if (event.type == SDL_EVENT_MOUSE_MOTION) {
            mouse = {event.button.x, event.button.y};
        }
        if (event.type == SDL_EVENT_MOUSE_BUTTON_DOWN && event.button.button == SDL_BUTTON_LEFT) {
            mouse = {event.button.x, event.button.y};
            screens[screenStack.back()].handle_clicks(mouse);
        }
    }

    void update() {
        screens[screenStack.back()].update(mouse);
    }

    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        screens[screenStack.back()].render(renderer);
        SDL_RenderPresent(renderer);
    }
};