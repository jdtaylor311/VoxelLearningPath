# Builds and runs tests via CTest
Param(
  [string]$Config = "Debug"
)
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config $Config --target voxel_tests
ctest --test-dir build -C $Config --output-on-failure
