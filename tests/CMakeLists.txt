cmake_minimum_required(VERSION 3.20)
project(VoxelLearningPathTests LANGUAGES CXX)
enable_testing()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Catch2 from vcpkg
find_package(Catch2 3 REQUIRED)

# Gather all test sources in this folder
file(GLOB TEST_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(voxel_tests ${TEST_SOURCES})
target_link_libraries(voxel_tests PRIVATE Catch2::Catch2WithMain)

# Register with CTest
include(CTest)
include(Catch)
catch_discover_tests(voxel_tests)
