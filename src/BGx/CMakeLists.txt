cmake_minimum_required(VERSION 3.12)

set(PROJECT_NAME LibBGx)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra -g")

set(LIBRARY_SEARCH_PATH
        /usr/lib
        /usr/lib32
        /usr/lib64)

add_subdirectory(utils)

include_directories(
        /usr/include
        ./Box2D)

find_package(OpenGL)
find_package(X11)

set(LIBRARIES
        -lGLEW
        -lSOIL
        -lglfw
        -lGL
        -ldl
        -lX11
        -lXi
        -lXrandr
        -lXxf86vm
        -lXinerama
        -lXcursor
        -lrt
        -lm
        -pthread
        )

set(BGX_HPPEADERS
        Application.hpp
        Application.hpp
        ApplicationAdapter.hpp
        ApplicationListener.hpp
        ApplicationLogger.hpp
        Audio.hpp
        Files.hpp
        Game.hpp
        BGx.hpp
        Graphics.hpp
        Input.hpp
        InputAdapter.hpp
        InputEventQueue.hpp
        InputMultiplexer.hpp
        InputProcessor.hpp
        LifeCycleListener.hpp
        Net.hpp
        Preferences.hpp
        Screen.hpp
        ScreenAdapter.hpp
        Version.hpp
        )

set(BGX_SOURCES
        Application.cpp
        Application.cpp
        ApplicationAdapter.cpp
        ApplicationListener.cpp
        ApplicationLogger.cpp
        Audio.cpp
        Files.cpp
        Game.cpp
        BGx.cpp
        Graphics.cpp
        Input.cpp
        InputAdapter.cpp
        InputEventQueue.cpp
        InputMultiplexer.cpp
        InputProcessor.cpp
        LifeCycleListener.cpp
        Net.cpp
        Preferences.cpp
        Screen.cpp
        ScreenAdapter.cpp
        Version.cpp
        )

set(LibBGxSrc
        ${BGX_HPPEADERS}
        ${BGX_SOURCES}
        )

add_library(${PROJECT_NAME} ${LibBGxSrc} )