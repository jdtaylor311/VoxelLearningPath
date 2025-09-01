cmake_minimum_required(VERSION 3.20)
project(Move2D LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3 CONFIG REQUIRED COMPONENTS Graphics Window System)

add_executable(Move2D main.cpp)
target_link_libraries(Move2D PRIVATE SFML::Graphics SFML::Window SFML::System)
