# Tests — TDD Scaffold (Catch2)

This folder gives you a **test runner** and **comment-only skeletons** to help you learn testing without showing solutions.

## How to run
1. From repo root, configure a build:
   ```powershell
   cmake -S . -B build -G "Visual Studio 17 2022" -A x64
   ```
2. Build tests:
   ```powershell
   cmake --build build --config Debug --target voxel_tests
   ```
3. Run tests (via CTest):
   ```powershell
   ctest --test-dir build -C Debug --output-on-failure
   ```

> In Visual Studio 2022, open the folder and build `voxel_tests`. Use the Test Explorer to run tests.

## Philosophy
- Each microproject should extract logic into **functions** that are easy to test.
- UI/graphics code is hard to test directly; test **math** and **pure functions** (e.g., collision checks, indexing, meshing).
