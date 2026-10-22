# Rhythm boss-dodge game

A 2D rhythm survival game for PC, currently in development.

## About

You control a small character in a single-screen arena while a boss attacks you in patterns synchronized to a song. The attack patterns are timed to the audio itself, so the structure of each pattern follows the structure of the music.

## Gameplay

- Move in 8 directions to dodge incoming patterns
- Dash to pass through hazards. You are invincible while dashing

## Build and Run
The Release build is Linux ONLY, Windows and MacOS users please run the following commands:

```bash
git clone https://github.com/justinnova0915/terra.git
cd terra
cmake -B build -S .
cmake --build build
./build/main        # Linux / macOS
.\build\Debug\main  # Windows
```

## Controls

| Input | Action |
|---|---|
| WASD | Move |
| Space | Dash |

## Status

In development for Hack Club Terra, October 2026 – January 2027.