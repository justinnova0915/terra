#pragma once

#include "config.hpp"
#include "helper.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
#include <functional>
#include <cmath>

struct PosFunc {

    enum class Type {
        Static,
        Linear,
        Lerp,
        Orbit,
        Homing
    };

    struct Params {
        Type state = Type::Static;
        SDL_FPoint startPos = {0.0f, 0.0f};
        SDL_FPoint pos = {0.0f, 0.0f};
        float elapsed = 0.0f;


        SDL_FPoint velocity = {0.0f, 0.0f};
        float duration = 1.0f;
        
        SDL_FPoint lerp_end = {0.0f, 0.0f};
        
        bool orbit_pingPong = false;
        float orbit_radius = 0.0f;
        float orbit_startAngle = 0.0f;
        float orbit_endAngle = 0.0f;
    };

    Params param;

    SDL_FPoint update(float dt, SDL_FPoint playerPos) {

        param.elapsed += dt;

        if (param.state == Type::Static) {
            param.pos = param.startPos;
        } else if (param.state == Type::Linear) {
            param.pos = {param.pos.x + dt*param.velocity.x, 
                    param.pos.y + dt*param.velocity.y};
        } else if (param.state == Type::Lerp) {
            param.pos = {param.startPos.x + param.elapsed/param.duration*(param.lerp_end.x-param.startPos.x), 
                    param.startPos.y + param.elapsed/param.duration*(param.lerp_end.y-param.startPos.y)};
        } else if (param.state == Type::Orbit) {
            float factor = param.orbit_pingPong ? (1.0f-std::abs(std::fmod(param.elapsed/param.duration, 2.0f)-1.0f)):std::fmod(param.elapsed / param.duration, 1.0f);

            param.pos = {param.startPos.x + std::cos(param.orbit_startAngle+factor*(param.orbit_endAngle-param.orbit_startAngle))*param.orbit_radius,
                    param.startPos.y + std::sin(param.orbit_startAngle+factor*(param.orbit_endAngle-param.orbit_startAngle))*param.orbit_radius};
        // } else if (param.state == Type::Homing) {
        //     param.pos = {param.pos.x + dt*param.velocity.x*(playerPos.x-param.pos.x)/
        //                 std::sqrt((playerPos.x-param.pos.x)*(playerPos.x-param.pos.x)+(playerPos.y-param.pos.y)*(playerPos.y-param.pos.y)), 
        //             param.pos.y + dt*param.velocity.y*(playerPos.y-param.pos.y)/
        //                 std::sqrt((playerPos.x-param.pos.x)*(playerPos.x-param.pos.x)+(playerPos.y-param.pos.y)*(playerPos.y-param.pos.y))};
        } else {
            // idk why this would EVER trigger but imma just leave this here
        }

        return param.pos;
    }
};

struct AngFunc {
    enum class Type {
        Static,
        Linear,
        Oscillate,
        PingPong,
        Homing,
        Discrete
    };

    struct Params {
        Type state = Type::Static;

        float rate = 0.0f;

        float elapsed = 0.0f;

        float startAng = 0.0f;
        float endAng = 0.0f;

        float duration = 1.0f;

        float discrete_wave = 0.0f;
        float discrete_step = 0.0f;
    };

    Params param;

    float update(SDL_FPoint pos, SDL_FPoint playerPos, float curAng, float dt) {

        param.elapsed += dt;

        if (param.state == Type::Static) {
            curAng = curAng;
        } else if (param.state == Type::Linear) {
            curAng = curAng + dt*param.rate;
        } else if (param.state == Type::Oscillate) {
            curAng = param.startAng + ((std::sin(param.elapsed*param.rate)+1)/2.0f)*(param.endAng-param.startAng);
        } else if (param.state == Type::PingPong) {
            curAng = param.startAng + (1.0f-std::abs(std::fmod(param.elapsed/param.duration, 2.0f)-1.0f)) * (param.endAng - param.startAng);
        } else if (param.state == Type::Homing) {
            curAng = std::atan2(playerPos.y - pos.y, playerPos.x - pos.x);
        } else if (param.state == Type::Discrete) {
            curAng = param.startAng + std::floor(param.elapsed/param.duration)*param.discrete_step;
        }

        return curAng;
    }
};

struct LenFunc {
    enum class Type {

    };

    // or here
};

struct Projectile {
    SDL_FPoint pos = {0,0};
    float r = 0;
    float theta = 0;
    SDL_Color color {.r=0, .g=0, .b=0, .a=0};
    float speed = 0;
    bool alive = true;
    void update(float dt);

    void render(SDL_Renderer* renderer, SDL_Texture* bullet_texture);
};

struct Emitter {
    SDL_FPoint pos = {0,0};
    float interval = 0;
    int waves = 0;
    int bullet_num = 0;
    float size = 0;

    float start_timestamp = 0;

    float speed = 0;

    float elapsed = 0; 
    float angle = 0;
    float angle_increment = 0;
    float angle_spread = 0;

    SDL_Color color {.r=0, .g=0, .b=0, .a=0};

    PosFunc pos_func = {};
    AngFunc ang_func = {};

    bool alive = true;

    void update(float dt, float time, std::vector<Projectile> &projectiles, SDL_FPoint playerPos);
};

struct Beam {
    SDL_FPoint pos = {};
    float width = 0;
    float length = 0;
    float angle = 0;
    float elapsed = 0;
    float duration = 0;

    float start_timestamp = 0;

    float anticipation_time = 0;
    SDL_Color warning_color = {};
    SDL_Color normal_color = {};


    AngFunc ang_func = {};
    PosFunc pos_func = {};
    std::function<float(float elapsed)> len_func = nullptr;

    SDL_Color current_color = {};

    bool alive = true;

    void update(float dt, float time, SDL_FPoint playerPos);

    void render(SDL_Renderer* renderer);
};