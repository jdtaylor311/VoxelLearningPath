cmake_minimum_required(VERSION 3.20)
project(HelloConsole LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build a small library from your src files
add_library(hello_utils STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/hello_utils.cpp
)
target_include_directories(hello_utils PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Your console app links the library
add_executable(HelloConsole
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)
target_link_libraries(HelloConsole PRIVATE hello_utils)
