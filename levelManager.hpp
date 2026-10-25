#pragma once

#include "attacks.hpp"

#include <vector>
#include <SDL3_mixer/SDL_mixer.h>

inline std::vector<Beam> chronomia_beams = {
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 21.174f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 29.699f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 38.091f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 44.434f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 48.663f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 57.121f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 61.351f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 62.408f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 69.809f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 86.725f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 95.183f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 105.756f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 114.214f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 122.672f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 129.016f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 131.130f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 135.359f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
    Beam{ .pos = {1000, 500}, .width = 50, .length = 3000, .angle = SDL_PI_F/2.0f, .duration = 2.0f, .start_timestamp = 140.646f, .anticipation_time = 1, .warning_color = {.r = 255, .g = 0, .b = 0, .a = 100}, .normal_color = {.r = 255, .g = 0, .b = 0, .a = 255}, .ang_func = [](float elapsed)->float{return fmod(elapsed/2*SDL_PI_F, SDL_PI_F*2);}, .pos_func = [](float elapsed)->SDL_FPoint{return{Config::WINDOW_WIDTH/10.0f*elapsed, 0};} },
};

inline std::vector<Emitter> chronomia_emitters = {
    // osu 3144 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 3.094f, .speed = 300, .angle = -1.682f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 3540 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 3.490f, .speed = 300, .angle = -2.541f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 4201 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 4.151f, .speed = 300, .angle = 0.573f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 4597 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 4.547f, .speed = 300, .angle = 1.235f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 4994 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 4.894f, .speed = 200, .angle = 2.073f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 5390 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 5.290f, .speed = 200, .angle = 2.581f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 6315 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 6.215f, .speed = 200, .angle = 0.014f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 6844 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 6.744f, .speed = 200, .angle = -0.733f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 7373 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 7.323f, .speed = 300, .angle = 1.954f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 8430 ms, slider, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 8.330f, .speed = 200, .angle = 1.595f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 9223 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 9.123f, .speed = 200, .angle = 3.069f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 10544 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 10.444f, .speed = 200, .angle = -1.389f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 11073 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 10.973f, .speed = 200, .angle = -2.719f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 11602 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 11.502f, .speed = 200, .angle = 1.617f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 12659 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 12.559f, .speed = 200, .angle = -0.015f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 13055 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 12.955f, .speed = 200, .angle = -0.275f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 13452 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 13.402f, .speed = 300, .angle = 0.101f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 13716 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 13.616f, .speed = 200, .angle = 1.144f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 14112 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 14.012f, .speed = 200, .angle = 2.319f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 14509 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 14.409f, .speed = 200, .angle = 2.933f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 15566 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 15.466f, .speed = 200, .angle = -1.617f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 15831 ms, slider, 8 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 8, .bullet_num = 1, .size = 8, .start_timestamp = 15.731f, .speed = 200, .angle = -1.371f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 16888 ms, slider, 8 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 8, .bullet_num = 1, .size = 8, .start_timestamp = 16.788f, .speed = 200, .angle = -2.649f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 17945 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 17.845f, .speed = 200, .angle = 0.860f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 18738 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 18.638f, .speed = 200, .angle = 2.075f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 20060 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 19.960f, .speed = 200, .angle = 0.047f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 20456 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 20.406f, .speed = 300, .angle = -0.026f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 20853 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 20.753f, .speed = 200, .angle = -0.717f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 21249 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 21.199f, .speed = 300, .angle = -1.679f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 21646 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 21.596f, .speed = 300, .angle = -2.387f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 21910 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 21.860f, .speed = 300, .angle = -2.744f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 22174 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 22.074f, .speed = 200, .angle = -2.979f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 22703 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 22.603f, .speed = 200, .angle = -1.037f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 23232 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 23.132f, .speed = 200, .angle = 0.147f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 23760 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 23.660f, .speed = 200, .angle = 0.274f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 24157 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 24.107f, .speed = 300, .angle = 0.591f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 24289 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 24.189f, .speed = 200, .angle = 0.591f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 24685 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 24.585f, .speed = 200, .angle = 0.790f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 25082 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 24.982f, .speed = 200, .angle = 1.552f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 25610 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 25.560f, .speed = 300, .angle = 2.531f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 25875 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 25.825f, .speed = 300, .angle = 2.861f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 26139 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 26.089f, .speed = 300, .angle = -3.104f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 26403 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 26.303f, .speed = 200, .angle = -2.783f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 26800 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 26.700f, .speed = 200, .angle = -2.086f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 27196 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 27.096f, .speed = 200, .angle = -0.934f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 27989 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 27.889f, .speed = 200, .angle = 0.837f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 28518 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 28.418f, .speed = 200, .angle = 0.417f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 28915 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 28.815f, .speed = 200, .angle = -0.092f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 29311 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 29.211f, .speed = 200, .angle = -0.538f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 29972 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 29.922f, .speed = 300, .angle = -1.886f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 30236 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 30.136f, .speed = 200, .angle = -2.502f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 30632 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 30.532f, .speed = 200, .angle = -2.549f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 31161 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 31.061f, .speed = 200, .angle = 3.022f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 31690 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 31.590f, .speed = 200, .angle = 2.150f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 32218 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 32.118f, .speed = 200, .angle = 2.247f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 32747 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 32.697f, .speed = 300, .angle = 2.693f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 33143 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 33.093f, .speed = 300, .angle = 2.968f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 33540 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 33.440f, .speed = 200, .angle = -2.921f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 34069 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 34.019f, .speed = 300, .angle = -2.361f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 34333 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 34.283f, .speed = 300, .angle = -2.418f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 34597 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 34.547f, .speed = 300, .angle = -1.922f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 34862 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 34.762f, .speed = 200, .angle = -0.375f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 35258 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 35.158f, .speed = 200, .angle = -0.081f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 35655 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 35.555f, .speed = 200, .angle = 0.410f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 36447 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 36.347f, .speed = 200, .angle = 2.389f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 36976 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 36.926f, .speed = 300, .angle = 2.257f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 37373 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 37.323f, .speed = 300, .angle = 2.998f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 37769 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 37.669f, .speed = 200, .angle = -2.792f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 38298 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 38.198f, .speed = 200, .angle = -2.185f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 39091 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 38.991f, .speed = 200, .angle = -1.549f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 39487 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 39.437f, .speed = 300, .angle = -0.645f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 39619 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 39.519f, .speed = 200, .angle = -0.645f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 40016 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 39.966f, .speed = 300, .angle = -0.034f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 40148 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 40.048f, .speed = 200, .angle = -0.034f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 40677 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 40.577f, .speed = 200, .angle = 0.355f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 41205 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 41.105f, .speed = 200, .angle = 1.141f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 41602 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 41.552f, .speed = 300, .angle = 2.068f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 41866 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 41.816f, .speed = 300, .angle = 2.537f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 42130 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 42.080f, .speed = 300, .angle = -1.243f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 42527 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 42.427f, .speed = 200, .angle = -2.046f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 42923 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 42.873f, .speed = 300, .angle = -2.575f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 43055 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 42.955f, .speed = 200, .angle = -2.575f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 43320 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 43.220f, .speed = 200, .angle = -2.812f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 43716 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 43.666f, .speed = 300, .angle = 2.926f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 43848 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 43.748f, .speed = 200, .angle = 2.926f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 44245 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 44.145f, .speed = 200, .angle = 2.614f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 44773 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 44.723f, .speed = 300, .angle = 0.514f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 44906 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 44.806f, .speed = 200, .angle = 0.514f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 45434 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 45.334f, .speed = 200, .angle = 0.043f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 45831 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 45.781f, .speed = 300, .angle = -0.490f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 46227 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 46.127f, .speed = 200, .angle = -1.188f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 46624 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 46.574f, .speed = 300, .angle = -0.809f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 47549 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 47.449f, .speed = 200, .angle = 3.104f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 47946 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 47.896f, .speed = 300, .angle = -2.703f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 48342 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 48.242f, .speed = 200, .angle = -2.089f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 48739 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 48.689f, .speed = 300, .angle = -2.558f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 49663 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 49.563f, .speed = 200, .angle = 1.640f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 50192 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 50.092f, .speed = 200, .angle = 2.352f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 50721 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 50.621f, .speed = 200, .angle = 1.382f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 51250 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 51.150f, .speed = 200, .angle = -2.519f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 51778 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 51.678f, .speed = 200, .angle = -1.397f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 52306 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 52.256f, .speed = 300, .angle = -0.553f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 52571 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 52.521f, .speed = 300, .angle = -0.261f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 52835 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 52.735f, .speed = 200, .angle = -0.177f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 53364 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 53.314f, .speed = 300, .angle = 0.325f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 53629 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 53.579f, .speed = 300, .angle = 0.613f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 53893 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 53.793f, .speed = 200, .angle = 0.892f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 54289 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 54.239f, .speed = 300, .angle = 1.699f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 54421 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 54.321f, .speed = 200, .angle = 1.699f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 54950 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 54.900f, .speed = 300, .angle = 2.921f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 55214 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 55.164f, .speed = 300, .angle = -1.710f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 55478 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 55.428f, .speed = 300, .angle = -2.352f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 55742 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 55.692f, .speed = 300, .angle = -2.956f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 56007 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 55.907f, .speed = 200, .angle = -2.754f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 56271 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 56.221f, .speed = 300, .angle = -2.883f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 56536 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 56.436f, .speed = 200, .angle = -3.117f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 56932 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 56.832f, .speed = 200, .angle = 2.979f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 57329 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 57.229f, .speed = 200, .angle = -2.957f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 57725 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 57.675f, .speed = 300, .angle = 2.535f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 57989 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 57.889f, .speed = 200, .angle = 1.979f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 58386 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 58.336f, .speed = 300, .angle = 1.119f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 58782 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 58.732f, .speed = 300, .angle = 0.735f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 59179 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 59.129f, .speed = 300, .angle = 0.166f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 59575 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 59.525f, .speed = 300, .angle = 0.571f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 59840 ms, slider, 5 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 5, .bullet_num = 1, .size = 8, .start_timestamp = 59.740f, .speed = 200, .angle = 0.599f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 60500 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 60.450f, .speed = 300, .angle = -0.604f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 60896 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 60.846f, .speed = 300, .angle = -1.045f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 61293 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 61.243f, .speed = 300, .angle = -1.814f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 61689 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 61.639f, .speed = 300, .angle = -2.113f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 62218 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 62.168f, .speed = 300, .angle = 1.894f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 62351 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 62.251f, .speed = 200, .angle = 1.894f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 62879 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 62.779f, .speed = 200, .angle = 2.752f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 63804 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 63.754f, .speed = 300, .angle = -2.726f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 64201 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 64.151f, .speed = 300, .angle = -2.725f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 64465 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 64.415f, .speed = 300, .angle = -2.352f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 64862 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 64.812f, .speed = 300, .angle = -1.759f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 65258 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 65.208f, .speed = 300, .angle = -1.063f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 65522 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 65.472f, .speed = 300, .angle = -0.681f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 66051 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 66.001f, .speed = 300, .angle = -0.511f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 66447 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 66.397f, .speed = 300, .angle = -0.291f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 66580 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 66.530f, .speed = 300, .angle = -0.291f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 67637 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 67.587f, .speed = 300, .angle = 0.633f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 68694 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 68.644f, .speed = 300, .angle = 0.637f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 69223 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 69.173f, .speed = 300, .angle = 1.651f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 69751 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 69.701f, .speed = 300, .angle = -2.304f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 70280 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 70.230f, .speed = 300, .angle = -1.659f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 70809 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 70.709f, .speed = 200, .angle = -2.532f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 71337 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 71.287f, .speed = 300, .angle = -2.810f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 71469 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 71.369f, .speed = 200, .angle = -2.810f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 71866 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 71.766f, .speed = 200, .angle = 2.748f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 72262 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 72.162f, .speed = 200, .angle = 2.881f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 72658 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 72.608f, .speed = 300, .angle = 2.540f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 72791 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 72.691f, .speed = 200, .angle = 2.540f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 73055 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 73.005f, .speed = 300, .angle = 2.279f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 73188 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 73.088f, .speed = 200, .angle = 2.279f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 73981 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 73.931f, .speed = 300, .angle = 0.502f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 74245 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 74.195f, .speed = 300, .angle = 0.550f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 74510 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 74.460f, .speed = 300, .angle = 0.298f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 74773 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 74.723f, .speed = 300, .angle = 0.058f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 75038 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 74.938f, .speed = 200, .angle = 0.017f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 76095 ms, slider, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 75.995f, .speed = 200, .angle = -2.391f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 76888 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 76.838f, .speed = 300, .angle = 2.904f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 77020 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 76.920f, .speed = 200, .angle = 2.904f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 77813 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 77.713f, .speed = 200, .angle = 0.142f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 78210 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 78.110f, .speed = 200, .angle = -1.514f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 78738 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 78.688f, .speed = 300, .angle = -2.916f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 78870 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 78.770f, .speed = 200, .angle = -2.916f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 79267 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 79.167f, .speed = 200, .angle = 2.748f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 79663 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 79.563f, .speed = 200, .angle = 2.875f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 79928 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 79.878f, .speed = 300, .angle = 2.671f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 80060 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 79.960f, .speed = 200, .angle = 2.671f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 80324 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 80.224f, .speed = 200, .angle = 2.475f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 80721 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 80.621f, .speed = 200, .angle = 2.124f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 81117 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 81.067f, .speed = 300, .angle = 1.102f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 81381 ms, slider, 8 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 8, .bullet_num = 1, .size = 8, .start_timestamp = 81.281f, .speed = 200, .angle = 1.070f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 82703 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 82.603f, .speed = 200, .angle = 3.024f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 83099 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 83.049f, .speed = 300, .angle = -3.075f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 83232 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 83.132f, .speed = 200, .angle = -3.075f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 83496 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 83.396f, .speed = 200, .angle = -2.845f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 83892 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 83.792f, .speed = 200, .angle = -2.428f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 84289 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 84.239f, .speed = 300, .angle = -1.431f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 84553 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 84.453f, .speed = 200, .angle = -0.850f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 84949 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 84.849f, .speed = 200, .angle = -0.365f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 85346 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 85.296f, .speed = 300, .angle = 0.970f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 85610 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 85.510f, .speed = 200, .angle = 1.391f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 86403 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 86.303f, .speed = 200, .angle = 2.673f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 86932 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 86.882f, .speed = 300, .angle = 2.336f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 87196 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 87.146f, .speed = 300, .angle = 1.878f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 87461 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 87.361f, .speed = 200, .angle = 1.331f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 87725 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 87.625f, .speed = 200, .angle = 1.667f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 88121 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 88.021f, .speed = 200, .angle = 2.626f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 88518 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 88.468f, .speed = 300, .angle = -2.967f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 88782 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 88.682f, .speed = 200, .angle = 3.074f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 89178 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 89.078f, .speed = 200, .angle = -0.055f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 89575 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 89.525f, .speed = 300, .angle = -1.013f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 89839 ms, slider, 8 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 8, .bullet_num = 1, .size = 8, .start_timestamp = 89.739f, .speed = 200, .angle = -1.799f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 90897 ms, slider, 4 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 4, .bullet_num = 1, .size = 8, .start_timestamp = 90.797f, .speed = 200, .angle = -1.074f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 91690 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 91.590f, .speed = 200, .angle = -0.216f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 91954 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 91.854f, .speed = 200, .angle = 0.191f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 92350 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 92.250f, .speed = 200, .angle = 0.238f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 92747 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 92.697f, .speed = 300, .angle = 0.579f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 93011 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 92.911f, .speed = 200, .angle = 0.671f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 93407 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 93.307f, .speed = 200, .angle = 1.174f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 93804 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 93.754f, .speed = 300, .angle = 0.113f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 94069 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 93.969f, .speed = 200, .angle = -1.700f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 94465 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 94.365f, .speed = 200, .angle = -2.493f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 94862 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 94.812f, .speed = 300, .angle = -3.065f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 95126 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 95.076f, .speed = 300, .angle = 2.859f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 95390 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 95.340f, .speed = 300, .angle = 2.720f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 95655 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 95.605f, .speed = 300, .angle = 2.328f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 95919 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 95.819f, .speed = 200, .angle = 2.204f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 96183 ms, slider, 11 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 11, .bullet_num = 1, .size = 8, .start_timestamp = 96.083f, .speed = 200, .angle = 1.258f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 98033 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 97.933f, .speed = 200, .angle = -1.710f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 98958 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 98.908f, .speed = 300, .angle = 1.697f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 99091 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 98.991f, .speed = 200, .angle = 1.697f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 100148 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 100.048f, .speed = 200, .angle = -1.710f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 101205 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 101.105f, .speed = 200, .angle = 1.673f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 102130 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 102.080f, .speed = 300, .angle = -1.663f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 102263 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 102.163f, .speed = 200, .angle = -1.663f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 103188 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 103.138f, .speed = 300, .angle = 0.084f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 103321 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 103.221f, .speed = 200, .angle = 0.084f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 104113 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 104.063f, .speed = 300, .angle = 1.733f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 104641 ms, slider, 8 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 8, .bullet_num = 1, .size = 8, .start_timestamp = 104.541f, .speed = 200, .angle = 3.090f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 105699 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 105.649f, .speed = 300, .angle = 3.029f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 106756 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 106.656f, .speed = 200, .angle = 0.552f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 107549 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 107.449f, .speed = 200, .angle = 0.736f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 107813 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 107.713f, .speed = 200, .angle = 1.135f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 108474 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 108.424f, .speed = 300, .angle = -0.429f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 108606 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 108.506f, .speed = 200, .angle = -0.429f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 108870 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 108.770f, .speed = 200, .angle = -0.922f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 109399 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 109.299f, .speed = 200, .angle = -2.370f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 109928 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 109.828f, .speed = 200, .angle = 2.160f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 110456 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 110.406f, .speed = 300, .angle = 1.761f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 110721 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 110.621f, .speed = 200, .angle = 2.211f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 110985 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 110.885f, .speed = 200, .angle = 2.486f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 111646 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 111.596f, .speed = 300, .angle = 3.049f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 111778 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 111.678f, .speed = 200, .angle = 3.049f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 112042 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 111.942f, .speed = 200, .angle = 2.996f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 112571 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 112.471f, .speed = 200, .angle = -1.389f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 113099 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 113.049f, .speed = 300, .angle = -0.842f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 113496 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 113.446f, .speed = 300, .angle = -0.371f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 113892 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 113.842f, .speed = 300, .angle = -0.308f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 114950 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 114.850f, .speed = 200, .angle = -3.113f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 115214 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 115.114f, .speed = 200, .angle = 2.871f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 115743 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 115.693f, .speed = 300, .angle = 2.576f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 116007 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 115.907f, .speed = 200, .angle = -2.470f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 116271 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 116.171f, .speed = 200, .angle = -1.848f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 116800 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 116.750f, .speed = 300, .angle = -0.510f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 117064 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 116.964f, .speed = 200, .angle = -0.046f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 117328 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 117.228f, .speed = 200, .angle = 0.418f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 117725 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 117.675f, .speed = 300, .angle = 0.391f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 117857 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 117.757f, .speed = 200, .angle = 0.391f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 118650 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 118.600f, .speed = 300, .angle = 2.188f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 118782 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 118.682f, .speed = 200, .angle = 2.188f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 119179 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 119.079f, .speed = 200, .angle = 2.868f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 119443 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 119.343f, .speed = 200, .angle = -3.072f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 120104 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 120.054f, .speed = 300, .angle = -2.962f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 120236 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 120.136f, .speed = 200, .angle = -2.962f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 120500 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 120.400f, .speed = 200, .angle = -2.668f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 121029 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 120.929f, .speed = 200, .angle = -2.053f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 121558 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 121.508f, .speed = 300, .angle = -0.791f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 121954 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 121.904f, .speed = 300, .angle = -0.251f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 122351 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 122.301f, .speed = 300, .angle = -0.087f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 122615 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 122.515f, .speed = 200, .angle = 0.250f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 123011 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 122.961f, .speed = 300, .angle = 0.744f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 123143 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 123.043f, .speed = 200, .angle = 0.744f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 123672 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 123.572f, .speed = 200, .angle = 1.800f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 124201 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 124.151f, .speed = 300, .angle = 2.911f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 124465 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 124.365f, .speed = 200, .angle = -2.803f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 124729 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 124.629f, .speed = 200, .angle = -2.262f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 125390 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 125.340f, .speed = 300, .angle = -2.282f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 125522 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 125.422f, .speed = 200, .angle = -2.304f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 125786 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 125.686f, .speed = 200, .angle = -2.580f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 126183 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 126.133f, .speed = 300, .angle = -3.013f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 126315 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 126.215f, .speed = 200, .angle = -3.013f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 126844 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 126.794f, .speed = 300, .angle = 2.700f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 127108 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 127.008f, .speed = 200, .angle = 2.385f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 127505 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 127.455f, .speed = 300, .angle = 1.875f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 127637 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 127.537f, .speed = 200, .angle = 1.875f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 127901 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 127.801f, .speed = 200, .angle = 1.180f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 128298 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 128.248f, .speed = 300, .angle = 0.120f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 128562 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 128.512f, .speed = 300, .angle = -0.279f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 128694 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 128.594f, .speed = 200, .angle = -0.279f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 128958 ms, slider, 3 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 3, .bullet_num = 1, .size = 8, .start_timestamp = 128.858f, .speed = 200, .angle = -0.724f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 129487 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 129.437f, .speed = 300, .angle = -2.136f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 129751 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 129.651f, .speed = 200, .angle = -2.688f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 130016 ms, slider, 8 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 8, .bullet_num = 1, .size = 8, .start_timestamp = 129.916f, .speed = 200, .angle = -3.049f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 131073 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 130.973f, .speed = 200, .angle = -2.696f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 131734 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 131.684f, .speed = 300, .angle = -2.890f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 132130 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 132.030f, .speed = 200, .angle = -2.313f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 132527 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 132.427f, .speed = 200, .angle = -1.362f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 132923 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 132.823f, .speed = 200, .angle = -0.502f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 133320 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 133.220f, .speed = 200, .angle = 0.660f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 133716 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 133.616f, .speed = 200, .angle = -3.050f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 134113 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 134.013f, .speed = 200, .angle = -2.853f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 134509 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 134.409f, .speed = 200, .angle = 2.911f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 134906 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 134.806f, .speed = 200, .angle = 2.282f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 135302 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 135.202f, .speed = 200, .angle = 0.759f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 135699 ms, slider, 6 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 6, .bullet_num = 1, .size = 8, .start_timestamp = 135.599f, .speed = 200, .angle = -2.125f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 136492 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 136.392f, .speed = 200, .angle = -1.372f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 136888 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 136.788f, .speed = 200, .angle = -0.652f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 137284 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 137.184f, .speed = 200, .angle = -0.128f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 137681 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 137.581f, .speed = 200, .angle = 0.660f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 138077 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 137.977f, .speed = 200, .angle = 0.557f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 138474 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 138.374f, .speed = 200, .angle = 0.368f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 138870 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 138.770f, .speed = 200, .angle = 0.753f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 139267 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 139.167f, .speed = 200, .angle = 1.151f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 139663 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 139.563f, .speed = 200, .angle = 1.971f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 139928 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 139.828f, .speed = 200, .angle = 2.371f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 140192 ms, slider, 2 waves
    Emitter{ .pos = {1000, 500}, .interval = 0.1f, .waves = 2, .bullet_num = 1, .size = 8, .start_timestamp = 140.092f, .speed = 200, .angle = 2.551f, .angle_increment = 0.4f, .angle_spread = 0, .color = {.r=0, .g=0, .b=255, .a=255} },
    // osu 140456 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 140.406f, .speed = 300, .angle = 2.646f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
    // osu 141646 ms, circle
    Emitter{ .pos = {1000, 500}, .interval = 0.05f, .waves = 1, .bullet_num = 3, .size = 5, .start_timestamp = 141.596f, .speed = 300, .angle = 2.661f, .angle_increment = 0, .angle_spread = 0.9f, .color = {.r=255, .g=0, .b=0, .a=255} },
};

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
  
    std::vector<Level> levels = {{chronomia_emitters, {}, chronomia_beams, 100.0f, "./Assets/Chronomia.mp3"}};

    void load(int index);
    
    void update(float dt, float time);
  
    void render(SDL_Renderer *renderer, SDL_Texture *bullet_texture);
  
    void reset();
};