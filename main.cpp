#include "gameManager.hpp"

GameManager game_manager;

int main(int argc, char* argv[]) {
    
    if (game_manager.init()) {
        return 1;
    }

    while (game_manager.state != GameManager::GameState::Quit) {
        game_manager.get_events();
        game_manager.update();
        game_manager.render();
    }

    game_manager.quit();

    return 0;
}