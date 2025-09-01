cmake_minimum_required(VERSION 3.20)
project(Draw2D LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3 CONFIG REQUIRED COMPONENTS Graphics Window System)

add_executable(Draw2D main.cpp)
target_link_libraries(Draw2D PRIVATE SFML::Graphics SFML::Window SFML::System)
