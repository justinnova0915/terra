#pragma once

#include <SDL3_mixer/SDL_mixer.h>
#include <string>

struct Audio {

    MIX_Mixer *mixer = nullptr;
    MIX_Track *track = nullptr;
    MIX_Audio* music = nullptr;

    bool init();

    bool load_song(std::string path);

    void play();

    void pause();

    void resume();
};