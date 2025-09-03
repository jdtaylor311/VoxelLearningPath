cmake_minimum_required(VERSION 3.20)
project(HelloConsole LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SRC_FILES CMAKE_CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
ADD_LIBRARY(hello_utils ${SRC_FILES})

target_include_directories(hello_utils PUBLIC include)

add_executable(HelloConsole main.cpp "src/hello_utils.cpp")

target_link_libraries(HelloConsole PRIVATE hello_utils)
