#pragma once

#include "audio.hpp"

#include <SDL3_mixer/SDL_mixer.h>
#include <string>

bool Audio::init() {
    if (!SDL_Init(SDL_INIT_AUDIO)) {
        SDL_Log("SDL Error: %s", SDL_GetError());
        return 1;
    }
    
    if (!MIX_Init()) {
        SDL_Log("SDL Error: %s", SDL_GetError());
        return 1;
    }
    
    mixer = MIX_CreateMixerDevice(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, NULL);
    track = MIX_CreateTrack(mixer);

    return 0;
}

bool Audio::load_song(std::string path) {
    music = MIX_LoadAudio(mixer, path.c_str(), false);
    if (!music) {
        return 1;
    } 

    MIX_SetTrackAudio(track, music);

    return 0;
}

void Audio::play() {
    MIX_PlayTrack(track, 0);
}

void Audio::pause() {
    MIX_PauseTrack(track);
}

void Audio::resume() {
    MIX_ResumeTrack(track);
}

void Audio::quit() {
    MIX_DestroyTrack(track);
    MIX_DestroyMixer(mixer);
    MIX_Quit();
}