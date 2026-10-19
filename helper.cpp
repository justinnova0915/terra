#include "config.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <vector>
#include <functional>
#include <cmath>
#include <string>

namespace Helper {
    std::string get_resource_path(const std::string path) {
        const char* base = SDL_GetBasePath();
        std::string full_path = base ? std::string(base) + path : path;
        return full_path;
    } 
}