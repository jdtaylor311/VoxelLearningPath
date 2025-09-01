cmake_minimum_required(VERSION 3.20)
project(FirstCube LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glad CONFIG REQUIRED)

add_executable(FirstCube main.cpp)
target_link_libraries(FirstCube PRIVATE glfw glm::glm OpenGL::GL glad::glad)
