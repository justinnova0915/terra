#include "levelManager.hpp"

void Level::reset() {
    projectiles.clear();
    emitters = {bomb, scatter, spiral};
    beams = {test};
}

void LevelManager::load(int index) {
    levelIndex = index;
    reset();
}

void LevelManager::update(float dt, float time) {
    Level& currentLevel = levels[levelIndex];
    elapsed += dt;

    if (elapsed > currentLevel.duration) {
        finished = true;
    }

    for (int i = 0; i < currentLevel.projectiles.size();) {
        if (!currentLevel.projectiles[i].alive) {
            currentLevel.projectiles[i] = *(currentLevel.projectiles.end()-1);
            currentLevel.projectiles.pop_back();
        } else {
            currentLevel.projectiles[i].update(dt);
            i++;
        }
    }
    
    for (int i = 0; i < currentLevel.emitters.size(); i++) {
        currentLevel.emitters[i].update(dt, time, currentLevel.projectiles);
    }
    
    for (int i = 0; i < currentLevel.beams.size(); i++) {
        currentLevel.beams[i].update(dt, time);
    }
}

void LevelManager::render(SDL_Renderer *renderer, SDL_Texture *bullet_texture) {
    Level& currentLevel = levels[levelIndex];

    for (int i = 0; i < currentLevel.projectiles.size(); i++) {
        currentLevel.projectiles[i].render(renderer, bullet_texture);
    }

    for (int i = 0; i < currentLevel.beams.size(); i++) {
        currentLevel.beams[i].render(renderer);
    }
}

void LevelManager::reset() {
    finished = false;
    elapsed = 0;
    levels[levelIndex].reset();
}