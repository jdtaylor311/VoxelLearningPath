#!/usr/bin/env bash
set -euo pipefail
# setup_macos.sh - bootstrap vcpkg (manifest mode) and optionally init git

VCPKG_ROOT="${HOME}/vcpkg"
NO_GIT=0

while [[ $# -gt 0 ]]; do
  case "$1" in
    --vcpkg-root) VCPKG_ROOT="$2"; shift 2;;
    --no-git) NO_GIT=1; shift;;
    *) echo "Unknown arg: $1"; exit 1;;
  esac
done

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"
pushd "${REPO_ROOT}" >/dev/null

need() { command -v "$1" >/dev/null 2>&1 || { echo "Missing required tool: $1"; exit 1; }; }
need git
if ! xcode-select -p >/dev/null 2>&1; then
  echo "Installing Xcode Command Line Tools (one-time)..."
  xcode-select --install || true
  echo "Re-run after CLT install completes."; exit 1
fi
if ! command -v cmake >/dev/null 2>&1; then
  echo "Tip: install CMake via Homebrew:  brew install cmake"
fi

if [[ -d "${VCPKG_ROOT}" ]]; then
  echo "vcpkg found at ${VCPKG_ROOT}"
else
  echo "Cloning vcpkg to ${VCPKG_ROOT} ..."
  git clone https://github.com/microsoft/vcpkg "${VCPKG_ROOT}"
  bash "${VCPKG_ROOT}/bootstrap-vcpkg.sh"
fi

ARCH="$(uname -m)"
if [[ "${ARCH}" == "arm64" ]]; then TRIPLET="arm64-osx"; else TRIPLET="x64-osx"; fi

echo "Installing manifest dependencies (${TRIPLET}) ..."
"${VCPKG_ROOT}/vcpkg" install --triplet "${TRIPLET}" --clean-after-build --x-manifest-root "${REPO_ROOT}"
"${VCPKG_ROOT}/vcpkg" integrate install || true

if [[ "${NO_GIT}" -eq 0 ]]; then
  if [[ ! -d ".git" ]]; then
    git init && git add . && git commit -m "Initialize VoxelLearningPath (macOS setup)"
  else
    echo "Git repo already initialized."
  fi
fi

echo
echo "Configure & build (example):"
echo "  cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=\"${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake\" -DVCPKG_TARGET_TRIPLET=${TRIPLET}"
echo "  cmake --build build --config Debug"
echo
echo "Done."
popd >/dev/null
