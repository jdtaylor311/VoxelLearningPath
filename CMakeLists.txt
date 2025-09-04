cmake_minimum_required(VERSION 3.20)
project(VoxelLearningPath LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build only the HelloWorld app and the tests
add_subdirectory(00_ConsoleHelloWorld)
add_subdirectory(tests)
