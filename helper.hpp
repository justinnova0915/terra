#pragma once

#include "config.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <string>

namespace Helper {
    std::string get_resource_path(const std::string path);
}