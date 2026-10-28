#pragma once

#include "attacks.hpp"

#include <vector>
#include <SDL3_mixer/SDL_mixer.h>
 
inline std::vector<Beam> chronomia_beams = {
    Beam{ .pos = {1000, 500}, .width = 50, .length = 1500, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 22.174f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {0, 0}, .width = 50, .length = 2200, .angle = 0.512f, .duration = 2.0f, .start_timestamp = 26.436f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {960, 0}, .width = 50, .length = 1080, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 30.699f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {1440, 0}, .width = 50, .length = 1080, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 34.895f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 39.091f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 128, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 128, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {0, 540}, .width = 50, .length = 1920, .angle = 0, .duration = 2.0f, .start_timestamp = 45.434f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {0, 0}, .width = 50, .length = 2200, .angle = 0.512f, .duration = 2.0f, .start_timestamp = 49.663f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 1500, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 53.892f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {200, 200}, .width = 60, .length = 3000, .angle = 0.359f, .duration = 2.0f, .start_timestamp = 58.121f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 255, .a = 255}, .len_func = [](float elapsed)->float{return 500.0f + 1000.0f*elapsed;} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 1500, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 62.351f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 1500, .angle = 0, .duration = 2.0f, .start_timestamp = 63.408f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(-elapsed*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {700, 0}, .width = 50, .length = 1080, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 70.809f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {1220, 0}, .width = 50, .length = 1080, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 70.809f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {0, 810}, .width = 50, .length = 1920, .angle = 0, .duration = 2.0f, .start_timestamp = 79.267f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {480, 0}, .width = 50, .length = 1080, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 87.725f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 1500, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 91.954f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(-elapsed*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {0, 270}, .width = 50, .length = 1920, .angle = 0, .duration = 2.0f, .start_timestamp = 96.183f, .anticipation_time = 1, .warning_color = {.r = 128, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 128, .g = 0, .b = 255, .a = 255} },
    Beam{ .pos = {200, 880}, .width = 60, .length = 3000, .angle = -0.359f, .duration = 2.0f, .start_timestamp = 101.469f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 255, .a = 255}, .len_func = [](float elapsed)->float{return 500.0f + 1000.0f*elapsed;} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 1500, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 106.756f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 1500, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 110.985f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 115.214f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 128, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 128, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 80, .length = 1500, .angle = 0, .duration = 2.0f, .start_timestamp = 119.443f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(-elapsed*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {1000, 500}, .width = 30, .length = 1500, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 123.672f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 128, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 128, .b = 0, .a = 255} },
    Beam{ .pos = {1000, 500}, .width = 30, .length = 1500, .angle = 0, .duration = 2.0f, .start_timestamp = 123.672f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 128, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 128, .b = 0, .a = 255} },
    Beam{ .pos = {1000, 500}, .width = 30, .length = 1500, .angle = 0.785f, .duration = 2.0f, .start_timestamp = 130.016f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 128, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 128, .b = 0, .a = 255} },
    Beam{ .pos = {1000, 500}, .width = 30, .length = 1500, .angle = -0.785f, .duration = 2.0f, .start_timestamp = 130.016f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 128, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 128, .b = 0, .a = 255} },
    Beam{ .pos = {1000, 500}, .width = 80, .length = 1500, .angle = 0, .duration = 2.0f, .start_timestamp = 132.130f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(-elapsed*SDL_PI_F, SDL_PI_F*2);} },
    Beam{ .pos = {1000, 500}, .width = 30, .length = 1500, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 136.359f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 128, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 128, .b = 0, .a = 255} },
    Beam{ .pos = {1000, 500}, .width = 30, .length = 1500, .angle = 0, .duration = 2.0f, .start_timestamp = 136.359f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 128, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 128, .b = 0, .a = 255} },
    Beam{ .pos = {1720, 880}, .width = 80, .length = 3000, .angle = -2.78f, .duration = 2.0f, .start_timestamp = 141.646f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 255, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 255, .a = 255}, .len_func = [](float elapsed)->float{return 500.0f + 1000.0f*elapsed;} },
};
inline std::vector<Emitter> chronomia_emitters = {{
    // 3144 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 3.094f, .speed = 340, .angle = -1.682f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 3540 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 3.490f, .speed = 297, .angle = -2.541f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 4201 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 4.151f, .speed = 340, .angle = 0.573f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 4597 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 4.547f, .speed = 297, .angle = 1.235f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 4994 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 4.914f, .speed = 297, .angle = 2.073f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 5390 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 5.310f, .speed = 255, .angle = 2.581f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 6315 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 6.235f, .speed = 297, .angle = 0.014f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 6844 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 6.764f, .speed = 297, .angle = -0.733f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 7373 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 7.323f, .speed = 340, .angle = 1.954f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 8430 ms, melody, stream, 5 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 5, .bullet_num = 1, .size = 8, .start_timestamp = 8.350f, .speed = 297, .angle = 1.595f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 9223 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 9.143f, .speed = 297, .angle = 3.069f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 10544 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 10.464f, .speed = 297, .angle = -1.389f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 11073 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 10.993f, .speed = 297, .angle = -2.719f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 11602 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 11.522f, .speed = 297, .angle = 1.617f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 12659 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 12.579f, .speed = 297, .angle = -0.015f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 13055 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 12.975f, .speed = 255, .angle = -0.275f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 13452 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 13.402f, .speed = 340, .angle = 0.101f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 13716 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 13.636f, .speed = 297, .angle = 1.144f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 14112 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 14.032f, .speed = 255, .angle = 2.319f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 14509 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 14.429f, .speed = 297, .angle = 2.933f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 15566 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 15.486f, .speed = 297, .angle = -1.617f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 15831 ms, melody, stream, 10 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 10, .bullet_num = 1, .size = 8, .start_timestamp = 15.751f, .speed = 297, .angle = -1.371f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 16888 ms, melody, stream, 10 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 10, .bullet_num = 1, .size = 8, .start_timestamp = 16.808f, .speed = 297, .angle = -2.649f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 17945 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 17.865f, .speed = 297, .angle = 0.860f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 18738 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 18.658f, .speed = 297, .angle = 2.075f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 20060 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 19.980f, .speed = 297, .angle = 0.047f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 20456 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 20.406f, .speed = 297, .angle = -0.026f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 20853 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 20.773f, .speed = 297, .angle = -0.717f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 21249 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 21.199f, .speed = 297, .angle = -1.679f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 21646 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 21.596f, .speed = 340, .angle = -2.387f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 21910 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 21.860f, .speed = 340, .angle = -2.744f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 22174 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 22.094f, .speed = 350, .angle = -2.979f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 22703 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 22.623f, .speed = 350, .angle = -1.037f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 23232 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 23.152f, .speed = 350, .angle = 0.147f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 23760 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 23.680f, .speed = 350, .angle = 0.274f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 24157 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 24.107f, .speed = 350, .angle = 0.591f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 24289 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 24.209f, .speed = 350, .angle = 0.591f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 24685 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 24.605f, .speed = 300, .angle = 0.790f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 25082 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 25.002f, .speed = 350, .angle = 1.552f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 25610 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 25.560f, .speed = 400, .angle = 2.531f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 25875 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 25.825f, .speed = 400, .angle = 2.861f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 26139 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 26.089f, .speed = 400, .angle = -3.104f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 26403 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 26.323f, .speed = 350, .angle = -2.783f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 26800 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 26.720f, .speed = 300, .angle = -2.086f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 27196 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 27.116f, .speed = 350, .angle = -0.934f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 27989 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 27.909f, .speed = 350, .angle = 0.837f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 28518 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 28.438f, .speed = 350, .angle = 0.417f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 28915 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 28.835f, .speed = 300, .angle = -0.092f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 29311 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 29.231f, .speed = 350, .angle = -0.538f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 29972 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 29.922f, .speed = 350, .angle = -1.886f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 30236 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 30.156f, .speed = 300, .angle = -2.502f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 30632 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 30.552f, .speed = 350, .angle = -2.549f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 31161 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 31.081f, .speed = 350, .angle = 3.022f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 31690 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 31.610f, .speed = 350, .angle = 2.150f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 32218 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 32.138f, .speed = 350, .angle = 2.247f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 32747 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 32.697f, .speed = 400, .angle = 2.693f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 33143 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 33.093f, .speed = 350, .angle = 2.968f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 33540 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 33.460f, .speed = 350, .angle = -2.921f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 34069 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 34.019f, .speed = 400, .angle = -2.361f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 34333 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 34.283f, .speed = 400, .angle = -2.418f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 34597 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 34.547f, .speed = 400, .angle = -1.922f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 34862 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 34.782f, .speed = 350, .angle = -0.375f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 35258 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 35.178f, .speed = 300, .angle = -0.081f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 35655 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 35.575f, .speed = 350, .angle = 0.410f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 36447 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 36.367f, .speed = 350, .angle = 2.389f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 36976 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 36.926f, .speed = 400, .angle = 2.257f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 37373 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 37.323f, .speed = 350, .angle = 2.998f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 37769 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 37.689f, .speed = 350, .angle = -2.792f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 38298 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 38.218f, .speed = 350, .angle = -2.185f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 39091 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 39.011f, .speed = 350, .angle = -1.549f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 39487 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 39.437f, .speed = 350, .angle = -0.645f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 39619 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 39.539f, .speed = 350, .angle = -0.645f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 40016 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 39.966f, .speed = 350, .angle = -0.034f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 40148 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 40.068f, .speed = 350, .angle = -0.034f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 40677 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 40.597f, .speed = 350, .angle = 0.355f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 41205 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 41.125f, .speed = 350, .angle = 1.141f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 41602 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 41.552f, .speed = 350, .angle = 2.068f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 41866 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 41.816f, .speed = 350, .angle = 2.537f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 42130 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 42.080f, .speed = 350, .angle = -1.243f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 42527 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 42.447f, .speed = 350, .angle = -2.046f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 42923 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 42.873f, .speed = 350, .angle = -2.575f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 43055 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 42.975f, .speed = 350, .angle = -2.575f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 43320 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 43.240f, .speed = 350, .angle = -2.812f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 43716 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 43.666f, .speed = 350, .angle = 2.926f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 43848 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 43.768f, .speed = 350, .angle = 2.926f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 44245 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 44.165f, .speed = 300, .angle = 2.614f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 44773 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 44.723f, .speed = 350, .angle = 0.514f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 44906 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 44.826f, .speed = 350, .angle = 0.514f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 45434 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 45.354f, .speed = 350, .angle = 0.043f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 45831 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 45.781f, .speed = 350, .angle = -0.490f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 46227 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 46.147f, .speed = 350, .angle = -1.188f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 46624 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 46.574f, .speed = 350, .angle = -0.809f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 47549 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 47.469f, .speed = 350, .angle = 3.104f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 47946 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 47.896f, .speed = 350, .angle = -2.703f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 48342 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 48.262f, .speed = 350, .angle = -2.089f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 48739 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 48.689f, .speed = 350, .angle = -2.558f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 49663 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 49.583f, .speed = 350, .angle = 1.640f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 50192 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 50.112f, .speed = 350, .angle = 2.352f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 50721 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 50.641f, .speed = 350, .angle = 1.382f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 51250 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 51.170f, .speed = 350, .angle = -2.519f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 51778 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 51.698f, .speed = 350, .angle = -1.397f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 52306 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 52.256f, .speed = 400, .angle = -0.553f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 52571 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 52.521f, .speed = 400, .angle = -0.261f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 52835 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 52.755f, .speed = 350, .angle = -0.177f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 53364 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 53.314f, .speed = 400, .angle = 0.325f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 53629 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 53.579f, .speed = 400, .angle = 0.613f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 53893 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 53.813f, .speed = 350, .angle = 0.892f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 54289 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 54.239f, .speed = 350, .angle = 1.699f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 54421 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 54.341f, .speed = 350, .angle = 1.699f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 54950 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 54.900f, .speed = 400, .angle = 2.921f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 55214 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 55.164f, .speed = 400, .angle = -1.710f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 55478 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 55.428f, .speed = 400, .angle = -2.352f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 55742 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 55.692f, .speed = 400, .angle = -2.956f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 56007 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 55.927f, .speed = 350, .angle = -2.754f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 56271 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 56.221f, .speed = 400, .angle = -2.883f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 56536 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 56.456f, .speed = 350, .angle = -3.117f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 56932 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 56.852f, .speed = 300, .angle = 2.979f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 57329 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 57.249f, .speed = 350, .angle = -2.957f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 57725 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 57.675f, .speed = 350, .angle = 2.535f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 57989 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 57.909f, .speed = 300, .angle = 1.979f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 58386 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 58.336f, .speed = 400, .angle = 1.119f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 58782 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 58.732f, .speed = 350, .angle = 0.735f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 59179 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 59.129f, .speed = 400, .angle = 0.166f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 59575 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 59.525f, .speed = 350, .angle = 0.571f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 59840 ms, melody, stream, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 59.760f, .speed = 300, .angle = 0.599f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 60500 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 60.450f, .speed = 400, .angle = -0.604f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 60896 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 60.846f, .speed = 350, .angle = -1.045f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 61293 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 61.243f, .speed = 400, .angle = -1.814f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 61689 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 61.639f, .speed = 350, .angle = -2.113f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 62218 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 62.168f, .speed = 350, .angle = 1.894f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 62351 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 62.271f, .speed = 350, .angle = 1.894f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 62879 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 62.799f, .speed = 350, .angle = 2.752f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 63804 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 63.754f, .speed = 297, .angle = -2.726f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 64201 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 64.151f, .speed = 340, .angle = -2.725f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 64465 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 64.415f, .speed = 340, .angle = -2.352f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 64862 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 64.812f, .speed = 297, .angle = -1.759f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 65258 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 65.208f, .speed = 340, .angle = -1.063f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 65522 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 65.472f, .speed = 340, .angle = -0.681f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 66051 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 66.001f, .speed = 340, .angle = -0.511f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 66447 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 66.397f, .speed = 297, .angle = -0.291f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 66580 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 66.530f, .speed = 340, .angle = -0.291f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 67637 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 67.587f, .speed = 340, .angle = 0.633f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 68694 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 68.644f, .speed = 340, .angle = 0.637f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 69223 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 69.173f, .speed = 340, .angle = 1.651f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 69751 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 69.701f, .speed = 340, .angle = -2.304f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 70280 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 70.230f, .speed = 340, .angle = -1.659f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 70809 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 70.729f, .speed = 350, .angle = -2.532f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 71337 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 71.287f, .speed = 400, .angle = -2.810f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 71469 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 71.389f, .speed = 300, .angle = -2.810f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 71866 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 71.786f, .speed = 350, .angle = 2.748f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 72262 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 72.182f, .speed = 300, .angle = 2.881f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 72658 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 72.608f, .speed = 400, .angle = 2.540f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 72791 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 72.711f, .speed = 300, .angle = 2.540f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 73055 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 73.005f, .speed = 350, .angle = 2.279f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 73188 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 73.108f, .speed = 350, .angle = 2.279f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 73981 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 73.931f, .speed = 400, .angle = 0.502f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 74245 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 74.195f, .speed = 400, .angle = 0.550f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 74510 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 74.460f, .speed = 400, .angle = 0.298f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 74773 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 74.723f, .speed = 400, .angle = 0.058f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 75038 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 74.958f, .speed = 350, .angle = 0.017f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 76095 ms, melody, stream, 5 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 5, .bullet_num = 1, .size = 8, .start_timestamp = 76.015f, .speed = 350, .angle = -2.391f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 76888 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 76.838f, .speed = 400, .angle = 2.904f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 77020 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 76.940f, .speed = 300, .angle = 2.904f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 77813 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 77.733f, .speed = 300, .angle = 0.142f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 78210 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 78.130f, .speed = 350, .angle = -1.514f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 78738 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 78.688f, .speed = 400, .angle = -2.916f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 78870 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 78.790f, .speed = 300, .angle = -2.916f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 79267 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 79.187f, .speed = 350, .angle = 2.748f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 79663 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 79.583f, .speed = 300, .angle = 2.875f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 79928 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 79.878f, .speed = 350, .angle = 2.671f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 80060 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 79.980f, .speed = 350, .angle = 2.671f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 80324 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 80.244f, .speed = 350, .angle = 2.475f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 80721 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 80.641f, .speed = 300, .angle = 2.124f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 81117 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 81.067f, .speed = 400, .angle = 1.102f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 81381 ms, melody, stream, 10 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 10, .bullet_num = 1, .size = 8, .start_timestamp = 81.301f, .speed = 350, .angle = 1.070f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 82703 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 82.623f, .speed = 350, .angle = 3.024f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 83099 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 83.049f, .speed = 350, .angle = -3.075f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 83232 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 83.152f, .speed = 350, .angle = -3.075f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 83496 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 83.416f, .speed = 350, .angle = -2.845f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 83892 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 83.812f, .speed = 300, .angle = -2.428f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 84289 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 84.239f, .speed = 400, .angle = -1.431f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 84553 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 84.473f, .speed = 350, .angle = -0.850f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 84949 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 84.869f, .speed = 300, .angle = -0.365f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 85346 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 85.296f, .speed = 400, .angle = 0.970f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 85610 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 85.530f, .speed = 350, .angle = 1.391f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 86403 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 86.323f, .speed = 350, .angle = 2.673f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 86932 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 86.882f, .speed = 400, .angle = 2.336f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 87196 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 87.146f, .speed = 400, .angle = 1.878f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 87461 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 87.381f, .speed = 350, .angle = 1.331f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 87725 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 87.645f, .speed = 350, .angle = 1.667f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 88121 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 88.041f, .speed = 300, .angle = 2.626f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 88518 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 88.468f, .speed = 400, .angle = -2.967f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 88782 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 88.702f, .speed = 350, .angle = 3.074f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 89178 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 89.098f, .speed = 300, .angle = -0.055f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 89575 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 89.525f, .speed = 400, .angle = -1.013f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 89839 ms, melody, stream, 10 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 10, .bullet_num = 1, .size = 8, .start_timestamp = 89.759f, .speed = 350, .angle = -1.799f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 90897 ms, melody, stream, 5 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 5, .bullet_num = 1, .size = 8, .start_timestamp = 90.817f, .speed = 350, .angle = -1.074f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 91690 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 91.610f, .speed = 350, .angle = -0.216f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 91954 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 91.874f, .speed = 350, .angle = 0.191f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 92350 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 92.270f, .speed = 300, .angle = 0.238f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 92747 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 92.697f, .speed = 400, .angle = 0.579f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 93011 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 92.931f, .speed = 350, .angle = 0.671f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 93407 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 93.327f, .speed = 300, .angle = 1.174f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 93804 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 93.754f, .speed = 400, .angle = 0.113f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 94069 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 93.989f, .speed = 350, .angle = -1.700f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 94465 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 94.385f, .speed = 300, .angle = -2.493f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 94862 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 94.812f, .speed = 400, .angle = -3.065f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 95126 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 95.076f, .speed = 400, .angle = 2.859f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 95390 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 95.340f, .speed = 400, .angle = 2.720f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 95655 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 95.605f, .speed = 400, .angle = 2.328f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 95919 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 95.839f, .speed = 350, .angle = 2.204f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 96183 ms, melody, stream, 12 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 12, .bullet_num = 1, .size = 8, .start_timestamp = 96.103f, .speed = 297, .angle = 1.258f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 98033 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 97.953f, .speed = 297, .angle = -1.710f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 98958 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 98.908f, .speed = 297, .angle = 1.697f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 99091 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 99.011f, .speed = 297, .angle = 1.697f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 100148 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 100.068f, .speed = 297, .angle = -1.710f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 101205 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 101.125f, .speed = 297, .angle = 1.673f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 102130 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 102.080f, .speed = 297, .angle = -1.663f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 102263 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 102.183f, .speed = 297, .angle = -1.663f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 103188 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 103.138f, .speed = 297, .angle = 0.084f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 103321 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 103.241f, .speed = 297, .angle = 0.084f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 104113 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 104.063f, .speed = 340, .angle = 1.733f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 104641 ms, melody, stream, 10 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 10, .bullet_num = 1, .size = 8, .start_timestamp = 104.561f, .speed = 297, .angle = 3.090f, .angle_increment = 0.40f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 105699 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 105.649f, .speed = 340, .angle = 3.029f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 106756 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 106.676f, .speed = 350, .angle = 0.552f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 107549 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 107.469f, .speed = 350, .angle = 0.736f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 107813 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 107.733f, .speed = 350, .angle = 1.135f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 108474 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 108.424f, .speed = 350, .angle = -0.429f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 108606 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 108.526f, .speed = 350, .angle = -0.429f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 108870 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 108.790f, .speed = 350, .angle = -0.922f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 109399 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 109.319f, .speed = 350, .angle = -2.370f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 109928 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 109.848f, .speed = 350, .angle = 2.160f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 110456 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 110.406f, .speed = 400, .angle = 1.761f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 110721 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 110.641f, .speed = 350, .angle = 2.211f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 110985 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 110.905f, .speed = 350, .angle = 2.486f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 111646 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 111.596f, .speed = 350, .angle = 3.049f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 111778 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 111.698f, .speed = 350, .angle = 3.049f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 112042 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 111.962f, .speed = 350, .angle = 2.996f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 112571 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 112.491f, .speed = 350, .angle = -1.389f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 113099 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 113.049f, .speed = 400, .angle = -0.842f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 113496 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 113.446f, .speed = 350, .angle = -0.371f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 113892 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 113.842f, .speed = 400, .angle = -0.308f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 114950 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 114.870f, .speed = 350, .angle = -3.113f, .angle_increment = 0.50f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 115214 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 115.134f, .speed = 437, .angle = 2.871f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 115346 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 115.296f, .speed = 437, .angle = -0.477f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 115478 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 115.428f, .speed = 500, .angle = 0.420f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 115610 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 115.560f, .speed = 437, .angle = 1.836f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 115743 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 115.693f, .speed = 500, .angle = 2.576f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 115874 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 115.824f, .speed = 437, .angle = 2.906f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 116007 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 115.927f, .speed = 437, .angle = -2.470f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 116139 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 116.059f, .speed = 375, .angle = -2.614f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 116271 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 116.191f, .speed = 437, .angle = -1.848f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 116403 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 116.353f, .speed = 437, .angle = 0.939f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 116535 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 116.485f, .speed = 500, .angle = 0.030f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 116667 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 116.617f, .speed = 437, .angle = -0.619f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 116800 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 116.750f, .speed = 500, .angle = -0.510f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 116931 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 116.881f, .speed = 437, .angle = -2.512f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 117064 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 116.984f, .speed = 437, .angle = -0.046f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 117196 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 117.116f, .speed = 375, .angle = -0.525f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 117328 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 117.248f, .speed = 437, .angle = 0.418f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 117460 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 117.410f, .speed = 437, .angle = 2.058f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 117593 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 117.513f, .speed = 437, .angle = 2.202f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 117725 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 117.675f, .speed = 437, .angle = 0.391f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 117857 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 117.777f, .speed = 437, .angle = 0.391f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 117988 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 117.938f, .speed = 437, .angle = -2.724f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 118121 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 118.071f, .speed = 500, .angle = -1.833f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 118254 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 118.204f, .speed = 437, .angle = -1.567f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 118386 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 118.336f, .speed = 500, .angle = -1.384f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 118518 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 118.468f, .speed = 437, .angle = -1.709f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 118650 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 118.600f, .speed = 500, .angle = 2.188f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 118782 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 118.702f, .speed = 375, .angle = 2.188f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 118914 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 118.864f, .speed = 500, .angle = -3.083f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 119047 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 118.967f, .speed = 375, .angle = 3.140f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 119179 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 119.099f, .speed = 437, .angle = 2.868f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 119311 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 119.231f, .speed = 375, .angle = 0.002f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 119443 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 119.363f, .speed = 437, .angle = -3.072f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 119575 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 119.525f, .speed = 437, .angle = -2.505f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 119707 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 119.657f, .speed = 500, .angle = -3.028f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 119839 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 119.789f, .speed = 437, .angle = 2.802f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 119971 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 119.921f, .speed = 500, .angle = 2.201f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 120104 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 120.054f, .speed = 437, .angle = -2.962f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 120236 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 120.156f, .speed = 437, .angle = -2.962f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 120368 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 120.288f, .speed = 375, .angle = -2.923f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 120500 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 120.420f, .speed = 437, .angle = -2.668f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 120632 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 120.582f, .speed = 437, .angle = -0.079f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 120764 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 120.714f, .speed = 500, .angle = 0.070f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 120896 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 120.846f, .speed = 437, .angle = 0.147f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 121029 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 120.949f, .speed = 437, .angle = -2.053f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 121161 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 121.111f, .speed = 437, .angle = 2.990f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 121293 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 121.243f, .speed = 500, .angle = 3.124f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 121425 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 121.375f, .speed = 437, .angle = -3.110f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 121558 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 121.508f, .speed = 500, .angle = -0.791f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 121690 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 121.640f, .speed = 437, .angle = 0.529f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 121822 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 121.772f, .speed = 500, .angle = 1.080f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 121954 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 121.904f, .speed = 437, .angle = -0.251f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 122086 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 122.036f, .speed = 500, .angle = -2.813f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 122218 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 122.168f, .speed = 437, .angle = -2.241f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 122351 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 122.301f, .speed = 500, .angle = -0.087f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 122483 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 122.433f, .speed = 437, .angle = 2.052f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 122615 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 122.535f, .speed = 437, .angle = 0.250f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 122747 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 122.697f, .speed = 437, .angle = 2.776f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 122879 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 122.799f, .speed = 437, .angle = 2.012f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 123011 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 122.961f, .speed = 437, .angle = 0.744f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 123143 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 123.063f, .speed = 437, .angle = 0.744f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 123276 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 123.226f, .speed = 437, .angle = -1.174f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 123409 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 123.359f, .speed = 500, .angle = -0.490f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 123541 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 123.491f, .speed = 437, .angle = 0.406f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 123672 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 123.592f, .speed = 437, .angle = 1.800f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 123804 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 123.754f, .speed = 437, .angle = 1.129f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 123936 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 123.856f, .speed = 437, .angle = 1.294f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 124069 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 124.019f, .speed = 437, .angle = 2.342f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 124201 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 124.151f, .speed = 500, .angle = 2.911f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 124333 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 124.283f, .speed = 437, .angle = 2.511f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 124465 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 124.385f, .speed = 437, .angle = -2.803f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 124597 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 124.517f, .speed = 375, .angle = -1.312f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 124729 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 124.649f, .speed = 437, .angle = -2.262f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 124861 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 124.811f, .speed = 437, .angle = -2.739f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 124993 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 124.943f, .speed = 500, .angle = -1.842f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 125125 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 125.075f, .speed = 437, .angle = -0.813f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 125257 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 125.207f, .speed = 500, .angle = 0.017f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 125390 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 125.340f, .speed = 437, .angle = -2.282f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 125522 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 125.442f, .speed = 437, .angle = -2.304f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 125655 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 125.575f, .speed = 375, .angle = 2.757f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 125786 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 125.706f, .speed = 437, .angle = -2.580f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 125918 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 125.868f, .speed = 437, .angle = -1.928f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 126050 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 126.000f, .speed = 500, .angle = -2.581f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 126183 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 126.133f, .speed = 437, .angle = -3.013f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 126315 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 126.235f, .speed = 437, .angle = -3.013f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 126580 ms, melody, stream, 5 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 5, .bullet_num = 1, .size = 8, .start_timestamp = 126.500f, .speed = 437, .angle = 1.742f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 126844 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 126.794f, .speed = 500, .angle = 2.700f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 126975 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 126.925f, .speed = 437, .angle = -2.334f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 127108 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 127.028f, .speed = 437, .angle = 2.385f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 127239 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 127.189f, .speed = 437, .angle = -0.961f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 127373 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 127.323f, .speed = 500, .angle = -0.236f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 127505 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 127.455f, .speed = 437, .angle = 1.875f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 127637 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 127.557f, .speed = 437, .angle = 1.875f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 127769 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 127.689f, .speed = 375, .angle = -0.676f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 127901 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 127.821f, .speed = 437, .angle = 1.180f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 128033 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 127.983f, .speed = 437, .angle = -3.012f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 128165 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 128.115f, .speed = 500, .angle = 3.098f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 128298 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 128.248f, .speed = 437, .angle = 0.120f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 128429 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 128.379f, .speed = 500, .angle = 2.856f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 128562 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 128.512f, .speed = 437, .angle = -0.279f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 128694 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 128.614f, .speed = 437, .angle = -0.279f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 128826 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 128.746f, .speed = 375, .angle = 2.511f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 128958 ms, melody, stream, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 128.878f, .speed = 437, .angle = -0.724f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 129090 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 129.040f, .speed = 437, .angle = 0.318f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 129223 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 129.173f, .speed = 500, .angle = -0.148f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 129355 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 129.305f, .speed = 437, .angle = -0.642f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 129487 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 129.437f, .speed = 500, .angle = -2.136f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 129619 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 129.569f, .speed = 437, .angle = 1.186f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 129751 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 129.671f, .speed = 437, .angle = -2.688f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 129884 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 129.834f, .speed = 437, .angle = 2.795f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 130016 ms, melody, stream, 10 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 10, .bullet_num = 1, .size = 8, .start_timestamp = 129.936f, .speed = 437, .angle = -3.049f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 131073 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 130.993f, .speed = 437, .angle = -2.696f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 131336 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 131.286f, .speed = 500, .angle = 0.887f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 131602 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 131.552f, .speed = 500, .angle = -1.632f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 131734 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 131.684f, .speed = 437, .angle = -2.890f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 132130 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 132.050f, .speed = 437, .angle = -2.313f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 132262 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 132.182f, .speed = 375, .angle = -2.623f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 132527 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 132.447f, .speed = 375, .angle = -1.362f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 132659 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 132.579f, .speed = 437, .angle = -0.647f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 132923 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 132.843f, .speed = 437, .angle = -0.502f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 133055 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 132.975f, .speed = 375, .angle = 0.499f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 133320 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 133.240f, .speed = 375, .angle = 0.660f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 133452 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 133.372f, .speed = 437, .angle = 2.687f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 133716 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 133.636f, .speed = 437, .angle = -3.050f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 133848 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 133.768f, .speed = 375, .angle = -1.617f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 134113 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 134.033f, .speed = 375, .angle = -2.853f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 134245 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 134.165f, .speed = 437, .angle = 2.455f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 134509 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 134.429f, .speed = 437, .angle = 2.911f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 134641 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 134.561f, .speed = 375, .angle = 2.862f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 134906 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 134.826f, .speed = 375, .angle = 2.282f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 135038 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 134.958f, .speed = 437, .angle = 0.746f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 135302 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 135.222f, .speed = 437, .angle = 0.759f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 135434 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 135.354f, .speed = 375, .angle = 0.307f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 135699 ms, melody, stream, 7 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 7, .bullet_num = 1, .size = 8, .start_timestamp = 135.619f, .speed = 375, .angle = -2.125f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 135831 ms, melody, stream, 1 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 1, .bullet_num = 1, .size = 8, .start_timestamp = 135.751f, .speed = 437, .angle = 2.127f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 135963 ms, melody, stream, 1 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 1, .bullet_num = 1, .size = 8, .start_timestamp = 135.883f, .speed = 375, .angle = -2.375f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 136095 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 136.015f, .speed = 437, .angle = 2.816f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 136227 ms, melody, stream, 1 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 1, .bullet_num = 1, .size = 8, .start_timestamp = 136.147f, .speed = 375, .angle = -1.403f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 136492 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 136.412f, .speed = 375, .angle = -1.372f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 136624 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 136.544f, .speed = 437, .angle = 2.120f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 136888 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 136.808f, .speed = 437, .angle = -0.652f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 137020 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 136.940f, .speed = 375, .angle = -2.963f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 137284 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 137.204f, .speed = 375, .angle = -0.128f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 137417 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 137.337f, .speed = 437, .angle = -0.983f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 137681 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 137.601f, .speed = 437, .angle = 0.660f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 137813 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 137.733f, .speed = 375, .angle = 0.048f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 138077 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 137.997f, .speed = 375, .angle = 0.557f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 138210 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 138.130f, .speed = 437, .angle = 0.879f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 138474 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 138.394f, .speed = 437, .angle = 0.368f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 138606 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 138.526f, .speed = 375, .angle = 2.700f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 138870 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 138.790f, .speed = 375, .angle = 0.753f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 139003 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 138.923f, .speed = 437, .angle = 2.524f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 139267 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 139.187f, .speed = 437, .angle = 1.151f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 139399 ms, melody, stream, 9 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 9, .bullet_num = 1, .size = 8, .start_timestamp = 139.319f, .speed = 375, .angle = 2.206f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 139663 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 139.583f, .speed = 375, .angle = 1.971f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 139795 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 139.715f, .speed = 437, .angle = -0.963f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 139928 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 139.848f, .speed = 375, .angle = 2.371f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 140060 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 139.980f, .speed = 437, .angle = -0.591f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 140192 ms, melody, stream, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 140.112f, .speed = 375, .angle = 2.551f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 140324 ms, melody, stream, 1 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.08f, .waves = 1, .bullet_num = 1, .size = 8, .start_timestamp = 140.244f, .speed = 437, .angle = -0.393f, .angle_increment = 0.60f, .angle_spread = 0, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 140456 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 140.406f, .speed = 437, .angle = 2.646f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // 141646 ms, melody, fan
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 5, .size = 5, .start_timestamp = 141.596f, .speed = 340, .angle = 2.661f, .angle_increment = 0, .angle_spread = 1.2f, .color = {.r=255, .g=0, .b=0, .a=255} },
}};


struct Level {
    std::vector<Emitter> emitters = {};
    std::vector<Projectile> projectiles = {};
    std::vector<Beam> beams = {};

    float duration = 0;

    std::string path;

    void reset();
};

struct LevelManager {
    bool finished = false;
    int levelIndex;
    float elapsed;
  
    std::vector<Level> levels = {{chronomia_emitters, {}, chronomia_beams, 149.234f, "./Assets/Chronomia.mp3"}};

    void load(int index);
    
    void update(float dt, float time);
  
    void render(SDL_Renderer *renderer, SDL_Texture *bullet_texture);
  
    void reset();
};