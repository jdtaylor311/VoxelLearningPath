cmake_minimum_required(VERSION 3.20)
project(GLWindow3D LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glad CONFIG REQUIRED)

add_executable(GLWindow3D main.cpp)
target_link_libraries(GLWindow3D PRIVATE glfw glm::glm OpenGL::GL glad::glad)
