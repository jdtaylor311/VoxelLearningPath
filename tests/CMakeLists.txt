cmake_minimum_required(VERSION 3.20)
project(VoxelLearningPathTests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# Catch2 from vcpkg (manifest mode)
find_package(Catch2 3 CONFIG REQUIRED)

# Grab all tests in this folder
file(GLOB TEST_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(voxel_tests ${TEST_SOURCES})

# Link Catch2 main + your hello utils library
target_link_libraries(voxel_tests PRIVATE Catch2::Catch2WithMain hello_utils)

# Tests need to see hello_utils headers
target_include_directories(voxel_tests PRIVATE
    ${CMAKE_SOURCE_DIR}/00_ConsoleHelloWorld/include
)

include(CTest)
include(Catch)
catch_discover_tests(voxel_tests)
