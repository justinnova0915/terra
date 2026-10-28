#include "gameManager.hpp"
#include "menuManager.hpp"

enum class State {
    Menu,
    Game,
    Quit
};

State state = State::Menu;

GameManager game_manager;
MenuManager menu_manager;

int main(int argc, char* argv[]) {
    
    if (game_manager.init()) {
        return 1;
    }

    if (menu_manager.init()) {
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
                } else if (state == State::Menu) {
                    menu_manager.get_event(event);
                }
            }
        }

        if (state == State::Game) {
            game_manager.update();
            game_manager.render();
        } else if (state == State::Menu) {
            menu_manager.update();
            if (menu_manager.play) {
                state = State::Game;
            }
            menu_manager.render(game_manager.renderer);
        }
    }

    game_manager.quit();

    return 0;
}