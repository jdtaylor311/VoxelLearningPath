cmake_minimum_required(VERSION 3.20)
project(Physics2D LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3 CONFIG REQUIRED COMPONENTS Graphics Window System)

add_executable(Physics2D main.cpp)
target_link_libraries(Physics2D PRIVATE sfml-graphics sfml-window sfml-system)
target_link_libraries(Physics2D PRIVATE SFML::Graphics SFML::Window SFML::System)
