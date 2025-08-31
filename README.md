# VoxelLearningPath — Microprojects to Learn C++ → Graphics → Voxels (with Tests)

**No solutions provided.** Each folder is a tiny project with tasks in comments.
Start at `00_ConsoleHelloWorld` and go in order. Commit after each checkpoint.

## Tools (Windows + Visual Studio 2022)
- CMake (VS2022 has it)
- vcpkg (deps manager)
- Libraries you’ll use as you progress (installed by `scripts/setup.ps1`):
  - 2D: SFML
  - 3D: GLFW, GLAD (OpenGL loader), GLM (math), stb (images), fastnoise2 (noise)
  - Tests: Catch2

> OpenGL is chosen to teach portable 3D fundamentals. You can switch to Direct3D later.

## How to Use
1) Run `scripts/setup.ps1` to install libraries and **initialize git**.
2) Open this folder in **Visual Studio 2022** (Open → Folder).
3) Work inside one microproject at a time. Each has a `main.cpp` with tasks.
4) When you finish a microproject, **write your own code** in that folder and commit.
5) For testable logic, add functions and write tests in `tests/` (files are provided as comment-only skeletons).

## Tips
- Keep it tiny. If you get stuck for 20+ minutes, reduce scope.
- Make “checkpoint” commits when you hit a task’s acceptance criteria.
- Add a `NOTES.md` per folder to journal what you learned.
- If a concept feels murky, add a tiny console-only spike to test it, then return.
