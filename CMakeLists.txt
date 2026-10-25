cmake_minimum_required(VERSION 3.25)

project(game VERSION 0.1 LANGUAGES CXX)

find_package(SDL3 QUIET)

if(NOT SDL3_FOUND)
    message(STATUS "SDL3 not found locally; fetching from GitHub...")
    include(FetchContent)
    FetchContent_Declare(
        SDL3
        GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
        GIT_TAG        main
        GIT_SHALLOW    TRUE
    )
    FetchContent_MakeAvailable(SDL3)
endif()

add_subdirectory(${CMAKE_SOURCE_DIR}/libs/json ${CMAKE_BINARY_DIR}/json)

add_executable(
    main 
    main.cpp 
    helper.cpp 
    player.cpp 
    attacks.cpp 
    collider.cpp
    gameManager.cpp
)

target_compile_features(main PRIVATE cxx_std_20)

target_link_libraries(main PRIVATE 
    SDL3::SDL3
    nlohmann_json::nlohmann_json
)

set_target_properties(main PROPERTIES BUILD_RPATH "$ORIGIN")

add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${CMAKE_CURRENT_SOURCE_DIR}/Assets"
        "$<TARGET_FILE_DIR:main>/Assets"
)

add_custom_target(release_zip
    COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:SDL3::SDL3> ${CMAKE_CURRENT_BINARY_DIR}/libSDL3.so.0
    COMMAND ${CMAKE_COMMAND} -E tar "cf" "Release-V0.1.2-Alpha-linux-x86_64.zip" --format=zip -- main libSDL3.so.0 Assets
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS main
    COMMENT "Creating release zip"
)
