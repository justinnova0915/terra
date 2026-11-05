#include "gameManager.hpp"
#include "menuManager.hpp"
#include "audio.hpp"

enum class State {
    Menu,
    Game,
    Paused,
    Quit
};

State state = State::Menu;

GameManager game_manager;
MenuManager menu_manager;
Audio audio;
SDL_Window* window;
SDL_Renderer* renderer;

int init() {
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("SDL Error: %s", SDL_GetError());
        return 1;
    }
    
    if (!SDL_CreateWindowAndRenderer("game", Config::WINDOW_WIDTH, Config::WINDOW_HEIGHT, 0, &window, &renderer)) {
        SDL_Log("SDL Window Creation Error: %s", SDL_GetError());
        return 1;
    }

    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
    SDL_SetRenderVSync(renderer, 1);

    if (audio.init()) {
        return 1;
    }
    return 0;
}

void quit() {
    game_manager.quit();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    audio.quit();

    SDL_Quit();
}

int main(int argc, char* argv[]) {
    
    if (init()) {
        return 1;
    }

    if (game_manager.init(renderer, audio)) {
        return 1;
    }

    if (menu_manager.init(renderer, game_manager.levelManager.levels)) {
        return 1;
    }

    SDL_Event event;

    while (state != State::Quit) {
        
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                state = State::Quit;
                break;
            } else {
                if (state == State::Game) {
                    game_manager.get_event(event);
                } else if (state == State::Menu || state == State::Paused) {
                    menu_manager.get_event(event);
                }
            }
        }

        
        if (state == State::Game) {
            game_manager.update();
            
            if (game_manager.gameResult.action == GameManager::GameResult::Action::Pause) {
                state = State::Paused;
                menu_manager.currentScreen = "pause";
                game_manager.gameResult.action = GameManager::GameResult::Action::None;
            } else {
                game_manager.render();
            }
        } else if (state == State::Menu) {
            menu_manager.update();
            if (menu_manager.menuResult.action == MenuManager::MenuResult::Action::ToLevel) {
                game_manager.reset(menu_manager.menuResult.curLevel);
                state = State::Game;
                menu_manager.menuResult.action = MenuManager::MenuResult::Action::None;
            }
            menu_manager.render();
        } else if (state == State::Paused) {
            menu_manager.update();
            SDL_Log("%d", static_cast<int>(menu_manager.menuResult.action));
            
            if (menu_manager.menuResult.action == MenuManager::MenuResult::Action::ToLevel) {
                game_manager.reset(menu_manager.menuResult.curLevel);
                state = State::Game;
                menu_manager.menuResult.action = MenuManager::MenuResult::Action::None;
            } else if (menu_manager.menuResult.action == MenuManager::MenuResult::Action::Unpause) {
                state = State::Game;
                menu_manager.menuResult.action = MenuManager::MenuResult::Action::None;
            } else if (menu_manager.menuResult.action == MenuManager::MenuResult::Action::ToMenu) {
                state == State::Menu;
                menu_manager.currentScreen = "selection";
                menu_manager.menuResult.action = MenuManager::MenuResult::Action::None;
            }

            game_manager.render_scene();
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 160);
            SDL_RenderFillRect(renderer, nullptr);
            menu_manager.render();
            SDL_RenderPresent(renderer);
        }
    }

    quit();

    return 0;
}