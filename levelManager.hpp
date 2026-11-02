#pragma once

#include "attacks.hpp"

#include <vector>
#include <fstream>
#include <filesystem>
#include <SDL3_mixer/SDL_mixer.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

struct Level {
    std::vector<Emitter> emitters = {};
    std::vector<Projectile> projectiles = {};
    std::vector<Beam> beams = {};

    std::string songsName;
    std::string artist;
    std::string path;
    float duration = 0;
    float difficulty;

    void reset();
};

struct LevelManager {
    bool finished = false;
    int levelIndex;
    float elapsed;
  
    std::vector<Level> levels = {};

    void load(int index);

    void load_level_data(std::string folderPath) {
        for (std::filesystem::directory_entry entry:std::filesystem::directory_iterator(folderPath)) {
            if (entry.path().extension() == ".json") {
                json data = json::parse(entry.path());

                Level curLevel = {
                    .songsName = data["songsName"].get<std::string>(),
                    .artist = data["artist"].get<std::string>(),
                    .path = data["path"].get<std::string>(),
                    .duration = data["path"].get<float>(),
                    .difficulty = data["difficulty"].get<float>()
                };

                for (auto& emitter: data["emitters"]) {
                    curLevel.emitters.push_back(Emitter{
                        .pos = {
                            .x = emitter["pos"]["x"].get<float>(),
                            .y = emitter["pos"]["x"].get<float>()
                        },
                        .interval = emitter["interval"].get<float>(),
                        .waves = emitter["waves"].get<int>(),
                        .bullet_num = emitter["bullet_num"].get<int>(),
                        .size = emitter["size"].get<float>(),
                        .start_timestamp = emitter["start_timestamp"].get<float>(),
                        .speed = emitter["pos"]["x"].get<float>(),
                        .angle = emitter["angle"].get<float>(),
                        .angle_increment = emitter["angle_increment"].get<float>(),
                        .angle_spread = emitter["angle_spread"].get<float>(),
                        .color = {
                            .r = emitter["color"]["r"].get<Uint8>(),
                            .g = emitter["color"]["g"].get<Uint8>(),
                            .b = emitter["color"]["b"].get<Uint8>()
                        },
                    });
                }

                for (auto& beam: data["beams"]) {
                    curLevel.beams.push_back(Beam{
                        .pos = {
                            .x = beam["pos"]["x"].get<float>(),
                            .y = beam["pos"]["x"].get<float>()
                        },
                        .width = beam["width"].get<float>(),
                        .length = beam["length"].get<float>(),
                        .angle = beam["angle"].get<float>(),
                        .duration = beam["duration"].get<float>(),
                        .start_timestamp = beam["start_timestamp"].get<float>(),
                        .anticipation_time = beam["anticipation_time"].get<float>(),
                        .warning_color = {
                            .r = beam["warning_color"]["r"].get<Uint8>(),
                            .g = beam["warning_color"]["g"].get<Uint8>(),
                            .b = beam["warning_color"]["b"].get<Uint8>(),
                            .a = beam["warning_color"]["a"].get<Uint8>()
                        },
                        .normal_color = {
                            .r = beam["normal_color"]["r"].get<Uint8>(),
                            .g = beam["normal_color"]["g"].get<Uint8>(),
                            .b = beam["normal_color"]["b"].get<Uint8>(),
                            .a = beam["normal_color"]["a"].get<Uint8>()
                        }
                    });
                }
            }
        }
    }
    
    void update(float dt, float time, SDL_FPoint playerPos);
  
    void render(SDL_Renderer *renderer, SDL_Texture *bullet_texture);
  
    void reset();
};