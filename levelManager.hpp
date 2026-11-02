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

    std::vector<Emitter> baseEmitters = {};
    std::vector<Beam> baseBeams = {};

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

        std::vector<std::filesystem::path> files;

        for (std::filesystem::directory_entry entry:std::filesystem::directory_iterator(folderPath)) {
            if (entry.path().extension() == ".json") {
                files.push_back(entry.path());
            }
        }

        std::sort(files.begin(), files.end());

        for (std::filesystem::path path:files) {
            std::ifstream in(path);
            json data;
            in >> data;

            Level curLevel = {
                .songsName = data["songsName"].get<std::string>(),
                .artist = data["artist"].get<std::string>(),
                .path = data["path"].get<std::string>(),
                .duration = data["duration"].get<float>(),
                .difficulty = data["difficulty"].get<float>()
            };

            for (auto& emitter: data["emitters"]) {
                Emitter e = {
                    .pos = {
                        .x = emitter["pos"]["x"].get<float>(),
                        .y = emitter["pos"]["y"].get<float>()
                    },
                    .interval = emitter["interval"].get<float>(),
                    .waves = emitter["waves"].get<int>(),
                    .bullet_num = emitter["bullet_num"].get<int>(),
                    .size = emitter["size"].get<float>(),
                    .start_timestamp = emitter["start_timestamp"].get<float>(),
                    .speed = emitter["speed"].get<float>(),
                    .angle = emitter["angle"].get<float>(),
                    .angle_increment = emitter["angle_increment"].get<float>(),
                    .angle_spread = emitter["angle_spread"].get<float>(),
                    .color = {
                        .r = emitter["color"]["r"].get<Uint8>(),
                        .g = emitter["color"]["g"].get<Uint8>(),
                        .b = emitter["color"]["b"].get<Uint8>(),
                        .a = emitter["color"]["a"].get<Uint8>()
                    },
                };

                if (emitter["pos_func"].get<std::string>() == "static") {
                    e.pos_func.param.state = PosFunc::Type::Static;
                    e.pos_func.param.startPos = e.pos;
                    e.pos_func.param.pos = e.pos;
                } else if (emitter["pos_func"].get<std::string>() == "linear") {
                    e.pos_func.param.state = PosFunc::Type::Linear;
                    e.pos_func.param.velocity = {
                        emitter["pos_rate_x"].get<float>(),
                        emitter["pos_rate_y"].get<float>()
                    };
                    e.pos_func.param.startPos = e.pos;
                    e.pos_func.param.pos = e.pos;
                } else if (emitter["pos_func"].get<std::string>() == "lerp") {
                    e.pos_func.param.state = PosFunc::Type::Lerp;
                    e.pos_func.param.lerp_end = {
                        emitter["pos_lerp_end_x"].get<float>(),
                        emitter["pos_lerp_end_y"].get<float>()
                    };
                    e.pos_func.param.duration = emitter["pos_duration"].get<float>();
                    e.pos_func.param.startPos = e.pos;
                    e.pos_func.param.pos = e.pos;
                } else if (emitter["pos_func"].get<std::string>() == "orbit") {
                    e.pos_func.param.state = PosFunc::Type::Orbit;
                    e.pos_func.param.orbit_radius = emitter["orbit_radius"].get<float>();
                    e.pos_func.param.orbit_startAngle = emitter["orbit_start_angle"].get<float>();
                    e.pos_func.param.orbit_endAngle = emitter["orbit_end_angle"].get<float>();
                    e.pos_func.param.duration = emitter["orbit_duration"].get<float>();
                    e.pos_func.param.orbit_pingPong = emitter["orbit_pingpong"].get<bool>();
                    e.pos_func.param.startPos = e.pos;
                    e.pos_func.param.pos = e.pos;
                } else if (emitter["pos_func"].get<std::string>() == "homing") {
                    e.pos_func.param.state = PosFunc::Type::Homing;
                    e.pos_func.param.velocity = {
                        emitter["pos_rate_x"].get<float>(),
                        emitter["pos_rate_y"].get<float>()
                    };
                    e.pos_func.param.startPos = e.pos;
                    e.pos_func.param.pos = e.pos;
                }

                if (emitter["ang_func"].get<std::string>() == "static") {
                    e.ang_func.param.state = AngFunc::Type::Static;
                    e.ang_func.param.startAng = e.angle;
                } else if (emitter["ang_func"].get<std::string>() == "rotate") {
                    e.ang_func.param.state = AngFunc::Type::Linear;
                    e.ang_func.param.rate = emitter["ang_rate"].get<float>();
                    e.ang_func.param.startAng = e.angle;
                } else if (emitter["ang_func"].get<std::string>() == "oscillate") {
                    e.ang_func.param.state = AngFunc::Type::Oscillate;
                    e.ang_func.param.startAng = emitter["ang_start"].get<float>();
                    e.ang_func.param.endAng = emitter["ang_end"].get<float>();
                    e.ang_func.param.rate = emitter["ang_rate"].get<float>();
                } else if (emitter["ang_func"].get<std::string>() == "pingpong") {
                    e.ang_func.param.state = AngFunc::Type::PingPong;
                    e.ang_func.param.startAng = emitter["ang_start"].get<float>();
                    e.ang_func.param.endAng = emitter["ang_end"].get<float>();
                    e.ang_func.param.duration = emitter["ang_duration"].get<float>();
                } else if (emitter["ang_func"].get<std::string>() == "homing") {
                    e.ang_func.param.state = AngFunc::Type::Homing;
                    e.ang_func.param.startAng = e.angle;
                } else if (emitter["ang_func"].get<std::string>() == "discrete") {
                    e.ang_func.param.state = AngFunc::Type::Discrete;
                    e.ang_func.param.startAng = emitter["ang_start"].get<float>();
                    e.ang_func.param.discrete_step = emitter["ang_step"].get<float>();
                    e.ang_func.param.duration = emitter["ang_duration"].get<float>();
                }

                curLevel.emitters.push_back(e);
            }

            for (auto& beam: data["beams"]) {
                Beam b = {
                    .pos = {
                        .x = beam["pos"]["x"].get<float>(),
                        .y = beam["pos"]["y"].get<float>()
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
                };

                if (beam["pos_func"].get<std::string>() == "static") {
                    b.pos_func.param.state = PosFunc::Type::Static;
                    b.pos_func.param.startPos = b.pos;
                    b.pos_func.param.pos = b.pos;
                } else if (beam["pos_func"].get<std::string>() == "linear") {
                    b.pos_func.param.state = PosFunc::Type::Linear;
                    b.pos_func.param.velocity = {
                        beam["pos_rate_x"].get<float>(),
                        beam["pos_rate_y"].get<float>()
                    };
                    b.pos_func.param.startPos = b.pos;
                    b.pos_func.param.pos = b.pos;
                } else if (beam["pos_func"].get<std::string>() == "lerp") {
                    b.pos_func.param.state = PosFunc::Type::Lerp;
                    b.pos_func.param.lerp_end = {
                        beam["pos_lerp_end_x"].get<float>(),
                        beam["pos_lerp_end_y"].get<float>()
                    };
                    b.pos_func.param.duration = beam["pos_duration"].get<float>();
                    b.pos_func.param.startPos = b.pos;
                    b.pos_func.param.pos = b.pos;
                } else if (beam["pos_func"].get<std::string>() == "orbit") {
                    b.pos_func.param.state = PosFunc::Type::Orbit;
                    b.pos_func.param.orbit_radius = beam["orbit_radius"].get<float>();
                    b.pos_func.param.orbit_startAngle = beam["orbit_start_angle"].get<float>();
                    b.pos_func.param.orbit_endAngle = beam["orbit_end_angle"].get<float>();
                    b.pos_func.param.duration = beam["orbit_duration"].get<float>();
                    b.pos_func.param.orbit_pingPong = beam["orbit_pingpong"].get<bool>();
                    b.pos_func.param.startPos = b.pos;
                    b.pos_func.param.pos = b.pos;
                }


                if (beam["ang_func"].get<std::string>() == "static") {
                    b.ang_func.param.state = AngFunc::Type::Static;
                } else if (beam["ang_func"].get<std::string>() == "rotate") {
                    b.ang_func.param.state = AngFunc::Type::Linear;
                    b.ang_func.param.rate = beam["ang_rate"].get<float>();
                } else if (beam["ang_func"].get<std::string>() == "oscillate") {
                    b.ang_func.param.state = AngFunc::Type::Oscillate;
                    b.ang_func.param.startAng = beam["ang_start"].get<float>();
                    b.ang_func.param.endAng = beam["ang_end"].get<float>();
                    b.ang_func.param.rate = beam["ang_rate"].get<float>();
                } else if (beam["ang_func"].get<std::string>() == "pingpong") {
                    b.ang_func.param.state = AngFunc::Type::PingPong;
                    b.ang_func.param.startAng = beam["ang_start"].get<float>();
                    b.ang_func.param.endAng = beam["ang_end"].get<float>();
                    b.ang_func.param.duration = beam["ang_duration"].get<float>();
                } else if (beam["ang_func"].get<std::string>() == "homing") {
                    b.ang_func.param.state = AngFunc::Type::Homing;
                } else if (beam["ang_func"].get<std::string>() == "discrete") {
                    b.ang_func.param.state = AngFunc::Type::Discrete;
                    b.ang_func.param.startAng = beam["ang_start"].get<float>();
                    b.ang_func.param.discrete_step = beam["ang_step"].get<float>();
                    b.ang_func.param.duration = beam["ang_duration"].get<float>();
                }

                curLevel.beams.push_back(b);
            }

            curLevel.baseEmitters = curLevel.emitters;
            curLevel.baseBeams = curLevel.beams;

            levels.push_back(curLevel);
        }
    }
    
    void update(float dt, float time, SDL_FPoint playerPos);
  
    void render(SDL_Renderer *renderer, SDL_Texture *bullet_texture);
  
    void reset();
};