cmake_minimum_required(VERSION 4.4)

project(game VERSION 0.1 LANGUAGES CXX)

find_package(SDL3 REQUIRED)

add_executable(
    main 
    main.cpp 
    helper.cpp 
    player.cpp 
    attacks.cpp 
    collider.cpp
)

target_compile_features(main PRIVATE cxx_std_20)

target_link_libraries(main PRIVATE 
    SDL3::SDL3
)