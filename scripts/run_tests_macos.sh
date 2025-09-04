#!/usr/bin/env bash
set -euo pipefail
# run_tests_macos.sh - configure, build, and run Catch2 tests on macOS

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"
pushd "${REPO_ROOT}" >/dev/null

VCPKG_ROOT="${VCPKG_ROOT:-$HOME/vcpkg}"
ARCH="$(uname -m)"
if [[ "${ARCH}" == "arm64" ]]; then TRIPLET="arm64-osx"; else TRIPLET="x64-osx"; fi

TOOLCHAIN_ARG=""
if [[ -x "${VCPKG_ROOT}/vcpkg" ]]; then
  TOOLCHAIN_ARG="-DCMAKE_TOOLCHAIN_FILE=${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake -DVCPKG_TARGET_TRIPLET=${TRIPLET}"
fi

cmake -S . -B build ${TOOLCHAIN_ARG}
cmake --build build --config Debug --target voxel_tests
ctest --test-dir build -C Debug --output-on-failure

popd >/dev/null
