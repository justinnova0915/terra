#pragma once

#include <SDL3_mixer/SDL_mixer.h>
#include <string>

struct Audio {

    MIX_Mixer *mixer = nullptr;
    MIX_Track *track = nullptr;


    bool init() {
        if (!SDL_Init(SDL_INIT_AUDIO)) {
            SDL_Log("SDL Error: %s", SDL_GetError());
            return 1;
        }

        if (!MIX_Init()) {
            SDL_Log("SDL Error: %s", SDL_GetError());
            return 1;
        }

        MIX_Mixer *mixer = MIX_CreateMixerDevice(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, NULL);
        MIX_Track *track = MIX_CreateTrack(mixer);

        return 0;
    }

    bool load_song(std::string path) {
        MIX_Audio* music = MIX_LoadAudio(mixer, path.c_str(), false);
        if (!music) {
            return 1;
        } 

        MIX_SetTrackAudio(track, music);

        return 0;
    }

    void play() {
        MIX_PlayTrack(track, 0);
    }

    void pause() {
        MIX_PauseTrack(track);
    }

    void resume() {
        MIX_ResumeTrack(track);
    }
};