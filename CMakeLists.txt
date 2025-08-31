cmake_minimum_required(VERSION 3.20)
project(VoxelLearningPath NONE)

# This repo is a **learning scaffold**. Each folder is a standalone microproject.
# Create your own CMakeLists.txt inside a microproject when you're ready to build it.
# Example (inside 03_DrawWindow2D_SFML):
#
#   cmake_minimum_required(VERSION 3.20)
#   project(Draw2D LANGUAGES CXX)
#   set(CMAKE_CXX_STANDARD 20)
#   find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
#   add_executable(Draw2D main.cpp)
#   target_link_libraries(Draw2D PRIVATE sfml-graphics sfml-window sfml-system)
#
# Tip: Open just the microproject folder in VS Code or add_subdirectory() from here once you have code.
#
# add_subdirectory(03_DrawWindow2D_SFML)   # ← uncomment after you add a CMakeLists.txt there

# --- Tests --------------------------------------------------------------
# To enable the test scaffold, configure and build the 'tests' subdir:
#   cmake -S . -B build -G "Visual Studio 17 2022" -A x64
#   cmake --build build --config Debug --target voxel_tests
#   ctest --test-dir build -C Debug --output-on-failure
#
add_subdirectory(tests)
